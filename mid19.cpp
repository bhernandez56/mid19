// Name: Brandon Hernandez
// Date: Spring 2019
// File: mid19.cpp

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

//type defines
typedef double Flt;


//prototype


#ifdef UNIT_TEST
typedef Flt Vec[5];
Flt vec_length(Vec v);
const Flt arr[] = {
-3.77983	,-8.11711	,-0.42214	,-0.90653	,8.945631,
-6.19391	,-7.48675	,-0.63744	,-0.77050	,9.715759,
0.46671	,7.98604	,0.05834	,0.99830	,8.014661,
-3.78165	,9.45696	,-0.37129	,0.92852	,10.200031,
-1.08659	,-4.13340	,-0.25424	,-0.96714	,4.269271,
-1.09663	,-4.13138	,-0.25655	,-0.96653	,4.273677,
-0.42783	,-3.57757	,-0.11874	,-0.99293	,3.609497,
9.33954	,-1.55691	,0.98639	,-0.16443	,9.477810,
0.07000	,3.31899	,0.02109	,0.99978	,3.319133,
4.83957	,-5.88670  ,0.63506 ,	-0.77246 ,	7.610853,
2.63395	,-8.08769	,0.30967,	-0.95085,	8.508348,
-2.86933	,7.61333	,-0.35267,	0.93575,	8.140864,
-6.52007	,-4.95898	,-0.79594,	-0.60537,	8.192558,
-0.09036	,-3.03667	,-0.02974,	-0.99956,	3.046420,
2.38575	,-7.40187	,0.30678,	-0.95178,	7.778145,
0.04122	,-6.80627	,0.00606,	-0.99998,	6.815462,
5.51272	,1.45683	,0.96681,	0.25550,	5.701812,
4.57013	,9.48918	,0.43391,	0.90095,	10.528896,
-8.59851	,-1.32101	,-0.98840,	-0.15185,	8.696264,
-3.70768	,6.27192	,-0.50889,	0.86083,	7.284048,
-8.68706	,-7.21460	,-0.76929,	-0.63890,	11.291982,
-1.25128	,9.30296	,-0.13330,	0.99108,	9.376879,
-8.09890	,-6.20071	,-0.79401,	-0.60791,	10.200514,
-4.00698	,-6.99062	,-0.49729,	-0.86758,	8.048112,
3.46622	,8.09713	,0.39354,	0.91931,	8.805252,
7.58631	,-8.61934	,0.66069,	-0.75066,	11.490270,
-0.94035	,3.37630	,-0.26830,	0.96333,	3.508857,
-0.35179	,-2.90380	,-0.12027,	-0.99274,	2.924466,
-1.11840	,-7.72024	,-0.14337,	-0.98967,	7.807282,
-8.41728	,-2.11187	,-0.96994,	-0.24335,	8.669724,
0.68743	,-1.37543	,0.44706,	-0.89450,	1.543106,
0.63395	,-7.52031	,0.08400,	-0.99647,	7.540248,
9.57682	,-2.95578	,0.95552,	-0.29491,	10.029590,
-2.57512	,-4.62305	,-0.48662,	-0.87361,	5.297111,
7.75325	,9.67090	,0.62551,	0.78022,	12.391867,
-3.23290	,1.96071	,-0.85504,	0.51857,	3.785377,
3.24047	,5.54636	,0.50446,	0.86343,	6.427108,
-6.56551	,-1.95618	,-0.95837,	-0.28554,	6.853493,
5.66838	,-2.26684	,0.92851,	-0.37132,	6.100425,
-0.78715	,-5.01144	,-0.15517,	-0.98789,	5.071080,
1.03279	,9.53901	,0.10764,	0.99419,	9.602082,
-5.08404	,-8.89627	,-0.49617,	-0.86822,	10.238272,
9.77463	,-7.22131	,0.80431,	-0.59421,	12.148641,
3.73940	,-4.56671	,0.63354,	-0.77371,	5.898663,
9.97965	,1.46945	,0.98933,	0.14567,	10.079798,
8.51326	,5.11009	,0.85740,	0.51465,	9.933058,
-7.15675	,-5.66156	,-0.78427,	-0.62042,	9.125953,
-1.67300	,-1.11353	,-0.83246,	-0.55408,	2.017969,
-1.57452	,-5.20144	,-0.28972,	-0.95711,	5.436469,
-5.09771	,-1.24036	,-0.97165,	-0.23642,	5.240315,
0.53834	,-6.91867	,0.07757,	-0.99699,	6.933034,
-2.48538	,0.40908	,-0.98672,	0.16241,	2.515655,
-8.12148	,0.06069	,-0.99997,	0.00747,	8.131064,
-4.82922	,-4.55551	,-0.72742,	-0.68619,	6.635159,
-1.21708	,3.05740	,-0.36985,	0.92909,	3.296645,
-8.05613	,5.91589,	-0.80602,	0.59189,	9.993760,
9.71445	,0.28716,	0.99956,	0.02955,	9.712501,
8.04681	,4.72145,	0.86249,	0.50607,	9.327680,
6.80278	,7.51230,	0.67124,	0.74124,	10.128211,
-2.07862	,-7.87950,	-0.25507,	-0.96692,	8.147276,
1.18118	,9.72010,	0.12063,	0.99270,	9.796714,
-4.83541	,-8.23489,	-0.50635,	-0.86233,	9.552163,
3.82251	,8.43613,	0.41272,	0.91086,	9.266237,
4.35203	,-6.47285,	0.55796,	-0.82987,	7.803625,
2.81431	,-5.15347,	0.47929,	-0.87766,	5.872223,
8.56799	,-4.02313,	0.90518,	-0.42503,	9.470644,
-6.51083	,0.30913,	-0.99887,	0.04743,	6.518071,
1.42963	,-0.50014,	0.94390,	-0.33022,	1.506286,
-0.78004	,-3.59786,	-0.21188,	-0.97729,	3.684489,
-2.83275	,8.32878,	-0.32200,	0.94674,	8.807324,
6.76492	,4.38949,	0.83888,	0.54432,	8.064874,
6.91664	,7.89187,	0.65911,	0.75205,	10.493073,
-7.26159	,-7.13336,	-0.71338,	-0.70078,	10.169497,
-2.15649	,8.03831,	-0.25911,	0.96585,	8.322382,
-1.65255	,4.36534,	-0.35404,	0.93523,	4.676382,
-6.13480	,7.95367,	-0.61075,	0.79183,	10.046405,
-5.64419	,7.35067,	-0.60902,	0.79315,	9.267671,
5.67945	,0.80175,	0.99018,	0.13978,	5.737812,
-4.80875	,-4.73105,	-0.71284,	-0.70132,	6.737048,
-6.83917	,-2.25526,	-0.94970,	-0.31317,	7.195529,
-0.38863	,0.43089,	-0.66975,	0.74259,	0.586527,
-1.53079	,9.88279,	-0.15307,	0.98822,	10.006244,
4.24814	,-3.46922,	0.77454,	-0.63253,	5.491683,
-5.51555	,4.98163,	-0.74211,	0.67027,	7.429420,
2.33230	,3.66819,	0.53655,	0.84387,	4.344242,
-5.53006	,-2.12387,	-0.93352,	-0.35853,	5.921947,
2.14508	,-6.98257,	0.29366,	-0.95591,	7.308636,
-0.23783	,9.60791,	-0.02475,	0.99969,	9.619138,
0.03880	,-6.58923,	0.00589,	-0.99998,	6.596723,
-6.70644	,-8.38403,	-0.62465,	-0.78090,	10.742665,
-2.85325	,-2.08160,	-0.80786,	-0.58938,	3.532011,
-7.09998	,-7.14648,	-0.70479,	-0.70941,	10.077750,
5.52171	,4.83477,	0.75236,	0.65876,	7.348163,
-7.28910	,-8.29981,	-0.65988,	-0.75137,	11.049701,
-6.28238	,6.42191,	-0.69930,	0.71483,	8.985911,
6.02982	,-3.63298,	0.85655,	-0.51607,	7.035023,
-1.22221	,-4.31825,	-0.27234,	-0.96220,	4.488481,
-3.70228	,5.90129,	-0.53144,	0.84710,	6.968542,
-6.18031	,-8.73192,	-0.57772,	-0.81624,	10.692754,
-6.87840	,9.54712,	-0.58455,	0.81135,	11.774414,
4.38189	,-8.80390,	0.44558,	-0.89524,	9.839992,
-8.10371	,-5.71221,	-0.81735,	-0.57614,	9.908412,
9.70970	,7.11065,	0.80679,	0.59083,	12.040444,
-6.52233	,-3.05296,	-0.90569,	-0.42393,	7.202277,
1.62879	,-5.61525,	0.27858,	-0.96041,	5.853470,
9.28604	,-1.06013,	0.99355,	-0.11343,	9.338576,
-0.79205	,1.44665,	-0.48024,	0.87714,	1.650156,
0.99377	,-3.22254,	0.29469,	-0.95559,	3.366893,
-3.02644	,-4.39218,	-0.56740,	-0.82345,	5.331138,
-1.10439	,0.41721,	-0.93547,	0.35339,	1.178573,
-2.47215	,-2.42252,	-0.71424,	-0.69990,	3.460711,
3.52452	,-4.84705,	0.58811,	-0.80878,	5.987380,
-1.46230	,-7.41220,	-0.19355,	-0.98109,	7.552249,
0.52767	,0.45081,	0.76030,	0.64957,	0.702692,
-8.10254	,6.75490,	-0.76809,	0.64034,	10.550390,
-6.46763	,8.03804,	-0.62689,	0.77911,	10.315950,
-6.35414	,6.73533,	-0.68622,	0.72739,	9.260672,
-2.84746	,-2.14044,	-0.79935,	-0.60087,	3.565585,
4.43703	,-6.50840,	0.56329,	-0.82626,	7.874292,
-2.35545	,-6.05310,	-0.36264,	-0.93193,	6.500172,
-4.46530	,3.19470,	-0.81329,	0.58186,	5.495247,
-6.35449	,1.93546,	-0.95661,	0.29137,	6.636435,
-1.30964	,-6.13683,	-0.20871,	-0.97798,	6.275777,
-8.09879	,1.70110,	-0.97864,	0.20556,	8.269244,
-1.56357	,6.10445,	-0.24813,	0.96873,	6.305816,
-6.03599	,4.23533,	-0.81859,	0.57438,	7.380951,
6.72693	,0.95528,	0.99007,	0.14060,	6.787968,
3.90218	,6.47746,	0.51602,	0.85658,	7.570395,
-0.32785	,-8.44029,	-0.03881,	-0.99925,	8.448564,
2.49517	,-2.70276,	0.67833,	-0.73476,	3.668621,
0.16041	,1.29485,	0.12294,	0.99241,	1.305338,
-7.00405	,1.13693,	-0.98708,	0.16023,	7.095658,
-2.75862	,-0.30275,	-0.99403,	-0.10909,	2.774869,
-6.06742	,2.29071,	-0.93554,	0.35321,	6.495081,
-6.75401	,1.96902,	-0.96003,	0.27988,	7.041122,
-1.55352	,-7.41529,	-0.20505,	-0.97875,	7.583243,
-6.85558	,-1.91571,	-0.96310,	-0.26913,	7.122564,
4.38153	,-4.70306,	0.68165,	-0.73168,	6.421526,
5.59179	,-3.76660,	0.82939,	-0.55867,	6.749516,
6.37034	,-0.78774,	0.99244,	-0.12272,	6.411609,
7.90951	,2.04146,	0.96827,	0.24991,	8.159599,
-5.66783	,9.42354,	-0.51541,	0.85694,	10.992569,
1.39256	,-5.46741,	0.24682,	-0.96906,	5.650748,
-3.88270	,6.31137,	-0.52398,	0.85173,	7.407689,
-5.60434	,-4.60604,	-0.77256,	-0.63494,	7.261915,
-0.30910	,6.72645,	-0.04590,	0.99895,	6.728058,
-7.04014	,5.92268,	-0.76523,	0.64376,	9.208337,
-4.86507	,-0.10947,	-0.99975,	-0.02250,	4.858449,
-8.06801	,3.75903,	-0.90644,	0.42233,	8.895222,
3.18257	,-5.61187,	0.49331,	-0.86986,	6.445261,
-2.07928	,2.56865,	-0.62918,	0.77726,	3.307424,
-1.11998	,8.37183,	-0.13260,	0.99117,	8.448279,
-6.23421	,-6.79895,	-0.67583,	-0.73705,	9.226543,
8.92750	,1.37199,	0.98840,	0.15190,	9.023245,
-2.70533	,8.60980,	-0.29977,	0.95401,	9.025800,
-1.49967	,-8.84053,	-0.16725,	-0.98592,	8.965700,
3.91850	,6.36057,	0.52452,	0.85140,	7.467137,
9.74871	,-5.46119,	0.87243,	-0.48873,	11.171181,
6.10746	,3.09036,	0.89228,	0.45149,	6.839003,
1.46219	,-8.99283,	0.16049,	-0.98704,	9.114853,
-6.79178	,-3.68397,	-0.87902,	-0.47679,	7.717772,
6.68801	,-6.57596,	0.71306,	-0.70111,	9.372519,
-7.96616	,-7.75937,	-0.71634,	-0.69775,	11.119573,
-7.59989	,-2.11367,	-0.96343,	-0.26795,	7.893417,
-5.75310	,1.66297,	-0.96067,	0.27769,	5.981775,
5.20177	,2.09588,	0.92754,	0.37372,	5.608987,
-4.81376	,0.37246,	-0.99702,	0.07714,	4.833567,
0.37963	,1.55987,	0.23647,	0.97164,	1.607600,
6.87590	,5.56107,	0.77753,	0.62885,	8.846495,
7.98511	,5.74664,	0.81166,	0.58413,	9.846949,
6.98728	,0.95888,	0.99071,	0.13596,	7.061067,
7.84520	,-3.48041,	0.91409,	-0.40552,	8.573716,
7.18256	,5.12568,	0.81399,	0.58088,	8.825914,
-2.77844	,4.75274,	-0.50468,	0.86330,	5.506252,
-4.87479	,7.99028,	-0.52082,	0.85367,	9.364141,
-0.44985	,5.93263,	-0.07561,	0.99714,	5.945370,
1.49369	,9.81625,	0.15043,	0.98862,	9.928169,
5.56289	,5.53655,	0.70878,	0.70543,	7.850674,
-3.50457	,6.05086,	-0.50119,	0.86534,	6.986007,
-7.42955	,-5.35645,	-0.81116,	-0.58482,	9.167819,
8.76923	,-0.47955,	0.99851,	-0.05460,	8.777584,
-5.72681	,3.83092,	-0.83118,	0.55601,	6.887799,
1.82120	,-6.54519,	0.26807,	-0.96340,	6.784229,
8.38744	,-1.00408,	0.99291,	-0.11886,	8.446677,
-1.18783	,-4.21264,	-0.27139,	-0.96247,	4.370453,
-8.67608	,-3.14231,	-0.94023,	-0.34053,	9.223723,
-7.09145	,-3.13721,	-0.91451,	-0.40457,	7.748064,
0.50634	,4.59272,	0.10958,	0.99398,	4.619254,
-5.88683	,3.36937,	-0.86790,	0.49675,	6.779603,
-2.79971	,0.66494,	-0.97294,	0.23108,	2.885506,
3.11976	,6.68800,	0.42274,	0.90625,	7.380909,
-4.31609	,-4.80975,	-0.66788,	-0.74427,	6.465530,
-0.02239	,8.74828,	-0.00256,	1.00000,	8.748095,
-4.39403	,2.79638,	-0.84365,	0.53690,	5.205244,
8.65917	,-3.71915,	0.91883,	-0.39464,	9.422679,
9.87356	,3.22554,	0.95056,	0.31053,	10.380221,
-3.40509	,1.70744,	-0.89391,	0.44824,	3.811609,
-7.62762	,-4.84215,	-0.84425,	-0.53595,	9.038969,
-8.15415	,-0.79046,	-0.99533,	-0.09649,	8.188198,
3.39979	,-3.61233,	0.68536,	-0.72820,	4.953098,
-4.86405	,5.89699,	-0.63631,	0.77144,	7.643386,
-1.30663	,-1.20020,	-0.73646,	-0.67648,	1.770877,
4.08065	,-2.75005,	0.82926,	-0.55886,	4.924455,
9.47549	,2.95914,	0.95454,	0.29810,	9.922140,
-5.33343	,-2.68597,	-0.89313,	-0.44979,	5.966892,
1.47188	,-1.31769,	0.74505,	-0.66700,	1.977451,
6.89185	,-4.46958,	0.83901,	-0.54412,	8.214080,
0.91810	,6.87333,	0.13240,	0.99120,	6.939174,
2.77033	,-4.65203,	0.51166,	-0.85919,	5.404918,
3.14777	,-8.94762,	0.33186,	-0.94333,	9.481722,
-2.69767	,-6.66569,	-0.37515,	-0.92696,	7.186972,
5.29344	,7.12357,	0.59644,	0.80265,	8.883915,
-5.56240	,-0.28617,	-0.99868,	-0.05138,	5.574399,
7.39614	,-5.46994,	0.80401,	-0.59462,	9.203067,
-0.93951	,-4.92530,	-0.18737,	-0.98229,	5.023034,
-8.05197	,6.24868,	-0.79002,	0.61309,	10.195550,
-8.40335	,7.82858,	-0.73169,	0.68164,	11.488313,
7.88096	,-8.00169,	0.70171,	-0.71246,	11.225456,
-5.66738	,-8.84452,	-0.53952,	-0.84197,	10.513068,
7.27905	,-7.19067,	0.71141,	-0.70277,	10.222581,
1.52316	,-7.41495,	0.20122,	-0.97955,	7.568108,
-3.88488	,-7.14667,	-0.47759,	-0.87858,	8.138189,
-3.07197	,-3.21308,	-0.69106,	-0.72280,	4.442560,
-6.96440	,-2.81319,	-0.92721,	-0.37454,	7.503893,
-4.98461	,4.77648,	-0.72202,	0.69187,	6.895700,
5.77479	,6.34952,	0.67283,	0.73980,	8.591873,
6.50500	,7.04074,	0.67861,	0.73450,	9.589232,
8.85007	,5.31955,	0.85709,	0.51517,	10.325631,
6.90461	,0.12682,	0.99983,	0.01836,	6.897896,
1.98015	,-8.50018,	0.22688,	-0.97392,	8.735577,
-2.71327	,-0.65049,	-0.97244,	-0.23314,	2.788912,
5.53633	,-3.62133,	0.83687,	-0.54740,	6.625037,
-8.84485	,-1.66875,	-0.98266,	-0.18540,	9.006609,
-5.31922	,-1.47230,	-0.96376,	-0.26676,	5.509418,
-4.43156	,2.77082,	-0.84790,	0.53015,	5.220086,
-1.90962	,-1.52949,	-0.78051,	-0.62514,	2.440834,
7.59733	,2.08427,	0.96437,	0.26457,	7.877078,
2.58409	,-6.78997,	0.35569,	-0.93461,	7.273880,
1.55954	,2.26991,	0.56628,	0.82421,	2.750446,
7.64858	,9.14773,	0.64144,	0.76717,	11.931689,
-2.52101	,-1.90435,	-0.79793,	-0.60275,	3.160135,
5.62335	,-1.22898,	0.97694,	-0.21351,	5.746278,
-8.45815	,-4.68464,	-0.87479,	-0.48451,	9.666860,
2.78587	,7.40205,	0.35224,	0.93591,	7.908821,
-0.51368	,8.64191,	-0.05934,	0.99824,	8.648289,
-8.14806	,-3.55365,	-0.91662,	-0.39977,	8.891291,
7.71627	,-1.86561,	0.97199,	-0.23500,	7.943715,
-2.71787	,-4.84506,	-0.48924,	-0.87215,	5.558743,
2.25058	,-3.09775,	0.58777,	-0.80902,	3.826230,
4.67327	,5.26641,	0.66373,	0.74797,	7.045885,
9.58177	,1.67602,	0.98504,	0.17230,	9.729215,
-0.92193	,5.47455,	-0.16606,	0.98611,	5.559073,
4.11646	,-8.28847,	0.44481,	-0.89562,	9.259105,
-2.84211	,8.57605,	-0.31458,	0.94923,	9.028798,
-3.28956	,-4.11276,	-0.62462,	-0.78093,	5.269126,
0.04217	,2.40758,	0.01751,	0.99985,	2.399307,
8.30983	,0.67455,	0.99672,	0.08091,	8.339773,
-4.05903	,6.23241,	-0.54574,	0.83795,	7.432414,
-2.09157	,1.04557,	-0.89446,	0.44714,	2.344122,
-3.47988	,8.64122,	-0.37355,	0.92761,	9.330595,
9.63658	,9.35275,	0.71760,	0.69646,	13.433306,
0.0,		0.0 ,		0.0,		 0.0,		 0.0
};
#endif

