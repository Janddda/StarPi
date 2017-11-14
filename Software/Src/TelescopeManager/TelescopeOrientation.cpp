/*
A module to handle the actual orientation of an alt-azimuth mount telescope

Author and copyright of this file:
Chris Dick, 2015

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "TelescopeOrientation.h"
#include "HalMagnetometer.h"
#include "HalAccelerometer.h"
#include "Config.h"
#include <math.h>
#if ( defined CALIBRATE_MAG_DEBUG) || ( defined CALIBRATE_ACC_DEBUG )
#include <stdio.h>
#endif

TelescopeOrientation TelescopeOrientation::Orient;

/* TelescopeOrientation
 *  Constructor
 */
TelescopeOrientation::TelescopeOrientation( void )
{
}

/* initialise the sensors used
 */
bool TelescopeOrientation::TelescopeOrientationInit( void )
{
    HalAccelerometer::Accelerometer.HalAccelerometerInit();
    HalMagnetometer::Magneto.HalMagnetometerInit();
    MxMax = 0.0f;
    MxMin = 0.0f;
    MyMax = 0.0f;
    MyMin = 0.0f;
    MzMax = 0.0f;
    MzMin = 0.0f;
    AxMax = 0.0f;
    AxMin = 0.0f;
    AyMax = 0.0f;
    AyMin = 0.0f;
    AzMax = 0.0f;
    AzMin = 0.0f;

    return true;
}


/* TelescopeOrientationRun
 *  Runs the Accelerometer and the Magnetometer.
 */
void TelescopeOrientation::Run( void )
{
    HalMagnetometer::Magneto.Run();
    HalAccelerometer::Accelerometer.Run();
}

/*
 *
 */
void TelescopeOrientation::GetOrientation( float* Pitch, float* Roll, float* Heading )
{
    /* raw magneto values */
    float Mx = 0.0f;
    float My = 0.0f;
    float Mz = 0.0f;
    /* Raw Accel values */
    float Ax = 0.0f;
    float Ay = 0.0f;
    float Az = 0.0f;
    /* magneto values with offset */
    float Mxo = 0.0f;
    float Myo = 0.0f;
    float Mzo = 0.0f;
    /* Accel values with offset */
    float Axo = 0.0f;
    float Ayo = 0.0f;
    float Azo = 0.0f;
    /* Calculation variables */
    float CosRoll = 0.0f;
    float SinRoll = 0.0f;
    float CosPitch = 0.0f;
    float SinPitch = 0.0f;
    float XComponent = 0.0f;
    float YComponent = 0.0f;
    
    /*
        get filtered sensor data
    */
    HalAccelerometer::Accelerometer.HalAccelerometerGetAll( &Ax, &Ay, &Az );
    HalMagnetometer::Magneto.HalMagnetometerGetAll( &Mx, &My, &Mz );

#ifdef CALIBRATE_MAG_DEBUG
    /*
       keep track of the Magnetometer calibration values
    */

    if (Mx > MxMax)
    {
        MxMax = Mx;
    }
    if (Mx < MxMin)
    {
        MxMin = Mx;
    }
    if (My > MyMax)
    {
        MyMax = My;
    }
    if (My < MyMin)
    {
        MyMin = My;
    }
    if (Mz > MzMax)
    {
        MzMax = Mz;
    }
    if (Mz < MzMin)
    {
        MzMin = Mz;
    }
    printf ("Mx: %f My:%f Mz:%f MxMax: %f MxMin: %f  MyMax: %f  MyMin: %f  MzMax: %f  MzMin: %f  \n\r", Mx, My, Mz, MxMax, MxMin, MyMax, MyMin, MzMax, MzMin ); // debug
#endif
#ifdef CALIBRATE_ACC_DEBUG
    /*
       keep track of the Accelerometer calibration values
    */

    if (Ax > AxMax)
    {
        AxMax = Ax;
    }
    if (Ax < AxMin)
    {
        AxMin = Ax;
    }
    if (Ay > AyMax)
    {
        AyMax = Ay;
    }
    if (Ay < AyMin)
    {
        AyMin = Ay;
    }
    if (Az > AzMax)
    {
        AzMax = Az;
    }
    if (Az < AzMin)
    {
        AzMin = Az;
    }
    printf ("Ax: %f Ay:%f Az:%f AxMax: %f AxMin: %f  AyMax: %f  AyMin: %f  AzMax: %f  AzMin: %f  \n\r", Ax, Ay, Az, AxMax, AxMin, AyMax, AyMin, AzMax, AzMin ); // debug
#endif
    
    /*
        remove Hard Iron effects
    */
    Mxo = Mx - CONFIG_MX_OFFSET;
    Myo = My - CONFIG_MY_OFFSET;
    Mzo = Mz - CONFIG_MZ_OFFSET;
    
    /*
        Normalise
    */
    Mxo = Mxo / (CONFIG_MXMAX - CONFIG_MX_OFFSET);
    Myo = Myo / (CONFIG_MYMAX - CONFIG_MY_OFFSET);
    Mzo = Mzo / (CONFIG_MZMAX - CONFIG_MZ_OFFSET);
#ifdef CALC_DEBUG
    printf ("Mxo: %f Myo: %f Mzo: %f ", Mxo, Myo, Mzo ); // debug
#endif
    
    Axo = Ax / (CONFIG_AXMAX - CONFIG_AX_OFFSET);
    Ayo = Ay / (CONFIG_AYMAX - CONFIG_AY_OFFSET);
    Azo = Az / (CONFIG_AZMAX - CONFIG_AZ_OFFSET);
#ifdef CALC_DEBUG
    printf ("Axo: %f Ayo: %f Azo: %f ", Axo, Ayo, Azo ); // debug
#endif

    /*
        Calculate Pitch
    */
    *Pitch = asin ( Axo / ( sqrt( (Axo*Axo) + (Ayo*Ayo) + ( Azo*Azo) ) ) );
    CosPitch = cos(*Pitch);
    SinPitch = sin(*Pitch);
    
    /*
        Calculate Roll
    */
    *Roll = atan2( Ayo, Azo );
    CosRoll = cos(*Roll);
    SinRoll = sin(*Roll);
    
    /*
        Calculate X and Y components then heading
    */
    XComponent = ( Mxo * CosPitch ) + ( Myo * SinRoll * SinPitch ) + ( Mzo * CosRoll * SinPitch );
    YComponent = ( Mzo * SinRoll ) - ( Myo * CosRoll );
    *Heading = atan2( YComponent , XComponent ); 

    if (*Heading > (2*M_PI)) 
    {
        *Heading -= (2*M_PI);
    }
    if (*Heading < 0) 
    {
        *Heading += (2*M_PI);
    }
    /*
        set values in manager
    */
    
#ifdef CALC_DEBUG
    printf ("heading %f ", *Heading);
    printf ("roll %f ", *Roll);
    printf ("pitch %f\n\r", *Pitch);
#endif
}

