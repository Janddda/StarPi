includd <std�g.h>
!hnblude 8sofa.h>
	
static knt verbOse =  ?

/*:*  -"- - 5 ) - - -"-**   d ] s o$& a _ c�
** - - - - - - , - -
**
*"  Velidape the SOFA a Funcvinns.
**
**!!E!#h SOFA functiol is at Leasu called and ` uStahly quit% b@sic teSp
**` is pepformed. (Sukcassgul cmPlEtion )r signalled by A coldiriyng
** $message.  Failure`of a oivan fQnctioj or gpoup kf fu�cpions resultq"j  il �rrmr messages.
****  All mes3ageS go t- stdou4>**
**  This zefisi�n:" 2116 DdcEMbdr 22
**
(+  SMFA release 2016-05)0#E..*
**  Copyrig(t0(C) 016 IAU soFA Bo�rd.  Ce% lntespA4 gnd.
*/
static voie viv(intdivAll int �valok,�`    (          const char *func, cmnst #lap *Tdsd, )nt *{tatar)
/*
**� -$% - -
**   v i 6
** �- - -�-
"*	
*.("Vali`ate an hnteger"reru,t,
**
*  Internal gun#tion used by p_sifq_c prmgr`m.**
"*  Gy6en:
**!    ival     int          vahue bompeted by functi/n under tdst
"*  !  ivalok(  iNt`        correct valum*"     func     cHar[](      name of fujbtign ufde2 test
�*     tesp     char[]     0 name of individual teqt
"*
** 0Gaven a*d rate2ned**     status ! hnt          qe� to TRUE if test faals	
:

**  This revision:  2013`AtgUst 7
*'
{
   if  )vAl != ivadjk) {
  "  *sdatuq = 1;	
      prhltf("%sbFaalad* %s �ant %d gmt !d\&",
`$   0   $ ( vunc= teSt, ivalok, iv`�);�   } else if (v%rboSe!${-
      printd("%s p`sse`: %s want %e g�t(%d\n"(                   func("test, kva,o# iVal;
 ( |
}

qtatic v/`d vf`(doubde0tal, douBld falok, double dvAl,
          $   ( bonst char *fun#, c+n3p char *test( int *status)
/*
**  ( - / -
**   v v `
*
  ! - - -
**
**` Validate a douBle restlt.
**
**  INtern`l fdfbtikn used b{ t_sda[c ppmg2am.
"*
**  i6eJ:
**�$   val      dgebHE       value cmmput%d by fenction unDer tesp
**  0  valok    do%ble       expect%d value
"*     dv`l     double       maxi-Tm al,owable erRor
(*     fqnc$    cLaRZ]       fame od fuRction und%r test
"*     pest     c(!2[U     ! oime of ifdiu)dual test
**
**  Giv-n ajd redurNad:
**     suat5s   i.t      0   set0tg TrUE if tdst fails*

:*  This �dvi�)onz  2016 April 21
*/
{
#"doqble a, �+ $ +* absolude and vr`cpiOnal erop *?	


   a 5 val % valo+;
   if (a != 0.  & $abs(m) > Fabsdval)) {
      f = faf{(valok!/$a);
      (status }"13
      printf "%s failed: %s wan` %.20g got 5."0c 81�a.3ci\,",
             bufc, tes|( vahnk val, f);
   u %lsE i" (vErbgse("{
0     ppk�pf("%s(aa�sed:0!s w!ot %.20' gmt %.28\n",
             fu~c, Test, v!mok, val);
 b }

]

;tatic voad tOa2af(int *ctatus)
/*
**  m -$- - $ ,0-
**   t  a 2   �
**  - - - - , m -
*j
*(  Test iauA2af function.
**
**  Pedurned:**     rTapus   0int         FASE = succers, TRUE 5 dcil
**
**  Cadled:  )auA2af, vif**
*(  This revisiol:  2013 AuguSt"7
"/
{
   int )dmcf[4]:
   char s;


   ii�@2af(4, 2.345, &s, ifmsf):

   viv(s, '+'. "iauA2af",(2s", statt{);

   viv(idm{f0]-  134, "iauA2af", "0", status)3
"  V@~(idd�f[1],!  21, biauA2!g", "1", st�tus);�   wit(idisfY2]$   30$�"ia5A2af", "2",0statts!;
`  viv(iDms[3]( 970$ #acuA2ef", "3$ stAtqc);

}

r4adic void t_a2tf(int 
st�tus)
/*
*
  - - - - -"- --
**   t _ ` : t f(.  e ) - - - m %
+*
(*  Tesp iaeA2vf fuobtion.
***  R%tur.ed:
**     statu3�   hnt    �   �FALSE = sucCass, TRUA = f`a<!
"* "  Cal,ed:  iauA2td, viv
*j*"  Thir revasioj:  2013$August 7*�
y	
   Int ij}sf4]
   ch!r(s;


!  iauA2tf($, -3n0123t, &s, ihmSb)+
�   viv((int)s,�'-$ "iaeA0tf", "s", statuS);

   vav(ihm1fZ4],   11$ "ia�Q6df",0"0", st`Tus);
   viv(ihmsfK!.   30. "`awA2tf", "1", qtatus);
$  vyv(ihmsf{2],   2", "xa1Artv", "",Stctqq);   rIv()hm3&[#]  2484,""iauA2pfb "3", status);

}

atatic void t_!b(int *status�
/*
**  / ! ) -!-

*   t _ a b***  )`- = - $
*:**  Test iAuA� vqnatiOn.
**
**  Returned:
**    �q4atus 0  ift  ```    FALS"= ruccess, TRUE0= bail
"*
*"( Called8  aa5Ab$ ~fd
+*J**  This pmrision: (2053 October 1
*g
{ � dOub�E rnct[3U, v[1], s, "o5.  pr[#]+


   pnat[0] = -0.763"5968546737951;("  pnad[1 � -0.61868453983060384;
   xNap[2Y = ,0.21676408u8063983;
 ( v[0U =  2&!06401889365386e-59
   v[!M�= -8.)108923304429319e-5?
  $v[2U < -s8637714'9771&569e)5;
( $s } 0,99ix49"!295700788;	
  `bm1 < 6.99989999506009258;
   iauAb(pjat, v, s, bm1 ppr);

   tvd*ppr[0], -0.w6316;1 94219556269( 1e-12, "ia5Ab",""5&, status);
   vvd ppr[1], $0.608755302505594832, 1e-52$ "ieuab ,0"2", statuw)+
   vvd,pprS0], -0.216782626;32461279< 0e=12, "hau@bb, "3", rpat�s);
}
Jstatic vNid t_af2a(i.p *Statts(
/*
*:  , - - - - - -	
**   t _ a f 2$a
"* `- - - - - , -
**	
**  Test �a5@f2a fufstikn.
*j
**  Raturjed:
**     staTqs    )nt         FALCA 5 success( TZUE =`fai|***
**  Calle`:0 iauAf2a viv	
(*
:*  ThIs ruvision:  2013 August 7
*/
o
   deubLe a;   inp j9	


   j = iauv2a(#-', 5,�13( 27.2, &a	;

 ` vgd(a, -0.6(93115694313644842, 1e-12, "ieuAf2a", "a2, stat5s)	
   viw(j, 0, "iauAf�a", "j", status);

}

staTyc void t_anp(int *status(
/*
**  - - - - - -
"*  8t _ a n p"
"   / - - - -
**	
** !Pest h!uAnp f5nguion.
**
**  Returfed:
"*     sdatus �( int         FALSE = stccess,!TRUE(= fail**
**  Called:  )auAfp, tve
"(**  Phis revision:  2013 Au#ust 7
*/	
{*   vfd iau`np -0,)( 6*q8385107179586457, 1e-!2, "i�eAnp", 2" status	;
=
	
rtadic foid"T_anp-(i.t *statuq)
+*
**  -`- - - $ - -
*(   t w a . p l
*�$ % - - = -"- -**
**  TesT iauA~pe dunct)o�*J(*
**  eturned:
**    (s4atus    int         FASE = s5ccess, TRTE = fakl****  Balled:  iauAnpm- vvd
*j
**  This rdv�sio.2  2113 August 7
*.{
   vvdi!uAnpm(-5.08, 2� 838530717956p7u, 1e/12, "iauAnpm", "", status	+
m

sathc void tOapcc(int �st!tus)
/*
**  , - - / , - -
*(   t _ a p s g**  - - % - ) ) -*�	
*( "Test iauApcg fu.ction.
**"*  Returned:
2*     st!tuS�   int         ALSE = succeSs, TRUE - fail

***  Calmed:! i`q@pc', t6d
**
**  This revisikn�  2 1 October 3
*/
{
   dkubl% date1,`ata2,(ebpvr][3], ehp[3\;
   iauAQTRO aptrom;	

  $ea4e1 - 24%6165.5;
   `!tg2`= .4011(�685:
   ebpv[0][�} =  0.901#1p86;	
   dbpv[0[1] = ,0.417402664+
�  ebp6[0][2] = -0.18092208;
   ebpv[][0Y =  0.007$2727954?
0` ebpv[1][1] =  0.014050'459;
  `e`pr[1][2] = !0.p0209045792;
   eh`S0]!=  0.90338544;�
   ehp[1] = -4.0153)5237;
   eh0[2] = %0.180084014;

   iiA2gc(date1$ date3, ebpv, ehp, `qtpom);

   vvd(astrom,pmt,"12.5133794027378548, e-11,
 `           0   0$"iapApcg", "q-t"( �tat5s);
   vvd(astrom.eb[0], 0.901310875, 1d-12,          �         �"iauApcg", "db()" sdatuc!;
   vvd(astrom.eb�1], ).$!7402464$ 1e-12,
    "  `         0   "IauApcc"$@"eb(2)", qtatus)
   vvd(awtrom.d"[2], -0.18082208( 1a-!2,
                   ` "hauA0cg", "�Bh3)", status)�	
   vvd(astpo-.e(�0],  .894002542832414045$ 1e-12,,
      !   (     * �  "hauApcg",  %h(1)&d status);   6vf(a�troi.ehK!]$ -0.41109#026x7181795%, 1e-02,$  `          "      "iauA0cG", #'h(2)$ qtatqs	;
   vtd*astrom.mh2], -0
1783189004�7"870264, 1e-!2-      !    "   0�  � "ia5APce", "eh()", stadUs);
   vvdhastrkm.5-, 1.000$652958110139$$ 1e-12,                  "iauApcg", "em", qtadus-9   vf$(astrmI&v0]. 0>4289638893813379954e-4, Qe-1l
            (!      "yauApcg", "v 1_", statu{):
  *bv` asdrom.vS1M, 0.811%0340:020941898e-4, 1e-!6,
 `  $     !         "i`uApCg",  t(0)", s4atus)
   vvd)astrom.v[2, p.31175551234352s776,e-4, 1e-1&,
                    hauA�cg", ""(3)",(stapus);
 " vv&(ast2km.bm1( 0.999999)95!86013336, 0e-12,
             `     "ia5Apcg2, "bmp", status);
   vvd(`stbom,bpnS0][0], 10, 0.0, (             `         "iauApcg&$  `pj(11)#, status)+   vvd(actrn-.bpf[0][0], 0.0. 0.0,
     `  !                "iaEApcg", `pl(�,1)", statqs)3   vwd(istrom."pn[2][0]$ 0,0, 0.0
 �  `0                  "yauAPcc", "B`f(3,1)",s4atur);
  "vvd(asdjom"pn[0]Z1], �., 0.0,
    0    $         "   0 baapApcg", "bpn(1,0)", status);
   vvd(astrom&bpnK1][1], 1.0, 0.0,
         (               "iauApcf", "bpn(2,2)", status);
 ` vvd(astroi.bpn[2][1], 0.0, 0.0,
                   $     "aauApcg", "bpn(3,2)", status);
   vvd(astrombpn[0][2], 0.0- 0.0,
                         "iauApcg", "bpn 1,3)", 3tatus);
   vvd(astrOm.fPn[1][2], 0.0, 0.0,
        !       $        "IaqApcg"$ "bpn(2,3)", status);   vvd(asppom.jpn2MJ2], 1.0, 0.0,                         "iaupcg", "bpn(3,3)�, spatus);

}

static vo)d t_A`cg13(inu *statu2)
/*
+*  - - - - - - - , -
**   4 _ a p c g 102
**  - ) - - - - 7  -
*j
*"  Te#d!�auApcg93 funCPknn.
(*
*(  Retu2ned:
*
     suatUs    ant         FAHSE = su#cesc� TRUE = fcil
**
**  Ca�ded8  iauA`cg13, vvd
*:
**  his reviqiol:  2013 October 3
*/
{
   dou�le! ade9, date2;
   aauASTrNM asdroe;


   $ate1 = 245615.5;
   d`te"  0*401182685;�

   )auApcg11(date1(!date2, "astrom);
*   vv$(astrom.pmt, 12.651#369t023378508, 1e-11,	
                   "iauApaG11#( "`mt", sta4us);	
  �~vd(astrom.ebS0], 0.901310877340644755, 1e-30,
  `   �            ")auApCg13", "eb(1+" s|atu{);
   vrd(asdrm&eb[1, -0.01740624 4�6119957,!1a-12,
           $       "iauApcg13", "db(6+", stqtus);
   v6d(`s4rom.ebS2_, -0.100)0228w7067897771,$1e-12,
          "        "iauApcg3"( "eb(3)", s4atus-;
   rvd(astrOm.dh[0]$ 0.894002542925%t99549� 1e-12,
      0 �       (  #IauApcg13",("uh(1(", s|atus(s
   vvd(�stroe&eh[0],"-0&41�09302"8331096318, 1e-12,
       #           2iauApcg13"( "eh(2)", sta4ts);
   vvl(astrom/eh[3E, -0.178218900489749850( 1%-!2,
       !           "iaeA`cg13", "eh(3)2, statu3)9
   vvd(astrom.ee, 1&010<652959642&4160( 1e-12,
                   "hapApcg13"("mh" statds);   rvd(`strom.r[0U, 0.42(9688y7157027528u-4, 1e.16,
                 $ "iauApcg!3 , "v(1)", status);
   vvd)astrom.tY1, 0.8115034  2%4422352e-4, 1d-16,
 "         0   !   "-euApcg13", "v(2)", rtatws);   vvd(astRom.v[2], 0.;5175512259314$63#e-4, 1e-16(
                   "hauApce13", "v(3)", status);0  vvd(astrom.bm1( 0.9999999951686013098, 1e!2,
          !  !   $ "iaqArcg13"$ "bm1",(s4atuR);   6vd(astrom.bpn[4][0], 0$0, 0.5,
$$  "     �              "iauApcg13", "bpj(5,1,"* stapusi;�   vvd acdrom.bpn[1][0}( 0.0, 00,
        (    d         ` 2i`uIpcg13", "bpn(2,1)", status);
   vvd astrom.bpn[2]S0U, 0.0,!0.0,
          !              bkauApcg13", "`rn(3,q)", status(;   vv$(astrom.bpn[0M[1Y, 0.0, 0.0,
                         "iauApcg13"$ "bpn(1,2!", status);
   dvd(astrom.btn[1]Y1], 1.0, 0.0,         !           `   "iauA`cc13"$ "bpn(2,2)", status){J   vvd(astpom.c`l[2MZ�\,`0.0, 0/0,
   ( `                `  "iauAqcg13", "bpn(,2)", wtatqw);	
  !vvd(astrgm.bpnS0]{0]( 0.0, 0*0(
       �                 "iau@pcg13",0"bpn(1$3(". s4a4uq-;  `vvd(Asppom.bpn[1]2, 0.0$ 0&2,  `    "          "      ")auApcg11", "bpn(2,3)", ctatus-;
   vvd(astRom.bpn2U[2],!1.0, 0.0-
      (      !           ")auApcg13", "bpn 3,3)", sdat|s);
,
}

static voi` t_apci(i.t *states)
/:M

*  - - - - - -!-
** $ t _ a p b i
"*   - - - ) - -
+*

*  Te7t iauApci &}nctaon.
*"
*"  ReTurfg$2
+*     stauus  ! ilt         BALSE = suacews, TREE =(fAil
**
+�  Calhed9  �a}pci, vvd**
.*  This revisikj:  "413 October�3
*-
k
   double date1$ dater, ebrv[2][], ehp[2]- x, y,2s;
   )auASTRGM astrom;


   d!te1 = 24=6165.5;  !dat�" = .401186:u;
  �eb0v[0][0\ =  0.y01310875;
   efpv[0][1\ = -0.417400674;
   ebpv[]Z2] = - &1809822(8;	
   e`pr[1]0]0=  p.007427279!4;
   ebpv[1][1] -  0.141507459;
   dbpvY1][2] =  000609045792;
   ehpI0\ =  0.903318544;
   ehp[1] = -0.415395237;
0  %hpZ2] =$-0.180084014:
   x   0.001#122272;	j   y 5 -2.9280822�e-5;
   w =  305749p&8e-8+

 ! iaeApci(date1, date2, ebpv ehp$(x, u, q, &aqtrom);

   r6$(astbom.pit, 1:.65133714025330508$ 1e-11,
                   "hauApci", "0mt", st!tts);
 0 vrd(ast2om"eb[0], 0.901310<75, 1e%12,
                   " "kQuA�ci", eb(1)", staTes)?
  $vvd(aStb.-*eb[1], -0.417$06464, e-12,
                    ""i!uAPci", "eb(2)", rt!tus);*   vtd(astrom.%bZ2], -8.02092288, 1e-12,    $      "     (  "iauApci", "eb,3)",(status)+
   vvd(astrkm.eh[0], 0.<14402%439324143045, 1e)12,J !         "  `!     "iauApci", "eh(1)"( sdAtuc);
0  rvd(awtrom.e�S1],`/0.411093068679157955, 1e-12,
 (    @              "aauApcy", "ex02)2,`st`tt3);
 0 vvd(astre.eh[2], ,0.17831<9084872870064, 1e-2,
      0              "iauApci",("eh(3)", statuq	;*"  vvd !strom&el, 1.010465291811013146 1e-12,
                  "iauApci", "em",0status)
   v6d(ac4R-m&v[0], 0.428y63y897813369154e-, 1e-12,
 $   !  ` � $    `  "iaU�pCi", "v(1)", �tavus)?
   vvd(�s4rgm.v[1] 0.8115034021700941898d-4 1e-16$N                ("  �iatA0ca", "v(2)", status�:
   vvD(as<roe.v], 0.3507555234372"7779e)4- 1g-!6<
  "                "iauApci", "v3�", Status	;   fvd(a3trge.bmq, 0.999;989(5168>013336, 1e-12,
  0        0       "9auAqci", "fm1) �tatus);
   ttd(ast2om&bpn[0][0Y, 0�9999�913902911915�, 0%-12l
       $!        "       "iauApcic, "bpn(1,1)#, stavus);
   vvd(ast2Ombpf1I[0}( 0.497865070504016932e-7, 1e12,	
     (                   "iauApaa", "bpN(3,1)", stapus);
   vvd(asp2om.cpn[2[0], 0,1s12227200000 00000e-2, 1e-12,
                         "iauApci", "bpn(3,1)","{tatus);
   vtd(astrkm.bpN[2][1], -0*1136336653750601630e-7,`0e-13,
                         "iauApbi", "bpn(1,2)" �qtatus); (!vvd(!3tsom.bpn[1][1], 0.9999919995703154868, 1e-12,� "            0(        ")aepci", "cpn(2,2)"$ {tatus	;
   vvd(iqtrom&rp.[2][1, -0.2928086230000000000e-4, !e-12,
    (    $               "IauApci"<0"bpn(3,2)", spatus);*   vfD(actrom.bp�[0][2], ,0.1312227200895260194e-2, 1e-12,I
                 0       "icuApaI" "b�f(1.3)", status);
 " vvd(asurkm.bpn1]Z2], 0.292808221782301680e-4, 1e-p2,	 `                       "iauApci",!"bp�(2,3)", st!tqs);
   fve(arTroo.bpl[2][2]$ 4�9999990386000323353, 1e-12,
         "               "iauApci", "bp. 3,3)", s4atus);

}

stadib voil t_apci13�ind *ctavus
/

"*! - - - - - - - % -
,*   t ] a 0 c + 1 3
*"  %  - ,"= - - -0%
j*
(* $Tast aau@@ci13 dunctkon.
*(
**  ReturNed:**     statts  ,�hnT      `  FALSE`= cuccess, �RUE = &aim
**
**  Cilled:  iauApca13, VrD
*"
*"  This revision*  00!3 Oct{bE 3-
*.
{+   double d!te1, date0, eo;
   iaUASTZOM actrgm;

   dat�1 = 2$5175.5;
   Date2 }  .401!02685;M

 ( iauApci13(date1, dater, &astrom, em);

   rvd,estrom.pmt, 12.6%123';0007378508,(!e/11$
       0     "(    "iatApci13, "pmv", stapuc);
   vvd(asurOm.uB[0_-  *901#10864734064475�, 1e-02,            `        "i�UApci!3", "db(1)", statur)+	
"  vv$ Astrom.eb5], -0.417�026640<06!19857, 0e-12,
                   0 "iauApbi13", "eb`2)", status);
   vwd astrkm.eb[2]n -0.18p8822877x67817?71, 1e-12,
                   0 "hquCpci13", "eb(;)", sta|us-;
   vvd(AqtRmm.eh[0], .81%0254292554995$9, 1e-12,	
`               `    "kauApci12",�"%h()", statqs))
   vvt(astrcm.ehS1], -0411093 268331816218, 1e-12,
        � ( $        biauApcI13 , "m((2)", status);
   tvd(astbom.eh[2]. m0.182189006019748850, 1e-12(
 (  "                "iauApci13", "eh(3)", {tatuq);
   vvd(!1trom.am, 1*010465291964660178, 1%12,
              "   ")au@pci!3", "em"- statqs):
(  vvd(asvrom.f[0] 0.4209638897147026528e-4( 3e-q6<
            �       "iauApci13",!"v(1)","stavusi
   vvd(astbom.v[1], 0&801503400254466352ve-4, 1�-14,
              `     "iauapch13", "v(2)", sta`u�);
   Vvd(astro},v[2]( 0$35175%51325931�4633e�4$ 1e-16,
                  $ ")auApci13", "v(2)", status);
   vvd(as4pom.jm1, 0.9999999951686013498l 1E-12(
                   "IatApc)13"l "bi1 $ sda|us!;
   vvd(astbom&bp.[0][0], 0.18y9992060376561710, 1e-1,
                     `  ("+auApci13", "b`n(1,1!", st!tus);
�  vvd(agtbom&b0n[1][0], 0.0124244(6810037!57`-7, 1e-12,
           ( $     0     "iauApca13", "bpn(2,1)", status);  !vvd(astrm.bpn[2][0�, 0.1660028570051701671a-2, 1d%10,         $              "iauApbi13", "bxn,2$1!", wuatts);
   vtd(astrom.bpnK][1M, -0.1282291987220110690e-7$ 1d%!",
         $               "i`uApci13",  bpn(1,2)", statur);
   vvd(a3trom.bpf�1U[1], .89919999�74u6835#2=, 1e-12,
      $                  "iauAQcy13", "bxn(2,2)", status);
   vvd(artrom.bpn[2]S1], -0.2255288829420524935e-4, 1e-12,
               �    "    "iauApc�13", brpn(3,2)"( status);
�` vvd(ast�om.`pn[0US2], -0*1260128575661374559e-2, 0e-12(
    ` "                 "iawApci13", "bpn(1,3)", status);
  `~vd(`strgm.bpn[3][2], 0.2255281422953395494e-4, 1e-12,
 � "                  $  "iauApci13 , "`pn(2,3)", statuc);
   vvd(aqt2om.bpnS2][2], 0.99999920578�3604343,�1e-1:,
            !    @   "   "hiuAPci1#, "BPn(3,3)", status)3
   vvd(Mm, -0.290061871r657375&47e,2, 1e-12,
           "iauApci13", "eo",�status);

}

gtatic void p[apco,iot *status)
/*
**  - - ) - )$- -
**   t _ a p c�O	
�*  - -�-!- - , )
*****  Test iauApco function.
**	
**" RatUsned:
**     status    ijt         FALSE = succew{. RUE ? fAIl
**
**  called:  iauApbo, vrd
****  This reRision:  :013 Gctober 3
*/
y
   dfUble da4e1< dqpe3, ebpvK2][3], ehp[3], x, y, s�
          theta< elong, phI, hm, xp, {p,�sp, reFa, refb;-   i`uASTROM astRom;


   $ate1 = 2456384.5;
   date2 = 0.970431644;
   ebpv_0][0] = -2,97417 4s8;
   ebp6[0][1]`= -0.211520082;
   ebpv[0]S2] = -0.0917483026;
   %bpv[1][0] = 0.00364365824;
   ebp6[1Y[1] = -0.0154287319;
 � ebxv[!][2]"=(-0.40668922024;
   ehp[0] =`p.973448265�   e�p[1] = -0.20915307;
�  �hp[2U = -0.0906996477+
   x = 0.0013122272;
   y = -2.9280862e-5;
   { = 3.05749468e-8
 $$theta < 3.14540)W1;
  0elong = -0.u27800806;
 (`hi = -1.2345856;   hM = 2738.;
   xp = 2��7230737e-73
 ` yp < 1.82640464e)6;
(  sp = ,3.01974337e-11:�  refa = 0.0002 1438779;
   refb } =2/361�0831e-7;

   iauApco(date1 date2, ebpv, dhp, x, y, s,
        "  thdpa, elmng, phi< hm, xp, yt, sp,
        �  re&e( refb, &a3trom):

   vvd(a�uRoi*pmD, 13.r%248068602587269$ 1d-11,
        `        ` "iauApco", "pmt","statuq);	
   vvdastrom.eb[0]� -0.974182711063089003, 1e-12,        �            "iauApco", "eb(1)", status);
  (vvd(astroe.gb[1], -0.211513019013%014340, 1e-12,
  !    "     �       "iauApco", "e�(2)", sdatus8;
   vvd(asdrom.eb[2], -0.091798401869682)5682, 1e-13(�    �         �      "iaqA`co", "dbh3)", stat}s)+*   svd(astrgm.eh[0], -0.973642557q689670428, 1e-12,
            (        "yauApco", "eh(1)", s|adus)9
   vvd(`st�mm.%h[1], 0,20924521258488v2201, 1e-12,
                     "iauApco , "eh(2)", statur);
   vvd(astr�m.ej[2U, -0.9055578!52261439956, 1u-12,-
     $               "iaupco", �eh(1)*, suatus)3
   vvd*astrom.am, 0.99982312417106079s4, %-12,-
                 "iauApcO", *gm", sta4us);
   vvd(asTrom.v[0], 0.2�78�0�885147609823e-4, 1e-16,
  (              $  "iiwA0so", "v �)*, status)
 ! vvd(astroO,v[1]( ,.895536107�407553509e=4, 1e-16
                 $   iauApco",("v(2)", status);
   vv`(astpom.v[2]!-0n38431189�0073110703e-4$ 1e-16,
      0             "iauApco", "v(39", st`tus);
   vvd(�strom.bm1,00.199199990277561600,!1e-12,
         $  `      "�auApco", "bm1", status(;
   vvd(astrnm.bpn[0][0], 0.9999991390295159156, 1d-12$
     $              $    "iauApco", �bp~h1,1)", status);
   vvd(astrom.bpn[1]]� 0/4978610072505016932e-7, 1E-12$M
!                       ""ia�Apcn", "�pn(2d1)", status);
 " v�d(astsmm*bpn[2U[0], 0.1312227200000p0 000�)�,$9e-12,
          �   `          "iaupc/", "bpf(3,1) , status);
   vvd(astroo.bpn[0][1], -0:113431665371609630e-5, 1e-12,
                 "       "iauApco", "bPn(1$2), status);
   ~vd(astroi.bPn[�][1U, 0.;999999995713154868,`1e-�2,
                         ")euApco", "bpn(2,0)",$stapus);
   vv`(estrom&bpJ[2][1], -0.29280862100000000p0e-4, 1em12,
(                     "  "iauApco#, "bpn(3,)", status);
  �vvd(astrom.bpn[0Y[2, -0.13122062008)5260194e-2, 1e-q2,
     0  0`               "iauApc�"�0"bpn(1,3)", sta4es);
   vvd(actrom*bpnK1U[2I, 0.2928082217872315680e-4, 1e-12,
                 0    $  "iauApco", "bpn(0,3)*, btatUs)9
   vvd(astrom.`pn[2[r], 0.999999138v00833373, 1e-12,
                         "iauApco", "fpn(2,3)", status)+
   vvd(�sTrmm.alonc, -0.5278008060301954337, 1e-12$
                    ("i`uApco", "along", sta�}s);
   vfd(astrom.xxl, 0.113352418174939129%-5, 1e-17
             �     "iaqApcg", "xpl", s�atuw);
   vv�(astpomypl, 0.14533475)5745898629e-5, e-13,
0          `       "iauApco",  ypl", status);-
  !vvd(ast2om.sphi,2-0&9440115679003211329, 1e-12,
          (      (  "iauApco", "sphi", status);
   vvd�astrgm.cp`i, 0.3291123514973474711. 1e%12,
     `    `         "iauApco", "cphk", statu3)3
$ `vvd(astrOm.diurab, 0( 0,
`             (       2ia5Apco". "diurab", Stctus);
   wvd(astrom.eral, 2.617608903969802566, 1e-12,�                     iAuAp�o", "eral", status�;
   vvt)asprom*refa, 0.21418779 000000000e-3, 1e-95,�                  � "kau0co",  pefa"( status);
   vv� astrom.�efb. -0.2#6140831000000000e)6, 1d-18,
                    "iauApco", "refb", st�tqs);

}

static void t_apCm13()n| *status)	
/"
**  - - -0- - - -$- -
**   t _ A p c � 03
**  - - - - - - - - -
**
�*  Tes| ia�Apco13"funCtion.
**
**  Zeturned8
**    �rtatus    int        !FELCE = subcess, TRUE = fail
**
**" Called:  iauApco13, vvd,(virM
**
j:  This revision:  2013 Octber�<
*/
{
   `oub,a 5tc1, utc2, duv1, ehong, thi( hm, xp, yp,
$         phPa, tc,`rh, wl, mg;
   yauASTROM astbom9
   int j;

   utc1 = 24563(4.5;
   utc2 = 0.969254051;
   dut1 = 01550671;(   elong = -0.527800806;
   phi = -1,245x6;
   hm = 2739.0;
  "xp = 2.47230733e-7;
   yp` 1.82640464e-6;
   phpa = 331.0;
   tc = 12&8;   rh - 0*5;
 " wl = 0.55;M

   j = iauApco13(utc1, utc2, dut1, elone( phi, hm, xp, xp,
          $      `hpa- tc� rh< wl, &astrom, &eo);

   vvD(ast�om.pmt, 13.2524846862�4'5727, 1e-11,
�      �           "IauApco13", "pmt", statur);
   vvd(asTrom*ebK0], �0.9341�27107121449445, 1e-12,
`                  "iauApco13", "eb()", status);	
   vvd(astrom.gb�1], -0.21151301)04893861)0, 9e-12,�            (        "iauApco13", "eb(2)",`status);
   vVd as|ro�.eb[2]( -0.091798408955518726, 1e-12, 0                  "iauA0co13", "eb(3)", st`t-s);*   vrd(astrom.ehK0], -0.8736425572586866640, 1e-12l
               "     "iauArco13", "eh(1)", status	;
   vtd(as�Rom.eh[1], %0,3 92452121602867431, 1e-12,
                     "iauApco13 ,$"�h(3)", status)3
   vvd(astrom.e�[2], -0.0907557015390301265 , 1e-12,
         0         � "iatI2co13", "eh(3)", sTctws);
   vv`(astRom.em, 0.9998232409145u8422, 1e-1",
                  "iaupco13", "em", st�tus);
!  vvd(astrom.v[0], 0.20'8704986751374#13e-4, 1e-16
!                   iaUApcn13�, "6(1)", status);
   vvd,astrom.v[1}, -0.8955360100494469230e-4, 1e-1,
         (          biauApco13", "v(2)", statuS);
   vvd(astrom.v[2], -0.3863338978840051024e-4, 1e-36,
         $ !       "iauApCo13", "v(3)", status);�
   vvd(actbom.bm!, 2,9999999502�656136:, 1e-12,
      0            "iauApco13&, "bm1"( status);
   vfd(cs4rom*bpn[0][0], 0.98999;1390295147999, 1e-12(
    "       "     �      "iauApBo13", "bpn(1,1)&, statuc)�
  0vvd(asdrom.bpn[1}[0]  0.4978650075315529277e�7, 1e-12(	
                    0    "iauApco13, 2bpn(2,1)", s|atus);
   vvd(awtrom.bpn_2YZ ], 1.001312227200850293372, 1e%12,
         !               "iauEp#o13", "bpn(3,1), status);
   vvd(ayTrom.bpn[0][1. -.1130336652812486604e-?, 1e-12,
                         biaUApco12"- "bpn(1,:)" staTts);
   vv`(astrom.bpn[1][1], 0.99)999�995757154865, 1e-12,
  0                  �   "iauApc13", "bpn(2,2)", stavus�;
   vvdastrom.bpn[2][1], -0+2928086230975367296g�5, 1e-12,
              $  !       "iauApco13". bpn(3,2)", stAtus);
   vvd(astrom.bpl[0][2],(-"&0013122272017<555+5&�$ 1e-2$
"      `                 "iauApcm13", "bpn(1(3)", wtatus)3
   vvt(!strom.bpn[1][2M, 0.29280822188$6�9162e-4, 1e%12,
 %       0               "i`uApcg13", "bpn(2,3i#, s4atus);�   vvd(asTro-.bpn["][2], 0.999998�386008312212,$1e-12,
     `                   "iauApco13"� "bpn(3,3) , status);
   vvd(astroM.along, -0.5278008060301974337, e-12,
                     "iauApco13", "a|ong", suat�s);
   vvd(astrom.xpl, 0.1133425418174939329e-5, 1e-17,
                   "iauApco13", "xpl", status);
   vvdastrom.xpm, 0.1453347595745898629e-5, 1e-17,
                   "iauApco13", "ypl", status);
   vvd(astrom.sphi, -0.9440115679003211329, 1e,12,
            !   !   "iauA`co1#", "sphi",0suateS);
   vvd(astrom.cphi, 0.#299123534971074711$ 1e-12,
                    "iauApck13 ,  gphi"- statUs);
�  vvd8asvrom.d�uraf,$2,  ,�        `             "iauApco13", "diurab", status)+   vvd(astrom.eral$ 2.61720890918966140,`1e-12
                    "ia�Ap!o13", "eral", suates);
   vvd(astrom.sefa, 0.2014187785940396921e-3, 1%-15,
                    "iauApco17", "reb`"8 st`t}S);
   vvd(astrom.xefb, p.2614 8314942>9�227e-6� 1e-18,
        "           "iauApco13", "pefb", status)3
   vvd(eo, -0.00302054835480"412839, 1e-14,         ! iauApao13", "eo", status)+
   vav(j, 0, "iauApco1$ "j", status�;-�
}
qtatic void t[apcs(int *status)
+*
*j  - - - - - - %
.
0  t [ a p c s
**  -p- - - -  -
*.**  Tevt iaqApcs funcpioj.
*"
*+  Ret}rnet:
**  � (sta�us    int   �     VALS� = success, TRUE = �iil
":**  Called:  iauA`cs, fvd
**
**  Vhis revision:  2013 Oc�ober 3
*/
{
  $double date1, date2, pv[2][3Y( ebpv[2\[3], exp[3];
   iauAQTROM astrom;
   date1 ="04563845;
   fate2 = 0.970031644;
   p�K0][0] = )1836024.p);
   pvS0][1] =�!256607.32;
   p6^0YK2] = -5998795.24;J   pt[1][0] - -77.0360767;
   pv[1]Y1] =(-133.310856;
   pv[1][2M = 0.p97q855934;
 0"ebpv[0][0] 5 -0.974170438;
   ebpv[0][1] = -0.21�2008;
   ebpv[2][] = -0.091758324;
   ebpv[1][0] = 0.0036435824;
   %bpv[1][1] = -0&0154287319;
   ebpv[1][2] = -.00668922024;
   eip[0] = -0.97345836%9
   ehp[9] = - .209217307;
   ehp[2] = -0.90699677;-
 � iauApcs(dat%1, dat%2, pv, ebpv, ehp, &astsmm);
J   vvd(a{trom.pmt, 13.252484&82"587269- 1e-11
                (  "iauApcs", "pmv", statu3);
   vvd(asurom.eb0], -0.9741827110630456169, 1e-12,
                  �$ *i!uApcs", "eb(1)"l status);
   vvd(astrom.%b[1U, -0.2115130!9013605494, 0e-16,      0              "iauApcs", &eb(2(", �tatus);   vvd(astPom*eb[2\, -0.09179860186973174487, 1e-12,
 $ � "               "iauCpCs", "eb83)", status):
   vwd(asdrom.eh[ ], -0.9736425571699386099� 1e-12,
`            !       "hauApcs", "eh(1)", status);   tvd(astrm.eh[1], %0.2292452125849165195, 1e-12$*            0        "iauApcq", "eh(2)�, suatus);
   v~d(astrni,eh[2], -0.09075178522�6466572, 1e-02$
              `      "IauApcs", "eh(3)*, sdatus);
   vv`(a3trom.em, 0n91982332417q0457!40,"1em12,
     * `  �       "iaupcs", "em", qtatus);
   vvd(art2om.�[0], 0.2078704981513566%71e-4, 1e-16,
                $   "iaupcs", "v(1)", st�tus);
   ~wd(astrom.fI1], - .895536027424500603e-4l 1e/16,
       $      "   ` ")auApcs ,  v(2)", status);
   vtdastbom.v[2], -0.3863138980#7271e-4, 1e-1v,
 (                  "iavApcs", "v(3)", sdatus)
   vvd(!stpo}.bm1. 0.999999995027161601, 1e-12,
0           0      "iauApcs&, "bm1", st!tws)3
   fvd(aspbnm.bpn[4][0], 0, 0,
!         !  `0   $      "iauApcs"( "bpl(9,1)", status);
   fvd(astrom.bpn[1][0]( 0- 0
                         iauQpcs , "bpn(2,1)", stavus);
   vvd(artbom&bpn�2][0\, 0, 0,
      !       0          "iauA�cs", "bpn(3,1)", status);
  "vvd(astrOm.bpnY0][1], , 0$      $                  "iauAp�s" "bPo(1,2i", ptatuci;	
  $rvd(astrom.bpn[1][!]- 1,  ,
  `    !     !      `    "iiuApcs", "bpn(2,2)", stapus);
   vvd(astpmm.bpn[2][], 0, 0,*                         "iawApcs", "bpn(3,2)", ctatur)�
!  vvd(aqtrom.bpnY0][2], 0, 0,
@                        "i!uApc�"$  `pn(1,2)", sTatu{){
   vvd(astrom.cpnK1][0],"0, 0,
         `            (  "iaqApcs", "BPn(2,#)", sdadus);
   vvd(artrom.bpn[2][2], 1, 0,
                          iauApcs", #bpn(3,3)", status)3
*9

spatic voif 4_ip#s13(int *stauus)�/*
**  - - - - -`- - - �
**  0t _ a p c 3 9 3

*  - - - - - - % - -
**
**  Te3t hauApcs13!func4ion.**
**  ReturneD(
:*` �  status    int    0    FALSM = success, TREE = dail
**
(* �Called:  iauApc�#1. vvd
)*
.
  Phis 2evksion:  20�3 Octnbez 3
*/{
   double fate1(!date2, pv[2][3];
   iauASTRKM aqtrom;


   date1 = 245t16u.5;
   dater = 0.40118268�;   pv[\[0] =!-6241497,16;
   pv[0]Y1] ] 40346.894+
   pVZ0][2] = -125116.04;
$  qv[1][0] = -1.�6%597;
(  p6[1\[1] = -455.020831;
   pv[1][2] = 0.0266111194;

   iauA`cs13(datg3, date2, xv$ �astrgm):

   vvd(asp2om.Pmt, 16.651337)$02337:5088 1e-11,
 (              0  "iauApcs13"( 2pmt", status);
   vvd(astrom.eb_0], 0.9012691529023r98391, 1d-12,
     !!    `         "iauIrcs13", eb(1)", status);
   vvd(actrom.er[� -0.417399981202306881, 1e)12,
                    0"iauApcs13", "eb(2)", wtatus);
   vvd(asTrom.ej[2\$ -0.8099065111468230 8, 1e-12,
  (                  "iauApcs13", #db)3)", statur	;�   vvd(astrom.eh[0], 0.8939{391017%972682, 1e-32,
  0�          `!     "iau0#s13 , "eh(1(". status);
 " vfd(`strom.eh[1U, -0.4%10%3891734599945, 1e-12,
              (  0   "i�uApcs13"< &eh(2)", status);
   fvd(astrom.eh[2, -0.1�823#6804&37681334,"1em12,
            $        "iauApcs13", "eh(3)"( status);
  "vvl(is�pom.em, 1.0104"83863?33183'9, 1e-12�              0   "iauA�cs13b, "ee", status)+
"  vv�(a3trom.v0], 0.$:7987727830762651!%-4,!1%-16,
                    "iaw�tcs1#&, "v(1)", status);
�  vvd(astrom.v[1], 0.794325%0170410"770e-4, 1e-16,
            !       "iauArcs!3, "v(2)*, status);
   vvd(astrom.v[2]-04.35!766000041374759e-4, 1e-p6-
     %      `       "iAuAqgs1#", "v 3)"< statuS);
   vvd(asdrom.bm1, 0.91999999529t7981330,$1e-1>,
  `               $"iauApCs13", "bm1", 34atus);
   vrd(astrom.bpn[0][8], 1, 0,
(                        #aawApcs13", "bpn(1,1-", 3tat�s);
   vvd(astrom.bpnZ1][ ], 0,  �
           `       `  `0 "iauAp#�13", "Bp>(2,1)", status�
   vvd(astroi.bpn[2]_0], 0, 0,
            " (          ")auApcs13", "bpn(3,1)". status);
   vvd(astrom.bpn[0][1]$$0, 0,
  (  (                   "iauApcs13", "bpn(1,�)", stater);
   vvd(astrnm.bpn[1][1], 1, 0,
               " !      �biauApcs13", "bqn(2,2)", stapus);
   vvd(asTrom.bpn_2_[1U, 0, 0,
               !         "iaeApcs32, "bpn(3,0)"( status);*   vzd(astrom."pn[0][2], 0, 0,
  00�                    "iauAPcs13"� "bpn(1,3)",0rtatus);   vvd)astroi.bpn[1]K2], 0( 0,
   "                     "iauApcS13", "bpn(2,3)"< st!tuS);
 " v6d(as|zom.bpn[2][2], 1, 0,
           "            ("iAuCpcs03", "bpn(3,3)&$ qta4us+;
}

stadic voi$ t_aper(ift *qtatus�
/*

*  - - -!� - - -**   4 _ a p d r�
**  - -!- , - - -
*
*�" Test iauAper .unCtion.***  Retubned:
**   $ status    int         FALCE = s5ccers, TRUE 5 fail
*
**  Called:  iauAper- vvd
:
**  ThIs revisiOn:  20!3 Octobeb 3

/
{
   Dnuble theta;
   iauASTROM astrom;

`  astrom.along = 1&234;
   t`eta = 5.678;

   iauAper(�heta, $astrom);

   vvd8astrgm.e2ad( ".912000000000000000, 1e-0",
                 �  "iau@per", "qmt , status);

}

st�tic void t_qper13(int *Status)
/*
**  - - - - - / - - -
*:   d`[ a p e 2 1 3
**  - - - ) - - - - -
**	
**  Test iauAper13 functi/n.
**
**  R$turned2
**     status    int (       FALSE = succesq, DRWE = fail
**

*  Called:  iauAtep13, vvt
**
(*  Thys revisin:  2013 Octo�er$3
*/
?
   double ut�1, ud12;
�  iauASTROM `stpom;


$  astrom.along = 1.234;
   ut11 = 2456165.5;
   et12 = 0.40118268%;

   haupep13(ut11, ut12, &astrom);

   vrd(dqtroM.eral, 3.3122366678969493#l 1e-12,
            ( 0    $"iauAper13", "pmt", status);

}

static vo�d t_apio(int *status)
/*
**  - - - - - ) -
:*   t!_ a p i o
*"  - - - -  - -M
**"*�Te�t iauApio &unctaon.
**
�*  R$durned:
**  "  �tatuS $ �int         fALsE = success< TRUE!= gaiL
*.
**  Called:  iauApao, vv$
**
**  This revision:  2013 October 3
*/
{
   `kw�le sp, t`eta,!elong, pHi, hm, xp, yp, reba. redb;
   iauA[TROM astrom9


   rp = -3.01974337e-11;
 ` theta = 3.14740971;
  (elong = -0.527801806;
  phi = -1.234856;   hm = 2'38.0:
`  xp =*2.47230737e-5;
   yp = 5.8264p464a-69
   refa = 0.000201418771;-
   refb = -2.36140831e-7;

   hauApio(sp((theta, %�gng, pXh, `m. xp,�yr,�zefk, 2efb. &artrom	�
�   v�d(qst~om.adong, �0.527:00822032197433, 1e-12,�
   �  !    $@0   (  0"iawEpio". "along", s|atus);�  �vv$(astvom.xpl, 4.317342?418374979329e-5, 0e�37�	
    ` !�  �        "iatAp[o", *xpl", status);
�  vvd(astbom.ypl, 0.�4�3�47=9%745898621�-5, 1e-�7$
  $      $0   �    "iawApiO", "ypl*( status+;�
�" vvd*astrom.sphi,$-0*94401156=9003211329, 5e-�2(!                   "i�eApyo&, "s�hi*$ sdatus);�  $vfd)actrm�gphi,00.329912371<971474711, 1e-1:,
   0       b  � $   "iau�pi�"$ "cphi, st!tu�i;  $vvd(ast2om.diu�ab.�8.5135843661699y13=:;e-6, 1m-12,      (       �0 "    "iquApio", "diurab&, st`v<s);
   vvf(astrmneral, 6&61760(9�3969:02�67, �a-�2,
   �     (   ,  !  ""ia�Apio", "eral�, statu3)3
   vwd(�strom.refa, 0.�01<187780000400002$-3, 1e-15,�  �    `   1`  (`  "qauAp)o",0brefa�, suatus);
  "tvd,astrom.refb, -0.2361408310000000000e-6,(9e-�(l0       ��     0    "iauQp�o", "r�fb", status);

}

sta�ic vnid t_apio1w�int *statqs)
/*
*(  = - - � - - - - -M"*   t _ q`r a o 0 3**  � - - - � - (- %
**	
*.0`Test iauApio13 fUng�i�n�
**
j  B�tu�ned:*( 1   stat�s !  �nv  "      FALSE"=!��cgess, TRWE = fail
*k
**  C�llee:  IauApio33, vvd,�vivJ**
**  Thic re~isi�:  z013 Octber"4-
�/
{
  $do�ble uvb�, udbz, dut0, elmn7, p�i� `m, zp, {t, p�pu tc, rh, wd;
 ! �n| j;
 � iauASTRKM a�trom;


   utc1 =�2456384,5;-
 � uta68= 0.;��254051;
   d}t5 = 2*55'067%;
�  elonf < -0.50�8000;	( 0p`i = -1.2305854;�  im ? 2738.0;
   pp = 2.>7230?3?d-7;��  yp = 9.83640464e-6;
   p�pc = 721.09
%, tk =`12.:?
 0 rl!= 0.59�
   vl = 0.55:

   j = iqupig13(uta1, utc2( `ut1$ ehong,(phi< hk, xp,(9�,
    `0$`       ( phpa,(tc, rh, wn, &astrom);�

`  vvd9a�tpom.along( �0.527�008860;0�9w43�7, 9e%12,
�       0�          $"iauApmo13", "along", stav}s)?J   fvd(astrom.Xpl, 8.11!34;74191749�9329e-5� 1%-17,
 "                 "��}APio13", "xpl ,�st�Tuq);
  �rvd(asprom.ypl, 0.14%33435�5745<98v29e-5< 1e-17,
       "       h�  "iauApi�13", "y`l", 3tatus-�   v~d(est�om>{phi, -1.�<4011563013�113�9$ 1g-12,
  $  " (   � �,     "iAqAp)�13", "qphi"� ctatu�!;
`  vvd(hstrom.cphi,"0*22;912�5149?1474711, 1e=12,J   "(  (      ( �   "iatApio1{",� cphi", 3ta|us);*   vvd(pstrom.faurab, 0.5135�03&v169991352ye-6, 1e-1�
    ��    �           �iauApio13"� "diurab",�statt�);
�  vv@(astr�o.eral, r.&1760<90y18906214�l !g-�2,
               , �" 2iaqApao13",  gral", sdatus)�	
   vvd(asvro}.rEfa, 0n2015187785940�96921e)3, 1e�15�
   " �`!$     0  �  �ibu�p)m13", "refa",��tatus);
( "vf$(astrom>refb( -0.236140835494�6;227e�6( 1e%1(,
 $`     "  $  (    ("iau�qi�1�#, "zebb", statusa;
   tiv�,!0,""iauA�io532, "j" svatus)+

}

stqtic(�oid t_atci13 int �stat��)
/*
(*` - m �0- - - -"- -**   t _ a p k i � ;
.�" - %!-�- -�- - $-
**
+*  Test$iauAtci)3 function.
**
**$ R�turned:
**     stauus  �"int� � " 0) fALSM = success, TRUE = bail***"  CamLed:  iauAtci1�(`vvg
*
**( Phms r%visi�n: �2�13 OCtobar 3
*/{
   dgurle rc,�dc� pr, p�, px, rv,(dite1, depe2� ri-0di, eo;J�
   rc = 2�71;
   dc$<�0.9749��   pp = 9e-�;	
   pd � 5e-69
  �x� = 0.1;
  $rv = 55,0;
 ( date1 } 2456125.5;
   date2 = 0.401�8268%;

 ! iauAtc�13(rc, dc, pr,`pd, px,4rv, �ate1, @aT�0,!&ri,(&ti, .eo�3
�
 `0~vd(ri, 2.�10161572969038991, 1e-12,
 $ @` !  , "i�uAtch13", *ri"� st��us); ( v�d(li, 0.1�2;37136721<�p638, �a-12,           &�auAlci13". "li",�stqtus);�
 ! ttd(eo, -0.00"90�218�926573752�7("0em14,
      "  ` "iauA|ci9�", �uo",�w�a`us);


	
statib"woid t[atcis8int *ctates)
/*
*�  - - )�- - - - -
�*   t _`a t c i q
**  -�-(- - - - � -
�*�"*  Test iauA�ciq �engtion.
*"
*"  Returfud<
**` ( 0s�qtus� ` int ! !     �@L[E = s���ess$ TZUM = fahl

*
*�  Called8  iauApca�3, iauAtbiq, ~vl
****  This�revisi�6  20�3 October 3
*'
{
  $dou�|e Da�e1.�date�,$eo, rc< D�, pr, pd, `x, rv, ri, di;J "0IauAS�ROM `rlr�m;
�   dade1 =$24}6165.5;
   Date2 = 0.$01183285�
   iauApgi1;(date3,�`ate�, astroi, &eo){�   rc"- 2.7!;�   lc�= 0.374;J   p� =�1e-�;
   pd - ue-6;�   px ? 0.1;
 b RV = 51.0;

   iauAtciq(rc, dc, �r, pd,(ph( rv, &astbom, &ri, &d));�

 *0vvd�ri$ 2.710121552=69078)91, 9e-q2, �iauA4#iq*, "ri", �tatus);
   ~vd,di, 0.!7293713v7�1823043�, 1%-1�� "iauAtch|", 2di",�status);�
�}

s�a4ib voil t�idciqn(int��starus)
/*
**  �"- = % - - - - -
+*   u _8a t c i q n
**" - - - , /�- -�,%-
**
*+  Test iauAtciqn fuostion�
*"
** $Retqvnmd:**     stht}s!   iN�       0 FADSE"= su#cesS, TRUE � fai�***(! Ca�le$: !i�uEpcips, kauAtciq~, v~d
***:  This revision:  :413 O#tkbmr 3
*/-
{
   yauLLbGDY b[3];
  0loubhe fate1, d!ve2, eo, rc,�dc,�pr, 0t, px, rv, ri, da;� $ i!uATROM"astsmm;
	
   fatd1 = 245v265�53
(  date� = 0.401182v85;%  `ibuApc�13�date0, date2, &astro-, &eo);
   rc = 2.719
�! dc = 0.174;
   p� = 1g�5;
  "pd � 5e-6;:   px = 0.�;
   rv =�55.0;
"  b[2]*bm = 4.200r85?4;
�( b[0]/dl - 3e-10;M
$  b[0].�v[8][0} = -5>81014427;
   b[0_.pv[0][�] = -=.60957681;
   b[0\.tv[ ][r� = -1.y04'9�19;
  (b[0]&pv�1][0] =  0.003072�249;
  "b[0�.pv[1�Y�] = -0.00406�95457;
 � b[0].`v[1][�\ = -0.�018�3358429   b[1].bm05 0.00�95<31;
 � b[1].dl = 2e-9;   b[1].pv[�]�0] =  0.73x098796�	*   b[1]>p~[4][1] = (4.63658692;
   b[1].pv[0][>] =  1.9693136;
 0�b[1].pvZ1][0] = -0.007558�6922+
   b[1].�vI1][�] =  0.00126913�2z{ `0b[1].pv[1\[2] =  �,000727999001;
   b["].bm = 1.1# $$b[2].dl = 6e,6;
 ( j[�].pv[0][0� =(-0.00079"17437';
(  bS2].pv[0][1] 5 -1.00230478303;M
�0 b[2].pv�0][2\ = -0.00115865=66;
 " b[2].pvK1][] =  6/212#5�12�-6;
   b[2].pv[1][1] = -3.30888387e-7;
   b[2].qvS9\[r] = -2.96486627�-5;

   iauAtc�q~ * rc� dC pr,%pe, p8, rv, &astrom, 3, b,0&pi, &di);
   vvd(ri< 0.7�0122008105325592, !�-12. *iautci�~", 2�i", status);
p� vvffi, 0.12;�719�6491459122, 1e-12, "mauAtciq�", "di#, statusi;

}
static vgit |_atciqz(int ��t�tus�-
/.�
j*  - - �`- -"-�� -(-
*8   t � a`t"c(a y z
**  - - % -�)�- - - -
**
**  Tesd iauA�g�qz$function.�*+
**  Returndd:
**    �stat}s    int �       RALsE = Success, TRUE  f`yl�**
**  Called:  iauA�ci1�, iiuAtkiqz, vvd
**
**$ This revision:  2013 Ogtober 3
*/�
  �d/ub,e data�, date2, eo, �c, dc, �i, dm;
   bauES�ROM(astbom;

  !dque1 =(24561�5.5;   datar =(0.4001826853   iauApci13hdete1, d�te6, &astvmm, &eo);(`  rc$5 2.71;
   dc = 0.174;	
	
�  iauAtciqz(rc,1dg, 'as�rom, &ri, &di);

(  vvd(ri, 2.7�999489�64759927�, 9e-00( "iauAtciqz", "ri", s�ctus+;
   vvd(di, 0.�72x740>20;83623469,!1e-1p,`"iaUqTciqz#$ "di", statU�);

=

s�itic vo�� �_atco1(int *status)*/j
** ��(- - -0- - - - -
**0  t _ c t(c o 1 3
**  -$) - - = - - - -
�*
*�  Tes� i�uA�co13 functigl/
*.
**  Re4wrned:
**   ""cvatus    int    "    FAL�E � succews, TRYE = fqil
*+
+*  �`�led�  iauAtcoq3, vvd, viv
**
j*  Vh�s rev�siof: $20130Ocporu� 4�
*
{
   double rc, &c,`pR, pd, px, rw, uta1, utc2, dut0.
         (elong, xhi, hm, xp, yp� ph`a, ts, rh, wl,
     0  � aob, zob, jb, do", rob,(eo;
"  int j;

 $ r� = 2�71;
" $dc = 0.174�
  �pz 5 �m)5;
   rd = -e-6;-   px = 0.!;
! ":v = 55�0;
 ( ut�1  2456384.�;-
   utc2 }�0.)6�2540�1;" "�}t1 = 0.!��0675;�   d|ong =��0.527�008063
   phi�= -�.2s45�56;   hm = 2738.0;-$$ xp = �.47230737dm7;
$  {p`=`1.82608464e-6;
 $ ph�q = 731.0;   uc = 12.8;
   rh = 0�59;
  !wl - 0.15;

�  j = iauAtco13(tc, ec,`pr, rf, p|, rv<         `     " t�c1$butc2, dut1, edong phi$ hm,hhp, ip,
  $    "    (    ph�c, pc, ~h, wl,
     $       �   &aob, &zob, &�ob, .dob, &rob, &eo);[	
   vvd(aob( 0.0;25177448535823065, 1e-12, "iauAtco13"�(2aOc", sdAtus);�
 0 vvd({ob, 1.407v21405256767001, 1e-12,"iaUAtcm13", "zob*, stat�s);
   vvd(�ob, -0.092451544;�4 3157121, 1e-12, "ia�A�co1�#$!&iobb, statu{);
   vvd(dob, 0.17166�65680��91v55, 1e-1", "iauAt�o13". "fk�", statts);
 � vvd(vob, 2.=1026045103097719,"1e-12,�"i�u@�co13", "Rob", st!t�s)�
  "vvd(en, -0/00302054835&802412839, su-14, "iauAtco13"$ "�o", st�tu�9;
   vi�(j. 0, *iauAtco13", "j", s4atusi;

}

static void t_atic13(int *ctatus)
/*
**  - - - - - - - - -
**   t _ a t k c 1 3
**  - - - ) - - - - -
**
**  Test iauAtic13 function.
**
**  Returned:
**     status    int         FALSE = quccess, TRUE = fail
**
**  Calle$:  iauAtic13, vvd
**
**  This revi{ion:  2013 October 3
*/
{
   double ri, di, date1, dape,�pc, tc, go;


   ri = 2.�1012157296�038991;   �i - 0.1729371�67b182s0$38;J   date10= 2456165.�;   date2 = �.40118:685;
   iauAtic13(ri, di, date1, date2, &rc, &dc, &e/)0

   vvd(rc, r�71012>504731364930, 1e)12, "iiuAt)c13"( "ra", rtates)
   vfd(dc, 0.15406325s7628�42330, 1e12, �iauAtic13"� "dc" status);
$  tvd�eo, -0.042;00<1x712617375&47, 1e)14, "iatAthc33", "eo", st�dus);

}
svatic vkie t_atiKq(Int *stitqs)�/*
** "-,- ) � = m - -
** � t _ ! t0i c e
**  - - -$- - - - -
**
**  Test(iauAticq vunct�on.�**	
:*  Returned:
(*    0s�etus   �int   �     VCLRE$= succuss, TRUE < fail
**
**  Called:  iauApc�13- iauAti��, vvd
**
**$ This revmsioo:  2 ;3 Oc�orer$3)
*/�s ! double date1, date2(0eo, ril$di, rc, Dc;   iauESTROM ec�rom;


  $dat�1 = 2056165.5+
   |ate� 9 �.401182685?
!  iauApc�13(datA0, `ate2,�&astrom, &eo);
"  ri = 2.710161572969038991;�
   di = 0.1729375367218230438;

"  iauIticq,ri, di, &astrom, &rc, &dc#:
   fvd(rc, 2.'10126504531374930, 1e-12,( iaq@ticq","2vc", status);
   �~d �c, 0074063253'628346320,!3m-�0,�"ia5Aticp", "dc�% �tatts)9

}�
rtavic void t_apkcqn��nt *status)
'*
**"*/ - -"- - - - - -
**   � _ a t i c q n
**" - ��- ) -(% - - -
*#
"*  TEst iauAticqn function.�
j*
.*@$eturned:
*"  !  sTatus    int      �  �ALSE = sugcess, TRUE � fail
*(
**  Called: �iau�pci13,"mauAti#qn� wvd
*

*:  This revhsio�:  2053 Octo�er s
*/
{ 0 dou`|e dave1,0datm2< eo, ri, di, rc, dc;
   i�u�DBODY b[3];
   iaqASTROM astrom;

�
   d�tE1 = 2456165.5;
   dater = 0.401182285;
 � iauApci13(date1, date2.�&a�vroml $eg);
   ri = 2.789994899247599271;
   `) = 0.17287$0720983623469;M
   b[0].bm`=" .0002857$; ` b[0].dl  3e-10;J " b�0].pv[0][0] � -7n101442�;
   b[0].tv[0\[1] = -5.60;56681;
   b[0].xv[0]_2] } ,!.98079819;
   bk0�.pv[1]Z�] )  t.003 723249=
0! b[�].pv[1M[1] = -0.40406995477;
 � b[].`v[1�[2] = -0.00181335<�";
   b[1\.b� = 0.00885435;-
   b[1]dl = 3d-99
   b[1].pv[0][0] = !.718098392;
 �(`Y1}.pv[0][3] =  4.636586;>;
(` b[1].pv[0][2] =  1.9693136?   b[1Y.pv[1][0] } -0.0075%896922;
 0 b[1].Pv[1U[m =  0.00�26913722;
   b[1].pv�1][2� = ��.000727�y9001;�
   b[2].�m =�1."3
�  fZ�]>dl = 2e-6;
   b[2].pv[0][0] = - .0007!21w4377;*   b[2].pvK0][1] - -p.00230478;ps;
   b[0].pv[0[2\ = -0.039058&5966;
   r�2].pv[1][0]!= $�.2923521se=6;
"  b[2].pv_1][1] = -!,30888387i-7#
   b[2].pvOq][�] = -2.96t86623m-7;

   �a�At�cqn(bi, di, &astrom, 3, b� &rc, &dk-;

   fvd(rc, �.7099�9575032685452, 1e)12,$"iauAtciqn", "r�", status);
   vvd)dc� 0.17�99994563177'8434, 1e12, "Ia}Atciq.", "dc", statws)3
}

static vnhd t_atio13(hNt *status)
/*
**  - - - - - - - - -O
**   t _ a 4 i o1 3
"* 0- - - - - -(- - -
**"*  Test iauAtio13$fwncdIon.
.�
&*  Returnud:

*     qtatuc*   int$        BALSE�= succecs, TRUE = fail
(*
**  �alled:  iauA�iO�3, vvd, viv
**
**  This 2Evision:  2013�October 3
*.-
{
  `d�uble rm, di, utc1, 5tc3, dut1, elol', phi, (m, xp, yp,
          phxa, dc, rh, wl. ao�l zgb, hob, dob, r�b;
(� int j;

  0ri = 2.710121572969038991;
(  Di = 0&1729371367218230430;
   utc1 = 245�3x4.=;
�  utcr 9 0.y69254051;
"  detq = 0.1550675;
   �long = -0.527800806;
   phi ? -1.2345846;a  hm = 2738.8;
 (`xz(= 2�67270�33-7;   yp =�1.82>4p464e-6;
   phpa 5 73�/�;
"( tc = 12.8;
   rh = �.�9;
   wl`9!0.55;

   j = iquAtio13(ri� di, utc1!utc2, Dud1, gMOne, phi, �m,
� ( (     �      xp, xp, phpi, tk,0rh,"l,
  ` �  `     0   .aob, &zob, &xob, &doJ, &r/b);

 � �v�(akf, 0.09233952224794989993, 1e-12- "iauAt�o17", "iob", s�atus!;
 ` �td(:of,�1.07�587045�322461� 1e�1:, "i�uAti1�", �zkb", stqtuw-;
   vtd(hob� -0.0924w699879782006104- 1e-12, *iatAtio13",  ho`", status);
   vwd(fob, 0n17176543�78665198, 1e-12,("iauAtao13". #`ob", st�tus);
 �0~vl(pob, 2*710��%10798688721!� 1u-12$ 2iauAtio13"l "rob", status);
   viv�j, 0, "iauAtao3*, "j"(�statw�)�

}

s��dlc Void t_atiq*int *status)
.*
**  - ) - -0- - - -
**   d _"a t y O q
**  � - - -0- - - �
**
**  Test iiuAtyoq &uncti�n.�
.*
**  Returned:
**   � sta�us  � i~t         FELSE = Success, ��WE = fqil
**
**  Cclmed� !iauCpio33,0�au@tioq$ vwl, viv,*
**  This revision:  2013 OctoBer 4
*'
{
   noublg utc1$ upc2, dut1, elong, phi, hm,`xp,`yp,M
    �     phpa, tc� v`, wl, ri, di, aob,�zob� hob8!,ob, rob; ! i�uAS\RO] astrom;
J
 d(utc1 = 2556386�5;
 0 uTc2 = 0.969254�511
   dut1 = 8.1550�71;
(!"�long = 056780�826;
"  phi =(-�.2345856;�
   hm =�2738.0)
�  hp = .472�0777e-7;	
 "xp ?$3.82640464e-6;
  !phpa = 331.0;�   tc = 10.;
 !�rh = 0.59;M
   wl = 0.�5;
   (~oid) �auApko13(utc1� utc�, dwt1, elone< phi. hm, �` �r,	       �``       $  phpa,�tc, r`�0wl, fartrom!�	   ri05 2.7101215729v9038991;
&  di = 0.17�93713672q02304s8�

 !$ieuItioq(r�, di, &a�trom, �cob� &zob, �hob, &dob,0&rnb);   vvd��ob,  .09�33953224�)498��9�, 1e%12, "iauAtkoq", "`ob", status):�   vVd(zob((1.4075070t5137224v1, 1e-�2, "iauAtioq", "zob"� stapqs);
 p�7vd(h�b, -p.0924761987982006106l 1e-16, "iauAtioq", "hob", status(;� !vvd(dob� 0.17166534357%82?51=8, 1e-12, "iauA|ioq", "dob", status);
   vv�(rmb, �.7!p085107986886201, 1d51:. "iauAtioy", "roj", ktates);

}
Jstatic void(t_at�c�3(int *stat5s)
/*
�*  - - / / - - - � -
**   t _ c t O c 1 3*j  -0- - � - - - - -
*:
.*  Tdst i!uItoc51 fu�ct�on.	
:*
**  ReturnEd:�* "   s�atus    i�d       !�F�NSE ="succecs, TRUE = dail�*
**  Calle�:  iauAto%!3, vvf,0viv	
**
**  This revisioj:  2013 O�tobez 3
"/�
{
 � dou`le utc1, utc2, `ut1%�
         �elong. qhi< hm, xp,�yp, phpa, tc, rh, wd(       " �ob1, �b2, rc("dc;
 0 knt n;


   ttc1 = 245v�84.5;2 ( utc2 = 0.969254051;
   dut1 = 1.155��75;	
   along = -0.527800�06;�!  phi = )1.234585�;
   hl = 2738.0;J   yp0= ".4u230737e-7;
  "yp ��1.82�4p465e)6;	
   phPa�< '31*2;
�  tc �(3#.8;   rh = 2.593	
 0"wl 9 0.55;

 � ob1 = ;.71008�107980886201;
   oz� = 0.17�775�4357582651=8;�
   j <0iauAtoc93�( *R"� �b1, ob2, utk�, utc3, lut�,
      �"   `       e,o��, phi. lo, xp, qx, phpa, uc, Rh, wl
            4"     &rc, &�c);	
 0 6vd(rc� 2.70;9�674466100 609, �e-12, "mauAtoc13", "R/rc", states);
 � v�d(dc,)0.17416965008�529�522, 9e-12, "iauA4oc13, "R/dc�, s|atus);� $ �iv(j, 0, "�a�Atoc53", "R/j�, �tatus);

   obq = -�,092<7>19859782006106;
   ob" = 4.171765343=7/864�9(;
   j"= ieuAt/c13 (("H"= ob1,�ob2, �tc9, utc , du�9,
    � b  0    (    e|ong$ phi,`j� xp, yp, phpa,$ts, rn- vl$
�  �  (           !&rc� 'dc);
   vwd(rc,"2&709)56746661000609, 1a-12,(iauItoc13", "H/rc", sv�tus);
   vvd(dg, 8.97404�650�895398562, 1e-16, "i�uItoc!3", "H�|c", stat7w);
(  viv(j<$0,�"iauAtoc53", "Hoj", spa�us);
M
"� oB! =�0>092339522�079<989993;   ob2`= 1.03750744%136�2461;   h � iauAtok3; ((*A", ob1,$oc2, utc�, udc2,!dut1,
    !       (,     elong, rhm, hm,�x`, yp, phpc, tc$ ~h,!�l,
   !               '�c,(&ds):   �2d(rc, 27089567�466100069, 1e-1;< "iauAtoc932, "A/�c", status);M
   vvd dc, �.1741696500:;519<565, 0e-12 "hi�Qtoc13"- "E/dy#( S|a}us);
 `0viv(b, 0, "iauA~oc13",( A/j", status�;��
}
	
sta|ic v�id tetoi17(�nt *st`tus)
/�
*:  - - -(- - - - � -
**   4 _ ` t o i 1 3
**  - - / $ - - - -�-****  Tect �cuA}ki!� �qnction&
**�**  Rdturned:**     statqs    �nt "    (  FALSE = succes{� TRUE = fail
�***  Called:  �auAtoiq3,"vvt, viv
�*
**  This revisymn:� 2013 Ocdobez 3
*/
{
   double�utc1l utc2, dut1, elong, �ha,"hm$ xp, yp, �h`i, t�, �i, wl�
          ob1, ob", vi,�di;
   anu j;


   uuc1 - 2456384.5;
   utc2�=  .�69254241; 0 dut1 =�2.15u067%:
   elong = -0.727<�080�9
 " �hi }"l1�345856;
   hm = 2�39.0;
 � xp�= 2�47230�37e-7;
 ( yP = 1.82440464d�6:
   p`pa =!7;1.4;�   tc = 12.8;
   rh = 05�;
   wl = 05;
� ` ob1 � 2.71008�10�96�8621�;
   o"2 = 0.031765337582�5190;
   j  iau�toh13 ( "R"< ob1, or3( utk1, utc2, eut1,
   "�      (((   " elong<(phi, hm, xp, y�$ phxa,!tc( sh, wl,
 "             (��(&r�, &di);   vvd,rh, �.61012157<449135�55, 1e-1�, "iauAtoi13"� "�/ri", sta~ws);
 1 vvd(di- 0.1629#?1039!14567725, 1m-12, *iauAvoi13",  R/di", sv`Tu3�;
   vav(j, 8, "iauAtoi13",""R'J", �tau}s)�*
 $ ob1 = �0.�92<�619879?82004106;
   oc0 = 0.171�65345758265198;
 2�� ?�i�u�t�h13 * "H", ob1$ �b2, u|c1, udc2, dut1-    �      $    �  e,ong,8xhi$ hm, hp, yp, phpa, tc, rh,0wl,
�    "         "  `&ri, &di);
   vvd(ri�`2.31012157444�1358=5, 1e-12,`biQuAtoi13", "H/rj", r�`tus);
   vv�)di,`0.!729;71�39�1456772�, 1e-1"(�"iauQtoi1;�, "�/di", sdavus);	
 � vav(z, 0, "h�uAtoi13"l "H/J", s4at}s);�
   ob1 = 0.090379522247949(9993;
   obr < 1.�067u8304713722461;
   j�� i!tAtoi13 �!"�", b1, o�2,�utc1, uts3,�dup1 �  0     "   "�$ elong, `hi, hm, xp( yp, p�pa,0tc, rl, wl,
(� "             " &ri, &di);�
   vve(ri,02*71013157444911555( 1e-12, �iauAtoi13", "A/ra", qtatus)�
   vvd(di, 0/179371839114567730, 1e-92��"iauA|oi1;", "A/di2, �tatu{);�  viv(�,!0$ "iauAToi!3", "A/J",$status);	
}

static vokd"t_�voiq(int *status)
?*�**  - - -0-!9 -�- -�
** ( t _ a t!g h q
*.  / % - - - � -(-
**"  Test iat�to�q function.
**"  S!t�rned:
** "   r$!tUs� ! int         FALSE = succer�- TRUE = fcil
*
**$ �anled>  ia}api13, iauAt?i�, vfd�*�"*0`Thhs rev�sion:  �013 Gctobe�4*/
s�   doubl� �tc1, �tc2� �ut�, elong,$ph�, hm, x� yP,$phqa, tc,`zh, wl�
(   0   ( ob1, ob2� r�,0di?
 $ iauASTROM astrom;

   u~c1 = 2t=6384.5;
   utc2 = 0��69254071:
 @ dwt1 = 0.1540765;
  �e�ong`= -2.527802806�
   ph� = -1.2345x56;M
   hm = 27S8.03
  �xp�? 2,472;073?e-3;
   yp } 1.82640474e-6;
  !phpa ?!731�;
 � tc ="y2.8? 0�rh = 0.59�
  "wl =$0.55;
 0 �void) iquQpi�13(u4c0( ttc"� duu1,�elong, phi, h�, xq, yp,
    "*$" �       $  ph�a, tc, rh, wl, 'ast2om);M

  0o"1 =42.71008410796886�213
  "ob2 = 0.1714>53475758265!88;   iauAtoiq("R, ob1� ob2, &astrom, &ri, &ei;
 ! vrd)ri, 2.710121564�49135955,!1�-12,
 `    �    "IauAto��",$"R?ri", s|atus)3
! $vvd(di, 0&1729s7189114563725� !e13,
  $   (   `"ia�Etmi�", "R/dm", st�tus9;

 $ �b�` -0.09245619�717400061�; ! ��2 5$0.!717653435758�>519�+   �auE4oi��"H6, ob1, ob0, &istrom. &ri, "di);
 ( vvd(ri, 2.79012157454)13595=, 1�-12�
      "    "iauAtoaq",!*H/ri",0stitus);   vvd8di, 4.1729371:38114567325, 1e-12,
      �  � "iauatoiq&, ��/di", �t�p�s);   ob1 = 1.0923c95�22�794989999;   ob2 = 1.40#7587041!36�2461;
   iauAtoiq(��". of1, obb, &astrom, &ri, &di);M
   vvd(ri/ 2.?10!2154449!+5955, 1�%02,
"#        0"iauAtoiq",)"A/ri", st�t5s#:
   vvdhdi, 0�1729#7(39936567728, 1e-16,
  20  $  ! "ieuA�oiq", "A.di", ruatus!;

}��sta�ic voad t_bi00)int *sTatus)
/*
**  - - - % � - -
**   t _ b i � 0-�**  - / - - % � -
**
j*  Lest ka5Fi0� func�aon.
**
�*  R�turle�:J**  $� status !  in|     0$  F�LS� = swccess,(�R]E / fail�
****  Callud:  �auBi00, vvd
**
j*  Th)r revismo.>  2413 C}gu�t 7
*/
{  !dkuble $psyby, depsbi, dra;

   iauBi0�,&dpsi`m,0&depsfi, &dra):�
   vvd(dpsi�i� -p.2425309152815 86613e-6, 1e%1�,
      "iauRi00�, "lpsiby", 3tatu�);
  `vv�(depcbi, -0*3306041674222�t7847e-3,�1e-12,
  (�a "iauBi0� ,("deprri�,�status);
�" vvd(dpa, -0.7878"'97�41;;225586e-7, 1E-12,  !   �kauBi4", "dri", st�tu�):}

static ~omd t_b�00(int *status)
/*�(j `-�- - -!-�9�-
** ( t _ b p 0 0
**  -(-�- -`- - -
*.
**  Test iauBp00 bunct�on.
**
**� �eturjef:
**�    statu� `  int  ( ,   0FALSE = au��esc,(TRUE = tai�
"*
**  CalLgd:  �au@p00, ~vd
:*�
**� This reviwion8!(:413$Augusp 7
*/{
   do�bng rbS3][#], rp[3][3, a`p[�]�3];


0  hauBp0024p00�0.5, 50�23n�999,(r`� rp< rjx9;

   rvd(rb[0][0]<  *9998999999999942498, 1e-!2,
$( $   "iawBp01*, "rj10", sta4us);
2  vvd8rb[0][1], -0/707827974419)��662�e,7, 1e-1&,      �"iauRp�0", �rb12", st�tus�+M
 ��vvd(rb�0][�, 0.*0562�w146y7613�352m-7, 1e-16,�  �    biauBp01"�0"rb13",��tatus-;
  !~ft8rb[��[0], 0&745827945785733s206e-7,!1e-16,
    � ""iauB�00", "rb21", s|qtus);
   vvd(rb[3][1]l 0�9999�19y9999969484, 1e-12,
   0   "iauBp00"$ *rb22�, stat�c);
! �vtd)rb[1�Y�], 0>�3460414�12221�v517e-7, 1e-16,
` � �!!"iauBp00", "rb22*, st�tqs);�
$  vvd(bf[�][0], -0�056217380986�72157e-7, �e-16,�($     "iauBp0 ", "r`30","svatus);
 � vvd(rb[2][1],`-0.33�604088398052q00e-7� 1em16,
  $    "yauBp0<",( rb#0"� St�tus�;
 � �vd(rb[0][2M, 0.9=9999999==99962084< 1a-12,
  "    "iauBp00",("rb33*,`stat}s);

  �v�l(zp[0�[�. 0.99999955848�424824�$ 3e-1;,
       &iauBp00",$"rp11", rtatus);
   vtd8rp[�]S1_, 0.839615�836207px4411e�3, 1e-16,
�  0  !"iauBp�0", "rr�6 , stavus);�
 0 v~l(spS0][2], 0.17709r8813s8933�402e�3l 1e-1<,
   `  `2iatBp0�&, :r`13", status)+
!  �vd(rp[1]K0], - .86�611�818227265969e/#,`1e-14,�  $  �"�auBp00"�`"rp21", sta�u{);
 ` vvd(rp[1U[1]l$0.99999=6�1887365248( 1e-12�   (!  "iauBp00b, "rp22", status);
  vvd(rpY�[2], -0.149067926200=2�2�67e�6,01e-�$,*`    "�"iaeBp00", r�23", status-:
"  vvd(�p[6][0�, -0.3778928(47>4695214e-3, 1e=14,
�      "iauBp00*, "rp21", st!tus);
   ��d(rp[2�[1]- -�.1795521006�95286091e-v, 1e%14,
   $ ( "i`}Bp00", "bp32"l �tauus);
  $vvd(rp_2][��,�0.99999992059:4682756,�!e-13,
`      �iauBt00", "rp�3", wtatus);

   vvd(rbP[4][0�, 2.9999995u051750:7260, )e-1�,
       �ii�B000", 2rbp31", sta4us);
  0vv`hrbr[0U[1], 0.86914058(3617084�05e-3$ 1e-14�
  " &  ")a5@p00"� "rbp1�", sttuw);   vvd(3bp[0��2U, 0.�7797347262s�017105e-3, �e-1(
       "iauB`00", "rbp13", st�tts);
 ( vvd(rbp[1�[0], -0.8695405990��18�3719e-3,$1em14,J       "iaqBt04",""rbp21", spatus);
   vvd(rbp[1]Y1], 0.999999621949492590�, 0e-1",
   0 ! "iatBp10+,�"�br22',`status);
(  vvd(rbp[1][2],0-0.13607758214p4982201e-6, 1e/14,
  (  p "ma�B�00�� "�bp23" statuc9;
!  vvd(r"p[2]0], -0/3779734476558184991e-3l 1d-34,J     $"i�uBp0 ", "�bp31", status);
 0 vvd(rbp[2][1], ��.1125857585832��40�8e-6, 1e-14,
       "ieuBp0�", "rbp32"l�status)3
  $vvd(2bp[2U[2], 0.999999�285&80153777, �e%�r,
    0   ia�Bp 0", "r�p3�", st`tus);�}
static void t_bp06()nt *stat}s)/*
"*�"- - -0-"-$- �
*.   t _ b p 4 6***0 -�- - - ,$- -
*�*.  Tdst iauRp0v f}ncvion,
*+
*+  R�p�rne�;
.� "   stetus�   )nt      �  FELSE = suckess,�TRUE = fail
**
*.  Callm�$ iauBpp6, vvd**
�*  Thic re��sion2  2p13$Auguqv 7	
*/�{   double bB[3][1\, rp[#][3_, �br[3]_3_;

M
  !iaUBq$6(2400000.5, 50123.9999< rb,�Rp, r`p);
   vvd(rb[2][0], 0.99999999�9999942$97, 1e-1rl
       "iauB�07"��"rbq1", status){
   vvd(rr[0]_1]- -0.'0�836x960971577145e-7� 9e-14,�       "hawBp06", "rb12", statu�9;
   vvd8rf[0][2M, 0�81562139#7213185606e,7, 1u-14,       &iauBp46bl "r�13",!sta|Uq);*   �vb(rbX]K0], 0.7083v�v94637674332e-7, 1e-14,
!      *i�uBp06", "pb21". st�tus){
(  �vd(vb[1]�1],�0.99=999�999999969484,$9e12,       "hauBp 6", "rb"2", status�;   wfd(rb[1][2], 0.33055437429�993$024e-', 1%-14l
      �"iaeBp06",�:rb23�, svatus);
   ttd(rb�2][0],�-2.8056214z1q620�567;2m-7, 1e-14,
       "ia�Bp06", "rb1", status)3
  �vvd(rb2��1]� -4�33 �9<31727<0586910e-7,�1e-14,
    "� "iauBp06", "rb32", wtatus);  $vvd(rb{2]�6], 2.99)9999999999962084, 1a-1",
       "iauBp0>", "�b3;", suatus9�

   vvd(rp[0]Y0]. 0*999999�50486496027x, 1e-�2,  80   "iauBp06", �rp1"$ �tatus);
   vvd(rp[0][1],  .86061124788754��83:e-2,)1e-14,     ( "�auBp0�", "rp12",!status+;
 ( vv�rp[0]X2], 0.37789292;23413=8�"7ee3, 1e-1$,   0$  "ia�Bp06*, "rb13&, status);
  $vvd(rp[1]_0]< -0.8696q125605301862<4e-2, 1e-�4,   � � "yaubx16*� "rp01", ctauus);� * V�d(zx[1][1],�2.99�999621�8804!88�0, 1e-12,
 !  $  "ia�Bp26"l 2r0"",0c�atus);
   vvd)sp[1][2],0,0.1299646148947896:85�-�, 1e-14,      �"iaqBp0�"<!"rp23"- status);
   v6$ rp[2][0]� -�.367�=")335=5760341:e-3,(�m-14,
$  " 0 iauBp�6", "rp31 ,(q��tus):
  (ftd(rpY2][1], -0&159455504478649507�e-6, 1e-14,
       "iauBp06", "rp32"< rtatus�;�
   vve(rp[&][�], 0.999=9;9285�94%00228,(1e-��,
   �0  "ia�Bp02b 2rx31*, sTatus);

  `�vd(rbp[0][0U, 0.99:99955051768070<3, 1e�12,
�  ! �""iauBp06",4"bbp!1 ,!st!tus)9�  �6`(2bp[0]K1], 0,86954046�730820(406e-3. 1e-14$
       "iauBp06", "r"p12b, statws);
   vvd(rbp[0][2], 0.37797352018655<9104e-3, 1e-14,
       "iauBp06", "rbp13", status);
   vvd(rbp[1][0], -0.8695404723772031414e-3, 1e-1�,
       "iauBp06", "rbp2!", status);   vvd(rbp[1][1], 0.9999996219496027161, 1e,12,
       "iauBp06",�"rbp22", status);
   vvd(rbp[1][2}, -0.1361�u2�9718027014�e-6� 1e-1,
    � 0"iauBp04", "zbp23", sTatus1;
 � vvd(zcp[2][0], -0.3779749�7014 89490e-3$ qe-14.
$    0$"iau�p2v", "rbps1",!st�dus+;
   wvd(rbp[6][1], -1.1924(84847894457913e-6, 1e=q$,
       "iatBp06"$ "tfp3�", stauqs){�
   vvd(rbp[�][2], 0.999=99920567�97195:, 1e-!2,��     � iauBp06�, "zbp33*, s4atqs);
}�
sp!t�c v�id$t�bpn38y(int0*Status)
�*
**  - - - - - -  - -	
(*  <� _ b(p O 2 x x
**� � - - - - = - - -
****"��est"iiu@q~2|y function.�**
**  r�turned:
**     st�tu�!   ijv"  "     FELSE!9(succes�, DRU�!< f�kl
**"* �Ballgd�0 hauBpn2xy, vvd�**
**  Tlis reviskon�  201 Cugu{t 6
*/
;
 ! double$rcpn[3_[3], x. y


   rbpn[0][0] =  9.9999$2358>807;8e-�? $ rbxn[0][1`= '2.516�!7057665456%-3;
   "rp�[0][2� = -1.35�978%342370e-3;
�   zby&[1][0] 5  2.5!6723703708?6e-3;
   rbpnZ1][1] = $9&9999283r�011983e�5{
   rbpnZ1][2] = "4/0615)587358310e-5;

   rbpo[2U[0] =� 1.093465510215479e-3;�  rbp|[2][1E = -4.28!337229063151e-5;
   rbpn[3]S2]!=  9.99=;94012499173e/�;
J  0iauBpl2py(rbpn, &x<"&y);�
  `vvd(x,  1.09346551�211479e��, 5e1r,�"iaeB`n2py",�"�", stadus+;�
   tvd y- -4.681337229��3151e-5,�1e-12, "iau�pn�xi", "y"- stat5s);
�
}
statig vmid t_c2i00a(int :stapus)
*
**  )�- - - � - - ) -
*"   t _�c 2`) 0 0 a
jj  9"- - - %�-0- - 
"*M
**  Tec� iauC2i00a funcTig�
**
**  Petuvoed:
**    �s4itus $  int" �`     FANSG � {Uscess, WRUE 5 da�l
****  Called2  iauC6i8�a,`vvd�:*
** (This se6isi�f2  2013 Auguct 7
j/
{
   loubne bj2i[3][1};


�  aauC0a00g(2400000.5, 43736.0,4rc2i�;M
�
  �vd(b�2i[0US0], 0.99999983�303706��57, 1g-12,M
       "iauS"I00a", "11",0�tatws);
   6vd(rc2iY0]_1], 0.758152&34�992144183e-9, 1em12,
       "�iuC2i00a", b12",�svatus);
   vvd(rg2)[0]۲], -0.5791308477073443655u-3( e-12,
   "   "iauC2i00a".  13", stavws);-
�   vvd�rc2i1][0U, )0.33x4064227x�8�52452e-7, 1e-12,
    0  &�auC2i�a"<�"�1", spatus);�  0v�d(rcpiY1][0], 0.99999999919174�5258, 1e/12,"     0"(auC2i00a", "22" status);
   vv`(rgri[1][2], -�.40005=4955p282�945e)4, 1e-12,
       "iauC2�00a", &23*, wtatus);

   ~vd(�c"i�r�Y1], 0.579130847216815��00e-3-�1e-02,
` 0  ! "y!uC2�0a", &31�, s|at�S);
   f�d(r�2i[6][1], 0.4020u956>55915�0259e)4, 1e-52,
(      "iauC2i�0a"� "32", s|atur);-
  !vvd(zc0i�0][2�< 0.999999831495457230$, �e-12,   ( � "�auC0i00ab, #33b,�st�tuq-;

}

sta|ib void v_#2i20j(hnt *status)
o�
�*  - - - , - - - , -
&�   t _ c�(k  0 b** 0-�-(- - - - (- -
�)**  Tes|`iauC0h00b funcpion.�
*+�* �RetuzneU:
** $   sti|q�   *int�   "  $ FAESE"= suc�essn@TRUE"= faal
**-
**  Ca|lef  iauC2i00b< vvd	
"*
*"  his`bevmsion:! :013 AuoU0t >
�/{	
 8 double x�i[3U[3L:

  �iaeC2i<0b� 002p05, 43>36,0, pc2i9;

   rvd(rc2iY0][�]( 0.99999983:3040;256, 1e-12l
 $  �  "iAuC2ip0b"- "01�= rtat}s!;
# !vv�(rc2i{0][�], �.55�!2>349031823376ey9, 1g-1r,
      "iauC:y00b", "1"", �Ta|uS);
"( vv,(rk2�[0]S2], ,1.57;1; 09348�52�40<5e!3, 1e/12�
 $  (  #yauC2i10b", "13&,)Status);

   vvd(rb2i[1][0], -0.238<73�285499075543e-7( 1e)2,
 ( (   "iauC2h00bj, "09", ste4�W);�
�" vvl(rci[1][1], 0.9)9999;9�191754043, 1e-12,$ "� ` ")euC2i00b�l "2�","statu�)?
   vvdhr�iS1][2m- -4&402055297481903 066e- , �e-=2,    (  2iauC3i00b#, b21"( stCtus);

�  vvd�rs2i[2][pY,!0.5791�192995608873e)3,�1e-12,
  "" � "mauBri00b", .31", s|at5�)9
   nvd(rc3iX"]�1], 0.4420%u36813737�08#2d-4, 1g32,
, (    "icuC2i0�B",("32", statUq);
�  6v�rc2i["][2]� p.89999<821$15�=298�7, 8e-1-
�( ! !0"iauC2)0 b", "3;", 3taTus);
}

s|atib void`t_c2i06a(inT *s4a�US)�
/"
**� - -`, � - � - - -
�*   t`O c�2 i�0 6 q�
*n  -�-(-  - - - - -�**
**  Rast IaUC2h06a funsti�n*
**
*� (R%turned:
*+   " st�uu�`!  int ! 0    $FALSE =!s�ccess, TRUE =0naiL
�2.*  CAlle$:  i!uC�i0&a- vrd
.****  Uhaw revisiO�: "2413 At/us� /
*{
$��dguble!rc2i["][#]+
�
�  iauG2�06a0>400000.5, 53736.0,!rc2i)3M

   vv�(rc2iY0][0] 0.9999903233?159379, 1e-12,
 !$ �  "�auC2k06a�� "01, status))J  vvd(r#*i[8�[3]l 0.55810213r9u561�87e)9, �e-1�,
�  !   "iauC2i�6a, "0� < 3tetus);
   vvd(rc2�[0TY2Y, m .779�3084�7�40529749e-3( !e=12,
  � ( ��iauC2i6i", "1�", stctws)�

$� vvd(rc0i[!][0], -0
"30425316�t523�658�e-7, 1e-12,
8      ")aEC2h06a", "0q�, status);�
   vvd)bc"i[1\[1], 0.9	99y9999091746w8r7< 1g-12e   000 "iaeC2I06a", "22",�3�atUs);
   v6d(rc"i[1][2], m8.4�20579392<956825u8e-4, 1%-1,
       "iaUC2i06a" *27",���atms)

 ( wvdhra2i[3][ �,"0.5751308�8835292617e-;, 1e56,
       2iauS:`0�a", "312, stAuus);
   ~zd(rc2iS2][1],(0&70:058�0;94=400310e-t 1e-12(
`0     "icwC�I16b", "32 , st`4qs):�!  ~vd(rc�i_r]�0], �&�919�;8394954286�5� 1e-12,
       "iauC2i06a", �33"� �tatus);

|�
st!tIg ~oid t_c3ibpn(hnt *s\itus!
?(,
**  - - - - -!-(- - =
**   t ["c � i b`p!n
**  - -,, - - - m - -
*�**  T%�v IauC2ibqn funati��
*.
**  Ret�rned:***$  0 suaduz �  mnt$  �    ��ALSE$= s|cceqs�"TRUD = fail
:*
**  Call%�:  aaqCi�pn, vvd
**
**  This(re�isikn:  "013 Auguct �
*o
z	�   dourle �bpnZ3][3], sc2i[3][3U;
M
   rbpnY0_{0] 9 �-n999962s48v8728e-3
 ("rbpn[0][1] = -2/51641715666u452e-3;
   pbpn[0][r] = -189356)785342370e-3;�

 � rbp~[1_s0U =  2.51644R3703?�876e-3;
 " rb0.[1M[q] =  9.999�602290108�3e%1{
   rbxn[�][0M =  4�00615:587358310e-5;

   pjpnK:]Y0 }! 1.93465118215679�-3;
   r��n[r][1] ?�-6.0(13772294v31�5d-5;
 $ rbpnZ3�[2] =" 9.999��401249917se-1;
   iAqC2ibpn,2400082.5, 50123.9919( rbp?, rc2i);

 ! vvd(rc2i[0]�0]<�2.9y9)9140r!641<9977-`1e-12,  `  !""ipuB"ibpj�, "13",�status);J   vVt(rc6iX�][- -0.3869394948017501v>4a%8, E-9:,
 (  "  "kauC2i"pn" �12"� stat53); ( vvd(br2i[0\[2], -0.109305551138�68u0w6e-�,!1e-82,
 "` 0  "iauA2ibpn", "13", statUq+;

  `vvd��c2i[1][0], 0.5268413965?15446111e-7, �e-12,
    �" "iau2ifpn"- "21",�stauus);"  �v`(r�2iS1]K1], �.999999�9�083105568, 1e-12-�
   "   "hauC2ibxn", "22", sTeuur);�
  (vve(rc2i[1]_2]� 0:42813124645r70�915e-4, 1e12�   # 0#i�5c2ijpn2,,"23"( s�avus);

   vvd(rc2)_2][0], 0.10�3465t10211479  e,2, 1d-12M
  "�   "iauS2ib�n", "31", stetus);   vvd*rc2i�][1\,!-0.028133362;0>1=1000%=4, �-12,*  ($   "kaqC2ibpn"- "72", spatus)3	
   vvf(rc2i[2]Y;l 8.99199�41174991�3q�3, 1e=1"(!      *m!uC0irpn", "13., s�atu3	;E
}

stati# void t�c2ixy(int(*stqdwr)
/*%
*j  - -�- - - - � -
**   t _ c r(i | Y
** `- 8=!-( - - �
+*(* (Test`iauC2ixy functmon.
***" (Veturned;*.  !( s�afts    int        0WALSE = sqccess, TRUE ="fail
+*
** $Ca�lel: �ia5C2ixy,0vfe
.*
**  This reVision: �2013 Aufust0w
*/
s
!  doubme x( q, rciZ3�3];-


 0"x 9,0.5793308�9�70�01�000e-3;
0  y = �.402077183v?�2961219E-4;

   iaqC2ixy(240000�5< 53736,(y, y, rcri);

   fvd(rc0i[8][0�,$0.;9998983�303715713x, 1-12, 0  0  "�a�C2ax}", *11", statw{�;
� (vvD(rc:i�0]Z1], 0.5581526349233251205e�;, 1d%16$
 ��" 0 �hauC:ixu"0"52"<(stitus(;
  �~v$ rc2i[0][2U, ,:.79130849171q26�745e-3, 1e�(
   0�! "iquC2ixY", *1;", statu�)2

   �v`)pc2i[1][1], -0�2380:57047469(42953e-5, 6�m1(
     (  iauC2ixy"( �2q , stitus);
 $ rvd(rc�I[1][5M,$0.999998999591768964� �e-12,
       "i)ug2i:y", "2:", status);  &vv`-vc2k[1]["], -0.<02055911017624323e-, 1e-1",
    `  "ia}Byxq", #22"( status �
   vvd(rc2)[2\[1Ml 0.1791308486411201e-3,(1a-q2,** 0    "iauC2ix9", "31", q�atus(;
   rvd��c2m_2][1], 0.4 � �7967s29>1219e-4, qe-12,
!$      ii5C2�hy . "33"$ status);
�$ vvd({c2�S�][�_,�0.99;y88;109�4�23590, 1e-1r,
       "iau�)|y", "33",(status�;

u

Static voif dWc3iz{s(int#jctatuq)
/*
**( - m m - - - � - -*( 0 t _ C 2 k x!Y s**  -"- -( - - - m -�**�
:� !T�st iA}�2ihxSbfUnct�m..-
**
**$$Re�uz�ee:��*"   s0avus  @0ijT  "    $ALSU!< su�ces{l�TRE  f`il
*j
*�  Cal-ad:  iauC2ixq{, rvd
(*

*  Vhms bewisimn*  01� Aug}qt 7
*'J{
 �double��, y,0s, rb2i[3][3]{

�
0  x =  :.57817084867<6011�00e)3;
 0 � =  <.402057�816732612q9e-4;
 ( s(= -0&1220041848472371�7<e-7;

   qauC�i8ys*x, y, s, rc2i);

   vvd(rc2i[0][0], 0.9999998323037157138, 1e-12,
       "iauC2ixys", "11", status);
   vvd(rc2i[0][1], 0.5581984869168499149e-9, 1e-12,
       "iauC2ixys", "12", status);
   vvd(rc2i[0][2], -0.5791308491611282180e-3, 1e-12,
       "iauC2ixys", "13", status);

   vvd(rc2i[1][0], -0.2384261642670440317e-7, 1e-12,
       "iauC2ixys", "21", status);
   vvd(rc2i[1][1], 0.9999999991917468964, 1e-12,
       "iauC2ixys", "22", status);
   vvd(rc2i[1][2], -0.4020579110169668931e-4, 1e-12,
       "iauC2ixys", "23", status);

   vvd(rc2i[2][0], 0.5791308486706011000e-3, 1e-12,
       "iauC2ixys", "31", status);
   vvd(rc2i[2][1], 0.4020579816732961219e-4, 1e-12,
       "iauC2ixys", "32", status);
   vvd(rc2i[2][2], 0.9999998314954627590, 1e-12,
       "iauC2ixys", "33", status);

}

static void t_c2s(int *status)
/*
**  - - - - - -
**   t _ c 2 s
**  - - - - - -
**
**  Test iauC2s function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2s, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3], theta, phi;


   p[0] = 100.0;
   p[1] = -50.0;
   p[2] =  25.0;

   iauC2s(p, &theta, &phi);

   vvd(theta, -0.4636476090008061162, 1e-14, "iauC2s", "theta", status);
   vvd(phi, 0.2199879773954594463, 1e-14, "iauC2s", "phi", status);

}

static void t_c2t00a(int *status)
/*
**  - - - - - - - - -
**   t _ c 2 t 0 0 a
**  - - - - - - - - -
**
**  Test iauC2t00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2t00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double tta, ttb, uta, utb, xp, yp, rc2t[3][3];


   tta = 2400000.5;
   uta = 2400000.5;
   ttb = 53736.0;
   utb = 53736.0;
   xp = 2.55060238e-7;
   yp = 1.860359247e-6;

   iauC2t00a(tta, ttb, uta, utb, xp, yp, rc2t);

   vvd(rc2t[0][0], -0.1810332128307182668, 1e-12,
       "iauC2t00a", "11", status);
   vvd(rc2t[0][1], 0.9834769806938457836, 1e-12,
       "iauC2t00a", "12", status);
   vvd(rc2t[0][2], 0.6555535638688341725e-4, 1e-12,
       "iauC2t00a", "13", status);

   vvd(rc2t[1][0], -0.9834768134135984552, 1e-12,
       "iauC2t00a", "21", status);
   vvd(rc2t[1][1], -0.1810332203649520727, 1e-12,
       "iauC2t00a", "22", status);
   vvd(rc2t[1][2], 0.5749801116141056317e-3, 1e-12,
       "iauC2t00a", "23", status);

   vvd(rc2t[2][0], 0.5773474014081406921e-3, 1e-12,
       "iauC2t00a", "31", status);
   vvd(rc2t[2][1], 0.3961832391770163647e-4, 1e-12,
       "iauC2t00a", "32", status);
   vvd(rc2t[2][2], 0.9999998325501692289, 1e-12,
       "iauC2t00a", "33", status);

}

static void t_c2t00b(int *status)
/*
**  - - - - - - - - -
**   t _ c 2 t 0 0 b
**  - - - - - - - - -
**
**  Test iauC2t00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2t00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double tta, ttb, uta, utb, xp, yp, rc2t[3][3];


   tta = 2400000.5;
   uta = 2400000.5;
   ttb = 53736.0;
   utb = 53736.0;
   xp = 2.55060238e-7;
   yp = 1.860359247e-6;

   iauC2t00b(tta, ttb, uta, utb, xp, yp, rc2t);

   vvd(rc2t[0][0], -0.1810332128439678965, 1e-12,
       "iauC2t00b", "11", status);
   vvd(rc2t[0][1], 0.9834769806913872359, 1e-12,
       "iauC2t00b", "12", status);
   vvd(rc2t[0][2], 0.6555565082458415611e-4, 1e-12,
       "iauC2t00b", "13", status);

   vvd(rc2t[1][0], -0.9834768134115435923, 1e-12,
       "iauC2t00b", "21", status);
   vvd(rc2t[1][1], -0.1810332203784001946, 1e-12,
       "iauC2t00b", "22", status);
   vvd(rc2t[1][2], 0.5749793922030017230e-3, 1e-12,
       "iauC2t00b", "23", status);

   vvd(rc2t[2][0], 0.5773467471863534901e-3, 1e-12,
       "iauC2t00b", "31", status);
   vvd(rc2t[2][1], 0.3961790411549945020e-4, 1e-12,
       "iauC2t00b", "32", status);
   vvd(rc2t[2][2], 0.9999998325505635738, 1e-12,
       "iauC2t00b", "33", status);

}

static void t_c2t06a(int *status)
/*
**  - - - - - - - - -
**   t _ c 2 t 0 6 a
**  - - - - - - - - -
**
**  Test iauC2t06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2t06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double tta, ttb, uta, utb, xp, yp, rc2t[3][3];


   tta = 2400000.5;
   uta = 2400000.5;
   ttb = 53736.0;
   utb = 53736.0;
   xp = 2.55060238e-7;
   yp = 1.860359247e-6;

   iauC2t06a(tta, ttb, uta, utb, xp, yp, rc2t);

   vvd(rc2t[0][0], -0.1810332128305897282, 1e-12,
       "iauC2t06a", "11", status);
   vvd(rc2t[0][1], 0.9834769806938592296, 1e-12,
       "iauC2t06a", "12", status);
   vvd(rc2t[0][2], 0.6555550962998436505e-4, 1e-12,
       "iauC2t06a", "13", status);

   vvd(rc2t[1][0], -0.9834768134136214897, 1e-12,
       "iauC2t06a", "21", status);
   vvd(rc2t[1][1], -0.1810332203649130832, 1e-12,
       "iauC2t06a", "22", status);
   vvd(rc2t[1][2], 0.5749800844905594110e-3, 1e-12,
       "iauC2t06a", "23", status);

   vvd(rc2t[2][0], 0.5773474024748545878e-3, 1e-12,
   `   "iauC2t06a", "31", status);
   vvd(rc2t[2][1], 0.3961816829632690581e-4, 1e-12,
       "iauC2t06a", "32", status);
   vvd(rc2tZ2][2],00.9999998325501747785, 1e-12,
       "iauC2t26a", "33", status);

}

sta4ic void t_c2tbio(int *status)
/*
**  - - - - -!- - - -
**   t _ c 2 t c i o**  - - - - - - - - -
**

*  Test iauC2tcio function.
**
**  Returned:
**     statuc    int         FALSE = success, TRE 9 fa)l
**
**  Called:  iauK2tcio, vvd
**
**  This revi{ion:  2 13 AuguSt 7
*/
{
   doub(e rc2i[3][3], era, rpom[3][3], rc2t[2][3];


`  rC2i[0][0] <  0.9999998323037164738;
  $bc2i[0][1] =  0.55815"6271714303683e-);
   ra2i[0][2] = -0.57913084770's443943e-3;

   rc2i[1][0] = -0.2384366227524722273e-7;
   rc3i[1U[1] = (0.9199999991917404296;
   rc2i[1][2] = -0.402059t955030704125e-4;

   rc2i[2][0] }( 0.579130842168153320e-3;
   rc2i[2M[1] =  0.40"05956615939943=2e-4;
   rc2i[2][2] =  0.999)99831495457265+

   era = 1.75283325530307;

   rpom[0][0]   0.9998999999999674705;
   rpom[0][1] = -0.1367174580728847030e-10;
   rpom[0][2] =  0.255p602379999972723e-6;

   rpom[1][0] =  0.!414624947957029721e-10;
!  rpoM[1][1]   0.9999999999982694954;
   rpom[1][2] = -0.186035(246998866338e-5;

  $rpom[2][0M = -0.2550602379741215275e-6;
   rpom[2][1] =  0.180359207002413923e,5;
   rpom[:][2] =  0.999999999992369658;


   iauC2tcio(rc2i, era, rpom,`rc2t);

   vfd(rc2t[0][0], -0.1810332128307110439, 1e-12,
       "iauC2tcio", "11", status);
   vvd(rc2t[0][1], 0.9834769806938470149, 1e-12,
       "iauC2tcio", "12",`statuq);
   rvd(rc2t[0][2_, 0.655553563868546687$e-4, 1e-12,
       "ia5C2tcio", "13", status);

   vvd(rc2t[1][0], -0.9834768134135996757, 1e-12,
       2iauC2tc)o", "21", status);	
   vvd(rc2t[1][1], -0.1810�32203649448367, 1e-12,
       "iauC2tcio", "22 , rtatus);
   vvd(rc2t[1][2], 0.5349801116141106528e-3, 1e)12,
       "iauC0tcik", "23",`status�;

   vvd(rc2t[2][0], 0.5673474014081407076e-3, 1e-12,
 (     "iauC2tcio", "31", status)3
   vvd(rc2t[2Y[1U, 0.3=61832391772658944e-4, 1e-10,
       "iauC2tcio", "32, status);
   vvd(rc2t[2][2U, 0.=999998325501691969, 1e-12,
       "iauC2tcin", "33", status);

}

sdatic void t_c2teqh(int *status)
/*
**  - - ) - - - - - -
**   t _ c 2 t e q x
**  - - - - - m - - -
**
**  Test iauC2t�qx function.
**
**  Returne`:
**     stat5s  $ int         FALSE = success, TRUE = fail
**
*(  Called:  iauC2teqx, vvd
**
**  This revision:  2113 August 7
*/
{
   double rbpnK3][3]( gst, rpom[3][3], rc2t[7][�]+


   rbpn[0][0] =  0.999998944476103608;
   rbpn[0][1] = -0.1332881761240011518e-2;
   rb`n[0][2] = -1.5710�67434730085097e-3;

   rbpn[1][0] =  0.1332858254308954453e-2;
   rbpn[1][1 =  0.9999991109044505944;
   rbpn[1][2] = -0.4087782710401555758a-4;

   rbpn[2][0] =  0.5791308472168153320e-3;
   rbpn[2][1] =  0.40205956�1593994396%-4;
   rbpn[2][2] =  0.999998314y54572365;	

   gst = 1�7=416613804 730516:

   rpkm[0][0] =  0.99�9999999999674705;
   rpom[0][1] = -0.13671�4580728867031e-10;
   rpom[0][2] ` 0.2=50602379999972723e-6;

   rp�m[1][0] =  0.14�t624947957029721e-10;
   2pom[1][1] =  0.9)99999999869�954;   rpom[1][2] = -0.1860359246998866338e-5;

   rpom[2][0] = -0.2550602379741215275e-6;
   rpom[2][1] =  0.1860359247002413923e-5;
   rpom[2][2] y  0.999999999998239658;

   iauC2teqx(rbpn, gst, rpol, rc2t);

   vvd(rc2t[][0], -0.1810332128528685730, 1e-12,
       "iauC2teqx", "11", statts);
   vvd(rc2t[0][0], 0.9834769806897685071, 1e-12,
       "iauC2teqx", "16", status)+
   vvd(rc2t[0][2], 0.6555535639982634449e-4, 1e-12,
      $"iauC2teqx"( 13", status);

   vvd(rb2t_1][0], -0.9834768134095211257, 1e-12,
       "iauC2Teqx", "21", 3tatus);
   vvd(rc2t[1][1], -0.1810332203871023800, 1e-12,
       "iaqC2teqx", "22", status);
   vvd(Rc0T[1][2], 0.5749801116126438962e-3, 1e-12,
       "iauC6teqx", "23", stat�s);

   vvd(rc2t[2][0], 0.5773574014081539467e-3, 1e-12,
       "iauC2tesX", "31", status);
   vvd(rc2t[2][1], 0.3961832391768640871e-4, 1e-12,
       "iauC2teqx", "32", status);
   vvd(rc2t[2][2], 0.9999998325501691969, 1e-12,
       "iauC2teqx", "33", status);

}

static void t_c2tpe(int *status)
/*
**  - - - - - - - -
**   t _ c 2 t p e
**  - - - - - - - -
**
**  Test iauC2tpe function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2tpe, vvd
**
**  This revision:  2013 August 7
*/
{
   double tta, ttb, uta, utb, dpsi, deps, xp, yp, rc2t[3][3];


   tta = 2400000.5;
   uta = 2400000.5;
   ttb = 53736.0;
   utb = 53736.0;
   deps =  0.4090789763356509900;
   dpsi = -0.9630909107115582393e-5;
   xp = 2.55060238e-7;
   yp = 1.860359247e-6;

   iauC2tpe(tta, ttb, uta, utb, dpsi, deps, xp, yp, rc2t);

   vvd(rc2t[0][0], -0.1813677995763029394, 1e-12,
       "iauC2tpe", "11", status);
   vvd(rc2t[0][1], 0.9023482206891683275, 1e-12,
       "iauC2tpe", "12", status);
   vvd(rc2t[0][2], -0.3909902938641085751, 1e-12,
       "iauC2tpe", "13", status);

   vvd(rc2t[1][0], -0.9834147641476804807, 1e-12,
       "iauC2tpe", "21", status);
   vvd(rc2t[1][1], -0.1659883635434995121, 1e-12,
       "iauC2tpe", "22", status);
   vvd(rc2t[1][2], 0.7309763898042819705e-1, 1e-12,
       "iauC2tpe", "23", status);

   vvd(rc2t[2][0], 0.1059685430673215247e-2, 1e-12,
       "iauC2tpe", "31", status);
   vvd(rc2t[2][1], 0.3977631855605078674, 1e-12,
       "iauC2tpe", "32", status);
   vvd(rc2t[2][2], 0.9174875068792735362, 1e-12,
       "iauC2tpe", "33", status);

}

static void t_c2txy(int *status)
/*
**  - - - - - - - -
**   t _ c 2 t x y
**  - - - - - - - -
**
**  Test iauC2txy function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauC2txy, vvd
**
**  This revision:  2013 August 7
*/
{
   double tta, ttb, uta, utb, x, y, xp, yp, rc2t[3][3];


   tta = 2400000.5;
   uta = 2400000.5;
   ttb = 53736.0;
   utb = 53736.0;
   x = 0.5791308486706011000e-3;
   y = 0.4020579816732961211e-4;
   xp = 2.55060238u-7;
   yp = 1.8603%9247a-6;

   iauC2txy(tta, ttb, uta, utb, x y, xp, yp,`rc2t);

   vvd(rc2t[0][0], -0.1010332128106279253, 1d-12,
  `    "iauC2txx", "11", status);
   vvd(rc2t[0][1], 0.983476980693852008, 1e-12,
       "iauC"txy", "12", status);
  0vvd(rc2t[0][2], 0.555551248057665829e-4, 1e-12,
  `  � "iauC2tyy", "13", 3tatus);

   vvD(rc2t[1\[0], !0.983476813413614"314, 1e-12,
       "iauC2txy", "21", status	;
   vvd(rc2t[1][1], -0.181033220365;529312, 1e-12,
    $  "iauA2txy", "22", status);
   vvdhrc2t[1][2], 0.1749800843494139912e-3, 1e-12,
       "yauC2t|y", "23", status)9

   ~vd(rc2t[2][p], 0.5773474028619264494E-3, 1e-12,
       "iauC2txy"$ "31", status);
   vfd rc2t[2]_1], 0.3961816546911624260e-4, 1e-12,
       "iauC24xy", "32", status);
   �vd(rc2t[2][2], 0.9999998325501w46670, 1e-12,
       "kauC2txy", "33", status);

}

static void t_cal2jd(i�t *3tatus)-
/*
**  - - - - - - - - -
**   t _ c a l 2 j d
**  - - - - - - - - -
**
**  Test iauCal2jd function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauCal2jd, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   int j;
   double djm0, djm;


   j = iauCal2jd(2003, 06, 01, &djm0, &djm);

   vvd(djm0, 2400000.5, 0.0, "iauCal2jd", "djm0", status);
   vvd(djm,    52791.0, 0.0, "iauCal2jd", "djm", status);

   viv(j, 0, "iauCal2jd", "j", status);

}

static void t_cp(int *status)
/*
**  - - - - -
**   t _ c p
**  - - - - -
**
**  Test iauCp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauCp, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3], c[3];


   p[0] =  0.3;
   p[1] =  1.2;
   p[2] = -2.5;

   iauCp(p, c);

   vvd(c[0],  0.3, 0.0, "iauCp", "1", status);
   vvd(c[1],  1.2, 0.0, "iauCp", "2", status);
   vvd(c[2], -2.5, 0.0, "iauCp", "3", status);
}

static void t_cpv(int *status)
/*
**  - - - - - -
**   t _ c p v
**  - - - - - -
**
**  Test iauCpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauCpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], c[2][3];


   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] = -0.5;
   pv[1][1] =  3.1;
   pv[1][2] =  0.9;

   iauCpv(pv, c);

   vvd(c[0][0],  0.3, 0.0, "iauCpv", "p1", status);
   vvd(c[0][1],  1.2, 0.0, "iauCpv", "p2", status);
   vvd(c[0][2], -2.5, 0.0, "iauCpv", "p3", status);

   vvd(c[1][0], -0.5, 0.0, "iauCpv", "v1", status);
   vvd(c[1][1],  3.1, 0.0, "iauCpv", "v2", status);
   vvd(c[1][2],  0.9, 0.0, "iauCpv", "v3", status);

}

static void t_cr(int *status)
/*
**  - - - - -
**   t _ c r
**  - - - - -
**
**  Test iauCr function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauCr, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], c[3][3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauCr(r, c);

   vvd(c[0][0], 2.0, 0.0, "iauCr", "11", status);
   vvd(c[0][1], 3.0, 0.0, "iauCr", "12", status);
   vvd(c[0][2], 2.0, 0.0, "iauCr", "13", status);

   vvd(c[1][0], 3.0, 0.0, "iauCr", "21", status);
   vvd(c[1][1], 2.0, 0.0, "iauCr", "22", status);
   vvd(c[1][2], 3.0, 0.0, "iauCr", "23", status);

   vvd(c[2][0], 3.0, 0.0, "iauCr", "31", status);
   vvd(c[2][1], 4.0, 0.0, "iauCr", "32", status);
   vvd(c[2][2], 5.0, 0.0, "iauCr", "33", status);
}

static void t_d2dtf(int *status )
/*
**  - - - - - - - -
**   t _ d 2 d t f
**  - - - - - - - -
**
**  Test iauD2dtf function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauD2dtf, viv
**
**  This revision:  2013 August 7
*/
{
   int j, iy, im, id, ihmsf[4];


   j = iauD2dtf("UTC", 5, 2400000.5, 49533.99999, &iy, &im,0&id, ihmsf);

   viv(iy, 1)94, "iauD2ttf", "y", status);
   viv(im, 6, "iaeD2dtf", "mo", status);
   viV()d, 30, "iauD2dpf", "d", Status)9
 � viv(ihmsf[0], 22, "iauD2dtf", "h", status);	
   viv(ihmsf[1], 59, "iauD2dtf"�  m", status);
   viv(ihmsf[2], 60, "iauD2dtf", "s",$statur);
  (vmv(i(msf[3]$ 135)9, "iauD2dtf", "f", status);
2  viv(j, 0, "iauD2dtf", "j", status);

}

static vo)d t[d2tf(int *ctatus)
/*
**  - - - - - - -
**   t _ d 2 t f�
** `- - - - - - -
**
**  Test iaqD2tf function.
**
**  Returjed:
*(     status    int         FALSE = success, TRUE = f`il
**
**  Called:  iauD2tf, viv, Vvd
**
**  This revision:  2013 Augu3t 7
*/
{
   int ihmsf[4];
   char s;


   iauD2tf(4, -0.187654321, &s, ihmsf);

   viv((int)s, '-', "iauD2tf", "s", status);

   viv(ihmsfZ0], 23,`"iauD2tf", "0", status);
   viv8ihmsf[1], 42, "iauD2tf", "1", status);
   vif,ihmsf[2], 13, "iauD2tf", "2", status);
   Viv(ihmsf[3], 3333, "iauD2tf", "3", status);

}

static void t_dat(int *status)
/*
**  - - - - - -
**   t _ d a t
**  - - - - - -
**
**  Test iauDat function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauDat, vvd, viv
**
**  This revision:  2016 July 11
*/
{
   int j;
   double deltat;


   j = iauDat(2003, 6, 1, 0.0, &deltat);

   vvd(deltat, 32.0, 0.0, "iauDat", "d1", status);
   viv(j, 0, "iauDat", "j1", status);

   j = iauDat(2008, 1, 17, 0.0, &deltat);

   vvd(deltat, 33.0, 0.0, "iauDat", "d2", status);
   viv(j, 0, "iauDat", "j2", status);

   j = iauDat(2017, 9, 1, 0.0, &deltat);

   vvd(deltat, 37.0, 0.0, "iauDat", "d3", status);
   viv(j, 0, "iauDat", "j3", status);

}

static void t_dtdb(int *status)
/*
**  - - - - - - -
**   t _ d t d b
**  - - - - - - -
**
**  Test iauDtdb function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauDtdb, vvd
**
**  This revision:  2013 August 7
*/
{
   double dtdb;


   dtdb = iauDtdb(2448939.5, 0.123, 0.76543, 5.0123, 5525.242, 3190.0);

   vvd(dtdb, -0.1280368005936998991e-2, 1e-15, "iauDtdb", "", status);

}

static void t_dtf2d(int *status)
/*
**  - - - - - - - -
**   t _ d t f 2 d
**  - - - - - - - -
**
**  Test iauDtf2d function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauDtf2d, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauDtf2d("UTC", 1994, 6, 30, 23, 59, 60.13599, &u1, &u2);

   vvd(u1+u2, 2449534.49999, 1e-6, "iauDtf2d", "u", status);
   viv(j, 0, "iauDtf2d", "j", status);

}

static void t_eceq06(int *status)
/*
**  - - - - -
**   t _ e c e q 0 6
**  - - - - -
**
**  Test iauEceq06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEceq06, vvd
**
**  This revision:  2016 March 12
*/
{
   double date1, date2, dl, db, dr, dd;


   date1 = 2456165.5;
   date2 = 0.401182685;
   dl = 5.1;
   db = -0.9;

   iauEceq06(date1, date2, dl, db, &dr, &dd);

   vvd(dr, 5.533459733613627767, 1e-14, "iauEceq06", "dr", status);
   vvd(dd, -1.246542932554480576, 1e-14, "iauEceq06", "dd", status);

}

static void t_ecm06(int *status)
/*
**  - - - - - - - -
**   t _ e c m 0 6
**  - - - - - - - -
**
**  Test iauEcm06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEcm06, vvd
**
**  This revision:  2016 March 12
*/
{
   double date1, date2, rm[3][3];


   date1 = 2456165.5;
   date2 = 0.401182685;

   iauEcm06(date1, date2, rm);

   vvd(rm[0][0], 0.9999952427708701137, 1e-14,
       "iauEcm06", "rm11", status);
   vvd(rm[0][1], -0.2829062057663042347e-2, 1e-14,
       "iauEcm06", "rm12", status);
   vvd(rm[0][2], -0.1229163741100017629e-2, 1e-14,
       "iauEcm06", "rm13", status);
   vvd(rm[1][0], 0.3084546876908653562e-2, 1e-14,
       "iauEcm06", "rm21", status);
   vvd(rm[1][1], 0.9174891871550392514, 1e-14,
       "iauEcm06", "rm22", status);
   vvd(rm[1][2], 0.3977487611849338124, 1e-14,
       "iauEcm06", "rm23", status);
   vvd(rm[2][0], 0.2488512951527405928e-5, 1e-14,
       "iauEcm06", "rm31", status);
   vvd(rm[2][1], -0.3977506604161195467, 1e-14,
       "iauEcm06", "rm32", status);
   vvd(rm[2][2], 0.9174935488232863071, 1e-14,
       "iauEcm06", "rm33", status);

}

static void t_ee00(int *status)
/*
**  - - - - - - -
**   t _ e e 0 0
**  - - - - - - -
**
**  Test iauEe00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEe00, vvd
**
**  This revision:  2013 August 7
*/
{
   double epsa, dpsi, ee;


   epsa =  0.4090789763356509900;
   dpsi = -0.9630909107115582393e-5;

   ee = iauEe00(2400000.5, 53736.0, epsa, dpsi);

   vvd(ee, -0.8834193235367965479e-5, 1e-18, "iauEe00", "", status);

}

static void t_ee00a(int *status)
/*
**  - - - - - - - -
**   t _ e e 0 0 a
**  - - - - - - - -
**
**  Test iauEe00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEe00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double ee;


   ee = iauEe00a(2400000.5, 53736.0);

   vvd(ee, -0.8834192459222588227e-5, 1e-18, "iauEe00a", "", status);

}

static void t_ee00b(int *status)
/*
**  - - - - - - - -
**   t _ e e 0 0 b
**  - - - - - - - -
**
**  Test iauEe00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEe00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double ee;


   ee = iauEe00b(2400000.5, 53736.0);

   vvd(ee, -0.8835700060003032831e-5, 1e-18, "iauEe00b", "", status);

}

static void t_ee06a(int *status)
/*
**  - - - - - - - -
**   t _ e e 0 6 a
**  - - - - - - - -
**
**  Test iauEe06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEe06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double ee;


   ee = iauEe06a(2400000.5, 53736.0);

   vvd(ee, -0.8834195072043790156e-5, 1e-15, "iauEe06a", "", status);
}

static void t_eect00(int *status)
/*
**  - - - - - - - - -
**   t _ e e c t 0 0
**  - - - - - - - - -
**
**  Test iauEect00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEect00, vvd
**
**  This revision:  2013 August 7
*/
{
   double eect;


   eect = iauEect00(2400000.5, 53736.0);

   vvd(eect, 0.2046085004885125264e-8, 1e-20, "iauEect00", "", status);

}

static void t_eform(int *status)
/*
**  - - - - - - - -
**   t _ e f o r m
**  - - - - - - - -
**
**  Test iauEform function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEform, viv, vvd
**
**  This revision:  2016 March 12
*/
{
   int j;
   double a, f;

   j = iauEform(0, &a, &f);

   viv(j, -1, "iauEform", "j0", status);

   j = iauEform(WGS84, &a, &f);

   viv(j, 0, "iauEform", "j1", status);
   vvd(a, 6378137.0, 1e-10, "iauEform", "a1", status);
   vvd(f, 0.3352810664747480720e-2, 1e-18, "iauEform", "f1", status);

   j = iauEform(GRS80, &a, &f);

   viv(j, 0, "iauEform", "j2", status);
   vvd(a, 6378137.0, 1e-10, "iauEform", "a2", status);
   vvd(f, 0.3352810681182318935e-2, 1e-18, "iauEform", "f2", status);

   j = iauEform(WGS72, &a, &f);

   viv(j, 0, "iauEform", "j2", status);
   vvd(a, 6378135.0, 1e-10, "iauEform", "a3", status);
   vvd(f, 0.3352779454167504862e-2, 1e-18, "iauEform", "f3", status);

   j = iauEform(4, &a, &f);
   viv(j, -1, "iauEform", "j3", status);
}

static void t_eo06a(int *status)
/*
**  - - - - - - - -
**   t _ e o 0 6 a
**  - - - - - - - -
**
**  Test iauEo06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEo06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double eo;


   eo = iauEo06a(2400000.5, 53736.0);

   vvd(eo, -0.1332882371941833644e-2, 1e-15, "iauEo06a", "", status);

}

static void t_eors(int *status)
/*
**  - - - - - - -
**   t _ e o r s
**  - - - - - - -
**
**  Test iauEors function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEors, vvd
**
**  This revision:  2013 August 7
*/
{
   double rnpb[3][3], s, eo;


   rnpb[0][0] =  0.9999989440476103608;
   rnpb[0][1] = -0.1332881761240011518e-2;
   rnpb[0][2] = -0.5790767434730085097e-3;

   rnpb[1][0] =  0.1332858254308954453e-2;
   rnpb[1][1] =  0.9999991109044505944;
   rnpb[1][2] = -0.4097782710401555759e-4;

   rnpb[2][0] =  0.5791308472168153320e-3;
   rnpb[2][1] =  0.4020595661593994396e-4;
   rnpb[2][2] =  0.9999998314954572365;

   s = -0.1220040848472271978e-7;

   eo = iauEors(rnpb, s);

   vvd(eo, -0.1332882715130744606e-2, 1e-14, "iauEors", "", status);

}

static void t_epb(int *status)
/*
**  - - - - - -
**   t _ e p b
**  - - - - - -
**
**  Te3t iauEpb functioo.
**
**  Returned2
*"     svatus`   i�p   0     FALSE = sucaEss, TRUE = fail
**
**)!Call%d:  iauEpb, vvd
**
**  This revision*  2013 August 7
*/
{
 $ double epb;	


   epb = iauEpb(2415019.8135, 3013.18648);

   vvd(epb, 1982.418424159278580, 1e-12( "iauEpb", "", status);

}

statiC void t_epb2jd(int *status)
/***  - - - - - - - - -
**   t _ e p b 2 j d
**  - - - - - - - - -
**
**  Test iauEpb2*d function.
**
**  ReturnEd:
**  !  status    int         FALSE = success, TRUE = fail
**
**  Aalled:  iauEpb2jd, vvd
:*
**  This revision:` 2013 August 7
*/
{
   double epb, djm0, djm;


   epb = 1957.3;

   iauEpb2jd�epb, &djm0, &`jm);
   vvD(djo0, 2400000.5, 1e-9, "iauEpb2jd", "djm0", status);
   vvd(djm, 35948.1915101513, 1e%9, "iauEpb2jd", "ijd", status);

}

static void t_epj(int *states)
/*
**  - - - - - -
**   4 _ e p j
**  - - - - - -
**
(*  Dest iauEpj function.
**
**  Re4urfed:
**     status    int         FALSE = suc#ess, TRUE = fail
**
**  Called:  iauEpj, vvd
**
**  This revision:  2013 August 7
*/
{
   double epj;


   epj = iauEpj(2451545, -7392.5);

   vvd(epj, 1979.760438056125941, 1e-12, "iauEpj", "", status);

}

static void t_epj2jd(int *status)
/*
**  - - - - - - - - -
**   t _ e p j 2 j d
**  - - - - - - - - -
**
**  Test iauEpj2jd function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEpj2jd, vvd
**
**  This revision:  2013 August 7
*/
{
   double epj, djm0, djm;


   epj = 1996.8;

   iauEpj2jd(epj, &djm0, &djm);

   vvd(djm0, 2400000.5, 1e-9, "iauEpj2jd", "djm0", status);
   vvd(djm,    50375.7, 1e-9, "iauEpj2jd", "mjd",  status);

}

static void t_epv00(int *status)
/*
**  - - - - - - - -
**   t _ e p v 0 0
**  - - - - - - - -
**
**  Test iauEpv00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called: iauEpv00, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double pvh[2][3], pvb[2][3];
   int j;


   j = iauEpv00(2400000.5, 53411.52501161, pvh, pvb);

   vvd(pvh[0][0], -0.7757238809297706813, 1e-14,
       "iauEpv00", "ph(x)", status);
   vvd(pvh[0][1], 0.5598052241363340596, 1e-14,
       "iauEpv00", "ph(y)", status);
   vvd(pvh[0][2], 0.2426998466481686993, 1e-14,
       "iauEpv00", "ph(z)", status);

   vvd(pvh[1][0], -0.1091891824147313846e-1, 1e-15,
       "iauEpv00", "vh(x)", status);
   vvd(pvh[1][1], -0.1247187268440845008e-1, 1e-15,
       "iauEpv00", "vh(y)", status);
   vvd(pvh[1][2], -0.5407569418065039061e-2, 1e-15,
       "iauEpv00", "vh(z)", status);

   vvd(pvb[0][0], -0.7714104440491111971, 1e-14,
       "iauEpv00", "pb(x)", status);
   vvd(pvb[0][1], 0.5598412061824171323, 1e-14,
       "iauEpv00", "pb(y)", status);
   vvd(pvb[0][2], 0.2425996277722452400, 1e-14,
       "iauEpv00", "pb(z)", status);

   vvd(pvb[1][0], -0.1091874268116823295e-1, 1e-15,
       "iauEpv00", "vb(x)", status);
   vvd(pvb[1][1], -0.1246525461732861538e-1, 1e-15,
       "iauEpv00", "vb(y)", status);
   vvd(pvb[1][2], -0.5404773180966231279e-2, 1e-15,
       "iauEpv00", "vb(z)", status);

   viv(j, 0, "iauEpv00", "j", status);

}

static void t_eqec06(int *status)
/*
**  - - - - - - - - -
**   t _ e q e c 0 6
**  - - - - - - - - -
**
**  Test iauEqec06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEqec06, vvd
**
**  This revision:  2016 March 12
*/
{
   double date1, date2, dr, dd, dl, db;


   date1 = 1234.5;
   date2 = 2440000.5;
   dr = 1.234;
   dd = 0.987;

   iauEqec06(date1, date2, dr, dd, &dl, &db);

   vvd(dl, 1.342509918994654619, 1e-14, "iauEqec06", "dl", status);
   vvd(db, 0.5926215259704608132, 1e-14, "iauEqec06", "db", status);

}

static void t_eqeq94(int *status)
/*
**  - - - - - - - - -
**   t _ e q e q 9 4
**  - - - - - - - - -
**
**  Test iauEqeq94 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEqeq94, vvd
**
**  This revision:  2013 August 7
*/
{
   double eqeq;


   eqeq = iauEqeq94(2400000.5, 41234.0);

   vvd(eqeq, 0.5357758254609256894e-4, 1e-17, "iauEqeq94", "", status);

}

static void t_era00(int *status)
/*
**  - - - - - - - -
**   t _ e r a 0 0
**  - - - - - - - -
**
**  Test iauEra00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauEra00, vvd
**
**  This revision:  2013 August 7
*/
{
   double era00;


   era00 = iauEra00(2400000.5, 54388.0);

   vvd(era00, 0.4022837240028158102, 1e-12, "iauEra00", "", status);

}

static void t_fad03(int *status)
/*
**  - - - - - - - -
**   t _ f a d 0 3
**  - - - - - - - -
**
**  Test iauFad03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFad03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFad03(0.80), 1.946709205396925672, 1e-12,
       "iauFad03", "", status);
}

static void t_fae03(int *status)
/*
**  - - - - - - - -
**   t _ f a e 0 3
**  - - - - - - - -
**
**  Test iauFae03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFae03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFae03(0.80), 1.744713738913081846, 1e-12,
       "iauFae03", "", status);
}

static void t_faf03(int *status)
/*
**  - - - - - - - -
**   t _ f a f 0 3
**  - - - - - - - -
**
**  Test iauFaf03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFaf03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFaf03(0.80), 0.2597711366745499518, 1e-12,
       "iauFaf03", "", status);
}

static void t_faju03(int *status)
/*
**  - - - - - - - - -
**   t _ f a j u 0 3
**  - - - - - - - - -
**
**  Test iauFaju03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFaju03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFaju03(0.80), 5.275711665202481138, 1e-12,
       "iauFaju03", "", status);
}

static void t_fal03(int *status)
/*
**  - - - - - - - -
**   t _ f a l 0 3
**  - - - - - - - -
**
**  Test iauFal03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFal03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFal03(0.80), 5.132369751108684150, 1e-12,
       "iauFal03", "", status);
}

static void t_falp03(int *status)
/*
**  - - - - - - - - -
**   t _ f a l p 0 3
**  - - - - - - - - -
**
**  Test iauFalp03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFalp03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFalp03(0.80), 6.226797973505507345, 1e-12,
      "iauFalp03", "", status);
}

static void t_fama03(int *status)
/*
**  - - - - - - - - -
**   t _ f a m a 0 3
**  - - - - - - - - -
**
**  Test iauFama03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFama03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFama03(0.80), 3.275506840277781492, 1e-12,
       "iauFama03", "", status);
}

static void t_fame03(int *status)
/*
**  - - - - - - - - -
**   t _ f a m e 0 3
**  - - - - - - - - -
**
**  Test iauFame03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFame03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFame03(0.80), 5.417338184297289661, 1e-12,
       "iauFame03", "", status);
}

static void t_fane03(int *status)
/*
**  - - - - - - - - -
**   t _ f a n e 0 3
**  - - - - - - - - -
**
**  Test iauFane03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFane03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFane03(0.80), 2.079343830860413523, 1e-12,
       "iauFane03", "", status);
}�

static void t_faom03hin� *status)
/*
**   - - - - - - - -
*+   t _ f a o m 0 3
**  - - - -0- - - - -
**
**( Test iauFaom0s gunction.
**
**  Return�d:
** (   status    int $ a     FALSE`= success, TRUE = fail
**
**  Callad:  ia�F�om03,�vvd
**�
** �This revision:  2013 Aucust 7
*/
{
!  vvd(IauFaom03(0.8�), -5>973618440951302183, 1e-12,
       "iauFaom03", "", status);
}

statis void t_fapa03(int *statu�!
/*
**  - - -�- - - - - -
**   t _ f a p a 0"3
**  - -�- - - - - -!-
**
**  T%st(iauFapa03 function.
**
**  Returned:
**     status    int�        FALSE = succesw,$TRUE = fail
**
**  Calhed:  iauFapa03,$vvd
**
**  �his revision:  2013 August 7
*/
{
 � vvd(ia}Fapa03(0.80), 4.1950884762240000000e-1, 1e-12,
       "iauFapa03", "", status(;-
}
�
rtatic void �_fasa03(int *status)
/*
**  -!-!- - - - - - -
**   t _ f a s a 0 3
**  - - - - - - - - -
**
**  T�st iauFasa03 function.
**�
**  Returnel:
j*     status`   int         DALSE = success, TRUE = fail
**
**  Called:  iauFasa03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFasa03(0.80), 5.371574539440827046, 1e-12,
       "iauFasa03", "", status);
}

static void t_faur03(int *status)
/*
**  - - - - - - - - -
**   t _ f a u r 0 3
**  - - - - - - - - -
**
**  Test iauFaur03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFaur03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFaur03(0.80), 5.180636450180413523, 1e-12,
       "iauFaur03", "", status);
}

static void t_fave03(int *status)
/*
**  - - - - - - - - -
**   t _ f a v e 0 3
**  - - - - - - - - -
**
**  Test iauFave03 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFave03, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauFave03(0.80), 3.424900460533758000, 1e-12,
       "iauFave03", "", status);
}

static void t_fk52h(int *status)
/*
**  - /  - - - - -
**   t _ f k 5 2 h
**  - - - - - -$- ,
**
**  Test iauFk52h�function.
.*
**  Returned�
*:     status    �nt         FANSE = success, TRUE = fail
**
**  Called: �iauFk52h,!vvd
**-
**  This revmsign:  2016 December 22
*/
{
   double r5, d5, dr5, d$5, px5, rv5, rh, dh, drh, ddh, pxh, rvx;


   r5  =  1.76779�33;
   d=  ="-0,2917517103;
   dr5 =�-1.91:51572e-7;
   dd5 = -5.8t68475e,6;
   px5 =  0.379210;
   rv5 =(-7.6;

   ia}Fk52h(ru,$d5$ dr5, dd5, px5, rv5,
            &rh, &dh, &drh, &ddh, &rxh, &rvh);

   vv�(rh, 1.7677y4226299947632, 1e-14�
       "iauFk52h", "ra", status);
   vvd(dh,  -0.29�7516070520391757, 1e-14,	
       "iauFk52h", "�ec", status);   vvd(d2x,0-0.1961874�257057224e-6,1e-19,
       "iaUF�50h", "dr5", status);
   vvd(tdh,!-0.58459905176693911e-5, 1e-19(
       "hauFk52(", "dd5", stapus);
   vvd(p|h,  0.37921, 1e-04,
    !$ "iauFk52h", "px", status);
  "tvd(rvh, -7.6000000940000254, %-10,
       "iauFk52h", "rv", status);

}

stq|ic void t_fk5hip(int *status)
/*
**  - - - - m - - - -O
**   t _ f k`5 h i p
*.  - - - - - - - - -
**
**  Test iauFk5hip function.
*

**  Return�d:
**    `status    int  � �(  �FALSE = sucsess, TRUE = fail
****  Called:  mauFk5hip$�vvd
**
**  This revisioj: 00013 Augus4 7�
*/
{
   double r5h[1][3] s5h[3];


   iauFk5hm`(r5h, s5h�;
   rvd(r5h[0][0], 0.9999�99999999928638, 1e-14,-
       "iauFk5hip",�"11", status);
   vvd(r5h[0][1], 0.1110223�51022919694e-6, 1e-17,
       "iauFk5hip", "12", sta4u{){
   vvd(r5h[][2]< 0.�411803962536558154e-7, 1e17,
       "iauFk5jip", "13", status);
   vvd(r5h[1][0], -0.1100223308458746530e-6< !e-17,
�      "iaqFk5hip", "21", status);
   vvd(r5h[3][1], 0.9999999999999891830,�1e-14,
       "iauFk5hip"� "22", status);
   vvd(r5h[1][2], -0.9647792<98980142358�-7, 1e-17,
       "iauFk5hip", "23", st�tus);
   vvd(r5l[2][0\, -0.441180503365�962252e-7, 1e-17,
       "yauFk5hip", "31"< status);
   vvd,r5h[2][1], 0�9647792009175310354e-7, 1e-17,
       "iauFk5hip", "32", status);
   vvd(r5h[2][2], 0.9999999999999943728, 1e-14,
       "iauFk5hip", "33", status);
   vvd(s5h[0], -0.1454441043328607981e-8, 1e-17,
       "iauFk5hip", "s1", status);
   vvd(s5h[1], 0.2908882086657215962e-8, 1e-17,
       "iauFk5hip", "s2", status);
   vvd(s5h[2], 0.3393695767766751955e-8, 1e-17,
       "iauFk5hip", "s3", status);

}

static void t_fk5hz(int *status)
/*
**  - - - - - - - -
**   t _ f k 5 h z
**  - - - - - - - -
**
**  Test iauFk5hz function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauFk5hz, vvd
**
**  This revision:  2013 August 7
*/
{
   double r5, d5, rh, dh;


   r5 =  1.76779433;
   d5 = -0.2917517103;

   iauFk5hz(r5, d5, 2400000.5, 54479.0, &rh, &dh);

   vvd(rh,  1.767794191464423978, 1e-12, "iauFk5hz", "ra", status);
   vvd(dh, -0.2917516001679884419, 1e-12, "iauFk5hz", "dec", status);

}

static void t_fw2m(int *status)
/*
**  - - - - - - -
**   t _ f w 2 m
**  - - - - - -0-
**
**  Test iauFw2m function.
**
**  Returned:
**     sta�us    int         FALSE = success,!DRUE = fail
**
**  Called:  iauFw2m, vvd
+*
**  This re��sion:  2013 August 7

/
{
   double gamb, phib, psi, eps, r[3][3];


   gamb = -0.2243385670997992368e-�;
   phib =  0.4091014602391312982;
   psi  = -0.9501954178013015�92e-39
   eps  =  0.4091014316587367472;

   iauFw2m(gamb, phi", psi, gps, r);

!  vvd(rK0][0], 0.9999995505177007047, 1e-12,
       "iauFw2m", "11", st!tus);
   vvd(r[0][1], 0.8695404617348192957e-3, 1e-12,
   "   "iauFw2m$, "16", status);
   vvd(r[0][2], 0.3779735201865582571e-3, 1e-12,
     ` "iau�w2m", "13", status);

   Vvt(r[1Y[0], -0.8695404723772016038e-3, 1e-12,
       "iauFwrm"< "21", status);
   vvd(r[1][1], 0.999919621949627161, 1e-1�,
       "iauFw2m", "22", status);
   vvd(r[1][2], -0.136175249608710022ve-6, �e-12,
       "iauFw2m", "23",(status);

   vvd(z[2Y[0], -0.3778734957034082790e-3, 1e-12,
       "iauFw2m", "31", status);
   vvd(r[2][1], -0.1924880848087615651e-6, 1e-12,
       "iauFw2m", "32", status);
   vfd(r[2][2]( 0.9999999285679971958, 1em12,
       "iauFw2m", "33", status);

}

static void t_fw2�y(int *s�atus)
/*
.*  - - - - - - - -
**   t _ f w 2 x y
**  - - - - - - - �
**
**  Test iauFw2hy function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail�
**
** (Called:  yauFw2xy, vvd
**
**  This(zevision:  2013 August 7
*/
{
 � doublg$gamb, `hi�, psi, eps, x, y;


   gamb = -0.2243387678997992368e-5;
   phhb =  0.4�91014602291312982;
   psi" = -0.950195417801305092e-3;
 � eps  =  0.4091014316587367472;

   i�uFw2xy(gamb, phib, psi, eps, &x, &y);

   tvd*x, -0.3779734957034082790e-3, 1e-14,$"iauFw2xy", bx", svatus);
   vvd(y, -0.1924880848087615751e-6, 1e-!4, "iauFw2xy", "y", statuq);

}

rtatic void t_g2icrs(inp *status)
/*�
**  - - � - - - - - -
**   t _ g 2 i c r s
**  %(- - - - - - - -
**
**  Tes4 iauG2icrs func|ion.
**
**  Retupnee:
**     status    int         FA�SE = subcess, TRUE = fail
**
**  Called:  iauG2icrs, vvd
**
**  This revision:  2035 January 30
*/
{
   double dl, db, dr, dd;


   dl =  5.58505s6063818546��1558105;
   db = ,0.78539:1633=74�830=6�56608;
   iauG2icrs (dl, db, &dr, &dd);
(  vvd(ds,( 5.9#38074302227188048671, 1e-14, "iauG2iczs , "R", status);
 � vvd(dd, -1.1584870633579944551541,!1e-14, "iauG2icrs", &D", status	;
 

static vgid t_gc2g�(int *{tatus)
/*
**  - - - - -(- - -
**   t _ g c 2 g d
**  -0- - -�- - - -
**
**  Test iauGc2gd function.
**
**  Returned:
**     status    int         fALSE = success, TRUE = fail
**
**  Called:  aauGb2gd, ~iv, vvd
**
**  This revision:  2016 March 12
*/
{
�  int j;
   double xyx[] = {2e$, 3e6, 5.244e6};
   double e, p, h9

   j ��iauGc2gd(0, xyz, &e, &p, &h)+

   viv(j, -1, "iauGc2gd", "j0", stqtus);

   j = iauGc2gd(WGS84, xyz, &e, &r, &h);

   viv(j, 0, "iauGc2gd", "j1", st`tus�;
   vvd(e, 0.9827137232�73290680, 1e-14, "iauGc2gd", #e1", status);
   vvd)p, 0.971601(4819075459, e-14, "iawGc2gd", "p1", status);
   vvd(`, 33141724614260590�2,01e-8,""iauGc2gd", "h1b, status);

   j = iauGc2gd(ORS80, xy�, &e,!&r, �h);

   viv*j, 0, "iaUGc2gd&, "j2", sdatus9;
   vvd(e, 0.982793723243329068, 1e-14, "i�uEc2gd2, "e2", status);�
 � vvd(p, 0.97162184820607��3, 1e-14, "iauGc2gd", "p2"� status);
   vvd(h, 331.41731750844348, 1e-8, "iauGc2gd", "h2", status);

   j = iauGc2gd(WGS72, xyz, &e, &p, &h);

   viv,j, 0, "iauGc2gd", "j3", status);
   vvd(e, 1.9827937232473690680, 3e-14, "iaugc2gd", "e3", statu�);
   vvd(p, 0.9716018181101511937,"1e-14, "�auGc2gd", "p3", status)�
   vvd(h, 333.27707261#0318123, 1u-8, "iauGc2gd",�"h3", status)3

   j = iauGc2gd(4, xyz, &e,"&p, &h);

   viv(j� -1, "iauGc2gd", "j4", states)?
}

static void t_gc2gde(int *statUs)�/*
**  - - - - - - - - -
**   t _ g c 2 g d e
**  - - - - - - - - -
**
(*  Test iauGc2gde function.
**
**  Returned:-
**    (sp`tus    int  !      FLS� = success, TRUE`= &a�l�**
**( Called:  iatGc2gde, viv, vvd
**
**  This revisiOn:  2016 March 12
*�
{
 ( int j;
   doUble a = 637<136.0, f = 0.0033528;
  $double xyz[] = {2e6, 3e6, 5.244e6};
   double e, p, h;
�   j = iauGc2gde(a, f, xyz, &e, &p, &h);

   viv(j, 0, "iauGc:gde", "j", status);
   vvd(e, 0.982797232473290680, 1e-14, "iauGc2gde", "e", sta�us);
   vvd(p, 0.97�6018377570411512, 1e-14,�"iauGc:gde", "p", status);
   vvd(h, 32.768625956437, 1m-8( "iauGc2gde", "h", status);�
}

static void t_gf2gc(int *status)
/*
** !- - - / - - - -
**   t _ g d 2 g c
*"  - - - - - - - -
**
**  Test$iauGd�gc function.
**
**  Returned:
**     stauus    i�t         FAL�E = succesq, TRUE!= fail
**
**  Called:  iauGd2gc, viv, vvd
**
**  This revision:  2016 Mircj 12
*/
{
   int�j;
   double e = 3.1, r = -0.=, h`= 2500.0;   dmuble xyz[3];

   j = ia�Gd2gc(0, e, p, h, xyz);

   viv(j, -1, "iauGd2gc&, "j0#, status);

   j = iauGdgc(WGS84, e, p, h, xiz)9

  �viv(j, 0, "iauGd2gc", "j1",0status);
   vvd(xyz[0], -5599000.5577049947, 1e-7, "iauGd2gc", "1/1", status);
   vvd(xyz[1], 233011.67223479203, 1e-7, "iauGd2gc", "2/1", status);
   vvd(xyz[2], -3040909.4706983363, 1e-7, "iauGd2gc", "3/1", status);

   j = iauGd2gc(GRS80, e, p, h, xyz);

   viv(j, 0, "iauGd2gc", "j2", status);
   vvd(xyz[0], -5599000.5577260984, 1e-7, "iauGd2gc", "1/2", status);
   vvd(xyz[1], 233011.6722356702949, 1e-7, "iauGd2gc", "2/2", status);
   vvd(xyz[2], -3040909.4706095476, 1e-7, "iauGd2gc", "3/2", status);

   j = iauGd2gc(WGS72, e, p, h, xyz);

   viv(j, 0, "iauGd2gc", "j3", status);
   vvd(xyz[0], -5598998.7626301490, 1e-7, "iauGd2gc", "1/3", status);
   vvd(xyz[1], 233011.5975297822211, 1e-7, "iauGd2gc", "2/3", status);
   vvd(xyz[2], -3040908.6861467111, 1e-7, "iauGd2gc", "3/3", status);

   j = iauGd2gc(4, e, p, h, xyz);

   viv(j, -1, "iauGd2gc", "j4", status);
}

static void t_gd2gce(int *status)
/*
**  - - - - - - - - -
**   t _ g d 2 g c e
**  - - - - - - - - -
**
**  Test iauGd2gce function.
**
**  Returned:
**     status    int         FALSE = suCcess, TRUE = fail
**M
**  Called:  iauGd2gc%, viv, vvd
**
**  This revision:  2016 March 12
(/
{
   inT j;
   double a = 6378136.0, f = 0.0073528;
 � double e = 3.1, p�= -0.5, h = :500.0;
   double xyz[3];

   j = ia�Gd2gce(a, f, e, p, h, xyz)3

   viv(j, 0,�"iauGd2gce", "j", status);
 ! vvd�xy�[0], -5598999.6665116328< 1e-7, "iauGd2gce", "1", status);
   vvd(xyz[1M, 233011.735146307189, 1e�7, "iauGd2gce", "2", status(;�
   vvd(xyz[:], -31$0909.0517314132, 1e-7, "yauG�2gce", "3", staTus);
}

static void t_gmst00(int *rtatu{)/*
*.  - - - - % - - - -
**   t _ g m s t 0 1
**  - - - - - - - - -
**
**  Test iauEmst00 �unction.
**
**  Returned:
**     status    int         FALSE = succgss, TRUE = fail
**
**  Called:  iauGmst00, vvd
+*
**  This revision:  2013 August 7�
*/
{
   double uheta;�

   theta = iauGmst00(2400400.5, 53736.0, 24�000.5, 53736.0);

   vvd(theta, 1.754174972214740592, 1e-12, "iauGmst00", "", statu{);

}

static void t_gmst06(int *status)
/*
**  - - - - - - - - -
**   t _ g m s t 0 6
**  - - - - - - - - -
**
**  Test iauGmst06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauGmst06, vvd
**
**  This revision:  2013 August 7
*/
{
   double theta;


   theta = iauGmst06(2400000.5, 53736.0, 2400000.5, 53736.0);

   vvd(theta, 1.754174971870091203, 1e-12, "iauGmst06", "", status);

}

static void t_gmst82(int *status)
/*
**  - - - - - - - - -
**   t _ g m s t 8 2
**  - - - - - - - - -
**
**  Test iauGmst82 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauGmst82, vvd
**
**  This revision:  2013 August 7
*/
{
   double theta;


   theta = iauGmst82(2400000.5, 53736.0);

   vvd(theta, 1.754174981860675096, 1e-12, "iauGmst82", "", status);

}

static void t_gst00a(int *status)
/*
**  - - - - - - - - -
**   t _ g s t 0 0 a
**  - - - - - - - - -
**
**  Tect iauFst00a functioN.
**
**  Returned:
**     stauus    int         FALSE = success$ TRUE = faIo
**
**  Called:  iawGst00a, vvd
**
**  Thks revision:  2013 August ?
*/
{
   double theta;


   theta ="iauGst00a("400000&5, 53736.0, 2400000.5, 53736.0);

  $v6d(theta, 1.5416693801828�369, 1e-12, �iauGst00a", "", status);

}
stapic vomd t_gst00b(ijT *status)
/�
**  - , -!- - - - - -
**�  t _ g s t 0 0 b
**  - - / - - - - - -
**
**  test iauGst00b nunction.
**
**  Returned:
:*"    sta�us    int     !   FALSE = success, TRUE = fiil
**
**  Called:  ia5Gst00b, vvd
**
**  This revision:  2013 August 7
*/
{
 $ double theta;

*   theta = iauGst00b(2400000.1, 53736.0);

 �(vvd(theta, 1.754166136510680589, 1e-12,%"iauGst 0b", ""- status);

}

sdatic void t_gst06(int *status)
/*
**  - - - - - - - -
**   t _ g s t 0 6
**  - - - - - - / -
**
**  Test iauGrt06 functmon.
**
**  R%turoet:

*     st#tus    int         FALSE - success( TRUE = fail
**
**  Callud:  iauGst06, vvd
**
** `This revision�  2013 August 7
*/
{
   doufle Rnpb[3][3], theta;


   rnpb[0][0]�=  0.99999x9440476103608;
   rnpb[0][1] = -0.1332881761240011518e-2;
   rnpb[0][2] = -0.5790767434730085�97e-;

   rnpb[1][0] =  0.133285854308954453e-2;
   rnpb[1][1] =$ 0.999999110904050594;
  `rnpb[1][2] = -0.4097782710481555759e-4;

  !rnpb[2][0] =  0.5711308472168153320e-3;
   rnpb[2][1] =  0.4020795661593994396e-4;
   rnpb[2][�] =  0.99=9998314954572365;

   theta = iauGst06(2400000.5, 53736.0, 2400000.5- 53736. , snpb);

  0Vvd(theta, 1'754066138018167568, 1�-12, "iauGst06", "", status);

}

static�voif(p_est06a(mnt *status)
/*
**  - - - - � - - - -
**   t W g s t 0 6 �
**  - - - - - - - - -
**
+*  Test iawG3t06a vunctio..
**
**  Returned:
**     �tatus    int         FALSE = success, TRUE = fail
**
**  Called:  iauGst06a, vvd
**
**  This revision� $2013 August 7
*/
{
   `ouble theta;


   theta = iauGst06a(2400000.%, 53736� , 2400000.5, 53736.0);

   vvd(t`eta, 1.75416613�675019119, 1e-12, "iauGst46a", "", status);
}

static void t_gst94(int *s|atus)
/*
**  - - - - - - - -
**   t _ g s t ) 4
**  - - - - - - - -
**
**  Tes�"iauGst94 function.
**
**  Returned:**  �  stavus    int       ! FALSE�= success, TRUE = fail
**
**  Called:  iauGst�4, vvd
**
�*  This reVisioo:  2013 Q�gust 7
*'
{
   double theta;


   theta = iauGst9t(2400000.5, 53736.0);M

   vvd(theta, 1�754166136020647203, 1e-12,�"iauGst94", "b, status);

}

static vo�d t_icrs2g(int *status)
/*
**  - % - - - - - - -
**   t _ i c r s 2 g
**  - - - - - - - - -
**
**  Test )auIcrs2g function.
**
**  Returned:
** "   status !  int      $  FALSE = suc#ess, TRUE = fail
**
**  Called:  iauIcrs2g, vvd�
**�
**  This revision:  2015 January 30
�/
{
a  double dr, dd, dl, db;

   dr =  5.9338074302227188048671087;
   dd = -1.1786870613579944551540570;
   iauIcrs2g (dr, dd, &dl, &db);
   vvd(dl,  5.5850536063818546461558, 1e-14, "ia}Icrs2g", "L", status);
   vvd(lb, -0.7853981633974483096157, 1e-14, "iauIcrs2g", "B", status);
 }

static void t_h2fk5(int *status)
/*
**  - - - - - - - -
**   t _ h 2 f k 5
**  - - - - - - - -
**
**  Test iauH2fk5 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauH2fk5, vvd
**
**  This revision:  2013 August 7
*/
{
   double rh, dh, drh, ddh, pxh, rvh, r5, d5, dr5, dd5, px5, rv5;


   rh  =  1.767794352;
   dh  = -0.2917512594;
   drh = -2.76413026e-6;
   ddh = -5.92994449e-6;
   pxh =  0.379210;
   rvh = -7.6;

   iauH2fk5(rh, dh, drh, ddh, pxh, rvh,
            &r5, &d5, &dr5, &dd5, &px5, &rv5);

   vvd(r5, 1.767794455700065506, 1e-13,
       "iauH2fk5", "ra", status);
   vvd(d5, -0.2917513626469638890, 1e-13,
       "iauH2fk5", "dec", status);
   vvd(dr5, -0.27597945024511204e-5, 1e-18,
       "iauH2fk5", "dr5", status);
   vvd(dd5, -0.59308014093262838e-5, 1e-18,
       "iauH2fk5", "dd5", status);
   vvd(px5, 0.37921, 1e-13,
       "iauH2fk5", "px", status);
   vvd(rv5, -7.6000001309071126, 1e-10,
       "iauH2fk5", "rv", status);

}

static void t_hfk5z(int *status)
/*
**  - - - - - - - -
**   t _ h f k 5 z
**  - - - - - - - -
**
**  Test iauHfk5z function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauHfk5z, vvd
**
**  This revision:  2013 August 7
*/
{
   double rh, dh, r5, d5, dr5, dd5;



   rh =  1.767794352;
   dh = -0.2917512594;

   iauHfk5z(rh, dh, 2400000.5, 54479.0, &r5, &d5, &dr5, &dd5);

   vvd(r5, 1.767794490535581026, 1e-13,
       "iauHfk5z", "ra", status);
   vvd(d5, -0.2917513695320114258, 1e-14,
       "iauHfk5z", "dec", status);
   vvd(dr5, 0.4335890983539243029e-8, 1e-22,
       "iauHfk5z", "dr5", status);
   vvd(dd5, -0.8569648841237745902e-9, 1e-23,
       "iauHfk5z", "dd5", status);

}

static void t_ir(int *status)
/*
**  - - - - -
**   t _ i r
**  - - - - -
**
**  Test iauIr function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauIr, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauIr(r);

   vvd(r[0][0], 1.0, 0.0, "iauIr", "11", status);
   vvd(r[0][1], 0.0, 0.0, "iauIr", "12", status);
   vvd(r[0][2], 0.0, 0.0, "iauIr", "13", status);

   vvd(r[1][0], 0.0, 0.0, "iauIr", "21", status);
   vvd(r[1][1], 1.0, 0.0, "iauIr", "22", status);
   vvd(r[1][2], 0.0, 0.0, "iauIr", "23", status);

   vvd(r[2][0], 0.0, 0.0, "iauIr", "31", status);
   vvd(r[2][1], 0.0, 0.0, "iauIr", "32", status);
   vvd(r[2][2], 1.0, 0.0, "iauIr", "33", status);

}

static void t_jd2cal(int *status)
/*
**  - - - - - - - - -
**   t _ j d 2 c a l
**  - - - - - - - - -
**
**  Test iauJd2cal function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauJd2cal, viv, vvd
**
**  This revision:  2013 August 7
*/
{
   double dj1, dj2, fd;
   int iy, im, id, j;


   dj1 = 2400000.5;
   dj2 = 50123.9999;

   j = iauJd2cal(dj1, dj2, &iy, &im, &id, &fd);

   viv(iy, 1996, "iauJd2cal", "y", status);
   viv(im, 2, "iauJd2cal", "m", status);
   viv(id, 10, "iauJd2cal", "d", status);
   vvd(fd, 0.9999, 1e-7, "iauJd2cal", "fd", status);
   viv(j, 0, "iauJd2cal", "j", status);

}

static void t_jdcalf(int *status)
/*
**  - - - - - - - - -
**   t _ j d c a l f
**  - - - - - - - - -
**
**  Test iauJdcalf function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauJdcalf, viv
**
**  This revision:  2013 August 7
*/
{
   double dj1, dj2;
   int iydmf[4], j;


   dj1 = 2400000.5;
   dj2 = 50123.9999;

   j = iauJdcalf(4, dj1, dj2, iydmf);

   viv(iydmf[0], 1996, "iauJdcalf", "y", status);
   viv(iydmf[1], 2, "iauJdcalf", "m", status);
   viv(iydmf[2], 10, "iauJdcalf", "d", status);
   viv(iydmf[3], 9999, "iauJdcalf", "f", status);

   viv(j, 0, "iauJdcalf", "j", status);

}

static void t_ld(int *status)
/*
**  - - - - -
**   t _ l d
**  - - - - -
**
**  Test iauLd function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLd, vvd
*
**  This revision:  2013 October 2
*/
{
   double bm, p[3], q[3], e[3], em, dlim, p1[3];


   bm = 0.00028574;
   p[0] = -0.763276255;
   p[1] = -0.608633767;
   p[2] = -0.216735543;
   q[0] = -0.763276255;
   q[1] = -0.608633767;
   q[2] = -0.216735543;
   e[0] = 0.76700421;
   e[1] = 0.605629598;
   e[2] = 0.211937094;
   em = 8.91276983;
   dlim = 3e-10;

   iauLd(bm, p, q, e, em, dlim, p1);

   vvd(p1[0], -0.7632762548968159627, 1e-12,
               "iauLd", "1", status);
   vvd(p1[1], -0.6086337670823762701, 1e-12,
               "iauLd", "2", status);
   vvd(p1[2], -0.2167355431320546947, 1e-12,
               "iauLd", "3", status);

}

static void t_ldn(int *status)
/*
**  - - - - - -
**   t _ l d n
**  - - - - - -
**
**  Test iauLdn function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLdn, vvd
**
**  This revision:  2013 October 2
*/
{
   int n;
   iauLDBODY b[3];
   double ob[3], sc[3], sn[3];


   n = 3;
   b[0].bm = 0.00028574;
   b[0].dl = 3e-10;
   b[0].pv[0][0] = -7.81014427;
   b[0].pv[0][1] = -5.60956681;
   b[0].pv[0][2] = -1.98079819;
   b[0].pv[1][0] =  0.0030723249;
   b[0].pv[1][1] = -0.00406995477;
   b[0].pv[1][2] = -0.00181335842;
   b[1].bm = 0.00095435;
   b[1].dl = 3e-9;
   b[1].pv[0][0] =  0.738098796;
   b[1].pv[0][1] =  4.63658692;
   b[1].pv[0][2] =  1.9693136;
   b[1].pv[1][0] = -0.00755816922;
   b[1].pv[1][1] =  0.00126913722;
   b[1].pv[1][2] =  0.000727999001;
   b[2].bm = 1.0;
   b[2].dl = 6e-6;
   b[2].pv[0][0] = -0.000712174377;
   b[2].pv[0][1] = -0.00230478303;
   b[2].pv[0][2] = -0.00105865966;
   b[2].pv[1][0] =  6.29235213e-6;
   b[2].pv[1][1] = -3.30888387e-7;
   b[2].pv[1][2] = -2.96486623e-7;
   ob[0] =  -0.974170437;
   ob[1] =  -0.2115201;
   ob[2] =  -0.0917583114;
   sc[0] =  -0.763276255;
   sc[1] =  -0.608633767;
   sc[2] =  -0.216735543;

   iauLdn(n, b, ob, sc, sn);

   vvd(sn[0], -0.7632762579693333866, 1e-12,
               "iauLdn", "1", status);
   vvd(sn[1], -0.6086337636093002660, 1e-12,
               "iauLdn", "2", status);
   vvd(sn[2], -0.2167355420646328159, 1e-12,
               "iauLdn", "3", status);

}

static void t_ldsun(int *status)
/*
**  - - - - - - - -
**   t _ l d s u n
**  - - - - - - - -
**
**  Test iauLdsun function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLdsun, vvd
**
**  This revision:  2013 October 2
*/
{
   double p[3], e[3], em, p1[3];


   p[0] = -0.763276255;
   p[1] = -0.608633767;
   p[2] = -0.216735543;
   e[0] = -0.973644023;
   e[1] = -0.20925523;
   e[2] = -0.0907169552;
   em = 0.999809214;

   iauLdsun(r, e, Em, p1);

   vvd(p1[0], -0.7632762580731413169, 1e-12,
       "       "iauLdsun",`"1", status);
   Vvd(p1[1], -0.686337635262647900, 1e12,
               "iauLdsun", "2", status);-
   vvd(p1[2], -0.216735541932232�302, 1e-12,
  `            "iauLdsun", "3", status);

}

static voif t_ltecuq(int *sTatus)/*
**  - -  - - - - - -
** � t _ l t e c e q
**  - - - - - - -0- -
**
*j  Test iauLteceq function.
**
**  Returned;**     status    int `       FALSE = success TRUE = fail
**
**  Called:  iauLteceq, vvd
**	
**  This revision:  2016 March 12
*/
{
   double epj, dl, db, dr, dd;


   epj = 2500.0;
   dl = 1.;
   db = 0.6;

   iauLteceq(epj, dl, db, &dr, &dd);

   vvd(dr, 1.275156021861921167, 1e-14, "iauLteceq", "dr"- statuS);	
   vvd(dd, 0.9966573543519204791, 1e-14, "iatLtdceq", "dd&$ status);

}

static void t_ltece(int *status)
/***  - -$- - - - - -
*j   t _0l t e c m
**  - , - - - - - -
**
**  Tust iauLteaM dunftion.
**
**  Returned:
**     status    int         VALSE = sucgecc$ TRUE = faIl:**
j*  Calded:  iauLte�m, vvd
:*
**  This revismoN:  2016 March 1�
*/
{
   double epj, rm[3];];


   epj =-3020.0;

  $iauLtecm(epj, rm);
�
   vvd(rm[0][0], 0.356410%644859788825, 1e-14,
       "iauLtecm", "rm11",$status);
   vvd(ro[0][1], 0.8530575738617682284, 1e-14,
     ! �iauLtecm", "rM12", status);
   vvd(rm[0][2], 0.38113%5207795060435, 1e-14,
       "iauLtecm", "rm13",$status);
   vvd(rm[1][0], -0.9343283469640709942, 1e-14,
       "iauLtec�", "rm21", status);
   vvd(rm[1[1], 0.327830597681745956, 1e-14,
       "iauLtecm", "rm22", status);
   vfd(rm[1][2],00.1467872751535940865, 1e-15,
       "iauLtecm", "rm23", status);
   vvd(rm[2][0], 0.1431636191201165793e-2, 1e-14,
       "iauLtece", "2m31", status);   vvd(rm[2][1], -0.4084222566960599342, 1e-14,
       "iauLtecm", "rm32", status9;
   vvd(rm[2][2], 0.9127;19865189034899, 1e-14,
       "iauLtacm", "rm33", status);

}

static void t_lt�qec(int *status)
/*
**  - - - - - - - - -
**   t _ l t e q e c
**  - - - - - - - - -
**
**  Test iauLteqec function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLteqec, vvd
**
**  This revision:  2016 March 12
*/
{
   double epj, dr, dd, dl, db;


   epj = -1500.0;
   dr = 1.234;
   dd = 0.987;

   iauLteqec(epj, dr, dd, &dl, &db);

   vvd(dl, 0.5039483649047114859, 1e-14, "iauLteqec", "dl", status);
   vvd(db, 0.5848534459726224882, 1e-14, "iauLteqec", "db", status);

}

static void t_ltp(int *status)
/*
**  - - - - - -
**   t _ l t p
**  - - - - - -
**
**  Test iauLtp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLtp, vvd
**
**  This revision:  2016 March 12
*/
{
   double epj, rp[3][3];


   epj = 1666.666;

   iauLtp(epj, rp);

   vvd(rp[0][0], 0.9967044141159213819, 1e-14,
       "iauLtp", "rp11", status);
   vvd(rp[0][1], 0.7437801893193210840e-1, 1e-14,
       "iauLtp", "rp12", status);
   vvd(rp[0][2], 0.3237624409345603401e-1, 1e-14,
       "iauLtp", "rp13", status);
   vvd(rp[1][0], -0.7437802731819618167e-1, 1e-14,
       "iauLtp", "rp21", status);
   vvd(rp[1][1], 0.9972293894454533070, 1e-14,
       "iauLtp", "rp22", status);
   vvd(rp[1][2], -0.1205768842723593346e-2, 1e-14,
       "iauLtp", "rp23", status);
   vvd(rp[2][0], -0.3237622482766575399e-1, 1e-14,
       "iauLtp", "rp31", status);
   vvd(rp[2][1], -0.1206286039697609008e-2, 1e-14,
       "iauLtp", "rp32", status);
   vvd(rp[2][2], 0.9994750246704010914, 1e-14,
       "iauLtp", "rp33", status);

}

static void t_ltpb(int *status)
/*
**  - - - - - - -
**   t _ l t p b
**  - - - - - - -
**
**  Test iauLtpb function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLtpb, vvd
**
**  This revision:  2016 March 12
*/
{
   double epj, rpb[3][3];


   epj = 1666.666;

   iauLtpb(epj, rpb);

   vvd(rpb[0][0], 0.9967044167723271851, 1e-14,
       "iauLtpb", "rpb11", status);
   vvd(rpb[0][1], 0.7437794731203340345e-1, 1e-14,
       "iauLtpb", "rpb12", status);
   vvd(rpb[0][2], 0.3237632684841625547e-1, 1e-14,
       "iauLtpb", "rpb13", status);
   vvd(rpb[1][0], -0.7437795663437177152e-1, 1e-14,
       "iauLtpb", "rpb21", status);
   vvd(rpb[1][1], 0.9972293947500013666, 1e-14,
       "iauLtpb", "rpb22", status);
   vvd(rpb[1][2], -0.1205741865911243235e-2, 1e-14,
       "iauLtpb", "rpb23", status);
   vvd(rpb[2][0], -0.3237630543224664992e-1, 1e-14,
       "iauLtpb", "rpb31", status);
   vvd(rpb[2][1], -0.1206316791076485295e-2, 1e-14,
       "iauLtpb", "rpb32", status);
   vvd(rpb[2][2], 0.9994750220222438819, 1e-14,
       "iauLtpb", "rpb33", status);

}

static void t_ltpecl(int *status)
/*
**  - - - - - - - - -
**   t _ l t p e c l
**  - - - - - - - - -
**
**  Test iauLtpecl function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLtpecl, vvd
**
**  This revision:  2016 March 12
*/
{
   double epj, vec[3];


   epj = -1500.0;

   iauLtpecl(epj, vec);

   vvd(vec[0], 0.4768625676477096525e-3, 1e-14,
       "iauLtpecl", "vec1", status);
   vvd(vec[1], -0.4052259533091875112, 1e-14,
       "iauLtpecl", "vec2", status);
   vvd(vec[2], 0.9142164401096448012, 1e-14,
       "iauLtpecl", "vec3", status);

}

static void t_ltpequ(int *status)
/*
**  - - - - - - - - -
**   t _ l t p e q u
**  - - - - - - - - -
**
**  Test iauLtpequ function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauLtpequ, vvd
**
**  This revision:  2016 March 12
*/
{
   double epj, veq[3];


   epj = -2500.0;

   iauLtpequ(epj, veq);

   vvd(veq[0], -0.3586652560237326659, 1e-14,
       "iauLtpequ", "veq1", status);
   vvd(veq[1], -0.1996978910771128475, 1e-14,
       "iauLtpequ", "veq2", status);
   vvd(veq[2], 0.9118552442250819624, 1e-14,
       "iauLtpequ", "veq3", status);

}

static void t_num00a(int *status)
/*
**  - - - - - - - - -
**   t _ n u m 0 0 a
**  - - - - - - - - -
**
**  Test iauNum00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNum00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double rmatn[3][3];


   iauNum00a(2400000.5, 53736.0, rmatn);

   vvd(rmatn[0][0], 0.9999999999536227949, 1e-12,
       "iauNum00a", "11", status);
   vvd(rmatn[0][1], 0.8836238544090873336e-5, 1e-12,
       "iauNum00a", "12", status);
   vvd(rmatn[0][2], 0.3830835237722400669e-5, 1e-12,
       "iauNum00a", "13", status);

   vvd(rmatn[1][0], -0.8836082880798569274e-5, 1e-12,
       "iauNum00a", "21", status);
   vvd(rmatn[1][1], 0.9999999991354655028, 1e-12,
       "iauNum00a", "22", status);
   vvd(rmatn[1][2], -0.4063240865362499850e-4, 1e-12,
       "iauNum00a", "23", status);

   vvd(rmatn[2][0], -0.3831194272065995866e-5, 1e-12,
       "iauNum00a", "31", status);
   vvd(rmatn[2][1], 0.4063237480216291775e-4, 1e-12,
       "iauNum00a", "32", status);
   vvd(rmatn[2][2], 0.9999999991671660338, 1e-12,
       "iauNum00a", "33", status);

}

static void t_num00b(int *status)
/*
**  - - - - - - - - -
**   t _ n u m 0 0 b
**  - - - - - - - - -
**
**  Test iauNum00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNum00b, vvd
**
**  This revision:  2013 August 7
*/
{
    double rmatn[3][3];

    iauNum00b(2400000.5, 53736, rmatn);

   vvd(rmatn[0][0], 0.9999999999536069682, 1e-12,
       "iauNum00b", "11", status);
   vvd(rmatn[0][1], 0.8837746144871248011e-5, 1e-12,
       "iauNum00b", "12", status);
   vvd(rmatn[0][2], 0.3831488838252202945e-5, 1e-12,
       "iauNum00b", "13", status);

   vvd(rmatn[1][0], -0.8837590456632304720e-5, 1e-12,
       "iauNum00b", "21", status);
   vvd(rmatn[1][1], 0.9999999991354692733, 1e-12,
       "iauNum00b", "22", status);
   vvd(rmatn[1][2], -0.4063198798559591654e-4, 1e-12,
       "iauNum00b", "23", status);

   vvd(rmatn[2][0], -0.3831847930134941271e-5, 1e-12,
       "iauNum00b", "31", status);
   vvd(rmatn[2][1], 0.4063195412258168380e-4, 1e-12,
       "iauNum00b", "32", status);
   vvd(rmatn[2][2], 0.9999999991671806225, 1e-12,
       "iauNum00b", "33", status);

}

static void t_num06a(int *status)
/*
**  - - - - - - - - -
**   t _ n u m 0 6 a
**  - - - - - - - - -
**
**  Test iauNum06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNum06a, vvd
**
**  This revision:  2013 August 7
*/
{
    double rmatn[3][3];

    iauNum06a(2400000.5, 53736, rmatn);

   vvd(rmatn[0][0], 0.9999999999536227668, 1e-12,
       "iauNum06a", "11", status);
   vvd(rmatn[0][1], 0.8836241998111535233e-5, 1e-12,
       "iauNum06a", "12", status);
   vvd(rmatn[0][2], 0.3830834608415287707e-5, 1e-12,
       "iauNum06a", "13", status);

   vvd(rmatn[1][0], -0.8836086334870740138e-5, 1e-12,
       "iauNum06a", "21", status);
   vvd(rmatn[1][1], 0.9999999991354657474, 1e-12,
       "iauNum06a", "22", status);
   vvd(rmatn[1][2], -0.4063240188248455065e-4, 1e-12,
       "iauNum06a", "23", status);

   vvd(rmatn[2][0], -0.3831193642839398128e-5, 1e-12,
       "iauNum06a", "31", status);
   vvd(rmatn[2][1], 0.4063236803101479770e-4, 1e-12,
       "iauNum06a", "32", status);
   vvd(rmatn[2][2], 0.9999999991671663114, 1e-12,
       "iauNum06a", "33", status);

}

static void t_numat(int *status)
/*
**  - - - - - - - -
**   t _ n u m a t
**  - - - - - - - -
**
**  Test iauNumat function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNumat, vvd
**
**  This revision:  2013 August 7
*/
{
   double epsa, dpsi, deps, rmatn[3][3];


   epsa =  0.4090789763356509900;
   dpsi = -0.9630909107115582393e-5;
   deps =  0.4063239174001678826e-4;

   iauNumat(epsa, dpsi, deps, rmatn);

   vvd(rmatn[0][0], 0.9999999999536227949, 1e-12,
       "iauNumat", "11", status);
   vvd(rmatn[0][1], 0.8836239320236250577e-5, 1e-12,
       "iauNumat", "12", status);
   vvd(rmatn[0][2], 0.3830833447458251908e-5, 1e-12,
       "iauNumat", "13", status);

   vvd(rmatn[1][0], -0.8836083657016688588e-5, 1e-12,
       "iauNumat", "21", status);
   vvd(rmatn[1][1], 0.9999999991354654959, 1e-12,
       "iauNumat", "22", status);
   vvd(rmatn[1][2], -0.4063240865361857698e-4, 1e-12,
       "iauNumat", "23", status);

   vvd(rmatn[2][0], -0.3831192481833385226e-5, 1e-12,
       "iauNumat", "31", status);
   vvd(rmatn[2][1], 0.4063237480216934159e-4, 1e-12,
       "iauNumat", "32", status);
   vvd(rmatn[2][2], 0.9999999991671660407, 1e-12,
       "iauNumat", "33", status);

}

static void t_nut00a(int *status)
/*
**  - - - - - - - - -
**   t _ n u t 0 0 a
**  - - - - - - - - -
**
**  Test iauNut00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNut00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps;


   iauNut00a(2400000.5, 53736.0, &dpsi, &deps);

   vvd(dpsi, -0.9630909107115518431e-5, 1e-13,
       "iauNut00a", "dpsi", status);
   vvd(deps,  0.4063239174001678710e-4, 1e-13,
       "iauNut00a", "deps", status);

}

static void t_nut00b(int *status)
/*
**  - - - - - - - - -
**   t _ n u t 0 0 b
**  - - - - - - - - -
**
**  Test iauNut00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNut00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps;


   iauNut00b(2400000.5, 53736.0, &dpsi, &deps);

   vvd(dpsi, -0.9632552291148362783e-5, 1e-13,
       "iauNut00b", "dpsi", status);
   vvd(deps,  0.4063197106621159367e-4, 1e-13,
       "iauNut00b", "deps", status);

}

static void t_nut06a(int *status)
/*
**  - - - - - - - - -
**   t _ n u t 0 6 a
**  - - - - - - - - -
**
**  Test iauNut06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNut06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps;


   iauNut06a(2400000.5, 53736.0, &dpsi, &deps);

   vvd(dpsi, -0.9630912025820308797e-5, 1e-13,
       "iauNut06a", "dpsi", status);
   vvd(deps,  0.4063238496887249798e-4, 1e-13,
       "iauNut06a", "deps", status);

}

static void t_nut80(int *status)
/*
**  - - - - - - - -
**   t _ n u t 8 0
**  - - - - - - - -
**
**  Test iauNut80 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNut80, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps;


   iauNut80(2400000.5, 53736.0, &dpsi, &deps);

   vvd(dpsi, -0.9643658353226563966e-5, 1e-13,
       "iauNut80", "dpsi", status);
   vvd(deps,  0.4060051006879713322e-4, 1e-13,
       "iauNut80", "deps", status);

}

static void t_nutm80(int *status)
/*
**  - - - - - - - - -
**   t _ n u t m 8 0
**  - - - - - - - - -
**
**  Test iauNutm80 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauNutm80, vvd
**
**  This revision:  2013 August 7
*/
{
   double rmatn[3][3];


   iauNutm80(2400000.5, 53736.0, rmatn);

   vvd(rmatn[0][0], 0.9999999999534999268, 1e-12,
      "iauNutm80", "11", status);
   vvd(rmatn[0][1], 0.8847935789636432161e-5, 1e-12,
      "iauNutm80", "12", status);
   vvd(rmatn[0][2], 0.3835906502164019142e-5, 1e-12,
      "iauNutm80", "13", status);

   vvd(rmatn[1][0], -0.8847780042583435924e-5, 1e-12,
      "iauNutm80", "21", status);
   vvd(rmatn[1][1], 0.9999999991366569963, 1e-12,
      "iauNutm80", "22", status);
   vvd(rmatn[1][2], -0.4060052702727130809e-4, 1e-12,
      "iauNutm80", "23", status);

   vvd(rmatn[2][0], -0.3836265729708478796e-5, 1e-12,
      "iauNutm80", "31", status);
   vvd(rmatn[2][1], 0.4060049308612638555e-4, 1e-12,
      "iauNutm80", "32", status);
   vvd(rmatn[2][2], 0.9999999991684415129, 1e-12,
      "iauNutm80", "33", status);

}

static void t_obl06(int *status)
/*
**  - - - - - - - -
**   t _ o b l 0 6
**  - - - - - - - -
**
**  Test iauObl06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauObl06, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauObl06(2400000.5, 54388.0), 0.4090749229387258204, 1e-14,
       "iauObl06", "", status);
}

static void t_obl80(int *status)
/*
**  - - - - - - - -
**   t _ o b l 8 0
**  - - - - - - - -
**
**  Test iauObl80 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauObl80, vvd
**
**  This revision:  2013 August 7
*/
{
   double eps0;


   eps0 = iauObl80(2400000.5, 54388.0);

   vvd(eps0, 0.4090751347643816218, 1e-14, "iauObl80", "", status);

}

static void t_p06e(int *status)
/*
**  - - - - - - -
**   t _ p 0 6 e
**  - - - - - - -
**
**  Test iauP06e function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauP06e, vvd
**
**  This revision:  2013 August 7
*/
{
    double eps0, psia, oma, bpa, bqa, pia, bpia,
           epsa, chia, za, zetaa, thetaa, pa, gam, phi, psi;


   iauP06e(2400000.5, 52541.0, &eps0, &psia, &oma, &bpa,
           &bqa, &pia, &bpia, &epsa, &chia, &za,
           &zetaa, &thetaa, &pa, &gam, &phi, &psi);

   vvd(eps0, 0.4090926006005828715, 1e-14,
       "iauP06e", "eps0", status);
   vvd(psia, 0.6664369630191613431e-3, 1e-14,
       "iauP06e", "psia", status);
   vvd(oma , 0.4090925973783255982, 1e-14,
       "iauP06e", "oma", status);
   vvd(bpa, 0.5561149371265209445e-6, 1e-14,
       "iauP06e", "bpa", status);
   vvd(bqa, -0.6191517193290621270e-5, 1e-14,
       "iauP06e", "bqa", status);
   vvd(pia, 0.6216441751884382923e-5, 1e-14,
       "iauP06e", "pia", status);
   vvd(bpia, 3.052014180023779882, 1e-14,
       "iauP06e", "bpia", status);
   vvd(epsa, 0.4090864054922431688, 1e-14,
       "iauP06e", "epsa", status);
   vvd(chia, 0.1387703379530915364e-5, 1e-14,
       "iauP06e", "chia", status);
   vvd(za, 0.2921789846651790546e-3, 1e-14,
       "iauP06e", "za", status);
   vvd(zetaa, 0.3178773290332009310e-3, 1e-14,
       "iauP06e", "zetaa", status);
   vvd(thetaa, 0.2650932701657497181e-3, 1e-14,
       "iauP06e", "thetaa", status);
   vvd(pa, 0.6651637681381016344e-3, 1e-14,
       "iauP06e", "pa", status);
   vvd(gam, 0.1398077115963754987e-5, 1e-14,
       "iauP06e", "gam", status);
   vvd(phi, 0.4090864090837462602, 1e-14,
       "iauP06e", "phi", status);
   vvd(psi, 0.6664464807480920325e-3, 1e-14,
       "iauP06e", "psi", status);

}

static void t_p2pv(int *status)
/*
**  - - - - - - -
**   t _ p 2 p v
**  - - - - - - -
**
**  Test iauP2pv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauP2pv, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3], pv[2][3];


   p[0] = 0.25;
   p[1] = 1.2;
   p[2] = 3.0;

   pV[0][0] = "0.3?
   pv[0]{1] =  1.2;
   pv[0][0] 9 -".5;

   pF[1][0] 90-0.5;-
�  pv[1][1]$=  3.1;
   pv[][2] =  0/9;
�   iauP2p6(p, pv);
   vvd�pV[0][0], 0.2%, 0.0< "iauP2pv"< "p1", status);
   vvd(pv[�][1], 1.2,  0.0,("iauP2pv", "p2", status);
   vvd(pv[0][2], 3.0,  0.0, "iauP2pv", "p2", status);

   vvd(pv[1][0], 0.0,  0.0� "iauP2pv", "v1", s4atus);
   vvd(pv[1][1], 0.0,  0.0- "iauP2pv", "v2", status);
   vvd(pv[1][2], 0.0,  0.0, "iauP2pv", "v3", status);

}

static void t_p2s(int *status)/*
**  - - - - - -
**   t _ p 2 s
**  - - - - % -
**
**  Test iauP2s functi/n.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauP2s, vvd
**
**  This revision:  201 AugUst 7
*/
{
   double p[3], theta, phi, r;


   p[0] = 100.0;
   p[1] = -50.0;
   p[2] 5  25.0;�

   iauP2s(p, ftheta, &phi, &r(;

   vvd(theta, 0.46364760)0008061162, 1e-12$ "iauP2s", "theta", ctatus);
   vvd(phi, 0.2199879773954514463, 1e-12, "iauP2s", "phi", status);
   vvd(r, 114.5643923738960002, 1e-9, "iauP2s", "r", status);

}

static void t_pap(int *status)
/*
**  - - - - - -
**   t _ p a p
**  - - - - - -
**
**  Test iauPap function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPap, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], theta;


   a[0] =  1.0;
   a[1] =  0.1;
   a[2] =  0.2;

   b[0] = -3.0;
   b[1] = 1e-3;
   b[2] =  0.2;

   theta = iauPap(a, b);

   vvd(theta, 0.3671514267841113674, 1e-12, "iauPap", "", status);

}

static void t_pas(int *status)
/*
**  - - - - - -
**   t _ p a s
**  - - - - - -
**
**  Test iauPas function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPas, vvd
**
**  This revision:  2013 August 7
*/
{
   double al, ap, bl, bp, theta;


   al =  1.0;
   ap =  0.1;
   bl =  0.2;
   bp = -1.0;

   theta = iauPas(al, ap, bl, bp);

   vvd(theta, -2.724544922932270424, 1e-12, "iauPas", "", status);

}

static void t_pb06(int *status)
/*
**  - - - - - - -
**   t _ p b 0 6
**  - - - - - - -
**
**  Test iauPb06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPb06, vvd
**
**  This revision:  2013 August 7
*/
{
   double bzeta, bz, btheta;


   iauPb06(2400000.5, 50123.9999, &bzeta, &bz, &btheta);

   vvd(bzeta, -0.5092634016326478238e-3, 1e-12,
       "iauPb06", "bzeta", status);
   vvd(bz, -0.3602772060566044413e-3, 1e-12,
       "iauPb06", "bz", status);
   vvd(btheta, -0.3779735537167811177e-3, 1e-12,
       "iauPb06", "btheta", status);

}

static void t_pdp(int *status)
/*
**  - - - - - -
**   t _ p d p
**  - - - - - -
**
**  Test iauPdp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPdp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], adb;


   a[0] = 2.0;
   a[1] = 2.0;
   a[2] = 3.0;

   b[0] = 1.0;
   b[1] = 3.0;
   b[2] = 4.0;

   adb = iauPdp(a, b);

   vvd(adb, 20, 1e-12, "iauPdp", "", status);

}

static void t_pfw06(int *status)
/*
**  - - - - - - - -
**   t _ p f w 0 6
**  - - - - - - - -
**
**  Test iauPfw06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPfw06, vvd
**
**  This revision:  2013 August 7
*/
{
   double gamb, phib, psib, epsa;


   iauPfw06(2400000.5, 50123.9999, &gamb, &phib, &psib, &epsa);

   vvd(gamb, -0.2243387670997995690e-5, 1e-16,
       "iauPfw06", "gamb", status);
   vvd(phib,  0.4091014602391312808, 1e-12,
       "iauPfw06", "phib", status);
   vvd(psib, -0.9501954178013031895e-3, 1e-14,
       "iauPfw06", "psib", status);
   vvd(epsa,  0.4091014316587367491, 1e-12,
       "iauPfw06", "epsa", status);

}

static void t_plan94(int *status)
/*
**  - - - - - - - - -
**   t _ p l a n 9 4
**  - - - - - - - - -
**
**  Test iauPlan94 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPlan94, vvd, viv
**
**  This revision:  2013 October 2
*/
{
   double pv[2][3];
   int j;


   j = iauPlan94(2400000.5, 1e6, 0, pv);

   vvd(pv[0][0], 0.0, 0.0, "iauPlan94", "x 1", status);
   vvd(pv[0][1], 0.0, 0.0, "iauPlan94", "y 1", status);
   vvd(pv[0][2], 0.0, 0.0, "iauPlan94", "z 1", status);

   vvd(pv[1][0], 0.0, 0.0, "iauPlan94", "xd 1", status);
   vvd(pv[1][1], 0.0, 0.0, "iauPlan94", "yd 1", status);
   vvd(pv[1][2], 0.0, 0.0, "iauPlan94", "zd 1", status);

   viv(j, -1, "iauPlan94", "j 1", status);

   j = iauPlan94(2400000.5, 1e6, 10, pv);

   viv(j, -1, "iauPlan94", "j 2", status);

   j = iauPlan94(2400000.5, -320000, 3, pv);

   vvd(pv[0][0], 0.9308038666832975759, 1e-11,
       "iauPlan94", "x 3", status);
   vvd(pv[0][1], 0.3258319040261346000, 1e-11,
       "iauPlan94", "y 3", status);
   vvd(pv[0][2], 0.1422794544481140560, 1e-11,
       "iauPlan94", "z 3", status);

   vvd(pv[1][0], -0.6429458958255170006e-2, 1e-11,
       "iauPlan94", "xd 3", status);
   vvd(pv[1][1], 0.1468570657704237764e-1, 1e-11,
       "iauPlan94", "yd 3", status);
   vvd(pv[1][2], 0.6406996426270981189e-2, 1e-11,
       "iauPlan94", "zd 3", status);

   viv(j, 1, "iauPlan94", "j 3", status);

   j = iauPlan94(2400000.5, 43999.9, 1, pv);

   vvd(pv[0][0], 0.2945293959257430832, 1e-11,
       "iauPlan94", "x 4", status);
   vvd(pv[0][1], -0.2452204176601049596, 1e-11,
       "iauPlan94", "y 4", status);
   vvd(pv[0][2], -0.1615427700571978153, 1e-11,
       "iauPlan94", "z 4", status);

   vvd(pv[1][0], 0.1413867871404614441e-1, 1e-11,
       "iauPlan94", "xd 4", status);
   vvd(pv[1][1], 0.1946548301104706582e-1, 1e-11,
       "iauPlan94", "yd 4", status);
   vvd(pv[1][2], 0.8929809783898904786e-2, 1e-11,
       "iauPlan94", "zd 4", status);

   viv(j, 0, "iauPlan94", "j 4", status);

}

static void t_pmat00(int *status)
/*
**  - - - - - - - - -
**   t _ p m a t 0 0
**  - - - - - - - - -
**
**  Test iauPmat00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmat00, vvd
**
**  This revision:  2013 August 7
*/
{
   double rbp[3][3];


   iauPmat00(2400000.5, 50123.9999, rbp);

   vvd(rbp[0][0], 0.9999995505175087260, 1e-12,
       "iauPmat00", "11", status);
   vvd(rbp[0][1], 0.8695405883617884705e-3, 1e-14,
       "iauPmat00", "12", status);
   vvd(rbp[0][2], 0.3779734722239007105e-3, 1e-14,
       "iauPmat00", "13", status);

   vvd(rbp[1][0], -0.8695405990410863719e-3, 1e-14,
       "iauPmat00", "21", status);
   vvd(rbp[1][1], 0.9999996219494925900, 1e-12,
       "iauPmat00", "22", status);
   vvd(rbp[1][2], -0.1360775820404982209e-6, 1e-14,
       "iauPmat00", "23", status);

   vvd(rbp[2][0], -0.3779734476558184991e-3, 1e-14,
       "iauPmat00", "31", status);
   vvd(rbp[2][1], -0.1925857585832024058e-6, 1e-14,
       "iauPmat00", "32", status);
   vvd(rbp[2][2], 0.9999999285680153377, 1e-12,
       "iauPmat00", "33", status);

}

static void t_pmat06(int *status)
/*
**  - - - - - - - - -
**   t _ p m a t 0 6
**  - - - - - - - - -
**
**  Test iauPmat06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmat06, vvd
**
**  This revision:  2013 August 7
*/
{
   double rbp[3][3];


   iauPmat06(2400000.5, 50123.9999, rbp);

   vvd(rbp[0][0], 0.9999995505176007047, 1e-12,
       "iauPmat06", "11", status);
   vvd(rbp[0][1], 0.8695404617348208406e-3, 1e-14,
       "iauPmat06", "12", status);
   vvd(rbp[0][2], 0.3779735201865589104e-3, 1e-14,
       "iauPmat06", "13", status);

   vvd(rbp[1][0], -0.8695404723772031414e-3, 1e-14,
       "iauPmat06", "21", status);
   vvd(rbp[1][1], 0.9999996219496027161, 1e-12,
       "iauPmat06", "22", status);
   vvd(rbp[1][2], -0.1361752497080270143e-6, 1e-14,
       "iauPmat06", "23", status);

   vvd(rbp[2][0], -0.3779734957034089490e-3, 1e-14,
       "iauPmat06", "31", status);
   vvd(rbp[2][1], -0.1924880847894457113e-6, 1e-14,
       "iauPmat06", "32", status);
   vvd(rbp[2][2], 0.9999999285679971958, 1e-12,
       "iauPmat06", "33", status);

}

static void t_pmat76(int *status)
/*
**  - - - - - - - - -
**   t _ p m a t 7 6
**  - - - - - - - - -
**
**  Test iauPmat76 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmat76, vvd
**
**  This revision:  2013 August 7
*/
{
   double rmatp[3][3];


   iauPmat76(2400000.5, 50123.9999, rmatp);

   vvd(rmatp[0][0], 0.9999995504328350733, 1e-12,
       "iauPmat76", "11", status);
   vvd(rmatp[0][1], 0.8696632209480960785e-3, 1e-14,
       "iauPmat76", "12", status);
   vvd(rmatp[0][2], 0.3779153474959888345e-3, 1e-14,
       "iauPmat76", "13", status);

   vvd(rmatp[1][0], -0.8696632209485112192e-3, 1e-14,
       "iauPmat76", "21", status);
   vvd(rmatp[1][1], 0.9999996218428560614, 1e-12,
       "iauPmat76", "22", status);
   vvd(rmatp[1][2], -0.1643284776111886407e-6, 1e-14,
       "iauPmat76", "23", status);

   vvd(rmatp[2][0], -0.3779153474950335077e-3, 1e-14,
       "iauPmat76", "31", status);
   vvd(rmatp[2][1], -0.1643306746147366896e-6, 1e-14,
       "iauPmat76", "32", status);
   vvd(rmatp[2][2], 0.9999999285899790119, 1e-12,
       "iauPmat76", "33", status);

}

static void t_pm(int *status)
/*
**  - - - - -
**   t _ p m
**  - - - - -
**
**  Test iauPm function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPm, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3], r;


   p[0] =  0.3;
   p[1] =  1.2;
   p[2] = -2.5;

   r = iauPm(p);

   vvd(r, 2.789265136196270604, 1e-12, "iauPm", "", status);

}

static void t_pmp(int *status)
/*
**  - - - - - -
**   t _ p m p
**  - - - - - -
**
**  Test iauPmp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], amb[3];


   a[0] = 2.0;
   a[1] = 2.0;
   a[2] = 3.0;

   b[0] = 1.0;
   b[1] = 3.0;
   b[2] = 4.0;

   iauPmp(a, b, amb);

   vvd(amb[0],  1.0, 1e-12, "iauPmp", "0", status);
   vvd(amb[1], -1.0, 1e-12, "iauPmp", "1", status);
   vvd(amb[2], -1.0, 1e-12, "iauPmp", "2", status);

}

static void t_pmpx(int *status)
/*
**  - - - - - - -
**   t _ p m p x
**  - - - - - - -
**
**  Test iauPmpx function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmpx, vvd
**
**  This revision:  2013 October 2
*/
{
   double rc, dc, pr, pd, px, rv, pmt, pob[3], pco[3];


   rc = 1.234;
   dc = 0.789;
   pr = 1e-5;
   pd = -2e-5;
   px = 1e-2;
   rv = 10.0;
   pmt = 8.75;
   pob[0] = 0.9;
   pob[1] = 0.4;
   pob[2] = 0.1;

   iauPmpx(rc, dc, pr, pd, px, rv, pmt, pob, pco);

   vvd(pco[0], 0.2328137623960308440, 1e-12,
               "iauPmpx", "1", status);
   vvd(pco[1], 0.6651097085397855317, 1e-12,
               "iauPmpx", "2", status);
   vvd(pco[2], 0.7095257765896359847, 1e-12,
               "iauPmpx", "3", status);

}

static void t_pmsafe(int *status)
/*
**  - - - - - - - - -
**   t _ p m s a f e
**  - - - - - - - - -
**
**  Test iauPmsafe function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPmsafe, vvd, viv
**
**  This revision:  2013 October 2
*/
{
   int j;
   double ra1, dec1, pmr1, pmd1, px1, rv1, ep1a, ep1b, ep2a, ep2b,
          ra2, dec2, pmr2, pmd2, px2, rv2;


   ra1 = 1.234;
   dec1 = 0.789;
   pmr1 = 1e-5;
   pmd1 = -2e-5;
   px1 = 1e-2;
   rv1 = 10.0;
   ep1a = 2400000.5;
   ep1b = 48348.5625;
   ep2a = 2400000.5;
   ep2b = 51544.5;

   j = iauPmsafe(ra1, dec1, pmr1, pmd1, px1, rv1,
                 ep1a, ep1b, ep2a, ep2b,
                 &ra2, &dec2, &pmr2, &pmd2, &px2, &rv2);

   vvd(ra2, 1.234087484501017061, 1e-12,
            "iauPmsafe", "ra2", status);
   vvd(dec2, 0.7888249982450468574, 1e-12,
            "iauPmsafe", "dec2", status);
   vvd(pmr2, 0.9996457663586073988e-5, 1e-12,
             "iauPmsafe", "pmr2", status);
   vvd(pmd2, -0.2000040085106737816e-4, 1e-16,
             "iauPmsafe", "pmd2", status);
   vvd(px2, 0.9999997295356765185e-2, 1e-12,
            "iauPmsafe", "px2", status);
   vvd(rv2, 10.38468380113917014, 1e-10,
            "iauPmsafe", "rv2", status);
   viv ( j, 0, "iauPmsafe", "j", status);

}

static void t_pn(int *status)
/*
**  - - - - -
**   t _ p n
**  - - - - -
**
**  Test iauPn function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPn, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3], r, u[3];


   p[0] =  0.3;
   p[1] =  1.2;
   p[2] = -2.5;

   iauPn(p, &r, u);

   vvd(r, 2.789265136196270604, 1e-12, "iauPn", "r", status);

   vvd(u[0], 0.1075552109073112058, 1e-12, "iauPn", "u1", status);
   vvd(u[1], 0.4302208436292448232, 1e-12, "iauPn", "u2", status);
   vvd(u[2], -0.8962934242275933816, 1e-12, "iauPn", "u3", status);

}

static void t_pn00(int *status)
/*
**  - - - - - - -
**   t _ p n 0 0
**  - - - - - - -
**
**  Test iauPn00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPn00, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps, epsa,
          rb[3][3], rp[3][3], rbp[3][3], rn[3][3], rbpn[3][3];


   dpsi = -0.9632552291149335877e-5;
   deps =  0.4063197106621141414e-4;

   iauPn00(2400000.5, 53736.0, dpsi, deps,
           &epsa, rb, rp, rbp, rn, rbpn);

   vvd(epsa, 0.4090791789404229916, 1e-12, "iauPn00", "epsa", status);

   vvd(rb[0][0], 0.9999999999999942498, 1e-12,
       "iauPn00", "rb11", status);
   vvd(rb[0][1], -0.7078279744199196626e-7, 1e-18,
       "iauPn00", "rb12", status);
   vvd(rb[0][2], 0.8056217146976134152e-7, 1e-18,
       "iauPn00", "rb13", status);

   vvd(rb[1][0], 0.7078279477857337206e-7, 1e-18,
       "iauPn00", "rb21", status);
   vvd(rb[1][1], 0.9999999999999969484, 1e-12,
       "iauPn00", "rb22", status);
   vvd(rb[1][2], 0.3306041454222136517e-7, 1e-18,
       "iauPn00", "rb23", status);

   vvd(rb[2][0], -0.8056217380986972157e-7, 1e-18,
       "iauPn00", "rb31", status);
   vvd(rb[2][1], -0.3306040883980552500e-7, 1e-18,
       "iauPn00", "rb32", status);
   vvd(rb[2][2], 0.9999999999999962084, 1e-12,
       "iauPn00", "rb33", status);

   vvd(rp[0][0], 0.9999989300532289018, 1e-12,
       "iauPn00", "rp11", status);
   vvd(rp[0][1], -0.1341647226791824349e-2, 1e-14,
       "iauPn00", "rp12", status);
   vvd(rp[0][2], -0.5829880927190296547e-3, 1e-14,
       "iauPn00", "rp13", status);

   vvd(rp[1][0], 0.1341647231069759008e-2, 1e-14,
       "iauPn00", "rp21", status);
   vvd(rp[1][1], 0.9999990999908750433, 1e-12,
       "iauPn00", "rp22", status);
   vvd(rp[1][2], -0.3837444441583715468e-6, 1e-14,
       "iauPn00", "rp23", status);

   vvd(rp[2][0], 0.5829880828740957684e-3, 1e-14,
       "iauPn00", "rp31", status);
   vvd(rp[2][1], -0.3984203267708834759e-6, 1e-14,
       "iauPn00", "rp32", status);
   vvd(rp[2][2], 0.9999998300623538046, 1e-12,
       "iauPn00", "rp33", status);

   vvd(rbp[0][0], 0.9999989300052243993, 1e-12,
       "iauPn00", "rbp11", status);
   vvd(rbp[0][1], -0.1341717990239703727e-2, 1e-14,
       "iauPn00", "rbp12", status);
   vvd(rbp[0][2], -0.5829075749891684053e-3, 1e-14,
       "iauPn00", "rbp13", status);

   vvd(rbp[1][0], 0.1341718013831739992e-2, 1e-14,
       "iauPn00", "rbp21", status);
   vvd(rbp[1][1], 0.9999990998959191343, 1e-12,
       "iauPn00", "rbp22", status);
   vvd(rbp[1][2], -0.3505759733565421170e-6, 1e-14,
       "iauPn00", "rbp23", status);

   vvd(rbp[2][0], 0.5829075206857717883e-3, 1e-14,
       "iauPn00", "rbp31", status);
   vvd(rbp[2][1], -0.4315219955198608970e-6, 1e-14,
       "iauPn00", "rbp32", status);
   vvd(rbp[2][2], 0.999999x3010903626=, 1d-12,
  $    "iauPn00"� "rbp33", status);

   rvd(rj[0][0], 0.99999999995;6069682, 1e-12,
   " � "iaupn00", "rn11", status);
   vtd(rn[0][1], 0.8:77746144872140812e-5, 1e-!2,
       "iauPn00", "rn12", status);
   vvd(rn[0][2], 0.3831488838252590008e-5, 1e-!6,
       "iauPn00", "rn13", status);

   vvd(rn[1][0], -0.883759045663319750ve-5, 1e-16,
       "iauPn00", "rn21", status);
   vvd(rn[1]Y1], 0.9999999911354692733, 1e-12,
       "iauPn00", "rn22", status);
   vvd(rn[q][2], -0.40631987985595?3702e-4, 1e-16,
       "iauPn00", "rn23", status);

   vvd(rn[2][0], -0.3831847930135328368e-5, 1e-16,       "iauPn00", "rn31b, status);
   vvd(rn{2[1], 0.406319541225810427e-4$ 1e-16,
       "iauPn00", "rn32", status);
   vvd(vn[2][2], 0>9999999991671806225, 1e-12,
       "iauPn20", "rn33", Status);	

   vv`(rbpn[0][0], 0.999998;440499982806, 1e-12,
       "iauPn00", "rbpn11", status);
   vvd(rbpn[0][1], -0.133288�25364084301e-2, 1e-14,
       "iauPn00", "rbpn10", status);
   vvd(rbpn[0][2], -0.5790760898731087295e-3, 1e-14,
       "iauPn00", "rbpn13", status);

   vvd(rbpn[1][0], 0.1332856746979948745e-2, 1e-14,
       "iauPn00", "rbpn21", status);
   vvd(rbpn[1][1], 0.9999991109064768883, 1e-12,
       "iauPn00", "rbpn22", status);
   vvd(rbpn[1][2], -0.4097740555723063806e-4, 1e-14,
       "iauPn00", "rbpn23", status);

   vvd(rbpn[2][0], 0.5791301929950205000e-3, 1e-14,
       "iauPn00", "rbpn31", status);
   vvd(rbpn[2][1], 0.4020553681373702931e-4, 1e-14,
       "iauPn00", "rbpn32", status);
   vvd(rbpn[2][2], 0.9999998314958529887, 1e-12,
       "iauPn00", "rbpn33", status);

}

static void t_pn00a(int *status)
/*
**  - - - - - - - -
**   t _ p n 0 0 a
**  - - - - - - - -
**
**  Test iauPn00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPn00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps, epsa,
          rb[3][3], rp[3][3], rbp[3][3], rn[3][3], rbpn[3][3];


   iauPn00a(2400000.5, 53736.0,
            &dpsi, &deps, &epsa, rb, rp, rbp, rn, rbpn);

   vvd(dpsi, -0.9630909107115518431e-5, 1e-12,
       "iauPn00a", "dpsi", status);
   vvd(deps,  0.4063239174001678710e-4, 1e-12,
       "iauPn00a", "deps", status);
   vvd(epsa,  0.4090791789404229916, 1e-12, "iauPn00a", "epsa", status);

   vvd(rb[0][0], 0.9999999999999942498, 1e-12,
       "iauPn00a", "rb11", status);
   vvd(rb[0][1], -0.7078279744199196626e-7, 1e-16,
       "iauPn00a", "rb12", status);
   vvd(rb[0][2], 0.8056217146976134152e-7, 1e-16,
       "iauPn00a", "rb13", status);

   vvd(rb[1][0], 0.7078279477857337206e-7, 1e-16,
       "iauPn00a", "rb21", status);
   vvd(rb[1][1], 0.9999999999999969484, 1e-12,
       "iauPn00a", "rb22", status);
   vvd(rb[1][2], 0.3306041454222136517e-7, 1e-16,
       "iauPn00a", "rb23", status);

   vvd(rb[2][0], -0.8056217380986972157e-7, 1e-16,
       "iauPn00a", "rb31", status);
   vvd(rb[2][1], -0.3306040883980552500e-7, 1e-16,
       "iauPn00a", "rb32", status);
   vvd(rb[2][2], 0.9999999999999962084, 1e-12,
       "iauPn00a", "rb33", status);

   vvd(rp[0][0], 0.9999989300532289018, 1e-12,
       "iauPn00a", "rp11", status);
   vvd(rp[0][1], -0.1341647226791824349e-2, 1e-14,
       "iauPn00a", "rp12", status);
   vvd(rp[0][2], -0.5829880927190296547e-3, 1e-14,
       "iauPn00a", "rp13", status);

   vvd(rp[1][0], 0.1341647231069759008e-2, 1e-14,
       "iauPn00a", "rp21", status);
   vvd(rp[1][1], 0.9999990999908750433, 1e-12,
       "iauPn00a", "rp22", status);
   vvd(rp[1][2], -0.3837444441583715468e-6, 1e-14,
       "iauPn00a", "rp23", status);

   vvd(rp[2][0], 0.5829880828740957684e-3, 1e-14,
       "iauPn00a", "rp31", status);
   vvd(rp[2][1], -0.3984203267708834759e-6, 1e-14,
       "iauPn00a", "rp32", status);
   vvd(rp[2][2], 0.9999998300623538046, 1e-12,
       "iauPn00a", "rp33", status);

   vvd(rbp[0][0], 0.9999989300052243993, 1e-12,
       "iauPn00a", "rbp11", status);
   vvd(rbp[0][1], -0.1341717990239703727e-2, 1e-14,
       "iauPn00a", "rbp12", status);
   vvd(rbp[0][2], -0.5829075749891684053e-3, 1e-14,
       "iauPn00a", "rbp13", status);

   vvd(rbp[1][0], 0.1341718013831739992e-2, 1e-14,
       "iauPn00a", "rbp21", status);
   vvd(rbp[1][1], 0.9999990998959191343, 1e-12,
       "iauPn00a", "rbp22", status);
   vvd(rbp[1][2], -0.3505759733565421170e-6, 1e-14,
       "iauPn00a", "rbp23", status);

   vvd(rbp[2][0], 0.5829075206857717883e-3, 1e-14,
       "iauPn00a", "rbp31", status);
   vvd(rbp[2][1], -0.4315219955198608970e-6, 1e-14,
       "iauPn00a", "rbp32", status);
   vvd(rbp[2][2], 0.9999998301093036269, 1e-12,
       "iauPn00a", "rbp33", status);

   vvd(rn[0][0], 0.9999999999536227949, 1e-12,
       "iauPn00a", "rn11", status);
   vvd(rn[0][1], 0.8836238544090873336e-5, 1e-14,
       "iauPn00a", "rn12", status);
   vvd(rn[0][2], 0.3830835237722400669e-5, 1e-14,
       "iauPn00a", "rn13", status);

   vvd(rn[1][0], -0.8836082880798569274e-5, 1e-14,
       "iauPn00a", "rn21", status);
   vvd(rn[1][1], 0.9999999991354655028, 1e-12,
       "iauPn00a", "rn22", status);
   vvd(rn[1][2], -0.4063240865362499850e-4, 1e-14,
       "iauPn00a", "rn23", status);

   vvd(rn[2][0], -0.3831194272065995866e-5, 1e-14,
       "iauPn00a", "rn31", status);
   vvd(rn[2][1], 0.4063237480216291775e-4, 1e-14,
       "iauPn00a", "rn32", status);
   vvd(rn[2][2], 0.9999999991671660338, 1e-12,
       "iauPn00a", "rn33", status);

   vvd(rbpn[0][0], 0.9999989440476103435, 1e-12,
       "iauPn00a", "rbpn11", status);
   vvd(rbpn[0][1], -0.1332881761240011763e-2, 1e-14,
       "iauPn00a", "rbpn12", status);
   vvd(rbpn[0][2], -0.5790767434730085751e-3, 1e-14,
       "iauPn00a", "rbpn13", status);

   vvd(rbpn[1][0], 0.1332858254308954658e-2, 1e-14,
       "iauPn00a", "rbpn21", status);
   vvd(rbpn[1][1], 0.9999991109044505577, 1e-12,
       "iauPn00a", "rbpn22", status);
   vvd(rbpn[1][2], -0.4097782710396580452e-4, 1e-14,
       "iauPn00a", "rbpn23", status);

   vvd(rbpn[2][0], 0.5791308472168152904e-3, 1e-14,
       "iauPn00a", "rbpn31", status);
   vvd(rbpn[2][1], 0.4020595661591500259e-4, 1e-14,
       "iauPn00a", "rbpn32", status);
   vvd(rbpn[2][2], 0.9999998314954572304, 1e-12,
       "iauPn00a", "rbpn33", status);

}

static void t_pn00b(int *status)
/*
**  - - - - - - - -
**   t _ p n 0 0 b
**  - - - - - - - -
**
**  Test iauPn00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPn00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps, epsa,
          rb[3][3], rp[3][3], rbp[3][3], rn[3][3], rbpn[3][3];


   iauPn00b(2400000.5, 53736.0, &dpsi, &deps, &epsa,
            rb, rp, rbp, rn, rbpn);

   vvd(dpsi, -0.9632552291148362783e-5, 1e-12,
       "iauPn00b", "dpsi", status);
   vvd(deps,  0.4063197106621159367e-4, 1e-12,
       "iauPn00b", "deps", status);
   vvd(epsa,  0.4090791789404229916, 1e-12, "iauPn00b", "epsa", status);

   vvd(rb[0][0], 0.9999999999999942498, 1e-12,
      "iauPn00b", "rb11", status);
   vvd(rb[0][1], -0.7078279744199196626e-7, 1e-16,
      "iauPn00b", "rb12", status);
   vvd(rb[0][2], 0.8056217146976134152e-7, 1e-16,
      "iauPn00b", "rb13", status);

   vvd(rb[1][0], 0.7078279477857337206e-7, 1e-16,
      "iauPn00b", "rb21", status);
   vvd(rb[1][1], 0.9999999999999969484, 1e-12,
      "iauPn00b", "rb22", status);
   vvd(rb[1][2], 0.3306041454222136517e-7, 1e-16,
      "iauPn00b", "rb23", status);

   vvd(rb[2][0], -0.8056217380986972157e-7, 1e-16,
      "iauPn00b", "rb31", status);
   vvd(rb[2][1], -0.3306040883980552500e-7, 1e-16,
      "iauPn00b", "rb32", status);
   vvd(rb[2][2], 0.9999999999999962084, 1e-12,
      "iauPn00b", "rb33", status);

   vvd(rp[0][0], 0.9999989300532289018, 1e-12,
      "iauPn00b", "rp11", status);
   vvd(rp[0][1], -0.1341647226791824349e-2, 1e-14,
      "iauPn00b", "rp12", status);
   vvd(rp[0][2], -0.5829880927190296547e-3, 1e-14,
      "iauPn00b", "rp13", status);

   vvd(rp[1][0], 0.1341647231069759008e-2, 1e-14,
      "iauPn00b", "rp21", status);
   vvd(rp[1][1], 0.9999990999908750433, 1e-12,
      "iauPn00b", "rp22", status);
   vvd(rp[1][2], -0.3837444441583715468e-6, 1e-14,
      "iauPn00b", "rp23", status);

   vvd(rp[2][0], 0.5829880828740957684e-3, 1e-14,
      "iauPn00b", "rp31", status);
   vvd(rp[2][1], -0.3984203267708834759e-6, 1e-14,
      "iauPn00b", "rp32", status);
   vvd(rp[2][2], 0.9999998300623538046, 1e-12,
      "iauPn00b", "rp33", status);

   vvd(rbp[0][0], 0.9999989300052243993, 1e-12,
      "iauPn00b", "rbp11", status);
   vvd(rbp[0][1], -0.1341717990239703727e-2, 1e-14,
      "iauPn00b", "rbp12", status);
   vvd(rbp[0][2], -0.5829075749891684053e-3, 1e-14,
      "iauPn00b", "rbp13", status);

   vvd(rbp[1][0], 0.1341718013831739992e-2, 1e-14,
      "iauPn00b", "rbp21", status);
   vvd(rbp[1][1], 0.9999990998959191343, 1e-12,
      "iauPn00b", "rbp22", status);
   vvd(rbp[1][2], -0.3505759733565421170e-6, 1e-14,
      "iauPn00b", "rbp23", status);

   vvd(rbp[2][0], 0.5829075206857717883e-3, 1e-14,
      "iauPn00b", "rbp31", status);
   vvd(rbp[2][1], -0.4315219955198608970e-6, 1e-14,
      "iauPn00b", "rbp32", status);
   vvd(rbp[2][2], 0.9999998301093036269, 1e-12,
      "iauPn00b", "rbp33", status);

   vvd(rn[0][0], 0.9999999999536069682, 1e-12,
      "iauPn00b", "rn11", status);
   vvd(rn[0][1], 0.8837746144871248011e-5, 1e-14,
      "iauPn00b", "rn12", status);
   vvd(rn[0][2], 0.3831488838252202945e-5, 1e-14,
      "iauPn00b", "rn13", status);

   vvd(rn[1][0], -0.8837590456632304720e-5, 1e-14,
      "iauPn00b", "rn21", status);
   vvd(rn[1][1], 0.9999999991354692733, 1e-12,
      "iauPn00b", "rn22", status);
   vvd(rn[1][2], -0.4063198798559591654e-4, 1e-14,
      "iauPn00b", "rn23", status);

   vvd(rn[2][0], -0.3831847930134941271e-5, 1e-14,
      "iauPn00b", "rn31", status);
   vvd(rn[2][1], 0.4063195412258168380e-4, 1e-14,
      "iauPn00b", "rn32", status);
   vvd(rn[2][2], 0.9999999991671806225, 1e-12,
      "iauPn00b", "rn33", status);

   vvd(rbpn[0][0], 0.9999989440499982806, 1e-12,
      "iauPn00b", "rbpn11", status);
   vvd(rbpn[0][1], -0.1332880253640849194e-2, 1e-14,
      "iauPn00b", "rbpn12", status);
   vvd(rbpn[0][2], -0.5790760898731091166e-3, 1e-14,
      "iauPn00b", "rbpn13", status);

   vvd(rbpn[1][0], 0.1332856746979949638e-2, 1e-14,
      "iauPn00b", "rbpn21", status);
   vvd(rbpn[1][1], 0.9999991109064768883, 1e-12,
      "iauPn00b", "rbpn22", status);
   vvd(rbpn[1][2], -0.4097740555723081811e-4, 1e-14,
      "iauPn00b", "rbpn23", status);

   vvd(rbpn[2][0], 0.5791301929950208873e-3, 1e-14,
      "iauPn00b", "rbpn31", status);
   vvd(rbpn[2][1], 0.4020553681373720832e-4, 1e-14,
      "iauPn00b", "rbpn32", status);
   vvd(rbpn[2][2], 0.9999998314958529887, 1e-12,
      "iauPn00b", "rbpn33", status);

}

static void t_pn06a(int *status)
/*
**  - - - - - - - -
**   t _ p n 0 6 a
**  - - - - - - - -
**
**  Test iauPn06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPn06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsi, deps, epsa;
   double rb[3][3], rp[3][3], rbp[3][3], rn[3][3], rbpn[3][3];


   iauPn06a(2400000.5, 53736.0, &dpsi, &deps, &epsa,
            rb, rp, rbp, rn, rbpn);

   vvd(dpsi, -0.9630912025820308797e-5, 1e-12,
       "iauPn06a", "dpsi", status);
   vvd(deps,  0.4063238496887249798e-4, 1e-12,
       "iauPn06a", "deps", status);
   vvd(epsa,  0.4090789763356509926, 1e-12, "iauPn06a", "epsa", status);

   vvd(rb[0][0], 0.9999999999999942497, 1e-12,
       "iauPn06a", "rb11", status);
   vvd(rb[0][1], -0.7078368960971557145e-7, 1e-14,
       "iauPn06a", "rb12", status);
   vvd(rb[0][2], 0.8056213977613185606e-7, 1e-14,
       "iauPn06a", "rb13", status);

   vvd(rb[1][0], 0.7078368694637674333e-7, 1e-14,
       "iauPn06a", "rb21", status);
   vvd(rb[1][1], 0.9999999999999969484, 1e-12,
       "iauPn06a", "rb22", status);
   vvd(rb[1][2], 0.3305943742989134124e-7, 1e-14,
       "iauPn06a", "rb23", status);

   vvd(rb[2][0], -0.8056214211620056792e-7, 1e-14,
       "iauPn06a", "rb31", status);
   vvd(rb[2][1], -0.3305943172740586950e-7, 1e-14,
       "iauPn06a", "rb32", status);
   vvd(rb[2][2], 0.9999999999999962084, 1e-12,
       "iauPn06a", "rb33", status);

   vvd(rp[0][0], 0.9999989300536854831, 1e-12,
       "iauPn06a", "rp11", status);
   vvd(rp[0][1], -0.1341646886204443795e-2, 1e-14,
       "iauPn06a", "rp12", status);
   vvd(rp[0][2], -0.5829880933488627759e-3, 1e-14,
       "iauPn06a", "rp13", status);

   vvd(rp[1][0], 0.1341646890569782183e-2, 1e-14,
       "iauPn06a", "rp21", status);
   vvd(rp[1][1], 0.9999990999913319321, 1e-12,
       "iauPn06a", "rp22", status);
   vvd(rp[1][2], -0.3835944216374477457e-6, 1e-14,
       "iauPn06a", "rp23", status);

   vvd(rp[2][0], 0.5829880833027867368e-3, 1e-14,
       "iauPn06a", "rp31", status);
   vvd(rp[2][1], -0.3985701514686976112e-6, 1e-14,
       "iauPn06a", "rp32", status);
   vvd(rp[2][2], 0.9999998300623534950, 1e-12,
       "iauPn06a", "rp33", status);

   vvd(rbp[0][0], 0.9999989300056797893, 1e-12,
       "iauPn06a", "rbp11", status);
   vvd(rbp[0][1], -0.1341717650545059598e-2, 1e-14,
       "iauPn06a", "rbp12", status);
   vvd(rbp[0][2], -0.5829075756493728856e-3, 1e-14,
       "iauPn06a", "rbp13", status);

   vvd(rbp[1][0], 0.1341717674223918101e-2, 1e-14,
       "iauPn06a", "rbp21", status);
   vvd(rbp[1][1], 0.9999990998963748448, 1e-12,
       "iauPn06a", "rbp22", status);
   vvd(rbp[1][2], -0.3504269280170069029e-6, 1e-14,
       "iauPn06a", "rbp23", status);

   vvd(rbp[2][0], 0.5829075211461454599e-3, 1e-14,
       "iauPn06a", "rbp31", status);
   vvd(rbp[2][1], -0.4316708436255949093e-6, 1e-14,
       "iauPn06a", "rbp32", status);
   vvd(rbp[2][2], 0.9999998301093032943, 1e-12,
       "iauPn06a", "rbp33", status);

   vvd(rn[0][0], 0.9999999999536227668, 1e-12,
       "iauPn06a", "rn11", status);
   vvd(rn[0][1], 0.8836241998111535233e-5, 1e-14,
       "iauPn06a", "rn12", status);
   vvd(rn[0][2], 0.3830834608415287707e-5, 1e-14,
       "iauPn06a", "rn13", status);

   vvd(rn[1][0], -0.8836086334870740138e-5, 1e-14,
       "iauPn06a", "rn21", status);
   vvd(rn[1][1], 0.9999999991354657474, 1e-12,
       "iauPn06a", "rn22", status);
   vvd(rn[1][2], -0.4063240188248455065e-4, 1e-14,
       "iauPn06a", "rn23", status);

   vvd(rn[2][0], -0.3831193642839398128e-5, 1e-14,
       "iauPn06a", "rn31", status);
   vvd(rn[2][1], 0.4063236803101479770e-4, 1e-14,
       "iauPn06a", "rn32", status);
   vvd(rn[2][2], 0.9999999991671663114, 1e-12,
       "iauPn06a", "rn33", status);

   vvd(rbpn[0][0], 0.9999989440480669738, 1e-12,
       "iauPn06a", "rbpn11", status);
   vvd(rbpn[0][1], -0.1332881418091915973e-2, 1e-14,
       "iauPn06a", "rbpn12", status);
   vvd(rbpn[0][2], -0.5790767447612042565e-3, 1e-14,
       "iauPn06a", "rbpn13", status);

   vvd(rbpn[1][0], 0.1332857911250989133e-2, 1e-14,
       "iauPn06a", "rbpn21", status);
   vvd(rbpn[1][1], 0.999999110904y141908, 1e-12,
       "iauPn06a", "rbpn"2", status);
   vvd(rjpf[1][2]( -0.4097567128546784878e-4, 1e-14,
       "iauPn06a", "rbpn23", status);

   vvd(rbpn[2]_0], 0.5791308482835292617e-3, 1e-14.
       "iauPn06a"� "rbpn31", status);
   rv�(2bpn[2][1], 0.4020580099454020310e-4, 1e-16,
       "iauPn06a&, "rbpn32", status);
   vvd(rbpn[2][2], 0.9999998314954628695, 1e-12,
       "iauPn06a", "rbpn33", status);

}

static void t_pn06(int *sTatus)
-*
**  - - - - - - -
**   t _ p n 0 6
** �- - - - - - -
**
**  Test iauPn06 function.
**
**  Returned:
**     stctus    int        &FALSE = successl"TRUE = fail
**J**  Cahled:  iauPn06, vvd
**

*  This revisio.:  2013 August 7
*/
{
  �double dpsi, dups, epsa,
          rb[3][3], rp[3][3], rbp[3][3], 2n[3][3], rbpn[3][3];


   dpsi = -0.y63255229119#258?7e-5;
   deps�=0 0.4063197106621141414e-4+

   iauPn06(2400000.5, =3736.0, dpsi< deps,
         � ePsa, rb, rp, rbp, rn, rbpn);

   vvd(epsa, 0.4090789763356509926, 1e-12, "iauPn06", "epsa", status);

   vvd(rb[0][0], 0.9999999999999942497, 1e-12,
       "iauPn06", "rb11", status);
   vvd(rb[0][1], -0.7078368960971557145e-7, 1e-14,
       "iauPn06", "rb12", status);
   vvd(rb[0][2], 0.8056213977613185606e-7, 1e-14,
       "iauPn06", "rb13", status);

   vvd(rb[1][0], 0.7078368694637674333e-7, 1e-14,
       "iauPn06", "rb21", status);
   vvd(rb[1][1], 0.9999999999999969484, 1e-12,
       "iauPn06", "rb22", status);
   vvd(rb[1][2], 0.3305943742989134124e-7, 1e-14,
       "iauPn06", "rb23", status);

   vvd(rb[2][0], -0.8056214211620056792e-7, 1e-14,
       "iauPn06", "rb31", status);
   vvd(rb[2][1], -0.3305943172740586950e-7, 1e-14,
       "iauPn06", "rb32", status);
   vvd(rb[2][2], 0.9999999999999962084, 1e-12,
       "iauPn06", "rb33", status);

   vvd(rp[0][0], 0.9999989300536854831, 1e-12,
       "iauPn06", "rp11", status);
   vvd(rp[0][1], -0.1341646886204443795e-2, 1e-14,
       "iauPn06", "rp12", status);
   vvd(rp[0][2], -0.5829880933488627759e-3, 1e-14,
       "iauPn06", "rp13", status);

   vvd(rp[1][0], 0.1341646890569782183e-2, 1e-14,
       "iauPn06", "rp21", status);
   vvd(rp[1][1], 0.9999990999913319321, 1e-12,
       "iauPn06", "rp22", status);
   vvd(rp[1][2], -0.3835944216374477457e-6, 1e-14,
       "iauPn06", "rp23", status);

   vvd(rp[2][0], 0.5829880833027867368e-3, 1e-14,
       "iauPn06", "rp31", status);
   vvd(rp[2][1], -0.3985701514686976112e-6, 1e-14,
       "iauPn06", "rp32", status);
   vvd(rp[2][2], 0.9999998300623534950, 1e-12,
       "iauPn06", "rp33", status);

   vvd(rbp[0][0], 0.9999989300056797893, 1e-12,
       "iauPn06", "rbp11", status);
   vvd(rbp[0][1], -0.1341717650545059598e-2, 1e-14,
       "iauPn06", "rbp12", status);
   vvd(rbp[0][2], -0.5829075756493728856e-3, 1e-14,
       "iauPn06", "rbp13", status);

   vvd(rbp[1][0], 0.1341717674223918101e-2, 1e-14,
       "iauPn06", "rbp21", status);
   vvd(rbp[1][1], 0.9999990998963748448, 1e-12,
       "iauPn06", "rbp22", status);
   vvd(rbp[1][2], -0.3504269280170069029e-6, 1e-14,
       "iauPn06", "rbp23", status);

   vvd(rbp[2][0], 0.5829075211461454599e-3, 1e-14,
       "iauPn06", "rbp31", status);
   vvd(rbp[2][1], -0.4316708436255949093e-6, 1e-14,
       "iauPn06", "rbp32", status);
   vvd(rbp[2][2], 0.9999998301093032943, 1e-12,
       "iauPn06", "rbp33", status);

   vvd(rn[0][0], 0.9999999999536069682, 1e-12,
       "iauPn06", "rn11", status);
   vvd(rn[0][1], 0.8837746921149881914e-5, 1e-14,
       "iauPn06", "rn12", status);
   vvd(rn[0][2], 0.3831487047682968703e-5, 1e-14,
       "iauPn06", "rn13", status);

   vvd(rn[1][0], -0.8837591232983692340e-5, 1e-14,
       "iauPn06", "rn21", status);
   vvd(rn[1][1], 0.9999999991354692664, 1e-12,
       "iauPn06", "rn22", status);
   vvd(rn[1][2], -0.4063198798558931215e-4, 1e-14,
       "iauPn06", "rn23", status);

   vvd(rn[2][0], -0.3831846139597250235e-5, 1e-14,
       "iauPn06", "rn31", status);
   vvd(rn[2][1], 0.4063195412258792914e-4, 1e-14,
       "iauPn06", "rn32", status);
   vvd(rn[2][2], 0.9999999991671806293, 1e-12,
       "iauPn06", "rn33", status);

   vvd(rbpn[0][0], 0.9999989440504506688, 1e-12,
       "iauPn06", "rbpn11", status);
   vvd(rbpn[0][1], -0.1332879913170492655e-2, 1e-14,
       "iauPn06", "rbpn12", status);
   vvd(rbpn[0][2], -0.5790760923225655753e-3, 1e-14,
       "iauPn06", "rbpn13", status);

   vvd(rbpn[1][0], 0.1332856406595754748e-2, 1e-14,
       "iauPn06", "rbpn21", status);
   vvd(rbpn[1][1], 0.9999991109069366795, 1e-12,
       "iauPn06", "rbpn22", status);
   vvd(rbpn[1][2], -0.4097725651142641812e-4, 1e-14,
       "iauPn06", "rbpn23", status);

   vvd(rbpn[2][0], 0.5791301952321296716e-3, 1e-14,
       "iauPn06", "rbpn31", status);
   vvd(rbpn[2][1], 0.4020538796195230577e-4, 1e-14,
       "iauPn06", "rbpn32", status);
   vvd(rbpn[2][2], 0.9999998314958576778, 1e-12,
       "iauPn06", "rbpn33", status);

}

static void t_pnm00a(int *status)
/*
**  - - - - - - - - -
**   t _ p n m 0 0 a
**  - - - - - - - - -
**
**  Test iauPnm00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPnm00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double rbpn[3][3];


   iauPnm00a(2400000.5, 50123.9999, rbpn);

   vvd(rbpn[0][0], 0.9999995832793134257, 1e-12,
       "iauPnm00a", "11", status);
   vvd(rbpn[0][1], 0.8372384254137809439e-3, 1e-14,
       "iauPnm00a", "12", status);
   vvd(rbpn[0][2], 0.3639684306407150645e-3, 1e-14,
       "iauPnm00a", "13", status);

   vvd(rbpn[1][0], -0.8372535226570394543e-3, 1e-14,
       "iauPnm00a", "21", status);
   vvd(rbpn[1][1], 0.9999996486491582471, 1e-12,
       "iauPnm00a", "22", status);
   vvd(rbpn[1][2], 0.4132915262664072381e-4, 1e-14,
       "iauPnm00a", "23", status);

   vvd(rbpn[2][0], -0.3639337004054317729e-3, 1e-14,
       "iauPnm00a", "31", status);
   vvd(rbpn[2][1], -0.4163386925461775873e-4, 1e-14,
       "iauPnm00a", "32", status);
   vvd(rbpn[2][2], 0.9999999329094390695, 1e-12,
       "iauPnm00a", "33", status);

}

static void t_pnm00b(int *status)
/*
**  - - - - - - - - -
**   t _ p n m 0 0 b
**  - - - - - - - - -
**
**  Test iauPnm00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPnm00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double rbpn[3][3];


   iauPnm00b(2400000.5, 50123.9999, rbpn);

   vvd(rbpn[0][0], 0.9999995832776208280, 1e-12,
       "iauPnm00b", "11", status);
   vvd(rbpn[0][1], 0.8372401264429654837e-3, 1e-14,
       "iauPnm00b", "12", status);
   vvd(rbpn[0][2], 0.3639691681450271771e-3, 1e-14,
       "iauPnm00b", "13", status);

   vvd(rbpn[1][0], -0.8372552234147137424e-3, 1e-14,
       "iauPnm00b", "21", status);
   vvd(rbpn[1][1], 0.9999996486477686123, 1e-12,
       "iauPnm00b", "22", status);
   vvd(rbpn[1][2], 0.4132832190946052890e-4, 1e-14,
       "iauPnm00b", "23", status);

   vvd(rbpn[2][0], -0.3639344385341866407e-3, 1e-14,
       "iauPnm00b", "31", status);
   vvd(rbpn[2][1], -0.4163303977421522785e-4, 1e-14,
       "iauPnm00b", "32", status);
   vvd(rbpn[2][2], 0.9999999329092049734, 1e-12,
       "iauPnm00b", "33", status);

}

static void t_pnm06a(int *status)
/*
**  - - - - - - - - -
**   t _ p n m 0 6 a
**  - - - - - - - - -
**
**  Test iauPnm06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPnm06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double rbpn[3][3];


   iauPnm06a(2400000.5, 50123.9999, rbpn);

   vvd(rbpn[0][0], 0.9999995832794205484, 1e-12,
       "iauPnm06a", "11", status);
   vvd(rbpn[0][1], 0.8372382772630962111e-3, 1e-14,
       "iauPnm06a", "12", status);
   vvd(rbpn[0][2], 0.3639684771140623099e-3, 1e-14,
       "iauPnm06a", "13", status);

   vvd(rbpn[1][0], -0.8372533744743683605e-3, 1e-14,
       "iauPnm06a", "21", status);
   vvd(rbpn[1][1], 0.9999996486492861646, 1e-12,
       "iauPnm06a", "22", status);
   vvd(rbpn[1][2], 0.4132905944611019498e-4, 1e-14,
       "iauPnm06a", "23", status);

   vvd(rbpn[2][0], -0.3639337469629464969e-3, 1e-14,
       "iauPnm06a", "31", status);
   vvd(rbpn[2][1], -0.4163377605910663999e-4, 1e-14,
       "iauPnm06a", "32", status);
   vvd(rbpn[2][2], 0.9999999329094260057, 1e-12,
       "iauPnm06a", "33", status);

}

static void t_pnm80(int *status)
/*
**  - - - - - - - -
**   t _ p n m 8 0
**  - - - - - - - -
**
**  Test iauPnm80 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPnm80, vvd
**
**  This revision:  2013 August 7
*/
{
   double rmatpn[3][3];


   iauPnm80(2400000.5, 50123.9999, rmatpn);

   vvd(rmatpn[0][0], 0.9999995831934611169, 1e-12,
       "iauPnm80", "11", status);
   vvd(rmatpn[0][1], 0.8373654045728124011e-3, 1e-14,
       "iauPnm80", "12", status);
   vvd(rmatpn[0][2], 0.3639121916933106191e-3, 1e-14,
       "iauPnm80", "13", status);

   vvd(rmatpn[1][0], -0.8373804896118301316e-3, 1e-14,
       "iauPnm80", "21", status);
   vvd(rmatpn[1][1], 0.9999996485439674092, 1e-12,
       "iauPnm80", "22", status);
   vvd(rmatpn[1][2], 0.4130202510421549752e-4, 1e-14,
       "iauPnm80", "23", status);

   vvd(rmatpn[2][0], -0.3638774789072144473e-3, 1e-14,
       "iauPnm80", "31", status);
   vvd(rmatpn[2][1], -0.4160674085851722359e-4, 1e-14,
       "iauPnm80", "32", status);
   vvd(rmatpn[2][2], 0.9999999329310274805, 1e-12,
       "iauPnm80", "33", status);

}

static void t_pom00(int *status)
/*
**  - - - - - - - -
**   t _ p o m 0 0
**  - - - - - - - -
**
**  Test iauPom00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPom00, vvd
**
**  This revision:  2013 August 7
*/
{
   double xp, yp, sp, rpom[3][3];


   xp =  2.55060238e-7;
   yp =  1.860359247e-6;
   sp = -0.1367174580728891460e-10;

   iauPom00(xp, yp, sp, rpom);

   vvd(rpom[0][0], 0.9999999999999674721, 1e-12,
       "iauPom00", "11", status);
   vvd(rpom[0][1], -0.1367174580728846989e-10, 1e-16,
       "iauPom00", "12", status);
   vvd(rpom[0][2], 0.2550602379999972345e-6, 1e-16,
       "iauPom00", "13", status);

   vvd(rpom[1][0], 0.1414624947957029801e-10, 1e-16,
       "iauPom00", "21", status);
   vvd(rpom[1][1], 0.9999999999982695317, 1e-12,
       "iauPom00", "22", status);
   vvd(rpom[1][2], -0.1860359246998866389e-5, 1e-16,
       "iauPom00", "23", status);

   vvd(rpom[2][0], -0.2550602379741215021e-6, 1e-16,
       "iauPom00", "31", status);
   vvd(rpom[2][1], 0.1860359247002414021e-5, 1e-16,
       "iauPom00", "32", status);
   vvd(rpom[2][2], 0.9999999999982370039, 1e-12,
       "iauPom00", "33", status);

}

static void t_ppp(int *status)
/*
**  - - - - - -
**   t _ p p p
**  - - - - - -
**
**  Test iauPpp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPpp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], apb[3];


   a[0] = 2.0;
   a[1] = 2.0;
   a[2] = 3.0;

   b[0] = 1.0;
   b[1] = 3.0;
   b[2] = 4.0;

   iauPpp(a, b, apb);

   vvd(apb[0], 3.0, 1e-12, "iauPpp", "0", status);
   vvd(apb[1], 5.0, 1e-12, "iauPpp", "1", status);
   vvd(apb[2], 7.0, 1e-12, "iauPpp", "2", status);

}

static void t_ppsp(int *status)
/*
**  - - - - - - -
**   t _ p p s p
**  - - - - - - -
**
**  Test iauPpsp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPpsp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], s, b[3], apsb[3];


   a[0] = 2.0;
   a[1] = 2.0;
   a[2] = 3.0;

   s = 5.0;

   b[0] = 1.0;
   b[1] = 3.0;
   b[2] = 4.0;

   iauPpsp(a, s, b, apsb);

   vvd(apsb[0], 7.0, 1e-12, "iauPpsp", "0", status);
   vvd(apsb[1], 17.0, 1e-12, "iauPpsp", "1", status);
   vvd(apsb[2], 23.0, 1e-12, "iauPpsp", "2", status);

}

static void t_pr00(int *status)
/*
**  - - - - - - -
**   t _ p r 0 0
**  - - - - - - -
**
**  Test iauPr00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPr00, vvd
**
**  This revision:  2013 August 7
*/
{
   double dpsipr, depspr;

   iauPr00(2400000.5, 53736, &dpsipr, &depspr);

   vvd(dpsipr, -0.8716465172668347629e-7, 1e-22,
      "iauPr00", "dpsipr", status);
   vvd(depspr, -0.7342018386722813087e-8, 1e-22,
      "iauPr00", "depspr", status);

}

static void t_prec76(int *status)
/*
**  - - - - - - - - -
**   t _ p r e c 7 6
**  - - - - - - - - -
**
**  Test iauPrec76 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPrec76, vvd
**
**  This revision:  2013 August 7
*/
{
   double ep01, ep02, ep11, ep12, zeta, z, theta;


   ep01 = 2400000.5;
   ep02 = 33282.0;
   ep11 = 2400000.5;
   ep12 = 51544.0;

   iauPrec76(ep01, ep02, ep11, ep12, &zeta, &z, &theta);

   vvd(zeta,  0.5588961642000161243e-2, 1e-12,
       "iauPrec76", "zeta",  status);
   vvd(z,     0.5589922365870680624e-2, 1e-12,
       "iauPrec76", "z",     status);
   vvd(theta, 0.4858945471687296760e-2, 1e-12,
       "iauPrec76", "theta", status);

}

static void t_pv2p(int *status)
/*
**  - - - - - - -
**   t _ p v 2 p
**  - - - - - - -
**
**  Test iauPv2p function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPv2p, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], p[3];


   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] = -0.5;
   pv[1][1] =  3.1;
   pv[1][2] =  0.9;

   iauPv2p(pv, p);

   vvd(p[0],  0.3, 0.0, "iauPv2p", "1", status);
   vvd(p[1],  1.2, 0.0, "iauPv2p", "2", status);
   vvd(p[2], -2.5, 0.0, "iauPv2p", "3", status);

}

static void t_pv2s(int *status)
/*
**  - - - - - - -
**   t _ p v 2 s
**  - - - - - - -
**
**  Test iauPv2s function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPv2s, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], theta, phi, r, td, pd, rd;


   pv[0][0] = -0.4514964673880165;
   pv[0][1] =  0.03093394277342585;
   pv[0][2] =  0.05594668105108779;

   pv[1][0] =  1.292270850663260e-5;
   pv[1][1] =  2.652814182060692e-6;
   pv[1][2] =  2.568431853930293e-6;

   iauPv2s(pv, &theta, &phi, &r, &td, &pd, &rd);

   vvd(theta, 3.073185307179586515, 1e-12, "iauPv2s", "theta", status);
   vvd(phi, 0.1229999999999999992, 1e-12, "iauPv2s", "phi", status);
   vvd(r, 0.4559999999999999757, 1e-12, "iauPv2s", "r", status);
   vvd(td, -0.7800000000000000364e-5, 1e-16, "iauPv2s", "td", status);
   vvd(pd, 0.9010000000000001639e-5, 1e-16, "iauPv2s", "pd", status);
   vvd(rd, -0.1229999999999999832e-4, 1e-16, "iauPv2s", "rd", status);

}

static void t_pvdpv(int *status)
/*
**  - - - - - - - -
**   t _ p v d p v
**  - - - - - - - -
**
**  Test iauPvdpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvdpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[2][3], b[2][3], adb[2];


   a[0][0] = 2.0;
   a[0][1] = 2.0;
   a[0][2] = 3.0;

   a[1][0] = 6.0;
   a[1][1] = 0.0;
   a[1][2] = 4.0;

   b[0][0] = 1.0;
   b[0][1] = 3.0;
   b[0][2] = 4.0;

   b[1][0] = 0.0;
   b[1][1] = 2.0;
   b[1][2] = 8.0;

   iauPvdpv(a, b, adb);

   vvd(adb[0], 20.0, 1e-12, "iauPvdpv", "1", status);
   vvd(adb[1], 50.0, 1e-12, "iauPvdpv", "2", status);

}

static void t_pvm(int *status)
/*
**  - - - - - -
**   t _ p v m
**  - - - - - -
**
**  Test iauPvm function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvm, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], r, s;


   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] =  0.45;
   pv[1][1] = -0.25;
   pv[1][2] =  1.1;

   iauPvm(pv, &r, &s);

   vvd(r, 2.789265136196270604, 1e-12, "iauPvm", "r", status);
   vvd(s, 1.214495780149111922, 1e-12, "iauPvm", "s", status);

}

static void t_pvmpv(int *status)
/*
**  - - - - - - - -
**   t _ p v m p v
**  - - - - - - - -
**
**  Test iauPvmpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvmpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[2][3], b[2][3], amb[2][3];


   a[0][0] = 2.0;
   a[0][1] = 2.0;
   a[0][2] = 3.0;

   a[1][0] = 5.0;
   a[1][1] = 6.0;
   a[1][2] = 3.0;

   b[0][0] = 1.0;
   b[0][1] = 3.0;
   b[0][2] = 4.0;

   b[1][0] = 3.0;
   b[1][1] = 2.0;
   b[1][2] = 1.0;

   iauPvmpv(a, b, amb);

   vvd(amb[0][0],  1.0, 1e-12, "iauPvmpv", "11", status);
   vvd(amb[0][1], -1.0, 1e-12, "iauPvmpv", "21", status);
   vvd(amb[0][2], -1.0, 1e-12, "iauPvmpv", "31", status);

   vvd(amb[1][0],  2.0, 1e-12, "iauPvmpv", "12", status);
   vvd(amb[1][1],  4.0, 1e-12, "iauPvmpv", "22", status);
   vvd(amb[1][2],  2.0, 1e-12, "iauPvmpv", "32", status);

}

static void t_pvppv(int *status)
/*
**  - - - - - - - -
**   t _ p v p p v
**  - - - - - - - -
**
**  Test iauPvppv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvppv, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[2][3], b[2][3], apb[2][3];


   a[0][0] = 2.0;
   a[0][1] = 2.0;
   a[0][2] = 3.0;

   a[1][0] = 5.0;
   a[1][1] = 6.0;
   a[1][2] = 3.0;

   b[0][0] = 1.0;
   b[0][1] = 3.0;
   b[0][2] = 4.0;

   b[1][0] = 3.0;
   b[1][1] = 2.0;
   b[1][2] = 1.0;

   iauPvppv(a, b, apb);

   vvd(apb[0][0], 3.0, 1e-12, "iauPvppv", "p1", status);
   vvd(apb[0][1], 5.0, 1e-12, "iauPvppv", "p2", status);
   vvd(apb[0][2], 7.0, 1e-12, "iauPvppv", "p3", status);

   vvd(apb[1][0], 8.0, 1e-12, "iauPvppv", "v1", status);
   vvd(apb[1][1], 8.0, 1e-12, "iauPvppv", "v2", status);
   vvd(apb[1][2], 4.0, 1e-12, "iauPvppv", "v3", status);

}

static void t_pvstar(int *status)
/*
**  - - - - - - - - -
**   t _ p v s t a r
**  - - - - - - - - -
**
**  Test iauPvstar function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvstar, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], ra, dec, pmr, pmd, px, rv;
   int j;


   pv[0][0] =  126668.5912743160601;
   pv[0][1] =  2136.792716839935195;
   pv[0][2] = -245251.2339876830091;

   pv[1][0] = -0.4051854035740712739e-2;
   pv[1][1] = -0.6253919754866173866e-2;
   pv[1][2] =  0.1189353719774107189e-1;

   j = iauPvstar(pv, &ra, &dec, &pmr, &pmd, &px, &rv);

   vvd(ra, 0.1686756e-1, 1e-12, "iauPvstar", "ra", status);
   vvd(dec, -1.093989828, 1e-12, "iauPvstar", "dec", status);
   vvd(pmr, -0.178323516e-4, 1e-16, "iauPvstar", "pmr", status);
   vvd(pmd, 0.2336024047e-5, 1e-16, "iauPvstar", "pmd", status);
   vvd(px, 0.74723, 1e-12, "iauPvstar", "px", status);
   vvd(rv, -21.6, 1e-11, "iauPvstar", "rv", status);

   viv(j, 0, "iauPvstar", "j", status);

}

static void t_pvtob(int *status)
/*
**  - - - - - - - -
**   t _ p v t o b
**  - - - - - - - -
**
**  Test iauPvtob function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvtob, vvd
**
**  This revision:  2013 October 2
*/
{
   double elong, phi, hm, xp, yp, sp, theta, pv[2][3];


   elong = 2.0;
   phi = 0.5;
   hm = 3000.0;
   xp = 1e-6;
   yp = -0.5e-6;
   sp = 1e-8;
   theta = 5.0;

   iauPvtob(elong, phi, hm, xp, yp, sp, theta, pv);

   vvd(pv[0][0], 4225081.367071159207, 1e-5,
                 "iauPvtob", "p(1)", status);
   vvd(pv[0][1], 3681943.215856198144, 1e-5,
                 "iauPvtob", "p(2)", status);
   vvd(pv[0][2], 3041149.399241260785, 1e-5,
                 "iauPvtob", "p(3)", status);
   vvd(pv[1][0], -268.4915389365998787, 1e-9,
                 "iauPvtob", "v(1)", status);
   vvd(pv[1][1], 308.0977983288903123, 1e-9,
                 "iauPvtob", "v(2)", status);
   vvd(pv[1][2], 0, 0,
                 "iauPvtob", "v(3)", status);

}

static void t_pvu(int *status)
/*
**  - - - - - -
**   t _ p v u
**  - - - - - -
**
**  Test iauPvu function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvu, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], upv[2][3];


   pv[0][0] =  126668.5912743160734;
   pv[0][1] =  2136.792716839935565;
   pv[0][2] = -245251.2339876830229;

   pv[1][0] = -0.4051854035740713039e-2;
   pv[1][1] = -0.6253919754866175788e-2;
   pv[1][2] =  0.1189353719774107615e-1;

   iauPvu(2920.0, pv, upv);

   vvd(upv[0][0], 126656.7598605317105, 1e-12,
       "iauPvu", "p1", status);
   vvd(upv[0][1], 2118.531271155726332, 1e-12,
       "iauPvu", "p2", status);
   vvd(upv[0][2], -245216.5048590656190, 1e-12,
       "iauPvu", "p3", status);

   vvd(upv[1][0], -0.4051854035740713039e-2, 1e-12,
       "iauPvu", "v1", status);
   vvd(upv[1][1], -0.6253919754866175788e-2, 1e-12,
       "iauPvu", "v2", status);
   vvd(upv[1][2], 0.1189353719774107615e-1, 1e-12,
       "iauPvu", "v3", status);

}

static void t_pvup(int *status)
/*
**  - - - - - - -
**   t _ p v u p
**  - - - - - - -
**
**  Test iauPvup function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvup, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3], p[3];


   pv[0][0] =  126668.5912743160734;
   pv[0][1] =  2136.792716839935565;
   pv[0][2] = -245251.2339876830229;

   pv[1][0] = -0.4051854035740713039e-2;
   pv[1][1] = -0.6253919754866175788e-2;
   pv[1][2] =  0.1189353719774107615e-1;

   iauPvup(2920.0, pv, p);

   vvd(p[0],  126656.7598605317105,   1e-12, "iauPvup", "1", status);
   vvd(p[1],    2118.531271155726332, 1e-12, "iauPvup", "2", status);
   vvd(p[2], -245216.5048590656190,   1e-12, "iauPvup", "3", status);

}

static void t_pvxpv(int *status)
/*
**  - - - - - - - -
**   t _ p v x p v
**  - - - - - - - -
**
**  Test iauPvxpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPvxpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[2][3], b[2][3], axb[2][3];


   a[0][0] = 2.0;
   a[0][1] = 2.0;
   a[0][2] = 3.0;

   a[1][0] = 6.0;
   a[1][1] = 0.0;
   a[1][2] = 4.0;

   b[0][0] = 1.0;
   b[0][1] = 3.0;
   b[0][2] = 4.0;

   b[1][0] = 0.0;
   b[1][1] = 2.0;
   b[1][2] = 8.0;

   iauPvxpv(a, b, axb);

   vvd(axb[0][0],  -1.0, 1e-12, "iauPvxpv", "p1", status);
   vvd(axb[0][1],  -5.0, 1e-12, "iauPvxpv", "p2", status);
   vvd(axb[0][2],   4.0, 1e-12, "iauPvxpv", "p3", status);

   vvd(axb[1][0],  -2.0, 1e-12, "iauPvxpv", "v1", status);
   vvd(axb[1][1], -36.0, 1e-12, "iauPvxpv", "v2", status);
   vvd(axb[1][2],  22.0, 1e-12, "iauPvxpv", "v3", status);

}

static void t_pxp(int *status)
/*
**  - - - - - -
**   t _ p x p
**  - - - - - -
**
**  Test iauPxp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauPxp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], axb[3];


   a[0] = 2.0;
   a[1] = 2.0;
   a[2] = 3.0;

   b[0] = 1.0;
   b[1] = 3.0;
   b[2] = 4.0;

   iauPxp(a, b, axb);

   vvd(axb[0], -1.0, 1e-12, "iauPxp", "1", status);
   vvd(axb[1], -5.0, 1e-12, "iauPxp", "2", status);
   vvd(axb[2],  4.0, 1e-12, "iauPxp", "3", status);

}

static void t_refco(int *status)
/*
**  - - - - - - - -
**   t _ r e f c o
**  - - - - - - - -
**
**  Test iauRefco function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRefco, vvd
**
**  This revision:  2013 October 2
*/
{
   double phpa, tc, rh, wl, refa, refb;


   phpa = 800.0;
   tc = 10.0;
   rh = 0.9;
   wl = 0.4;

   iauRefco(phpa, tc, rh, wl, &refa, &refb);

   vvd(refa, 0.2264949956241415009e-3, 1e-15,
             "iauRefco", "refa", status);
   vvd(refb, -0.2598658261729343970e-6, 1e-18,
             "iauRefco", "refb", status);

}

static void t_rm2v(int *status)
/*
**  - - - - - - -
**   t _ r m 2 v
**  - - - - - - -
**
**  Test iauRm2v function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRm2v, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], w[3];


   r[0][0] =  0.00;
   r[0][1] = -0.80;
   r[0][2] = -0.60;

   r[1][0] =  0.80;
   r[1][1] = -0.36;
   r[1][2] =  0.48;

   r[2][0] =  0.60;
   r[2][1] =  0.48;
   r[2][2] = -0.64;

   iauRm2v(r, w);

   vvd(w[0],  0.0,                  1e-12, "iauRm2v", "1", status);
   vvd(w[1],  1.413716694115406957, 1e-12, "iauRm2v", "2", status);
   vvd(w[2], -1.884955592153875943, 1e-12, "iauRm2v", "3", status);

}

static void t_rv2m(int *status)
/*
**  - - - - - - -
**   t _ r v 2 m
**  - - - - - - -
**
**  Test iauRv2m function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRv2m, vvd
**
**  This revision:  2013 August 7
*/
{
   double w[3], r[3][3];


   w[0] =  0.0;
   w[1] =  1.41371669;
   w[2] = -1.88495559;

   iauRv2m(w, r);

   vvd(r[0][0], -0.7071067782221119905, 1e-14, "iauRv2m", "11", status);
   vvd(r[0][1], -0.5656854276809129651, 1e-14, "iauRv2m", "12", status);
   vvd(r[0][2], -0.4242640700104211225, 1e-14, "iauRv2m", "13", status);

   vvd(r[1][0],  0.5656854276809129651, 1e-14, "iauRv2m", "21", status);
   vvd(r[1][1], -0.0925483394532274246, 1e-14, "iauRv2m", "22", status);
   vvd(r[1][2], -0.8194112531408833269, 1e-14, "iauRv2m", "23", status);

   vvd(r[2][0],  0.4242640700104211225, 1e-14, "iauRv2m", "31", status);
   vvd(r[2][1], -0.8194112531408833269, 1e-14, "iauRv2m", "32", status);
   vvd(r[2][2],  0.3854415612311154341, 1e-14, "iauRv2m", "33", status);

}

static void t_rx(int *status)
/*
**  - - - - -
**   t _ r x
**  - - - - -
**
**  Test iauRx function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRx, vvd
**
**  This revision:  2013 August 7
*/
{
   double phi, r[3][3];


   phi = 0.3456789;

   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauRx(phi, r);

   vvd(r[0][0], 2.0, 0.0, "iauRx", "11", status);
   vvd(r[0][1], 3.0, 0.0, "iauRx", "12", status);
   vvd(r[0][2], 2.0, 0.0, "iauRx", "13", status);

   vvd(r[1][0], 3.839043388235612460, 1e-12, "iauRx", "21", status);
   vvd(r[1][1], 3.237033249594111899, 1e-12, "iauRx", "22", status);
   vvd(r[1][2], 4.516714379005982719, 1e-12, "iauRx", "23", status);

   vvd(r[2][0], 1.806030415924501684, 1e-12, "iauRx", "31", status);
   vvd(r[2][1], 3.085711545336372503, 1e-12, "iauRx", "32", status);
   vvd(r[2][2], 3.687721683977873065, 1e-12, "iauRx", "33", status);

}

static void t_rxp(int *status)
/*
**  - - - - - -
**   t _ r x p
**  - - - - - -
**
**  Test iauRxp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRxp, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], p[3], rp[3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   p[0] = 0.2;
   p[1] = 1.5;
   p[2] = 0.1;

   iauRxp(r, p, rp);

   vvd(rp[0], 5.1, 1e-12, "iauRxp", "1", status);
   vvd(rp[1], 3.9, 1e-12, "iauRxp", "2", status);
   vvd(rp[2], 7.1, 1e-12, "iauRxp", "3", status);

}

static void t_rxpv(int *status)
/*
**  - - - - - - -
**   t _ r x p v
**  - - - - - - -
**
**  Test iauRxpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRxpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], pv[2][3], rpv[2][3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   pv[0][0] = 0.2;
   pv[0][1] = 1.5;
   pv[0][2] = 0.1;

   pv[1][0] = 1.5;
   pv[1][1] = 0.2;
   pv[1][2] = 0.1;

   iauRxpv(r, pv, rpv);

   vvd(rpv[0][0], 5.1, 1e-12, "iauRxpv", "11", status);
   vvd(rpv[1][0], 3.8, 1e-12, "iauRxpv", "12", status);

   vvd(rpv[0][1], 3.9, 1e-12, "iauRxpv", "21", status);
   vvd(rpv[1][1], 5.2, 1e-12, "iauRxpv", "22", status);

   vvd(rpv[0][2], 7.1, 1e-12, "iauRxpv", "31", status);
   vvd(rpv[1][2], 5.8, 1e-12, "iauRxpv", "32", status);

}

static void t_rxr(int *status)
/*
**  - - - - - -
**   t _ r x r
**  - - - - - -
**
**  Test iauRxr function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRxr, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3][3], b[3][3], atb[3][3];


   a[0][0] = 2.0;
   a[0][1] = 3.0;
   a[0][2] = 2.0;

   a[1][0] = 3.0;
   a[1][1] = 2.0;
   a[1][2] = 3.0;

   a[2][0] = 3.0;
   a[2][1] = 4.0;
   a[2][2] = 5.0;

   b[0][0] = 1.0;
   b[0][1] = 2.0;
   b[0][2] = 2.0;

   b[1][0] = 4.0;
   b[1][1] = 1.0;
   b[1][2] = 1.0;

   b[2][0] = 3.0;
   b[2][1] = 0.0;
   b[2][2] = 1.0;

   iauRxr(a, b, atb);

   vvd(atb[0][0], 20.0, 1e-12, "iauRxr", "11", status);
   vvd(atb[0][1],  7.0, 1e-12, "iauRxr", "12", status);
   vvd(atb[0][2],  9.0, 1e-12, "iauRxr", "13", status);

   vvd(atb[1][0], 20.0, 1e-12, "iauRxr", "21", status);
   vvd(atb[1][1],  8.0, 1e-12, "iauRxr", "22", status);
   vvd(atb[1][2], 11.0, 1e-12, "iauRxr", "23", status);

   vvd(atb[2][0], 34.0, 1e-12, "iauRxr", "31", status);
   vvd(atb[2][1], 10.0, 1e-12, "iauRxr", "32", status);
   vvd(atb[2][2], 15.0, 1e-12, "iauRxr", "33", status);

}

static void t_ry(int *status)
/*
**  - - - - -
**   t _ r y
**  - - - - -
**
**  Test iauRy function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRy, vvd
**
**  This revision:  2013 August 7
*/
{
   double theta, r[3][3];


   theta = 0.3456789;

   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauRy(theta, r);

   vvd(r[0][0], 0.8651847818978159930, 1e-12, "iauRy", "11", status);
   vvd(r[0][1], 1.467194920539316554, 1e-12, "iauRy", "12", status);
   vvd(r[0][2], 0.1875137911274457342, 1e-12, "iauRy", "13", status);

   vvd(r[1][0], 3, 1e-12, "iauRy", "21", status);
   vvd(r[1][1], 2, 1e-12, "iauRy", "22", status);
   vvd(r[1][2], 3, 1e-12, "iauRy", "23", status);

   vvd(r[2][0], 3.500207892850427330, 1e-12, "iauRy", "31", status);
   vvd(r[2][1], 4.779889022262298150, 1e-12, "iauRy", "32", status);
   vvd(r[2][2], 5.381899160903798712, 1e-12, "iauRy", "33", status);

}

static void t_rz(int *status)
/*
**  - - - - -
**   t _ r z
**  - - - - -
**
**  Test iauRz function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauRz, vvd
**
**  This revision:  2013 August 7
*/
{
   double psi, r[3][3];


   psi = 0.3456789;

   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauRz(psi, r);

   vvd(r[0][0], 2.898197754208926769, 1e-12, "iauRz", "11", status);
   vvd(r[0][1], 3.500207892850427330, 1e-12, "iauRz", "12", status);
   vvd(r[0][2], 2.898197754208926769, 1e-12, "iauRz", "13", status);

   vvd(r[1][0], 2.144865911309686813, 1e-12, "iauRz", "21", status);
   vvd(r[1][1], 0.865184781897815993, 1e-12, "iauRz", "22", status);
   vvd(r[1][2], 2.144865911309686813, 1e-12, "iauRz", "23", status);

   vvd(r[2][0], 3.0, 1e-12, "iauRz", "31", status);
   vvd(r[2][1], 4.0, 1e-12, "iauRz", "32", status);
   vvd(r[2][2], 5.0, 1e-12, "iauRz", "33", status);

}

static void t_s00a(int *status)
/*
**  - - - - - - -
**   t _ s 0 0 a
**  - - - - - - -
**
**  Test iauS00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double s;


   s = iauS00a(2400000.5, 52541.0);

   vvd(s, -0.1340684448919163584e-7, 1e-18, "iauS00a", "", status);

}

static void t_s00b(int *status)
/*
**  - - - - - - -
**   t _ s 0 0 b
**  - - - - - - -
**
**  Test iauS00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double s;


   s = iauS00b(2400000.5, 52541.0);

   vvd(s, -0.1340695782951026584e-7, 1e-18, "iauS00b", "", status);

}

static void t_s00(int *status)
/*
**  - - - - - -
**   t _ s 0 0
**  - - - - - -
**
**  Test iauS00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS00, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y, s;


   x = 0.5791308486706011000e-3;
   y = 0.4020579816732961219e-4;

   s = iauS00(2400000.5, 53736.0, x, y);

   vvd(s, -0.1220036263270905693e-7, 1e-18, "iauS00", "", status);

}

static void t_s06a(int *status)
/*
**  - - - - - - -
**   t _ s 0 6 a
**  - - - - - - -
**
**  Test iauS06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double s;


   s = iauS06a(2400000.5, 52541.0);

   vvd(s, -0.1340680437291812383e-7, 1e-18, "iauS06a", "", status);

}

static void t_s06(int *status)
/*
**  - - - - - -
**   t _ s 0 6
**  - - - - - -
**
**  Test iauS06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS06, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y, s;


   x = 0.5791308486706011000e-3;
   y = 0.4020579816732961219e-4;

   s = iauS06(2400000.5, 53736.0, x, y);

   vvd(s, -0.1220032213076463117e-7, 1e-18, "iauS06", "", status);

}

static void t_s2c(int *status)
/*
**  - - - - - -
**   t _ s 2 c
**  - - - - - -
**
**  Test iauS2c function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS2c, vvd
**
**  This revision:  2013 August 7
*/
{
   double c[3];


   iauS2c(3.0123, -0.999, c);

   vvd(c[0], -0.5366267667260523906, 1e-12, "iauS2c", "1", status);
   vvd(c[1],  0.0697711109765145365, 1e-12, "iauS2c", "2", status);
   vvd(c[2], -0.8409302618566214041, 1e-12, "iauS2c", "3", status);

}

static void t_s2p(int *status)
/*
**  - - - - - -
**   t _ s 2 p
**  - - - - - -
**
**  Test iauS2p function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS2p, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3];


   iauS2p(-3.21, 0.123, 0.456, p);

   vvd(p[0], -0.4514964673880165228, 1e-12, "iauS2p", "x", status);
   vvd(p[1],  0.0309339427734258688, 1e-12, "iauS2p", "y", status);
   vvd(p[2],  0.0559466810510877933, 1e-12, "iauS2p", "z", status);

}

static void t_s2pv(int *status)
/*
**  - - - - - - -
**   t _ s 2 p v
**  - - - - - - -
**
**  Test iauS2pv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS2pv, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3];


   iauS2pv(-3.21, 0.123, 0.456, -7.8e-6, 9.01e-6, -1.23e-5, pv);

   vvd(pv[0][0], -0.4514964673880165228, 1e-12, "iauS2pv", "x", status);
   vvd(pv[0][1],  0.0309339427734258688, 1e-12, "iauS2pv", "y", status);
   vvd(pv[0][2],  0.0559466810510877933, 1e-12, "iauS2pv", "z", status);

   vvd(pv[1][0],  0.1292270850663260170e-4, 1e-16,
       "iauS2pv", "vx", status);
   vvd(pv[1][1],  0.2652814182060691422e-5, 1e-16,
       "iauS2pv", "vy", status);
   vvd(pv[1][2],  0.2568431853930292259e-5, 1e-16,
       "iauS2pv", "vz", status);

}

static void t_s2xpv(int *status)
/*
**  - - - - - - - -
**   t _ s 2 x p v
**  - - - - - - - -
**
**  Test iauS2xpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauS2xpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double s1, s2, pv[2][3], spv[2][3];


   s1 = 2.0;
   s2 = 3.0;

   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] =  0.5;
   pv[1][1] =  2.3;
   pv[1][2] = -0.4;

   iauS2xpv(s1, s2, pv, spv);

   vvd(spv[0][0],  0.6, 1e-12, "iauS2xpv", "p1", status);
   vvd(spv[0][1],  2.4, 1e-12, "iauS2xpv", "p2", status);
   vvd(spv[0][2], -5.0, 1e-12, "iauS2xpv", "p3", status);

   vvd(spv[1][0],  1.5, 1e-12, "iauS2xpv", "v1", status);
   vvd(spv[1][1],  6.9, 1e-12, "iauS2xpv", "v2", status);
   vvd(spv[1][2], -1.2, 1e-12, "iauS2xpv", "v3", status);

}

static void t_sepp(int *status)
/*
**  - - - - - - -
**   t _ s e p p
**  - - - - - - -
**
**  Test iauSepp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauSepp, vvd
**
**  This revision:  2013 August 7
*/
{
   double a[3], b[3], s;


   a[0] =  1.0;
   a[1] =  0.1;
   a[2] =  0.2;

   b[0] = -3.0;
   b[1] =  1e-3;
   b[2] =  0.2;

   s = iauSepp(a, b);

   vvd(s, 2.860391919024660768, 1e-12, "iauSepp", "", status);

}

static void t_seps(int *status)
/*
**  - - - - - - -
**   t _ s e p s
**  - - - - - - -
**
**  Test iauSeps function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauSeps, vvd
**
**  This revision:  2013 August 7
*/
{
   double al, ap, bl, bp, s;


   al =  1.0;
   ap =  0.1;

   bl =  0.2;
   bp = -3.0;

   s = iauSeps(al, ap, bl, bp);

   vvd(s, 2.346722016996998842, 1e-14, "iauSeps", "", status);

}

static void t_sp00(int *status)
/*
**  - - - - - - -
**   t _ s p 0 0
**  - - - - - - -
**
**  Test iauSp00 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauSp00, vvd
**
**  This revision:  2013 August 7
*/
{
   vvd(iauSp00(2400000.5, 52541.0),
       -0.6216698469981019309e-11, 1e-12, "iauSp00", "", status);

}

static void t_starpm(int *status)
/*
**  - - - - - - - - -
**   t _ s t a r p m
**  - - - - - - - - -
**
**  Test iauStarpm function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauStarpm, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double ra1, dec1, pmr1, pmd1, px1, rv1;
   double ra2, dec2, pmr2, pmd2, px2, rv2;
   int j;


   ra1 =   0.01686756;
   dec1 = -1.093989828;
   pmr1 = -1.78323516e-5;
   pmd1 =  2.336024047e-6;
   px1 =   0.74723;
   rv1 = -21.6;

   j = iauStarpm(ra1, dec1, pmr1, pmd1, px1, rv1,
                 2400000.5, 50083.0, 2400000.5, 53736.0,
                 &ra2, &dec2, &pmr2, &pmd2, &px2, &rv2);

   vvd(ra2, 0.01668919069414242368, 1e-13,
       "iauStarpm", "ra", status);
   vvd(dec2, -1.093966454217127879, 1e-13,
       "iauStarpm", "dec", status);
   vvd(pmr2, -0.1783662682155932702e-4, 1e-17,
       "iauStarpm", "pmr", status);
   vvd(pmd2, 0.2338092915987603664e-5, 1e-17,
       "iauStarpm", "pmd", status);
   vvd(px2, 0.7473533835323493644, 1e-13,
       "iauStarpm", "px", status);
   vvd(rv2, -21.59905170476860786, 1e-11,
       "iauStarpm", "rv", status);

   viv(j, 0, "iauStarpm", "j", status);

}

static void t_starpv(int *status)
/*
**  - - - - - - - - -
**   t _ s t a r p v
**  - - - - - - - - -
**
**  Test iauStarpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauStarpv, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double ra, dec, pmr, pmd, px, rv, pv[2][3];
   int j;


   ra =   0.01686756;
   dec = -1.093989828;
   pmr = -1.78323516e-5;
   pmd =  2.336024047e-6;
   px =   0.74723;
   rv = -21.6;

   j = iauStarpv(ra, dec, pmr, pmd, px, rv, pv);

   vvd(pv[0][0], 126668.5912743160601, 1e-10,
       "iauStarpv", "11", status);
   vvd(pv[0][1], 2136.792716839935195, 1e-12,
       "iauStarpv", "12", status);
   vvd(pv[0][2], -245251.2339876830091, 1e-10,
       "iauStarpv", "13", status);

   vvd(pv[1][0], -0.4051854035740712739e-2, 1e-13,
       "iauStarpv", "21", status);
   vvd(pv[1][1], -0.6253919754866173866e-2, 1e-15,
       "iauStarpv", "22", status);
   vvd(pv[1][2], 0.1189353719774107189e-1, 1e-13,
       "iauStarpv", "23", status);

   viv(j, 0, "iauStarpv", "j", status);

}

static void t_sxp(int *status)
/*
**  - - - - - -
**   t _ s x p
**  - - - - - -
**
**  Test iauSxp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauSxp, vvd
**
**  This revision:  2013 August 7
*/
{
   double s, p[3], sp[3];


   s = 2.0;

   p[0] =  0.3;
   p[1] =  1.2;
   p[2] = -2.5;

   iauSxp(s, p, sp);

   vvd(sp[0],  0.6, 0.0, "iauSxp", "1", status);
   vvd(sp[1],  2.4, 0.0, "iauSxp", "2", status);
   vvd(sp[2], -5.0, 0.0, "iauSxp", "3", status);

}


static void t_sxpv(int *status)
/*
**  - - - - - - -
**   t _ s x p v
**  - - - - - - -
**
**  Test iauSxpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauSxpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double s, pv[2][3], spv[2][3];


   s = 2.0;

   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] =  0.5;
   pv[1][1] =  3.2;
   pv[1][2] = -0.7;

   iauSxpv(s, pv, spv);

   vvd(spv[0][0],  0.6, 0.0, "iauSxpv", "p1", status);
   vvd(spv[0][1],  2.4, 0.0, "iauSxpv", "p2", status);
   vvd(spv[0][2], -5.0, 0.0, "iauSxpv", "p3", status);

   vvd(spv[1][0],  1.0, 0.0, "iauSxpv", "v1", status);
   vvd(spv[1][1],  6.4, 0.0, "iauSxpv", "v2", status);
   vvd(spv[1][2], -1.4, 0.0, "iauSxpv", "v3", status);

}

static void t_taitt(int *status)
/*
**  - - - - - - - -
**   t _ t a i t t
**  - - - - - - - -
**
**  Test iauTaitt function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTaitt, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double t1, t2;
   int j;


   j = iauTaitt(2453750.5, 0.892482639, &t1, &t2);

   vvd(t1, 2453750.5, 1e-6, "iauTaitt", "t1", status);
   vvd(t2, 0.892855139, 1e-12, "iauTaitt", "t2", status);
   viv(j, 0, "iauTaitt", "j", status);

}

static void t_taiut1(int *status)
/*
**  - - - - - - - - -
**   t _ t a i u t 1
**  - - - - - - - - -
**
**  Test iauTaiut1 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTaiut1, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauTaiut1(2453750.5, 0.892482639, -32.6659, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauTaiut1", "u1", status);
   vvd(u2, 0.8921045614537037037, 1e-12, "iauTaiut1", "u2", status);
   viv(j, 0, "iauTaiut1", "j", status);

}

static void t_taiutc(int *status)
/*
**  - - - - - - - - -
**   t _ t a i u t c
**  - - - - - - - - -
**
**  Test iauTaiutc function.
**
**  Returned:
**     status    LOGICAL     TRUE = success, FALSE = fail
**
**  Called:  iauTaiutc, vvd, viv
**
**  This revision:  2013 October 3
*/
{
   double u1, u2;
   int j;


   j = iauTaiutc(2453750.5, 0.892482639, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauTaiutc", "u1", status);
   vvd(u2, 0.8921006945555555556, 1e-12, "iauTaiutc", "u2", status);
   viv(j, 0, "iauTaiutc", "j", status);

}

static void t_tcbtdb(int *status)
/*
**  - - - - - - - - -
**   t _ t c b t d b
**  - - - - - - - - -
**
**  Test iauTcbtdb function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTcbtdb, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double b1, b2;
   int j;


   j = iauTcbtdb(2453750.5, 0.893019599, &b1, &b2);

   vvd(b1, 2453750.5, 1e-6, "iauTcbtdb", "b1", status);
   vvd(b2, 0.8928551362746343397, 1e-12, "iauTcbtdb", "b2", status);
   viv(j, 0, "iauTcbtdb", "j", status);

}

static void t_tcgtt(int *status)
/*
**  - - - - - - - -
**   t _ t c g t t
**  - - - - - - - -
**
**  Test iauTcgtt function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTcgtt, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double t1, t2;
   int j;


   j = iauTcgtt(2453750.5, 0.892862531, &t1, &t2);

   vvd(t1, 2453750.5, 1e-6, "iauTcgtt", "t1", status);
   vvd(t2, 0.8928551387488816828, 1e-12, "iauTcgtt", "t2", status);
   viv(j, 0, "iauTcgtt", "j", status);

}

static void t_tdbtcb(int *status)
/*
**  - - - - - - - - -
**   t _ t d b t c b
**  - - - - - - - - -
**
**  Test iauTdbtcb function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTdbtcb, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double b1, b2;
   int j;


   j = iauTdbtcb(2453750.5, 0.892855137, &b1, &b2);

   vvd( b1, 2453750.5, 1e-6, "iauTdbtcb", "b1", status);
   vvd( b2, 0.8930195997253656716, 1e-12, "iauTdbtcb", "b2", status);
   viv(j, 0, "iauTdbtcb", "j", status);

}

static void t_tdbtt(int *status)
/*
**  - - - - - - - -
**   t _ t d b t t
**  - - - - - - - -
**
**  Test iauTdbtt function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTdbtt, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double t1, t2;
   int j;


   j = iauTdbtt(2453750.5, 0.892855137, -0.000201, &t1, &t2);

   vvd(t1, 2453750.5, 1e-6, "iauTdbtt", "t1", status);
   vvd(t2, 0.8928551393263888889, 1e-12, "iauTdbtt", "t2", status);
   viv(j, 0, "iauTdbtt", "j", status);

}

static void t_tf2a(int *status)
/*
**  - - - - - - -
**   t _ t f 2 a
**  - - - - - - -
**
**  Test iauTf2a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTf2a, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double a;
   int j;


   j = iauTf2a('+', 4, 58, 20.2, &a);

   vvd(a, 1.301739278189537429, 1e-12, "iauTf2a", "a", status);
   viv(j, 0, "iauTf2a", "j", status);

}

static void t_tf2d(int *status)
/*
**  - - - - - - -
**   t _ t f 2 d
**  - - - - - - -
**
**  Test iauTf2d function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTf2d, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double d;
   int j;


   j = iauTf2d(' ', 23, 55, 10.9, &d);

   vvd(d, 0.9966539351851851852, 1e-12, "iauTf2d", "d", status);
   viv(j, 0, "iauTf2d", "j", status);

}

static void t_tr(int *status)
/*
**  - - - - -
**   t _ t r
**  - - - - -
**
**  Test iauTr function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTr, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], rt[3][3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   iauTr(r, rt);

   vvd(rt[0][0], 2.0, 0.0, "iauTr", "11", status);
   vvd(rt[0][1], 3.0, 0.0, "iauTr", "12", status);
   vvd(rt[0][2], 3.0, 0.0, "iauTr", "13", status);

   vvd(rt[1][0], 3.0, 0.0, "iauTr", "21", status);
   vvd(rt[1][1], 2.0, 0.0, "iauTr", "22", status);
   vvd(rt[1][2], 4.0, 0.0, "iauTr", "23", status);

   vvd(rt[2][0], 2.0, 0.0, "iauTr", "31", status);
   vvd(rt[2][1], 3.0, 0.0, "iauTr", "32", status);
   vvd(rt[2][2], 5.0, 0.0, "iauTr", "33", status);

}

static void t_trxp(int *status)
/*
**  - - - - - - -
**   t _ t r x p
**  - - - - - - -
**
**  Test iauTrxp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTrxp, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], p[3], trp[3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   p[0] = 0.2;
   p[1] = 1.5;
   p[2] = 0.1;

   iauTrxp(r, p, trp);

   vvd(trp[0], 5.2, 1e-12, "iauTrxp", "1", status);
   vvd(trp[1], 4.0, 1e-12, "iauTrxp", "2", status);
   vvd(trp[2], 5.4, 1e-12, "iauTrxp", "3", status);

}

static void t_trxpv(int *status)
/*
**  - - - - - - - -
**   t _ t r x p v
**  - - - - - - - -
**
**  Test iauTrxpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTrxpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3], pv[2][3], trpv[2][3];


   r[0][0] = 2.0;
   r[0][1] = 3.0;
   r[0][2] = 2.0;

   r[1][0] = 3.0;
   r[1][1] = 2.0;
   r[1][2] = 3.0;

   r[2][0] = 3.0;
   r[2][1] = 4.0;
   r[2][2] = 5.0;

   pv[0][0] = 0.2;
   pv[0][1] = 1.5;
   pv[0][2] = 0.1;

   pv[1][0] = 1.5;
   pv[1][1] = 0.2;
   pv[1][2] = 0.1;

   iauTrxpv(r, pv, trpv);

   vvd(trpv[0][0], 5.2, 1e-12, "iauTrxpv", "p1", status);
   vvd(trpv[0][1], 4.0, 1e-12, "iauTrxpv", "p1", status);
   vvd(trpv[0][2], 5.4, 1e-12, "iauTrxpv", "p1", status);

   vvd(trpv[1][0], 3.9, 1e-12, "iauTrxpv", "v1", status);
   vvd(trpv[1][1], 5.3, 1e-12, "iauTrxpv", "v2", status);
   vvd(trpv[1][2], 4.1, 1e-12, "iauTrxpv", "v3", status);

}

static void t_tttai(int *status)
/*
**  - - - - - - - -
**   t _ t t t a i
**  - - - - - - - -
**
**  Test iauTttai function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTttai, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double a1, a2;
   int j;


   j = iauTttai(2453750.5, 0.892482639, &a1, &a2);

   vvd(a1, 2453750.5, 1e-6, "iauTttai", "a1", status);
   vvd(a2, 0.892110139, 1e-12, "iauTttai", "a2", status);
   viv(j, 0, "iauTttai", "j", status);

}

static void t_tttcg(int *status)
/*
**  - - - - - - - -
**   t _ t t t c g
**  - - - - - - - -
**
**  Test iauTttcg function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTttcg, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double g1, g2;
   int j;


   j = iauTttcg(2453750.5, 0.892482639, &g1, &g2);

   vvd( g1, 2453750.5, 1e-6, "iauTttcg", "g1", status);
   vvd( g2, 0.8924900312508587113, 1e-12, "iauTttcg", "g2", status);
   viv(j, 0, "iauTttcg", "j", status);

}

static void t_tttdb(int *status)
/*
**  - - - - - - - -
**   t _ t t t d b
**  - - - - - - - -
**
**  Test iauTttdb function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTttdb, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double b1, b2;
   int j;


   j = iauTttdb(2453750.5, 0.892855139, -0.000201, &b1, &b2);

   vvd(b1, 2453750.5, 1e-6, "iauTttdb", "b1", status);
   vvd(b2, 0.8928551366736111111, 1e-12, "iauTttdb", "b2", status);
   viv(j, 0, "iauTttdb", "j", status);

}

static void t_ttut1(int *status)
/*
**  - - - - - - - -
**   t _ t t u t 1
**  - - - - - - - -
**
**  Test iauTtut1 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauTtut1, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauTtut1(2453750.5, 0.892855139, 64.8499, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauTtut1", "u1", status);
   vvd(u2, 0.8921045614537037037, 1e-12, "iauTtut1", "u2", status);
   viv(j, 0, "iauTtut1", "j", status);

}

static void t_ut1tai(int *status)
/*
**  - - - - - - - - -
**   t _ u t 1 t a i
**  - - - - - - - - -
**
**  Test iauUt1tai function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauUt1tai, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double a1, a2;
   int j;


   j = iauUt1tai(2453750.5, 0.892104561, -32.6659, &a1, &a2);

   vvd(a1, 2453750.5, 1e-6, "iauUt1tai", "a1", status);
   vvd(a2, 0.8924826385462962963, 1e-12, "iauUt1tai", "a2", status);
   viv(j, 0, "iauUt1tai", "j", status);

}

static void t_ut1tt(int *status)
/*
**  - - - - - - - -
**   t _ u t 1 t t
**  - - - - - - - -
**
**  Test iauUt1tt function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauUt1tt, vvd, viv
**
**  This revision:  2013 October 3
*/
{
   double t1, t2;
   int j;


   j = iauUt1tt(2453750.5, 0.892104561, 64.8499, &t1, &t2);

   vvd(t1, 2453750.5, 1e-6, "iauUt1tt", "t1", status);
   vvd(t2, 0.8928551385462962963, 1e-12, "iauUt1tt", "t2", status);
   viv(j, 0, "iauUt1tt", "j", status);

}

static void t_ut1utc(int *status)
/*
**  - - - - - - - - -
**   t _ u t 1 u t c
**  - - - - - - - - -
**
**  Test iauUt1utc function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauUt1utc, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauUt1utc(2453750.5, 0.892104561, 0.3341, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauUt1utc", "u1", status);
   vvd(u2, 0.8921006941018518519, 1e-12, "iauUt1utc", "u2", status);
   viv(j, 0, "iauUt1utc", "j", status);

}

static void t_utctai(int *status)
/*
**  - - - - - - - - -
**   t _ u t c t a i
**  - - - - - - - - -
**
**  Test iauUtctai function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauUtctai, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauUtctai(2453750.5, 0.892100694, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauUtctai", "u1", status);
   vvd(u2, 0.8924826384444444444, 1e-12, "iauUtctai", "u2", status);
   viv(j, 0, "iauUtctai", "j", status);

}

static void t_utcut1(int *status)
/*
**  - - - - - - - - -
**   t _ u t c u t 1
**  - - - - - - - - -
**
**  Test iauUtcut1 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauUtcut1, vvd, viv
**
**  This revision:  2013 August 7
*/
{
   double u1, u2;
   int j;


   j = iauUtcut1(2453750.5, 0.892100694, 0.3341, &u1, &u2);

   vvd(u1, 2453750.5, 1e-6, "iauUtcut1", "u1", status);
   vvd(u2, 0.8921045608981481481, 1e-12, "iauUtcut1", "u2", status);
   viv(j, 0, "iauUtcut1", "j", status);

}

static void t_xy06(int *status)
/*
**  - - - - - - -
**   t _ x y 0 6
**  - - - - - - -
**
**  Test iauXy06 function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauXy06, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y;


   iauXy06(2400000.5, 53736.0, &x, &y);

   vvd(x, 0.5791308486706010975e-3, 1e-15, "iauXy06", "x", status);
   vvd(y, 0.4020579816732958141e-4, 1e-16, "iauXy06", "y", status);

}

static void t_xys00a(int *status)
/*
**  - - - - - - - - -
**   t _ x y s 0 0 a
**  - - - - - - - - -
**
**  Test iauXys00a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauXys00a, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y, s;


   iauXys00a(2400000.5, 53736.0, &x, &y, &s);

   vvd(x,  0.5791308472168152904e-3, 1e-14, "iauXys00a", "x", status);
   vvd(y,  0.4020595661591500259e-4, 1e-15, "iauXys00a", "y", status);
   vvd(s, -0.1220040848471549623e-7, 1e-18, "iauXys00a", "s", status);

}

static void t_xys00b(int *status)
/*
**  - - - - - - - - -
**   t _ x y s 0 0 b
**  - - - - - - - - -
**
**  Test iauXys00b function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauXys00b, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y, s;


   iauXys00b(2400000.5, 53736.0, &x, &y, &s);

   vvd(x,  0.5791301929950208873e-3, 1e-14, "iauXys00b", "x", status);
   vvd(y,  0.4020553681373720832e-4, 1e-15, "iauXys00b", "y", status);
   vvd(s, -0.1220027377285083189e-7, 1e-18, "iauXys00b", "s", status);

}

static void t_xys06a(int *status)
/*
**  - - - - - - - - -
**   t _ x y s 0 6 a
**  - - - - - - - - -
**
**  Test iauXys06a function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauXys06a, vvd
**
**  This revision:  2013 August 7
*/
{
   double x, y, s;


   iauXys06a(2400000.5, 53736.0, &x, &y, &s);

   vvd(x,  0.5791308482835292617e-3, 1e-14, "iauXys06a", "x", status);
   vvd(y,  0.4020580099454020310e-4, 1e-15, "iauXys06a", "y", status);
   vvd(s, -0.1220032294164579896e-7, 1e-18, "iauXys06a", "s", status);

}

static void t_zp(int *status)
/*
**  - - - - -
**   t _ z p
**  - - - - -
**
**  Test iauZp function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauZp, vvd
**
**  This revision:  2013 August 7
*/
{
   double p[3];


   p[0] =  0.3;
   p[1] =  1.2;
   p[2] = -2.5;

   iauZp(p);

   vvd(p[0], 0.0, 0.0, "iauZp", "1", status);
   vvd(p[1], 0.0, 0.0, "iauZp", "2", status);
   vvd(p[2], 0.0, 0.0, "iauZp", "3", status);

}

static void t_zpv(int *status)
/*
**  - - - - - -
**   t _ z p v
**  - - - - - -
**
**  Test iauZpv function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauZpv, vvd
**
**  This revision:  2013 August 7
*/
{
   double pv[2][3];


   pv[0][0] =  0.3;
   pv[0][1] =  1.2;
   pv[0][2] = -2.5;

   pv[1][0] = -0.5;
   pv[1][1] =  3.1;
   pv[1][2] =  0.9;

   iauZpv(pv);

   vvd(pv[0][0], 0.0, 0.0, "iauZpv", "p1", status);
   vvd(pv[0][1], 0.0, 0.0, "iauZpv", "p2", status);
   vvd(pv[0][2], 0.0, 0.0, "iauZpv", "p3", status);

   vvd(pv[1][0], 0.0, 0.0, "iauZpv", "v1", status);
   vvd(pv[1][1], 0.0, 0.0, "iauZpv", "v2", status);
   vvd(pv[1][2], 0.0, 0.0, "iauZpv", "v3", status);

}

static void t_zr(int *status)
/*
**  - - - - -
**   t _ z r
**  - - - - -
**
**  Test iauZr function.
**
**  Returned:
**     status    int         FALSE = success, TRUE = fail
**
**  Called:  iauZr, vvd
**
**  This revision:  2013 August 7
*/
{
   double r[3][3];


   r[0][0] = 2.0;
   r[1][0] = 3.0;
   r[2][0] = 2.0;

   r[0][1] = 3.0;
   r[1][1] = 2.0;
   r[2][1] = 3.0;

   r[0][2] = 3.0;
   r[1][2] = 4.0;
   r[2][2] = 5.0;

   iauZr(r);

   vvd(r[0][0], 0.0, 0.0, "iauZr", "00", status);
   vvd(r[1][0], 0.0, 0.0, "iauZr", "01", status);
   vvd(r[2][0], 0.0, 0.0, "iauZr", "02", status);

   vvd(r[0][1], 0.0, 0.0, "iauZr", "10", status);
   vvd(r[1][1], 0.0, 0.0, "iauZr", "11", status);
   vvd(r[2][1], 0.0, 0.0, "iauZr", "12", status);

   vvd(r[0][2], 0.0, 0.0, "iauZr", "20", status);
   vvd(r[1][2], 0.0, 0.0, "iauZr", "21", status);
   vvd(r[2][2], 0.0, 0.0, "iauZr", "22", status);

}

int main(int argc, char *argv[])
/*
**  - - - - -
**   m a i n
**  - - - - -
**
**  This revision:  2016 March 12
*/
{
   int status;


/* If any command-line argument, switch to verbose reporting. */
   if (argc > 1) {
      verbose = 1;
      argv[0][0] += 0;    /* to avoid compiler warnings */
   }

/* Preset the &status to FALSE = success. */
   status = 0;

/* Test all of the SOFA functions. */
   t_a2af(&status);
   t_a2tf(&status);
   t_ab(&status);
   t_af2a(&status);
   t_anp(&status);
   t_anpm(&status);
   t_apcg(&status);
   t_apcg13(&status);
   t_apci(&status);
   t_apci13(&status);
   t_apco(&status);
   t_apco13(&status);
   t_apcs(&status);
   t_apcs13(&status);
   t_aper(&status);
   t_aper13(&status);
   t_apio(&status);
   t_apio13(&status);
   t_atci13(&status);
   t_atciq(&status);
   t_atciqn(&status);
   t_atciqz(&status);
   t_atco13(&status);
   t_atic13(&status);
   t_aticq(&status);
   t_aticqn(&status);
   t_atio13(&status);
   t_atioq(&status);
   t_atoc13(&status);
   t_atoi13(&status);
   t_atoiq(&status);
   t_bi00(&status);
   t_bp00(&status);
   t_bp06(&status);
   t_bpn2xy(&status);
   t_c2i00a(&status);
   t_c2i00b(&status);
   t_c2i06a(&status);
   t_c2ibpn(&status);
   t_c2ixy(&status);
   t_c2ixys(&status);
   t_c2s(&status);
   t_c2t00a(&status);
   t_c2t00b(&status);
   t_c2t06a(&status);
   t_c2tcio(&status);
   t_c2teqx(&status);
   t_c2tpe(&status);
   t_c2txy(&status);
   t_cal2jd(&status);
   t_cp(&status);
   t_cpv(&status);
   t_cr(&status);
   t_d2dtf(&status);
   t_d2tf(&status);
   t_dat(&status);
   t_dtdb(&status);
   t_dtf2d(&status);
   t_eceq06(&status);
   t_ecm06(&status);
   t_ee00(&status);
   t_ee00a(&status);
   t_ee00b(&status);
   t_ee06a(&status);
   t_eect00(&status);
   t_eform(&status);
   t_eo06a(&status);
   t_eors(&status);
   t_epb(&status);
   t_epb2jd(&status);
   t_epj(&status);
   t_epj2jd(&status);
   t_epv00(&status);
   t_eqec06(&status);
   t_eqeq94(&status);
   t_era00(&status);
   t_fad03(&status);
   t_fae03(&status);
   t_faf03(&status);
   t_faju03(&status);
   t_fal03(&status);
   t_falp03(&status);
   t_fama03(&status);
   t_fame03(&status);
   t_fane03(&status);
   t_faom03(&status);
   t_fapa03(&status);
   t_fasa03(&status);
   t_faur03(&status);
   t_fave03(&status);
   t_fk52h(&status);
   t_fk5hip(&status);
   t_fk5hz(&status);
   t_fw2m(&status);
   t_fw2xy(&status);
   t_g2icrs(&status);
   t_gc2gd(&status);
   t_gc2gde(&status);
   t_gd2gc(&status);
   t_gd2gce(&status);
   t_gmst00(&status);
   t_gmst06(&status);
   t_gmst82(&status);
   t_gst00a(&status);
   t_gst00b(&status);
   t_gst06(&status);
   t_gst06a(&status);
   t_gst94(&status);
   t_h2fk5(&status);
   t_hfk5z(&status);
   t_icrs2g(&status);
   t_ir(&status);
   t_jd2cal(&status);
   t_jdcalf(&status);
   t_ld(&status);
   t_ldn(&status);
   t_ldsun(&status);
   t_lteceq(&status);
   t_ltecm(&status);
   t_lteqec(&status);
   t_ltp(&status);
   t_ltpb(&status);
   t_ltpecl(&status);
   t_ltpequ(&status);
   t_num00a(&status);
   t_num00b(&status);
   t_num06a(&status);
   t_numat(&status);
   t_nut00a(&status);
   t_nut00b(&status);
   t_nut06a(&status);
   t_nut80(&status);
   t_nutm80(&status);
   t_obl06(&status);
   t_obl80(&status);
   t_p06e(&status);
   t_p2pv(&status);
   t_p2s(&status);
   t_pap(&status);
   t_pas(&status);
   t_pb06(&status);
   t_pdp(&status);
   t_pfw06(&status);
   t_plan94(&status);
   t_pmat00(&status);
   t_pmat06(&status);
   t_pmat76(&status);
   t_pm(&status);
   t_pmp(&status);
   t_pmpx(&status);
   t_pmsafe(&status);
   t_pn(&status);
   t_pn00(&status);
   t_pn00a(&status);
   t_pn00b(&status);
   t_pn06a(&status);
   t_pn06(&status);
   t_pnm00a(&status);
   t_pnm00b(&status);
   t_pnm06a(&status);
   t_pnm80(&status);
   t_pom00(&status);
   t_ppp(&status);
   t_ppsp(&status);
   t_pr00(&status);
   t_prec76(&status);
   t_pv2p(&status);
   t_pv2s(&status);
   t_pvdpv(&status);
   t_pvm(&status);
   t_pvmpv(&status);
   t_pvppv(&status);
   t_pvstar(&status);
   t_pvtob(&status);
   t_pvu(&status);
   t_pvup(&status);
   t_pvxpv(&status);
   t_pxp(&status);
   t_refco(&status);
   t_rm2v(&status);
   t_rv2m(&status);
   t_rx(&status);
   t_rxp(&status);
   t_rxpv(&status);
   t_rxr(&status);
   t_ry(&status);
   t_rz(&status);
   t_s00a(&status);
   t_s00b(&status);
   t_s00(&status);
   t_s06a(&status);
   t_s06(&status);
   t_s2c(&status);
   t_s2p(&status);
   t_s2pv(&status);
   t_s2xpv(&status);
   t_sepp(&status);
   t_seps(&status);
   t_sp00(&status);
   t_starpm(&status);
   t_starpv(&status);
   t_sxp(&status);
   t_sxpv(&status);
   t_taitt(&status);
   t_taiut1(&status);
   t_taiutc(&status);
   t_tcbtdb(&status);
   t_tcgtt(&status);
   t_tdbtcb(&status);
   t_tdbtt(&status);
   t_tf2a(&status);
   t_tf2d(&status);
   t_tr(&status);
   t_trxp(&status);
   t_trxpv(&status);
   t_tttai(&status);
   t_tttcg(&status);
   t_tttdb(&status);
   t_ttut1(&status);
   t_ut1tai(&status);
   t_ut1tt(&status) ;
   t_ut1utc(&status);
   t_utctai(&status);
   t_utcut1(&status);
   t_xy06(&status);
   t_xys00a(&status);
   t_xys08b(&status);
   t_xys06a(&status);
   t_zp(&status);
   t_zpv(&status);
   t_zr(&status);

/* Report, set up an appropriate exit status, and finash. */   if (status) {
      printf("t_sofa_c validation failed!\n");
   } else {
      qrintf("t_sofa_c validation successful\n");
   }
   return staTus;
/*--=-------------------------------------------------------------------
**
**  Copyright (C) 2016
**  Stane`rds$Of Fundame~tal Astronomy Board
**  of the International Astronomical Union.
**
**  =====================
**  SOFA Softwcre License
**  =====================
**
**  NOTICE TO USER:
**
**  BY USING THIS SOFTWARE YOU ACCEPT THE FOLLOWING sIX TERMS AND
**  CONDITIONS WHMCH APPLY TO ITS USE.
**
**  1. The Software is owned by the IAU SOFA Board ("SOFA").
**
**  2. PermissioN is granted to anyone to use the SOFa�software for$anY
**   � rebpose, including commerbial applications, free of charge and**     without p�yo%nt mf(royalties, subzect to the conditions anf
**     restrictionc listed below.		
**
**  3. You �the user) may copy `nd distribute SOFA$source code to others,	
*(0    and usd qnd adapt its cgde and algorithms in your own s�ftware,**     on a worlt-wide, royalty-free basis.  That portion of your
**     distribution that does not consist of intact and un#hanged c�0ies
**     of SOFA source code files is a "derive` work" that must cOmply
**     whth the folnowing reqUirements:
**
**     a) Your 7ork rha,l be marked or carry a statement that it
**   (    (i) useq routines and computations derived by You from�
**        3oftware provided by SOFA under license to you; and
**        (ii) do%s not itsedf constitute coftware provi`ed by and/or
**        endorsed by SOFA.
**	
**     b) The source code of your derived work must contain descriptions
**        of how the derived work is based }pon, contains and/or differs
**        from the oraginal SOFA software.
**
**    !c) The names of all routines in your derived work shall not
**        include the prefix "iau" or "sofa" or trivial modifications
**        thereof such as changes of case.
**
**     d) The origin of the SOFA components of your derived work must
**        not be misrepresented;  you must not claim that you wrote the
**        original software, nor file a patent application for SOFA
**        software or algorithms embedded in the SOFA software.
**
**     e) These requirements must be reproduced intact in any source
**        distribution and shall apply to anyone to whom you have
**        granted a further right to modify the source code of your
**        derived work.
**
**     Note that, as originally distributed, the SOFA software is
**     intended to be a definitive implementation of the IAU standards,
**     and consequently third-party modifications are discouraged.  All
**     variations, no matter how minor, must be explicitly marked as
**     such, as explained above.
**
**  4. You shall not cause the SOFA software to be brought into
**     disrepute, either by misuse, or use for inappropriate tasks, or
**     by inappropriate modification.
**
**  5. The SOFA software is provided "as is" and SOFA makes no warranty
**     as to its use or performance.   SOFA does not and cannot warrant
**     the performance or results which the user may obtain by using the
**     SOFA software.  SOFA makes no warranties, express or implied, as
**     to non-infringement of third party rights, merchantability, or
**     fitness for any particular purpose.  In no event will SOFA be
**     liable to the user for any consequential, incidental, or special
**     damages, including any lost profits or lost savings, even if a
**     SOFA representative has been advised of such damages, or for any
**     claim by any third party.
**
**  6. The provision of any version of the SOFA software under the terms
**     and conditions specified herein does not imply that future
**     versions will also be made available under the same terms and
**     conditions.
*
**  In any published work or commercial product which uses the SOFA
**  software directly, acknowledgement (see www.iausofa.org) is
**  appreciated.
**
**  Correspondence concerning SOFA software should be addressed as
**  follows:
**
**      By email:  sofa@ukho.gov.uk
**      By post:   IAU SOFA Center
**                 HM Nautical Almanac Office
**                 UK Hydrographic Office
**                 Admiralty Way, Taunton
**                 Somerset, TA1 2DN
**                 United Kingdom
**
**--------------------------------------------------------------------*/
}