#ifndef UNIT_TEST
typedef Flt Vec[3];
Flt vec_length(Vec v);
//Array of vector values
const Flt arr[] = {
   1.0,   0.0,
   1.0,   1.0,
  -1.2,   2.5,
  99.9,  99.9,
   2.2,  -1.2,
   0.0,   0.0
};
#endif


int main(int argc, char *argv[])
{
#ifdef UNIT_TEST
    // UNIT_TEST: TOLERANC ELEVEL
    if(argc != 2) {
        cout << " Incorrect input, Correct Format: ./executable ToleranceValue  " << endl;
        return 0;  
    }
	double x = atof(argv[1]);
#endif
    //Program to calculate vector normalization and length.
    printf("                                    \n");
    printf("3350 software engineering           \n");
    printf("                                    \n");
    //=====================================//
    //FOLLOWING CODE RUNS WITHOUT UNIT_TEST//
    //=====================================//
#ifndef UNIT_TEST
    printf("Calculation of vector lengths:      \n");
    printf("                                    \n");
    printf("     x         y         length     \n");
    printf("     --------  --------  ---------- \n");
    //read until sentinel found.
    int i=0;
    Vec v = { arr[i*2+0], arr[i*2+1] };
    do {
        Flt ret = vec_length(v);
        printf("%3i  %8.5lf  %8.5lf  %10.5lf\n", i+1, v[0], v[1], ret);
        ++i;
        v[0] = arr[i*2+0];
        v[1] = arr[i*2+1];
    } while (!(v[0]==0.0 && v[1]==0.0));
#endif
    //=====================================//
    //FOLLOWING CODE RUNS WITH UNIT_TEST//
    //=====================================//
#ifdef UNIT_TEST
    printf("Unit test of vec_length() function:      \n");
	printf("tolerance: %lf                            \n", x);
    printf("     x         y         length      actual  \n");
    printf("     --------  --------  ----------  ----------  \n");
    //read until sentinel found.
	string error = " <-- error";
	string correct = "";
	string str;
      int i=0;
      int errors = 0;
      Vec v = { arr[0], arr[1], arr[2], arr[3], arr[4] };
      do {
      	Vec out = { v[0], v[1], v[4] };
            Flt ret = vec_length(v);
		if(abs(ret - out[2]) > x) {
			str = error;
                  errors++;
            }
		else
			str = correct;
        printf("%3i  %8.5lf  %8.5lf  %10.5lf %10.5lf %s\n", i+1, out[0], out[1], out[2], ret, str.c_str());
        ++i;
        v[0] = arr[i*5+0];
        v[1] = arr[i*5+1];
        v[2] = arr[i*5+2];
        v[3] = arr[i*5+3];
        v[4] = arr[i*5+4];
		
    } while (!(v[0]==0.0 && v[1]==0.0));
      cout << "\nUnit test is complete." << endl;
      cout << "Errors found " << errors << endl;
#endif
    printf("\nProgram complete.\n\n");
    return 0;
}

Flt vec_length(Vec v)
{
    //Normalize a vector.
    //Return the original length of the vector.
    //
    //input: the 2 components of a vector
    //output: the pre-normalized vector length is returned
    //        the vector argument is scaled to a length of 1.0
    //
    //A degenerate vector causes an error condition.
    //It will return a length of 0.0
    //and an arbitrary vector with length 1.0.
    //
    //calculate the vector dot product with itself...
    Flt dot = v[0]*v[0] + v[1]*v[1];
    //check for degenerate vector...
    if (dot == 0.0) {
        //set an arbitrary vector of length 1.0
        //printf("ERROR vector magnitude is zero.\n");
        v[0] = 1.0;
        v[1] = 0.0;
        return 0.0;
    }
    //vector has a magnitude so continue.
    Flt len = sqrt(dot);
    Flt oolen = 1.0 / len;
    v[0] *= oolen;
    v[1] *= oolen;
    return len;
}


