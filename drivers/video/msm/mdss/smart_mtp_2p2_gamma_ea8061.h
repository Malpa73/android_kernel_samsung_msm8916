/*
 * =================================================================
 *
 *       Filename:  smart_mtp_2p2_gamma.h
 *
 *    Description:  Smart dimming algorithm implementation
 *
 *        Author: jb09.kim
 *        Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2012, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
*/

#ifndef _SMART_MTP_2P2_GAMMA_H_
#define _SMART_MTP_2P2_GAMMA_H_

/*
*		index : 0 ~ 255
*		((index/255)^2.2)*16384
*/
static int candela_coeff_2p2[] = {
0 ,
21 ,
98 ,
239 ,
450 ,
735 ,
1097 ,
1540 ,
2066 ,
2677 ,
3375 ,
4162 ,
5040 ,
6011 ,
7075 ,
8235 ,
9492 ,
10846 ,
12299 ,
13853 ,
15507 ,
17264 ,
19125 ,
21090 ,
23160 ,
25336 ,
27619 ,
30010 ,
32510 ,
35119 ,
37839 ,
40669 ,
43612 ,
46666 ,
49834 ,
53115 ,
56512 ,
60023 ,
63650 ,
67393 ,
71253 ,
75231 ,
79327 ,
83541 ,
87875 ,
92329 ,
96903 ,
101598 ,
106415 ,
111353 ,
116414 ,
121598 ,
126905 ,
132336 ,
137892 ,
143572 ,
149377 ,
155309 ,
161366 ,
167551 ,
173862 ,
180301 ,
186867 ,
193562 ,
200386 ,
207339 ,
214421 ,
221634 ,
228977 ,
236450 ,
244055 ,
251791 ,
259659 ,
267659 ,
275792 ,
284058 ,
292457 ,
300989 ,
309656 ,
318457 ,
327393 ,
336464 ,
345670 ,
355012 ,
364490 ,
374105 ,
383856 ,
393744 ,
403769 ,
413932 ,
424234 ,
434673 ,
445251 ,
455968 ,
466824 ,
477819 ,
488954 ,
500230 ,
511645 ,
523201 ,
534899 ,
546737 ,
558717 ,
570839 ,
583102 ,
595509 ,
608057 ,
620749 ,
633583 ,
646561 ,
659683 ,
672949 ,
686359 ,
699913 ,
713612 ,
727456 ,
741445 ,
755580 ,
769860 ,
784287 ,
798859 ,
813578 ,
828444 ,
843457 ,
858616 ,
873924 ,
889379 ,
904981 ,
920732 ,
936632 ,
952680 ,
968876 ,
985222 ,
1001717 ,
1018362 ,
1035156 ,
1052100 ,
1069195 ,
1086439 ,
1103835 ,
1121381 ,
1139078 ,
1156927 ,
1174927 ,
1193078 ,
1211382 ,
1229838 ,
1248446 ,
1267206 ,
1286119 ,
1305186 ,
1324405 ,
1343778 ,
1363304 ,
1382984 ,
1402818 ,
1422806 ,
1442948 ,
1463245 ,
1483697 ,
1504304 ,
1525065 ,
1545982 ,
1567055 ,
1588283 ,
1609668 ,
1631208 ,
1652904 ,
1674757 ,
1696767 ,
1718934 ,
1741257 ,
1763738 ,
1786376 ,
1809172 ,
1832125 ,
1855237 ,
1878506 ,
1901934 ,
1925521 ,
1949266 ,
1973169 ,
1997232 ,
2021454 ,
2045836 ,
2070376 ,
2095077 ,
2119937 ,
2144958 ,
2170139 ,
2195480 ,
2220981 ,
2246644 ,
2272467 ,
2298451 ,
2324597 ,
2350904 ,
2377372 ,
2404003 ,
2430795 ,
2457749 ,
2484865 ,
2512144 ,
2539585 ,
2567189 ,
2594956 ,
2622886 ,
2650979 ,
2679235 ,
2707655 ,
2736239 ,
2764986 ,
2793897 ,
2822972 ,
2852212 ,
2881616 ,
2911185 ,
2940918 ,
2970816 ,
3000880 ,
3031108 ,
3061502 ,
3092061 ,
3122786 ,
3153677 ,
3184733 ,
3215956 ,
3247345 ,
3278900 ,
3310622 ,
3342510 ,
3374566 ,
3406788 ,
3439177 ,
3471734 ,
3504458 ,
3537349 ,
3570408 ,
3603635 ,
3637030 ,
3670593 ,
3704324 ,
3738224 ,
3772292 ,
3806529 ,
3840934 ,
3875509 ,
3910253 ,
3945165 ,
3980247 ,
4015499 ,
4050920 ,
4086511 ,
4122272 ,
4158203 ,
4194304 ,

};

/*
*		index : 0 ~ 255
*		((index/255)^2.15)*4194304
*/
static int candela_coeff_2p15[] = {
0 ,
28 ,
125 ,
298 ,
553 ,
894 ,
1323 ,
1843 ,
2456 ,
3164 ,
3968 ,
4871 ,
5873 ,
6976 ,
8180 ,
9488 ,
10901 ,
12418 ,
14042 ,
15773 ,
17612 ,
19560 ,
21618 ,
23786 ,
26065 ,
28456 ,
30959 ,
33576 ,
36307 ,
39152 ,
42112 ,
45188 ,
48381 ,
51690 ,
55116 ,
58660 ,
62323 ,
66105 ,
70006 ,
74027 ,
78168 ,
82430 ,
86813 ,
91318 ,
95945 ,
100694 ,
105567 ,
110563 ,
115682 ,
120926 ,
126294 ,
131788 ,
137406 ,
143150 ,
149020 ,
155017 ,
161140 ,
167390 ,
173768 ,
180273 ,
186906 ,
193668 ,
200558 ,
207578 ,
214726 ,
222005 ,
229413 ,
236951 ,
244620 ,
252420 ,
260351 ,
268413 ,
276607 ,
284933 ,
293391 ,
301981 ,
310705 ,
319561 ,
328550 ,
337673 ,
346930 ,
356321 ,
365846 ,
375506 ,
385300 ,
395229 ,
405294 ,
415494 ,
425830 ,
436302 ,
446910 ,
457654 ,
468535 ,
479553 ,
490708 ,
502001 ,
513431 ,
524998 ,
536704 ,
548547 ,
560530 ,
572650 ,
584910 ,
597308 ,
609846 ,
622523 ,
635340 ,
648296 ,
661393 ,
674630 ,
688007 ,
701525 ,
715183 ,
728983 ,
742923 ,
757005 ,
771229 ,
785594 ,
800101 ,
814750 ,
829542 ,
844476 ,
859552 ,
874771 ,
890133 ,
905639 ,
921288 ,
937080 ,
953015 ,
969095 ,
985319 ,
1001686 ,
1018199 ,
1034855 ,
1051656 ,
1068602 ,
1085693 ,
1102929 ,
1120311 ,
1137838 ,
1155510 ,
1173328 ,
1191293 ,
1209403 ,
1227659 ,
1246062 ,
1264612 ,
1283308 ,
1302151 ,
1321140 ,
1340277 ,
1359562 ,
1378994 ,
1398573 ,
1418300 ,
1438175 ,
1458198 ,
1478369 ,
1498688 ,
1519156 ,
1539772 ,
1560537 ,
1581451 ,
1602514 ,
1623726 ,
1645087 ,
1666598 ,
1688258 ,
1710068 ,
1732028 ,
1754138 ,
1776398 ,
1798807 ,
1821368 ,
1844078 ,
1866940 ,
1889952 ,
1913115 ,
1936429 ,
1959894 ,
1983510 ,
2007278 ,
2031197 ,
2055268 ,
2079490 ,
2103864 ,
2128391 ,
2153069 ,
2177900 ,
2202883 ,
2228018 ,
2253306 ,
2278747 ,
2304341 ,
2330088 ,
2355987 ,
2382040 ,
2408246 ,
2434606 ,
2461119 ,
2487786 ,
2514607 ,
2541581 ,
2568710 ,
2595992 ,
2623429 ,
2651020 ,
2678766 ,
2706666 ,
2734721 ,
2762931 ,
2791295 ,
2819815 ,
2848490 ,
2877320 ,
2906305 ,
2935446 ,
2964742 ,
2994194 ,
3023802 ,
3053566 ,
3083485 ,
3113561 ,
3143793 ,
3174181 ,
3204726 ,
3235427 ,
3266285 ,
3297300 ,
3328471 ,
3359800 ,
3391285 ,
3422927 ,
3454727 ,
3486684 ,
3518799 ,
3551071 ,
3583500 ,
3616088 ,
3648833 ,
3681736 ,
3714798 ,
3748017 ,
3781395 ,
3814931 ,
3848625 ,
3882478 ,
3916489 ,
3950660 ,
3984989 ,
4019477 ,
4054124 ,
4088930 ,
4123895 ,
4159020 ,
4194304 ,

};

/*
*		index : 0 ~ 255
*		300 is max CANDELA
*		(300*((index/255)^2.2))*4194304
*/

static int curve_2p2[] = {
0 ,
6388 ,
29353 ,
71624 ,
134873 ,
220357 ,
329098 ,
461964 ,
619713 ,
803020 ,
1012495 ,
1248696 ,
1512138 ,
1803301 ,
2122631 ,
2470549 ,
2847454 ,
3253722 ,
3689710 ,
4155762 ,
4652204 ,
5179349 ,
5737499 ,
6326944 ,
6947963 ,
7600826 ,
8285794 ,
9003120 ,
9753050 ,
10535820 ,
11351664 ,
12200805 ,
13083463 ,
13999852 ,
14950179 ,
15934647 ,
16953457 ,
18006801 ,
19094869 ,
20217847 ,
21375916 ,
22569256 ,
23798041 ,
25062441 ,
26362625 ,
27698758 ,
29071001 ,
30479515 ,
31924454 ,
33405974 ,
34924225 ,
36479355 ,
38071511 ,
39700838 ,
41367477 ,
43071568 ,
44813248 ,
46592654 ,
48409918 ,
50265174 ,
52158550 ,
54090177 ,
56060179 ,
58068682 ,
60115810 ,
62201685 ,
64326426 ,
66490152 ,
68692982 ,
70935031 ,
73216413 ,
75537243 ,
77897632 ,
80297691 ,
82737529 ,
85217255 ,
87736977 ,
90296800 ,
92896829 ,
95537168 ,
98217920 ,
100939187 ,
103701070 ,
106503668 ,
109347080 ,
112231405 ,
115156738 ,
118123177 ,
121130816 ,
124179749 ,
127270070 ,
130401872 ,
133575246 ,
136790283 ,
140047074 ,
143345708 ,
146686273 ,
150068858 ,
153493549 ,
156960434 ,
160469597 ,
164021124 ,
167615100 ,
171251607 ,
174930730 ,
178652550 ,
182417150 ,
186224610 ,
190075011 ,
193968433 ,
197904956 ,
201884658 ,
205907617 ,
209973911 ,
214083618 ,
218236813 ,
222433573 ,
226673974 ,
230958090 ,
235285995 ,
239657764 ,
244073471 ,
248533188 ,
253036987 ,
257584941 ,
262177122 ,
266813599 ,
271494445 ,
276219729 ,
280989522 ,
285803891 ,
290662907 ,
295566638 ,
300515151 ,
305508515 ,
310546796 ,
315630062 ,
320758379 ,
325931813 ,
331150430 ,
336414294 ,
341723472 ,
347078027 ,
352478024 ,
357923526 ,
363414597 ,
368951300 ,
374533698 ,
380161853 ,
385835828 ,
391555684 ,
397321482 ,
403133283 ,
408991150 ,
414895141 ,
420845316 ,
426841737 ,
432884462 ,
438973551 ,
445109062 ,
451291054 ,
457519585 ,
463794714 ,
470116498 ,
476484994 ,
482900260 ,
489362353 ,
495871330 ,
502427245 ,
509030157 ,
515680120 ,
522377190 ,
529121423 ,
535912873 ,
542751595 ,
549637644 ,
556571074 ,
563551939 ,
570580293 ,
577656189 ,
584779680 ,
591950821 ,
599169663 ,
606436259 ,
613750661 ,
621112922 ,
628523094 ,
635981228 ,
643487375 ,
651041588 ,
658643916 ,
666294411 ,
673993123 ,
681740103 ,
689535401 ,
697379067 ,
705271151 ,
713211701 ,
721200769 ,
729238402 ,
737324649 ,
745459560 ,
753643183 ,
761875566 ,
770156758 ,
778486806 ,
786865759 ,
795293664 ,
803770568 ,
812296518 ,
820871563 ,
829495748 ,
838169120 ,
846891726 ,
855663612 ,
864484825 ,
873355410 ,
882275413 ,
891244881 ,
900263857 ,
909332389 ,
918450520 ,
927618297 ,
936835763 ,
946102963 ,
955419943 ,
964786746 ,
974203416 ,
983669998 ,
993186536 ,
1002753073 ,
1012369653 ,
1022036319 ,
1031753115 ,
1041520083 ,
1051337267 ,
1061204710 ,
1071122454 ,
1081090542 ,
1091109016 ,
1101177919 ,
1111297292 ,
1121467178 ,
1131687618 ,
1141958655 ,
1152280329 ,
1162652683 ,
1173075757 ,
1183549592 ,
1194074231 ,
1204649713 ,
1215276079 ,
1225953371 ,
1236681628 ,
1247460891 ,
1258291200 ,
};

/*
*		index : 0 ~ 255
*		300 is max CANDELA
*		(300*((index/255)^1.9))*4194304
*/

static int curve_1p9[] = {
0 ,
33679 ,
125693 ,
271572 ,
469104 ,
716800 ,
1013543 ,
1358442 ,
1750757 ,
2189856 ,
2675191 ,
3206276 ,
3782676 ,
4403999 ,
5069885 ,
5780005 ,
6534055 ,
7331752 ,
8172832 ,
9057048 ,
9984166 ,
10953968 ,
11966246 ,
13020801 ,
14117447 ,
15256005 ,
16436304 ,
17658181 ,
18921479 ,
20226047 ,
21571741 ,
22958422 ,
24385955 ,
25854212 ,
27363066 ,
28912397 ,
30502088 ,
32132025 ,
33802097 ,
35512199 ,
37262226 ,
39052078 ,
40881655 ,
42750863 ,
44659607 ,
46607799 ,
48595348 ,
50622169 ,
52688176 ,
54793289 ,
56937425 ,
59120507 ,
61342457 ,
63603200 ,
65902662 ,
68240771 ,
70617456 ,
73032647 ,
75486277 ,
77978278 ,
80508585 ,
83077133 ,
85683861 ,
88328704 ,
91011604 ,
93732499 ,
96491330 ,
99288041 ,
102122574 ,
104994872 ,
107904882 ,
110852548 ,
113837817 ,
116860637 ,
119920957 ,
123018724 ,
126153889 ,
129326402 ,
132536214 ,
135783278 ,
139067546 ,
142388971 ,
145747507 ,
149143109 ,
152575731 ,
156045330 ,
159551861 ,
163095281 ,
166675549 ,
170292621 ,
173946456 ,
177637013 ,
181364252 ,
185128132 ,
188928614 ,
192765659 ,
196639227 ,
200549282 ,
204495785 ,
208478698 ,
212497985 ,
216553609 ,
220645535 ,
224773725 ,
228938146 ,
233138761 ,
237375537 ,
241648439 ,
245957433 ,
250302486 ,
254683564 ,
259100634 ,
263553665 ,
268042623 ,
272567477 ,
277128195 ,
281724746 ,
286357099 ,
291025223 ,
295729087 ,
300468663 ,
305243919 ,
310054825 ,
314901354 ,
319783476 ,
324701161 ,
329654381 ,
334643109 ,
339667315 ,
344726973 ,
349822054 ,
354952532 ,
360118378 ,
365319567 ,
370556071 ,
375827865 ,
381134921 ,
386477214 ,
391854718 ,
397267408 ,
402715258 ,
408198243 ,
413716337 ,
419269517 ,
424857757 ,
430481033 ,
436139320 ,
441832596 ,
447560835 ,
453324015 ,
459122111 ,
464955101 ,
470822960 ,
476725667 ,
482663198 ,
488635531 ,
494642642 ,
500684511 ,
506761113 ,
512872429 ,
519018435 ,
525199109 ,
531414431 ,
537664379 ,
543948931 ,
550268067 ,
556621765 ,
563010004 ,
569432764 ,
575890024 ,
582381763 ,
588907962 ,
595468600 ,
602063657 ,
608693113 ,
615356949 ,
622055143 ,
628787678 ,
635554533 ,
642355690 ,
649191128 ,
656060830 ,
662964775 ,
669902945 ,
676875321 ,
683881886 ,
690922619 ,
697997503 ,
705106519 ,
712249650 ,
719426877 ,
726638181 ,
733883547 ,
741162954 ,
748476386 ,
755823826 ,
763205255 ,
770620657 ,
778070013 ,
785553308 ,
793070523 ,
800621642 ,
808206648 ,
815825524 ,
823478253 ,
831164819 ,
838885205 ,
846639395 ,
854427372 ,
862249121 ,
870104624 ,
877993866 ,
885916830 ,
893873502 ,
901863864 ,
909887901 ,
917945598 ,
926036939 ,
934161908 ,
942320490 ,
950512670 ,
958738431 ,
966997760 ,
975290640 ,
983617057 ,
991976996 ,
1000370441 ,
1008797379 ,
1017257794 ,
1025751671 ,
1034278995 ,
1042839753 ,
1051433930 ,
1060061511 ,
1068722482 ,
1077416829 ,
1086144537 ,
1094905592 ,
1103699981 ,
1112527688 ,
1121388701 ,
1130283005 ,
1139210586 ,
1148171431 ,
1157165525 ,
1166192856 ,
1175253410 ,
1184347173 ,
1193474131 ,
1202634272 ,
1211827582 ,
1221054047 ,
1230313654 ,
1239606391 ,
1248932244 ,
1258291200 ,
};


/*
*		index : 0 ~ 255
*		350 is max CANDELA
*		(350*((index/255)^1.9))*4194304
*/

static int curve_1p9_350[] = {
0 ,
39292 ,
146642 ,
316834 ,
547288 ,
836266 ,
1182467 ,
1584849 ,
2042549 ,
2554832 ,
3121056 ,
3740655 ,
4413122 ,
5137999 ,
5914866 ,
6743339 ,
7623064 ,
8553711 ,
9534971 ,
10566556 ,
11648194 ,
12779630 ,
13960620 ,
15190935 ,
16470355 ,
17798673 ,
19175689 ,
20601211 ,
22075059 ,
23597055 ,
25167031 ,
26784826 ,
28450281 ,
30163247 ,
31923577 ,
33731130 ,
35585769 ,
37487362 ,
39435780 ,
41430899 ,
43472597 ,
45560757 ,
47695264 ,
49876006 ,
52102875 ,
54375765 ,
56694573 ,
59059197 ,
61469539 ,
63925504 ,
66426996 ,
68973925 ,
71566200 ,
74203734 ,
76886439 ,
79614233 ,
82387032 ,
85204755 ,
88067323 ,
90974657 ,
93926682 ,
96923322 ,
99964504 ,
103050155 ,
106180204 ,
109354582 ,
112573219 ,
115836048 ,
119143002 ,
122494017 ,
125889029 ,
129327972 ,
132810787 ,
136337410 ,
139907783 ,
143521844 ,
147179537 ,
150880802 ,
154625583 ,
158413825 ,
162245471 ,
166120466 ,
170038759 ,
174000294 ,
178005020 ,
182052885 ,
186143838 ,
190277828 ,
194454807 ,
198674724 ,
202937532 ,
207243182 ,
211591627 ,
215982821 ,
220416716 ,
224893268 ,
229412432 ,
233974162 ,
238578416 ,
243225148 ,
247914316 ,
252645878 ,
257419790 ,
262236013 ,
267094503 ,
271995222 ,
276938127 ,
281923179 ,
286950339 ,
292019567 ,
297130824 ,
302284073 ,
307479276 ,
312716393 ,
317995390 ,
323316228 ,
328678870 ,
334083282 ,
339529427 ,
345017269 ,
350546773 ,
356117905 ,
361730630 ,
367384913 ,
373080721 ,
378818021 ,
384596778 ,
390416960 ,
396278535 ,
402181469 ,
408125730 ,
414111287 ,
420138108 ,
426206162 ,
432315417 ,
438465842 ,
444657408 ,
450890083 ,
457163838 ,
463478643 ,
469834468 ,
476231283 ,
482669060 ,
489147769 ,
495667383 ,
502227871 ,
508829207 ,
515471362 ,
522154308 ,
528878017 ,
535642463 ,
542447617 ,
549293454 ,
556179945 ,
563107064 ,
570074786 ,
577083083 ,
584131929 ,
591221299 ,
598351167 ,
605521507 ,
612732294 ,
619983503 ,
627275109 ,
634607086 ,
641979411 ,
649392059 ,
656845004 ,
664338224 ,
671871694 ,
679445391 ,
687059289 ,
694713367 ,
702407600 ,
710141966 ,
717916440 ,
725731001 ,
733585625 ,
741480289 ,
749414971 ,
757389650 ,
765404301 ,
773458904 ,
781553436 ,
789687875 ,
797862200 ,
806076389 ,
814330420 ,
822624273 ,
830957925 ,
839331356 ,
847744545 ,
856197471 ,
864690113 ,
873222451 ,
881794464 ,
890406131 ,
899057433 ,
907748349 ,
916478859 ,
925248944 ,
934058582 ,
942907756 ,
951796445 ,
960724629 ,
969692289 ,
978699406 ,
987745961 ,
996831934 ,
1005957307 ,
1015122061 ,
1024326177 ,
1033569635 ,
1042852419 ,
1052174508 ,
1061535885 ,
1070936531 ,
1080376429 ,
1089855560 ,
1099373905 ,
1108931448 ,
1118528170 ,
1128164053 ,
1137839080 ,
1147553233 ,
1157306495 ,
1167098848 ,
1176930275 ,
1186800759 ,
1196710282 ,
1206658828 ,
1216646379 ,
1226672919 ,
1236738430 ,
1246842896 ,
1256986300 ,
1267168626 ,
1277389858 ,
1287649977 ,
1297948969 ,
1308286817 ,
1318663505 ,
1329079017 ,
1339533336 ,
1350026446 ,
1360558332 ,
1371128978 ,
1381738368 ,
1392386487 ,
1403073317 ,
1413798845 ,
1424563055 ,
1435365930 ,
1446207456 ,
1457087618 ,
1468006400 ,
};


/*
*		index : 0 ~ 255
*		350 is max CANDELA
*		(350*((index/255)^2.2))*4194304
*/

static int curve_2p2_350[] = {
0 ,
7453 ,
34246 ,
83562 ,
157352 ,
257083 ,
383948 ,
538958 ,
722999 ,
936856 ,
1181244 ,
1456812 ,
1764161 ,
2103851 ,
2476402 ,
2882308 ,
3322030 ,
3796009 ,
4304662 ,
4848389 ,
5427571 ,
6042574 ,
6693749 ,
7381435 ,
8105957 ,
8867630 ,
9666760 ,
10503640 ,
11378558 ,
12291790 ,
13243608 ,
14234273 ,
15264040 ,
16333160 ,
17441875 ,
18590422 ,
19779033 ,
21007934 ,
22277347 ,
23587488 ,
24938569 ,
26330799 ,
27764381 ,
29239514 ,
30756396 ,
32315217 ,
33916168 ,
35559434 ,
37245197 ,
38973636 ,
40744929 ,
42559247 ,
44416763 ,
46317645 ,
48262056 ,
50250162 ,
52282123 ,
54358096 ,
56478238 ,
58642703 ,
60851642 ,
63105206 ,
65403542 ,
67746796 ,
70135112 ,
72568632 ,
75047497 ,
77571844 ,
80141812 ,
82757536 ,
85419149 ,
88126783 ,
90880570 ,
93680639 ,
96527117 ,
99420131 ,
102359806 ,
105346266 ,
108379633 ,
111460029 ,
114587574 ,
117762385 ,
120984582 ,
124254279 ,
127571594 ,
130936639 ,
134349528 ,
137810373 ,
141319285 ,
144876374 ,
148481748 ,
152135517 ,
155837787 ,
159588664 ,
163388253 ,
167236659 ,
171133986 ,
175080334 ,
179075808 ,
183120506 ,
187214530 ,
191357978 ,
195550950 ,
199793542 ,
204085852 ,
208427975 ,
212820008 ,
217262045 ,
221754180 ,
226296505 ,
230889115 ,
235532101 ,
240225553 ,
244969563 ,
249764221 ,
254609615 ,
259505836 ,
264452969 ,
269451104 ,
274500328 ,
279600725 ,
284752383 ,
289955385 ,
295209818 ,
300515765 ,
305873308 ,
311282533 ,
316743520 ,
322256351 ,
327821109 ,
333437873 ,
339106725 ,
344827744 ,
350601009 ,
356426600 ,
362304595 ,
368235072 ,
374218109 ,
380253782 ,
386342168 ,
392483343 ,
398677384 ,
404924365 ,
411224361 ,
417577447 ,
423983696 ,
430443184 ,
436955981 ,
443522162 ,
450141799 ,
456814964 ,
463541729 ,
470322164 ,
477156341 ,
484044331 ,
490986203 ,
497982027 ,
505031873 ,
512135809 ,
519293905 ,
526506229 ,
533772849 ,
541093833 ,
548469247 ,
555899160 ,
563383637 ,
570922746 ,
578516551 ,
586165120 ,
593868517 ,
601626807 ,
609440055 ,
617308327 ,
625231685 ,
633210194 ,
641243918 ,
649332920 ,
657477262 ,
665677008 ,
673932220 ,
682242960 ,
690609291 ,
699031273 ,
707508968 ,
716042438 ,
724631743 ,
733276943 ,
741978099 ,
750735271 ,
759548519 ,
768417902 ,
777343479 ,
786325311 ,
795363454 ,
804457968 ,
813608912 ,
822816343 ,
832080318 ,
841400897 ,
850778135 ,
860212091 ,
869702820 ,
879250380 ,
888854827 ,
898516218 ,
908234608 ,
918010052 ,
927842608 ,
937732329 ,
947679272 ,
957683490 ,
967745039 ,
977863973 ,
988040347 ,
998274214 ,
1008565629 ,
1018914645 ,
1029321316 ,
1039785694 ,
1050307834 ,
1060887787 ,
1071525607 ,
1082221346 ,
1092975056 ,
1103786790 ,
1114656600 ,
1125584537 ,
1136570652 ,
1147614998 ,
1158717625 ,
1169878585 ,
1181097928 ,
1192375706 ,
1203711967 ,
1215106764 ,
1226560145 ,
1238072162 ,
1249642863 ,
1261272299 ,
1272960519 ,
1284707572 ,
1296513507 ,
1308378374 ,
1320302221 ,
1332285097 ,
1344327051 ,
1356428130 ,
1368588383 ,
1380807858 ,
1393086603 ,
1405424665 ,
1417822093 ,
1430278933 ,
1442795233 ,
1455371039 ,
1468006400 ,
};

#endif /* START_MTP_2P2_GAMMA_H */
