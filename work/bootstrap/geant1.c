#include "geant.h"

#ifdef __cplusplus
extern "C" {
#endif

T0* GE_boxed1(T1 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb1));
	((T0*)(R))->id = 1;
	((Tb1*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed2(T2 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb2));
	((T0*)(R))->id = 2;
	((Tb2*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed3(T3 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb3));
	((T0*)(R))->id = 3;
	((Tb3*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed4(T4 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb4));
	((T0*)(R))->id = 4;
	((Tb4*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed5(T5 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb5));
	((T0*)(R))->id = 5;
	((Tb5*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed6(T6 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb6));
	((T0*)(R))->id = 6;
	((Tb6*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed7(T7 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb7));
	((T0*)(R))->id = 7;
	((Tb7*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed8(T8 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb8));
	((T0*)(R))->id = 8;
	((Tb8*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed9(T9 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb9));
	((T0*)(R))->id = 9;
	((Tb9*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed10(T10 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb10));
	((T0*)(R))->id = 10;
	((Tb10*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed11(T11 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb11));
	((T0*)(R))->id = 11;
	((Tb11*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed12(T12 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb12));
	((T0*)(R))->id = 12;
	((Tb12*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed13(T13 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb13));
	((T0*)(R))->id = 13;
	((Tb13*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed14(T14 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb14));
	((T0*)(R))->id = 14;
	((Tb14*)(R))->z1 = a1;
	return R;
}

T1 GE_default1 = 0;
T2 GE_default2 = 0;
T3 GE_default3 = 0;
T4 GE_default4 = 0;
T5 GE_default5 = 0;
T6 GE_default6 = 0;
T7 GE_default7 = 0;
T8 GE_default8 = 0;
T9 GE_default9 = 0;
T10 GE_default10 = 0;
T11 GE_default11 = 0;
T12 GE_default12 = 0;
T13 GE_default13 = 0;
T14 GE_default14 = 0;
T15 GE_default15 = {15,0,{0}};
T17 GE_default17 = {17,0,0,0};
T21 GE_default21 = {21,0,0,0,0,0,0,0};
T22 GE_default22 = {22,0,0,0,0,0,0,0,0,0,0,0,0,0};
T23 GE_default23 = {23,0,0};
T24 GE_default24 = {24,0,0,0};
T25 GE_default25 = {25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T26 GE_default26 = {26,0,0,0,0,0,0,0,0,0,0,0};
T27 GE_default27 = {27,0};
T28 GE_default28 = {28,0,0,0};
T29 GE_default29 = {29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T30 GE_default30 = {30,0,0};
T31 GE_default31 = {31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T32 GE_default32 = {32,0,{0}};
T33 GE_default33 = {33,0,0,0};
T34 GE_default34 = {34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T35 GE_default35 = {35,0,0,0,0,0,0,0,0};
T36 GE_default36 = {36,0,0,0,0};
T37 GE_default37 = {37,0,0,0,0,0,0,0,0,0,0};
T38 GE_default38 = {38,0,0,0,0,0,0,0,0,0,0,0};
T40 GE_default40 = {40,0,0,0};
T45 GE_default45 = {45,0,0,0,0};
T46 GE_default46 = {46};
T47 GE_default47 = {47,0,0,0};
T48 GE_default48 = {48};
T49 GE_default49 = {49,0};
T51 GE_default51 = {51};
T53 GE_default53 = {53,0};
T54 GE_default54 = {54};
T55 GE_default55 = {55,0,0,0,0,0,0,0,0,0};
T56 GE_default56 = {56,0,0,0,0,0,0};
T58 GE_default58 = {58,0};
T59 GE_default59 = {59};
T61 GE_default61 = {61,0,0,0};
T63 GE_default63 = {63,0,{0}};
T64 GE_default64 = {64,0,0,0};
T65 GE_default65 = {65};
T66 GE_default66 = {66};
T68 GE_default68 = {68,0,0,0};
T69 GE_default69 = {69,0,0,0,0,0};
T71 GE_default71 = {71,0,0,0,0,0,0};
T72 GE_default72 = {72,0,0,0};
T73 GE_default73 = {73,0,0,0,0,0,0,0,0};
T74 GE_default74 = {74,0,0,0,0,0,0};
T75 GE_default75 = {75,0,0,0,0,0};
T76 GE_default76 = {76};
T77 GE_default77 = {77,0};
T80 GE_default80 = {80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T82 GE_default82 = {82,0};
T83 GE_default83 = {83};
T85 GE_default85 = {85,0,0,0,0,0,0};
T86 GE_default86 = {86,0,0};
T87 GE_default87 = {87,0,0};
T89 GE_default89 = {89};
T91 GE_default91 = {91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T92 GE_default92 = {92,0,0,0,0};
T95 GE_default95 = {95,0,0,0,0,0,0};
T96 GE_default96 = {96,0,0,0,0,0,0};
T97 GE_default97 = {97,0,0,0,0,0,0,0};
T98 GE_default98 = {98,0,0,0};
T100 GE_default100 = {100,0};
T101 GE_default101 = {101,0,0,0,0};
T102 GE_default102 = {102,0,0};
T103 GE_default103 = {103,0};
T104 GE_default104 = {104,0};
T105 GE_default105 = {105,0,0,0};
T107 GE_default107 = {107,0,{0}};
T108 GE_default108 = {108};
T109 GE_default109 = {109,0,0,0};
T110 GE_default110 = {110,0,{0}};
T111 GE_default111 = {111};
T112 GE_default112 = {112,0,0,0,0,0,0};
T114 GE_default114 = {114,0,0,0,0,0,0,0,0,0,0};
T116 GE_default116 = {116,0,0,0,0};
T117 GE_default117 = {117,0,0,0,0,0};
T118 GE_default118 = {118,0,0,0};
T119 GE_default119 = {119,0,0};
T120 GE_default120 = {120,0,{0}};
T122 GE_default122 = {122,0,0,0};
T124 GE_default124 = {124,0,0,0};
T125 GE_default125 = {125};
T126 GE_default126 = {126,0};
T128 GE_default128 = {128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T129 GE_default129 = {129,0,0,0,0};
T131 GE_default131 = {131,0,0,0,0};
T132 GE_default132 = {132,0,0};
T133 GE_default133 = {133};
T134 GE_default134 = {134,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T136 GE_default136 = {136};
T137 GE_default137 = {137,0,{0}};
T138 GE_default138 = {138};
T139 GE_default139 = {139,0,0,0,0,0};
T140 GE_default140 = {140,0,0,0};
T141 GE_default141 = {141,0,0};
T142 GE_default142 = {142,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T143 GE_default143 = {143,0,0,0,0,0};
T144 GE_default144 = {144,0,0,0,0};
T145 GE_default145 = {145,0,0,0,0,0,0};
T146 GE_default146 = {146,0,0,0,0,0};
T147 GE_default147 = {147,0,{0}};
T148 GE_default148 = {148};
T149 GE_default149 = {149,0,{0}};
T150 GE_default150 = {150};
T151 GE_default151 = {151,0,{0}};
T152 GE_default152 = {152,0,{0}};
T153 GE_default153 = {153};
T154 GE_default154 = {154,0,{0}};
T155 GE_default155 = {155};
T156 GE_default156 = {156,0,{0}};
T157 GE_default157 = {157};
T159 GE_default159 = {159,0,{0}};
T161 GE_default161 = {161,0,{0}};
T162 GE_default162 = {162};
T163 GE_default163 = {163};
T164 GE_default164 = {164,0,{0}};
T165 GE_default165 = {165};
T166 GE_default166 = {166,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T167 GE_default167 = {167};
T169 GE_default169 = {169};
T170 GE_default170 = {170,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T172 GE_default172 = {172,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T173 GE_default173 = {173,0,0,0,0,0,0,0,0};
T174 GE_default174 = {174,0,{0}};
T175 GE_default175 = {175,0,0,0};
T176 GE_default176 = {176,0};
T177 GE_default177 = {177,0,{0}};
T178 GE_default178 = {178};
T180 GE_default180 = {180,0};
T181 GE_default181 = {181,0};
T182 GE_default182 = {182,0,0};
T183 GE_default183 = {183,0,0,0,0,0,0,0,0};
T185 GE_default185 = {185,0,0,0,0,0};
T186 GE_default186 = {186,0,0,0};
T187 GE_default187 = {187,0,0,0,0};
T188 GE_default188 = {188,0};
T190 GE_default190 = {190,0,0,0,0};
T191 GE_default191 = {191,0,0,0,0,0};
T193 GE_default193 = {193,0,0,0};
T194 GE_default194 = {194};
T195 GE_default195 = {195,0,0,0,0,0,0};
T196 GE_default196 = {196,0,0,0,0};
T197 GE_default197 = {197};
T198 GE_default198 = {198};
T199 GE_default199 = {199,0,0,0,0};
T200 GE_default200 = {200,0,0};
T201 GE_default201 = {201,0,0,0};
T203 GE_default203 = {203,0,0};
T204 GE_default204 = {204,0};
T205 GE_default205 = {205,0};
T206 GE_default206 = {206,0,0,0,0,0,0,0,0,0};
T207 GE_default207 = {207,0,0,0,0,0,0,0,0,0,0,0,0};
T210 GE_default210 = {210,0,0};
T211 GE_default211 = {211,0,0,0};
T212 GE_default212 = {212,0,0};
T213 GE_default213 = {213,0,0};
T214 GE_default214 = {214,0,{0}};
T215 GE_default215 = {215,0,0,0};
T217 GE_default217 = {217,0,0,0};
T219 GE_default219 = {219};
T220 GE_default220 = {220,0};
T221 GE_default221 = {221};
T222 GE_default222 = {222,0,0};
T223 GE_default223 = {223,0,0,0,0};
T224 GE_default224 = {224,0,0,0,0,0};
T225 GE_default225 = {225,0,0,0};
T226 GE_default226 = {226,0,0,0,0,0};
T227 GE_default227 = {227,0,0,0,0,0};
T228 GE_default228 = {228,0,0,0};
T229 GE_default229 = {229,0};
T230 GE_default230 = {230,0};
T231 GE_default231 = {231,0};
T232 GE_default232 = {232,0};
T233 GE_default233 = {233,0};
T234 GE_default234 = {234,0};
T235 GE_default235 = {235,0};
T236 GE_default236 = {236,0};
T237 GE_default237 = {237,0};
T238 GE_default238 = {238,0};
T240 GE_default240 = {240,0,0,0};
T241 GE_default241 = {241,0,0,0,0};
T242 GE_default242 = {242,0};
T243 GE_default243 = {243,0,{0}};
T244 GE_default244 = {244,0};
T245 GE_default245 = {245,0};
T248 GE_default248 = {248};
T250 GE_default250 = {250,0,0,0};
T251 GE_default251 = {251};
T252 GE_default252 = {252,0,{0}};
T253 GE_default253 = {253};
T255 GE_default255 = {255,0,0,0};
T256 GE_default256 = {256};
T257 GE_default257 = {257,0,{0}};
T258 GE_default258 = {258,0,0,0};
T259 GE_default259 = {259,0,0,0};
T260 GE_default260 = {260,0,0,0};
T261 GE_default261 = {261,0,0};
T262 GE_default262 = {262,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T263 GE_default263 = {263,0};
T264 GE_default264 = {264,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T265 GE_default265 = {265,0};
T266 GE_default266 = {266,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T268 GE_default268 = {268,0,0};
T269 GE_default269 = {269,0,0};
T270 GE_default270 = {270,0};
T271 GE_default271 = {271,0,0};
T272 GE_default272 = {272,0,0,0};
T273 GE_default273 = {273,0,0,0,0,0};
T275 GE_default275 = {275,0,0,0,0};
T276 GE_default276 = {276,0,0,0,0,0};
T277 GE_default277 = {277,0,0};
T278 GE_default278 = {278,0,0};
T280 GE_default280 = {280,0,0,0};
T281 GE_default281 = {281,0,0,0};
T282 GE_default282 = {282,0,0,0};
T283 GE_default283 = {283,0,0,0};
T284 GE_default284 = {284,0,0,0};
T285 GE_default285 = {285,0,0,0};
T286 GE_default286 = {286,0,0,0};
T287 GE_default287 = {287,0,0,0};
T288 GE_default288 = {288,0,0,0};
T289 GE_default289 = {289,0,0,0};
T290 GE_default290 = {290,0,0,0};
T291 GE_default291 = {291,0,0,0};
T292 GE_default292 = {292,0,0,0};
T293 GE_default293 = {293,0,0,0};
T294 GE_default294 = {294,0,0,0};
T295 GE_default295 = {295,0,0,0};
T296 GE_default296 = {296,0,0,0};
T297 GE_default297 = {297,0,0,0};
T298 GE_default298 = {298,0,0,0};
T299 GE_default299 = {299,0,0,0};
T300 GE_default300 = {300,0,0,0};
T301 GE_default301 = {301,0,0,0};
T302 GE_default302 = {302,0,0,0};
T303 GE_default303 = {303,0,0,0};
T304 GE_default304 = {304,0,0,0};
T305 GE_default305 = {305,0,0,0};
T306 GE_default306 = {306,0,0,0};
T307 GE_default307 = {307};
T308 GE_default308 = {308,0};
T310 GE_default310 = {310,0,0,0};
T312 GE_default312 = {312,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T313 GE_default313 = {313,0,0};
T314 GE_default314 = {314,0,0,0};
T315 GE_default315 = {315,0,0};
T316 GE_default316 = {316,0,0};
T319 GE_default319 = {319,0,0};
T320 GE_default320 = {320,0,0,0,0,0,0,0};
T325 GE_default325 = {325,0,0};
T326 GE_default326 = {326,0,0};
T327 GE_default327 = {327,0,0};
T328 GE_default328 = {328,0};
T329 GE_default329 = {329};
T330 GE_default330 = {330,0};
T331 GE_default331 = {331,0,{0}};
T332 GE_default332 = {332,0,{0}};
T333 GE_default333 = {333,0,0};
T334 GE_default334 = {334};
T335 GE_default335 = {335,0,0,0};
T337 GE_default337 = {337,0,{0}};
T338 GE_default338 = {338,0,0,0};
T339 GE_default339 = {339};
T340 GE_default340 = {340};
T341 GE_default341 = {341,0,0,0};
T343 GE_default343 = {343,0,{0}};
T344 GE_default344 = {344,0,0,0};
T345 GE_default345 = {345};
T346 GE_default346 = {346};
T347 GE_default347 = {347,0,0,0};
T349 GE_default349 = {349,0,{0}};
T350 GE_default350 = {350,0,0,0};
T351 GE_default351 = {351};
T353 GE_default353 = {353,0,0,0};
T354 GE_default354 = {354,0,0,0,0,0,0,0,0};
T355 GE_default355 = {355,0,0,0,0};
T356 GE_default356 = {356,0,0,0,0,0,0,0,0,0,0,0};
T357 GE_default357 = {357,0,0,0,0,0,0,0,0,0,0};
T358 GE_default358 = {358,0,0,0,0,0,0,0,0};
T359 GE_default359 = {359,0,0,0,0,0,0,0,0,0};
T360 GE_default360 = {360,0,0,0,0,0,0};
T361 GE_default361 = {361,0,0,0};
T362 GE_default362 = {362,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T363 GE_default363 = {363,0,0,0,0};
T364 GE_default364 = {364,0,0,0,0};
T365 GE_default365 = {365,0,0,0};
T366 GE_default366 = {366,0,0,0,0,0,0,0,0,0,0};
T367 GE_default367 = {367,0,0};
T368 GE_default368 = {368,0,0,0,0,0,0,0,0,0,0,0,0,0};
T369 GE_default369 = {369,0,0,0,0,0,0,0,0,0,0};
T370 GE_default370 = {370,0,0,0,0,0,0,0,0,0};
T371 GE_default371 = {371,0,0,0,0,0,0,0,0,0,0,0,0,0};
T372 GE_default372 = {372,0,0,0,0,0,0,0,0,0};
T373 GE_default373 = {373,0,0,0,0};
T374 GE_default374 = {374,0,0,0,0,0};
T375 GE_default375 = {375,0,0,0};
T376 GE_default376 = {376,0,0,0,0,0,0};
T377 GE_default377 = {377,0,0,0};
T378 GE_default378 = {378,0,0,0,0,0,0,0,0,0,0,0,0};
T379 GE_default379 = {379,0,0,0,0,0,0,0};
T380 GE_default380 = {380,0,0,0,0,0,0};
T381 GE_default381 = {381,0,0,0,0};
T382 GE_default382 = {382,0,0,0,0,0,0,0,0,0,0,0,0};
T383 GE_default383 = {383,0,0};
T384 GE_default384 = {384,0,0,0,0,0};
T385 GE_default385 = {385,0,0,0,0,0,0,0,0,0};
T386 GE_default386 = {386,0,0,0};
T387 GE_default387 = {387,0,0,0,0};
T388 GE_default388 = {388,0,0,0,0,0,0};
T389 GE_default389 = {389,0,0,0,0,0,0,0,0};
T390 GE_default390 = {390,0,0,0,0,0,0,0,0,0,0,0};
T391 GE_default391 = {391,0,{0}};
T392 GE_default392 = {392};
T393 GE_default393 = {393,0,0};
T394 GE_default394 = {394};
T395 GE_default395 = {395,0,0};
T396 GE_default396 = {396,0};
T397 GE_default397 = {397,0,0};
T398 GE_default398 = {398,0};
T399 GE_default399 = {399,0,0};
T400 GE_default400 = {400,0};
T405 GE_default405 = {405,0,0,0,0,0};
T406 GE_default406 = {406,0,0,0};
T407 GE_default407 = {407,0,0,0,0,0};
T410 GE_default410 = {410,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T412 GE_default412 = {412,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T414 GE_default414 = {414,0,0,0};
T415 GE_default415 = {415,0,0,0,0,0,0,0,0,0};
T416 GE_default416 = {416,0,0};
T417 GE_default417 = {417};
T418 GE_default418 = {418,0,0,0};
T420 GE_default420 = {420,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T421 GE_default421 = {421,0,0,0,0,0};
T422 GE_default422 = {422,0,{0}};
T423 GE_default423 = {423};
T424 GE_default424 = {424,0};
T425 GE_default425 = {425,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T426 GE_default426 = {426};
T427 GE_default427 = {427,0,0,0,0,0,0,0};
T428 GE_default428 = {428,0};
T432 GE_default432 = {432};
T434 GE_default434 = {434,0,0,0};
T435 GE_default435 = {435,0,{0}};
T436 GE_default436 = {436};
T437 GE_default437 = {437};
T438 GE_default438 = {438,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T439 GE_default439 = {439,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T440 GE_default440 = {440,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T442 GE_default442 = {442,0,0};
T443 GE_default443 = {443};
T444 GE_default444 = {444,0};
T446 GE_default446 = {446,0,0,0,0,0,0};
T447 GE_default447 = {447,0,0};
T448 GE_default448 = {448,0};
T450 GE_default450 = {450,0,{0}};
T451 GE_default451 = {451,0,0,0};
T452 GE_default452 = {452,0};
T453 GE_default453 = {453,0,0,0,0,0,0,0,0};
T454 GE_default454 = {454,0,0,0,0,0};
T455 GE_default455 = {455,0,0,0,0,0,0,0,0,0,0,0,0,0};
T457 GE_default457 = {457,0,0,0};
T458 GE_default458 = {458,0,0};
T459 GE_default459 = {459,0,0,0,0};
T460 GE_default460 = {460,0,0,0,0,0};
T463 GE_default463 = {463,0};
T464 GE_default464 = {464,0,0,0,0,0};
T465 GE_default465 = {465,0,0,0,0,0};
T466 GE_default466 = {466};
T467 GE_default467 = {467,0,0,0};
T468 GE_default468 = {468,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T469 GE_default469 = {469,0,0,0,0,0,0,0,0};
T470 GE_default470 = {470,0,{0}};
T471 GE_default471 = {471};
T472 GE_default472 = {472,0,0};
T473 GE_default473 = {473,0,0};
T474 GE_default474 = {474,0,0,0,0,0,0,0,0,0,0};
T475 GE_default475 = {475,0,{0}};
T476 GE_default476 = {476};
T477 GE_default477 = {477,0};
T478 GE_default478 = {478,0,0,0};
T479 GE_default479 = {479,0};
T480 GE_default480 = {480,0};
T481 GE_default481 = {481,0};
T482 GE_default482 = {482,0};
T483 GE_default483 = {483,0};
T484 GE_default484 = {484,0};
T485 GE_default485 = {485,0};
T486 GE_default486 = {486,0};
T487 GE_default487 = {487,0,{0}};
T488 GE_default488 = {488,0,0,0};
T489 GE_default489 = {489,0,0,0,0,0,0};
T490 GE_default490 = {490,0,0,0,0,0,0};
T491 GE_default491 = {491,0,0,0,0,0};
T492 GE_default492 = {492,0,0,0};
T493 GE_default493 = {493,0,0,0,0,0};
T494 GE_default494 = {494,0,0,0};
T495 GE_default495 = {495,0,0,0,0,0};
T496 GE_default496 = {496,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T497 GE_default497 = {497,0,0,0,0,0};
T498 GE_default498 = {498,0};
T499 GE_default499 = {499};
T501 GE_default501 = {501,0};
T503 GE_default503 = {503};
T504 GE_default504 = {504,0,{0}};
T505 GE_default505 = {505,0};
T506 GE_default506 = {506};
T507 GE_default507 = {507,0,0,0};
T508 GE_default508 = {508,0,{0}};
T509 GE_default509 = {509};
T510 GE_default510 = {510,0,0,0};
T512 GE_default512 = {512,0,0,0};
T514 GE_default514 = {514,0};
T515 GE_default515 = {515,0};
T516 GE_default516 = {516,0,0};
T518 GE_default518 = {518,0};
T520 GE_default520 = {520,0,0};
T521 GE_default521 = {521,0,0,0};
T522 GE_default522 = {522,0,{0}};
T523 GE_default523 = {523,0,0,0};
T525 GE_default525 = {525,0};
T526 GE_default526 = {526,0};
T527 GE_default527 = {527,0};
T529 GE_default529 = {529,0};
T531 GE_default531 = {531,0,{0}};
T533 GE_default533 = {533};
T534 GE_default534 = {534,0,0,0};
T536 GE_default536 = {536,0,{0}};
T537 GE_default537 = {537};
T538 GE_default538 = {538,0};
T539 GE_default539 = {539,0,0,0};
T540 GE_default540 = {540};
T541 GE_default541 = {541,0};
T543 GE_default543 = {543,0,0,0};
T545 GE_default545 = {545,0,0};
T548 GE_default548 = {548};
T551 GE_default551 = {551};
T554 GE_default554 = {554,0};
T555 GE_default555 = {555,0};
T556 GE_default556 = {556,0,0};
T557 GE_default557 = {557,0};
T558 GE_default558 = {558,0};
T559 GE_default559 = {559,0,0};
T560 GE_default560 = {560,0};
T564 GE_default564 = {564};

T0* GE_ms(char* s, T6 c)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T15)+c*sizeof(T2));
	((T0*)(t1))->id = 15;
	((T15*)(t1))->z1 = (c+1);
	memcpy(((T15*)(t1))->z2, s, c);
	R = (T0*)GE_alloc(sizeof(T17));
	((T0*)(R))->id = 17;
	((T17*)(R))->a1 = t1;
	((T17*)(R))->a2 = (T6)c;
	return R;
}

/* Call to STRING_8.to_c */
T0* T17x1216(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=195) {
if (t1==17) {
	return (T17f11(C));
} else {
	return (T195f19(C));
}
} else {
	return (T457f7(C));
}
}

/* Call to STRING_8.area */
T0* T17x1300(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=195) {
if (t1==17) {
	return (((T17*)(C))->a1);
} else {
	return (((T195*)(C))->a2);
}
} else {
	return (((T457*)(C))->a3);
}
}

/* Call to STRING_8.count */
T6 T17x1235(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=195) {
if (t1==17) {
	return (((T17*)(C))->a2);
} else {
	return (((T195*)(C))->a1);
}
} else {
	return (((T457*)(C))->a1);
}
}

/* Call to ANY.is_equal */
T1 T19x29T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=139) {
if (t1==6) {
	return (T6f28(&(((Tb6*)(C))->z1), ((Tb6*)(a1))->z1));
} else {
	return (T139f10(C, a1));
}
} else {
if (t1==316) {
	return (T316f4(C, a1));
} else {
	return (T416f5(C, a1));
}
}
}

/* Call to ANY.same_type */
T1 T19x28T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=139) {
if (t1<=53) {
if (t1<=17) {
if (t1==6) {
	return ((T1)(((T0*)(GE_void(a1)))->id==6));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==17));
}
} else {
	return (EIF_FALSE);
}
} else {
if (t1==54) {
	return ((T1)(((T0*)(GE_void(a1)))->id==54));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==139));
}
}
} else {
if (t1<=416) {
if (t1<=316) {
if (t1==195) {
	return ((T1)(((T0*)(GE_void(a1)))->id==195));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==316));
}
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==416));
}
} else {
if (t1==489) {
	return ((T1)(((T0*)(GE_void(a1)))->id==489));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==490));
}
}
}
}

/* Call to AP_OPTION.short_form */
T2 T42x2565(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a4);
} else {
	return (((T37*)(C))->a5);
}
} else {
	return (((T73*)(C))->a2);
}
}

/* Call to AP_OPTION.long_form */
T0* T42x2560(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a3);
} else {
	return (((T37*)(C))->a7);
}
} else {
	return (((T73*)(C))->a4);
}
}

/* Call to AP_OPTION.has_long_form */
T1 T42x2567(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f10(C));
} else {
	return (T37f12(C));
}
} else {
	return (T73f10(C));
}
}

/* Call to AP_OPTION.example */
T0* T42x2559(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f17(C));
} else {
	return (T37f20(C));
}
} else {
	return (T73f28(C));
}
}

/* Call to AP_OPTION.is_hidden */
T1 T42x2569(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a8);
} else {
	return (((T37*)(C))->a10);
}
} else {
	return (((T73*)(C))->a8);
}
}

/* Call to AP_OPTION.description */
T0* T42x2558(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a2);
} else {
	return (((T37*)(C))->a2);
}
} else {
	return (((T73*)(C))->a1);
}
}

/* Call to AP_OPTION.names */
T0* T42x2562(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f16(C));
} else {
	return (T37f19(C));
}
} else {
	return (T73f23(C));
}
}

/* Call to AP_OPTION.name */
T0* T42x2561(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f15(C));
} else {
	return (T37f11(C));
}
} else {
	return (T73f22(C));
}
}

/* Call to AP_OPTION.needs_parameter */
T1 T42x2571(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f11(C));
} else {
	return (((T37*)(C))->a4);
}
} else {
	return (T73f12(C));
}
}

/* Call to AP_OPTION.has_short_form */
T1 T42x2568(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a5);
} else {
	return (((T37*)(C))->a6);
}
} else {
	return (((T73*)(C))->a3);
}
}

/* Call to AP_OPTION.allows_parameter */
T1 T42x2566(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f12(C));
} else {
	return (T37f17(C));
}
} else {
	return (T73f9(C));
}
}

/* Call to AP_OPTION.maximum_occurrences */
T6 T42x2564(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a7);
} else {
	return (((T37*)(C))->a9);
}
} else {
	return (((T73*)(C))->a7);
}
}

/* Call to AP_OPTION.occurrences */
T6 T42x2563(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a1);
} else {
	return (T37f18(C));
}
} else {
	return (((T73*)(C))->a5);
}
}

/* Call to AP_OPTION.was_found */
T1 T42x2573(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f9(C));
} else {
	return (T37f16(C));
}
} else {
	return (T73f11(C));
}
}

/* Call to AP_OPTION.is_mandatory */
T1 T42x2570(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a6);
} else {
	return (((T37*)(C))->a8);
}
} else {
	return (((T73*)(C))->a6);
}
}

/* Call to UT_ERROR.default_message */
T0* T50x3118(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=482) {
if (t1<=479) {
if (t1<=477) {
if (t1==49) {
	return (T49f2(C));
} else {
	return (T477f5(C));
}
} else {
	return (T479f5(C));
}
} else {
if (t1<=481) {
if (t1==480) {
	return (T480f5(C));
} else {
	return (T481f5(C));
}
} else {
	return (T482f5(C));
}
}
} else {
if (t1<=485) {
if (t1<=484) {
if (t1==483) {
	return (T483f5(C));
} else {
	return (T484f5(C));
}
} else {
	return (T485f5(C));
}
} else {
if (t1==486) {
	return (T486f5(C));
} else {
	return (T501f5(C));
}
}
}
}

/* Call to DS_SPARSE_TABLE [STRING_8, STRING_8].new_cursor */
T0* T62x2056(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f35(C));
} else {
	return (T29f30(C));
}
} else {
if (t1==34) {
	return (T34f30(C));
} else {
	return (T80f40(C));
}
}
}

/* Call to DS_SPARSE_TABLE [STRING_8, STRING_8].key_equality_tester */
T0* T62x1959(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (((T25*)(C))->a1);
} else {
	return (((T29*)(C))->a7);
}
} else {
if (t1==34) {
	return (((T34*)(C))->a7);
} else {
	return (((T80*)(C))->a1);
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_item */
T0* T80x2066T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f52(C, a1));
} else {
	return (T29f44(C, a1));
}
} else {
if (t1==34) {
	return (T34f45(C, a1));
} else {
	return (T80f27(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_key */
T0* T80x1909T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f47(C, a1));
} else {
	return (T29f39(C, a1));
}
} else {
if (t1==34) {
	return (T34f36(C, a1));
} else {
	return (T80f26(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_after */
T1 T80x2050T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f46(C, a1));
} else {
	return (T29f38(C, a1));
}
} else {
if (t1==34) {
	return (T34f35(C, a1));
} else {
	return (T80f25(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].before_position */
T6 T80x2014(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return ((T6)(GE_int32(-1)));
} else {
	return ((T6)(GE_int32(-1)));
}
} else {
if (t1==34) {
	return ((T6)(GE_int32(-1)));
} else {
	return ((T6)(GE_int32(-1)));
}
}
}

/* Call to XM_EIFFEL_SCANNER.start_condition */
T6 T128x6902(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (T128f43(C));
} else {
	return (T166f61(C));
}
} else {
if (t1==170) {
	return (T170f50(C));
} else {
	return (T172f62(C));
}
}
}

/* Call to XM_EIFFEL_SCANNER.is_applicable_encoding */
T1 T128x6777T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (T128f66(C, a1));
} else {
	return (T166f60(C, a1));
}
} else {
if (t1==170) {
	return (T170f48(C, a1));
} else {
	return (T172f61(C, a1));
}
}
}

/* Call to XM_EIFFEL_SCANNER.end_of_file */
T1 T128x6907(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (T128f65(C));
} else {
	return (T166f59(C));
}
} else {
if (t1==170) {
	return (T170f61(C));
} else {
	return (T172f60(C));
}
}
}

/* Call to XM_EIFFEL_SCANNER.last_value */
T0* T128x6788(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (((T128*)(C))->a2);
} else {
	return (((T166*)(C))->a42);
}
} else {
if (t1==170) {
	return (((T170*)(C))->a2);
} else {
	return (((T172*)(C))->a44);
}
}
}

/* Call to XM_EIFFEL_SCANNER.last_token */
T6 T128x6898(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (((T128*)(C))->a1);
} else {
	return (((T166*)(C))->a41);
}
} else {
if (t1==170) {
	return (((T170*)(C))->a1);
} else {
	return (((T172*)(C))->a43);
}
}
}

/* Call to XM_EIFFEL_SCANNER.error_position */
T0* T128x6786(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
	return (T128f63(C));
} else {
	return (T166f56(C));
}
} else {
if (t1==170) {
	return (T170f55(C));
} else {
	return (T172f57(C));
}
}
}

/* Call to XM_NODE.parent */
T0* T192x5866(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=313) {
if (t1<=190) {
if (t1==97) {
	return (((T97*)(C))->a1);
} else {
	return (((T190*)(C))->a4);
}
} else {
	return (((T313*)(C))->a2);
}
} else {
if (t1==314) {
	return (((T314*)(C))->a3);
} else {
	return (((T315*)(C))->a2);
}
}
}

/* Call to GEANT_TASK.exit_code */
T6 T279x8545(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=293) {
if (t1<=286) {
if (t1<=283) {
if (t1<=281) {
if (t1==280) {
	return (T280f4(C));
} else {
	return (T281f4(C));
}
} else {
if (t1==282) {
	return (T282f4(C));
} else {
	return (T283f4(C));
}
}
} else {
if (t1<=285) {
if (t1==284) {
	return (T284f4(C));
} else {
	return (T285f4(C));
}
} else {
	return (T286f4(C));
}
}
} else {
if (t1<=290) {
if (t1<=288) {
if (t1==287) {
	return (T287f4(C));
} else {
	return (T288f4(C));
}
} else {
if (t1==289) {
	return (T289f4(C));
} else {
	return (T290f4(C));
}
}
} else {
if (t1<=292) {
if (t1==291) {
	return (T291f4(C));
} else {
	return (T292f4(C));
}
} else {
	return (T293f4(C));
}
}
}
} else {
if (t1<=300) {
if (t1<=297) {
if (t1<=295) {
if (t1==294) {
	return (T294f4(C));
} else {
	return (T295f4(C));
}
} else {
if (t1==296) {
	return (T296f4(C));
} else {
	return (T297f4(C));
}
}
} else {
if (t1<=299) {
if (t1==298) {
	return (T298f4(C));
} else {
	return (T299f4(C));
}
} else {
	return (T300f4(C));
}
}
} else {
if (t1<=303) {
if (t1<=302) {
if (t1==301) {
	return (T301f4(C));
} else {
	return (T302f4(C));
}
} else {
	return (T303f4(C));
}
} else {
if (t1<=305) {
if (t1==304) {
	return (T304f4(C));
} else {
	return (T305f4(C));
}
} else {
	return (T306f4(C));
}
}
}
}
}

/* Call to GEANT_TASK.is_exit_command */
T1 T279x8546(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=293) {
if (t1<=286) {
if (t1<=283) {
if (t1<=281) {
if (t1==280) {
	return (T280f10(C));
} else {
	return (T281f10(C));
}
} else {
if (t1==282) {
	return (T282f10(C));
} else {
	return (T283f10(C));
}
}
} else {
if (t1<=285) {
if (t1==284) {
	return (T284f10(C));
} else {
	return (T285f10(C));
}
} else {
	return (T286f10(C));
}
}
} else {
if (t1<=290) {
if (t1<=288) {
if (t1==287) {
	return (T287f10(C));
} else {
	return (T288f10(C));
}
} else {
if (t1==289) {
	return (T289f10(C));
} else {
	return (T290f10(C));
}
}
} else {
if (t1<=292) {
if (t1==291) {
	return (T291f10(C));
} else {
	return (T292f10(C));
}
} else {
	return (T293f10(C));
}
}
}
} else {
if (t1<=300) {
if (t1<=297) {
if (t1<=295) {
if (t1==294) {
	return (T294f10(C));
} else {
	return (T295f10(C));
}
} else {
if (t1==296) {
	return (T296f10(C));
} else {
	return (T297f10(C));
}
}
} else {
if (t1<=299) {
if (t1==298) {
	return (T298f10(C));
} else {
	return (T299f10(C));
}
} else {
	return (T300f10(C));
}
}
} else {
if (t1<=303) {
if (t1<=302) {
if (t1==301) {
	return (T301f10(C));
} else {
	return (T302f10(C));
}
} else {
	return (T303f10(C));
}
} else {
if (t1<=305) {
if (t1==304) {
	return (T304f10(C));
} else {
	return (T305f10(C));
}
} else {
	return (T306f10(C));
}
}
}
}
}

/* Call to GEANT_TASK.is_enabled */
T1 T279x2378(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=293) {
if (t1<=286) {
if (t1<=283) {
if (t1<=281) {
if (t1==280) {
	return (T280f7(C));
} else {
	return (T281f7(C));
}
} else {
if (t1==282) {
	return (T282f7(C));
} else {
	return (T283f7(C));
}
}
} else {
if (t1<=285) {
if (t1==284) {
	return (T284f7(C));
} else {
	return (T285f7(C));
}
} else {
	return (T286f7(C));
}
}
} else {
if (t1<=290) {
if (t1<=288) {
if (t1==287) {
	return (T287f7(C));
} else {
	return (T288f7(C));
}
} else {
if (t1==289) {
	return (T289f7(C));
} else {
	return (T290f7(C));
}
}
} else {
if (t1<=292) {
if (t1==291) {
	return (T291f7(C));
} else {
	return (T292f7(C));
}
} else {
	return (T293f7(C));
}
}
}
} else {
if (t1<=300) {
if (t1<=297) {
if (t1<=295) {
if (t1==294) {
	return (T294f7(C));
} else {
	return (T295f7(C));
}
} else {
if (t1==296) {
	return (T296f7(C));
} else {
	return (T297f7(C));
}
}
} else {
if (t1<=299) {
if (t1==298) {
	return (T298f7(C));
} else {
	return (T299f7(C));
}
} else {
	return (T300f7(C));
}
}
} else {
if (t1<=303) {
if (t1<=302) {
if (t1==301) {
	return (T301f7(C));
} else {
	return (T302f7(C));
}
} else {
	return (T303f7(C));
}
} else {
if (t1<=305) {
if (t1==304) {
	return (T304f7(C));
} else {
	return (T305f7(C));
}
} else {
	return (T306f7(C));
}
}
}
}
}

/* Call to GEANT_TASK.is_executable */
T1 T279x8544(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=293) {
if (t1<=286) {
if (t1<=283) {
if (t1<=281) {
if (t1==280) {
	return (T280f5(C));
} else {
	return (T281f5(C));
}
} else {
if (t1==282) {
	return (T282f5(C));
} else {
	return (T283f5(C));
}
}
} else {
if (t1<=285) {
if (t1==284) {
	return (T284f5(C));
} else {
	return (T285f5(C));
}
} else {
	return (T286f5(C));
}
}
} else {
if (t1<=290) {
if (t1<=288) {
if (t1==287) {
	return (T287f5(C));
} else {
	return (T288f5(C));
}
} else {
if (t1==289) {
	return (T289f5(C));
} else {
	return (T290f5(C));
}
}
} else {
if (t1<=292) {
if (t1==291) {
	return (T291f5(C));
} else {
	return (T292f5(C));
}
} else {
	return (T293f5(C));
}
}
}
} else {
if (t1<=300) {
if (t1<=297) {
if (t1<=295) {
if (t1==294) {
	return (T294f5(C));
} else {
	return (T295f5(C));
}
} else {
if (t1==296) {
	return (T296f5(C));
} else {
	return (T297f5(C));
}
}
} else {
if (t1<=299) {
if (t1==298) {
	return (T298f5(C));
} else {
	return (T299f5(C));
}
} else {
	return (T300f5(C));
}
}
} else {
if (t1<=303) {
if (t1<=302) {
if (t1==301) {
	return (T301f5(C));
} else {
	return (T302f5(C));
}
} else {
	return (T303f5(C));
}
} else {
if (t1<=305) {
if (t1==304) {
	return (T304f5(C));
} else {
	return (T305f5(C));
}
} else {
	return (T306f5(C));
}
}
}
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].target */
T0* T517x13301(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=518) {
if (t1==516) {
	return (((T516*)(C))->a2);
} else {
	return (((T518*)(C))->a1);
}
} else {
	return (((T520*)(C))->a2);
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].labeled */
T1 T517x13304T6(T0* C, T6 a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=518) {
if (t1==516) {
	return (T516f3(C, a1));
} else {
	return (T518f2(C, a1));
}
} else {
	return (T520f3(C, a1));
}
}

/* Call to AP_OPTION.record_occurrence */
void T42x2584T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
		T35f25(C, a1);
} else {
		T37f30(C, a1);
}
} else {
		T73f42(C, a1);
}
}

/* Call to AP_OPTION.reset */
void T42x2585(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
		T35f23(C);
} else {
		T37f28(C);
}
} else {
		T73f41(C);
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_forth */
void T80x2052T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
		T25f82(C, a1);
} else {
		T29f69(C, a1);
}
} else {
if (t1==34) {
		T34f70(C, a1);
} else {
		T80f56(C, a1);
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_start */
void T80x2051T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
		T25f81(C, a1);
} else {
		T29f68(C, a1);
}
} else {
if (t1==34) {
		T34f69(C, a1);
} else {
		T80f55(C, a1);
}
}
}

/* Call to XM_CALLBACKS_FILTER.set_next */
void T93x5270T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f11(C, a1);
} else {
		T98f5(C, a1);
}
} else {
		T173f40(C, a1);
}
}

/* Call to XM_CALLBACKS.on_xml_declaration */
void T94x5287T0T0T1(T0* C, T0* a1, T0* a2, T1 a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f23(C, a1, a2, a3);
} else {
		T98f16(C, a1, a2, a3);
}
} else {
if (t1==133) {
		T133f12(C, a1, a2, a3);
} else {
		T173f41(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_attribute */
void T94x5292T0T0T0T0(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f21(C, a1, a2, a3, a4);
} else {
		T98f15(C, a1, a2, a3, a4);
}
} else {
if (t1==133) {
		T133f10(C, a1, a2, a3, a4);
} else {
		T173f34(C, a1, a2, a3, a4);
}
}
}

/* Call to XM_CALLBACKS.on_error */
void T94x5288T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f20(C, a1);
} else {
		T98f14(C, a1);
}
} else {
if (t1==133) {
		T133f11(C, a1);
} else {
		T173f35(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_end_tag */
void T94x5294T0T0T0(T0* C, T0* a1, T0* a2, T0* a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f19(C, a1, a2, a3);
} else {
		T98f13(C, a1, a2, a3);
}
} else {
if (t1==133) {
		T133f8(C, a1, a2, a3);
} else {
		T173f32(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_start_tag_finish */
void T94x5293(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f18(C);
} else {
		T98f12(C);
}
} else {
if (t1==133) {
		T133f7(C);
} else {
		T173f31(C);
}
}
}

/* Call to XM_CALLBACKS.on_start_tag */
void T94x5291T0T0T0(T0* C, T0* a1, T0* a2, T0* a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f17(C, a1, a2, a3);
} else {
		T98f11(C, a1, a2, a3);
}
} else {
if (t1==133) {
		T133f9(C, a1, a2, a3);
} else {
		T173f33(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_content */
void T94x5295T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f16(C, a1);
} else {
		T98f10(C, a1);
}
} else {
if (t1==133) {
		T133f6(C, a1);
} else {
		T173f30(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_processing_instruction */
void T94x5289T0T0(T0* C, T0* a1, T0* a2)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f15(C, a1, a2);
} else {
		T98f9(C, a1, a2);
}
} else {
if (t1==133) {
		T133f5(C, a1, a2);
} else {
		T173f29(C, a1, a2);
}
}
}

/* Call to XM_CALLBACKS.on_comment */
void T94x5290T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f14(C, a1);
} else {
		T98f8(C, a1);
}
} else {
if (t1==133) {
		T133f4(C, a1);
} else {
		T173f28(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_finish */
void T94x5286(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f13(C);
} else {
		T98f7(C);
}
} else {
if (t1==133) {
		T133f3(C);
} else {
		T173f27(C);
}
}
}

/* Call to XM_CALLBACKS.on_start */
void T94x5285(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=98) {
if (t1==95) {
		T95f12(C);
} else {
		T98f6(C);
}
} else {
if (t1==133) {
		T133f2(C);
} else {
		T173f26(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.close_input */
void T128x6773(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f199(C);
} else {
		T166f232(C);
}
} else {
if (t1==170) {
		T170f201(C);
} else {
		T172f236(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_input_from_resolver */
void T128x6772T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f202(C, a1);
} else {
		T166f235(C, a1);
}
} else {
if (t1==170) {
		T170f204(C, a1);
} else {
		T172f239(C, a1);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_encoding */
void T128x6778T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f201(C, a1);
} else {
		T166f234(C, a1);
}
} else {
if (t1==170) {
		T170f203(C, a1);
} else {
		T172f238(C, a1);
}
}
}

/* Call to XM_EIFFEL_SCANNER.push_start_condition_dtd_ignore */
void T128x6769(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f200(C);
} else {
		T166f233(C);
}
} else {
if (t1==170) {
		T170f202(C);
} else {
		T172f237(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.read_token */
void T128x6913(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f198(C);
} else {
		T166f231(C);
}
} else {
if (t1==170) {
		T170f200(C);
} else {
		T172f235(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_input_stream */
void T128x6771T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=166) {
if (t1==128) {
		T128f197(C, a1);
} else {
		T166f230(C, a1);
}
} else {
if (t1==170) {
		T170f199(C, a1);
} else {
		T172f234(C, a1);
}
}
}

/* Call to XM_NODE.process */
void T192x5876T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=313) {
if (t1<=190) {
if (t1==97) {
		T97f36(C, a1);
} else {
		T190f7(C, a1);
}
} else {
		T313f6(C, a1);
}
} else {
if (t1==314) {
		T314f7(C, a1);
} else {
		T315f5(C, a1);
}
}
}

/* Call to XM_NODE.node_set_parent */
void T192x5874T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=313) {
if (t1<=190) {
if (t1==97) {
		T97f31(C, a1);
} else {
		T190f6(C, a1);
}
} else {
		T313f5(C, a1);
}
} else {
if (t1==314) {
		T314f6(C, a1);
} else {
		T315f4(C, a1);
}
}
}

/* Call to GEANT_TASK.execute */
void T279x8548(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=293) {
if (t1<=286) {
if (t1<=283) {
if (t1<=281) {
if (t1==280) {
		T280f36(C);
} else {
		T281f35(C);
}
} else {
if (t1==282) {
		T282f33(C);
} else {
		T283f34(C);
}
}
} else {
if (t1<=285) {
if (t1==284) {
		T284f30(C);
} else {
		T285f24(C);
}
} else {
		T286f24(C);
}
}
} else {
if (t1<=290) {
if (t1<=288) {
if (t1==287) {
		T287f23(C);
} else {
		T288f35(C);
}
} else {
if (t1==289) {
		T289f37(C);
} else {
		T290f34(C);
}
}
} else {
if (t1<=292) {
if (t1==291) {
		T291f34(C);
} else {
		T292f39(C);
}
} else {
		T293f35(C);
}
}
}
} else {
if (t1<=300) {
if (t1<=297) {
if (t1<=295) {
if (t1==294) {
		T294f29(C);
} else {
		T295f23(C);
}
} else {
if (t1==296) {
		T296f26(C);
} else {
		T297f31(C);
}
}
} else {
if (t1<=299) {
if (t1==298) {
		T298f26(C);
} else {
		T299f24(C);
}
} else {
		T300f41(C);
}
}
} else {
if (t1<=303) {
if (t1<=302) {
if (t1==301) {
		T301f28(C);
} else {
		T302f23(C);
}
} else {
		T303f28(C);
}
} else {
if (t1<=305) {
if (t1==304) {
		T304f26(C);
} else {
		T305f32(C);
}
} else {
		T306f31(C);
}
}
}
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].record */
void T517x13305T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=518) {
if (t1==516) {
		T516f5(C, a1);
} else {
		T518f4(C, a1);
}
} else {
		T520f5(C, a1);
}
}

/* GEANT.make */
T0* T21c20(void)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T21));
	*(T21*)C = GE_default21;
	t1 = (T21f10(C));
	T27f5(GE_void(t1), GE_ms("geant", 5));
	((T21*)(C))->a1 = T28c7();
	T21f21(C);
	if (((T21*)(C))->a2) {
		t1 = (T21f9(C));
		T29f46(GE_void(t1), GE_ms("verbose", 7), GE_ms("true", 4));
	}
	l4 = T25c58();
	l3 = T24c4();
	T24f5(GE_void(l3), ((T21*)(C))->a2);
	T24f6(GE_void(l3), ((T21*)(C))->a3);
	T24f7(GE_void(l3), ((T21*)(C))->a4);
	t2 = ((((T21*)(C))->a5)==(EIF_VOID));
	if (t2) {
		((T21*)(C))->a5 = (T21f8(C));
	}
	l2 = T23c9(((T21*)(C))->a5);
	T23f10(GE_void(l2), l4, l3);
	t1 = (((T23*)(GE_void(l2)))->a1);
	l1 = (((T30*)(GE_void(t1)))->a1);
	T22f25(GE_void(l1));
	t2 = ((((T21*)(C))->a6)!=(EIF_VOID));
	if (t2) {
		t3 = (((((T0*)(GE_void(((T21*)(C))->a6)))->id==17)?((T17*)(((T21*)(C))->a6))->a2:((T195*)(((T21*)(C))->a6))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
	}
	if (t2) {
		t1 = (((T22*)(GE_void(l1)))->a1);
		t2 = (T31f24(GE_void(t1), ((T21*)(C))->a6));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (((T22*)(GE_void(l1)))->a2);
			t4 = (((((T0*)(GE_void(((T21*)(C))->a6)))->id==17)?T17f8(((T21*)(C))->a6, GE_ms("\'", 1)):T195f7(((T21*)(C))->a6, GE_ms("\'", 1))));
			t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\' does not contain a target named `", 35),
t4);
			T21f22(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(l1)))->a1);
		l5 = (T31f28(GE_void(t1), ((T21*)(C))->a6));
		t2 = (T26f29(GE_void(l5)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (T26f30(GE_void(l5)));
			t1 = GE_ma33((T6)3,
GE_ms("target: `", 9),
t1,
GE_ms("\' is not exported.", 18));
			T21f22(C, (T6)(GE_int32(1)), t1);
		}
		T22f26(GE_void(l1), ((T21*)(C))->a6);
	}
	if (((T21*)(C))->a7) {
		T22f27(GE_void(l1));
	} else {
		l5 = (T22f19(GE_void(l1)));
		t1 = (T21f11(C));
		T22f28(GE_void(l1), t1);
	}
	t2 = (((T22*)(GE_void(l1)))->a3);
	t2 = ((T1)(!(t2)));
	if (t2) {
		T21f22(C, (T6)(GE_int32(1)), EIF_VOID);
	}
	return C;
}

/* GEANT_PROJECT.build */
void T22f28(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = GE_ma33((T6)1,
GE_ms("Building Project", 16));
	T22f24(C, t1);
	l1 = (T22f19(C));
	T22f38(C, l1, a1);
}

/* GEANT_PROJECT.build_target */
void T22f38(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	t1 = (T22f18(C));
	T101f9(GE_void(t1), a2);
	l1 = T187c8((T6)(GE_int32(10)));
	T187f9(GE_void(l1), a1);
	T22f39(C, l1);
	l2 = T34c46();
	t1 = (T22f18(C));
	T101f9(GE_void(t1), l2);
	t2 = (((T187*)(GE_void(l1)))->a1);
	t3 = ((t2)==((T6)(GE_int32(1))));
	while (!(t3)) {
		t1 = (T187f5(GE_void(l1)));
		T22f40(C, t1, l2, EIF_FALSE, EIF_TRUE);
		T187f10(GE_void(l1));
		t2 = (((T187*)(GE_void(l1)))->a1);
		t3 = ((t2)==((T6)(GE_int32(1))));
	}
	t1 = (T22f18(C));
	T101f10(GE_void(t1));
	T22f40(C, a1, a2, EIF_TRUE, EIF_TRUE);
	t1 = (T22f18(C));
	T101f10(GE_void(t1));
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].remove */
void T101f10(T0* C)
{
	T0* l1 = 0;
	((T177*)(GE_void(((T101*)(C))->a2)))->z2[((T101*)(C))->a1] = (l1);
	((T101*)(C))->a1 = ((T6)((((T101*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* DS_ARRAYED_STACK [GEANT_TARGET].remove */
void T187f10(T0* C)
{
	T0* l1 = 0;
	((T120*)(GE_void(((T187*)(C))->a2)))->z2[((T187*)(C))->a1] = (l1);
	((T187*)(C))->a1 = ((T6)((((T187*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* GEANT_PROJECT.execute_target */
void T22f40(T0* C, T0* a1, T0* a2, T1 a3, T1 a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (T26f30(GE_void(a1)));
	t1 = GE_ma33((T6)5,
GE_ms("project \'", 9),
((T22*)(C))->a2,
GE_ms("\': excuting target `", 20),
t1,
GE_ms("\'", 1));
	T22f31(C, t1);
	l1 = ((T22*)(C))->a13;
	if (!(a3)) {
		t3 = (((T26*)(GE_void(a1)))->a9);
		t2 = ((T1)(!(t3)));
	} else {
		t2 = EIF_TRUE;
	}
	if (t2) {
		if (a4) {
			l2 = (T26f32(GE_void(a1)));
		} else {
			l2 = a1;
		}
		((T22*)(C))->a13 = l2;
		t1 = (((T26*)(GE_void(l2)))->a4);
		t2 = ((t1)!=(C));
		if (t2) {
			t1 = (((T26*)(GE_void(l2)))->a4);
			T22f40(GE_void(t1), l2, a2, a3, a4);
		} else {
			t1 = (T22f18(C));
			T101f9(GE_void(t1), a2);
			T26f90(GE_void(l2));
			t1 = (T22f18(C));
			T101f10(GE_void(t1));
		}
	}
	((T22*)(C))->a13 = l1;
}

/* GEANT_TARGET.execute */
void T26f90(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	T1 t4;
	T0* t5;
	t1 = ((T1)(!(((T26*)(C))->a8)));
	if (!(t1)) {
		t1 = ((T1)(!(((T26*)(C))->a9)));
	}
	if (t1) {
		t1 = (T26f42(C));
		if (t1) {
			t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a9);
			t1 = (((T24*)(GE_void(t2)))->a1);
			if (t1) {
				t2 = GE_ma33((T6)1,
GE_ms("", 0));
				T22f24(GE_void(((T26*)(C))->a4), t2);
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
				t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
				t2 = GE_ma33((T6)4,
t2,
GE_ms(".", 1),
t3,
GE_ms(":", 1));
				T22f24(GE_void(((T26*)(C))->a4), t2);
				t2 = GE_ma33((T6)1,
GE_ms("", 0));
				T22f24(GE_void(((T26*)(C))->a4), t2);
			}
			t1 = ((((T26*)(C))->a5)!=(EIF_VOID));
			if (t1) {
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
				t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
				t2 = GE_ma33((T6)6,
GE_ms("target `", 8),
t2,
GE_ms(".", 1),
t3,
GE_ms("\' is obsolete. ", 15),
((T26*)(C))->a5);
				T22f41(GE_void(((T26*)(C))->a4), t2);
			}
			t2 = (T26f43(C));
			t1 = (T97f20(GE_void(((T26*)(C))->a2), t2));
			if (t1) {
				l5 = T244c7();
				t2 = (T26f28(C));
				t3 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
				T58f17(GE_void(t2), t3);
				t2 = (T26f28(C));
				T244f8(GE_void(l5), t2);
				t2 = (T26f43(C));
				t2 = (T97f21(GE_void(((T26*)(C))->a2), t2));
				t2 = (((T190*)(GE_void(t2)))->a3);
				t2 = (((((T0*)(GE_void(t2)))->id==17)?T17f4(t2):T195f16(t2)));
				l3 = (T244f5(GE_void(l5), t2));
				t2 = GE_ma33((T6)3,
GE_ms("changing to directory: \'", 24),
l3,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
				t2 = (T26f44(C));
				l2 = (((((T0*)(GE_void(t2)))->id==53)?T53f26(t2):T54f23(t2)));
				t2 = (T26f44(C));
				t1 = (((((T0*)(GE_void(t2)))->id==53)?T53f27(t2, l3):T54f24(t2, l3)));
				t1 = ((T1)(!(t1)));
				if (t1) {
					t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
					t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
					t2 = GE_ma33((T6)7,
GE_ms("target `", 8),
t2,
GE_ms(".", 1),
t3,
GE_ms("\': directory \'", 14),
l3,
GE_ms("\' does not exist", 16));
					T26f81(C, (T6)(GE_int32(1)), t2);
				}
				t2 = (T26f44(C));
				if (((T0*)(GE_void(t2)))->id==53) {
					T53f37(t2, l3);
				} else {
					T54f33(t2, l3);
				}
				t2 = (T26f44(C));
				t2 = (((((T0*)(GE_void(t2)))->id==53)?T53f26(t2):T54f23(t2)));
				t2 = GE_ma33((T6)3,
GE_ms("current working directory: \'", 28),
t2,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
			}
			t2 = (T26f27(C));
			l6 = (T101f5(GE_void(t2)));
			t2 = (T26f27(C));
			T101f10(GE_void(t2));
			l6 = (T26f45(C, l6));
			t2 = (T26f27(C));
			T101f9(GE_void(t2), l6);
			l4 = (T97f19(GE_void(((T26*)(C))->a2)));
			T191f10(GE_void(l4));
			t1 = (((T191*)(GE_void(l4)))->a1);
			if (!(t1)) {
				t4 = (T26f42(C));
				t1 = ((T1)(!(t4)));
			}
			while (!(t1)) {
				t2 = (T191f8(GE_void(l4)));
				if ((t2)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(t2))->id) {
					case 97:
						l1 = t2;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					t2 = (T26f24(C));
					t3 = (((T97*)(GE_void(l1)))->a3);
					t5 = (T26f19(C));
					t1 = (T76f1(GE_void(t2), t3, t5));
					t1 = ((T1)(!(t1)));
					if (t1) {
						t2 = (T26f24(C));
						t3 = (((T97*)(GE_void(l1)))->a3);
						t5 = (T26f14(C));
						t4 = (T76f1(GE_void(t2), t3, t5));
						t1 = ((T1)(!(t4)));
					}
					if (t1) {
						t2 = (T26f24(C));
						t3 = (((T97*)(GE_void(l1)))->a3);
						t5 = (T26f16(C));
						t4 = (T76f1(GE_void(t2), t3, t5));
						t1 = ((T1)(!(t4)));
					}
					if (t1) {
						T26f94(C, l1);
					}
				}
				T191f11(GE_void(l4));
				t1 = (((T191*)(GE_void(l4)))->a1);
				if (!(t1)) {
					t4 = (T26f42(C));
					t1 = ((T1)(!(t4)));
				}
			}
			t2 = (T26f43(C));
			t1 = (T26f35(C, t2));
			if (t1) {
				t2 = GE_ma33((T6)3,
GE_ms("changing to directory: \'", 24),
l2,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
				t2 = (T26f44(C));
				if (((T0*)(GE_void(t2)))->id==53) {
					T53f37(t2, l2);
				} else {
					T54f33(t2, l2);
				}
			}
			T26f95(C, EIF_TRUE);
		}
	}
}

/* GEANT_TARGET.set_executed */
void T26f95(T0* C, T1 a1)
{
	((T26*)(C))->a9 = a1;
}

/* GEANT_TARGET.has_attribute */
T1 T26f35(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T26*)(C))->a2), a1));
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].forth */
void T191f11(T0* C)
{
	if (((T0*)(GE_void(((T191*)(C))->a3)))->id==97) {
		T97f38(((T191*)(C))->a3, C);
	} else {
		T96f24(((T191*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_forth */
void T96f24(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T191*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T96*)(C))->a3;
	} else {
		t2 = (((T191*)(a1))->a2);
		l3 = (((T319*)(GE_void(t2)))->a1);
	}
	l2 = ((l3)==(EIF_VOID));
	T191f14(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T96f29(C, a1);
		}
	} else {
		if (l1) {
			T96f28(C, a1);
		}
	}
}

/* XM_DOCUMENT.add_traversing_cursor */
void T96f28(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T96*)(C))->a2));
	if (t1) {
		t2 = (((T191*)(GE_void(((T96*)(C))->a2)))->a5);
		T191f16(a1, t2);
		T191f16(GE_void(((T96*)(C))->a2), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set_next_cursor */
void T191f16(T0* C, T0* a1)
{
	((T191*)(C))->a5 = a1;
}

/* XM_DOCUMENT.remove_traversing_cursor */
void T96f29(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T96*)(C))->a2));
	if (t1) {
		l2 = ((T96*)(C))->a2;
		l1 = (((T191*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T191*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T191*)(a1))->a5);
			T191f16(GE_void(l2), t2);
			T191f16(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set */
void T191f14(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T191*)(C))->a2 = a1;
	((T191*)(C))->a4 = a2;
	((T191*)(C))->a1 = a3;
}

/* XM_ELEMENT.cursor_forth */
void T97f38(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T191*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T97*)(C))->a5;
	} else {
		t2 = (((T191*)(a1))->a2);
		l3 = (((T319*)(GE_void(t2)))->a1);
	}
	l2 = ((l3)==(EIF_VOID));
	T191f14(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T97f42(C, a1);
		}
	} else {
		if (l1) {
			T97f41(C, a1);
		}
	}
}

/* XM_ELEMENT.add_traversing_cursor */
void T97f41(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T97*)(C))->a4));
	if (t1) {
		t2 = (((T191*)(GE_void(((T97*)(C))->a4)))->a5);
		T191f16(a1, t2);
		T191f16(GE_void(((T97*)(C))->a4), a1);
	}
}

/* XM_ELEMENT.remove_traversing_cursor */
void T97f42(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T97*)(C))->a4));
	if (t1) {
		l2 = ((T97*)(C))->a4;
		l1 = (((T191*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T191*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T191*)(a1))->a5);
			T191f16(GE_void(l2), t2);
			T191f16(a1, EIF_VOID);
		}
	}
}

/* GEANT_TARGET.execute_task */
void T26f94(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T0* t3;
	T1 t4;
	T6 t5;
	t1 = (T26f24(C));
	t2 = (((T97*)(GE_void(a1)))->a3);
	t3 = (T26f46(C));
	t4 = (T76f1(GE_void(t1), t2, t3));
	if (t4) {
		l1 = T280c35(((T26*)(C))->a4, a1);
	} else {
		t1 = (T26f24(C));
		t2 = (((T97*)(GE_void(a1)))->a3);
		t3 = (T26f47(C));
		t4 = (T76f1(GE_void(t1), t2, t3));
		if (t4) {
			l1 = T281c34(((T26*)(C))->a4, a1);
		} else {
			t1 = (T26f24(C));
			t2 = (((T97*)(GE_void(a1)))->a3);
			t3 = (T26f48(C));
			t4 = (T76f1(GE_void(t1), t2, t3));
			if (t4) {
				l1 = T282c32(((T26*)(C))->a4, a1);
			} else {
				t1 = (T26f24(C));
				t2 = (((T97*)(GE_void(a1)))->a3);
				t3 = (T26f49(C));
				t4 = (T76f1(GE_void(t1), t2, t3));
				if (t4) {
					l1 = T283c33(((T26*)(C))->a4, a1);
				} else {
					t1 = (T26f24(C));
					t2 = (((T97*)(GE_void(a1)))->a3);
					t3 = (T26f50(C));
					t4 = (T76f1(GE_void(t1), t2, t3));
					if (t4) {
						l1 = T284c29(((T26*)(C))->a4, a1);
					} else {
						t1 = (T26f24(C));
						t2 = (((T97*)(GE_void(a1)))->a3);
						t3 = (T26f51(C));
						t4 = (T76f1(GE_void(t1), t2, t3));
						if (t4) {
							l1 = T285c23(((T26*)(C))->a4, a1);
						} else {
							t1 = (T26f24(C));
							t2 = (((T97*)(GE_void(a1)))->a3);
							t3 = (T26f52(C));
							t4 = (T76f1(GE_void(t1), t2, t3));
							if (t4) {
								l1 = T286c23(((T26*)(C))->a4, a1);
							} else {
								t1 = (T26f24(C));
								t2 = (((T97*)(GE_void(a1)))->a3);
								t3 = (T26f53(C));
								t4 = (T76f1(GE_void(t1), t2, t3));
								if (t4) {
									l1 = T287c22(((T26*)(C))->a4, a1);
								} else {
									t1 = (T26f24(C));
									t2 = (((T97*)(GE_void(a1)))->a3);
									t3 = (T26f54(C));
									t4 = (T76f1(GE_void(t1), t2, t3));
									if (t4) {
										l1 = T288c34(((T26*)(C))->a4, a1);
									} else {
										t1 = (T26f24(C));
										t2 = (((T97*)(GE_void(a1)))->a3);
										t3 = (T26f55(C));
										t4 = (T76f1(GE_void(t1), t2, t3));
										if (t4) {
											l1 = T289c36(((T26*)(C))->a4, a1);
										} else {
											t1 = (T26f24(C));
											t2 = (((T97*)(GE_void(a1)))->a3);
											t3 = (T26f56(C));
											t4 = (T76f1(GE_void(t1), t2, t3));
											if (t4) {
												l1 = T290c33(((T26*)(C))->a4, a1);
											} else {
												t1 = (T26f24(C));
												t2 = (((T97*)(GE_void(a1)))->a3);
												t3 = (T26f57(C));
												t4 = (T76f1(GE_void(t1), t2, t3));
												if (t4) {
													l1 = T291c33(((T26*)(C))->a4, a1);
												} else {
													t1 = (T26f24(C));
													t2 = (((T97*)(GE_void(a1)))->a3);
													t3 = (T26f58(C));
													t4 = (T76f1(GE_void(t1), t2, t3));
													if (t4) {
														l1 = T292c38(((T26*)(C))->a4, a1);
													} else {
														t1 = (T26f24(C));
														t2 = (((T97*)(GE_void(a1)))->a3);
														t3 = (T26f59(C));
														t4 = (T76f1(GE_void(t1), t2, t3));
														if (t4) {
															l1 = T293c34(((T26*)(C))->a4, a1);
														} else {
															t1 = (T26f24(C));
															t2 = (((T97*)(GE_void(a1)))->a3);
															t3 = (T26f60(C));
															t4 = (T76f1(GE_void(t1), t2, t3));
															if (t4) {
																l1 = T294c28(((T26*)(C))->a4, a1);
															} else {
																t1 = (T26f24(C));
																t2 = (((T97*)(GE_void(a1)))->a3);
																t3 = (T26f61(C));
																t4 = (T76f1(GE_void(t1), t2, t3));
																if (t4) {
																	l1 = T295c22(((T26*)(C))->a4, a1);
																} else {
																	t1 = (T26f24(C));
																	t2 = (((T97*)(GE_void(a1)))->a3);
																	t3 = (T26f62(C));
																	t4 = (T76f1(GE_void(t1), t2, t3));
																	if (t4) {
																		l1 = T296c25(((T26*)(C))->a4, a1);
																	} else {
																		t1 = (T26f24(C));
																		t2 = (((T97*)(GE_void(a1)))->a3);
																		t3 = (T26f63(C));
																		t4 = (T76f1(GE_void(t1), t2, t3));
																		if (t4) {
																			l1 = T297c30(((T26*)(C))->a4, a1);
																		} else {
																			t1 = (T26f24(C));
																			t2 = (((T97*)(GE_void(a1)))->a3);
																			t3 = (T26f64(C));
																			t4 = (T76f1(GE_void(t1), t2, t3));
																			if (t4) {
																				l1 = T298c25(((T26*)(C))->a4, a1);
																			} else {
																				t1 = (T26f24(C));
																				t2 = (((T97*)(GE_void(a1)))->a3);
																				t3 = (T26f65(C));
																				t4 = (T76f1(GE_void(t1), t2, t3));
																				if (t4) {
																					l1 = T299c23(((T26*)(C))->a4, a1);
																				} else {
																					t1 = (T26f24(C));
																					t2 = (((T97*)(GE_void(a1)))->a3);
																					t3 = (T26f66(C));
																					t4 = (T76f1(GE_void(t1), t2, t3));
																					if (t4) {
																						l1 = T300c40(((T26*)(C))->a4, a1);
																					} else {
																						t1 = (T26f24(C));
																						t2 = (((T97*)(GE_void(a1)))->a3);
																						t3 = (T26f67(C));
																						t4 = (T76f1(GE_void(t1), t2, t3));
																						if (t4) {
																							l1 = T301c27(((T26*)(C))->a4, a1);
																						} else {
																							t1 = (T26f24(C));
																							t2 = (((T97*)(GE_void(a1)))->a3);
																							t3 = (T26f68(C));
																							t4 = (T76f1(GE_void(t1), t2, t3));
																							if (t4) {
																								l1 = T302c22(((T26*)(C))->a4, a1);
																							} else {
																								t1 = (T26f24(C));
																								t2 = (((T97*)(GE_void(a1)))->a3);
																								t3 = (T26f69(C));
																								t4 = (T76f1(GE_void(t1), t2, t3));
																								if (t4) {
																									l1 = T303c27(((T26*)(C))->a4, a1);
																								} else {
																									t1 = (T26f24(C));
																									t2 = (((T97*)(GE_void(a1)))->a3);
																									t3 = (T26f70(C));
																									t4 = (T76f1(GE_void(t1), t2, t3));
																									if (t4) {
																										l1 = T304c25(((T26*)(C))->a4, a1);
																									} else {
																										t1 = (T26f24(C));
																										t2 = (((T97*)(GE_void(a1)))->a3);
																										t3 = (T26f71(C));
																										t4 = (T76f1(GE_void(t1), t2, t3));
																										if (t4) {
																											l1 = T305c31(((T26*)(C))->a4, a1);
																										} else {
																											t1 = (T26f24(C));
																											t2 = (((T97*)(GE_void(a1)))->a3);
																											t3 = (T26f72(C));
																											t4 = (T76f1(GE_void(t1), t2, t3));
																											if (t4) {
																												l1 = T306c30(((T26*)(C))->a4, a1);
																											} else {
																												l1 = EIF_VOID;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	t4 = ((l1)==(EIF_VOID));
	if (t4) {
		t1 = (((T97*)(GE_void(a1)))->a3);
		t1 = GE_ma33((T6)2,
GE_ms("unknown task : ", 15),
t1);
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t4 = (T279x8544(GE_void(l1)));
	t4 = ((T1)(!(t4)));
	if (t4) {
		t1 = (((T97*)(GE_void(a1)))->a3);
		t1 = GE_ma33((T6)2,
GE_ms("cannot execute task : ", 22),
t1);
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t4 = (T279x2378(GE_void(l1)));
	if (t4) {
		T279x8548(GE_void(l1));
		t4 = (T279x8546(GE_void(l1)));
		if (!(t4)) {
			t5 = (T279x8545(GE_void(l1)));
			t4 = ((t5)!=((T6)(GE_int32(0))));
		}
		if (t4) {
			t5 = (T279x8545(GE_void(l1)));
			T26f81(C, t5, EIF_VOID);
		}
	} else {
		t1 = GE_ma33((T6)1,
GE_ms("task is disabled", 16));
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
}

/* GEANT_REPLACE_TASK.make */
T0* T306c30(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T306));
	*(T306*)C = GE_default306;
	((T306*)(C))->a1 = T390c28(a1);
	T306f32(C, ((T306*)(C))->a1, a2);
	t1 = (T306f12(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f12(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f29(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f14(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f14(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f30(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f15(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f15(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f31(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f16(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f16(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f32(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f17(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f17(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f33(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f18(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f18(C));
		t1 = (T97f21(GE_void(((T306*)(C))->a3), t1));
		l1 = (((T190*)(GE_void(t1)))->a3);
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f34(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f19(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f19(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f35(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f20(C));
	t2 = (T306f9(C, t1));
	if (t2) {
		t1 = (T306f20(C));
		l1 = (T306f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T390f36(GE_void(((T306*)(C))->a1), l1);
		}
	}
	t1 = (T306f21(C));
	l2 = (T97f16(GE_void(((T306*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T306*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T390f37(GE_void(((T306*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_REPLACE_COMMAND.set_fileset */
void T390f37(T0* C, T0* a1)
{
	((T390*)(C))->a5 = a1;
}

/* GEANT_FILESET_ELEMENT.make */
T0* T361c29(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T361));
	*(T361*)C = GE_default361;
	T361f29p1(C, a1, a2);
	t1 = (T361f7(C));
	t2 = (T361f20(C, t1));
	if (!(t2)) {
		t1 = (T361f4(C));
		t2 = (T361f20(C, t1));
	}
	if (t2) {
		t1 = (T361f5(C));
		t3 = (T361f20(C, t1));
		if (!(t3)) {
			t1 = (T361f6(C));
			t2 = (T361f20(C, t1));
		} else {
			t2 = EIF_TRUE;
		}
	}
	if (t2) {
		t1 = (((T22*)(GE_void(((T361*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)5,
GE_ms("\nLOAD ERROR in project \'", 24),
t1,
GE_ms("\':\n", 3),
GE_ms("  Remove obsolete format of element \'fileset\'.", 46),
GE_ms(" Use new format of element \'fileset\' as described in the documentation.", 71));
		T361f30(C, (T6)(GE_int32(1)), t1);
	}
	((T361*)(C))->a1 = T362c33(((T361*)(C))->a2);
	t1 = (T361f8(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f8(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f38(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f4(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T361*)(C))->a2)))->a2);
		t5 = (T361f4(C));
		t1 = GE_ma33((T6)6,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete attribute \'", 32),
t5,
GE_ms("\' in element \'fileset\' found.\n", 30),
GE_ms("Use new format of element \'fileset\' as described in the documentation.", 70));
		T22f24(GE_void(((T361*)(C))->a2), t1);
		t1 = (T361f4(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f39(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f10(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f10(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f40(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f11(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f11(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f41(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f12(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f12(C));
		t2 = (T361f13(C, t1));
		T362f42(GE_void(((T361*)(C))->a1), t2);
	}
	t1 = (T361f7(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T361*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete attribute \'concat\' in element \'fileset\' found.\n", 68),
GE_ms("Use new format of element \'fileset\' as described in the documentation.", 70));
		T22f24(GE_void(((T361*)(C))->a2), t1);
		t1 = (T361f7(C));
		t2 = (T361f13(C, t1));
		T362f43(GE_void(((T361*)(C))->a1), t2);
	}
	t1 = (T361f14(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f14(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f44(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f15(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f15(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f45(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f5(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f5(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f46(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f6(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f6(C));
		l1 = (T361f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T362f47(GE_void(((T361*)(C))->a1), l1);
		}
	}
	t1 = (T361f16(C));
	t2 = (T361f20(C, t1));
	if (t2) {
		t1 = (T361f16(C));
		l1 = (T361f9(C, t1));
		t1 = (T361f16(C));
		t2 = (T361f13(C, t1));
		T362f34(GE_void(((T361*)(C))->a1), t2);
	}
	t1 = (T361f17(C));
	l4 = (T361f18(C, t1));
	l5 = (T116f5(GE_void(l4)));
	T117f8(GE_void(l5));
	t2 = (((T117*)(GE_void(l5)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l5)));
		l6 = T367c16(((T361*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l6)));
		if (t2) {
			t2 = (T367f10(GE_void(l6)));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l6)));
			t4 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l6)));
			T362f48(GE_void(((T361*)(C))->a1), t1);
		}
		T117f9(GE_void(l5));
		t2 = (((T117*)(GE_void(l5)))->a1);
	}
	t1 = (T361f19(C));
	l4 = (T361f18(C, t1));
	l5 = (T116f5(GE_void(l4)));
	T117f8(GE_void(l5));
	t2 = (((T117*)(GE_void(l5)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l5)));
		l6 = T367c16(((T361*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l6)));
		if (t2) {
			t2 = (T367f10(GE_void(l6)));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l6)));
			t4 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l6)));
			T362f49(GE_void(((T361*)(C))->a1), t1);
		}
		T117f9(GE_void(l5));
		t2 = (((T117*)(GE_void(l5)))->a1);
	}
	t1 = (T361f21(C));
	l2 = (T97f16(GE_void(((T361*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T406c12(((T361*)(C))->a2, l2);
		t1 = (((T406*)(GE_void(l3)))->a1);
		T362f50(GE_void(((T361*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_FILESET.set_map */
void T362f50(T0* C, T0* a1)
{
	((T362*)(C))->a5 = a1;
}

/* GEANT_MAP_ELEMENT.make */
T0* T406c12(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T406));
	*(T406*)C = GE_default406;
	T406f12p1(C, a1, a2);
	((T406*)(C))->a1 = T407c17(((T406*)(C))->a2);
	t1 = (T406f8(C));
	t2 = (T406f4(C, t1));
	if (t2) {
		t1 = (T406f8(C));
		l1 = (T406f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T407f18(GE_void(((T406*)(C))->a1), l1);
		}
	}
	t1 = (T406f6(C));
	t2 = (T406f4(C, t1));
	if (t2) {
		t1 = (T406f6(C));
		l1 = (T406f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T407f19(GE_void(((T406*)(C))->a1), l1);
		}
	}
	t1 = (T406f7(C));
	t2 = (T406f4(C, t1));
	if (t2) {
		t1 = (T406f7(C));
		l1 = (T406f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T407f20(GE_void(((T406*)(C))->a1), l1);
		}
	}
	t1 = (T406f9(C));
	l2 = (T97f16(GE_void(((T406*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T406c12(((T406*)(C))->a2, l2);
		t1 = (((T406*)(GE_void(l3)))->a1);
		T407f21(GE_void(((T406*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_MAP.set_map */
void T407f21(T0* C, T0* a1)
{
	((T407*)(C))->a5 = a1;
}

/* GEANT_MAP_ELEMENT.map_element_name */
unsigned char ge138os9679 = '\0';
T0* ge138ov9679;
T0* T406f9(T0* C)
{
	T0* R = 0;
	if (ge138os9679) {
		return ge138ov9679;
	} else {
		ge138os9679 = '\1';
		ge138ov9679 = R;
	}
	R = GE_ms("map", 3);
	ge138ov9679 = R;
	return R;
}

/* GEANT_MAP.set_target_pattern */
void T407f20(T0* C, T0* a1)
{
	((T407*)(C))->a4 = a1;
}

/* GEANT_MAP_ELEMENT.to_attribute_name */
unsigned char ge138os9678 = '\0';
T0* ge138ov9678;
T0* T406f7(T0* C)
{
	T0* R = 0;
	if (ge138os9678) {
		return ge138ov9678;
	} else {
		ge138os9678 = '\1';
		ge138ov9678 = R;
	}
	R = GE_ms("to", 2);
	ge138ov9678 = R;
	return R;
}

/* GEANT_MAP.set_source_pattern */
void T407f19(T0* C, T0* a1)
{
	((T407*)(C))->a3 = a1;
}

/* GEANT_MAP_ELEMENT.from_attribute_name */
unsigned char ge138os9677 = '\0';
T0* ge138ov9677;
T0* T406f6(T0* C)
{
	T0* R = 0;
	if (ge138os9677) {
		return ge138ov9677;
	} else {
		ge138os9677 = '\1';
		ge138ov9677 = R;
	}
	R = GE_ms("from", 4);
	ge138ov9677 = R;
	return R;
}

/* GEANT_MAP.set_type */
void T407f18(T0* C, T0* a1)
{
	((T407*)(C))->a1 = a1;
}

/* GEANT_MAP_ELEMENT.attribute_value */
T0* T406f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T406*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T406f10(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T406f10(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T406f11(C));
		t4 = (((T22*)(GE_void(((T406*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T406f11(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MAP_ELEMENT.project_variables_resolver */
unsigned char ge61os1712 = '\0';
T0* ge61ov1712;
T0* T406f11(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.make */
T0* T58c16(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T58));
	*(T58*)C = GE_default58;
	return C;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.set_variables */
void T245f5(T0* C, T0* a1)
{
	((T245*)(C))->a1 = a1;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.make */
T0* T245c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T245));
	*(T245*)C = GE_default245;
	return C;
}

/* GEANT_MAP_ELEMENT.target_arguments_stack */
unsigned char ge61os1713 = '\0';
T0* ge61ov1713;
T0* T406f10(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].make */
T0* T101c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T101));
	*(T101*)C = GE_default101;
	((T101*)(C))->a3 = T178c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T101*)(C))->a2 = (T178f1(GE_void(((T101*)(C))->a3), t1));
	((T101*)(C))->a4 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].make */
T0* T178f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T242c2(a1);
	R = (((T242*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_ARGUMENT_VARIABLES].make_area */
T0* T242c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T242));
	*(T242*)C = GE_default242;
	((T242*)(C))->a1 = T177c4(a1);
	return C;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].make */
T0* T177c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T177)+a1*sizeof(T0*));
	*(T177*)C = GE_default177;
	((T177*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].default_create */
T0* T178c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T178));
	*(T178*)C = GE_default178;
	return C;
}

/* GEANT_MAP_ELEMENT.has_attribute */
T1 T406f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T406*)(C))->a3), a1));
	return R;
}

/* GEANT_MAP_ELEMENT.type_attribute_name */
unsigned char ge138os9676 = '\0';
T0* ge138ov9676;
T0* T406f8(T0* C)
{
	T0* R = 0;
	if (ge138os9676) {
		return ge138ov9676;
	} else {
		ge138os9676 = '\1';
		ge138ov9676 = R;
	}
	R = GE_ms("type", 4);
	ge138ov9676 = R;
	return R;
}

/* GEANT_MAP.make */
T0* T407c17(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T407));
	*(T407*)C = GE_default407;
	((T407*)(C))->a2 = a1;
	t1 = (T407f13(C));
	T407f18(C, t1);
	return C;
}

/* GEANT_MAP.type_attribute_value_identity */
unsigned char ge137os9692 = '\0';
T0* ge137ov9692;
T0* T407f13(T0* C)
{
	T0* R = 0;
	if (ge137os9692) {
		return ge137ov9692;
	} else {
		ge137os9692 = '\1';
		ge137ov9692 = R;
	}
	R = GE_ms("identity", 8);
	ge137ov9692 = R;
	return R;
}

/* GEANT_MAP_ELEMENT.make */
void T406f12p1(T0* C, T0* a1, T0* a2)
{
	T406f13(C, a2);
	T406f14(C, a1);
}

/* GEANT_MAP_ELEMENT.set_project */
void T406f14(T0* C, T0* a1)
{
	((T406*)(C))->a2 = a1;
}

/* GEANT_MAP_ELEMENT.element_make */
void T406f13(T0* C, T0* a1)
{
	T406f15(C, a1);
}

/* GEANT_MAP_ELEMENT.set_xml_element */
void T406f15(T0* C, T0* a1)
{
	((T406*)(C))->a3 = a1;
}

/* GEANT_FILESET_ELEMENT.map_element_name */
unsigned char ge132os9517 = '\0';
T0* ge132ov9517;
T0* T361f21(T0* C)
{
	T0* R = 0;
	if (ge132os9517) {
		return ge132ov9517;
	} else {
		ge132os9517 = '\1';
		ge132ov9517 = R;
	}
	R = GE_ms("map", 3);
	ge132ov9517 = R;
	return R;
}

/* GEANT_FILESET.add_single_exclude */
void T362f49(T0* C, T0* a1)
{
	T412f37(GE_void(((T362*)(C))->a12), a1);
}

/* DS_HASH_SET [STRING_8].force_last */
void T412f37(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T412f42(C);
	T412f43(C, a1);
	t1 = ((((T412*)(C))->a5)!=((T6)(GE_int32(0))));
	if (t1) {
		T412f44(C, a1, ((T412*)(C))->a5);
	} else {
		l1 = ((T6)((((T412*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T412*)(C))->a1));
		if (t1) {
			t2 = (T412f17(C, l1));
			T412f45(C, t2);
			l2 = (T412f18(C, a1));
		} else {
			l2 = ((T412*)(C))->a8;
		}
		t2 = (T412f21(C, l2));
		T412f46(C, t2, l1);
		T412f47(C, l1, l2);
		T412f44(C, a1, l1);
		((T412*)(C))->a3 = l1;
		((T412*)(C))->a9 = ((T6)((((T412*)(C))->a9)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_SET [STRING_8].slots_put */
void T412f47(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T412*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].clashes_put */
void T412f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T412*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].slots_item */
T6 T412f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T412*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].hash_position */
T6 T412f18(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T412*)(C))->a16)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T412*)(C))->a16), a1, (T6)0));
			R = ((T6)((t2)%(((T412*)(C))->a2)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T412*)(C))->a2)));
		}
	} else {
		R = ((T412*)(C))->a2;
	}
	return R;
}

/* UC_UTF8_STRING.hash_code */
T6 T195f15(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 l4 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = ((T195*)(C))->a1;
	t1 = ((l2)==(((T195*)(C))->a3));
	if (t1) {
		R = (T195f15p1(C));
	} else {
		l4 = EIF_TRUE;
		l2 = ((T195*)(C))->a3;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T195f21(C, l1));
			t2 = (T6)(GE_int32(5));
			t2 = ((T6)((t2)*(R)));
			R = ((T6)((t2)+(l3)));
			t3 = (T195f22(C));
			t2 = (T198f1(GE_void(t3)));
			t1 = (T6f1(&l3, t2));
			if (t1) {
				l4 = EIF_FALSE;
			}
			l1 = (T195f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
		if (l4) {
			t3 = (T195f34(C));
			R = (T17f7(GE_void(t3)));
		}
	}
	t1 = ((T1)((R)<((T6)(GE_int32(0)))));
	if (t1) {
		t2 = ((T6)((R)+((T6)(GE_int32(1)))));
		R = ((T6)(-(t2)));
	}
	return R;
}

/* UC_UTF8_STRING.string */
T0* T195f34(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l2 = ((T195*)(C))->a1;
	R = T17c33(l2);
	t1 = ((l2)==(((T195*)(C))->a3));
	if (t1) {
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T195f20(C, l1));
			T17f34(GE_void(R), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
	} else {
		l2 = ((T195*)(C))->a3;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T195f21(C, l1));
			t3 = (T195f22(C));
			t4 = (T198f1(GE_void(t3)));
			t1 = (T6f9(&l3, t4));
			if (t1) {
				t3 = (T195f23(C));
				t2 = (T197f2(GE_void(t3), l3));
				T17f34(GE_void(R), t2);
			} else {
				T17f34(GE_void(R), (T2)('\000'));
			}
			l1 = (T195f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
	}
	return R;
}

/* KL_INTEGER_ROUTINES.to_character */
T2 T197f2(T0* C, T6 a1)
{
	T2 R = 0;
	R = ((T2)(a1));
	return R;
}

/* UC_UTF8_STRING.integer_ */
unsigned char ge171os4950 = '\0';
T0* ge171ov4950;
T0* T195f23(T0* C)
{
	T0* R = 0;
	if (ge171os4950) {
		return ge171ov4950;
	} else {
		ge171os4950 = '\1';
		ge171ov4950 = R;
	}
	R = T197c4();
	ge171ov4950 = R;
	return R;
}

/* KL_INTEGER_ROUTINES.default_create */
T0* T197c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T197));
	*(T197*)C = GE_default197;
	return C;
}

/* INTEGER_32.infix "<=" */
T1 T6f9(T6* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((T1)((a1)<(*C)));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.append_character */
void T17f34(T0* C, T2 a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	l1 = ((T17*)(C))->a2;
	t1 = (T17f5(C));
	t2 = ((l1)==(t1));
	if (t2) {
		t1 = (T17f6(C));
		t1 = ((T6)((l1)+(t1)));
		T17f37(C, t1);
	}
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[l1] = (a1);
	((T17*)(C))->a2 = ((T6)((l1)+((T6)(GE_int32(1)))));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* STRING_8.resize */
void T17f37(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T15*)(GE_void(((T17*)(C))->a1)))->z1);
	t1 = (T6f5(&a1, l1));
	if (t1) {
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T17*)(C))->a1 = (T15f2(GE_void(((T17*)(C))->a1), t2));
	}
}

/* SPECIAL [CHARACTER_8].aliased_resized_area */
T0* T15f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T15*)(C))->z1;
	if (a1>t1) {
		R = (T0*)GE_alloc(sizeof(T15)+a1*sizeof(T2));
		*(T15*)(R) = *(T15*)(C);
		memcpy(((T15*)(R))->z2,((T15*)(C))->z2,t1*sizeof(T2));
	} else {
		R = C;
	}
	((T15*)(R))->z1 = a1;
	return R;
}

/* INTEGER_32.infix ">=" */
T1 T6f5(T6* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((T1)((*C)<(a1)));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.additional_space */
T6 T17f6(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T17f5(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* INTEGER_32.max */
T6 T6f10(T6* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T6f5(C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* STRING_8.capacity */
T6 T17f5(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T17*)(C))->a1)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_UTF8_STRING.byte_item */
T2 T195f20(T0* C, T6 a1)
{
	T2 R = 0;
	T6 l1 = 0;
	l1 = ((T195*)(C))->a1;
	T195f61(C, ((T195*)(C))->a3);
	R = (T195f33(C, a1));
	T195f61(C, l1);
	return R;
}

/* UC_UTF8_STRING.old_item */
T2 T195f33(T0* C, T6 a1)
{
	T2 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	R = (((T15*)(GE_void(((T195*)(C))->a2)))->z2[t1]);
	return R;
}

/* UC_UTF8_STRING.set_count */
void T195f61(T0* C, T6 a1)
{
	T1 t1;
	t1 = (T6f1(&(((T195*)(C))->a5), a1));
	if (t1) {
		T195f69(C);
	}
	((T195*)(C))->a1 = a1;
}

/* UC_UTF8_STRING.reset_byte_index_cache */
void T195f69(T0* C)
{
	((T195*)(C))->a5 = (T6)(GE_int32(1));
	((T195*)(C))->a6 = (T6)(GE_int32(1));
}

/* STRING_8.make */
void T17f33(T0* C, T6 a1)
{
	T6 t1;
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T17f36(C, t1);
}

/* STRING_8.make */
T0* T17c33(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T17f36(C, t1);
	return C;
}

/* STRING_8.make_area */
void T17f36(T0* C, T6 a1)
{
	((T17*)(C))->a1 = T15c9(a1);
}

/* SPECIAL [CHARACTER_8].make */
T0* T15c9(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T15)+a1*sizeof(T2));
	*(T15*)C = GE_default15;
	((T15*)(C))->z1 = a1;
	return C;
}

/* UC_UTF8_STRING.next_byte_index */
T6 T195f24(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	T2 t2;
	T6 t3;
	t1 = (T195f25(C));
	t2 = (T195f20(C, a1));
	t3 = (T194f3(GE_void(t1), t2));
	R = ((T6)((a1)+(t3)));
	return R;
}

/* UC_UTF8_ROUTINES.encoded_byte_count */
T6 T194f3(T0* C, T2 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = (T2f17(&a1, (T2)('\337')));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			t1 = (T2f17(&a1, (T2)('\357')));
			if (t1) {
				R = (T6)(GE_int32(3));
			} else {
				R = (T6)(GE_int32(4));
			}
		}
	}
	return R;
}

/* CHARACTER_8.infix "<=" */
T1 T2f17(T2* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T2f5(&a1, *C));
	R = ((T1)(!(t1)));
	return R;
}

/* CHARACTER_8.infix "<" */
T1 T2f5(T2* C, T2 a1)
{
	T1 R = 0;
	T6 t1;
	T6 t2;
	t1 = ((T6)(*C));
	t2 = ((T6)(a1));
	R = ((T1)((t1)<(t2)));
	return R;
}

/* UC_UTF8_STRING.utf8 */
unsigned char ge235os5566 = '\0';
T0* ge235ov5566;
T0* T195f25(T0* C)
{
	T0* R = 0;
	if (ge235os5566) {
		return ge235ov5566;
	} else {
		ge235os5566 = '\1';
		ge235ov5566 = R;
	}
	R = T194c36();
	ge235ov5566 = R;
	return R;
}

/* UC_UTF8_ROUTINES.default_create */
T0* T194c36(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T194));
	*(T194*)C = GE_default194;
	return C;
}

/* KL_PLATFORM.maximum_character_code */
unsigned char ge305os7984 = '\0';
T6 ge305ov7984;
T6 T198f1(T0* C)
{
	T6 R = 0;
	if (ge305os7984) {
		return ge305ov7984;
	} else {
		ge305os7984 = '\1';
		ge305ov7984 = R;
	}
	R = (T198f3(C));
	ge305ov7984 = R;
	return R;
}

/* KL_PLATFORM.old_maximum_character_code */
T6 T198f3(T0* C)
{
	T6 R = 0;
	R = ((T6)(GE_int32(255)));
	return R;
}

/* UC_UTF8_STRING.platform */
unsigned char ge225os4079 = '\0';
T0* ge225ov4079;
T0* T195f22(T0* C)
{
	T0* R = 0;
	if (ge225os4079) {
		return ge225ov4079;
	} else {
		ge225os4079 = '\1';
		ge225ov4079 = R;
	}
	R = T198c5();
	ge225ov4079 = R;
	return R;
}

/* KL_PLATFORM.default_create */
T0* T198c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T198));
	*(T198*)C = GE_default198;
	return C;
}

/* UC_UTF8_STRING.item_code_at_byte_index */
T6 T195f21(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T6 t4;
	l1 = a1;
	l3 = (T195f20(C, l1));
	t1 = (T195f25(C));
	R = (T194f4(GE_void(t1), l3));
	t1 = (T195f25(C));
	t2 = (T194f3(GE_void(t1), l3));
	t2 = ((T6)((l1)+(t2)));
	l2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T195f20(C, l1));
		t2 = ((T6)((R)*((T6)(GE_int32(64)))));
		t1 = (T195f25(C));
		t4 = (T194f6(GE_void(t1), l3));
		R = ((T6)((t2)+(t4)));
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	return R;
}

/* UC_UTF8_ROUTINES.encoded_next_value */
T6 T194f6(T0* C, T2 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)(a1));
	R = ((T6)((t1)%((T6)(GE_int32(64)))));
	return R;
}

/* UC_UTF8_ROUTINES.encoded_first_value */
T6 T194f4(T0* C, T2 a1)
{
	T6 R = 0;
	T1 t1;
	R = ((T6)(a1));
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
	} else {
		t1 = (T2f17(&a1, (T2)('\337')));
		if (t1) {
			R = ((T6)((R)%((T6)(GE_int32(32)))));
		} else {
			t1 = (T2f17(&a1, (T2)('\357')));
			if (t1) {
				R = ((T6)((R)%((T6)(GE_int32(16)))));
			} else {
				t1 = (T2f17(&a1, (T2)('\364')));
				if (t1) {
					R = ((T6)((R)%((T6)(GE_int32(8)))));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.hash_code */
T6 T195f15p1(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	R = ((T195*)(C))->a4;
	t1 = ((R)==((T6)(GE_int32(0))));
	if (t1) {
		l1 = (T6)(GE_int32(0));
		l2 = ((T195*)(C))->a1;
		l3 = ((T195*)(C))->a2;
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = ((T6)((R)%((T6)(GE_int32(8388593)))));
			t2 = (T6f11(&t2, (T6)(GE_int32(8))));
			t3 = (((T15*)(GE_void(l3)))->z2[l1]);
			t4 = ((T6)(t3));
			R = ((T6)((t2)+(t4)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
		((T195*)(C))->a4 = R;
	}
	return R;
}

/* INTEGER_32.infix "|<<" */
T6 T6f11(T6* C, T6 a1)
{
	T6 R = 0;
	R = ((T6)((*C)<<(a1)));
	return R;
}

/* STRING_8.hash_code */
T6 T17f7(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	R = ((T17*)(C))->a3;
	t1 = ((R)==((T6)(GE_int32(0))));
	if (t1) {
		l1 = (T6)(GE_int32(0));
		l2 = ((T17*)(C))->a2;
		l3 = ((T17*)(C))->a1;
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = ((T6)((R)%((T6)(GE_int32(8388593)))));
			t2 = (T6f11(&t2, (T6)(GE_int32(8))));
			t3 = (((T15*)(GE_void(l3)))->z2[l1]);
			t4 = ((T6)(t3));
			R = ((T6)((t2)+(t4)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
		((T17*)(C))->a3 = R;
	}
	return R;
}

/* DS_HASH_SET [STRING_8].resize */
void T412f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T412f42(C);
	l1 = (T412f22(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T412f48(C, t1);
	l2 = ((T412*)(C))->a2;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T412f47(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T412*)(C))->a2 = l1;
	l2 = ((T412*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T412f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T412f24(C, l2));
			l3 = (T412f18(C, t3));
			t1 = (T412f21(C, l3));
			T412f46(C, t1, l2);
			T412f47(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f49(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f50(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f51(C, t1);
	((T412*)(C))->a1 = a1;
	((T412*)(C))->a5 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [STRING_8].clashes_resize */
void T412f51(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T412f19(C));
	((T412*)(C))->a12 = (T65f1(GE_void(t1), ((T412*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].resize */
T0* T65f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T63*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T63f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [INTEGER_32].resized_area */
T0* T63f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T63c5(a1);
	t1 = (((T63*)(C))->z1);
	T63f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [INTEGER_32].copy_data */
void T63f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		T63f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(a1)))->z2[l1]);
			((T63*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [INTEGER_32].move_data */
void T63f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T63f9(C, a1, a2, a3);
			} else {
				T63f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T63f9(C, a1, a2, a3);
			} else {
				T63f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [INTEGER_32].overlapping_move */
void T63f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = (((T63*)(C))->z2[l1]);
			t3 = ((T6)((l1)+(l3)));
			((T63*)(C))->z2[t3] = (t2);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = (((T63*)(C))->z2[l1]);
			t3 = ((T6)((l1)-(l3)));
			((T63*)(C))->z2[t3] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [INTEGER_32].non_overlapping_move */
void T63f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T63*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T63*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [INTEGER_32].make */
T0* T63c5(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T63)+a1*sizeof(T6));
	*(T63*)C = GE_default63;
	((T63*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_SET [STRING_8].special_integer_ */
unsigned char ge172os2089 = '\0';
T0* ge172ov2089;
T0* T412f19(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].default_create */
T0* T65c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T65));
	*(T65*)C = GE_default65;
	return C;
}

/* DS_HASH_SET [STRING_8].key_storage_resize */
void T412f50(T0* C, T6 a1)
{
}

/* DS_HASH_SET [STRING_8].item_storage_resize */
void T412f49(T0* C, T6 a1)
{
	((T412*)(C))->a11 = (T66f1(GE_void(((T412*)(C))->a10), ((T412*)(C))->a11, a1));
}

/* KL_SPECIAL_ROUTINES [STRING_8].resize */
T0* T66f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T32*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T32f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [STRING_8].resized_area */
T0* T32f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T32c6(a1);
	t1 = (((T32*)(C))->z1);
	T32f8(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [STRING_8].copy_data */
void T32f8(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T32f9(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T32*)(a1))->z2[l1]);
			((T32*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [STRING_8].move_data */
void T32f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T32f10(C, a1, a2, a3);
			} else {
				T32f11(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T32f10(C, a1, a2, a3);
			} else {
				T32f11(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [STRING_8].overlapping_move */
void T32f11(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T32*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T32*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T32*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T32*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [STRING_8].non_overlapping_move */
void T32f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T32*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T32*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [STRING_8].make */
T0* T32c6(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T32)+a1*sizeof(T0*));
	*(T32*)C = GE_default32;
	((T32*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_SET [STRING_8].key_storage_item */
T0* T412f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T412f31(C, a1));
	return R;
}

/* DS_HASH_SET [STRING_8].item_storage_item */
T0* T412f31(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T412*)(C))->a11)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].clashes_item */
T6 T412f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T412*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].slots_resize */
void T412f48(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T412f19(C));
	((T412*)(C))->a13 = (T65f1(GE_void(t1), ((T412*)(C))->a13, a1));
}

/* DS_HASH_SET [STRING_8].new_modulus */
T6 T412f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [STRING_8].new_capacity */
T6 T412f17(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_SET [STRING_8].item_storage_put */
void T412f44(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T412*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].search_position */
void T412f43(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T412*)(C))->a5 = (T412f21(C, ((T412*)(C))->a2));
		((T412*)(C))->a8 = ((T412*)(C))->a2;
		((T412*)(C))->a15 = (T6)(GE_int32(0));
	} else {
		l4 = (T412f23(C));
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T412*)(C))->a5)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T412f24(C, ((T412*)(C))->a5));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T412*)(C))->a8 = (T412f18(C, a1));
				l1 = (T412f21(C, ((T412*)(C))->a8));
				((T412*)(C))->a5 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T412f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T412*)(C))->a5 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T412f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T412*)(C))->a15 = l2;
			}
		} else {
			t1 = ((((T412*)(C))->a5)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T412f24(C, ((T412*)(C))->a5));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T412*)(C))->a8 = (T412f18(C, a1));
				l1 = (T412f21(C, ((T412*)(C))->a8));
				((T412*)(C))->a5 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T412f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T412*)(C))->a5 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T412f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T412*)(C))->a15 = l2;
			}
		}
	}
}

/* UC_STRING_EQUALITY_TESTER.test */
T1 T59f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T59f2(C));
				R = (T76f1(GE_void(t2), a1, a2));
			}
		}
	}
	return R;
}

/* UC_STRING_EQUALITY_TESTER.string_ */
unsigned char ge174os1718 = '\0';
T0* ge174ov1718;
T0* T59f2(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* KL_STRING_ROUTINES.default_create */
T0* T76c19(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T76));
	*(T76*)C = GE_default76;
	return C;
}

/* DS_HASH_SET [STRING_8].key_equality_tester */
T0* T412f23(T0* C)
{
	T0* R = 0;
	R = ((T412*)(C))->a7;
	return R;
}

/* DS_HASH_SET [STRING_8].unset_found_item */
void T412f42(T0* C)
{
	((T412*)(C))->a14 = (T6)(GE_int32(0));
}

/* GEANT_FILESET_ELEMENT.exclude_element_name */
unsigned char ge132os9516 = '\0';
T0* ge132ov9516;
T0* T361f19(T0* C)
{
	T0* R = 0;
	if (ge132os9516) {
		return ge132ov9516;
	} else {
		ge132os9516 = '\1';
		ge132ov9516 = R;
	}
	R = GE_ms("exclude", 7);
	ge132ov9516 = R;
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].forth */
void T117f9(T0* C)
{
	T116f11(GE_void(((T117*)(C))->a3), C);
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_forth */
void T116f11(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T117*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T116*)(C))->a3;
	} else {
		t2 = (((T117*)(a1))->a2);
		l3 = (((T200*)(GE_void(t2)))->a2);
	}
	l2 = ((l3)==(EIF_VOID));
	T117f10(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T116f13(C, a1);
		}
	} else {
		if (l1) {
			T116f12(C, a1);
		}
	}
}

/* DS_LINKED_LIST [XM_ELEMENT].add_traversing_cursor */
void T116f12(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T116*)(C))->a2));
	if (t1) {
		t2 = (((T117*)(GE_void(((T116*)(C))->a2)))->a5);
		T117f11(a1, t2);
		T117f11(GE_void(((T116*)(C))->a2), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].set_next_cursor */
void T117f11(T0* C, T0* a1)
{
	((T117*)(C))->a5 = a1;
}

/* DS_LINKED_LIST [XM_ELEMENT].remove_traversing_cursor */
void T116f13(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T116*)(C))->a2));
	if (t1) {
		l2 = ((T116*)(C))->a2;
		l1 = (((T117*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T117*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T117*)(a1))->a5);
			T117f11(GE_void(l2), t2);
			T117f11(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].set */
void T117f10(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T117*)(C))->a2 = a1;
	((T117*)(C))->a4 = a2;
	((T117*)(C))->a1 = a3;
}

/* GEANT_FILESET.add_single_include */
void T362f48(T0* C, T0* a1)
{
	T412f37(GE_void(((T362*)(C))->a11), a1);
}

/* GEANT_DEFINE_ELEMENT.name */
T0* T367f4(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T367f13(C));
	R = (T367f14(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.attribute_value */
T0* T367f14(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T367*)(C))->a2), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T367f15(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T367f15(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T367f6(C));
		t4 = (((T22*)(GE_void(((T367*)(C))->a1)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T367f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DEFINE_ELEMENT.project_variables_resolver */
T0* T367f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.target_arguments_stack */
T0* T367f15(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.name_attribute_name */
unsigned char ge139os7792 = '\0';
T0* ge139ov7792;
T0* T367f13(T0* C)
{
	T0* R = 0;
	if (ge139os7792) {
		return ge139ov7792;
	} else {
		ge139os7792 = '\1';
		ge139ov7792 = R;
	}
	R = GE_ms("name", 4);
	ge139ov7792 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.has_name */
T1 T367f10(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T367f13(C));
	R = (T367f9(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.has_attribute */
T1 T367f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T367*)(C))->a2), a1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.is_enabled */
T1 T367f7(T0* C)
{
	T1 R = 0;
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (T367f6(C));
	t2 = (((T22*)(GE_void(((T367*)(C))->a1)))->a7);
	T58f17(GE_void(t1), t2);
	l1 = EIF_TRUE;
	l2 = EIF_FALSE;
	t1 = (T367f8(C));
	t3 = (T367f9(C, t1));
	if (t3) {
		t1 = (T367f8(C));
		t1 = (T97f21(GE_void(((T367*)(C))->a2), t1));
		l3 = (((T190*)(GE_void(t1)))->a3);
		t1 = (T367f6(C));
		l1 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l1));
		t1 = GE_ma33((T6)4,
GE_ms(" if: \'", 6),
l3,
GE_ms("\': ", 3),
t1);
		T22f31(GE_void(((T367*)(C))->a1), t1);
	}
	t1 = (T367f11(C));
	t3 = (T367f9(C, t1));
	if (t3) {
		t1 = (T367f11(C));
		t1 = (T97f21(GE_void(((T367*)(C))->a2), t1));
		l3 = (((T190*)(GE_void(t1)))->a3);
		t1 = (T367f6(C));
		l2 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l2));
		t1 = GE_ma33((T6)4,
GE_ms(" unless: \'", 10),
l3,
GE_ms("\'=", 2),
t1);
		T22f31(GE_void(((T367*)(C))->a1), t1);
	}
	if (l1) {
		R = ((T1)(!(l2)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_DEFINE_ELEMENT.unless_attribute_name */
unsigned char ge136os2384 = '\0';
T0* ge136ov2384;
T0* T367f11(T0* C)
{
	T0* R = 0;
	if (ge136os2384) {
		return ge136ov2384;
	} else {
		ge136os2384 = '\1';
		ge136ov2384 = R;
	}
	R = GE_ms("unless", 6);
	ge136ov2384 = R;
	return R;
}

/* BOOLEAN.out */
T0* T1f6(T1* C)
{
	T0* R = 0;
	T1 t1;
	t1 = (*C);
	if (t1) {
		R = GE_ms("True", 4);
	} else {
		R = GE_ms("False", 5);
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.boolean_condition_value */
T1 T58f8(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	T1 t4;
	T0* t5;
	l1 = (T58f10(C, a1, (T2)('=')));
	t1 = (((T71*)(GE_void(l1)))->a1);
	t2 = ((t1)==((T6)(GE_int32(1))));
	if (t2) {
		l2 = (T71f14(GE_void(l1), (T6)(GE_int32(1))));
		t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t1, (T6)(GE_int32(3))));
		if (t2) {
			t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(1))):T195f10(l2, (T6)(GE_int32(1)))));
			t4 = ((t3)==((T2)('$')));
			if (t4) {
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(2))):T195f10(l2, (T6)(GE_int32(2)))));
				t4 = ((t3)==((T2)('{')));
			}
			if (t4) {
				t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, t1):T195f10(l2, t1)));
				t2 = ((t3)==((T2)('}')));
			} else {
				t2 = EIF_FALSE;
			}
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
			t1 = ((T6)((t1)-((T6)(GE_int32(1)))));
			l2 = (((((T0*)(GE_void(l2)))->id==17)?T17f10(l2, (T6)(GE_int32(3)), t1):T195f11(l2, (T6)(GE_int32(3)), t1)));
			R = (T58f5(C, l2));
		} else {
			t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
			t2 = (T6f1(&t1, (T6)(GE_int32(1))));
			if (t2) {
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(1))):T195f10(l2, (T6)(GE_int32(1)))));
				t4 = ((t3)==((T2)('$')));
				if (t4) {
					t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(2))):T195f10(l2, (T6)(GE_int32(2)))));
					t2 = ((t3)!=((T2)('{')));
				} else {
					t2 = EIF_FALSE;
				}
			}
			if (t2) {
				t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
				l2 = (((((T0*)(GE_void(l2)))->id==17)?T17f10(l2, (T6)(GE_int32(2)), t1):T195f11(l2, (T6)(GE_int32(2)), t1)));
				R = (T58f5(C, l2));
			} else {
				t5 = GE_ma33((T6)3,
GE_ms("geant: incorrect conditional: \'", 31),
a1,
GE_ms("\'", 1));
				T58f18(C, (T6)(GE_int32(1)), t5);
			}
		}
	} else {
		t1 = (((T71*)(GE_void(l1)))->a1);
		t2 = ((t1)==((T6)(GE_int32(2))));
		if (t2) {
			l4 = T244c7();
			T244f8(GE_void(l4), C);
			l2 = (T71f14(GE_void(l1), (T6)(GE_int32(1))));
			l2 = (T244f5(GE_void(l4), l2));
			l3 = (T71f14(GE_void(l1), (T6)(GE_int32(2))));
			l3 = (T244f5(GE_void(l4), l3));
			t5 = (T58f2(C));
			R = (T76f1(GE_void(t5), l2, l3));
		} else {
			t5 = GE_ma33((T6)3,
GE_ms("geant: incorrect conditional: \'", 31),
a1,
GE_ms("\'", 1));
			T58f18(C, (T6)(GE_int32(1)), t5);
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.string_ */
T0* T58f2(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.exit_application */
void T58f18(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T58f14(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T58f15(C));
	T48f2(GE_void(t2), a1);
}

/* KL_EXCEPTIONS.die */
void T48f2(T0* C, T6 a1)
{
	esdie(a1);
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.exceptions */
unsigned char ge222os1720 = '\0';
T0* ge222ov1720;
T0* T58f15(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* KL_EXCEPTIONS.default_create */
T0* T48c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T48));
	*(T48*)C = GE_default48;
	return C;
}

/* KL_STDERR_FILE.put_line */
void T47f12(T0* C, T0* a1)
{
	T47f10(C, a1);
	T47f11(C);
}

/* KL_STDERR_FILE.put_new_line */
void T47f11(T0* C)
{
	T47f10(C, ge308ov3135);
}

/* KL_STDERR_FILE.put_string */
void T47f10(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T47f6(C));
	l1 = (T76f2(GE_void(t1), a1));
	T47f14(C, l1);
}

/* KL_STDERR_FILE.old_put_string */
void T47f14(T0* C, T0* a1)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T77 t3;
	T14 t4;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = ((t1)!=((T6)(GE_int32(0))));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
		(t3).id = 77;
		(t3).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
		t4 = ((t3).a1);
		t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		T47f17(C, ((T47*)(C))->a1, t4, t1);
	}
}

/* KL_STDERR_FILE.console_ps */
void T47f17(T0* C, T14 a1, T14 a2, T6 a3)
{
	console_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
}

/* KL_STRING_ROUTINES.as_string */
T0* T76f2(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T76f8(C));
	t2 = (T83f1(GE_void(t1), a1, ge312ov4945));
	if (t2) {
		R = a1;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 195:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			R = (T195f30(GE_void(l1)));
		} else {
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f13(a1):T195f34(a1)));
		}
	}
	return R;
}

/* STRING_8.string */
T0* T17f13(T0* C)
{
	T0* R = 0;
	R = T17c33(((T17*)(C))->a2);
	T17f35(GE_void(R), C);
	return R;
}

/* STRING_8.append */
void T17f35(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l1 = ((T17*)(C))->a2;
		l3 = ((T6)((l2)+(l1)));
		t2 = (T17f5(C));
		t1 = (T6f1(&l3, t2));
		if (t1) {
			t2 = (T17f6(C));
			t2 = ((T6)((l3)+(t2)));
			T17f37(C, t2);
		}
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
		T15f8(GE_void(((T17*)(C))->a1), t3, (T6)(GE_int32(0)), l1, l2);
		((T17*)(C))->a2 = l3;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* SPECIAL [CHARACTER_8].copy_data */
void T15f8(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	t1 = ((a1)==(C));
	if (t1) {
		T15f10(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T15*)(GE_void(a1)))->z2[l1]);
			((T15*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [CHARACTER_8].move_data */
void T15f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T15f11(C, a1, a2, a3);
			} else {
				T15f12(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T15f11(C, a1, a2, a3);
			} else {
				T15f12(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [CHARACTER_8].overlapping_move */
void T15f12(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T15*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T15*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [CHARACTER_8].non_overlapping_move */
void T15f11(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T15*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T15*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* UC_UTF8_STRING.as_string */
T0* T195f30(T0* C)
{
	T0* R = 0;
	R = (T195f18(C));
	return R;
}

/* UC_UTF8_STRING.to_utf8 */
T0* T195f18(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	l2 = ((T195*)(C))->a3;
	R = T17c33(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T195f20(C, l1));
		T17f34(GE_void(R), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* KL_ANY_ROUTINES.same_types */
T1 T83f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T19x28T0(GE_void(a1), a2));
	return R;
}

/* KL_STRING_ROUTINES.any_ */
unsigned char ge166os1926 = '\0';
T0* ge166ov1926;
T0* T76f8(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* KL_ANY_ROUTINES.default_create */
T0* T83c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T83));
	*(T83*)C = GE_default83;
	return C;
}

/* KL_STDERR_FILE.string_ */
T0* T47f6(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* ARRAY [STRING_8].item */
T0* T33f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T33*)(C))->a2)));
	R = (((T32*)(GE_void(((T33*)(C))->a1)))->z2[t1]);
	return R;
}

/* KL_STANDARD_FILES.error */
unsigned char ge206os3126 = '\0';
T0* ge206ov3126;
T0* T46f1(T0* C)
{
	T0* R = 0;
	if (ge206os3126) {
		return ge206ov3126;
	} else {
		ge206os3126 = '\1';
		ge206ov3126 = R;
	}
	R = T47c9();
	ge206ov3126 = R;
	return R;
}

/* KL_STDERR_FILE.make */
T0* T47c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T47));
	*(T47*)C = GE_default47;
	T47f13(C, GE_ms("stderr", 6));
	return C;
}

/* KL_STDERR_FILE.make_open_stderr */
void T47f13(T0* C, T0* a1)
{
	T47f15(C, a1);
	((T47*)(C))->a1 = (T47f4(C, (T6)(GE_int32(2))));
	T47f16(C);
}

/* KL_STDERR_FILE.set_write_mode */
void T47f16(T0* C)
{
	((T47*)(C))->a3 = (T6)(GE_int32(2));
}

/* KL_STDERR_FILE.console_def */
T14 T47f4(T0* C, T6 a1)
{
	T14 R = 0;
	R = (T14)console_def(a1);
	return R;
}

/* KL_STDERR_FILE.old_make */
void T47f15(T0* C, T0* a1)
{
	((T47*)(C))->a2 = a1;
	((T47*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.std */
unsigned char ge204os1722 = '\0';
T0* ge204ov1722;
T0* T58f14(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* KL_STANDARD_FILES.default_create */
T0* T46c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T46));
	*(T46*)C = GE_default46;
	return C;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.has */
T1 T58f5(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T58f2(C));
	R = (T76f1(GE_void(t1), a1, GE_ms("cwd", 3)));
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f3(C));
		t3 = (((T101*)(GE_void(t1)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = (T58f3(C));
			t1 = (T101f5(GE_void(t1)));
			T34f68(GE_void(t1), a1);
			t1 = (T58f3(C));
			t1 = (T101f5(GE_void(t1)));
			R = (T34f33(GE_void(t1)));
		}
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f4(C));
		T29f67(GE_void(t1), a1);
		t1 = (T58f4(C));
		R = (T29f36(GE_void(t1)));
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		T25f80(GE_void(((T58*)(C))->a1), a1);
		R = (T25f44(GE_void(((T58*)(C))->a1)));
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f6(C));
		l1 = (T100f5(GE_void(t1), a1));
		R = ((l1)!=(EIF_VOID));
	}
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.variable_value */
T0* T100f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (T100f2(C));
	t2 = (T100f3(C));
	t2 = (T76f2(GE_void(t2), a1));
	R = (T82f4(GE_void(t1), t2));
	return R;
}

/* EXECUTION_ENVIRONMENT.get */
T0* T82f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T14 l2 = 0;
	T14 l3 = 0;
	T77 t1;
	T14 t2;
	T1 t3;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f11(a1):T195f19(a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	l2 = (T82f3(C, t2));
	t3 = ((l2)!=(l3));
	if (t3) {
		R = T17c43(l2);
	}
	return R;
}

/* STRING_8.make_from_c */
T0* T17c43(T14 a1)
{
	T6 l1 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	t1 = ((((T17*)(C))->a1)==(EIF_VOID));
	if (t1) {
		t2 = (T17f26(C));
		T182f6(GE_void(t2), a1);
		t2 = (T17f26(C));
		l1 = (((T182*)(GE_void(t2)))->a1);
		t3 = ((T6)((l1)+((T6)(GE_int32(1)))));
		T17f36(C, t3);
		((T17*)(C))->a2 = l1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
		t2 = (T17f26(C));
		T182f7(GE_void(t2), C);
	} else {
		T17f46(C, a1);
	}
	return C;
}

/* STRING_8.from_c */
void T17f46(T0* C, T14 a1)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	t1 = (T17f26(C));
	T182f6(GE_void(t1), a1);
	t1 = (T17f26(C));
	l1 = (((T182*)(GE_void(t1)))->a1);
	t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T17f37(C, t2);
	((T17*)(C))->a2 = l1;
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = (T17f26(C));
	T182f7(GE_void(t1), C);
}

/* C_STRING.read_string_into */
void T182f7(T0* C, T0* a1)
{
	T182f9(C, a1, (T6)(GE_int32(1)), ((T182*)(C))->a1);
}

/* C_STRING.read_substring_into */
void T182f9(T0* C, T0* a1, T6 a2, T6 a3)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T8 t2;
	T10 t3;
	T6 t4;
	l2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	l3 = a3;
	l1 = ((T182*)(C))->a2;
	t1 = ((l2)==(l3));
	while (!(t1)) {
		t2 = (T250f6(GE_void(l1), l2));
		t3 = (T8f7(&t2));
		t4 = ((T6)((l2)+((T6)(GE_int32(1)))));
		T17f50(a1, t3, t4);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = ((l2)==(l3));
	}
}

/* STRING_8.put_code */
void T17f50(T0* C, T10 a1, T6 a2)
{
	T2 t1;
	T6 t2;
	t1 = ((T2)(a1));
	t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[t2] = (t1);
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* NATURAL_8.to_natural_32 */
T10 T8f7(T8* C)
{
	T10 R = 0;
	R = ((T10)(*C));
	return R;
}

/* MANAGED_POINTER.read_natural_8 */
T8 T250f6(T0* C, T6 a1)
{
	T8 R = 0;
	T328 t1;
	T14 t2;
	(t1).id = 328;
	(t1).a1 = ((T14)&R);
	t2 = ((T14)(((char*)(((T250*)(C))->a2))+(a1)));
	T328f2(&t1, t2, (T6)(GE_int32(1)));
	return R;
}

/* TYPED_POINTER [NATURAL_8].memory_copy */
void T328f2(T328* C, T14 a1, T6 a2)
{
	T328f3(C, (*C).a1, a1, a2);
}

/* TYPED_POINTER [NATURAL_8].c_memcpy */
void T328f3(T328* C, T14 a1, T14 a2, T6 a3)
{
	memcpy((void *)a1,( const void *)a2,( size_t)a3);
}

/* C_STRING.share_from_pointer */
void T182f6(T0* C, T14 a1)
{
	T6 t1;
	t1 = (T182f3(C, a1));
	T182f8(C, a1, t1);
}

/* C_STRING.share_from_pointer_and_count */
void T182f8(T0* C, T14 a1, T6 a2)
{
	T1 t1;
	T1 t2;
	T6 t3;
	((T182*)(C))->a1 = a2;
	t1 = ((((T182*)(C))->a2)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T250*)(GE_void(((T182*)(C))->a2)))->a1);
		t1 = ((T1)(!(t2)));
	}
	if (t1) {
		t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
		((T182*)(C))->a2 = T250c8(a1, t3);
	} else {
		t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
		T250f9(GE_void(((T182*)(C))->a2), a1, t3);
	}
}

/* MANAGED_POINTER.set_from_pointer */
void T250f9(T0* C, T14 a1, T6 a2)
{
	((T250*)(C))->a2 = a1;
	((T250*)(C))->a3 = a2;
}

/* MANAGED_POINTER.share_from_pointer */
T0* T250c8(T14 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T250));
	*(T250*)C = GE_default250;
	((T250*)(C))->a2 = a1;
	((T250*)(C))->a3 = a2;
	((T250*)(C))->a1 = EIF_TRUE;
	return C;
}

/* C_STRING.c_strlen */
T6 T182f3(T0* C, T14 a1)
{
	T6 R = 0;
	R = (T6)(EIF_INTEGER )strlen((char *)a1);
	return R;
}

/* STRING_8.c_string_provider */
unsigned char ge2231os1257 = '\0';
T0* ge2231ov1257;
T0* T17f26(T0* C)
{
	T0* R = 0;
	if (ge2231os1257) {
		return ge2231ov1257;
	} else {
		ge2231os1257 = '\1';
		ge2231ov1257 = R;
	}
	R = T182c5((T6)(GE_int32(0)));
	ge2231ov1257 = R;
	return R;
}

/* C_STRING.make_empty */
void T182f5(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T182*)(C))->a2 = T250c7(t1);
	((T182*)(C))->a1 = (T6)(GE_int32(0));
}

/* C_STRING.make_empty */
T0* T182c5(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T182));
	*(T182*)C = GE_default182;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T182*)(C))->a2 = T250c7(t1);
	((T182*)(C))->a1 = (T6)(GE_int32(0));
	return C;
}

/* MANAGED_POINTER.make */
T0* T250c7(T6 a1)
{
	T0* C;
	T6 t1;
	T14 t2;
	T1 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T250));
	*(T250*)C = GE_default250;
	t1 = (T6f10(&a1, (T6)(GE_int32(1))));
	((T250*)(C))->a2 = (T14f2(&(((T250*)(C))->a2), (T6)(GE_int32(1)), t1));
	t2 = (T250f5(C));
	t3 = ((((T250*)(C))->a2)==(t2));
	if (t3) {
		t4 = (T329c2());
		T329f3(t4, GE_ms("No more memory", 14));
	}
	((T250*)(C))->a3 = a1;
	return C;
}

/* EXCEPTIONS.raise */
void T329f3(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T77 t2;
	T14 t3;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		l1 = (T17f11(a1));
	}
	(t2).id = 77;
	(t2).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t3 = ((t2).a1);
	T329f4(C, t3, (T6)(GE_int32(24)));
}

/* EXCEPTIONS.eraise */
void T329f4(T0* C, T14 a1, T6 a2)
{
	eraise((char *)a1,( long)a2);
}

/* EXCEPTIONS.default_create */
T0* T329c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T329));
	*(T329*)C = GE_default329;
	return C;
}

/* MANAGED_POINTER.default_pointer */
T14 T250f5(T0* C)
{
	T14 R = 0;
	return R;
}

/* POINTER.memory_calloc */
T14 T14f2(T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	R = (T14f3(C, a1, a2));
	return R;
}

/* POINTER.c_calloc */
T14 T14f3(T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	R = (T14)(EIF_POINTER )calloc((size_t)a1,( size_t)a2);
	return R;
}

/* EXECUTION_ENVIRONMENT.eif_getenv */
T14 T82f3(T0* C, T14 a1)
{
	T14 R = 0;
	R = (T14)getenv((char*)a1);
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.string_ */
T0* T100f3(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.environment_impl */
unsigned char ge284os6114 = '\0';
T0* ge284ov6114;
T0* T100f2(T0* C)
{
	T0* R = 0;
	if (ge284os6114) {
		return ge284ov6114;
	} else {
		ge284os6114 = '\1';
		ge284ov6114 = R;
	}
	R = T82c6();
	ge284ov6114 = R;
	return R;
}

/* EXECUTION_ENVIRONMENT.default_create */
T0* T82c6(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T82));
	*(T82*)C = GE_default82;
	return C;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.execution_environment */
unsigned char ge223os1719 = '\0';
T0* ge223ov1719;
T0* T58f6(T0* C)
{
	T0* R = 0;
	if (ge223os1719) {
		return ge223ov1719;
	} else {
		ge223os1719 = '\1';
		ge223ov1719 = R;
	}
	R = T100c7();
	ge223ov1719 = R;
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.default_create */
T0* T100c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T100));
	*(T100*)C = GE_default100;
	return C;
}

/* GEANT_PROJECT_VARIABLES.found */
T1 T25f44(T0* C)
{
	T1 R = 0;
	R = ((((T25*)(C))->a10)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_PROJECT_VARIABLES.search */
void T25f80(T0* C, T0* a1)
{
	T25f65(C, a1);
	((T25*)(C))->a10 = ((T25*)(C))->a3;
}

/* GEANT_PROJECT_VARIABLES.search_position */
void T25f65(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T25*)(C))->a3 = (T25f22(C, ((T25*)(C))->a11));
		((T25*)(C))->a6 = ((T25*)(C))->a11;
		((T25*)(C))->a12 = (T6)(GE_int32(0));
	} else {
		l4 = ((T25*)(C))->a1;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T25*)(C))->a3)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T25f27(C, ((T25*)(C))->a3));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T25*)(C))->a6 = (T25f33(C, a1));
				l1 = (T25f22(C, ((T25*)(C))->a6));
				((T25*)(C))->a3 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T25f27(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T25*)(C))->a3 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T25f21(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T25*)(C))->a12 = l2;
			}
		} else {
			t1 = ((((T25*)(C))->a3)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T25f27(C, ((T25*)(C))->a3));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T25*)(C))->a6 = (T25f33(C, a1));
				l1 = (T25f22(C, ((T25*)(C))->a6));
				((T25*)(C))->a3 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T25f27(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T25*)(C))->a3 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T25f21(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T25*)(C))->a12 = l2;
			}
		}
	}
}

/* GEANT_PROJECT_VARIABLES.clashes_item */
T6 T25f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T25*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLES.hash_position */
T6 T25f33(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T25*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T25*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T25*)(C))->a11)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T25*)(C))->a11)));
		}
	} else {
		R = ((T25*)(C))->a11;
	}
	return R;
}

/* GEANT_PROJECT_VARIABLES.key_storage_item */
T0* T25f27(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T25*)(C))->a16)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLES.slots_item */
T6 T25f22(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T25*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.found */
T1 T29f36(T0* C)
{
	T1 R = 0;
	R = ((((T29*)(C))->a9)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_VARIABLES.search */
void T29f67(T0* C, T0* a1)
{
	T29f51(C, a1);
	((T29*)(C))->a9 = ((T29*)(C))->a1;
}

/* GEANT_VARIABLES.search_position */
void T29f51(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T29*)(C))->a1 = (T29f29(C, ((T29*)(C))->a10));
		((T29*)(C))->a4 = ((T29*)(C))->a10;
		((T29*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T29*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T29*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T29f28(C, ((T29*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T29*)(C))->a4 = (T29f24(C, a1));
				l1 = (T29f29(C, ((T29*)(C))->a4));
				((T29*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T29f28(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T29*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T29f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T29*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T29*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T29f28(C, ((T29*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T29*)(C))->a4 = (T29f24(C, a1));
				l1 = (T29f29(C, ((T29*)(C))->a4));
				((T29*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T29f28(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T29*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T29f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T29*)(C))->a11 = l2;
			}
		}
	}
}

/* GEANT_VARIABLES.clashes_item */
T6 T29f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T29*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.hash_position */
T6 T29f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T29*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T29*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T29*)(C))->a10)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T29*)(C))->a10)));
		}
	} else {
		R = ((T29*)(C))->a10;
	}
	return R;
}

/* GEANT_VARIABLES.key_storage_item */
T0* T29f28(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T29*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.slots_item */
T6 T29f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T29*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.commandline_variables */
unsigned char ge61os1705 = '\0';
T0* ge61ov1705;
T0* T58f4(T0* C)
{
	T0* R = 0;
	if (ge61os1705) {
		return ge61ov1705;
	} else {
		ge61os1705 = '\1';
		ge61ov1705 = R;
	}
	R = T29c45();
	ge61ov1705 = R;
	return R;
}

/* GEANT_VARIABLES.make */
T0* T29c45(void)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T29));
	*(T29*)C = GE_default29;
	T29f48(C, (T6)(GE_int32(10)));
	l1 = T59c3();
	T29f49(C, l1);
	return C;
}

/* GEANT_VARIABLES.set_key_equality_tester */
void T29f49(T0* C, T0* a1)
{
	((T29*)(C))->a7 = a1;
	T61f6(GE_void(((T29*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].internal_set_equality_tester */
void T61f6(T0* C, T0* a1)
{
	((T61*)(C))->a2 = a1;
}

/* UC_STRING_EQUALITY_TESTER.default_create */
T0* T59c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T59));
	*(T59*)C = GE_default59;
	return C;
}

/* GEANT_VARIABLES.make_map */
void T29f48(T0* C, T6 a1)
{
	T29f57(C, a1, EIF_VOID, EIF_VOID);
}

/* GEANT_VARIABLES.make_with_equality_testers */
void T29f57(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T29*)(C))->a16 = a2;
	((T29*)(C))->a7 = a3;
	T29f62(C, a1);
	((T29*)(C))->a8 = T61c5(C);
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].make */
T0* T61c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T61));
	*(T61*)C = GE_default61;
	((T61*)(C))->a1 = a1;
	((T61*)(C))->a2 = (T62x1959(GE_void(((T61*)(C))->a1)));
	((T61*)(C))->a3 = (T61f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].new_cursor */
T0* T61f4(T0* C)
{
	T0* R = 0;
	R = T102c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [STRING_8, STRING_8].make */
T0* T102c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T102));
	*(T102*)C = GE_default102;
	((T102*)(C))->a1 = a1;
	t1 = (((T61*)(GE_void(((T102*)(C))->a1)))->a1);
	((T102*)(C))->a2 = (T62x2056(GE_void(t1)));
	return C;
}

/* GEANT_VARIABLES.make_sparse_container */
void T29f62(T0* C, T6 a1)
{
	T6 t1;
	((T29*)(C))->a3 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f63(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f64(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f65(C, t1);
	((T29*)(C))->a10 = (T29f33(C, a1));
	t1 = ((T6)((((T29*)(C))->a10)+((T6)(GE_int32(1)))));
	T29f66(C, t1);
	((T29*)(C))->a6 = (T6)(GE_int32(0));
	((T29*)(C))->a5 = (T6)(GE_int32(0));
	((T29*)(C))->a1 = (T6)(GE_int32(0));
	T29f50(C);
	((T29*)(C))->a19 = (T29f30(C));
}

/* GEANT_VARIABLES.unset_found_item */
void T29f50(T0* C)
{
	((T29*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_VARIABLES.make_slots */
void T29f66(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T29f26(C));
	((T29*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].make */
T0* T65f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T103c2(a1);
	R = (((T103*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [INTEGER_32].make_area */
T0* T103c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T103));
	*(T103*)C = GE_default103;
	((T103*)(C))->a1 = T63c5(a1);
	return C;
}

/* GEANT_VARIABLES.special_integer_ */
T0* T29f26(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* GEANT_VARIABLES.new_modulus */
T6 T29f33(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* GEANT_VARIABLES.make_clashes */
void T29f65(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T29f26(C));
	((T29*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* GEANT_VARIABLES.make_key_storage */
void T29f64(T0* C, T6 a1)
{
	((T29*)(C))->a18 = T66c3();
	((T29*)(C))->a15 = (T66f2(GE_void(((T29*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [STRING_8].make */
T0* T66f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T104c2(a1);
	R = (((T104*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [STRING_8].make_area */
T0* T104c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T104));
	*(T104*)C = GE_default104;
	((T104*)(C))->a1 = T32c6(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [STRING_8].default_create */
T0* T66c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T66));
	*(T66*)C = GE_default66;
	return C;
}

/* GEANT_VARIABLES.make_item_storage */
void T29f63(T0* C, T6 a1)
{
	((T29*)(C))->a17 = T66c3();
	((T29*)(C))->a12 = (T66f2(GE_void(((T29*)(C))->a17), a1));
}

/* GEANT_ARGUMENT_VARIABLES.found */
T1 T34f33(T0* C)
{
	T1 R = 0;
	R = ((((T34*)(C))->a9)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.search */
void T34f68(T0* C, T0* a1)
{
	T34f51(C, a1);
	((T34*)(C))->a9 = ((T34*)(C))->a1;
}

/* GEANT_ARGUMENT_VARIABLES.search_position */
void T34f51(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T34*)(C))->a1 = (T34f29(C, ((T34*)(C))->a10));
		((T34*)(C))->a4 = ((T34*)(C))->a10;
		((T34*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T34*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T34*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T34f28(C, ((T34*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T34*)(C))->a4 = (T34f24(C, a1));
				l1 = (T34f29(C, ((T34*)(C))->a4));
				((T34*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T34f28(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T34*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T34f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T34*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T34*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T34f28(C, ((T34*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T34*)(C))->a4 = (T34f24(C, a1));
				l1 = (T34f29(C, ((T34*)(C))->a4));
				((T34*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T34f28(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T34*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T34f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T34*)(C))->a11 = l2;
			}
		}
	}
}

/* GEANT_ARGUMENT_VARIABLES.clashes_item */
T6 T34f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T34*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.hash_position */
T6 T34f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T34*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T34*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T34*)(C))->a10)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T34*)(C))->a10)));
		}
	} else {
		R = ((T34*)(C))->a10;
	}
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_item */
T0* T34f28(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T34*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.slots_item */
T6 T34f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T34*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.target_arguments_stack */
T0* T58f3(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* UC_UTF8_STRING.substring */
T0* T195f11(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T1 t1;
	t1 = ((T1)((a2)<(a1)));
	if (t1) {
		R = T195c59((T6)(GE_int32(0)));
	} else {
		R = T195c60(C, a1, a2);
	}
	return R;
}

/* UC_UTF8_STRING.make_from_substring */
T0* T195c60(T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T195));
	*(T195*)C = GE_default195;
	t1 = ((a1)!=(C));
	if (!(t1)) {
		t1 = ((a2)!=((T6)(GE_int32(1))));
	}
	if (!(t1)) {
		t1 = ((a3)!=(((T195*)(C))->a1));
	}
	if (t1) {
		t1 = ((T1)((a3)<(a2)));
		if (t1) {
			T195f59(C, (T6)(GE_int32(0)));
		} else {
			t1 = ((a1)==(C));
			if (t1) {
				l2 = (T195f40(C));
			} else {
				l2 = a1;
			}
			t2 = (T195f25(C));
			l1 = (T194f22(GE_void(t2), l2, a2, a3));
			T195f59(C, l1);
			t3 = ((T6)((a3)-(a2)));
			t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
			T195f61(C, t3);
			((T195*)(C))->a3 = l1;
			T195f68(C, l2, a2, a3, l1, (T6)(GE_int32(1)));
		}
	}
	return C;
}

/* UC_UTF8_STRING.put_substring_at_byte_index */
void T195f68(T0* C, T0* a1, T6 a2, T6 a3, T6 a4, T6 a5)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T6 l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	t1 = (T6f1(&a4, (T6)(GE_int32(0))));
	if (t1) {
		t2 = (T195f36(C));
		t1 = (T83f1(GE_void(t2), a1, ge318ov6412));
		if (t1) {
			t3 = ((T6)((a3)-(a2)));
			l2 = ((T6)((t3)+((T6)(GE_int32(1)))));
			t1 = ((l2)==(a4));
			if (t1) {
				l3 = a5;
				l1 = a2;
				t1 = (T6f1(&l1, a3));
				while (!(t1)) {
					t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
					T195f71(C, t4, l3);
					l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, a3));
				}
			} else {
				l3 = a5;
				l1 = a2;
				t1 = (T6f1(&l1, a3));
				while (!(t1)) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
					t2 = (T195f25(C));
					l4 = (T194f23(GE_void(t2), l5));
					T195f67(C, l5, l4, l3);
					l3 = ((T6)((l3)+(l4)));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, a3));
				}
			}
		} else {
			t2 = (T195f36(C));
			t1 = (T83f1(GE_void(t2), a1, C));
			if (t1) {
				if ((a1)==EIF_VOID) {
					l8 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 195:
						l8 = a1;
						break;
					default:
						l8 = EIF_VOID;
					}
				}
				l3 = a5;
				l1 = (T195f26(GE_void(l8), a2));
				t3 = ((T6)((l1)+(a4)));
				l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				while (!(t1)) {
					t4 = (T195f20(GE_void(l8), l1));
					T195f71(C, t4, l3);
					l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, l2));
				}
			} else {
				if ((a1)==EIF_VOID) {
					l7 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 195:
						l7 = a1;
						break;
					default:
						l7 = EIF_VOID;
					}
				}
				t1 = ((l7)!=(EIF_VOID));
				if (t1) {
					l3 = a5;
					l1 = (T195f26(GE_void(l7), a2));
					t3 = ((T6)((l1)+(a4)));
					l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, l2));
					while (!(t1)) {
						t4 = (T195f20(GE_void(l7), l1));
						T195f71(C, t4, l3);
						l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l1, l2));
					}
				} else {
					if ((a1)==EIF_VOID) {
						l8 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 195:
							l8 = a1;
							break;
						default:
							l8 = EIF_VOID;
						}
					}
					t1 = ((l8)!=(EIF_VOID));
					if (t1) {
						l3 = a5;
						l1 = (T195f26(GE_void(l8), a2));
						t3 = ((T6)((l1)+(a4)));
						l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
						t1 = (T6f1(&l1, l2));
						while (!(t1)) {
							l6 = (T195f21(GE_void(l8), l1));
							t2 = (T195f25(C));
							l4 = (T194f24(GE_void(t2), l6));
							T195f73(C, l6, l4, l3);
							l3 = ((T6)((l3)+(l4)));
							l1 = (T195f24(GE_void(l8), l1));
							t1 = (T6f1(&l1, l2));
						}
					} else {
						l3 = a5;
						l1 = a2;
						t1 = (T6f1(&l1, a3));
						while (!(t1)) {
							l6 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T195f14(a1, l1)));
							t2 = (T195f25(C));
							l4 = (T194f24(GE_void(t2), l6));
							T195f73(C, l6, l4, l3);
							l3 = ((T6)((l3)+(l4)));
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
							t1 = (T6f1(&l1, a3));
						}
					}
				}
			}
		}
	}
}

/* UC_UTF8_STRING.item_code */
T6 T195f14(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	T2 t2;
	t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
	if (t1) {
		t2 = (T195f20(C, a1));
		R = ((T6)(t2));
	} else {
		l1 = (T195f26(C, a1));
		R = (T195f21(C, l1));
	}
	return R;
}

/* STRING_8.item_code */
T6 T17f12(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	T2 t2;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	t2 = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	R = ((T6)(t2));
	return R;
}

/* UC_UTF8_STRING.put_code_at_byte_index */
void T195f73(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T2 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l3 = a1;
	t1 = ((T6)((a3)+(a2)));
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((l1)==(a3));
	while (!(t2)) {
		t3 = (T195f23(C));
		t1 = ((T6)((l3)%((T6)(GE_int32(64)))));
		t1 = ((T6)((t1)+((T6)(GE_int32(128)))));
		l2 = (T197f2(GE_void(t3), t1));
		T195f71(C, l2, l1);
		l3 = ((T6)((l3)/((T6)(GE_int32(64)))));
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((l1)==(a3));
	}
	switch (a2) {
	case (T6)(T6)(GE_int32(1)):
		t3 = (T195f23(C));
		l2 = (T197f2(GE_void(t3), l3));
		break;
	case (T6)(T6)(GE_int32(2)):
		t3 = (T195f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(192)))));
		l2 = (T197f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(3)):
		t3 = (T195f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(224)))));
		l2 = (T197f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(4)):
		t3 = (T195f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(240)))));
		l2 = (T197f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(5)):
		t3 = (T195f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(248)))));
		l2 = (T197f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(6)):
		t3 = (T195f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(252)))));
		l2 = (T197f2(GE_void(t3), t1));
		break;
	default:
		break;
	}
	T195f71(C, l2, a3);
}

/* UC_UTF8_ROUTINES.code_byte_count */
T6 T194f24(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = ((T1)((a1)<((T6)(GE_int32(128)))));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = ((T1)((a1)<((T6)(GE_int32(2048)))));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			t1 = ((T1)((a1)<((T6)(GE_int32(65536)))));
			if (t1) {
				R = (T6)(GE_int32(3));
			} else {
				R = (T6)(GE_int32(4));
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.byte_index */
T6 T195f26(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T2 l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = ((((T195*)(C))->a3)==(((T195*)(C))->a1));
	if (t1) {
		R = a1;
	} else {
		t1 = ((T1)((a1)<(((T195*)(C))->a5)));
		if (t1) {
			l1 = (T6)(GE_int32(1));
			R = (T6)(GE_int32(1));
		} else {
			l1 = ((T195*)(C))->a5;
			R = ((T195*)(C))->a6;
		}
		t1 = ((l1)==(a1));
		while (!(t1)) {
			l2 = (T195f20(C, R));
			t2 = (T195f25(C));
			t3 = (T194f3(GE_void(t2), l2));
			R = ((T6)((R)+(t3)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(a1));
		}
	}
	((T195*)(C))->a5 = a1;
	((T195*)(C))->a6 = R;
	return R;
}

/* UC_UTF8_STRING.put_character_at_byte_index */
void T195f67(T0* C, T2 a1, T6 a2, T6 a3)
{
	T2 l1 = 0;
	T6 l2 = 0;
	T0* t1;
	T6 t2;
	switch (a2) {
	case (T6)(T6)(GE_int32(1)):
		T195f71(C, a1, a3);
		break;
	case (T6)(T6)(GE_int32(2)):
		l2 = ((T6)(a1));
		t1 = (T195f23(C));
		t2 = ((T6)((l2)/((T6)(GE_int32(64)))));
		t2 = ((T6)((t2)+((T6)(GE_int32(192)))));
		l1 = (T197f2(GE_void(t1), t2));
		T195f71(C, l1, a3);
		t1 = (T195f23(C));
		t2 = ((T6)((l2)%((T6)(GE_int32(64)))));
		t2 = ((T6)((t2)+((T6)(GE_int32(128)))));
		l1 = (T197f2(GE_void(t1), t2));
		t2 = ((T6)((a3)+((T6)(GE_int32(1)))));
		T195f71(C, l1, t2);
		break;
	default:
		t2 = ((T6)(a1));
		T195f73(C, t2, a2, a3);
		break;
	}
}

/* UC_UTF8_ROUTINES.character_byte_count */
T6 T194f23(T0* C, T2 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = (T2f17(&a1, (T2)('\377')));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			l1 = ((T6)(a1));
			t1 = ((T1)((l1)<((T6)(GE_int32(2048)))));
			if (t1) {
				R = (T6)(GE_int32(2));
			} else {
				t1 = ((T1)((l1)<((T6)(GE_int32(65536)))));
				if (t1) {
					R = (T6)(GE_int32(3));
				} else {
					R = (T6)(GE_int32(4));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.put_byte */
void T195f71(T0* C, T2 a1, T6 a2)
{
	T6 l1 = 0;
	l1 = ((T195*)(C))->a1;
	T195f61(C, ((T195*)(C))->a3);
	T195f66(C, a1, a2);
	T195f61(C, l1);
}

/* UC_UTF8_STRING.old_put */
void T195f66(T0* C, T2 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T195*)(C))->a2)))->z2[t1] = (a1);
	((T195*)(C))->a4 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.any_ */
T0* T195f36(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* UC_UTF8_ROUTINES.substring_byte_count */
T6 T194f22(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T2 l7 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	T0* t5;
	t1 = (T6f9(&a2, a3));
	if (t1) {
		t2 = (T194f25(C));
		t1 = (T83f1(GE_void(t2), a1, ge247ov7888));
		if (t1) {
			t3 = ((T6)((a3)%((T6)(GE_int32(2)))));
			t1 = ((t3)==((T6)(GE_int32(0))));
			if (t1) {
				l6 = a3;
			} else {
				l6 = ((T6)((a3)-((T6)(GE_int32(1)))));
			}
			l5 = a2;
			t1 = (T6f1(&l5, l6));
			while (!(t1)) {
				l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l5):T195f10(a1, l5)));
				t1 = (T2f17(&l7, (T2)('\177')));
				if (t1) {
					R = ((T6)((R)+((T6)(GE_int32(1)))));
				} else {
					t3 = (T194f23(C, l7));
					R = ((T6)((R)+(t3)));
				}
				t3 = ((T6)((l5)+((T6)(GE_int32(1)))));
				l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, t3):T195f10(a1, t3)));
				t1 = (T2f17(&l7, (T2)('\177')));
				if (t1) {
					R = ((T6)((R)+((T6)(GE_int32(1)))));
				} else {
					t3 = (T194f23(C, l7));
					R = ((T6)((R)+(t3)));
				}
				l5 = ((T6)((l5)+((T6)(GE_int32(2)))));
				t1 = (T6f1(&l5, l6));
			}
			t1 = ((T1)((l6)<(a3)));
			if (t1) {
				t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, a3):T195f10(a1, a3)));
				t3 = (T194f23(C, t4));
				R = ((T6)((R)+(t3)));
			}
		} else {
			t2 = (T194f25(C));
			t5 = (T194f27(C));
			t1 = (T83f1(GE_void(t2), a1, t5));
			if (t1) {
				if ((a1)==EIF_VOID) {
					l2 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 195:
						l2 = a1;
						break;
					default:
						l2 = EIF_VOID;
					}
				}
				t1 = ((a2)==((T6)(GE_int32(1))));
				if (t1) {
					t3 = (((T195*)(GE_void(l2)))->a1);
					t1 = ((a3)==(t3));
				}
				if (t1) {
					R = (((T195*)(GE_void(l2)))->a3);
				} else {
					l3 = (T195f26(GE_void(l2), a2));
					t3 = (((T195*)(GE_void(l2)))->a1);
					t1 = ((a3)==(t3));
					if (t1) {
						t3 = (((T195*)(GE_void(l2)))->a3);
						t3 = ((T6)((t3)-(l3)));
						R = ((T6)((t3)+((T6)(GE_int32(1)))));
					} else {
						t3 = ((T6)((a3)-(a2)));
						t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
						l4 = (T195f43(GE_void(l2), l3, t3));
						R = ((T6)((l4)-(l3)));
					}
				}
			} else {
				if ((a1)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 195:
						l1 = a1;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					t1 = ((a2)==((T6)(GE_int32(1))));
					if (t1) {
						t3 = (((T195*)(GE_void(l1)))->a1);
						t1 = ((a3)==(t3));
					}
					if (t1) {
						R = (((T195*)(GE_void(l1)))->a3);
					} else {
						l3 = (T195f26(GE_void(l1), a2));
						t3 = (((T195*)(GE_void(l1)))->a1);
						t1 = ((a3)==(t3));
						if (t1) {
							t3 = (((T195*)(GE_void(l1)))->a3);
							t3 = ((T6)((t3)-(l3)));
							R = ((T6)((t3)+((T6)(GE_int32(1)))));
						} else {
							t3 = ((T6)((a3)-(a2)));
							t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
							l4 = (T195f43(GE_void(l1), l3, t3));
							R = ((T6)((l4)-(l3)));
						}
					}
				} else {
					l5 = a2;
					t1 = (T6f1(&l5, a3));
					while (!(t1)) {
						t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l5):T195f14(a1, l5)));
						t3 = (T194f24(C, t3));
						R = ((T6)((R)+(t3)));
						l5 = ((T6)((l5)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l5, a3));
					}
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.shifted_byte_index */
T6 T195f43(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T2 t3;
	T6 t4;
	R = a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, a2));
	while (!(t1)) {
		t2 = (T195f25(C));
		t3 = (T195f20(C, R));
		t4 = (T194f3(GE_void(t2), t3));
		R = ((T6)((R)+(t4)));
		t1 = (T6f1(&R, ((T195*)(C))->a3));
		if (t1) {
			l1 = ((T6)((a2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, a2));
	}
	return R;
}

/* UC_UTF8_ROUTINES.dummy_uc_string */
unsigned char ge247os7889 = '\0';
T0* ge247ov7889;
T0* T194f27(T0* C)
{
	T0* R = 0;
	if (ge247os7889) {
		return ge247ov7889;
	} else {
		ge247os7889 = '\1';
		ge247ov7889 = R;
	}
	R = T112c8();
	ge247ov7889 = R;
	return R;
}

/* UC_STRING.make_empty */
T0* T112c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T112));
	*(T112*)C = GE_default112;
	T112f9(C, (T6)(GE_int32(0)));
	return C;
}

/* UC_STRING.make */
void T112f9(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T112f10(C);
	((T112*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T112f9p1(C, (T6)(GE_int32(1)));
	} else {
		T112f9p1(C, a1);
	}
	t2 = (T112f7(C));
	T112f11(C, t2);
	t2 = (T112f7(C));
	T112f12(C, t2);
	T112f11(C, (T6)(GE_int32(0)));
	((T112*)(C))->a2 = (T6)(GE_int32(0));
}

/* UC_STRING.old_set_count */
void T112f12(T0* C, T6 a1)
{
	((T112*)(C))->a1 = a1;
	((T112*)(C))->a3 = (T6)(GE_int32(0));
}

/* UC_STRING.set_count */
void T112f11(T0* C, T6 a1)
{
	T1 t1;
	t1 = (T6f1(&(((T112*)(C))->a4), a1));
	if (t1) {
		T112f10(C);
	}
	((T112*)(C))->a1 = a1;
}

/* UC_STRING.byte_capacity */
T6 T112f7(T0* C)
{
	T6 R = 0;
	R = (T112f7p1(C));
	return R;
}

/* UC_STRING.capacity */
T6 T112f7p1(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T112*)(C))->a6)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_STRING.make */
void T112f9p1(T0* C, T6 a1)
{
	T6 t1;
	((T112*)(C))->a1 = (T6)(GE_int32(0));
	((T112*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T112f13(C, t1);
}

/* UC_STRING.make_area */
void T112f13(T0* C, T6 a1)
{
	((T112*)(C))->a6 = T15c9(a1);
}

/* UC_STRING.reset_byte_index_cache */
void T112f10(T0* C)
{
	((T112*)(C))->a4 = (T6)(GE_int32(1));
	((T112*)(C))->a5 = (T6)(GE_int32(1));
}

/* UC_UTF8_ROUTINES.any_ */
T0* T194f25(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* UC_UTF8_STRING.cloned_string */
T0* T195f40(T0* C)
{
	T0* R = 0;
	R = (T195f42(C));
	return R;
}

/* UC_UTF8_STRING.twin */
T0* T195f42(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T195));
	((T0*)(R))->id = 195;
	T195f77(R, C);
	return R;
}

/* UC_UTF8_STRING.copy */
void T195f77(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = (((T195*)(a1))->a1);
		t2 = (((T195*)(a1))->a3);
		T195f61(a1, t2);
		T195f77p1(C, a1);
		T195f61(C, l1);
		T195f61(a1, l1);
	}
}

/* UC_UTF8_STRING.copy */
void T195f77p1(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = ((T195*)(C))->a2;
		*(T195*)(C) = *(T195*)(a1);
		t1 = ((l1)==(EIF_VOID));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z1);
			t1 = (T6f9(&t2, ((T195*)(C))->a1));
		}
		if (t1) {
			((T195*)(C))->a2 = (T15f4(GE_void(((T195*)(C))->a2)));
		} else {
			T15f8(GE_void(l1), ((T195*)(C))->a2, (T6)(GE_int32(0)), (T6)(GE_int32(0)), ((T195*)(C))->a1);
			((T195*)(C))->a2 = l1;
		}
		((T195*)(C))->a4 = (T6)(GE_int32(0));
	}
}

/* SPECIAL [CHARACTER_8].twin */
T0* T15f4(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T15)+((T15*)(C))->z1*sizeof(T2));
	*(T15*)(R) = *(T15*)(C);
	memcpy(((T15*)(R))->z2,((T15*)(C))->z2,((T15*)(C))->z1*sizeof(T2));
	return R;
}

/* UC_UTF8_STRING.make */
void T195f59(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T195f69(C);
	((T195*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T195f59p1(C, (T6)(GE_int32(1)));
	} else {
		T195f59p1(C, a1);
	}
	t2 = (T195f38(C));
	T195f61(C, t2);
	t2 = (T195f38(C));
	T195f63(C, t2);
	T195f61(C, (T6)(GE_int32(0)));
	((T195*)(C))->a3 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.make */
T0* T195c59(T6 a1)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T195));
	*(T195*)C = GE_default195;
	T195f69(C);
	((T195*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T195f59p1(C, (T6)(GE_int32(1)));
	} else {
		T195f59p1(C, a1);
	}
	t2 = (T195f38(C));
	T195f61(C, t2);
	t2 = (T195f38(C));
	T195f63(C, t2);
	T195f61(C, (T6)(GE_int32(0)));
	((T195*)(C))->a3 = (T6)(GE_int32(0));
	return C;
}

/* UC_UTF8_STRING.old_set_count */
void T195f63(T0* C, T6 a1)
{
	((T195*)(C))->a1 = a1;
	((T195*)(C))->a4 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.byte_capacity */
T6 T195f38(T0* C)
{
	T6 R = 0;
	R = (T195f38p1(C));
	return R;
}

/* UC_UTF8_STRING.capacity */
T6 T195f38p1(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T195*)(C))->a2)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_UTF8_STRING.make */
void T195f59p1(T0* C, T6 a1)
{
	T6 t1;
	((T195*)(C))->a1 = (T6)(GE_int32(0));
	((T195*)(C))->a4 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T195f70(C, t1);
}

/* UC_UTF8_STRING.make_area */
void T195f70(T0* C, T6 a1)
{
	((T195*)(C))->a2 = T15c9(a1);
}

/* STRING_8.substring */
T0* T17f10(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T6 t4;
	t1 = (T6)(GE_int32(1));
	t2 = (T6f9(&t1, a1));
	if (t2) {
		t2 = (T6f9(&a1, a2));
	}
	if (t2) {
		t2 = (T6f9(&a2, ((T17*)(C))->a2));
	}
	if (t2) {
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		R = (T17f19(C, t1));
		t3 = (((T17*)(GE_void(R)))->a1);
		t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
		t4 = ((T6)((a2)-(a1)));
		t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
		T15f8(GE_void(t3), ((T17*)(C))->a1, t1, (T6)(GE_int32(0)), t4);
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		T17f41(GE_void(R), t1);
	} else {
		R = (T17f19(C, (T6)(GE_int32(0))));
	}
	return R;
}

/* STRING_8.set_count */
void T17f41(T0* C, T6 a1)
{
	((T17*)(C))->a2 = a1;
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* STRING_8.new_string */
T0* T17f19(T0* C, T6 a1)
{
	T0* R = 0;
	R = T17c33(a1);
	return R;
}

/* UC_UTF8_STRING.item */
T2 T195f10(T0* C, T6 a1)
{
	T2 R = 0;
	T6 l1 = 0;
	T1 t1;
	t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
	if (t1) {
		R = (T195f20(C, a1));
	} else {
		l1 = (T195f26(C, a1));
		R = (T195f27(C, l1));
	}
	return R;
}

/* UC_UTF8_STRING.character_item_at_byte_index */
T2 T195f27(T0* C, T6 a1)
{
	T2 R = 0;
	T2 l1 = 0;
	T6 l2 = 0;
	T0* t1;
	T6 t2;
	T6 t3;
	T1 t4;
	l1 = (T195f20(C, a1));
	t1 = (T195f25(C));
	t2 = (T194f3(GE_void(t1), l1));
	switch (t2) {
	case (T6)(T6)(GE_int32(1)):
		R = l1;
		break;
	case (T6)(T6)(GE_int32(2)):
		t1 = (T195f25(C));
		l2 = (T194f4(GE_void(t1), l1));
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		l1 = (T195f20(C, t2));
		t2 = ((T6)((l2)*((T6)(GE_int32(64)))));
		t1 = (T195f25(C));
		t3 = (T194f6(GE_void(t1), l1));
		l2 = ((T6)((t2)+(t3)));
		t1 = (T195f22(C));
		t2 = (T198f1(GE_void(t1)));
		t4 = (T6f9(&l2, t2));
		if (t4) {
			t1 = (T195f23(C));
			R = (T197f2(GE_void(t1), l2));
		} else {
			R = (T2)('\000');
		}
		break;
	default:
		l2 = (T195f21(C, a1));
		t1 = (T195f22(C));
		t2 = (T198f1(GE_void(t1)));
		t4 = (T6f9(&l2, t2));
		if (t4) {
			t1 = (T195f23(C));
			R = (T197f2(GE_void(t1), l2));
		} else {
			R = (T2)('\000');
		}
		break;
	}
	return R;
}

/* STRING_8.item */
T2 T17f9(T0* C, T6 a1)
{
	T2 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	R = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].item */
T0* T71f14(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.string_tokens */
T0* T58f10(T0* C, T0* a1, T2 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l6 = (T6)(GE_int32(1));
	l8 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l6, l8));
	if (!(t1)) {
		t1 = (l9);
	}
	while (!(t1)) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l6):T195f10(a1, l6)));
		switch (t2) {
		case (T2)(T2)(' '):
		case (T2)(T2)('\t'):
		case (T2)(T2)('\r'):
		case (T2)(T2)('\n'):
			l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
			break;
		default:
			l9 = EIF_TRUE;
			break;
		}
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
	}
	t1 = ((T1)(!(l9)));
	if (t1) {
		t3 = (T58f2(C));
		l1 = (T76f7(GE_void(t3), GE_ms("", 0)));
	} else {
		l9 = EIF_FALSE;
		l7 = l8;
		while (!(l9)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l7):T195f10(a1, l7)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
		}
		l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l6, l7):T195f11(a1, l6, l7)));
	}
	R = T71c23((T6)(GE_int32(5)));
	while (!(l5)) {
		l5 = EIF_TRUE;
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, (T6)(GE_int32(1))):T195f10(l1, (T6)(GE_int32(1)))));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f48(l1, t4);
				} else {
					T195f76(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, t4):T195f10(l1, t4)));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f49(l1, t4);
				} else {
					T195f74(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
	}
	l3 = (T6)(GE_int32(1));
	l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T195f17(l1, a2, l3)));
	t1 = ((l4)==((T6)(GE_int32(0))));
	if (!(t1)) {
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&l3, t4));
	}
	while (!(t1)) {
		l6 = l3;
		l8 = ((T6)((l4)-((T6)(GE_int32(1)))));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T195f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T195f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T195f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
		l3 = ((T6)((l4)+((T6)(GE_int32(1)))));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f9(&l3, t4));
		if (t1) {
			l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T195f17(l1, a2, l3)));
		}
		t1 = ((l4)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t1 = (T6f1(&l3, t4));
		}
	}
	t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
	t1 = (T6f9(&l3, t4));
	if (t1) {
		l6 = l3;
		l8 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T195f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T195f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T195f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].force_last */
void T71f27(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T71f18(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T71f19(C, t2));
		T71f28(C, t2);
	}
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	((T32*)(GE_void(((T71*)(C))->a2)))->z2[((T71*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [STRING_8].resize */
void T71f28(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T71*)(C))->a2 = (T66f1(GE_void(((T71*)(C))->a4), ((T71*)(C))->a2, t1));
	((T71*)(C))->a5 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].new_capacity */
T6 T71f19(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].extendible */
T1 T71f18(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T71*)(C))->a1)+(a1)));
	R = (T6f5(&(((T71*)(C))->a5), t1));
	return R;
}

/* UC_UTF8_STRING.index_of */
T6 T195f17(T0* C, T2 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l3 = ((T195*)(C))->a1;
	t1 = ((l3)==(((T195*)(C))->a3));
	if (t1) {
		l1 = a2;
		t1 = (T6f1(&l1, l3));
		while (!(t1)) {
			t2 = (T195f20(C, l1));
			t1 = ((t2)==(a1));
			if (t1) {
				R = l1;
				l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l3));
		}
	} else {
		t1 = ((a1)==((T2)('\000')));
		if (t1) {
			t1 = (T6f9(&a2, l3));
			if (t1) {
				t3 = (T195f22(C));
				l4 = (T198f1(GE_void(t3)));
				l2 = (T195f26(C, a2));
				l1 = a2;
				t1 = (T6f1(&l1, l3));
				while (!(t1)) {
					l5 = (T195f21(C, l2));
					t1 = ((l5)==((T6)(GE_int32(0))));
					if (!(t1)) {
						t1 = (T6f1(&l5, l4));
					}
					if (t1) {
						R = l1;
						l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
					} else {
						l2 = (T195f24(C, l2));
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = (T6f1(&l1, l3));
				}
			}
		} else {
			t4 = ((T6)(a1));
			R = (T195f32(C, t4, a2));
		}
	}
	return R;
}

/* UC_UTF8_STRING.index_of_item_code */
T6 T195f32(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l3 = ((T195*)(C))->a1;
	t1 = ((l3)==(((T195*)(C))->a3));
	if (t1) {
		t1 = (T6f1(&a1, (T6)(GE_int32(127))));
		if (t1) {
		} else {
			l1 = a2;
			t1 = (T6f1(&l1, l3));
			while (!(t1)) {
				t2 = (T195f20(C, l1));
				t3 = ((T6)(t2));
				t1 = ((t3)==(a1));
				if (t1) {
					R = l1;
					l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l3));
			}
		}
	} else {
		t1 = (T6f9(&a2, l3));
		if (t1) {
			l2 = (T195f26(C, a2));
			l1 = a2;
			t1 = (T6f1(&l1, l3));
			while (!(t1)) {
				t3 = (T195f21(C, l2));
				t1 = ((t3)==(a1));
				if (t1) {
					R = l1;
					l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
				} else {
					l2 = (T195f24(C, l2));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l3));
			}
		}
	}
	return R;
}

/* STRING_8.index_of */
T6 T17f24(T0* C, T2 a1, T6 a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	l3 = ((T17*)(C))->a2;
	t1 = (T6f9(&a2, l3));
	if (t1) {
		l2 = ((T6)((a2)-((T6)(GE_int32(1)))));
		l1 = ((T17*)(C))->a1;
		t1 = ((l2)==(l3));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z2[l2]);
			t1 = ((t2)==(a1));
		}
		while (!(t1)) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l2)==(l3));
			if (!(t1)) {
				t2 = (((T15*)(GE_void(l1)))->z2[l2]);
				t1 = ((t2)==(a1));
			}
		}
		t1 = ((T1)((l2)<(l3)));
		if (t1) {
			R = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.keep_head */
void T195f74(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		((T195*)(C))->a3 = (T6)(GE_int32(0));
		T195f61(C, (T6)(GE_int32(0)));
	} else {
		t1 = ((T1)((a1)<(((T195*)(C))->a1)));
		if (t1) {
			t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
			if (t1) {
				((T195*)(C))->a3 = a1;
			} else {
				t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
				t2 = (T195f26(C, t2));
				((T195*)(C))->a3 = ((T6)((t2)-((T6)(GE_int32(1)))));
			}
			T195f61(C, a1);
		}
	}
}

/* STRING_8.keep_head */
void T17f49(T0* C, T6 a1)
{
	T1 t1;
	t1 = ((T1)((a1)<(((T17*)(C))->a2)));
	if (t1) {
		((T17*)(C))->a2 = a1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* UC_UTF8_STRING.keep_tail */
void T195f76(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		((T195*)(C))->a3 = (T6)(GE_int32(0));
		T195f61(C, (T6)(GE_int32(0)));
	} else {
		t1 = ((T1)((a1)<(((T195*)(C))->a1)));
		if (t1) {
			t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
			if (t1) {
				l1 = ((T6)((((T195*)(C))->a3)-(a1)));
			} else {
				t2 = ((T6)((((T195*)(C))->a1)-(a1)));
				t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
				t2 = (T195f26(C, t2));
				l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
			}
			t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
			T195f79(C, t2, l1);
			T195f61(C, a1);
		}
	}
}

/* UC_UTF8_STRING.move_bytes_left */
void T195f79(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	t1 = ((T6)((a1)-(a2)));
	t2 = (T6f1(&(((T195*)(C))->a6), t1));
	if (t2) {
		T195f69(C);
	}
	l1 = a1;
	l2 = ((T195*)(C))->a3;
	l3 = ((T195*)(C))->a1;
	T195f61(C, ((T195*)(C))->a3);
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T195f33(C, l1));
		t1 = ((T6)((l1)-(a2)));
		T195f66(C, t3, t1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	T195f61(C, l3);
	((T195*)(C))->a3 = ((T6)((((T195*)(C))->a3)-(a2)));
}

/* STRING_8.keep_tail */
void T17f48(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T17*)(C))->a2;
	t1 = ((T1)((a1)<(l1)));
	if (t1) {
		t2 = ((T6)((l1)-(a1)));
		T15f12(GE_void(((T17*)(C))->a1), t2, (T6)(GE_int32(0)), a1);
		((T17*)(C))->a2 = a1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* DS_ARRAYED_LIST [STRING_8].make */
T0* T71c23(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T71));
	*(T71*)C = GE_default71;
	((T71*)(C))->a4 = T66c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T71*)(C))->a2 = (T66f2(GE_void(((T71*)(C))->a4), t1));
	((T71*)(C))->a5 = a1;
	((T71*)(C))->a3 = (T71f9(C));
	return C;
}

/* DS_ARRAYED_LIST [STRING_8].new_cursor */
T0* T71f9(T0* C)
{
	T0* R = 0;
	R = T72c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [STRING_8].make */
T0* T72c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T72));
	*(T72*)C = GE_default72;
	((T72*)(C))->a3 = a1;
	return C;
}

/* KL_STRING_ROUTINES.cloned_string */
T0* T76f7(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a1)))->id==17)?T17f16(a1):T195f42(a1)));
	return R;
}

/* STRING_8.twin */
T0* T17f16(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T17));
	((T0*)(R))->id = 17;
	T17f40(R, C);
	return R;
}

/* STRING_8.copy */
void T17f40(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = ((T17*)(C))->a1;
		*(T17*)(C) = *(T17*)(a1);
		t1 = ((l1)==(EIF_VOID));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z1);
			t1 = (T6f9(&t2, ((T17*)(C))->a2));
		}
		if (t1) {
			((T17*)(C))->a1 = (T15f4(GE_void(((T17*)(C))->a1)));
		} else {
			T15f8(GE_void(l1), ((T17*)(C))->a1, (T6)(GE_int32(0)), (T6)(GE_int32(0)), ((T17*)(C))->a2);
			((T17*)(C))->a1 = l1;
		}
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* GEANT_DEFINE_ELEMENT.if_attribute_name */
unsigned char ge136os2383 = '\0';
T0* ge136ov2383;
T0* T367f8(T0* C)
{
	T0* R = 0;
	if (ge136os2383) {
		return ge136ov2383;
	} else {
		ge136os2383 = '\1';
		ge136ov2383 = R;
	}
	R = GE_ms("if", 2);
	ge136ov2383 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.make */
T0* T367c16(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T367));
	*(T367*)C = GE_default367;
	T367f17(C, a2);
	T367f18(C, a1);
	return C;
}

/* GEANT_DEFINE_ELEMENT.set_project */
void T367f18(T0* C, T0* a1)
{
	((T367*)(C))->a1 = a1;
}

/* GEANT_DEFINE_ELEMENT.element_make */
void T367f17(T0* C, T0* a1)
{
	T367f19(C, a1);
}

/* GEANT_DEFINE_ELEMENT.set_xml_element */
void T367f19(T0* C, T0* a1)
{
	((T367*)(C))->a2 = a1;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].item */
T0* T117f6(T0* C)
{
	T0* R = 0;
	R = (((T200*)(GE_void(((T117*)(C))->a2)))->a1);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].start */
void T117f8(T0* C)
{
	T116f10(GE_void(((T117*)(C))->a3), C);
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_start */
void T116f10(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T116f7(C, a1));
	l2 = ((((T116*)(C))->a3)==(EIF_VOID));
	T117f10(a1, ((T116*)(C))->a3, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T116f12(C, a1);
	}
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_off */
T1 T116f7(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T117*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].new_cursor */
T0* T116f5(T0* C)
{
	T0* R = 0;
	R = T117c7(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].make */
T0* T117c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T117));
	*(T117*)C = GE_default117;
	((T117*)(C))->a3 = a1;
	((T117*)(C))->a4 = EIF_TRUE;
	return C;
}

/* GEANT_FILESET_ELEMENT.elements_by_name */
T0* T361f18(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T361*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T361f26(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].force_last */
void T116f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T116f6(C));
	if (t1) {
		((T116*)(C))->a3 = T200c3(a1);
		((T116*)(C))->a4 = ((T116*)(C))->a3;
		((T116*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		l1 = ((T116*)(C))->a4;
		((T116*)(C))->a4 = T200c3(a1);
		T200f4(GE_void(l1), ((T116*)(C))->a4);
		((T116*)(C))->a1 = ((T6)((((T116*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [XM_ELEMENT].put_right */
void T200f4(T0* C, T0* a1)
{
	((T200*)(C))->a2 = a1;
}

/* DS_LINKABLE [XM_ELEMENT].make */
T0* T200c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T200));
	*(T200*)C = GE_default200;
	((T200*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [XM_ELEMENT].is_empty */
T1 T116f6(T0* C)
{
	T1 R = 0;
	R = ((((T116*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* GEANT_FILESET_ELEMENT.string_ */
T0* T361f26(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].make */
T0* T116c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T116));
	*(T116*)C = GE_default116;
	((T116*)(C))->a2 = (T116f5(C));
	return C;
}

/* GEANT_FILESET_ELEMENT.include_element_name */
unsigned char ge132os9515 = '\0';
T0* ge132ov9515;
T0* T361f17(T0* C)
{
	T0* R = 0;
	if (ge132os9515) {
		return ge132ov9515;
	} else {
		ge132os9515 = '\1';
		ge132ov9515 = R;
	}
	R = GE_ms("include", 7);
	ge132ov9515 = R;
	return R;
}

/* GEANT_FILESET.set_convert_to_filesystem */
void T362f34(T0* C, T1 a1)
{
	((T362*)(C))->a14 = a1;
}

/* GEANT_FILESET_ELEMENT.convert_attribute_name */
unsigned char ge132os9513 = '\0';
T0* ge132ov9513;
T0* T361f16(T0* C)
{
	T0* R = 0;
	if (ge132os9513) {
		return ge132ov9513;
	} else {
		ge132os9513 = '\1';
		ge132ov9513 = R;
	}
	R = GE_ms("convert", 7);
	ge132ov9513 = R;
	return R;
}

/* GEANT_FILESET.set_mapped_filename_directory_name */
void T362f47(T0* C, T0* a1)
{
	((T362*)(C))->a8 = a1;
}

/* GEANT_FILESET.set_filename_directory_name */
void T362f46(T0* C, T0* a1)
{
	((T362*)(C))->a7 = a1;
}

/* GEANT_FILESET.set_mapped_filename_variable_name */
void T362f45(T0* C, T0* a1)
{
	((T362*)(C))->a18 = a1;
}

/* GEANT_FILESET_ELEMENT.mapped_filename_variable_name_attribute_name */
unsigned char ge132os9511 = '\0';
T0* ge132ov9511;
T0* T361f15(T0* C)
{
	T0* R = 0;
	if (ge132os9511) {
		return ge132ov9511;
	} else {
		ge132os9511 = '\1';
		ge132ov9511 = R;
	}
	R = GE_ms("mapped_filename_variable", 24);
	ge132ov9511 = R;
	return R;
}

/* GEANT_FILESET.set_filename_variable_name */
void T362f44(T0* C, T0* a1)
{
	((T362*)(C))->a17 = a1;
}

/* GEANT_FILESET_ELEMENT.filename_variable_name_attribute_name */
unsigned char ge132os9510 = '\0';
T0* ge132ov9510;
T0* T361f14(T0* C)
{
	T0* R = 0;
	if (ge132os9510) {
		return ge132ov9510;
	} else {
		ge132os9510 = '\1';
		ge132ov9510 = R;
	}
	R = GE_ms("filename_variable", 17);
	ge132ov9510 = R;
	return R;
}

/* GEANT_FILESET.set_concat */
void T362f43(T0* C, T1 a1)
{
	((T362*)(C))->a10 = a1;
}

/* GEANT_FILESET.set_force */
void T362f42(T0* C, T1 a1)
{
	((T362*)(C))->a13 = a1;
}

/* GEANT_FILESET_ELEMENT.boolean_value */
T1 T361f13(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T361f9(C, a1));
	t1 = (T361f26(C));
	t2 = (T361f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T361f26(C));
		t2 = (T361f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T361f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T361f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T361f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T361f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T361f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_FILESET_ELEMENT.std */
T0* T361f22(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.false_attribute_value */
unsigned char ge129os2397 = '\0';
T0* ge129ov2397;
T0* T361f28(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.true_attribute_value */
unsigned char ge129os2396 = '\0';
T0* ge129ov2396;
T0* T361f27(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.force_attribute_name */
unsigned char ge132os9508 = '\0';
T0* ge132ov9508;
T0* T361f12(T0* C)
{
	T0* R = 0;
	if (ge132os9508) {
		return ge132ov9508;
	} else {
		ge132os9508 = '\1';
		ge132ov9508 = R;
	}
	R = GE_ms("force", 5);
	ge132ov9508 = R;
	return R;
}

/* GEANT_FILESET.set_exclude_wc_string */
void T362f41(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T362*)(C))->a16 = a1;
	((T362*)(C))->a4 = T415c14(((T362*)(C))->a16, EIF_TRUE);
	t1 = (T415f11(GE_void(((T362*)(C))->a4)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [fileset] error: invalid exclude wildcard: \'", 46),
((T362*)(C))->a16,
GE_ms("\'", 1));
		T22f41(GE_void(((T362*)(C))->a2), t2);
	}
}

/* LX_DFA_WILDCARD.is_compiled */
T1 T415f11(T0* C)
{
	T1 R = 0;
	R = ((((T415*)(C))->a1)!=(EIF_VOID));
	return R;
}

/* LX_DFA_WILDCARD.compile */
T0* T415c14(T0* a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T1 t1;
	C = (T0*)GE_alloc(sizeof(T415));
	*(T415*)C = GE_default415;
	T415f15(C);
	l3 = T28c10();
	l2 = T439c28();
	T439f29(GE_void(l2), EIF_FALSE);
	T439f30(GE_void(l2), EIF_FALSE);
	T439f31(GE_void(l2), EIF_TRUE);
	T439f32(GE_void(l2), a2);
	l1 = T438c219(l2, l3);
	T438f220(GE_void(l1), a1);
	t1 = (((T438*)(GE_void(l1)))->a1);
	if (t1) {
		l4 = T440c37(l2);
		l5 = l4;
		((T415*)(C))->a1 = (((T440*)(GE_void(l5)))->a1);
		((T415*)(C))->a8 = (((T440*)(GE_void(l5)))->a2);
		((T415*)(C))->a9 = (((T440*)(GE_void(l5)))->a3);
	} else {
		((T415*)(C))->a1 = EIF_VOID;
		((T415*)(C))->a8 = EIF_VOID;
	}
	return C;
}

/* LX_FULL_DFA.make */
T0* T440c37(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T440));
	*(T440*)C = GE_default440;
	T440f38(C, a1);
	T440f39(C);
	T440f40(C);
	return C;
}

/* LX_FULL_DFA.build */
void T440f40(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	((T440*)(C))->a28 = (T6)(GE_int32(0));
	((T440*)(C))->a29 = T492c9(((T440*)(C))->a25, ((T440*)(C))->a26);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, ((T440*)(C))->a30));
	while (!(t1)) {
		l2 = (T491f6(GE_void(((T440*)(C))->a27), l1));
		T440f44(C, l2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T440*)(C))->a30));
	}
	l2 = (T491f6(GE_void(((T440*)(C))->a27), l1));
	T440f44(C, l2);
	l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	t2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	t1 = (T6f1(&l1, t2));
	while (!(t1)) {
		l2 = (T491f6(GE_void(((T440*)(C))->a27), l1));
		T440f44(C, l2);
		t1 = (T489f10(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			((T440*)(C))->a28 = ((T6)((((T440*)(C))->a28)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
		t1 = (T6f1(&l1, t2));
	}
	((T440*)(C))->a31 = (T6f1(&(((T440*)(C))->a28), (T6)(GE_int32(0))));
	((T440*)(C))->a29 = EIF_VOID;
	T440f45(C);
	T440f46(C);
}

/* LX_FULL_DFA.build_accept_table */
void T440f46(T0* C)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l3 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	l1 = T193c9((T6)(GE_int32(0)), l3);
	l2 = (T6)(GE_int32(1));
	t1 = (T6f1(&l2, l3));
	while (!(t1)) {
		l4 = (T491f6(GE_void(((T440*)(C))->a27), l2));
		t1 = (T489f10(GE_void(l4)));
		if (t1) {
			t2 = (((T489*)(GE_void(l4)))->a1);
			t2 = (T464f11(GE_void(t2)));
			t3 = (((T474*)(GE_void(t2)))->a1);
			T193f12(GE_void(l1), t3, l2);
		} else {
			T193f12(GE_void(l1), (T6)(GE_int32(0)), l2);
		}
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, l3));
	}
	((T440*)(C))->a2 = l1;
}

/* ARRAY [INTEGER_32].put */
void T193f12(T0* C, T6 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T193*)(C))->a2)));
	((T63*)(GE_void(((T193*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_ARRAYED_LIST [LX_RULE].first */
T0* T464f11(T0* C)
{
	T0* R = 0;
	R = (((T487*)(GE_void(((T464*)(C))->a2)))->z2[(T6)(GE_int32(1))]);
	return R;
}

/* ARRAY [INTEGER_32].make */
T0* T193c9(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T193));
	*(T193*)C = GE_default193;
	((T193*)(C))->a2 = a1;
	((T193*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T193f10(C, t2);
	} else {
		T193f10(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [INTEGER_32].make_area */
void T193f10(T0* C, T6 a1)
{
	((T193*)(C))->a1 = T63c5(a1);
}

/* LX_FULL_DFA.build_nxt_table */
void T440f45(T0* C)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T6 l9 = 0;
	T6 t1;
	T1 t2;
	((T440*)(C))->a3 = ((T6)((((T440*)(C))->a26)+((T6)(GE_int32(1)))));
	t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((((T440*)(C))->a3)*(t1)));
	t1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	l1 = T193c9((T6)(GE_int32(0)), t1);
	l9 = ((T6)((((T440*)(C))->a30)+((T6)(GE_int32(1)))));
	l5 = ((T6)((((T440*)(C))->a3)-((T6)(GE_int32(1)))));
	l3 = ((T440*)(C))->a3;
	l2 = (T6)(GE_int32(1));
	t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	t2 = (T6f1(&l2, t1));
	while (!(t2)) {
		l6 = (T491f6(GE_void(((T440*)(C))->a27), l2));
		l8 = (((T489*)(GE_void(l6)))->a3);
		t1 = (((T489*)(GE_void(l6)))->a6);
		t2 = ((t1)==(l9));
		if (t2) {
			t1 = ((T6)(-(l9)));
			T193f12(GE_void(l1), t1, l3);
		} else {
			T193f12(GE_void(l1), l9, l3);
		}
		l5 = ((T6)((l5)+(((T440*)(C))->a3)));
		l4 = (T6)(GE_int32(1));
		l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l3, l5));
		while (!(t2)) {
			l7 = (T494f6(GE_void(l8), l4));
			t2 = ((l7)!=(EIF_VOID));
			if (t2) {
				t1 = (((T489*)(GE_void(l7)))->a6);
				T193f12(GE_void(l1), t1, l3);
			} else {
				t1 = (((T489*)(GE_void(l6)))->a6);
				t1 = ((T6)(-(t1)));
				T193f12(GE_void(l1), t1, l3);
			}
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			t2 = (T6f1(&l3, l5));
		}
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
		t2 = (T6f1(&l2, t1));
	}
	((T440*)(C))->a1 = l1;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].target */
T0* T494f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T539f4(GE_void(((T494*)(C))->a1), a1));
	return R;
}

/* ARRAY [LX_DFA_STATE].item */
T0* T539f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T539*)(C))->a2)));
	R = (((T536*)(GE_void(((T539*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_DFA_STATE.is_accepting */
T1 T489f10(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T464f10(GE_void(((T489*)(C))->a1)));
	R = ((T1)(!(t1)));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].is_empty */
T1 T464f10(T0* C)
{
	T1 R = 0;
	R = ((((T464*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_FULL_DFA.build_transitions */
void T440f44(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	l2 = (T492f5(GE_void(((T440*)(C))->a29)));
	t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a2);
	t2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	t1 = ((T6)((t1)-(t2)));
	t3 = ((T1)((t1)<(l2)));
	if (t3) {
		t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a2);
		t1 = ((T6)((t1)+(l2)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1000)))));
		T440f49(C, t1);
	}
	T492f10(GE_void(((T440*)(C))->a29));
	T489f18(GE_void(a1), ((T440*)(C))->a29);
	l6 = (((T492*)(GE_void(((T440*)(C))->a29)))->a1);
	l5 = (((T489*)(GE_void(a1)))->a3);
	l1 = ((T440*)(C))->a25;
	t3 = (T6f1(&l1, ((T440*)(C))->a26));
	while (!(t3)) {
		t3 = (T418f4(GE_void(l6), l1));
		if (t3) {
			t3 = (T492f8(GE_void(((T440*)(C))->a29), l1));
			if (t3) {
				t4 = (T489f9(GE_void(a1), l1));
				l4 = (T440f36(C, t4));
			} else {
				l3 = (T492f4(GE_void(((T440*)(C))->a29), l1));
				l4 = (T494f6(GE_void(l5), l3));
			}
			T494f8(GE_void(l5), l4, l1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, ((T440*)(C))->a26));
	}
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].set_target */
void T494f8(T0* C, T0* a1, T6 a2)
{
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T494f6(C, a2));
	t2 = ((t1)==(l1));
	if (t2) {
		((T494*)(C))->a3 = ((T6)((((T494*)(C))->a3)+((T6)(GE_int32(1)))));
	}
	T539f7(GE_void(((T494*)(C))->a1), a1, a2);
}

/* ARRAY [LX_DFA_STATE].put */
void T539f7(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T539*)(C))->a2)));
	((T536*)(GE_void(((T539*)(C))->a1)))->z2[t1] = (a1);
}

/* LX_SYMBOL_PARTITIONS.previous_symbol */
T6 T492f4(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	t1 = (T523f4(GE_void(((T492*)(C))->a2), a1));
	t1 = (((T521*)(GE_void(t1)))->a2);
	R = (((T521*)(GE_void(t1)))->a1);
	return R;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].item */
T0* T523f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T523*)(C))->a2)));
	R = (((T522*)(GE_void(((T523*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_FULL_DFA.new_state */
T0* T440f36(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T6)((((T440*)(C))->a30)+((T6)(GE_int32(1)))));
	l2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	t1 = ((R)!=(EIF_VOID));
	if (!(t1)) {
		t1 = (T6f1(&l1, l2));
	}
	while (!(t1)) {
		R = (T491f6(GE_void(((T440*)(C))->a27), l1));
		t1 = (T489f11(GE_void(R), a1));
		t1 = ((T1)(!(t1)));
		if (t1) {
			R = EIF_VOID;
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = ((R)!=(EIF_VOID));
		if (!(t1)) {
			t1 = (T6f1(&l1, l2));
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = a1;
		T491f9(GE_void(((T440*)(C))->a27), a1);
		t2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
		T489f17(GE_void(a1), t2);
	}
	return R;
}

/* LX_DFA_STATE.set_id */
void T489f17(T0* C, T6 a1)
{
	((T489*)(C))->a6 = a1;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].put_last */
void T491f9(T0* C, T0* a1)
{
	((T491*)(C))->a1 = ((T6)((((T491*)(C))->a1)+((T6)(GE_int32(1)))));
	((T536*)(GE_void(((T491*)(C))->a3)))->z2[((T491*)(C))->a1] = (a1);
}

/* LX_DFA_STATE.is_equal */
T1 T489f11(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T489f14(C));
	t2 = (T83f1(GE_void(t1), C, a1));
	if (t2) {
		t3 = (((T489*)(GE_void(a1)))->a5);
		t2 = ((((T489*)(C))->a5)==(t3));
	}
	if (t2) {
		t1 = (((T489*)(GE_void(a1)))->a2);
		R = (T490f19(GE_void(((T489*)(C))->a2), t1));
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].is_equal */
T1 T490f19(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T0* t4;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T490f21(C));
		t1 = (T83f1(GE_void(t2), C, a1));
		if (t1) {
			t3 = (((T490*)(GE_void(a1)))->a1);
			t1 = ((t3)==(((T490*)(C))->a1));
		}
		if (t1) {
			l3 = (((T490*)(GE_void(a1)))->a2);
			l1 = (T6)(GE_int32(1));
			l2 = ((T490*)(C))->a1;
			R = EIF_TRUE;
			t1 = ((T1)(!(R)));
			if (!(t1)) {
				t1 = (T6f1(&l1, l2));
			}
			while (!(t1)) {
				t2 = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[l1]);
				t4 = (((T531*)(GE_void(l3)))->z2[l1]);
				R = ((t2)==(t4));
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((T1)(!(R)));
				if (!(t1)) {
					t1 = (T6f1(&l1, l2));
				}
			}
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].any_ */
T0* T490f21(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* LX_DFA_STATE.any_ */
T0* T489f14(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* LX_DFA_STATE.new_state */
T0* T489f9(T0* C, T6 a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T6 t4;
	l2 = (((T490*)(GE_void(((T489*)(C))->a2)))->a1);
	l4 = T490c23(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T490f10(GE_void(((T489*)(C))->a2), l1));
		l3 = (((T497*)(GE_void(t2)))->a2);
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			t1 = (T517x13304T6(GE_void(l3), a1));
		}
		if (t1) {
			t2 = (T517x13301(GE_void(l3)));
			T490f24(GE_void(l4), t2);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	t3 = (T489f12(C));
	t4 = (T489f13(C));
	R = T489c16(l4, t3, t4);
	return R;
}

/* LX_DFA_STATE.make */
T0* T489c16(T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T489));
	*(T489*)C = GE_default489;
	l2 = (((T490*)(GE_void(a1)))->a1);
	((T489*)(C))->a2 = T490c23(l2);
	((T489*)(C))->a3 = T494c7(a2, a3);
	((T489*)(C))->a1 = T464c12(l2);
	((T489*)(C))->a4 = T464c12(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T490f10(GE_void(a1), l1));
		t2 = (((T497*)(GE_void(l3)))->a2);
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (((T497*)(GE_void(l3)))->a2);
			if ((t2)==EIF_VOID) {
				l5 = EIF_VOID;
			} else {
				switch (((T0*)(t2))->id) {
				case 518:
					l5 = t2;
					break;
				default:
					l5 = EIF_VOID;
				}
			}
			t1 = ((l5)==(EIF_VOID));
			if (t1) {
				T490f27(GE_void(((T489*)(C))->a2), l3);
				t3 = (((T497*)(GE_void(l3)))->a4);
				((T489*)(C))->a5 = ((T6)((((T489*)(C))->a5)+(t3)));
			} else {
				l4 = (((T518*)(GE_void(l5)))->a1);
				t1 = (T490f7(GE_void(a1), l4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					T490f27(GE_void(a1), l4);
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				}
			}
		}
		t2 = (((T497*)(GE_void(l3)))->a3);
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (((T497*)(GE_void(l3)))->a3);
			l4 = (((T518*)(GE_void(t2)))->a1);
			t1 = (T490f7(GE_void(a1), l4));
			t1 = ((T1)(!(t1)));
			if (t1) {
				T490f27(GE_void(a1), l4);
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
		}
		t1 = (T497f7(GE_void(l3)));
		if (t1) {
			t1 = (T497f6(GE_void(l3)));
			if (t1) {
				t2 = (((T497*)(GE_void(l3)))->a5);
				T464f13(GE_void(((T489*)(C))->a4), t2);
			} else {
				t2 = (((T497*)(GE_void(l3)))->a5);
				T464f13(GE_void(((T489*)(C))->a1), t2);
			}
			t1 = (T490f8(GE_void(((T489*)(C))->a2)));
			if (!(t1)) {
				t2 = (T490f9(GE_void(((T489*)(C))->a2)));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T490f27(GE_void(((T489*)(C))->a2), l3);
				t3 = (((T497*)(GE_void(l3)))->a4);
				((T489*)(C))->a5 = ((T6)((((T489*)(C))->a5)+(t3)));
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	t2 = (T489f8(C));
	T490f29(GE_void(((T489*)(C))->a2), t2);
	t1 = (T464f10(GE_void(((T489*)(C))->a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T489f7(C));
		T464f16(GE_void(((T489*)(C))->a1), t2);
		t2 = (T464f11(GE_void(((T489*)(C))->a1)));
		T474f22(GE_void(t2), EIF_TRUE);
	}
	t2 = (T489f7(C));
	T464f16(GE_void(((T489*)(C))->a4), t2);
	return C;
}

/* LX_RULE.set_useful */
void T474f22(T0* C, T1 a1)
{
	((T474*)(C))->a10 = a1;
}

/* DS_ARRAYED_LIST [LX_RULE].sort */
void T464f16(T0* C, T0* a1)
{
	T529f3(GE_void(a1), C);
}

/* DS_BUBBLE_SORTER [LX_RULE].sort */
void T529f3(T0* C, T0* a1)
{
	T529f4(C, a1, ((T529*)(C))->a1);
}

/* DS_BUBBLE_SORTER [LX_RULE].sort_with_comparator */
void T529f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T464f10(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T464*)(a1))->a1);
		T529f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_BUBBLE_SORTER [LX_RULE].subsort_with_comparator */
void T529f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	l1 = a4;
	t1 = (T6f9(&l1, a3));
	while (!(t1)) {
		l2 = a3;
		t1 = (T6f5(&l2, l1));
		while (!(t1)) {
			l4 = (T464f6(a1, l2));
			t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			l5 = (T464f6(a1, t2));
			t1 = (T548f1(GE_void(a2), l5, l4));
			if (t1) {
				T464f21(a1, l5, l2);
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T464f21(a1, l4, t2);
				l3 = EIF_TRUE;
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l1));
		}
		if (l3) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l3 = EIF_FALSE;
		} else {
			l1 = a3;
		}
		t1 = (T6f9(&l1, a3));
	}
}

/* DS_ARRAYED_LIST [LX_RULE].replace */
void T464f21(T0* C, T0* a1, T6 a2)
{
	((T487*)(GE_void(((T464*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [LX_RULE].less_than */
T1 T548f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T474f12(GE_void(a1), a2));
	return R;
}

/* LX_RULE.infix "<" */
T1 T474f12(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T474*)(GE_void(a1)))->a1);
	R = ((T1)((((T474*)(C))->a1)<(t1)));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].item */
T0* T464f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T487*)(GE_void(((T464*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_DFA_STATE.rule_sorter */
unsigned char ge321os11487 = '\0';
T0* ge321ov11487;
T0* T489f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge321os11487) {
		return ge321ov11487;
	} else {
		ge321os11487 = '\1';
		ge321ov11487 = R;
	}
	l1 = T548c2();
	R = T529c2(l1);
	ge321ov11487 = R;
	return R;
}

/* DS_BUBBLE_SORTER [LX_RULE].make */
T0* T529c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T529));
	*(T529*)C = GE_default529;
	((T529*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [LX_RULE].make */
T0* T548c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T548));
	*(T548*)C = GE_default548;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].sort */
void T490f29(T0* C, T0* a1)
{
	T527f3(GE_void(a1), C);
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].sort */
void T527f3(T0* C, T0* a1)
{
	T527f4(C, a1, ((T527*)(C))->a1);
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].sort_with_comparator */
void T527f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T490f8(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T490*)(a1))->a1);
		T527f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].subsort_with_comparator */
void T527f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	l1 = a4;
	t1 = (T6f9(&l1, a3));
	while (!(t1)) {
		l2 = a3;
		t1 = (T6f5(&l2, l1));
		while (!(t1)) {
			l4 = (T490f10(a1, l2));
			t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			l5 = (T490f10(a1, t2));
			t1 = (T551f1(GE_void(a2), l5, l4));
			if (t1) {
				T490f26(a1, l5, l2);
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T490f26(a1, l4, t2);
				l3 = EIF_TRUE;
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l1));
		}
		if (l3) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l3 = EIF_FALSE;
		} else {
			l1 = a3;
		}
		t1 = (T6f9(&l1, a3));
	}
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].replace */
void T490f26(T0* C, T0* a1, T6 a2)
{
	((T531*)(GE_void(((T490*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [LX_NFA_STATE].less_than */
T1 T551f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T497f8(GE_void(a1), a2));
	return R;
}

/* LX_NFA_STATE.infix "<" */
T1 T497f8(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T497*)(GE_void(a1)))->a4);
	R = ((T1)((((T497*)(C))->a4)<(t1)));
	return R;
}

/* LX_DFA_STATE.bubble_sorter */
unsigned char ge321os11486 = '\0';
T0* ge321ov11486;
T0* T489f8(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge321os11486) {
		return ge321ov11486;
	} else {
		ge321os11486 = '\1';
		ge321ov11486 = R;
	}
	l1 = T551c2();
	R = T527c2(l1);
	ge321ov11486 = R;
	return R;
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].make */
T0* T527c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T527));
	*(T527*)C = GE_default527;
	((T527*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [LX_NFA_STATE].make */
T0* T551c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T551));
	*(T551*)C = GE_default551;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].last */
T0* T490f9(T0* C)
{
	T0* R = 0;
	R = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[((T490*)(C))->a1]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].is_empty */
T1 T490f8(T0* C)
{
	T1 R = 0;
	R = ((((T490*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].force_last */
void T464f13(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T464f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T464*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T464f9(C, t2));
		T464f14(C, t2);
	}
	((T464*)(C))->a1 = ((T6)((((T464*)(C))->a1)+((T6)(GE_int32(1)))));
	((T487*)(GE_void(((T464*)(C))->a2)))->z2[((T464*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_RULE].resize */
void T464f14(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T464*)(C))->a2 = (T506f2(GE_void(((T464*)(C))->a3), ((T464*)(C))->a2, t1));
	((T464*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].resize */
T0* T506f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T487*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T487f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_RULE].resized_area */
T0* T487f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T487c4(a1);
	t1 = (((T487*)(C))->z1);
	T487f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_RULE].copy_data */
void T487f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T487f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T487*)(a1))->z2[l1]);
			((T487*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_RULE].move_data */
void T487f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T487f8(C, a1, a2, a3);
			} else {
				T487f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T487f8(C, a1, a2, a3);
			} else {
				T487f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_RULE].overlapping_move */
void T487f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T487*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T487*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T487*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T487*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_RULE].non_overlapping_move */
void T487f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T487*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T487*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_RULE].make */
T0* T487c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T487)+a1*sizeof(T0*));
	*(T487*)C = GE_default487;
	((T487*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [LX_RULE].new_capacity */
T6 T464f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].extendible */
T1 T464f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T464*)(C))->a1)+(a1)));
	R = (T6f5(&(((T464*)(C))->a4), t1));
	return R;
}

/* LX_NFA_STATE.is_accepting_head */
T1 T497f6(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T497f7(C));
	if (t1) {
		t1 = ((T1)(!(((T497*)(C))->a1)));
	}
	if (t1) {
		R = (T497f9(C));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* LX_NFA_STATE.has_transition */
T1 T497f9(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T497*)(C))->a2)!=(EIF_VOID));
	if (!(t1)) {
		R = ((((T497*)(C))->a3)!=(EIF_VOID));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* LX_NFA_STATE.is_accepting */
T1 T497f7(T0* C)
{
	T1 R = 0;
	R = ((((T497*)(C))->a5)!=(EIF_VOID));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].has */
T1 T490f7(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T490*)(C))->a1;
	l2 = ((T490*)(C))->a3;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[l1]);
			t1 = ((GE_void(l2), t2, a1, (T1)0));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].force_last */
void T490f27(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T490f12(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T490*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T490f13(C, t2));
		T490f31(C, t2);
	}
	((T490*)(C))->a1 = ((T6)((((T490*)(C))->a1)+((T6)(GE_int32(1)))));
	((T531*)(GE_void(((T490*)(C))->a2)))->z2[((T490*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].resize */
void T490f31(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T490*)(C))->a2 = (T533f2(GE_void(((T490*)(C))->a4), ((T490*)(C))->a2, t1));
	((T490*)(C))->a5 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].resize */
T0* T533f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T531*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T531f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_NFA_STATE].resized_area */
T0* T531f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T531c4(a1);
	t1 = (((T531*)(C))->z1);
	T531f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_NFA_STATE].copy_data */
void T531f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T531f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T531*)(a1))->z2[l1]);
			((T531*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_NFA_STATE].move_data */
void T531f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T531f8(C, a1, a2, a3);
			} else {
				T531f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T531f8(C, a1, a2, a3);
			} else {
				T531f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_NFA_STATE].overlapping_move */
void T531f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T531*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T531*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T531*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T531*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_NFA_STATE].non_overlapping_move */
void T531f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T531*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T531*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_NFA_STATE].make */
T0* T531c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T531)+a1*sizeof(T0*));
	*(T531*)C = GE_default531;
	((T531*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].new_capacity */
T6 T490f13(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].extendible */
T1 T490f12(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T490*)(C))->a1)+(a1)));
	R = (T6f5(&(((T490*)(C))->a5), t1));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].make */
T0* T464c12(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T464));
	*(T464*)C = GE_default464;
	((T464*)(C))->a3 = T506c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T464*)(C))->a2 = (T506f1(GE_void(((T464*)(C))->a3), t1));
	((T464*)(C))->a4 = a1;
	((T464*)(C))->a5 = (T464f7(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_RULE].new_cursor */
T0* T464f7(T0* C)
{
	T0* R = 0;
	R = T507c4(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_RULE].make */
T0* T507c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T507));
	*(T507*)C = GE_default507;
	((T507*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].make */
T0* T506f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T554c2(a1);
	R = (((T554*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_RULE].make_area */
T0* T554c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T554));
	*(T554*)C = GE_default554;
	((T554*)(C))->a1 = T487c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].default_create */
T0* T506c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T506));
	*(T506*)C = GE_default506;
	return C;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].make */
T0* T494c7(T6 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T494));
	*(T494*)C = GE_default494;
	((T494*)(C))->a1 = T539c5(a1, a2);
	((T494*)(C))->a2 = T540c1();
	return C;
}

/* KL_ARRAY_ROUTINES [LX_DFA_STATE].default_create */
T0* T540c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T540));
	*(T540*)C = GE_default540;
	return C;
}

/* ARRAY [LX_DFA_STATE].make */
T0* T539c5(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T539));
	*(T539*)C = GE_default539;
	((T539*)(C))->a2 = a1;
	((T539*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T539f6(C, t2);
	} else {
		T539f6(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [LX_DFA_STATE].make_area */
void T539f6(T0* C, T6 a1)
{
	((T539*)(C))->a1 = T536c4(a1);
}

/* SPECIAL [LX_DFA_STATE].make */
T0* T536c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T536)+a1*sizeof(T0*));
	*(T536*)C = GE_default536;
	((T536*)(C))->z1 = a1;
	return C;
}

/* LX_DFA_STATE.maximum_symbol */
T6 T489f13(T0* C)
{
	T6 R = 0;
	R = (T494f5(GE_void(((T489*)(C))->a3)));
	return R;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].upper */
T6 T494f5(T0* C)
{
	T6 R = 0;
	R = (((T539*)(GE_void(((T494*)(C))->a1)))->a3);
	return R;
}

/* LX_DFA_STATE.minimum_symbol */
T6 T489f12(T0* C)
{
	T6 R = 0;
	R = (T494f4(GE_void(((T489*)(C))->a3)));
	return R;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].lower */
T6 T494f4(T0* C)
{
	T6 R = 0;
	R = (((T539*)(GE_void(((T494*)(C))->a1)))->a2);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put_last */
void T490f24(T0* C, T0* a1)
{
	((T490*)(C))->a1 = ((T6)((((T490*)(C))->a1)+((T6)(GE_int32(1)))));
	((T531*)(GE_void(((T490*)(C))->a2)))->z2[((T490*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].item */
T0* T490f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].make */
T0* T490c23(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T490));
	*(T490*)C = GE_default490;
	((T490*)(C))->a4 = T533c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T490*)(C))->a2 = (T533f1(GE_void(((T490*)(C))->a4), t1));
	((T490*)(C))->a5 = a1;
	((T490*)(C))->a6 = (T490f11(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].new_cursor */
T0* T490f11(T0* C)
{
	T0* R = 0;
	R = T534c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].make */
T0* T534c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T534));
	*(T534*)C = GE_default534;
	((T534*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].make */
T0* T533f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T557c2(a1);
	R = (((T557*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_NFA_STATE].make_area */
T0* T557c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T557));
	*(T557*)C = GE_default557;
	((T557*)(C))->a1 = T531c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].default_create */
T0* T533c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T533));
	*(T533*)C = GE_default533;
	return C;
}

/* LX_SYMBOL_PARTITIONS.is_representative */
T1 T492f8(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T523f4(GE_void(((T492*)(C))->a2), a1));
	t1 = (((T521*)(GE_void(t1)))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ARRAY [BOOLEAN].item */
T1 T418f4(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T418*)(C))->a2)));
	R = (((T151*)(GE_void(((T418*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_DFA_STATE.partition */
void T489f18(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T490*)(GE_void(((T489*)(C))->a2)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T490f10(GE_void(((T489*)(C))->a2), l1));
		l3 = (((T497*)(GE_void(t2)))->a2);
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			T517x13305T0(GE_void(l3), a1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_SYMBOL_PARTITIONS.initialize */
void T492f10(T0* C)
{
	T492f10p1(C);
	T418f7(GE_void(((T492*)(C))->a1));
}

/* ARRAY [BOOLEAN].clear_all */
void T418f7(T0* C)
{
	T151f6(GE_void(((T418*)(C))->a1));
}

/* SPECIAL [BOOLEAN].clear_all */
void T151f6(T0* C)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T151*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T151*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* LX_SYMBOL_PARTITIONS.initialize */
void T492f10p1(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T0* t2;
	T1 t3;
	l2 = (T492f6(C));
	t1 = (T492f7(C));
	t2 = (T523f4(GE_void(((T492*)(C))->a2), t1));
	t1 = (T492f7(C));
	T521f5(GE_void(t2), t1);
	t1 = (T492f7(C));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T523f4(GE_void(((T492*)(C))->a2), l1));
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = (T523f4(GE_void(((T492*)(C))->a2), t1));
		T521f9(GE_void(l3), t2);
		T521f5(GE_void(l3), l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	((T492*)(C))->a3 = (T6)(GE_int32(0));
}

/* DS_BILINKABLE [INTEGER_32].put_left */
void T521f9(T0* C, T0* a1)
{
	((T521*)(C))->a2 = a1;
	T521f10(GE_void(a1), C);
}

/* DS_BILINKABLE [INTEGER_32].attach_right */
void T521f10(T0* C, T0* a1)
{
	((T521*)(C))->a3 = a1;
}

/* DS_BILINKABLE [INTEGER_32].put */
void T521f5(T0* C, T6 a1)
{
	((T521*)(C))->a1 = a1;
}

/* LX_SYMBOL_PARTITIONS.lower */
T6 T492f7(T0* C)
{
	T6 R = 0;
	R = (((T523*)(GE_void(((T492*)(C))->a2)))->a2);
	return R;
}

/* LX_SYMBOL_PARTITIONS.upper */
T6 T492f6(T0* C)
{
	T6 R = 0;
	R = (((T523*)(GE_void(((T492*)(C))->a2)))->a3);
	return R;
}

/* LX_FULL_DFA.resize */
void T440f49(T0* C, T6 a1)
{
	T491f10(GE_void(((T440*)(C))->a27), a1);
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].resize */
void T491f10(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T491*)(C))->a3 = (T537f2(GE_void(((T491*)(C))->a4), ((T491*)(C))->a3, t1));
	((T491*)(C))->a2 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].resize */
T0* T537f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T536*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T536f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_DFA_STATE].resized_area */
T0* T536f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T536c4(a1);
	t1 = (((T536*)(C))->z1);
	T536f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_DFA_STATE].copy_data */
void T536f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T536f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T536*)(a1))->z2[l1]);
			((T536*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_DFA_STATE].move_data */
void T536f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T536f8(C, a1, a2, a3);
			} else {
				T536f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T536f8(C, a1, a2, a3);
			} else {
				T536f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_DFA_STATE].overlapping_move */
void T536f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T536*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T536*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T536*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T536*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_DFA_STATE].non_overlapping_move */
void T536f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T536*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T536*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* LX_SYMBOL_PARTITIONS.capacity */
T6 T492f5(T0* C)
{
	T6 R = 0;
	R = (T523f5(GE_void(((T492*)(C))->a2)));
	return R;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].count */
T6 T523f5(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T523*)(C))->a3)-(((T523*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].item */
T0* T491f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T536*)(GE_void(((T491*)(C))->a3)))->z2[a1]);
	return R;
}

/* LX_SYMBOL_PARTITIONS.make */
T0* T492c9(T6 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T492));
	*(T492*)C = GE_default492;
	((T492*)(C))->a1 = T418c5(a1, a2);
	T492f9p1(C, a1, a2);
	return C;
}

/* LX_SYMBOL_PARTITIONS.make */
void T492f9p1(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	((T492*)(C))->a2 = T523c6(a1, a2);
	l2 = a1;
	t1 = (T6f1(&l2, a2));
	while (!(t1)) {
		l1 = T521c4(l2);
		T523f7(GE_void(((T492*)(C))->a2), l1, l2);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, a2));
	}
	T492f10(C);
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].put */
void T523f7(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T523*)(C))->a2)));
	((T522*)(GE_void(((T523*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_BILINKABLE [INTEGER_32].make */
T0* T521c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T521));
	*(T521*)C = GE_default521;
	((T521*)(C))->a1 = a1;
	return C;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].make */
T0* T523c6(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T523));
	*(T523*)C = GE_default523;
	((T523*)(C))->a2 = a1;
	((T523*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T523f8(C, t2);
	} else {
		T523f8(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].make_area */
void T523f8(T0* C, T6 a1)
{
	((T523*)(C))->a1 = T522c2(a1);
}

/* SPECIAL [DS_BILINKABLE [INTEGER_32]].make */
T0* T522c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T522)+a1*sizeof(T0*));
	*(T522*)C = GE_default522;
	((T522*)(C))->z1 = a1;
	return C;
}

/* ARRAY [BOOLEAN].make */
T0* T418c5(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T418));
	*(T418*)C = GE_default418;
	((T418*)(C))->a2 = a1;
	((T418*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T418f8(C, t2);
	} else {
		T418f8(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [BOOLEAN].make_area */
void T418f8(T0* C, T6 a1)
{
	((T418*)(C))->a1 = T151c4(a1);
}

/* SPECIAL [BOOLEAN].make */
T0* T151c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T151)+a1*sizeof(T1));
	*(T151*)C = GE_default151;
	((T151*)(C))->z1 = a1;
	return C;
}

/* LX_FULL_DFA.put_eob_state */
void T440f39(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T6 t2;
	l2 = T490c23((T6)(GE_int32(0)));
	l1 = T489c16(l2, ((T440*)(C))->a25, ((T440*)(C))->a26);
	l3 = T474c14(((T440*)(C))->a22);
	t1 = (((T489*)(GE_void(l1)))->a1);
	T464f15(GE_void(t1), l3);
	T491f9(GE_void(((T440*)(C))->a27), l1);
	t2 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	T489f17(GE_void(l1), t2);
}

/* DS_ARRAYED_LIST [LX_RULE].force_first */
void T464f15(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T464f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T464*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T464f9(C, t2));
		T464f14(C, t2);
	}
	T464f17(C, a1, (T6)(GE_int32(1)));
}

/* DS_ARRAYED_LIST [LX_RULE].put */
void T464f17(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T464*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T464f18(C, a1);
	} else {
		T464f19(C, a2, (T6)(GE_int32(1)));
		T464f20(C, a2, (T6)(GE_int32(1)));
		((T487*)(GE_void(((T464*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [LX_RULE].move_cursors_right */
void T464f20(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T464*)(C))->a5;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T507*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T507f5(GE_void(l1), t2);
		}
		l1 = (((T507*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_RULE].set_position */
void T507f5(T0* C, T6 a1)
{
	((T507*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [LX_RULE].move_right */
void T464f19(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T464*)(C))->a1;
	((T464*)(C))->a1 = ((T6)((((T464*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T487*)(GE_void(((T464*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T487*)(GE_void(((T464*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* DS_ARRAYED_LIST [LX_RULE].put_last */
void T464f18(T0* C, T0* a1)
{
	((T464*)(C))->a1 = ((T6)((((T464*)(C))->a1)+((T6)(GE_int32(1)))));
	((T487*)(GE_void(((T464*)(C))->a2)))->z2[((T464*)(C))->a1] = (a1);
}

/* LX_RULE.make_default */
T0* T474c14(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T474));
	*(T474*)C = GE_default474;
	((T474*)(C))->a1 = a1;
	((T474*)(C))->a2 = (T474f13(C));
	((T474*)(C))->a3 = (T474f11(C));
	((T474*)(C))->a4 = (T6)(GE_int32(-1));
	((T474*)(C))->a5 = (T6)(GE_int32(-1));
	((T474*)(C))->a6 = (T6)(GE_int32(-1));
	((T474*)(C))->a7 = (T6)(GE_int32(-1));
	return C;
}

/* LX_RULE.dummy_action */
unsigned char ge408os13095 = '\0';
T0* ge408ov13095;
T0* T474f11(T0* C)
{
	T0* R = 0;
	if (ge408os13095) {
		return ge408ov13095;
	} else {
		ge408os13095 = '\1';
		ge408ov13095 = R;
	}
	R = T525c2(GE_ms("", 0));
	ge408ov13095 = R;
	return R;
}

/* LX_ACTION.make */
T0* T525c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T525));
	*(T525*)C = GE_default525;
	((T525*)(C))->a1 = a1;
	return C;
}

/* LX_RULE.dummy_pattern */
unsigned char ge408os13094 = '\0';
T0* ge408ov13094;
T0* T474f13(T0* C)
{
	T0* R = 0;
	if (ge408os13094) {
		return ge408ov13094;
	} else {
		ge408os13094 = '\1';
		ge408ov13094 = R;
	}
	R = T472c12(EIF_FALSE);
	ge408ov13094 = R;
	return R;
}

/* LX_NFA.make_epsilon */
T0* T472c12(T1 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T472));
	*(T472*)C = GE_default472;
	((T472*)(C))->a1 = a1;
	((T472*)(C))->a2 = T490c23((T6)(GE_int32(100)));
	l2 = T497c10(a1);
	l3 = T497c10(a1);
	l1 = T518c3(l3);
	T497f11(GE_void(l2), l1);
	T490f25(GE_void(((T472*)(C))->a2), l2);
	T490f24(GE_void(((T472*)(C))->a2), l3);
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put_first */
void T490f25(T0* C, T0* a1)
{
	T490f30(C, a1, (T6)(GE_int32(1)));
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put */
void T490f30(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T490*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T490f24(C, a1);
	} else {
		T490f33(C, a2, (T6)(GE_int32(1)));
		T490f34(C, a2, (T6)(GE_int32(1)));
		((T531*)(GE_void(((T490*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].move_cursors_right */
void T490f34(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T490*)(C))->a6;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T534*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T534f8(GE_void(l1), t2);
		}
		l1 = (((T534*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].set_position */
void T534f8(T0* C, T6 a1)
{
	((T534*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].move_right */
void T490f33(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T490*)(C))->a1;
	((T490*)(C))->a1 = ((T6)((((T490*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T531*)(GE_void(((T490*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* LX_NFA_STATE.set_transition */
void T497f11(T0* C, T0* a1)
{
	((T497*)(C))->a2 = a1;
}

/* LX_EPSILON_TRANSITION [LX_NFA_STATE].make */
T0* T518c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T518));
	*(T518*)C = GE_default518;
	((T518*)(C))->a1 = a1;
	return C;
}

/* LX_NFA_STATE.make */
T0* T497c10(T1 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T497));
	*(T497*)C = GE_default497;
	((T497*)(C))->a1 = a1;
	return C;
}

/* LX_FULL_DFA.initialize */
void T440f38(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	((T440*)(C))->a4 = (((T439*)(GE_void(a1)))->a15);
	t1 = ((((T440*)(C))->a4)==(EIF_VOID));
	if (t1) {
		((T440*)(C))->a4 = ge367ov11432;
	}
	((T440*)(C))->a5 = (((T439*)(GE_void(a1)))->a9);
	((T440*)(C))->a6 = (((T439*)(GE_void(a1)))->a10);
	((T440*)(C))->a7 = (((T439*)(GE_void(a1)))->a16);
	((T440*)(C))->a8 = (((T439*)(GE_void(a1)))->a17);
	((T440*)(C))->a9 = (((T439*)(GE_void(a1)))->a18);
	((T440*)(C))->a10 = (((T439*)(GE_void(a1)))->a13);
	((T440*)(C))->a11 = (((T439*)(GE_void(a1)))->a19);
	((T440*)(C))->a12 = (((T439*)(GE_void(a1)))->a20);
	((T440*)(C))->a13 = (((T439*)(GE_void(a1)))->a21);
	((T440*)(C))->a14 = (((T439*)(GE_void(a1)))->a22);
	((T440*)(C))->a15 = (((T439*)(GE_void(a1)))->a23);
	((T440*)(C))->a16 = (((T439*)(GE_void(a1)))->a11);
	t2 = (((T439*)(GE_void(a1)))->a8);
	((T440*)(C))->a17 = (T465f8(GE_void(t2)));
	t2 = (((T439*)(GE_void(a1)))->a7);
	T440f41(C, t2);
	t2 = (((T439*)(GE_void(a1)))->a12);
	t3 = (T33f10(GE_void(((T440*)(C))->a17)));
	t3 = ((T6)((t3)-((T6)(GE_int32(1)))));
	T440f42(C, t2, (T6)(GE_int32(0)), t3);
	l1 = ((T440*)(C))->a5;
	l2 = (((T439*)(GE_void(a1)))->a1);
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = (T473f3(GE_void(l2)));
	}
	if (t1) {
		((T440*)(C))->a18 = (T473f6(GE_void(l2), (T6)(GE_int32(0)), l1));
		((T440*)(C))->a19 = (T193f4(GE_void(((T440*)(C))->a18), l1));
		l1 = (((T473*)(GE_void(l2)))->a1);
	} else {
		((T440*)(C))->a19 = l1;
	}
	((T440*)(C))->a20 = (((T488*)(GE_void(((T440*)(C))->a21)))->a3);
	((T440*)(C))->a22 = ((T6)((((T440*)(C))->a20)+((T6)(GE_int32(1)))));
	((T440*)(C))->a23 = (((T439*)(GE_void(a1)))->a24);
	((T440*)(C))->a24 = (((T439*)(GE_void(a1)))->a25);
	t2 = (((T439*)(GE_void(a1)))->a8);
	T440f43(C, t2, (T6)(GE_int32(1)), l1);
}

/* LX_FULL_DFA.initialize_dfa */
void T440f43(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T440*)(C))->a25 = a2;
	((T440*)(C))->a26 = a3;
	l2 = (((T465*)(GE_void(a1)))->a1);
	t1 = (T6)(GE_int32(2));
	t1 = ((T6)((t1)*(l2)));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t1 = (T6f10(&t1, (T6)(GE_int32(1000))));
	((T440*)(C))->a27 = T491c8(t1);
	T440f47(C, a1);
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T465f7(GE_void(a1), l1));
		T440f48(C, t3);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	t1 = (T6)(GE_int32(2));
	((T440*)(C))->a30 = ((T6)((t1)*(l2)));
}

/* LX_FULL_DFA.put_start_condition */
void T440f48(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l1 = (((T493*)(GE_void(a1)))->a4);
	l2 = (((T493*)(GE_void(a1)))->a5);
	l8 = (((T495*)(GE_void(l1)))->a5);
	l3 = T490c23(l8);
	t1 = (((T495*)(GE_void(l2)))->a5);
	t1 = ((T6)((l8)+(t1)));
	l4 = T490c23(t1);
	l7 = (T6)(GE_int32(1));
	t2 = (T6f1(&l7, l8));
	while (!(t2)) {
		t3 = (T495f7(GE_void(l1), l7));
		l5 = (T472f4(GE_void(t3)));
		T490f24(GE_void(l3), l5);
		T490f24(GE_void(l4), l5);
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l7, l8));
	}
	l8 = (((T495*)(GE_void(l2)))->a5);
	l7 = (T6)(GE_int32(1));
	t2 = (T6f1(&l7, l8));
	while (!(t2)) {
		t3 = (T495f7(GE_void(l2), l7));
		t3 = (T472f4(GE_void(t3)));
		T490f24(GE_void(l4), t3);
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l7, l8));
	}
	l6 = T489c16(l3, ((T440*)(C))->a25, ((T440*)(C))->a26);
	T491f9(GE_void(((T440*)(C))->a27), l6);
	t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	T489f17(GE_void(l6), t1);
	l6 = T489c16(l4, ((T440*)(C))->a25, ((T440*)(C))->a26);
	T491f9(GE_void(((T440*)(C))->a27), l6);
	t1 = (((T491*)(GE_void(((T440*)(C))->a27)))->a1);
	T489f17(GE_void(l6), t1);
}

/* LX_NFA.start_state */
T0* T472f4(T0* C)
{
	T0* R = 0;
	R = (T490f14(GE_void(((T472*)(C))->a2)));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].first */
T0* T490f14(T0* C)
{
	T0* R = 0;
	R = (((T531*)(GE_void(((T490*)(C))->a2)))->z2[(T6)(GE_int32(1))]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA].item */
T0* T495f7(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T475*)(GE_void(((T495*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_START_CONDITIONS.item */
T0* T465f7(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T508*)(GE_void(((T465*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_FULL_DFA.set_nfa_state_ids */
void T440f47(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T6 l10 = 0;
	T6 l11 = 0;
	T6 l12 = 0;
	T6 l13 = 0;
	T1 t1;
	T0* t2;
	l13 = (T6)(GE_int32(1));
	l5 = T496c36((T6)(GE_int32(100)));
	l7 = (((T465*)(GE_void(a1)))->a1);
	l6 = (T6)(GE_int32(1));
	t1 = (T6f1(&l6, l7));
	while (!(t1)) {
		l1 = (T465f7(GE_void(a1), l6));
		l2 = (((T493*)(GE_void(l1)))->a4);
		l9 = (((T495*)(GE_void(l2)))->a5);
		l8 = (T6)(GE_int32(1));
		t1 = (T6f1(&l8, l9));
		while (!(t1)) {
			l3 = (T495f7(GE_void(l2), l8));
			t2 = (T472f4(GE_void(l3)));
			l12 = (((T497*)(GE_void(t2)))->a4);
			t1 = (T496f23(GE_void(l5), l12));
			t1 = ((T1)(!(t1)));
			if (!(t1)) {
				t2 = (T496f22(GE_void(l5), l12));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T496f37(GE_void(l5), l3, l13);
				l4 = (((T472*)(GE_void(l3)))->a2);
				l11 = (((T490*)(GE_void(l4)))->a1);
				l10 = (T6)(GE_int32(1));
				t1 = (T6f1(&l10, l11));
				while (!(t1)) {
					t2 = (T490f10(GE_void(l4), l10));
					T497f14(GE_void(t2), l13);
					l13 = ((T6)((l13)+((T6)(GE_int32(1)))));
					l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l10, l11));
				}
			}
			l8 = ((T6)((l8)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l8, l9));
		}
		l2 = (((T493*)(GE_void(l1)))->a5);
		l9 = (((T495*)(GE_void(l2)))->a5);
		l8 = (T6)(GE_int32(1));
		t1 = (T6f1(&l8, l9));
		while (!(t1)) {
			l3 = (T495f7(GE_void(l2), l8));
			t2 = (T472f4(GE_void(l3)));
			l12 = (((T497*)(GE_void(t2)))->a4);
			t1 = (T496f23(GE_void(l5), l12));
			t1 = ((T1)(!(t1)));
			if (!(t1)) {
				t2 = (T496f22(GE_void(l5), l12));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T496f37(GE_void(l5), l3, l13);
				l4 = (((T472*)(GE_void(l3)))->a2);
				l11 = (((T490*)(GE_void(l4)))->a1);
				l10 = (T6)(GE_int32(1));
				t1 = (T6f1(&l10, l11));
				while (!(t1)) {
					t2 = (T490f10(GE_void(l4), l10));
					T497f14(GE_void(t2), l13);
					l13 = ((T6)((l13)+((T6)(GE_int32(1)))));
					l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l10, l11));
				}
			}
			l8 = ((T6)((l8)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l8, l9));
		}
		l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l6, l7));
	}
}

/* LX_NFA_STATE.set_id */
void T497f14(T0* C, T6 a1)
{
	((T497*)(C))->a4 = a1;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].force */
void T496f37(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T496f40(C);
	T496f38(C, a2);
	t1 = ((((T496*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T496f41(C, a1, ((T496*)(C))->a1);
	} else {
		t1 = ((((T496*)(C))->a4)==(((T496*)(C))->a5));
		if (t1) {
			t2 = ((T6)((((T496*)(C))->a4)+((T6)(GE_int32(1)))));
			t2 = (T496f33(C, t2));
			T496f42(C, t2);
			l2 = (T496f21(C, a2));
		} else {
			l2 = ((T496*)(C))->a6;
		}
		l1 = ((T496*)(C))->a7;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T496*)(C))->a8 = ((T6)((((T496*)(C))->a8)+((T6)(GE_int32(1)))));
			l1 = ((T496*)(C))->a8;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T496f28(C, l1));
			((T496*)(C))->a7 = ((T6)((t2)-(t3)));
		}
		t2 = (T496f29(C, l2));
		T496f43(C, t2, l1);
		T496f44(C, l1, l2);
		T496f41(C, a1, l1);
		T496f45(C, a2, l1);
		((T496*)(C))->a4 = ((T6)((((T496*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_put */
void T496f45(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T496*)(C))->a16)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_put */
void T496f44(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T496*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_put */
void T496f43(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T496*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_item */
T6 T496f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T496*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_item */
T6 T496f28(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T496*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].hash_position */
T6 T496f21(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = (EIF_TRUE);
	if (t1) {
		t1 = ((((T496*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T496*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T496*)(C))->a9)));
		} else {
			t2 = (T6f24(&a1));
			R = ((T6)((t2)%(((T496*)(C))->a9)));
		}
	} else {
		R = ((T496*)(C))->a9;
	}
	return R;
}

/* INTEGER_32.hash_code */
T6 T6f24(T6* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (*C);
	R = (T6f25(&t1, (T6)(GE_int32(0x7FFFFFFF))));
	return R;
}

/* INTEGER_32.infix "&" */
T6 T6f25(T6* C, T6 a1)
{
	T6 R = 0;
	R = ((T6)((*C)&(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].resize */
void T496f42(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T496f40(C);
	l1 = (T496f24(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T496f47(C, t1);
	l2 = ((T496*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T496f44(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T496*)(C))->a9 = l1;
	l2 = ((T496*)(C))->a8;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T496f28(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t1 = (T496f34(C, l2));
			l3 = (T496f21(C, t1));
			t1 = (T496f29(C, l3));
			T496f43(C, t1, l2);
			T496f44(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f48(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f49(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f50(C, t1);
	((T496*)(C))->a5 = a1;
	((T496*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_resize */
void T496f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T496f31(C));
	((T496*)(C))->a14 = (T65f1(GE_void(t1), ((T496*)(C))->a14, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].special_integer_ */
T0* T496f31(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_resize */
void T496f49(T0* C, T6 a1)
{
	((T496*)(C))->a16 = (T65f1(GE_void(((T496*)(C))->a19), ((T496*)(C))->a16, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_resize */
void T496f48(T0* C, T6 a1)
{
	((T496*)(C))->a2 = (T476f2(GE_void(((T496*)(C))->a18), ((T496*)(C))->a2, a1));
}

/* KL_SPECIAL_ROUTINES [LX_NFA].resize */
T0* T476f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T475*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T475f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_NFA].resized_area */
T0* T475f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T475c4(a1);
	t1 = (((T475*)(C))->z1);
	T475f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_NFA].copy_data */
void T475f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T475f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T475*)(a1))->z2[l1]);
			((T475*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_NFA].move_data */
void T475f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T475f9(C, a1, a2, a3);
			} else {
				T475f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T475f9(C, a1, a2, a3);
			} else {
				T475f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_NFA].overlapping_move */
void T475f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T475*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T475*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T475*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T475*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_NFA].non_overlapping_move */
void T475f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T475*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T475*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_NFA].make */
T0* T475c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T475)+a1*sizeof(T0*));
	*(T475*)C = GE_default475;
	((T475*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_item */
T6 T496f34(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T496*)(C))->a16)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_resize */
void T496f47(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T496f31(C));
	((T496*)(C))->a15 = (T65f1(GE_void(t1), ((T496*)(C))->a15, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_modulus */
T6 T496f24(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_capacity */
T6 T496f33(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_put */
void T496f41(T0* C, T0* a1, T6 a2)
{
	((T475*)(GE_void(((T496*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].search_position */
void T496f38(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	t1 = (EIF_FALSE);
	if (t1) {
		((T496*)(C))->a1 = (T496f29(C, ((T496*)(C))->a9));
		((T496*)(C))->a6 = ((T496*)(C))->a9;
		((T496*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T496*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T496*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T496f34(C, ((T496*)(C))->a1));
				t3 = (T443f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T443f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T496*)(C))->a6 = (T496f21(C, a1));
				l1 = (T496f29(C, ((T496*)(C))->a6));
				((T496*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T496f34(C, l1));
					t1 = (T443f1(GE_void(l4), a1, t2));
					if (t1) {
						((T496*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T496f28(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T496*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T496*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T496f34(C, ((T496*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T496*)(C))->a6 = (T496f21(C, a1));
				l1 = (T496f29(C, ((T496*)(C))->a6));
				((T496*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T496f34(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T496*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T496f28(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T496*)(C))->a10 = l2;
			}
		}
	}
}

/* KL_EQUALITY_TESTER [INTEGER_32].test */
T1 T443f1(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = (EIF_FALSE);
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (EIF_FALSE);
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T443f2(C));
				R = (T83f2(GE_void(t2), GE_boxed6(a1), GE_boxed6(a2)));
			}
		}
	}
	return R;
}

/* KL_ANY_ROUTINES.equal_objects */
T1 T83f2(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t1 = (T83f1(C, a1, a2));
				if (t1) {
					R = (T19x29T0(GE_void(a1), a2));
				}
			}
		}
	}
	return R;
}

/* KL_EQUALITY_TESTER [INTEGER_32].any_ */
T0* T443f2(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].unset_found_item */
void T496f40(T0* C)
{
	((T496*)(C))->a13 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item */
T0* T496f22(T0* C, T6 a1)
{
	T0* R = 0;
	T496f38(C, a1);
	R = (T496f32(C, ((T496*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_item */
T0* T496f32(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T475*)(GE_void(((T496*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].has */
T1 T496f23(T0* C, T6 a1)
{
	T1 R = 0;
	T496f38(C, a1);
	R = ((((T496*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make */
T0* T496c36(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T496));
	*(T496*)C = GE_default496;
	((T496*)(C))->a3 = T443c3();
	T496f39(C, a1, EIF_VOID, ((T496*)(C))->a3);
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_with_equality_testers */
void T496f39(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T496*)(C))->a11 = a2;
	((T496*)(C))->a3 = a3;
	T496f46(C, a1);
	((T496*)(C))->a12 = T543c5(C);
}

/* DS_SPARSE_TABLE_KEYS [LX_NFA, INTEGER_32].make */
T0* T543c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T543));
	*(T543*)C = GE_default543;
	((T543*)(C))->a1 = a1;
	((T543*)(C))->a2 = (((T496*)(GE_void(((T543*)(C))->a1)))->a3);
	((T543*)(C))->a3 = (T543f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [LX_NFA, INTEGER_32].new_cursor */
T0* T543f4(T0* C)
{
	T0* R = 0;
	R = T559c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [LX_NFA, INTEGER_32].make */
T0* T559c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T559));
	*(T559*)C = GE_default559;
	((T559*)(C))->a1 = a1;
	t1 = (((T543*)(GE_void(((T559*)(C))->a1)))->a1);
	((T559*)(C))->a2 = (T496f30(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_cursor */
T0* T496f30(T0* C)
{
	T0* R = 0;
	R = T545c3(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_NFA, INTEGER_32].make */
T0* T545c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T545));
	*(T545*)C = GE_default545;
	((T545*)(C))->a1 = a1;
	((T545*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_sparse_container */
void T496f46(T0* C, T6 a1)
{
	T6 t1;
	((T496*)(C))->a5 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f52(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T496f53(C, t1);
	((T496*)(C))->a9 = (T496f24(C, a1));
	t1 = ((T6)((((T496*)(C))->a9)+((T6)(GE_int32(1)))));
	T496f54(C, t1);
	((T496*)(C))->a8 = (T6)(GE_int32(0));
	((T496*)(C))->a7 = (T6)(GE_int32(0));
	((T496*)(C))->a1 = (T6)(GE_int32(0));
	T496f40(C);
	((T496*)(C))->a17 = (T496f30(C));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_slots */
void T496f54(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T496f31(C));
	((T496*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_clashes */
void T496f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T496f31(C));
	((T496*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_key_storage */
void T496f52(T0* C, T6 a1)
{
	((T496*)(C))->a19 = T65c4();
	((T496*)(C))->a16 = (T65f2(GE_void(((T496*)(C))->a19), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_item_storage */
void T496f51(T0* C, T6 a1)
{
	((T496*)(C))->a18 = T476c3();
	((T496*)(C))->a2 = (T476f1(GE_void(((T496*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [LX_NFA].make */
T0* T476f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T526c2(a1);
	R = (((T526*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_NFA].make_area */
T0* T526c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T526));
	*(T526*)C = GE_default526;
	((T526*)(C))->a1 = T475c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA].default_create */
T0* T476c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T476));
	*(T476*)C = GE_default476;
	return C;
}

/* KL_EQUALITY_TESTER [INTEGER_32].default_create */
T0* T443c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T443));
	*(T443*)C = GE_default443;
	return C;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].make */
T0* T491c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T491));
	*(T491*)C = GE_default491;
	((T491*)(C))->a4 = T537c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T491*)(C))->a3 = (T537f1(GE_void(((T491*)(C))->a4), t1));
	((T491*)(C))->a2 = a1;
	((T491*)(C))->a5 = (T491f7(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].new_cursor */
T0* T491f7(T0* C)
{
	T0* R = 0;
	R = T538c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_DFA_STATE].make */
T0* T538c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T538));
	*(T538*)C = GE_default538;
	((T538*)(C))->a1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].make */
T0* T537f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T558c2(a1);
	R = (((T558*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_DFA_STATE].make_area */
T0* T558c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T558));
	*(T558*)C = GE_default558;
	((T558*)(C))->a1 = T536c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].default_create */
T0* T537c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T537));
	*(T537*)C = GE_default537;
	return C;
}

/* ARRAY [INTEGER_32].item */
T6 T193f4(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T193*)(C))->a2)));
	R = (((T63*)(GE_void(((T193*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.to_array */
T0* T473f6(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	R = T193c9(a1, a2);
	t1 = (T473f4(C));
	l2 = (T6f18(&t1, a2));
	t1 = (T473f5(C));
	l1 = (T6f10(&t1, a1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T523f4(GE_void(((T473*)(C))->a2), l1));
		t1 = (((T521*)(GE_void(t3)))->a1);
		T193f12(GE_void(R), t1, l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	return R;
}

/* LX_EQUIVALENCE_CLASSES.lower */
T6 T473f5(T0* C)
{
	T6 R = 0;
	R = (((T523*)(GE_void(((T473*)(C))->a2)))->a2);
	return R;
}

/* INTEGER_32.min */
T6 T6f18(T6* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T6f9(C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* LX_EQUIVALENCE_CLASSES.upper */
T6 T473f4(T0* C)
{
	T6 R = 0;
	R = (((T523*)(GE_void(((T473*)(C))->a2)))->a3);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.built */
T1 T473f3(T0* C)
{
	T1 R = 0;
	R = ((((T473*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* LX_FULL_DFA.build_eof_rules */
void T440f42(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	((T440*)(C))->a32 = T488c4(a2, a3);
	l2 = (((T464*)(GE_void(a1)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T464f6(GE_void(a1), l1));
		t2 = (((T474*)(GE_void(l3)))->a1);
		T488f5(GE_void(((T440*)(C))->a32), l3, t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* ARRAY [LX_RULE].put */
void T488f5(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T488*)(C))->a2)));
	((T487*)(GE_void(((T488*)(C))->a1)))->z2[t1] = (a1);
}

/* ARRAY [LX_RULE].make */
T0* T488c4(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T488));
	*(T488*)C = GE_default488;
	((T488*)(C))->a2 = a1;
	((T488*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T488f6(C, t2);
	} else {
		T488f6(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [LX_RULE].make_area */
void T488f6(T0* C, T6 a1)
{
	((T488*)(C))->a1 = T487c4(a1);
}

/* ARRAY [STRING_8].count */
T6 T33f10(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T33*)(C))->a3)-(((T33*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* LX_FULL_DFA.build_rules */
void T440f41(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T464*)(GE_void(a1)))->a1);
	((T440*)(C))->a21 = T488c4((T6)(GE_int32(1)), l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T464f6(GE_void(a1), l1));
		T488f5(GE_void(((T440*)(C))->a21), t2, l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITIONS.names */
T0* T465f8(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l2 = ((T465*)(C))->a1;
	t1 = ((T6)((l2)-((T6)(GE_int32(1)))));
	R = T33c11((T6)(GE_int32(0)), t1);
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T465f7(C, l1));
		t3 = (((T493*)(GE_void(t3)))->a1);
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		T33f12(GE_void(R), t3, t1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	return R;
}

/* ARRAY [STRING_8].put */
void T33f12(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T33*)(C))->a2)));
	((T32*)(GE_void(((T33*)(C))->a1)))->z2[t1] = (a1);
}

/* ARRAY [STRING_8].make */
T0* T33c11(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T33));
	*(T33*)C = GE_default33;
	((T33*)(C))->a2 = a1;
	((T33*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f13(C, t2);
	} else {
		T33f13(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [STRING_8].make_area */
void T33f13(T0* C, T6 a1)
{
	((T33*)(C))->a1 = T32c6(a1);
}

/* LX_WILDCARD_PARSER.parse_string */
void T438f220(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T438f120(C, a1));
	T438f223(C, t1);
	T438f224(C);
}

/* LX_WILDCARD_PARSER.parse */
void T438f224(T0* C)
{
	GE_rescue r;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		T438f232(C);
		T438f238(C);
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((((T438*)(C))->a22)==((T6)(GE_int32(105))));
	if (t1) {
		l1 = ((T438*)(C))->a23;
		l2 = ((T438*)(C))->a24;
		l3 = ((T438*)(C))->a25;
		l4 = ((T438*)(C))->a26;
		l5 = ((T438*)(C))->a27;
		l6 = ((T438*)(C))->a28;
		l7 = ((T438*)(C))->a29;
		((T438*)(C))->a22 = (T6)(GE_int32(104));
	} else {
		((T438*)(C))->a30 = (T6)(GE_int32(0));
		((T438*)(C))->a31 = EIF_TRUE;
		((T438*)(C))->a32 = (T6)(GE_int32(0));
		T438f229(C);
		((T438*)(C))->a33 = (T6)(GE_int32(-1));
		l1 = (((T63*)(GE_void(((T438*)(C))->a16)))->z1);
		((T438*)(C))->a22 = (T6)(GE_int32(104));
		l7 = (T6)(GE_int32(1));
	}
	t1 = ((((T438*)(C))->a22)!=((T6)(GE_int32(104))));
	while (!(t1)) {
		switch (l7) {
		case (T6)(T6)(GE_int32(1)):
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&(((T438*)(C))->a33), l1));
			if (t1) {
				l1 = ((T6)((l1)+((T6)(GE_int32(200)))));
				t2 = (T438f160(C));
				((T438*)(C))->a16 = (T65f1(GE_void(t2), ((T438*)(C))->a16, l1));
			}
			((T63*)(GE_void(((T438*)(C))->a16)))->z2[((T438*)(C))->a33] = (l2);
			l3 = (((T63*)(GE_void(((T438*)(C))->a34)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(-32768))));
			if (t1) {
				l7 = (T6)(GE_int32(2));
			} else {
				if (((T438*)(C))->a31) {
					T438f230(C);
					((T438*)(C))->a31 = EIF_FALSE;
				}
				t1 = (T6f1(&(((T438*)(C))->a35), (T6)(GE_int32(0))));
				if (t1) {
					t1 = (T6f9(&(((T438*)(C))->a35), (T6)(GE_int32(261))));
					if (t1) {
						l4 = (((T63*)(GE_void(((T438*)(C))->a36)))->z2[((T438*)(C))->a35]);
					} else {
						l4 = (T6)(GE_int32(29));
					}
					l3 = ((T6)((l3)+(l4)));
				} else {
					t1 = ((((T438*)(C))->a35)==((T6)(GE_int32(0))));
					if (t1) {
						l4 = (T6)(GE_int32(0));
					} else {
						((T438*)(C))->a30 = ((T6)((((T438*)(C))->a30)+((T6)(GE_int32(1)))));
						T438f231(C, l2);
						T438f232(C);
						l3 = (T6)(GE_int32(-1));
					}
				}
				t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
				if (!(t1)) {
					t1 = (T6f1(&l3, (T6)(GE_int32(56))));
				}
				if (!(t1)) {
					t3 = (((T63*)(GE_void(((T438*)(C))->a37)))->z2[l3]);
					t1 = ((t3)!=(l4));
				}
				if (t1) {
					l7 = (T6)(GE_int32(2));
				} else {
					l3 = (((T63*)(GE_void(((T438*)(C))->a38)))->z2[l3]);
					t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
					if (t1) {
						t1 = ((l3)==((T6)(GE_int32(-32768))));
						if (t1) {
							l7 = (T6)(GE_int32(4));
						} else {
							l3 = ((T6)(-(l3)));
							l7 = (T6)(GE_int32(3));
						}
					} else {
						t1 = ((l3)==((T6)(GE_int32(0))));
						if (t1) {
							l7 = (T6)(GE_int32(4));
						} else {
							t1 = ((l3)==((T6)(GE_int32(49))));
							if (t1) {
								T438f233(C);
							} else {
								t1 = (T6f1(&(((T438*)(C))->a35), (T6)(GE_int32(0))));
								if (t1) {
									((T438*)(C))->a31 = EIF_TRUE;
								}
								T438f234(C, l4);
								t1 = ((((T438*)(C))->a32)!=((T6)(GE_int32(0))));
								if (t1) {
									((T438*)(C))->a32 = ((T6)((((T438*)(C))->a32)-((T6)(GE_int32(1)))));
								}
								l2 = l3;
							}
						}
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(2)):
			l3 = (((T63*)(GE_void(((T438*)(C))->a39)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(0))));
			if (t1) {
				l7 = (T6)(GE_int32(4));
			} else {
				l7 = (T6)(GE_int32(3));
			}
			break;
		case (T6)(T6)(GE_int32(3)):
			T438f235(C, l3);
			switch (((T438*)(C))->a22) {
			case (T6)(T6)(GE_int32(104)):
				l3 = (((T63*)(GE_void(((T438*)(C))->a40)))->z2[l3]);
				l6 = (((T63*)(GE_void(((T438*)(C))->a16)))->z2[((T438*)(C))->a33]);
				l5 = ((T6)((l3)-((T6)(GE_int32(19)))));
				t3 = (((T63*)(GE_void(((T438*)(C))->a41)))->z2[l5]);
				l2 = ((T6)((t3)+(l6)));
				t1 = (T6f5(&l2, (T6)(GE_int32(0))));
				if (t1) {
					t1 = (T6f9(&l2, (T6)(GE_int32(56))));
				}
				if (t1) {
					t3 = (((T63*)(GE_void(((T438*)(C))->a37)))->z2[l2]);
					t1 = ((t3)==(l6));
				}
				if (t1) {
					l2 = (((T63*)(GE_void(((T438*)(C))->a38)))->z2[l2]);
				} else {
					l2 = (((T63*)(GE_void(((T438*)(C))->a42)))->z2[l5]);
				}
				l7 = (T6)(GE_int32(1));
				break;
			case (T6)(T6)(GE_int32(105)):
				((T438*)(C))->a23 = l1;
				((T438*)(C))->a24 = l2;
				((T438*)(C))->a25 = l3;
				((T438*)(C))->a26 = l4;
				((T438*)(C))->a27 = l5;
				((T438*)(C))->a28 = l6;
				((T438*)(C))->a29 = l7;
				break;
			case (T6)(T6)(GE_int32(103)):
				((T438*)(C))->a22 = (T6)(GE_int32(104));
				l7 = (T6)(GE_int32(4));
				break;
			default:
				break;
			}
			break;
		case (T6)(T6)(GE_int32(4)):
			t1 = ((((T438*)(C))->a32)==((T6)(GE_int32(3))));
			if (t1) {
				t1 = (T6f9(&(((T438*)(C))->a35), (T6)(GE_int32(0))));
				if (t1) {
					T438f232(C);
				} else {
					((T438*)(C))->a31 = EIF_TRUE;
					l7 = (T6)(GE_int32(5));
				}
			} else {
				t1 = ((((T438*)(C))->a32)==((T6)(GE_int32(0))));
				if (t1) {
					((T438*)(C))->a30 = ((T6)((((T438*)(C))->a30)+((T6)(GE_int32(1)))));
					T438f231(C, l2);
				}
				((T438*)(C))->a32 = (T6)(GE_int32(3));
				l7 = (T6)(GE_int32(5));
			}
			break;
		case (T6)(T6)(GE_int32(5)):
			l3 = (((T63*)(GE_void(((T438*)(C))->a34)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(-32768))));
			if (t1) {
				l7 = (T6)(GE_int32(6));
			} else {
				l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
				t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
				if (!(t1)) {
					t1 = (T6f1(&l3, (T6)(GE_int32(56))));
				}
				if (!(t1)) {
					t3 = (((T63*)(GE_void(((T438*)(C))->a37)))->z2[l3]);
					t1 = ((t3)!=((T6)(GE_int32(1))));
				}
				if (t1) {
					l7 = (T6)(GE_int32(6));
				} else {
					l3 = (((T63*)(GE_void(((T438*)(C))->a38)))->z2[l3]);
					t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
					if (t1) {
						t1 = ((l3)==((T6)(GE_int32(-32768))));
						if (t1) {
							l7 = (T6)(GE_int32(6));
						} else {
							l3 = ((T6)(-(l3)));
							l7 = (T6)(GE_int32(3));
						}
					} else {
						t1 = ((l3)==((T6)(GE_int32(0))));
						if (t1) {
							l7 = (T6)(GE_int32(6));
						} else {
							t1 = ((l3)==((T6)(GE_int32(49))));
							if (t1) {
								T438f233(C);
							} else {
								T438f236(C);
								l2 = l3;
								l7 = (T6)(GE_int32(1));
							}
						}
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(6)):
			t1 = ((((T438*)(C))->a33)==((T6)(GE_int32(0))));
			if (t1) {
				T438f232(C);
			} else {
				T438f237(C, l2);
				((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
				l2 = (((T63*)(GE_void(((T438*)(C))->a16)))->z2[((T438*)(C))->a33]);
				l7 = (T6)(GE_int32(5));
			}
			break;
		default:
			break;
		}
		t1 = ((((T438*)(C))->a22)!=((T6)(GE_int32(104))));
	}
	t1 = ((((T438*)(C))->a22)!=((T6)(GE_int32(105))));
	if (t1) {
		T438f238(C);
	}
	GE_last_rescue = r.previous;
}

/* LX_WILDCARD_PARSER.yy_pop_last_value */
void T438f237(T0* C, T6 a1)
{
	T6 l1 = 0;
	l1 = (((T63*)(GE_void(((T438*)(C))->a43)))->z2[a1]);
	switch (l1) {
	case (T6)(T6)(GE_int32(1)):
		((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(2)):
		((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(3)):
		((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(4)):
		((T438*)(C))->a49 = ((T6)((((T438*)(C))->a49)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(5)):
		((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
		break;
	default:
		T438f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.yy_push_error_value */
void T438f236(T0* C)
{
	T0* l1 = 0;
	T1 t1;
	((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)+((T6)(GE_int32(1)))));
	t1 = (T6f5(&(((T438*)(C))->a46), ((T438*)(C))->a77));
	if (t1) {
		t1 = ((((T438*)(C))->a78)==(EIF_VOID));
		if (t1) {
			((T438*)(C))->a79 = T138c3();
			((T438*)(C))->a77 = (T6)(GE_int32(10));
			((T438*)(C))->a78 = (T138f1(GE_void(((T438*)(C))->a79), ((T438*)(C))->a77));
		} else {
			((T438*)(C))->a77 = ((T6)((((T438*)(C))->a77)+((T6)(GE_int32(10)))));
			((T438*)(C))->a78 = (T138f2(GE_void(((T438*)(C))->a79), ((T438*)(C))->a78, ((T438*)(C))->a77));
		}
	}
	((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (l1);
}

/* KL_SPECIAL_ROUTINES [ANY].resize */
T0* T138f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T137*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T137f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [ANY].resized_area */
T0* T137f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T137c4(a1);
	t1 = (((T137*)(C))->z1);
	T137f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [ANY].copy_data */
void T137f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T137f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T137*)(a1))->z2[l1]);
			((T137*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [ANY].move_data */
void T137f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T137f9(C, a1, a2, a3);
			} else {
				T137f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T137f9(C, a1, a2, a3);
			} else {
				T137f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [ANY].overlapping_move */
void T137f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T137*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T137*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T137*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T137*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [ANY].non_overlapping_move */
void T137f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T137*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T137*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [ANY].make */
T0* T137c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T137)+a1*sizeof(T0*));
	*(T137*)C = GE_default137;
	((T137*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [ANY].make */
T0* T138f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T220c2(a1);
	R = (((T220*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [ANY].make_area */
T0* T220c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T220));
	*(T220*)C = GE_default220;
	((T220*)(C))->a1 = T137c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [ANY].default_create */
T0* T138c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T138));
	*(T138*)C = GE_default138;
	return C;
}

/* LX_WILDCARD_PARSER.yy_do_action */
void T438f235(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	switch (a1) {
	case (T6)(T6)(GE_int32(1)):
		t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			T438f247(C);
		}
		T438f248(C);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(2)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(2)):
		t2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a2);
		if (t2) {
			T439f33(GE_void(((T438*)(C))->a11));
		}
		((T438*)(C))->a93 = EIF_FALSE;
		((T438*)(C))->a94 = T474c14((T6)(GE_int32(1)));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(0)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)+((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a46), ((T438*)(C))->a77));
			if (t2) {
				t2 = ((((T438*)(C))->a78)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a79 = T138c3();
					((T438*)(C))->a77 = (T6)(GE_int32(10));
					((T438*)(C))->a78 = (T138f1(GE_void(((T438*)(C))->a79), ((T438*)(C))->a77));
				} else {
					((T438*)(C))->a77 = ((T6)((((T438*)(C))->a77)+((T6)(GE_int32(10)))));
					((T438*)(C))->a78 = (T138f2(GE_void(((T438*)(C))->a79), ((T438*)(C))->a78, ((T438*)(C))->a77));
				}
			}
			((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T438f249(C, t1);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)+((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a46), ((T438*)(C))->a77));
			if (t2) {
				t2 = ((((T438*)(C))->a78)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a79 = T138c3();
					((T438*)(C))->a77 = (T6)(GE_int32(10));
					((T438*)(C))->a78 = (T138f1(GE_void(((T438*)(C))->a79), ((T438*)(C))->a77));
				} else {
					((T438*)(C))->a77 = ((T6)((((T438*)(C))->a77)+((T6)(GE_int32(10)))));
					((T438*)(C))->a78 = (T138f2(GE_void(((T438*)(C))->a79), ((T438*)(C))->a78, ((T438*)(C))->a77));
				}
			}
			((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		T438f250(C);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(5)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		((T438*)(C))->a96 = EIF_FALSE;
		((T438*)(C))->a97 = (T6)(GE_int32(-1));
		((T438*)(C))->a98 = (T6)(GE_int32(-1));
		((T438*)(C))->a99 = (T6)(GE_int32(-1));
		((T438*)(C))->a100 = (T6)(GE_int32(0));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t3 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[t3]);
		t1 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T472f7(GE_void(l2), t1);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(3)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t3 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[t3]);
		t1 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T472f8(GE_void(l2), t1);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(2)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		l2 = (T438f159(C, t3));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T472f9(GE_void(l2));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(3)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(2)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T472f10(GE_void(l2));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(4)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(3)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		T472f11(GE_void(l2));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(4)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(3)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(4)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(3)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = (T438f162(C));
		l2 = (T438f163(C, t1));
		T472f9(GE_void(l2));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = (T438f162(C));
		l2 = (T438f163(C, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(17)):
		t1 = (T438f162(C));
		l2 = (T438f163(C, t1));
		T472f10(GE_void(l2));
		t1 = (T438f159(C, (T6)(GE_int32(47))));
		T472f8(GE_void(l2), t1);
		T472f9(GE_void(l2));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(18)):
		t1 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		l2 = (T438f163(C, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(19)):
		t1 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		l2 = (T438f165(C, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(20)):
		l2 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(3)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(2)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(21)):
		l3 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		t1 = (((T32*)(GE_void(((T438*)(C))->a90)))->z2[((T438*)(C))->a49]);
		T468f43(GE_void(((T438*)(C))->a14), l3, t1);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(3)))));
			((T438*)(C))->a49 = ((T6)((((T438*)(C))->a49)-((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(22)):
		l3 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		T469f20(GE_void(l3), EIF_TRUE);
		t1 = (((T32*)(GE_void(((T438*)(C))->a90)))->z2[((T438*)(C))->a49]);
		T468f43(GE_void(((T438*)(C))->a14), l3, t1);
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(4)))));
			((T438*)(C))->a49 = ((T6)((((T438*)(C))->a49)-((T6)(GE_int32(1)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(2)))));
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		t1 = (T438f166(C));
		l3 = (T438f167(C, t3, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(1)))));
			((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)+((T6)(GE_int32(1)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a48), ((T438*)(C))->a85));
			if (t2) {
				t2 = ((((T438*)(C))->a86)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a87 = T471c3();
					((T438*)(C))->a85 = (T6)(GE_int32(10));
					((T438*)(C))->a86 = (T471f1(GE_void(((T438*)(C))->a87), ((T438*)(C))->a85));
				} else {
					((T438*)(C))->a85 = ((T6)((((T438*)(C))->a85)+((T6)(GE_int32(10)))));
					((T438*)(C))->a86 = (T471f2(GE_void(((T438*)(C))->a87), ((T438*)(C))->a86, ((T438*)(C))->a85));
				}
			}
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(24)):
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		t1 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		l3 = (T438f167(C, t3, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(2)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(25)):
		t3 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[t3]);
		t4 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		t1 = (T438f166(C));
		l3 = (T438f168(C, t3, t4, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(3)))));
			((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)+((T6)(GE_int32(1)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(2)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a48), ((T438*)(C))->a85));
			if (t2) {
				t2 = ((((T438*)(C))->a86)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a87 = T471c3();
					((T438*)(C))->a85 = (T6)(GE_int32(10));
					((T438*)(C))->a86 = (T471f1(GE_void(((T438*)(C))->a87), ((T438*)(C))->a85));
				} else {
					((T438*)(C))->a85 = ((T6)((((T438*)(C))->a85)+((T6)(GE_int32(10)))));
					((T438*)(C))->a86 = (T471f2(GE_void(((T438*)(C))->a87), ((T438*)(C))->a86, ((T438*)(C))->a85));
				}
			}
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(26)):
		t3 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[t3]);
		t4 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		t1 = (((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48]);
		l3 = (T438f168(C, t3, t4, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(4)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(2)))));
			((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(27)):
		l2 = (T438f169(C));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(0)))));
			((T438*)(C))->a50 = ((T6)((((T438*)(C))->a50)+((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T438*)(C))->a50), ((T438*)(C))->a101));
			if (t2) {
				t2 = ((((T438*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T438*)(C))->a102 = T476c3();
					((T438*)(C))->a101 = (T6)(GE_int32(10));
					((T438*)(C))->a95 = (T476f1(GE_void(((T438*)(C))->a102), ((T438*)(C))->a101));
				} else {
					((T438*)(C))->a101 = ((T6)((((T438*)(C))->a101)+((T6)(GE_int32(10)))));
					((T438*)(C))->a95 = (T476f2(GE_void(((T438*)(C))->a102), ((T438*)(C))->a95, ((T438*)(C))->a101));
				}
			}
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(28)):
		t3 = (((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47]);
		t1 = (((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50]);
		l2 = (T438f170(C, t3, t1));
		t2 = ((((T438*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T438*)(C))->a33 = ((T6)((((T438*)(C))->a33)-((T6)(GE_int32(2)))));
			((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)-((T6)(GE_int32(1)))));
			((T475*)(GE_void(((T438*)(C))->a95)))->z2[((T438*)(C))->a50] = (l2);
		}
		break;
	default:
		T438f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.append_character_to_string */
T0* T438f170(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a14);
	if (t1) {
		l4 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			l2 = ((T6)((a1)+((T6)(GE_int32(32)))));
			l1 = (T6f12(&l2));
			t1 = (T468f29(GE_void(((T438*)(C))->a14), l1));
			if (t1) {
				R = a2;
				t2 = (T468f27(GE_void(((T438*)(C))->a14), l1));
				t2 = (T438f163(C, t2));
				T472f8(GE_void(R), t2);
			} else {
				l3 = T469c18((T6)(GE_int32(2)));
				T469f19(GE_void(l3), a1);
				T469f19(GE_void(l3), l2);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T473f11(GE_void(l4), l3);
				}
				T468f43(GE_void(((T438*)(C))->a14), l3, l1);
				R = a2;
				t2 = (T438f163(C, l3));
				T472f8(GE_void(R), t2);
			}
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			l1 = (T6f12(&a1));
			t1 = (T468f29(GE_void(((T438*)(C))->a14), l1));
			if (t1) {
				R = a2;
				t2 = (T468f27(GE_void(((T438*)(C))->a14), l1));
				t2 = (T438f163(C, t2));
				T472f8(GE_void(R), t2);
			} else {
				l3 = T469c18((T6)(GE_int32(2)));
				t3 = ((T6)((a1)-((T6)(GE_int32(32)))));
				T469f19(GE_void(l3), t3);
				T469f19(GE_void(l3), a1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T473f11(GE_void(l4), l3);
				}
				T468f43(GE_void(((T438*)(C))->a14), l3, l1);
				R = a2;
				t2 = (T438f163(C, l3));
				T472f8(GE_void(R), t2);
			}
			break;
		case (T6)(T6)(GE_int32(0)):
			R = a2;
			t3 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			t2 = (T438f216(C, t3));
			T472f8(GE_void(R), t2);
			break;
		default:
			R = a2;
			t2 = (T438f216(C, a1));
			T472f8(GE_void(R), t2);
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
			t3 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			t2 = (T438f216(C, t3));
			T472f8(GE_void(R), t2);
		} else {
			R = a2;
			t2 = (T438f216(C, a1));
			T472f8(GE_void(R), t2);
		}
	}
	return R;
}

/* LX_WILDCARD_PARSER.new_symbol_nfa */
T0* T438f216(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	l3 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		l1 = (T6f12(&a1));
		t1 = (T468f29(GE_void(((T438*)(C))->a14), l1));
		if (t1) {
			t2 = (T468f27(GE_void(((T438*)(C))->a14), l1));
			R = (T438f163(C, t2));
		} else {
			l2 = T469c18((T6)(GE_int32(1)));
			T469f19(GE_void(l2), a1);
			T473f11(GE_void(l3), l2);
			T468f43(GE_void(((T438*)(C))->a14), l2, l1);
			R = (T438f163(C, l2));
		}
	} else {
		R = T472c13(a1, ((T438*)(C))->a93);
	}
	return R;
}

/* LX_NFA.make_symbol */
T0* T472c13(T6 a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T472));
	*(T472*)C = GE_default472;
	((T472*)(C))->a1 = a2;
	((T472*)(C))->a2 = T490c23((T6)(GE_int32(100)));
	l2 = T497c10(a2);
	l3 = T497c10(a2);
	l1 = T520c4(a1, l3);
	T497f11(GE_void(l2), l1);
	T490f25(GE_void(((T472*)(C))->a2), l2);
	T490f24(GE_void(((T472*)(C))->a2), l3);
	return C;
}

/* LX_SYMBOL_TRANSITION [LX_NFA_STATE].make */
T0* T520c4(T6 a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T520));
	*(T520*)C = GE_default520;
	((T520*)(C))->a1 = a1;
	((T520*)(C))->a2 = a2;
	return C;
}

/* LX_EQUIVALENCE_CLASSES.add */
void T473f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T0* l12 = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T1 t4;
	T0* t5;
	l8 = (((T469*)(GE_void(a1)))->a7);
	t1 = (T473f5(C));
	t2 = (T473f4(C));
	l12 = T418c5(t1, t2);
	l7 = (T6)(GE_int32(1));
	t3 = (T6f1(&l7, l8));
	while (!(t3)) {
		t1 = (T469f14(GE_void(a1), l7));
		l1 = (T523f4(GE_void(((T473*)(C))->a2), t1));
		l3 = (((T521*)(GE_void(l1)))->a2);
		l4 = l1;
		l6 = ((T6)((l7)+((T6)(GE_int32(1)))));
		l2 = (((T521*)(GE_void(l1)))->a3);
		t3 = ((l2)==(EIF_VOID));
		while (!(t3)) {
			l5 = (((T521*)(GE_void(l2)))->a1);
			l9 = EIF_FALSE;
			if (!(l9)) {
				t3 = (T6f1(&l6, l8));
			} else {
				t3 = EIF_TRUE;
			}
			while (!(t3)) {
				l11 = (T469f14(GE_void(a1), l6));
				t3 = (T6f1(&l11, l5));
				if (t3) {
					l9 = EIF_TRUE;
				} else {
					t3 = ((l11)==(l5));
					if (t3) {
						t4 = (T418f4(GE_void(l12), l5));
						t3 = ((T1)(!(t4)));
					}
					if (t3) {
						T521f6(GE_void(l4), l2);
						l4 = l2;
						T418f6(GE_void(l12), EIF_TRUE, l6);
						l10 = EIF_TRUE;
						l9 = EIF_TRUE;
					} else {
						l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
					}
				}
				if (!(l9)) {
					t3 = (T6f1(&l6, l8));
				} else {
					t3 = EIF_TRUE;
				}
			}
			t3 = ((T1)(!(l10)));
			if (t3) {
				t3 = ((l3)==(EIF_VOID));
				if (t3) {
					T521f8(GE_void(l2));
				} else {
					T521f6(GE_void(l3), l2);
				}
				l3 = l2;
			} else {
				l10 = EIF_FALSE;
			}
			l2 = (((T521*)(GE_void(l2)))->a3);
			t3 = ((l2)==(EIF_VOID));
		}
		t5 = (((T521*)(GE_void(l1)))->a2);
		t3 = ((t5)!=(EIF_VOID));
		if (!(t3)) {
			t5 = (((T521*)(GE_void(l1)))->a2);
			t3 = ((l3)!=(t5));
		}
		if (t3) {
			T521f8(GE_void(l1));
			T521f7(GE_void(l3));
		}
		T521f7(GE_void(l4));
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l7, l8));
		if (!(t3)) {
			t4 = (T418f4(GE_void(l12), l7));
			t3 = ((T1)(!(t4)));
		}
		while (!(t3)) {
			l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
			t3 = (T6f1(&l7, l8));
			if (!(t3)) {
				t4 = (T418f4(GE_void(l12), l7));
				t3 = ((T1)(!(t4)));
			}
		}
		t3 = (T6f1(&l7, l8));
	}
}

/* DS_BILINKABLE [INTEGER_32].forget_right */
void T521f7(T0* C)
{
	((T521*)(C))->a3 = EIF_VOID;
}

/* DS_BILINKABLE [INTEGER_32].forget_left */
void T521f8(T0* C)
{
	((T521*)(C))->a2 = EIF_VOID;
}

/* ARRAY [BOOLEAN].put */
void T418f6(T0* C, T1 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T418*)(C))->a2)));
	((T151*)(GE_void(((T418*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_BILINKABLE [INTEGER_32].put_right */
void T521f6(T0* C, T0* a1)
{
	((T521*)(C))->a3 = a1;
	T521f11(GE_void(a1), C);
}

/* DS_BILINKABLE [INTEGER_32].attach_left */
void T521f11(T0* C, T0* a1)
{
	((T521*)(C))->a2 = a1;
}

/* LX_SYMBOL_CLASS.item */
T6 T469f14(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T469*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_SYMBOL_CLASS.put */
void T469f19(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = (T469f10(C, a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (T469f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (T469f16(C));
			t1 = (T6f1(&t2, a1));
		}
		if (t1) {
			((T469*)(C))->a5 = EIF_TRUE;
		}
		T469f21(C, a1);
	}
}

/* LX_SYMBOL_CLASS.force_last */
void T469f21(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = (T469f11(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T469*)(C))->a7)+((T6)(GE_int32(1)))));
		t2 = (T469f13(C, t2));
		T469f22(C, t2);
	}
	((T469*)(C))->a7 = ((T6)((((T469*)(C))->a7)+((T6)(GE_int32(1)))));
	((T63*)(GE_void(((T469*)(C))->a2)))->z2[((T469*)(C))->a7] = (a1);
}

/* LX_SYMBOL_CLASS.resize */
void T469f22(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T469*)(C))->a2 = (T65f1(GE_void(((T469*)(C))->a1), ((T469*)(C))->a2, t1));
	((T469*)(C))->a3 = a1;
}

/* LX_SYMBOL_CLASS.new_capacity */
T6 T469f13(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* LX_SYMBOL_CLASS.extendible */
T1 T469f11(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T469*)(C))->a7)+(a1)));
	R = (T6f5(&(((T469*)(C))->a3), t1));
	return R;
}

/* LX_SYMBOL_CLASS.last */
T6 T469f16(T0* C)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T469*)(C))->a2)))->z2[((T469*)(C))->a7]);
	return R;
}

/* LX_SYMBOL_CLASS.is_empty */
T1 T469f12(T0* C)
{
	T1 R = 0;
	R = ((((T469*)(C))->a7)==((T6)(GE_int32(0))));
	return R;
}

/* LX_SYMBOL_CLASS.has */
T1 T469f10(T0* C, T6 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	if (((T469*)(C))->a5) {
		R = (T469f15(C, a1));
	} else {
		t1 = (T469f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (T469f16(C));
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
			} else {
				t2 = (T469f16(C));
				t1 = (T6f1(&t2, a1));
				if (t1) {
					l1 = (T6)(GE_int32(1));
					if (!(R)) {
						t1 = (l2);
					} else {
						t1 = EIF_TRUE;
					}
					while (!(t1)) {
						t2 = (T469f14(C, l1));
						t1 = ((t2)==(a1));
						if (t1) {
							R = EIF_TRUE;
						} else {
							t2 = (T469f14(C, l1));
							t1 = (T6f1(&t2, a1));
							if (t1) {
								l2 = EIF_TRUE;
							} else {
								l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
							}
						}
						if (!(R)) {
							t1 = (l2);
						} else {
							t1 = EIF_TRUE;
						}
					}
				}
			}
		}
	}
	return R;
}

/* LX_SYMBOL_CLASS.arrayed_has */
T1 T469f15(T0* C, T6 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T469*)(C))->a7;
	l2 = ((T469*)(C))->a8;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(((T469*)(C))->a2)))->z2[l1]);
			t1 = ((GE_void(l2), t2, a1, (T1)0));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(((T469*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* LX_SYMBOL_CLASS.make */
T0* T469c18(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T469));
	*(T469*)C = GE_default469;
	((T469*)(C))->a1 = T65c4();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T469*)(C))->a2 = (T65f2(GE_void(((T469*)(C))->a1), t1));
	((T469*)(C))->a3 = a1;
	((T469*)(C))->a4 = (T469f9(C));
	return C;
}

/* LX_SYMBOL_CLASS.new_cursor */
T0* T469f9(T0* C)
{
	T0* R = 0;
	R = T514c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [INTEGER_32].make */
T0* T514c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T514));
	*(T514*)C = GE_default514;
	((T514*)(C))->a1 = a1;
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item */
T0* T468f27(T0* C, T0* a1)
{
	T0* R = 0;
	T468f44(C, a1);
	R = (T468f21(C, ((T468*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_item */
T0* T468f21(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T470*)(GE_void(((T468*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].search_position */
void T468f44(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T468*)(C))->a1 = (T468f33(C, ((T468*)(C))->a10));
		((T468*)(C))->a7 = ((T468*)(C))->a10;
		((T468*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T468*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T468*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T468f22(C, ((T468*)(C))->a1));
				t3 = (T426f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T426f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T468*)(C))->a7 = (T468f24(C, a1));
				l1 = (T468f33(C, ((T468*)(C))->a7));
				((T468*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T468f22(C, l1));
					t1 = (T426f1(GE_void(l4), a1, t2));
					if (t1) {
						((T468*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T468f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T468*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T468*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T468f22(C, ((T468*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T468*)(C))->a7 = (T468f24(C, a1));
				l1 = (T468f33(C, ((T468*)(C))->a7));
				((T468*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T468f22(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T468*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T468f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T468*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_item */
T6 T468f32(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T468*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].hash_position */
T6 T468f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T468*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T468*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T468*)(C))->a10)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T468*)(C))->a10)));
		}
	} else {
		R = ((T468*)(C))->a10;
	}
	return R;
}

/* KL_STRING_EQUALITY_TESTER.test */
T1 T426f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
				t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T195*)(a2))->a1));
				t1 = ((t2)==(l2));
				if (t1) {
					R = EIF_TRUE;
					l1 = (T6)(GE_int32(1));
					t1 = (T6f1(&l1, l2));
					while (!(t1)) {
						t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T195f14(a1, l1)));
						t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f12(a2, l1):T195f14(a2, l1)));
						t1 = ((t2)!=(t3));
						if (t1) {
							R = EIF_FALSE;
							l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
						t1 = (T6f1(&l1, l2));
					}
				}
			}
		}
	}
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_item */
T0* T468f22(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T468*)(C))->a16)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_item */
T6 T468f33(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T468*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].has */
T1 T468f29(T0* C, T0* a1)
{
	T1 R = 0;
	T468f44(C, a1);
	R = ((((T468*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* INTEGER_32.out */
T0* T6f12(T6* C)
{
	T0* R = 0;
	T6 t1;
	R = T17c33((T6)(GE_int32(11)));
	t1 = (*C);
	T17f45(GE_void(R), t1);
	return R;
}

/* STRING_8.append_integer */
void T17f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T17f34(C, (T2)('0'));
	} else {
		l2 = ((T17*)(C))->a2;
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T17f34(C, (T2)('-'));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t2 = ((T6)(GE_int32(-2147483647)-1));
			t1 = ((a1)==(t2));
			if (t1) {
				T17f34(C, (T2)('8'));
				t2 = ((T6)((a1)/((T6)(GE_int32(10)))));
				l1 = ((T6)(-(t2)));
			} else {
				l1 = ((T6)(-(a1)));
			}
		} else {
			l1 = a1;
		}
		t1 = ((l1)==((T6)(GE_int32(0))));
		while (!(t1)) {
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			t2 = ((T6)((t2)+((T6)(GE_int32(48)))));
			t3 = ((T2)(t2));
			T17f34(C, t3);
			l1 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t1 = ((l1)==((T6)(GE_int32(0))));
		}
		l3 = ((T6)((((T17*)(C))->a2)-((T6)(GE_int32(1)))));
		l5 = ((T17*)(C))->a1;
		t1 = (T6f5(&l2, l3));
		while (!(t1)) {
			l4 = (((T15*)(GE_void(l5)))->z2[l2]);
			t3 = (((T15*)(GE_void(l5)))->z2[l3]);
			((T15*)(GE_void(l5)))->z2[l2] = (t3);
			((T15*)(GE_void(l5)))->z2[l3] = (l4);
			l3 = ((T6)((l3)-((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l3));
		}
	}
}

/* LX_WILDCARD_PARSER.new_epsilon_nfa */
T0* T438f169(T0* C)
{
	T0* R = 0;
	R = T472c12(((T438*)(C))->a93);
	return R;
}

/* LX_WILDCARD_PARSER.append_character_set_to_character_class */
T0* T438f168(T0* C, T6 a1, T6 a2, T0* a3)
{
	T0* R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = (T6f1(&a1, a2));
	if (t1) {
		T438f268(C);
	} else {
		t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a14);
		if (t1) {
			l1 = a1;
			t1 = (T6f1(&l1, a2));
			while (!(t1)) {
				switch (l1) {
				case (T6)65:
				case (T6)66:
				case (T6)67:
				case (T6)68:
				case (T6)69:
				case (T6)70:
				case (T6)71:
				case (T6)72:
				case (T6)73:
				case (T6)74:
				case (T6)75:
				case (T6)76:
				case (T6)77:
				case (T6)78:
				case (T6)79:
				case (T6)80:
				case (T6)81:
				case (T6)82:
				case (T6)83:
				case (T6)84:
				case (T6)85:
				case (T6)86:
				case (T6)87:
				case (T6)88:
				case (T6)89:
				case (T6)90:
					T469f19(GE_void(a3), l1);
					t2 = ((T6)((l1)+((T6)(GE_int32(32)))));
					T469f19(GE_void(a3), t2);
					break;
				case (T6)97:
				case (T6)98:
				case (T6)99:
				case (T6)100:
				case (T6)101:
				case (T6)102:
				case (T6)103:
				case (T6)104:
				case (T6)105:
				case (T6)106:
				case (T6)107:
				case (T6)108:
				case (T6)109:
				case (T6)110:
				case (T6)111:
				case (T6)112:
				case (T6)113:
				case (T6)114:
				case (T6)115:
				case (T6)116:
				case (T6)117:
				case (T6)118:
				case (T6)119:
				case (T6)120:
				case (T6)121:
				case (T6)122:
					t2 = ((T6)((l1)-((T6)(GE_int32(32)))));
					T469f19(GE_void(a3), t2);
					T469f19(GE_void(a3), l1);
					break;
				case (T6)(T6)(GE_int32(0)):
					t2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
					T469f19(GE_void(a3), t2);
					break;
				default:
					T469f19(GE_void(a3), l1);
					break;
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a2));
			}
		} else {
			l1 = a1;
			t1 = (T6f1(&l1, a2));
			while (!(t1)) {
				t1 = ((l1)==((T6)(GE_int32(0))));
				if (t1) {
					t2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
					T469f19(GE_void(a3), t2);
				} else {
					T469f19(GE_void(a3), l1);
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a2));
			}
		}
	}
	R = a3;
	return R;
}

/* LX_WILDCARD_PARSER.report_negative_range_in_character_class_error */
void T438f268(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T501c7(t1, ((T438*)(C))->a15);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* UT_ERROR_HANDLER.report_error */
void T28f11(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T28f5(C, a1));
	T28f12(C, t1);
}

/* UT_ERROR_HANDLER.report_error_message */
void T28f12(T0* C, T0* a1)
{
	if (((T0*)(GE_void(((T28*)(C))->a1)))->id==47) {
		T47f12(((T28*)(C))->a1, a1);
	} else {
		T452f4(((T28*)(C))->a1, a1);
	}
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_line */
void T452f4(T0* C, T0* a1)
{
	T452f5(C, a1);
	T452f6(C);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_new_line */
void T452f6(T0* C)
{
	T452f5(C, ge199ov3135);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_string */
void T452f5(T0* C, T0* a1)
{
}

/* UT_ERROR_HANDLER.message */
T0* T28f5(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T50x3118(GE_void(a1)));
	return R;
}

/* LX_NEGATIVE_RANGE_IN_CHARACTER_CLASS_ERROR.make */
T0* T501c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T501));
	*(T501*)C = GE_default501;
	((T501*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T501*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T501*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.filename */
T0* T438f189(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = EIF_VOID;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t2 = ((GE_void(l1), (T0*)0));
		R = ((GE_void(t2), (T0*)0));
	} else {
		R = GE_ms("string", 6);
	}
	return R;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].resize */
T0* T471f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T470*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T470f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_SYMBOL_CLASS].resized_area */
T0* T470f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T470c4(a1);
	t1 = (((T470*)(C))->z1);
	T470f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_SYMBOL_CLASS].copy_data */
void T470f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T470f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T470*)(a1))->z2[l1]);
			((T470*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].move_data */
void T470f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T470f9(C, a1, a2, a3);
			} else {
				T470f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T470f9(C, a1, a2, a3);
			} else {
				T470f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].overlapping_move */
void T470f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T470*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T470*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T470*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T470*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].non_overlapping_move */
void T470f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T470*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T470*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].make */
T0* T470c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T470)+a1*sizeof(T0*));
	*(T470*)C = GE_default470;
	((T470*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].make */
T0* T471f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T515c2(a1);
	R = (((T515*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_SYMBOL_CLASS].make_area */
T0* T515c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T515));
	*(T515*)C = GE_default515;
	((T515*)(C))->a1 = T470c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].default_create */
T0* T471c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T471));
	*(T471*)C = GE_default471;
	return C;
}

/* LX_WILDCARD_PARSER.append_character_to_character_class */
T0* T438f167(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a14);
	if (t1) {
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			T469f19(GE_void(a2), a1);
			t2 = ((T6)((a1)+((T6)(GE_int32(32)))));
			T469f19(GE_void(a2), t2);
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			t2 = ((T6)((a1)-((T6)(GE_int32(32)))));
			T469f19(GE_void(a2), t2);
			T469f19(GE_void(a2), a1);
			break;
		case (T6)(T6)(GE_int32(0)):
			t2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			T469f19(GE_void(a2), t2);
			break;
		default:
			T469f19(GE_void(a2), a1);
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			t2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			T469f19(GE_void(a2), t2);
		} else {
			T469f19(GE_void(a2), a1);
		}
	}
	R = a2;
	return R;
}

/* LX_WILDCARD_PARSER.new_character_class */
T0* T438f166(T0* C)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
	R = T469c18(t1);
	return R;
}

/* LX_SYMBOL_CLASS.set_negated */
void T469f20(T0* C, T1 a1)
{
	((T469*)(C))->a6 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].force */
void T468f43(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T468f46(C);
	T468f44(C, a2);
	t1 = ((((T468*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T468f47(C, a1, ((T468*)(C))->a1);
	} else {
		t1 = ((((T468*)(C))->a5)==(((T468*)(C))->a6));
		if (t1) {
			t2 = ((T6)((((T468*)(C))->a5)+((T6)(GE_int32(1)))));
			t2 = (T468f23(C, t2));
			T468f48(C, t2);
			l2 = (T468f24(C, a2));
		} else {
			l2 = ((T468*)(C))->a7;
		}
		l1 = ((T468*)(C))->a8;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T468*)(C))->a9 = ((T6)((((T468*)(C))->a9)+((T6)(GE_int32(1)))));
			l1 = ((T468*)(C))->a9;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T468f32(C, l1));
			((T468*)(C))->a8 = ((T6)((t2)-(t3)));
		}
		t2 = (T468f33(C, l2));
		T468f49(C, t2, l1);
		T468f50(C, l1, l2);
		T468f47(C, a1, l1);
		T468f51(C, a2, l1);
		((T468*)(C))->a5 = ((T6)((((T468*)(C))->a5)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_put */
void T468f51(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T468*)(C))->a16)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_put */
void T468f50(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T468*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_put */
void T468f49(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T468*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].resize */
void T468f48(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T468f46(C);
	l1 = (T468f25(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T468f53(C, t1);
	l2 = ((T468*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T468f50(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T468*)(C))->a10 = l1;
	l2 = ((T468*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T468f32(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T468f22(C, l2));
			l3 = (T468f24(C, t3));
			t1 = (T468f33(C, l3));
			T468f49(C, t1, l2);
			T468f50(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f56(C, t1);
	((T468*)(C))->a6 = a1;
	((T468*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_resize */
void T468f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T468f31(C));
	((T468*)(C))->a14 = (T65f1(GE_void(t1), ((T468*)(C))->a14, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].special_integer_ */
T0* T468f31(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_resize */
void T468f55(T0* C, T6 a1)
{
	((T468*)(C))->a16 = (T66f1(GE_void(((T468*)(C))->a19), ((T468*)(C))->a16, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_resize */
void T468f54(T0* C, T6 a1)
{
	((T468*)(C))->a2 = (T471f2(GE_void(((T468*)(C))->a18), ((T468*)(C))->a2, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_resize */
void T468f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T468f31(C));
	((T468*)(C))->a15 = (T65f1(GE_void(t1), ((T468*)(C))->a15, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_modulus */
T6 T468f25(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_capacity */
T6 T468f23(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_put */
void T468f47(T0* C, T0* a1, T6 a2)
{
	((T470*)(GE_void(((T468*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].unset_found_item */
void T468f46(T0* C)
{
	((T468*)(C))->a13 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.new_nfa_from_character_class */
T0* T438f165(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	t1 = (((T469*)(GE_void(a1)))->a5);
	if (t1) {
		T469f24(GE_void(a1));
	}
	l1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T473f11(GE_void(l1), a1);
	}
	R = (T438f163(C, a1));
	return R;
}

/* LX_SYMBOL_CLASS.sort */
void T469f24(T0* C)
{
	T0* t1;
	t1 = (T469f17(C));
	T469f26(C, t1);
	((T469*)(C))->a5 = EIF_FALSE;
}

/* LX_SYMBOL_CLASS.arrayed_sort */
void T469f26(T0* C, T0* a1)
{
	T560f3(GE_void(a1), C);
}

/* DS_SHELL_SORTER [INTEGER_32].sort */
void T560f3(T0* C, T0* a1)
{
	T560f4(C, a1, ((T560*)(C))->a1);
}

/* DS_SHELL_SORTER [INTEGER_32].sort_with_comparator */
void T560f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T469f12(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T469*)(a1))->a7);
		T560f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_SHELL_SORTER [INTEGER_32].subsort_with_comparator */
void T560f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T1 t1;
	T6 t2;
	t1 = ((T1)((a3)<(a4)));
	if (t1) {
		t2 = ((T6)((a4)-(a3)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		l4 = ((T6)((t2)/((T6)(GE_int32(2)))));
		t1 = (T6f9(&l4, (T6)(GE_int32(0))));
		while (!(t1)) {
			l1 = ((T6)((a3)+(l4)));
			t1 = (T6f1(&l1, a4));
			while (!(t1)) {
				l2 = ((T6)((l1)-(l4)));
				t1 = ((T1)((l2)<(a3)));
				while (!(t1)) {
					l3 = ((T6)((l2)+(l4)));
					l5 = (T469f14(a1, l2));
					l6 = (T469f14(a1, l3));
					t1 = (T564f1(GE_void(a2), l6, l5));
					if (t1) {
						T469f25(a1, l6, l2);
						T469f25(a1, l5, l3);
						l2 = ((T6)((l2)-(l4)));
					} else {
						l2 = ((T6)((a3)-((T6)(GE_int32(1)))));
					}
					t1 = ((T1)((l2)<(a3)));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a4));
			}
			l4 = ((T6)((l4)/((T6)(GE_int32(2)))));
			t1 = (T6f9(&l4, (T6)(GE_int32(0))));
		}
	}
}

/* LX_SYMBOL_CLASS.replace */
void T469f25(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T469*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [INTEGER_32].less_than */
T1 T564f1(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	R = ((T1)((a1)<(a2)));
	return R;
}

/* LX_SYMBOL_CLASS.sorter */
unsigned char ge326os12827 = '\0';
T0* ge326ov12827;
T0* T469f17(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge326os12827) {
		return ge326ov12827;
	} else {
		ge326os12827 = '\1';
		ge326ov12827 = R;
	}
	l1 = T564c2();
	R = T560c2(l1);
	ge326ov12827 = R;
	return R;
}

/* DS_SHELL_SORTER [INTEGER_32].make */
T0* T560c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T560));
	*(T560*)C = GE_default560;
	((T560*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [INTEGER_32].make */
T0* T564c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T564));
	*(T564*)C = GE_default564;
	return C;
}

/* LX_WILDCARD_PARSER.new_symbol_class_nfa */
T0* T438f163(T0* C, T0* a1)
{
	T0* R = 0;
	R = T472c6(a1, ((T438*)(C))->a93);
	return R;
}

/* LX_NFA.make_symbol_class */
T0* T472c6(T0* a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T472));
	*(T472*)C = GE_default472;
	((T472*)(C))->a1 = a2;
	((T472*)(C))->a2 = T490c23((T6)(GE_int32(100)));
	l2 = T497c10(a2);
	l3 = T497c10(a2);
	l1 = T516c4(a1, l3);
	T497f11(GE_void(l2), l1);
	T490f25(GE_void(((T472*)(C))->a2), l2);
	T490f24(GE_void(((T472*)(C))->a2), l3);
	return C;
}

/* LX_SYMBOL_CLASS_TRANSITION [LX_NFA_STATE].make */
T0* T516c4(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T516));
	*(T516*)C = GE_default516;
	((T516*)(C))->a1 = a1;
	((T516*)(C))->a2 = a2;
	return C;
}

/* LX_WILDCARD_PARSER.question_character_class */
T0* T438f162(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = GE_ms("\?", 1);
	t1 = (T468f29(GE_void(((T438*)(C))->a14), l1));
	if (t1) {
		R = (T468f27(GE_void(((T438*)(C))->a14), l1));
	} else {
		R = T469c18((T6)(GE_int32(1)));
		T469f19(GE_void(R), (T6)(GE_int32(47)));
		T469f20(GE_void(R), EIF_TRUE);
		l2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			T473f11(GE_void(l2), R);
		}
		T468f43(GE_void(((T438*)(C))->a14), R, l1);
	}
	return R;
}

/* LX_NFA.build_optional */
void T472f11(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T472f4(C));
	t1 = (((T497*)(GE_void(t1)))->a3);
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T472f5(C));
		l1 = T518c3(t1);
		t1 = (T472f4(C));
		T497f12(GE_void(t1), l1);
	} else {
		l2 = (T472f4(C));
		l3 = (T472f5(C));
		l4 = T497c10(((T472*)(C))->a1);
		l1 = T518c3(l2);
		T497f11(GE_void(l4), l1);
		l1 = T518c3(l3);
		T497f12(GE_void(l4), l1);
		T490f26(GE_void(((T472*)(C))->a2), l4, (T6)(GE_int32(1)));
		t3 = (((T490*)(GE_void(((T472*)(C))->a2)))->a1);
		T490f26(GE_void(((T472*)(C))->a2), l2, t3);
		T490f27(GE_void(((T472*)(C))->a2), l3);
	}
}

/* LX_NFA_STATE.set_epsilon_transition */
void T497f12(T0* C, T0* a1)
{
	((T497*)(C))->a3 = a1;
}

/* LX_NFA.final_state */
T0* T472f5(T0* C)
{
	T0* R = 0;
	R = (T490f9(GE_void(((T472*)(C))->a2)));
	return R;
}

/* LX_NFA.build_positive_closure */
void T472f10(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	l2 = (T472f4(C));
	l3 = (T472f5(C));
	l1 = T518c3(l2);
	T497f11(GE_void(l3), l1);
	l4 = T497c10(((T472*)(C))->a1);
	l1 = T518c3(l2);
	T497f11(GE_void(l4), l1);
	T490f26(GE_void(((T472*)(C))->a2), l4, (T6)(GE_int32(1)));
	l4 = T497c10(((T472*)(C))->a1);
	l1 = T518c3(l4);
	T497f12(GE_void(l3), l1);
	T490f27(GE_void(((T472*)(C))->a2), l2);
	T490f27(GE_void(((T472*)(C))->a2), l4);
}

/* LX_NFA.build_closure */
void T472f9(T0* C)
{
	T472f10(C);
	T472f11(C);
}

/* LX_WILDCARD_PARSER.new_nfa_from_character */
T0* T438f159(T0* C, T6 a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a14);
	if (t1) {
		l4 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			l1 = ((T6)((a1)+((T6)(GE_int32(32)))));
			l2 = (T6f12(&l1));
			t1 = (T468f29(GE_void(((T438*)(C))->a14), l2));
			if (t1) {
				t2 = (T468f27(GE_void(((T438*)(C))->a14), l2));
				R = (T438f163(C, t2));
			} else {
				l3 = T469c18((T6)(GE_int32(2)));
				T469f19(GE_void(l3), a1);
				T469f19(GE_void(l3), l1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T473f11(GE_void(l4), l3);
				}
				T468f43(GE_void(((T438*)(C))->a14), l3, l2);
				R = (T438f163(C, l3));
			}
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			l2 = (T6f12(&a1));
			t1 = (T468f29(GE_void(((T438*)(C))->a14), l2));
			if (t1) {
				t2 = (T468f27(GE_void(((T438*)(C))->a14), l2));
				R = (T438f163(C, t2));
			} else {
				l3 = T469c18((T6)(GE_int32(2)));
				t3 = ((T6)((a1)-((T6)(GE_int32(32)))));
				T469f19(GE_void(l3), t3);
				T469f19(GE_void(l3), a1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T473f11(GE_void(l4), l3);
				}
				T468f43(GE_void(((T438*)(C))->a14), l3, l2);
				R = (T438f163(C, l3));
			}
			break;
		case (T6)(T6)(GE_int32(0)):
			t3 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			R = (T438f216(C, t3));
			break;
		default:
			R = (T438f216(C, a1));
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			t3 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
			R = (T438f216(C, t3));
		} else {
			R = (T438f216(C, a1));
		}
	}
	return R;
}

/* LX_NFA.build_concatenation */
void T472f8(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T472f4(GE_void(a1)));
	l1 = T518c3(t1);
	t1 = (T472f5(C));
	T497f11(GE_void(t1), l1);
	t1 = (((T472*)(GE_void(a1)))->a2);
	T490f28(GE_void(((T472*)(C))->a2), t1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].append_last */
void T490f28(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T490*)(GE_void(a1)))->a1);
	t1 = (T490f12(C, l1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T490*)(C))->a1)+(l1)));
		t2 = (T490f13(C, t2));
		T490f31(C, t2);
	}
	T490f32(C, a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].extend_last */
void T490f32(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T6)((((T490*)(C))->a1)+((T6)(GE_int32(1)))));
	l2 = (T490f11(GE_void(a1)));
	T534f9(GE_void(l2));
	t1 = (T534f5(GE_void(l2)));
	while (!(t1)) {
		t2 = (T534f4(GE_void(l2)));
		((T531*)(GE_void(((T490*)(C))->a2)))->z2[l1] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		T534f10(GE_void(l2));
		t1 = (T534f5(GE_void(l2)));
	}
	t3 = (((T490*)(GE_void(a1)))->a1);
	((T490*)(C))->a1 = ((T6)((((T490*)(C))->a1)+(t3)));
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].forth */
void T534f10(T0* C)
{
	T490f36(GE_void(((T534*)(C))->a3), C);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_forth */
void T490f36(T0* C, T0* a1)
{
	T1 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l2 = (((T534*)(a1))->a1);
	l1 = ((l2)==((T6)(GE_int32(0))));
	l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t1 = (T6f1(&l2, ((T490*)(C))->a1));
	if (t1) {
		l2 = (T6)(GE_int32(-1));
		t1 = ((T1)(!(l1)));
		if (t1) {
			T490f38(C, a1);
		}
	} else {
		if (l1) {
			T490f37(C, a1);
		}
	}
	T534f8(a1, l2);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].add_traversing_cursor */
void T490f37(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T490*)(C))->a6));
	if (t1) {
		t2 = (((T534*)(GE_void(((T490*)(C))->a6)))->a2);
		T534f11(a1, t2);
		T534f11(GE_void(((T490*)(C))->a6), a1);
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].set_next_cursor */
void T534f11(T0* C, T0* a1)
{
	((T534*)(C))->a2 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].remove_traversing_cursor */
void T490f38(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T490*)(C))->a6));
	if (t1) {
		l2 = ((T490*)(C))->a6;
		l1 = (((T534*)(GE_void(l2)))->a2);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T534*)(GE_void(l1)))->a2);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T534*)(a1))->a2);
			T534f11(GE_void(l2), t2);
			T534f11(a1, EIF_VOID);
		}
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].item */
T0* T534f4(T0* C)
{
	T0* R = 0;
	R = (T490f16(GE_void(((T534*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_item */
T0* T490f16(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T534*)(a1))->a1);
	R = (T490f10(C, t1));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].after */
T1 T534f5(T0* C)
{
	T1 R = 0;
	R = (T490f15(GE_void(((T534*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_after */
T1 T490f15(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T534*)(a1))->a1);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].start */
void T534f9(T0* C)
{
	T490f35(GE_void(((T534*)(C))->a3), C);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_start */
void T490f35(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T534f6(a1));
	t1 = (T490f8(C));
	if (t1) {
		T534f8(a1, (T6)(GE_int32(-1)));
	} else {
		T534f8(a1, (T6)(GE_int32(1)));
		if (l1) {
			T490f37(C, a1);
		}
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].off */
T1 T534f6(T0* C)
{
	T1 R = 0;
	R = (T490f18(GE_void(((T534*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_off */
T1 T490f18(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T490f15(C, a1));
	if (!(t1)) {
		R = (T490f20(C, a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_before */
T1 T490f20(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T534*)(a1))->a1);
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_NFA.build_union */
void T472f7(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l2 = (T472f4(C));
	l3 = (T472f4(GE_void(a1)));
	t1 = (((T497*)(GE_void(l2)))->a3);
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		l1 = T518c3(l3);
		T497f12(GE_void(l2), l1);
	} else {
		t1 = (((T497*)(GE_void(l3)))->a3);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			l1 = T518c3(l2);
			T497f12(GE_void(l3), l1);
			T490f26(GE_void(((T472*)(C))->a2), l3, (T6)(GE_int32(1)));
			t1 = (((T472*)(GE_void(a1)))->a2);
			T490f26(GE_void(t1), l2, (T6)(GE_int32(1)));
		} else {
			l4 = T497c10(((T472*)(C))->a1);
			l1 = T518c3(l2);
			T497f11(GE_void(l4), l1);
			l1 = T518c3(l3);
			T497f12(GE_void(l4), l1);
			T490f26(GE_void(((T472*)(C))->a2), l4, (T6)(GE_int32(1)));
			l4 = (T472f5(C));
			t3 = (((T490*)(GE_void(((T472*)(C))->a2)))->a1);
			T490f26(GE_void(((T472*)(C))->a2), l2, t3);
			T490f27(GE_void(((T472*)(C))->a2), l4);
		}
	}
	l2 = (T472f5(C));
	l3 = (T472f5(GE_void(a1)));
	t2 = (T497f7(GE_void(l3)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		l1 = T518c3(l3);
		T497f11(GE_void(l2), l1);
		t1 = (((T472*)(GE_void(a1)))->a2);
		T490f28(GE_void(((T472*)(C))->a2), t1);
	} else {
		t2 = (T497f7(GE_void(l2)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			l1 = T518c3(l2);
			T497f11(GE_void(l3), l1);
			t3 = (((T490*)(GE_void(((T472*)(C))->a2)))->a1);
			T490f26(GE_void(((T472*)(C))->a2), l3, t3);
			t1 = (((T472*)(GE_void(a1)))->a2);
			t4 = (((T472*)(GE_void(a1)))->a2);
			t3 = (((T490*)(GE_void(t4)))->a1);
			T490f26(GE_void(t1), l2, t3);
			t1 = (((T472*)(GE_void(a1)))->a2);
			T490f28(GE_void(((T472*)(C))->a2), t1);
		} else {
			l4 = T497c10(((T472*)(C))->a1);
			l1 = T518c3(l4);
			T497f11(GE_void(l2), l1);
			l1 = T518c3(l4);
			T497f11(GE_void(l3), l1);
			t1 = (((T472*)(GE_void(a1)))->a2);
			T490f28(GE_void(((T472*)(C))->a2), t1);
			T490f27(GE_void(((T472*)(C))->a2), l4);
		}
	}
}

/* LX_WILDCARD_PARSER.report_unrecognized_rule_error */
void T438f250(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T479c7(t1, ((T438*)(C))->a15);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_UNRECOGNIZED_RULE_ERROR.make */
T0* T479c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T479));
	*(T479*)C = GE_default479;
	((T479*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T479*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T479*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.process_rule */
void T438f249(T0* C, T0* a1)
{
	T0* t1;
	T1 t2;
	T1 t3;
	T472f14(GE_void(a1), ((T438*)(C))->a94);
	T474f15(GE_void(((T438*)(C))->a94), a1);
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a7);
	T464f13(GE_void(t1), ((T438*)(C))->a94);
	T464f13(GE_void(((T438*)(C))->a2), ((T438*)(C))->a94);
	T474f16(GE_void(((T438*)(C))->a94), ((T438*)(C))->a104);
	T474f17(GE_void(((T438*)(C))->a94), ((T438*)(C))->a96);
	T474f18(GE_void(((T438*)(C))->a94), ((T438*)(C))->a97);
	T474f19(GE_void(((T438*)(C))->a94), ((T438*)(C))->a100);
	T474f20(GE_void(((T438*)(C))->a94), ((T438*)(C))->a98);
	T474f21(GE_void(((T438*)(C))->a94), ((T438*)(C))->a99);
	if (((T438*)(C))->a96) {
		t3 = (T6f5(&(((T438*)(C))->a97), (T6)(GE_int32(0))));
		if (!(t3)) {
			t3 = (T6f5(&(((T438*)(C))->a100), (T6)(GE_int32(0))));
		}
		t2 = ((T1)(!(t3)));
	} else {
		t2 = EIF_FALSE;
	}
	if (t2) {
		T439f34(GE_void(((T438*)(C))->a11), EIF_TRUE);
	}
	t2 = (T465f6(GE_void(((T438*)(C))->a3)));
	if (t2) {
		t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a8);
		T465f13(GE_void(t1), a1);
	} else {
		T465f11(GE_void(((T438*)(C))->a3), a1);
	}
}

/* LX_START_CONDITIONS.add_nfa_to_all */
void T465f11(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T465*)(C))->a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T465f7(C, l1));
		T493f7(GE_void(t2), a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITION.put_nfa */
void T493f7(T0* C, T0* a1)
{
	T495f11(GE_void(((T493*)(C))->a4), a1);
}

/* DS_ARRAYED_LIST [LX_NFA].force_last */
void T495f11(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T495f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T495*)(C))->a5)+((T6)(GE_int32(1)))));
		t2 = (T495f9(C, t2));
		T495f12(C, t2);
	}
	((T495*)(C))->a5 = ((T6)((((T495*)(C))->a5)+((T6)(GE_int32(1)))));
	((T475*)(GE_void(((T495*)(C))->a2)))->z2[((T495*)(C))->a5] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA].resize */
void T495f12(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T495*)(C))->a2 = (T476f2(GE_void(((T495*)(C))->a1), ((T495*)(C))->a2, t1));
	((T495*)(C))->a3 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA].new_capacity */
T6 T495f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA].extendible */
T1 T495f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T495*)(C))->a5)+(a1)));
	R = (T6f5(&(((T495*)(C))->a3), t1));
	return R;
}

/* LX_START_CONDITIONS.add_nfa_to_non_exclusive */
void T465f13(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = ((T465*)(C))->a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T465f7(C, l1));
		t1 = (((T493*)(GE_void(l3)))->a3);
		t1 = ((T1)(!(t1)));
		if (t1) {
			T493f7(GE_void(l3), a1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITIONS.is_empty */
T1 T465f6(T0* C)
{
	T1 R = 0;
	R = ((((T465*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_DESCRIPTION.set_variable_trail_context */
void T439f34(T0* C, T1 a1)
{
	((T439*)(C))->a6 = a1;
}

/* LX_RULE.set_column_count */
void T474f21(T0* C, T6 a1)
{
	((T474*)(C))->a7 = a1;
}

/* LX_RULE.set_line_count */
void T474f20(T0* C, T6 a1)
{
	((T474*)(C))->a6 = a1;
}

/* LX_RULE.set_trail_count */
void T474f19(T0* C, T6 a1)
{
	((T474*)(C))->a5 = a1;
}

/* LX_RULE.set_head_count */
void T474f18(T0* C, T6 a1)
{
	((T474*)(C))->a4 = a1;
}

/* LX_RULE.set_trail_context */
void T474f17(T0* C, T1 a1)
{
	((T474*)(C))->a9 = a1;
}

/* LX_RULE.set_line_nb */
void T474f16(T0* C, T6 a1)
{
	((T474*)(C))->a8 = a1;
}

/* LX_RULE.set_pattern */
void T474f15(T0* C, T0* a1)
{
	((T474*)(C))->a2 = a1;
}

/* LX_NFA.set_accepted_rule */
void T472f14(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T472f5(C));
	T497f13(GE_void(t1), a1);
}

/* LX_NFA_STATE.set_accepted_rule */
void T497f13(T0* C, T0* a1)
{
	((T497*)(C))->a5 = a1;
}

/* LX_DESCRIPTION.create_equiv_classes */
void T439f33(T0* C)
{
	((T439*)(C))->a1 = T473c9((T6)(GE_int32(1)), ((T439*)(C))->a9);
}

/* LX_EQUIVALENCE_CLASSES.make */
T0* T473c9(T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T1 t1;
	C = (T0*)GE_alloc(sizeof(T473));
	*(T473*)C = GE_default473;
	((T473*)(C))->a2 = T523c6(a1, a2);
	l2 = a1;
	t1 = (T6f1(&l2, a2));
	while (!(t1)) {
		l1 = T521c4(l2);
		T523f7(GE_void(((T473*)(C))->a2), l1, l2);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, a2));
	}
	T473f12(C);
	return C;
}

/* LX_EQUIVALENCE_CLASSES.initialize */
void T473f12(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T0* t2;
	T1 t3;
	l2 = (T473f4(C));
	t1 = (T473f5(C));
	t2 = (T523f4(GE_void(((T473*)(C))->a2), t1));
	t1 = (T473f5(C));
	T521f5(GE_void(t2), t1);
	t1 = (T473f5(C));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T523f4(GE_void(((T473*)(C))->a2), l1));
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = (T523f4(GE_void(((T473*)(C))->a2), t1));
		T521f9(GE_void(l3), t2);
		T521f5(GE_void(l3), l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	((T473*)(C))->a1 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.check_options */
void T438f248(T0* C)
{
	T1 t1;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a3);
	if (t1) {
		t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a4);
		if (t1) {
			T438f261(C);
		}
		t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a5);
		if (t1) {
			T438f262(C);
		} else {
			t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a6);
			if (t1) {
				T438f263(C);
			}
		}
	}
}

/* LX_WILDCARD_PARSER.report_full_and_variable_trailing_context_error */
void T438f263(T0* C)
{
	T0* l1 = 0;
	l1 = T485c7();
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_VARIABLE_TRAILING_CONTEXT_ERROR.make */
T0* T485c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T485));
	*(T485*)C = GE_default485;
	((T485*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.report_full_and_reject_error */
void T438f262(T0* C)
{
	T0* l1 = 0;
	l1 = T484c7();
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_REJECT_ERROR.make */
T0* T484c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T484));
	*(T484*)C = GE_default484;
	((T484*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.report_full_and_meta_equiv_classes_error */
void T438f261(T0* C)
{
	T0* l1 = 0;
	l1 = T483c7();
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_META_ERROR.make */
T0* T483c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T483));
	*(T483*)C = GE_default483;
	((T483*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.build_equiv_classes */
void T438f247(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T439*)(GE_void(((T438*)(C))->a11)))->a1);
	T473f10(GE_void(l2));
	l1 = (T468f28(GE_void(((T438*)(C))->a14)));
	T478f7(GE_void(l1));
	t1 = (T478f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T478f4(GE_void(l1)));
		T469f23(GE_void(t2), l2);
		T478f8(GE_void(l1));
		t1 = (T478f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].forth */
void T478f8(T0* C)
{
	T468f62(GE_void(((T478*)(C))->a1), C);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_forth */
void T468f62(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T478*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T468*)(C))->a9;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T468f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T468f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T478f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T468f63(C, a1);
		}
	} else {
		T478f9(a1, l1);
		if (l3) {
			T468f64(C, a1);
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].add_traversing_cursor */
void T468f64(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T468*)(C))->a17));
	if (t1) {
		t2 = (((T478*)(GE_void(((T468*)(C))->a17)))->a3);
		T478f10(a1, t2);
		T478f10(GE_void(((T468*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].set_next_cursor */
void T478f10(T0* C, T0* a1)
{
	((T478*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].remove_traversing_cursor */
void T468f63(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T468*)(C))->a17));
	if (t1) {
		l2 = ((T468*)(C))->a17;
		l1 = (((T478*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T478*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T478*)(a1))->a3);
			T478f10(GE_void(l2), t2);
			T478f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].set_position */
void T478f9(T0* C, T6 a1)
{
	((T478*)(C))->a2 = a1;
}

/* LX_SYMBOL_CLASS.convert_to_equivalence */
void T469f23(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l3 = ((T469*)(C))->a7;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		l4 = (T469f14(C, l1));
		t1 = (T473f7(GE_void(a1), l4));
		if (t1) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t2 = (T473f8(GE_void(a1), l4));
			T469f25(C, t2, l2);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	((T469*)(C))->a7 = l2;
}

/* LX_EQUIVALENCE_CLASSES.equivalence_class */
T6 T473f8(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	t1 = (T523f4(GE_void(((T473*)(C))->a2), a1));
	R = (((T521*)(GE_void(t1)))->a1);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.is_representative */
T1 T473f7(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T523f4(GE_void(((T473*)(C))->a2), a1));
	t1 = (((T521*)(GE_void(t1)))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].item */
T0* T478f4(T0* C)
{
	T0* R = 0;
	R = (T468f35(GE_void(((T478*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_item */
T0* T468f35(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T478*)(a1))->a2);
	R = (T468f21(C, t1));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].after */
T1 T478f5(T0* C)
{
	T1 R = 0;
	R = (T468f34(GE_void(((T478*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_after */
T1 T468f34(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T478*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].start */
void T478f7(T0* C)
{
	T468f61(GE_void(((T478*)(C))->a1), C);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_start */
void T468f61(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T468f39(C));
	if (t1) {
		T478f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T468f40(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T468*)(C))->a9;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T468f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T468f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T478f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T468f63(C, a1);
			}
		} else {
			T478f9(a1, l1);
			if (l3) {
				T468f64(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_off */
T1 T468f40(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T478*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].is_empty */
T1 T468f39(T0* C)
{
	T1 R = 0;
	R = ((((T468*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_cursor */
T0* T468f28(T0* C)
{
	T0* R = 0;
	R = T478c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].make */
T0* T478c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T478));
	*(T478*)C = GE_default478;
	((T478*)(C))->a1 = a1;
	((T478*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* LX_EQUIVALENCE_CLASSES.build */
void T473f10(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	l3 = (T473f4(C));
	l1 = (T473f5(C));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		l4 = (T523f4(GE_void(((T473*)(C))->a2), l1));
		t2 = (((T521*)(GE_void(l4)))->a2);
		t1 = ((t2)==(EIF_VOID));
		if (t1) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			T521f5(GE_void(l4), l2);
			l4 = (((T521*)(GE_void(l4)))->a3);
			t1 = ((l4)==(EIF_VOID));
			while (!(t1)) {
				T521f5(GE_void(l4), l2);
				l4 = (((T521*)(GE_void(l4)))->a3);
				t1 = ((l4)==(EIF_VOID));
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	((T473*)(C))->a1 = l2;
}

/* LX_WILDCARD_PARSER.yy_push_last_value */
void T438f234(T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	t1 = (((T63*)(GE_void(((T438*)(C))->a44)))->z2[a1]);
	switch (t1) {
	case (T6)(T6)(GE_int32(1)):
		((T438*)(C))->a46 = ((T6)((((T438*)(C))->a46)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T438*)(C))->a46), ((T438*)(C))->a77));
		if (t2) {
			t2 = ((((T438*)(C))->a78)==(EIF_VOID));
			if (t2) {
				((T438*)(C))->a79 = T138c3();
				((T438*)(C))->a77 = (T6)(GE_int32(10));
				((T438*)(C))->a78 = (T138f1(GE_void(((T438*)(C))->a79), ((T438*)(C))->a77));
			} else {
				((T438*)(C))->a77 = ((T6)((((T438*)(C))->a77)+((T6)(GE_int32(10)))));
				((T438*)(C))->a78 = (T138f2(GE_void(((T438*)(C))->a79), ((T438*)(C))->a78, ((T438*)(C))->a77));
			}
		}
		((T137*)(GE_void(((T438*)(C))->a78)))->z2[((T438*)(C))->a46] = (((T438*)(C))->a80);
		break;
	case (T6)(T6)(GE_int32(2)):
		((T438*)(C))->a47 = ((T6)((((T438*)(C))->a47)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T438*)(C))->a47), ((T438*)(C))->a81));
		if (t2) {
			t2 = ((((T438*)(C))->a82)==(EIF_VOID));
			if (t2) {
				((T438*)(C))->a83 = T65c4();
				((T438*)(C))->a81 = (T6)(GE_int32(10));
				((T438*)(C))->a82 = (T65f2(GE_void(((T438*)(C))->a83), ((T438*)(C))->a81));
			} else {
				((T438*)(C))->a81 = ((T6)((((T438*)(C))->a81)+((T6)(GE_int32(10)))));
				((T438*)(C))->a82 = (T65f1(GE_void(((T438*)(C))->a83), ((T438*)(C))->a82, ((T438*)(C))->a81));
			}
		}
		((T63*)(GE_void(((T438*)(C))->a82)))->z2[((T438*)(C))->a47] = (((T438*)(C))->a84);
		break;
	case (T6)(T6)(GE_int32(3)):
		((T438*)(C))->a48 = ((T6)((((T438*)(C))->a48)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T438*)(C))->a48), ((T438*)(C))->a85));
		if (t2) {
			t2 = ((((T438*)(C))->a86)==(EIF_VOID));
			if (t2) {
				((T438*)(C))->a87 = T471c3();
				((T438*)(C))->a85 = (T6)(GE_int32(10));
				((T438*)(C))->a86 = (T471f1(GE_void(((T438*)(C))->a87), ((T438*)(C))->a85));
			} else {
				((T438*)(C))->a85 = ((T6)((((T438*)(C))->a85)+((T6)(GE_int32(10)))));
				((T438*)(C))->a86 = (T471f2(GE_void(((T438*)(C))->a87), ((T438*)(C))->a86, ((T438*)(C))->a85));
			}
		}
		((T470*)(GE_void(((T438*)(C))->a86)))->z2[((T438*)(C))->a48] = (((T438*)(C))->a88);
		break;
	case (T6)(T6)(GE_int32(4)):
		((T438*)(C))->a49 = ((T6)((((T438*)(C))->a49)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T438*)(C))->a49), ((T438*)(C))->a89));
		if (t2) {
			t2 = ((((T438*)(C))->a90)==(EIF_VOID));
			if (t2) {
				((T438*)(C))->a91 = T66c3();
				((T438*)(C))->a89 = (T6)(GE_int32(10));
				((T438*)(C))->a90 = (T66f2(GE_void(((T438*)(C))->a91), ((T438*)(C))->a89));
			} else {
				((T438*)(C))->a89 = ((T6)((((T438*)(C))->a89)+((T6)(GE_int32(10)))));
				((T438*)(C))->a90 = (T66f1(GE_void(((T438*)(C))->a91), ((T438*)(C))->a90, ((T438*)(C))->a89));
			}
		}
		((T32*)(GE_void(((T438*)(C))->a90)))->z2[((T438*)(C))->a49] = (((T438*)(C))->a92);
		break;
	default:
		T438f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.accept */
void T438f233(T0* C)
{
	((T438*)(C))->a22 = (T6)(GE_int32(101));
}

/* LX_WILDCARD_PARSER.yy_do_error_action */
void T438f231(T0* C, T6 a1)
{
	switch (a1) {
	case (T6)(T6)(GE_int32(47)):
		T438f245(C);
		break;
	default:
		T438f246(C, GE_ms("parse error", 11));
		break;
	}
}

/* LX_WILDCARD_PARSER.report_error */
void T438f246(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T477c7(t1, ((T438*)(C))->a15);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* UT_SYNTAX_ERROR.make */
T0* T477c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T477));
	*(T477*)C = GE_default477;
	((T477*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T477*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T477*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.report_eof_expected_error */
void T438f245(T0* C)
{
	T438f246(C, GE_ms("parse error", 11));
}

/* LX_WILDCARD_PARSER.read_token */
void T438f230(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T6 l10 = 0;
	T6 l11 = 0;
	T6 l12 = 0;
	T1 l13 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	((T438*)(C))->a35 = (T6)(GE_int32(-2));
	l7 = (T6)(GE_int32(1));
	t1 = ((((T438*)(C))->a35)!=((T6)(GE_int32(-2))));
	while (!(t1)) {
		switch (l7) {
		case (T6)(T6)(GE_int32(1)):
			if (((T438*)(C))->a51) {
				((T438*)(C))->a52 = ((T6)((((T438*)(C))->a18)-(((T438*)(C))->a45)));
				((T438*)(C))->a51 = EIF_FALSE;
			} else {
				((T438*)(C))->a52 = (T6)(GE_int32(0));
				((T438*)(C))->a53 = ((T438*)(C))->a20;
				((T438*)(C))->a54 = ((T438*)(C))->a21;
				((T438*)(C))->a55 = ((T438*)(C))->a19;
			}
			l1 = ((T438*)(C))->a18;
			l2 = l1;
			t1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a1);
			if (t1) {
				l3 = ((T6)((((T438*)(C))->a56)+((T6)(GE_int32(1)))));
			} else {
				l3 = ((T438*)(C))->a56;
			}
			if (EIF_FALSE) {
				((T63*)(GE_void(((T438*)(C))->a57)))->z2[(T6)(GE_int32(0))] = (l3);
				((T438*)(C))->a58 = (T6)(GE_int32(1));
			}
			l7 = (T6)(GE_int32(2));
			break;
		case (T6)(T6)(GE_int32(2)):
			l13 = EIF_FALSE;
			while (!(l13)) {
				t1 = ((((T438*)(C))->a59)!=(EIF_VOID));
				if (t1) {
					t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
					if (t1) {
						t2 = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[l1]);
						t3 = ((T6)(t2));
						l8 = (((T63*)(GE_void(((T438*)(C))->a59)))->z2[t3]);
					} else {
						t2 = (T326f6(GE_void(((T438*)(C))->a61), l1));
						t3 = ((T6)(t2));
						l8 = (((T63*)(GE_void(((T438*)(C))->a59)))->z2[t3]);
					}
				} else {
					t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
					if (t1) {
						t2 = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[l1]);
						l8 = ((T6)(t2));
					} else {
						t2 = (T326f6(GE_void(((T438*)(C))->a61), l1));
						l8 = ((T6)(t2));
					}
				}
				t1 = EIF_FALSE;
				t1 = ((T1)(!(t1)));
				if (t1) {
					t3 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[l3]);
					t1 = ((t3)!=((T6)(GE_int32(0))));
				}
				if (t1) {
					((T438*)(C))->a63 = l3;
					((T438*)(C))->a64 = l1;
				}
				t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[l3]);
				t3 = ((T6)((t3)+(l8)));
				t3 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t3]);
				t1 = ((t3)==(l3));
				while (!(t1)) {
					l3 = (((T63*)(GE_void(((T438*)(C))->a67)))->z2[l3]);
					t1 = ((((T438*)(C))->a68)!=(EIF_VOID));
					if (t1) {
						t1 = (T6f5(&l3, (T6)(GE_int32(54))));
					}
					if (t1) {
						l8 = (((T63*)(GE_void(((T438*)(C))->a68)))->z2[l8]);
					}
					t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[l3]);
					t3 = ((T6)((t3)+(l8)));
					t3 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t3]);
					t1 = ((t3)==(l3));
				}
				t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[l3]);
				t3 = ((T6)((t3)+(l8)));
				l3 = (((T63*)(GE_void(((T438*)(C))->a69)))->z2[t3]);
				if (EIF_FALSE) {
					((T63*)(GE_void(((T438*)(C))->a57)))->z2[((T438*)(C))->a58] = (l3);
					((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)+((T6)(GE_int32(1)))));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				l13 = ((l3)==((T6)(GE_int32(53))));
			}
			t1 = EIF_FALSE;
			t1 = ((T1)(!(t1)));
			if (t1) {
				l1 = ((T438*)(C))->a64;
				l3 = ((T438*)(C))->a63;
			}
			l7 = (T6)(GE_int32(3));
			break;
		case (T6)(T6)(GE_int32(3)):
			t1 = EIF_FALSE;
			t1 = ((T1)(!(t1)));
			if (t1) {
				l6 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[l3]);
				l7 = (T6)(GE_int32(4));
			} else {
				((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)-((T6)(GE_int32(1)))));
				l3 = (((T63*)(GE_void(((T438*)(C))->a57)))->z2[((T438*)(C))->a58]);
				((T438*)(C))->a70 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[l3]);
				l7 = (T6)(GE_int32(5));
			}
			break;
		case (T6)(T6)(GE_int32(5)):
			l9 = EIF_FALSE;
			while (!(l9)) {
				t1 = ((((T438*)(C))->a70)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					t3 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[t3]);
					t1 = ((T1)((((T438*)(C))->a70)<(t3)));
				}
				if (t1) {
					l6 = ((GE_void(((T438*)(C))->a71), ((T438*)(C))->a70, (T6)0));
					if (EIF_FALSE) {
						t3 = (T6)(GE_int32(20));
						t3 = ((T6)(-(t3)));
						t1 = ((T1)((l6)<(t3)));
						if (!(t1)) {
							t1 = ((((T438*)(C))->a72)!=((T6)(GE_int32(0))));
						}
						if (t1) {
							t1 = ((l6)==(((T438*)(C))->a72));
							if (t1) {
								((T438*)(C))->a72 = (T6)(GE_int32(0));
								t3 = ((T6)(-(l6)));
								l6 = ((T6)((t3)-((T6)(GE_int32(20)))));
								l9 = EIF_TRUE;
							} else {
								((T438*)(C))->a70 = ((T6)((((T438*)(C))->a70)+((T6)(GE_int32(1)))));
							}
						} else {
							t1 = ((T1)((l6)<((T6)(GE_int32(0)))));
							if (t1) {
								((T438*)(C))->a72 = ((T6)((l6)-((T6)(GE_int32(20)))));
								if (EIF_FALSE) {
									((T438*)(C))->a73 = l1;
									((T438*)(C))->a74 = ((T438*)(C))->a58;
									((T438*)(C))->a75 = ((T438*)(C))->a70;
								}
								((T438*)(C))->a70 = ((T6)((((T438*)(C))->a70)+((T6)(GE_int32(1)))));
							} else {
								((T438*)(C))->a73 = l1;
								((T438*)(C))->a74 = ((T438*)(C))->a58;
								((T438*)(C))->a75 = ((T438*)(C))->a70;
								l9 = EIF_TRUE;
							}
						}
					} else {
						((T438*)(C))->a73 = l1;
						l9 = EIF_TRUE;
					}
				} else {
					l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
					((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)-((T6)(GE_int32(1)))));
					l3 = (((T63*)(GE_void(((T438*)(C))->a57)))->z2[((T438*)(C))->a58]);
					((T438*)(C))->a70 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[l3]);
				}
			}
			l10 = ((T438*)(C))->a20;
			l11 = ((T438*)(C))->a21;
			l12 = ((T438*)(C))->a19;
			l7 = (T6)(GE_int32(4));
			break;
		case (T6)(T6)(GE_int32(4)):
			l2 = ((T6)((l2)-(((T438*)(C))->a52)));
			((T438*)(C))->a45 = l2;
			((T438*)(C))->a18 = l1;
			l7 = (T6)(GE_int32(1));
			t1 = ((l6)==((T6)(GE_int32(0))));
			if (t1) {
				t1 = EIF_FALSE;
				t1 = ((T1)(!(t1)));
				if (t1) {
					l1 = ((T438*)(C))->a64;
					l2 = ((T6)((l2)+(((T438*)(C))->a52)));
					l3 = ((T438*)(C))->a63;
					l7 = (T6)(GE_int32(3));
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(-1));
					T438f241(C, GE_ms("fatal scanner internal error: no action found", 45));
				}
			} else {
				t1 = ((l6)==((T6)(GE_int32(21))));
				if (t1) {
					t3 = ((T6)((l1)-(l2)));
					l5 = ((T6)((t3)-((T6)(GE_int32(1)))));
					t3 = (((T206*)(GE_void(((T438*)(C))->a17)))->a2);
					t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
					t1 = (T6f9(&(((T438*)(C))->a18), t3));
					if (t1) {
						((T438*)(C))->a18 = ((T6)((l2)+(l5)));
						l3 = (T438f127(C));
						l4 = (T438f128(C, l3));
						l2 = ((T6)((l2)+(((T438*)(C))->a52)));
						t1 = ((l4)!=((T6)(GE_int32(0))));
						if (t1) {
							l1 = ((T6)((((T438*)(C))->a18)+((T6)(GE_int32(1)))));
							((T438*)(C))->a18 = l1;
							l3 = l4;
							l7 = (T6)(GE_int32(2));
						} else {
							if (EIF_FALSE) {
								l1 = ((T438*)(C))->a18;
								((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)-((T6)(GE_int32(1)))));
							} else {
								l1 = ((T438*)(C))->a64;
								l3 = ((T438*)(C))->a63;
							}
							l7 = (T6)(GE_int32(3));
						}
					} else {
						((T438*)(C))->a18 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
						T438f242(C);
						t1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a3);
						if (t1) {
							l3 = (T438f127(C));
							l1 = ((T438*)(C))->a18;
							l2 = ((T6)((((T438*)(C))->a45)+(((T438*)(C))->a52)));
							l7 = (T6)(GE_int32(2));
						} else {
							t3 = ((T6)((((T438*)(C))->a18)-(((T438*)(C))->a45)));
							t3 = ((T6)((t3)-(((T438*)(C))->a52)));
							t1 = ((t3)!=((T6)(GE_int32(0))));
							if (t1) {
								l3 = (T438f127(C));
								l1 = ((T438*)(C))->a18;
								l2 = ((T6)((((T438*)(C))->a45)+(((T438*)(C))->a52)));
								l7 = (T6)(GE_int32(3));
							} else {
								t1 = (T438f129(C));
								if (t1) {
									l2 = ((T438*)(C))->a45;
									l1 = ((T438*)(C))->a18;
									t3 = ((T6)((((T438*)(C))->a56)-((T6)(GE_int32(1)))));
									t3 = ((T6)((t3)/((T6)(GE_int32(2)))));
									T438f243(C, t3);
								}
							}
						}
					}
				} else {
					T438f244(C, l6);
					if (((T438*)(C))->a76) {
						((T438*)(C))->a76 = EIF_FALSE;
						((T438*)(C))->a20 = l10;
						((T438*)(C))->a21 = l11;
						((T438*)(C))->a19 = l12;
						l1 = ((T438*)(C))->a73;
						if (EIF_FALSE) {
							((T438*)(C))->a70 = ((T438*)(C))->a75;
							((T438*)(C))->a58 = ((T438*)(C))->a74;
							t3 = ((T6)((((T438*)(C))->a58)-((T6)(GE_int32(1)))));
							l3 = (((T63*)(GE_void(((T438*)(C))->a57)))->z2[t3]);
						}
						((T438*)(C))->a70 = ((T6)((((T438*)(C))->a70)+((T6)(GE_int32(1)))));
						l7 = (T6)(GE_int32(5));
					}
				}
			}
			break;
		default:
			break;
		}
		t1 = ((((T438*)(C))->a35)!=((T6)(GE_int32(-2))));
	}
}

/* LX_WILDCARD_PARSER.yy_execute_action */
void T438f244(T0* C, T6 a1)
{
	T1 t1;
	T2 t2;
	T6 t3;
	T0* t4;
	t1 = (T6f9(&a1, (T6)(GE_int32(10))));
	if (t1) {
		t1 = (T6f9(&a1, (T6)(GE_int32(5))));
		if (t1) {
			t1 = (T6f9(&a1, (T6)(GE_int32(3))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(2))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(1))));
					if (t1) {
						((T438*)(C))->a35 = (T6)(GE_int32(34));
						T438f254(C, (T6)(GE_int32(1)));
					} else {
						((T438*)(C))->a103 = (T438f175(C));
						t1 = (T468f29(GE_void(((T438*)(C))->a14), ((T438*)(C))->a103));
						if (t1) {
							((T438*)(C))->a35 = (T6)(GE_int32(261));
							((T438*)(C))->a88 = (T468f27(GE_void(((T438*)(C))->a14), ((T438*)(C))->a103));
						} else {
							((T438*)(C))->a35 = (T6)(GE_int32(91));
							((T438*)(C))->a92 = ((T438*)(C))->a103;
							T438f255(C, (T6)(GE_int32(1)));
							T438f254(C, (T6)(GE_int32(2)));
						}
						((T438*)(C))->a103 = EIF_VOID;
					}
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(259));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(4))));
				if (t1) {
					((T438*)(C))->a35 = (T6)(GE_int32(258));
				} else {
					t2 = (T438f181(C, (T6)(GE_int32(1))));
					((T438*)(C))->a35 = ((T6)(t2));
				}
			}
		} else {
			t1 = (T6f9(&a1, (T6)(GE_int32(8))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(7))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(6))));
					if (t1) {
						((T438*)(C))->a35 = (T6)(GE_int32(260));
						t2 = (T438f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T438f256(C, t3);
					} else {
						t2 = (T438f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T438f256(C, t3);
						((T438*)(C))->a35 = (T6)(GE_int32(260));
					}
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(34));
					T438f254(C, (T6)(GE_int32(0)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(9))));
				if (t1) {
					T438f257(C);
					((T438*)(C))->a15 = ((T6)((((T438*)(C))->a15)+((T6)(GE_int32(1)))));
					((T438*)(C))->a35 = (T6)(GE_int32(34));
					T438f254(C, (T6)(GE_int32(0)));
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(260));
					T438f258(C);
					t3 = (T438f184(C));
					t1 = ((t3)==((T6)(GE_int32(2))));
					if (t1) {
						T438f254(C, (T6)(GE_int32(3)));
					}
				}
			}
		}
	} else {
		t1 = (T6f9(&a1, (T6)(GE_int32(15))));
		if (t1) {
			t1 = (T6f9(&a1, (T6)(GE_int32(13))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(12))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(11))));
					if (t1) {
						((T438*)(C))->a18 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
						T438f254(C, (T6)(GE_int32(3)));
						((T438*)(C))->a35 = (T6)(GE_int32(94));
					} else {
						((T438*)(C))->a18 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
						((T438*)(C))->a35 = (T6)(GE_int32(94));
					}
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(260));
					t2 = (T438f181(C, (T6)(GE_int32(1))));
					t3 = ((T6)(t2));
					T438f256(C, t3);
					T438f254(C, (T6)(GE_int32(3)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(14))));
				if (t1) {
					T438f259(C);
					((T438*)(C))->a15 = ((T6)((((T438*)(C))->a15)+((T6)(GE_int32(1)))));
					((T438*)(C))->a35 = (T6)(GE_int32(93));
					T438f254(C, (T6)(GE_int32(0)));
				} else {
					((T438*)(C))->a18 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
					((T438*)(C))->a35 = (T6)(GE_int32(45));
				}
			}
		} else {
			t1 = (T6f9(&a1, (T6)(GE_int32(18))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(17))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(16))));
					if (t1) {
						((T438*)(C))->a35 = (T6)(GE_int32(260));
						t2 = (T438f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T438f256(C, t3);
					} else {
						((T438*)(C))->a35 = (T6)(GE_int32(93));
						T438f254(C, (T6)(GE_int32(0)));
					}
				} else {
					T438f259(C);
					((T438*)(C))->a15 = ((T6)((((T438*)(C))->a15)+((T6)(GE_int32(1)))));
					((T438*)(C))->a35 = (T6)(GE_int32(93));
					T438f254(C, (T6)(GE_int32(0)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(19))));
				if (t1) {
					t2 = (T438f181(C, (T6)(GE_int32(1))));
					t1 = ((t2)==((T2)('\n')));
					if (t1) {
						T438f260(C, GE_ms("\045N", 2));
						((T438*)(C))->a15 = ((T6)((((T438*)(C))->a15)+((T6)(GE_int32(1)))));
					} else {
						t4 = (T438f175(C));
						T438f260(C, t4);
					}
				} else {
					((T438*)(C))->a35 = (T6)(GE_int32(-1));
					T438f241(C, GE_ms("scanner jammed", 14));
				}
			}
		}
	}
}

/* LX_WILDCARD_PARSER.report_bad_character_error */
void T438f260(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T482c7(t1, ((T438*)(C))->a15, a1);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_BAD_CHARACTER_ERROR.make */
T0* T482c7(T0* a1, T6 a2, T0* a3)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T482));
	*(T482*)C = GE_default482;
	((T482*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(3)));
	T33f12(GE_void(((T482*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T482*)(C))->a1), t1, (T6)(GE_int32(2)));
	T33f12(GE_void(((T482*)(C))->a1), a3, (T6)(GE_int32(3)));
	return C;
}

/* LX_WILDCARD_PARSER.report_bad_character_class_error */
void T438f259(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T481c7(t1, ((T438*)(C))->a15);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_BAD_CHARACTER_CLASS_ERROR.make */
T0* T481c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T481));
	*(T481*)C = GE_default481;
	((T481*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T481*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T481*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.start_condition */
T6 T438f184(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T438*)(C))->a56)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* LX_WILDCARD_PARSER.process_escaped_character */
void T438f258(T0* C)
{
	T2 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	l1 = (T438f181(C, (T6)(GE_int32(2))));
	switch (l1) {
	case (T2)(T2)('b'):
		l2 = (T6)(GE_int32(8));
		break;
	case (T2)(T2)('f'):
		l2 = (T6)(GE_int32(12));
		break;
	case (T2)(T2)('n'):
		l2 = (T6)(GE_int32(10));
		break;
	case (T2)(T2)('r'):
		l2 = (T6)(GE_int32(13));
		break;
	case (T2)(T2)('t'):
		l2 = (T6)(GE_int32(9));
		break;
	case (T2)(T2)('a'):
		l2 = (T6)(GE_int32(7));
		break;
	case (T2)(T2)('v'):
		l2 = (T6)(GE_int32(13));
		break;
	case (T2)'0':
	case (T2)'1':
	case (T2)'2':
	case (T2)'3':
	case (T2)'4':
	case (T2)'5':
	case (T2)'6':
	case (T2)'7':
		l4 = (T438f205(C));
		l2 = (T6)(GE_int32(0));
		l3 = (T6)(GE_int32(2));
		t1 = (T6f1(&l3, l4));
		while (!(t1)) {
			t2 = ((T6)((l2)*((T6)(GE_int32(8)))));
			t3 = (T438f181(C, l3));
			t4 = ((T6)(t3));
			t2 = ((T6)((t2)+(t4)));
			l2 = ((T6)((t2)-((T6)(GE_int32(48)))));
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l3, l4));
		}
		break;
	case (T2)(T2)('x'):
	case (T2)(T2)('X'):
		l4 = (T438f205(C));
		t1 = ((l4)==((T6)(GE_int32(2))));
		if (t1) {
			l2 = ((T6)(l1));
		} else {
			l2 = (T6)(GE_int32(0));
			l3 = (T6)(GE_int32(3));
			t1 = (T6f1(&l3, l4));
			while (!(t1)) {
				l2 = ((T6)((l2)*((T6)(GE_int32(16)))));
				l1 = (T438f181(C, l3));
				switch (l1) {
				case (T2)'0':
				case (T2)'1':
				case (T2)'2':
				case (T2)'3':
				case (T2)'4':
				case (T2)'5':
				case (T2)'6':
				case (T2)'7':
				case (T2)'8':
				case (T2)'9':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					l2 = ((T6)((t2)-((T6)(GE_int32(48)))));
					break;
				case (T2)'a':
				case (T2)'b':
				case (T2)'c':
				case (T2)'d':
				case (T2)'e':
				case (T2)'f':
				case (T2)'g':
				case (T2)'h':
				case (T2)'i':
				case (T2)'j':
				case (T2)'k':
				case (T2)'l':
				case (T2)'m':
				case (T2)'n':
				case (T2)'o':
				case (T2)'p':
				case (T2)'q':
				case (T2)'r':
				case (T2)'s':
				case (T2)'t':
				case (T2)'u':
				case (T2)'v':
				case (T2)'w':
				case (T2)'x':
				case (T2)'y':
				case (T2)'z':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					t2 = ((T6)((t2)-((T6)(GE_int32(97)))));
					l2 = ((T6)((t2)+((T6)(GE_int32(10)))));
					break;
				case (T2)'A':
				case (T2)'B':
				case (T2)'C':
				case (T2)'D':
				case (T2)'E':
				case (T2)'F':
				case (T2)'G':
				case (T2)'H':
				case (T2)'I':
				case (T2)'J':
				case (T2)'K':
				case (T2)'L':
				case (T2)'M':
				case (T2)'N':
				case (T2)'O':
				case (T2)'P':
				case (T2)'Q':
				case (T2)'R':
				case (T2)'S':
				case (T2)'T':
				case (T2)'U':
				case (T2)'V':
				case (T2)'W':
				case (T2)'X':
				case (T2)'Y':
				case (T2)'Z':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					t2 = ((T6)((t2)-((T6)(GE_int32(65)))));
					l2 = ((T6)((t2)+((T6)(GE_int32(10)))));
					break;
				default:
					break;
				}
				l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l3, l4));
			}
		}
		break;
	default:
		l2 = ((T6)(l1));
		break;
	}
	T438f256(C, l2);
}

/* LX_WILDCARD_PARSER.text_count */
T6 T438f205(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T438*)(C))->a18)-(((T438*)(C))->a45)));
	return R;
}

/* LX_WILDCARD_PARSER.report_missing_quote_error */
void T438f257(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T480c7(t1, ((T438*)(C))->a15);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_MISSING_QUOTE_ERROR.make */
T0* T480c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T480));
	*(T480*)C = GE_default480;
	((T480*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T480*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T480*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.process_character */
void T438f256(T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (((T439*)(GE_void(((T438*)(C))->a11)))->a9);
	t2 = ((T1)((a1)<(t1)));
	if (t2) {
		((T438*)(C))->a84 = a1;
	} else {
		t3 = (T438f175(C));
		T438f266(C, t3);
		((T438*)(C))->a84 = (T6)(GE_int32(0));
	}
}

/* LX_WILDCARD_PARSER.report_character_out_of_range_error */
void T438f266(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T438f189(C));
	l1 = T486c7(t1, ((T438*)(C))->a15, a1);
	T28f11(GE_void(((T438*)(C))->a12), l1);
	((T438*)(C))->a1 = EIF_FALSE;
}

/* LX_CHARACTER_OUT_OF_RANGE_ERROR.make */
T0* T486c7(T0* a1, T6 a2, T0* a3)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T486));
	*(T486*)C = GE_default486;
	((T486*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(3)));
	T33f12(GE_void(((T486*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T486*)(C))->a1), t1, (T6)(GE_int32(2)));
	T33f12(GE_void(((T486*)(C))->a1), a3, (T6)(GE_int32(3)));
	return C;
}

/* LX_WILDCARD_PARSER.text_item */
T2 T438f181(T0* C, T6 a1)
{
	T2 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
	if (t1) {
		t2 = ((T6)((((T438*)(C))->a45)+(a1)));
		t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
		R = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[t2]);
	} else {
		t2 = ((T6)((((T438*)(C))->a45)+(a1)));
		t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
		R = (T326f6(GE_void(((T438*)(C))->a61), t2));
	}
	return R;
}

/* LX_WILDCARD_PARSER.less */
void T438f255(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	if (EIF_FALSE) {
		l2 = ((T6)((((T438*)(C))->a45)+(a1)));
		l1 = ((T6)((((T438*)(C))->a18)-(l2)));
		((T438*)(C))->a18 = l2;
		t1 = ((T1)((l1)<(((T438*)(C))->a21)));
		if (t1) {
			((T438*)(C))->a21 = ((T6)((((T438*)(C))->a21)-(l1)));
		} else {
			l3 = ((T438*)(C))->a52;
			((T438*)(C))->a52 = (T6)(GE_int32(0));
			((T438*)(C))->a20 = ((T438*)(C))->a53;
			((T438*)(C))->a21 = ((T438*)(C))->a54;
			T438f265(C);
			((T438*)(C))->a52 = l3;
		}
	} else {
		((T438*)(C))->a18 = ((T6)((((T438*)(C))->a45)+(a1)));
	}
	((T438*)(C))->a19 = ((T6)((((T438*)(C))->a55)+(a1)));
}

/* LX_WILDCARD_PARSER.yy_set_line_column */
void T438f265(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T2 l6 = 0;
	T1 t1;
	l1 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
	l2 = ((T6)((((T438*)(C))->a45)+(((T438*)(C))->a52)));
	t1 = ((T1)((l1)<(l2)));
	if (!(t1)) {
		t1 = (l5);
	}
	while (!(t1)) {
		t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			l6 = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[l1]);
		} else {
			l6 = (T326f6(GE_void(((T438*)(C))->a61), l1));
		}
		t1 = ((l6)==((T2)('\n')));
		if (t1) {
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			l5 = EIF_TRUE;
		} else {
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(l2)));
		if (!(t1)) {
			t1 = (l5);
		}
	}
	t1 = ((T1)((l1)<(l2)));
	while (!(t1)) {
		t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			l6 = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[l1]);
		} else {
			l6 = (T326f6(GE_void(((T438*)(C))->a61), l1));
		}
		t1 = ((l6)==((T2)('\n')));
		if (t1) {
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(l2)));
	}
	if (l5) {
		((T438*)(C))->a20 = ((T6)((((T438*)(C))->a20)+(l3)));
		((T438*)(C))->a21 = ((T6)((l4)+((T6)(GE_int32(1)))));
	} else {
		((T438*)(C))->a21 = ((T6)((((T438*)(C))->a21)+(l4)));
	}
}

/* LX_WILDCARD_PARSER.text */
T0* T438f175(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((T1)((((T438*)(C))->a45)<(((T438*)(C))->a18)));
	if (t1) {
		t2 = ((T6)((((T438*)(C))->a18)-((T6)(GE_int32(1)))));
		R = (T326f3(GE_void(((T438*)(C))->a61), ((T438*)(C))->a45, t2));
	} else {
		R = T17c33((T6)(GE_int32(0)));
	}
	return R;
}

/* KL_CHARACTER_BUFFER.substring */
T0* T326f3(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((T1)((a2)<(a1)));
	if (t1) {
		R = T17c33((T6)(GE_int32(0)));
	} else {
		t1 = ((((T326*)(C))->a1)!=(EIF_VOID));
		if (t1) {
			t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
			t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
			R = (T17f10(GE_void(((T326*)(C))->a2), t2, t3));
		} else {
			R = (T17f10(GE_void(((T326*)(C))->a2), a1, a2));
		}
	}
	return R;
}

/* LX_WILDCARD_PARSER.set_start_condition */
void T438f254(T0* C, T6 a1)
{
	T6 t1;
	t1 = (T6)(GE_int32(2));
	t1 = ((T6)((t1)*(a1)));
	((T438*)(C))->a56 = ((T6)((t1)+((T6)(GE_int32(1)))));
}

/* LX_WILDCARD_PARSER.yy_execute_eof_action */
void T438f243(T0* C, T6 a1)
{
	T438f253(C);
}

/* LX_WILDCARD_PARSER.terminate */
void T438f253(T0* C)
{
	((T438*)(C))->a35 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.wrap */
T1 T438f129(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* LX_WILDCARD_PARSER.yy_refill_input_buffer */
void T438f242(T0* C)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T206f13(GE_void(((T438*)(C))->a17), ((T438*)(C))->a45);
	T206f15(GE_void(((T438*)(C))->a17));
	t1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a4);
	T438f240(C, t1);
	l1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a5);
	t2 = ((T6)((((T438*)(C))->a18)-(((T438*)(C))->a45)));
	((T438*)(C))->a18 = ((T6)((t2)+(l1)));
	((T438*)(C))->a45 = l1;
}

/* LX_WILDCARD_PARSER.yy_set_content */
void T438f240(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T438*)(C))->a61 = a1;
	((T438*)(C))->a60 = (((T326*)(GE_void(a1)))->a1);
	if (EIF_FALSE) {
		t1 = (T326f4(GE_void(a1)));
		l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		t1 = (((T63*)(GE_void(((T438*)(C))->a57)))->z1);
		t2 = ((T1)((t1)<(l1)));
		if (t2) {
			t3 = (T438f160(C));
			((T438*)(C))->a57 = (T65f1(GE_void(t3), ((T438*)(C))->a57, l1));
		}
	}
}

/* KL_CHARACTER_BUFFER.count */
T6 T326f4(T0* C)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T326*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(((T326*)(C))->a2)))->a2);
		R = ((T6)((t2)-((T6)(GE_int32(1)))));
	} else {
		R = (((T17*)(GE_void(((T326*)(C))->a2)))->a2);
	}
	return R;
}

/* YY_BUFFER.fill */
void T206f15(T0* C)
{
	((T206*)(C))->a3 = EIF_FALSE;
}

/* YY_BUFFER.set_index */
void T206f13(T0* C, T6 a1)
{
	((T206*)(C))->a5 = a1;
}

/* LX_WILDCARD_PARSER.yy_null_trans_state */
T6 T438f128(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = EIF_FALSE;
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[a1]);
		t1 = ((t2)!=((T6)(GE_int32(0))));
		if (t1) {
			((T438*)(C))->a63 = a1;
			((T438*)(C))->a64 = ((T438*)(C))->a18;
		}
	}
	R = a1;
	l1 = (T6)(GE_int32(1));
	t2 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
	t2 = ((T6)((t2)+(l1)));
	t2 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t2]);
	t1 = ((t2)==(R));
	while (!(t1)) {
		R = (((T63*)(GE_void(((T438*)(C))->a67)))->z2[R]);
		t1 = ((((T438*)(C))->a68)!=(EIF_VOID));
		if (t1) {
			t1 = (T6f5(&R, (T6)(GE_int32(54))));
		}
		if (t1) {
			l1 = (((T63*)(GE_void(((T438*)(C))->a68)))->z2[l1]);
		}
		t2 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
		t2 = ((T6)((t2)+(l1)));
		t2 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t2]);
		t1 = ((t2)==(R));
	}
	t2 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
	t2 = ((T6)((t2)+(l1)));
	R = (((T63*)(GE_void(((T438*)(C))->a69)))->z2[t2]);
	if (EIF_FALSE) {
		((T63*)(GE_void(((T438*)(C))->a57)))->z2[((T438*)(C))->a58] = (R);
		((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)+((T6)(GE_int32(1)))));
	}
	l2 = ((R)==((T6)(GE_int32(53))));
	if (l2) {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* LX_WILDCARD_PARSER.yy_previous_state */
T6 T438f127(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	t1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a1);
	if (t1) {
		R = ((T6)((((T438*)(C))->a56)+((T6)(GE_int32(1)))));
	} else {
		R = ((T438*)(C))->a56;
	}
	if (EIF_FALSE) {
		((T63*)(GE_void(((T438*)(C))->a57)))->z2[(T6)(GE_int32(0))] = (R);
		((T438*)(C))->a58 = (T6)(GE_int32(1));
	}
	l1 = ((T6)((((T438*)(C))->a45)+(((T438*)(C))->a52)));
	l2 = ((T438*)(C))->a18;
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = ((((T438*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			t2 = (((T15*)(GE_void(((T438*)(C))->a60)))->z2[l1]);
			l3 = ((T6)(t2));
		} else {
			t2 = (T326f6(GE_void(((T438*)(C))->a61), l1));
			l3 = ((T6)(t2));
		}
		t1 = ((l3)==((T6)(GE_int32(0))));
		if (t1) {
			l3 = (T6)(GE_int32(1));
		} else {
			t1 = ((((T438*)(C))->a59)!=(EIF_VOID));
			if (t1) {
				l3 = (((T63*)(GE_void(((T438*)(C))->a59)))->z2[l3]);
			}
		}
		t1 = EIF_FALSE;
		t1 = ((T1)(!(t1)));
		if (t1) {
			t3 = (((T63*)(GE_void(((T438*)(C))->a62)))->z2[R]);
			t1 = ((t3)!=((T6)(GE_int32(0))));
			if (t1) {
				((T438*)(C))->a63 = R;
				((T438*)(C))->a64 = l1;
			}
		}
		t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
		t3 = ((T6)((t3)+(l3)));
		t3 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t3]);
		t1 = ((t3)==(R));
		while (!(t1)) {
			R = (((T63*)(GE_void(((T438*)(C))->a67)))->z2[R]);
			t1 = ((((T438*)(C))->a68)!=(EIF_VOID));
			if (t1) {
				t1 = (T6f5(&R, (T6)(GE_int32(54))));
			}
			if (t1) {
				l3 = (((T63*)(GE_void(((T438*)(C))->a68)))->z2[l3]);
			}
			t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
			t3 = ((T6)((t3)+(l3)));
			t3 = (((T63*)(GE_void(((T438*)(C))->a65)))->z2[t3]);
			t1 = ((t3)==(R));
		}
		t3 = (((T63*)(GE_void(((T438*)(C))->a66)))->z2[R]);
		t3 = ((T6)((t3)+(l3)));
		R = (((T63*)(GE_void(((T438*)(C))->a69)))->z2[t3]);
		if (EIF_FALSE) {
			((T63*)(GE_void(((T438*)(C))->a57)))->z2[((T438*)(C))->a58] = (R);
			((T438*)(C))->a58 = ((T6)((((T438*)(C))->a58)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	return R;
}

/* LX_WILDCARD_PARSER.fatal_error */
void T438f241(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T438f171(C));
	t1 = (T46f1(GE_void(t1)));
	T47f10(GE_void(t1), a1);
	t1 = (T438f171(C));
	t1 = (T46f1(GE_void(t1)));
	T47f18(GE_void(t1), (T2)('\n'));
}

/* KL_STDERR_FILE.put_character */
void T47f18(T0* C, T2 a1)
{
	T47f19(C, a1);
}

/* KL_STDERR_FILE.old_put_character */
void T47f19(T0* C, T2 a1)
{
	T47f20(C, ((T47*)(C))->a1, a1);
}

/* KL_STDERR_FILE.console_pc */
void T47f20(T0* C, T14 a1, T2 a2)
{
	console_pc((FILE *)a1,( EIF_CHARACTER)a2);
}

/* LX_WILDCARD_PARSER.std */
T0* T438f171(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* KL_CHARACTER_BUFFER.item */
T2 T326f6(T0* C, T6 a1)
{
	T2 R = 0;
	T1 t1;
	t1 = ((((T326*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (((T15*)(GE_void(((T326*)(C))->a1)))->z2[a1]);
	} else {
		R = (T17f9(GE_void(((T326*)(C))->a2), a1));
	}
	return R;
}

/* LX_WILDCARD_PARSER.special_integer_ */
T0* T438f160(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_init_value_stacks */
void T438f229(T0* C)
{
	((T438*)(C))->a46 = (T6)(GE_int32(-1));
	((T438*)(C))->a47 = (T6)(GE_int32(-1));
	((T438*)(C))->a48 = (T6)(GE_int32(-1));
	((T438*)(C))->a49 = (T6)(GE_int32(-1));
	((T438*)(C))->a50 = (T6)(GE_int32(-1));
}

/* LX_WILDCARD_PARSER.yy_clear_all */
void T438f238(T0* C)
{
	T438f251(C);
}

/* LX_WILDCARD_PARSER.clear_all */
void T438f251(T0* C)
{
	T438f264(C);
}

/* LX_WILDCARD_PARSER.clear_stacks */
void T438f264(T0* C)
{
	T438f267(C);
}

/* LX_WILDCARD_PARSER.yy_clear_value_stacks */
void T438f267(T0* C)
{
	T1 t1;
	t1 = ((((T438*)(C))->a78)!=(EIF_VOID));
	if (t1) {
		T137f6(GE_void(((T438*)(C))->a78));
	}
	t1 = ((((T438*)(C))->a82)!=(EIF_VOID));
	if (t1) {
		T63f12(GE_void(((T438*)(C))->a82));
	}
	t1 = ((((T438*)(C))->a86)!=(EIF_VOID));
	if (t1) {
		T470f6(GE_void(((T438*)(C))->a86));
	}
	t1 = ((((T438*)(C))->a90)!=(EIF_VOID));
	if (t1) {
		T32f7(GE_void(((T438*)(C))->a90));
	}
	t1 = ((((T438*)(C))->a95)!=(EIF_VOID));
	if (t1) {
		T475f6(GE_void(((T438*)(C))->a95));
	}
}

/* SPECIAL [LX_NFA].clear_all */
void T475f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T475*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T475*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [STRING_8].clear_all */
void T32f7(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T32*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T32*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].clear_all */
void T470f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T470*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T470*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [INTEGER_32].clear_all */
void T63f12(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T63*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T63*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [ANY].clear_all */
void T137f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T137*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T137*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* LX_WILDCARD_PARSER.abort */
void T438f232(T0* C)
{
	((T438*)(C))->a22 = (T6)(GE_int32(102));
}

/* LX_WILDCARD_PARSER.set_input_buffer */
void T438f223(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(((T438*)(C))->a17));
	if (t1) {
		T206f13(GE_void(((T438*)(C))->a17), ((T438*)(C))->a18);
		T206f14(GE_void(((T438*)(C))->a17), ((T438*)(C))->a19, ((T438*)(C))->a20, ((T438*)(C))->a21);
		((T438*)(C))->a17 = a1;
		T438f228(C);
	}
}

/* LX_WILDCARD_PARSER.yy_load_input_buffer */
void T438f228(T0* C)
{
	T0* t1;
	t1 = (((T206*)(GE_void(((T438*)(C))->a17)))->a4);
	T438f240(C, t1);
	((T438*)(C))->a18 = (((T206*)(GE_void(((T438*)(C))->a17)))->a5);
	((T438*)(C))->a45 = ((T438*)(C))->a18;
	((T438*)(C))->a20 = (((T206*)(GE_void(((T438*)(C))->a17)))->a6);
	((T438*)(C))->a21 = (((T206*)(GE_void(((T438*)(C))->a17)))->a7);
	((T438*)(C))->a19 = (((T206*)(GE_void(((T438*)(C))->a17)))->a8);
}

/* YY_BUFFER.set_position */
void T206f14(T0* C, T6 a1, T6 a2, T6 a3)
{
	((T206*)(C))->a8 = a1;
	((T206*)(C))->a6 = a2;
	((T206*)(C))->a7 = a3;
}

/* LX_WILDCARD_PARSER.new_string_buffer */
T0* T438f120(T0* C, T0* a1)
{
	T0* R = 0;
	R = T206c12(a1);
	return R;
}

/* YY_BUFFER.make */
T0* T206c12(T0* a1)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T206));
	*(T206*)C = GE_default206;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	l2 = ((T6)((t1)+((T6)(GE_int32(2)))));
	l1 = (T206f11(C, l2));
	T326f9(GE_void(l1), a1, (T6)(GE_int32(1)));
	t1 = ((T6)((l2)-((T6)(GE_int32(1)))));
	T326f10(GE_void(l1), (T2)('\000'), t1);
	T326f10(GE_void(l1), (T2)('\000'), l2);
	T206f16(C, l1);
	return C;
}

/* YY_BUFFER.make_from_buffer */
void T206f16(T0* C, T0* a1)
{
	T6 t1;
	t1 = (T326f4(GE_void(a1)));
	((T206*)(C))->a9 = ((T6)((t1)-((T6)(GE_int32(2)))));
	((T206*)(C))->a2 = ((T206*)(C))->a9;
	((T206*)(C))->a4 = a1;
	((T206*)(C))->a5 = (T6)(GE_int32(1));
	((T206*)(C))->a6 = (T6)(GE_int32(1));
	((T206*)(C))->a7 = (T6)(GE_int32(1));
	((T206*)(C))->a8 = (T6)(GE_int32(1));
	((T206*)(C))->a1 = EIF_TRUE;
}

/* KL_CHARACTER_BUFFER.put */
void T326f10(T0* C, T2 a1, T6 a2)
{
	T1 t1;
	t1 = ((((T326*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		((T15*)(GE_void(((T326*)(C))->a1)))->z2[a2] = (a1);
	} else {
		T17f52(GE_void(((T326*)(C))->a2), a1, a2);
	}
}

/* STRING_8.put */
void T17f52(T0* C, T2 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1] = (a1);
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* KL_CHARACTER_BUFFER.fill_from_string */
void T326f9(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l1, (T6)(GE_int32(0))));
	if (t1) {
		t1 = ((((T326*)(C))->a1)!=(EIF_VOID));
		if (t1) {
			t2 = ((T6)((a2)+((T6)(GE_int32(1)))));
			T17f56(GE_void(((T326*)(C))->a2), a1, (T6)(GE_int32(1)), l1, t2);
		} else {
			T17f56(GE_void(((T326*)(C))->a2), a1, (T6)(GE_int32(1)), l1, a2);
		}
	}
}

/* STRING_8.subcopy */
void T17f56(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T6 t4;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
	l2 = ((T17*)(C))->a1;
	t1 = (T6f5(&a3, a2));
	if (t1) {
		t1 = ((l2)!=(l1));
		if (t1) {
			t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
			t3 = ((T6)((a4)-((T6)(GE_int32(1)))));
			t4 = ((T6)((a3)-(a2)));
			t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
			T15f8(GE_void(l2), l1, t2, t3, t4);
		} else {
			t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
			t3 = ((T6)((a4)-((T6)(GE_int32(1)))));
			t4 = ((T6)((a3)-(a2)));
			t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
			T15f12(GE_void(l2), t2, t3, t4);
		}
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* YY_BUFFER.new_default_buffer */
T0* T206f11(T0* C, T6 a1)
{
	T0* R = 0;
	R = T326c8(a1);
	return R;
}

/* KL_CHARACTER_BUFFER.make */
T0* T326c8(T6 a1)
{
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T326));
	*(T326*)C = GE_default326;
	t1 = (T326f7(C));
	t2 = (T51f6(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t3 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T326*)(C))->a2 = T17c33(t3);
		t3 = ((T6)((a1)+((T6)(GE_int32(1)))));
		T17f41(GE_void(((T326*)(C))->a2), t3);
		((T326*)(C))->a1 = (((T17*)(GE_void(((T326*)(C))->a2)))->a1);
	} else {
		((T326*)(C))->a2 = T17c33(a1);
		T17f41(GE_void(((T326*)(C))->a2), a1);
	}
	return C;
}

/* KL_OPERATING_SYSTEM.is_dotnet */
unsigned char ge302os3152 = '\0';
T1 ge302ov3152;
T1 T51f6(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	if (ge302os3152) {
		return ge302ov3152;
	} else {
		ge302os3152 = '\1';
		ge302ov3152 = R;
	}
	l1 = T432c2();
	R = (EIF_FALSE);
	ge302ov3152 = R;
	return R;
}

/* PLATFORM.default_create */
T0* T432c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T432));
	*(T432*)C = GE_default432;
	return C;
}

/* KL_CHARACTER_BUFFER.operating_system */
unsigned char ge224os1727 = '\0';
T0* ge224ov1727;
T0* T326f7(T0* C)
{
	T0* R = 0;
	if (ge224os1727) {
		return ge224ov1727;
	} else {
		ge224os1727 = '\1';
		ge224ov1727 = R;
	}
	R = T51c7();
	ge224ov1727 = R;
	return R;
}

/* KL_OPERATING_SYSTEM.default_create */
T0* T51c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T51));
	*(T51*)C = GE_default51;
	return C;
}

/* LX_WILDCARD_PARSER.make_from_description */
T0* T438c219(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T438));
	*(T438*)C = GE_default438;
	T438f221(C, a1, a2);
	T438f222(C);
	((T438*)(C))->a2 = T464c12((T6)(GE_int32(10)));
	((T438*)(C))->a3 = T465c10((T6)(GE_int32(40)));
	((T438*)(C))->a4 = T466c1();
	((T438*)(C))->a5 = T467c4((T6)(GE_int32(10)));
	((T438*)(C))->a6 = T467c4((T6)(GE_int32(10)));
	((T438*)(C))->a7 = T467c4((T6)(GE_int32(10)));
	((T438*)(C))->a8 = T467c4((T6)(GE_int32(10)));
	((T438*)(C))->a9 = T467c4((T6)(GE_int32(10)));
	((T438*)(C))->a10 = T467c4((T6)(GE_int32(10)));
	return C;
}

/* DS_ARRAYED_STACK [INTEGER_32].make */
T0* T467c4(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T467));
	*(T467*)C = GE_default467;
	((T467*)(C))->a1 = T65c4();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T467*)(C))->a2 = (T65f2(GE_void(((T467*)(C))->a1), t1));
	((T467*)(C))->a3 = a1;
	return C;
}

/* LX_ACTION_FACTORY.make */
T0* T466c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T466));
	*(T466*)C = GE_default466;
	return C;
}

/* LX_START_CONDITIONS.make */
void T465f10(T0* C, T6 a1)
{
	T6 t1;
	((T465*)(C))->a3 = T509c2();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T465*)(C))->a2 = (T509f1(GE_void(((T465*)(C))->a3), t1));
	((T465*)(C))->a4 = a1;
	((T465*)(C))->a5 = (T465f9(C));
}

/* LX_START_CONDITIONS.make */
T0* T465c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T465));
	*(T465*)C = GE_default465;
	((T465*)(C))->a3 = T509c2();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T465*)(C))->a2 = (T509f1(GE_void(((T465*)(C))->a3), t1));
	((T465*)(C))->a4 = a1;
	((T465*)(C))->a5 = (T465f9(C));
	return C;
}

/* LX_START_CONDITIONS.new_cursor */
T0* T465f9(T0* C)
{
	T0* R = 0;
	R = T510c4(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_START_CONDITION].make */
T0* T510c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T510));
	*(T510*)C = GE_default510;
	((T510*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_START_CONDITION].make */
T0* T509f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T555c2(a1);
	R = (((T555*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_START_CONDITION].make_area */
T0* T555c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T555));
	*(T555*)C = GE_default555;
	((T555*)(C))->a1 = T508c2(a1);
	return C;
}

/* SPECIAL [LX_START_CONDITION].make */
T0* T508c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T508)+a1*sizeof(T0*));
	*(T508*)C = GE_default508;
	((T508*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_START_CONDITION].default_create */
T0* T509c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T509));
	*(T509*)C = GE_default509;
	return C;
}

/* LX_WILDCARD_PARSER.make_parser_skeleton */
void T438f222(T0* C)
{
	T0* t1;
	t1 = (T438f160(C));
	((T438*)(C))->a16 = (T65f2(GE_void(t1), (T6)(GE_int32(200))));
	T438f226(C);
	T438f227(C);
}

/* LX_WILDCARD_PARSER.yy_build_parser_tables */
void T438f227(T0* C)
{
	((T438*)(C))->a36 = (T438f116(C));
	((T438*)(C))->a40 = (T438f117(C));
	((T438*)(C))->a43 = (T438f122(C));
	((T438*)(C))->a44 = (T438f124(C));
	((T438*)(C))->a39 = (T438f130(C));
	((T438*)(C))->a42 = (T438f133(C));
	((T438*)(C))->a34 = (T438f134(C));
	((T438*)(C))->a41 = (T438f135(C));
	((T438*)(C))->a38 = (T438f137(C));
	((T438*)(C))->a37 = (T438f138(C));
}

/* LX_WILDCARD_PARSER.yycheck_template */
unsigned char ge386os10991 = '\0';
T0* ge386ov10991;
T0* T438f138(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10991) {
		return ge386ov10991;
	} else {
		ge386os10991 = '\1';
		ge386ov10991 = R;
	}
	t1 = GE_ma193((T6)58,
(T6)(GE_int32(1)),
(T6)(GE_int32(14)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(0)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(0)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(26)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(17)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(5)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(5)),
(T6)(GE_int32(45)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(16)),
(T6)(GE_int32(15)),
(T6)(GE_int32(38)),
(T6)(GE_int32(5)),
(T6)(GE_int32(19)),
(T6)(GE_int32(20)),
(T6)(GE_int32(21)),
(T6)(GE_int32(16)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(18)),
(T6)(GE_int32(18)),
(T6)(GE_int32(5)),
(T6)(GE_int32(11)),
(T6)(GE_int32(11)),
(T6)(GE_int32(11)),
(T6)(GE_int32(-1)),
(T6)(GE_int32(22)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10991 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yyfixed_array */
T0* T438f211(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T438f160(C));
	R = (T65f3(GE_void(t1), a1));
	return R;
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].to_special */
T0* T65f3(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((T193*)(GE_void(a1)))->a1);
	return R;
}

/* LX_WILDCARD_PARSER.yytable_template */
unsigned char ge386os10990 = '\0';
T0* ge386ov10990;
T0* T438f137(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10990) {
		return ge386ov10990;
	} else {
		ge386os10990 = '\1';
		ge386ov10990 = R;
	}
	t1 = GE_ma193((T6)58,
(T6)(GE_int32(14)),
(T6)(GE_int32(27)),
(T6)(GE_int32(46)),
(T6)(GE_int32(12)),
(T6)(GE_int32(49)),
(T6)(GE_int32(11)),
(T6)(GE_int32(10)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(48)),
(T6)(GE_int32(23)),
(T6)(GE_int32(6)),
(T6)(GE_int32(27)),
(T6)(GE_int32(5)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(11)),
(T6)(GE_int32(10)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(22)),
(T6)(GE_int32(36)),
(T6)(GE_int32(6)),
(T6)(GE_int32(29)),
(T6)(GE_int32(5)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(36)),
(T6)(GE_int32(27)),
(T6)(GE_int32(38)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(28)),
(T6)(GE_int32(45)),
(T6)(GE_int32(43)),
(T6)(GE_int32(30)),
(T6)(GE_int32(31)),
(T6)(GE_int32(32)),
(T6)(GE_int32(35)),
(T6)(GE_int32(38)),
(T6)(GE_int32(40)),
(T6)(GE_int32(38)),
(T6)(GE_int32(39)),
(T6)(GE_int32(38)),
(T6)(GE_int32(37)),
(T6)(GE_int32(44)),
(T6)(GE_int32(34)),
(T6)(GE_int32(23)),
(T6)(GE_int32(21)),
(T6)(GE_int32(20)),
(T6)(GE_int32(19)),
(T6)(GE_int32(0)),
(T6)(GE_int32(33)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10990 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yypgoto_template */
unsigned char ge386os10989 = '\0';
T0* ge386ov10989;
T0* T438f135(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10989) {
		return ge386ov10989;
	} else {
		ge386os10989 = '\1';
		ge386ov10989 = R;
	}
	t1 = GE_ma193((T6)11,
(T6)(GE_int32(-32768)),
(T6)(GE_int32(20)),
(T6)(GE_int32(-1)),
(T6)(GE_int32(-13)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(34)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10989 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yypact_template */
unsigned char ge386os10988 = '\0';
T0* ge386ov10988;
T0* T438f134(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10988) {
		return ge386ov10988;
	} else {
		ge386os10988 = '\1';
		ge386ov10988 = R;
	}
	t1 = GE_ma193((T6)51,
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(43)),
(T6)(GE_int32(42)),
(T6)(GE_int32(41)),
(T6)(GE_int32(6)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(21)),
(T6)(GE_int32(15)),
(T6)(GE_int32(15)),
(T6)(GE_int32(15)),
(T6)(GE_int32(46)),
(T6)(GE_int32(32)),
(T6)(GE_int32(26)),
(T6)(GE_int32(39)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(37)),
(T6)(GE_int32(35)),
(T6)(GE_int32(25)),
(T6)(GE_int32(19)),
(T6)(GE_int32(33)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(31)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-3)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(10)),
(T6)(GE_int32(4)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10988 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yydefgoto_template */
unsigned char ge386os10987 = '\0';
T0* ge386ov10987;
T0* T438f133(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10987) {
		return ge386ov10987;
	} else {
		ge386os10987 = '\1';
		ge386ov10987 = R;
	}
	t1 = GE_ma193((T6)11,
(T6)(GE_int32(13)),
(T6)(GE_int32(25)),
(T6)(GE_int32(26)),
(T6)(GE_int32(15)),
(T6)(GE_int32(18)),
(T6)(GE_int32(24)),
(T6)(GE_int32(16)),
(T6)(GE_int32(47)),
(T6)(GE_int32(1)),
(T6)(GE_int32(17)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10987 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yydefact_template */
unsigned char ge386os10986 = '\0';
T0* ge386ov10986;
T0* T438f130(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10986) {
		return ge386ov10986;
	} else {
		ge386os10986 = '\1';
		ge386ov10986 = R;
	}
	t1 = GE_ma193((T6)51,
(T6)(GE_int32(2)),
(T6)(GE_int32(0)),
(T6)(GE_int32(27)),
(T6)(GE_int32(15)),
(T6)(GE_int32(0)),
(T6)(GE_int32(16)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(18)),
(T6)(GE_int32(10)),
(T6)(GE_int32(0)),
(T6)(GE_int32(17)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(5)),
(T6)(GE_int32(8)),
(T6)(GE_int32(19)),
(T6)(GE_int32(1)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(23)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(6)),
(T6)(GE_int32(9)),
(T6)(GE_int32(20)),
(T6)(GE_int32(28)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(24)),
(T6)(GE_int32(11)),
(T6)(GE_int32(0)),
(T6)(GE_int32(14)),
(T6)(GE_int32(13)),
(T6)(GE_int32(12)),
(T6)(GE_int32(22)),
(T6)(GE_int32(25)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(26)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10986 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytypes2_template */
unsigned char ge386os10985 = '\0';
T0* ge386ov10985;
T0* T438f124(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10985) {
		return ge386ov10985;
	} else {
		ge386os10985 = '\1';
		ge386ov10985 = R;
	}
	t1 = GE_ma193((T6)20,
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10985 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytypes1_template */
unsigned char ge386os10984 = '\0';
T0* ge386ov10984;
T0* T438f122(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10984) {
		return ge386ov10984;
	} else {
		ge386os10984 = '\1';
		ge386ov10984 = R;
	}
	t1 = GE_ma193((T6)51,
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10984 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yyr1_template */
unsigned char ge386os10983 = '\0';
T0* ge386ov10983;
T0* T438f117(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10983) {
		return ge386ov10983;
	} else {
		ge386os10983 = '\1';
		ge386ov10983 = R;
	}
	t1 = GE_ma193((T6)30,
(T6)(GE_int32(0)),
(T6)(GE_int32(26)),
(T6)(GE_int32(27)),
(T6)(GE_int32(28)),
(T6)(GE_int32(28)),
(T6)(GE_int32(19)),
(T6)(GE_int32(20)),
(T6)(GE_int32(20)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(23)),
(T6)(GE_int32(23)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10983 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytranslate_template */
unsigned char ge386os10982 = '\0';
T0* ge386ov10982;
T0* T438f116(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge386os10982) {
		return ge386ov10982;
	} else {
		ge386os10982 = '\1';
		ge386ov10982 = R;
	}
	t1 = GE_ma193((T6)263,
(T6)(GE_int32(0)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(15)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(11)),
(T6)(GE_int32(9)),
(T6)(GE_int32(14)),
(T6)(GE_int32(10)),
(T6)(GE_int32(2)),
(T6)(GE_int32(18)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(7)),
(T6)(GE_int32(2)),
(T6)(GE_int32(16)),
(T6)(GE_int32(17)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(8)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(2147483647)));
	R = (T438f211(C, t1));
	ge386ov10982 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_create_value_stacks */
void T438f226(T0* C)
{
}

/* LX_WILDCARD_PARSER.make_lex_scanner_from_description */
void T438f221(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	((T438*)(C))->a11 = a1;
	t1 = (T438f154(C));
	T438f225(C, t1);
	((T438*)(C))->a12 = a2;
	((T438*)(C))->a13 = T80c46((T6)(GE_int32(101)));
	t1 = (T438f112(C));
	T80f44(GE_void(((T438*)(C))->a13), t1);
	((T438*)(C))->a14 = T468c41((T6)(GE_int32(101)));
	t1 = (T438f112(C));
	T468f42(GE_void(((T438*)(C))->a14), t1);
	((T438*)(C))->a1 = EIF_TRUE;
	((T438*)(C))->a15 = (T6)(GE_int32(1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].set_key_equality_tester */
void T468f42(T0* C, T0* a1)
{
	((T468*)(C))->a3 = a1;
	T512f6(GE_void(((T468*)(C))->a4), a1);
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].internal_set_equality_tester */
void T512f6(T0* C, T0* a1)
{
	((T512*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_map */
T0* T468c41(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T468));
	*(T468*)C = GE_default468;
	T468f45(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_with_equality_testers */
void T468f45(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T468*)(C))->a12 = a2;
	((T468*)(C))->a3 = a3;
	T468f52(C, a1);
	((T468*)(C))->a4 = T512c5(C);
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].make */
T0* T512c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T512));
	*(T512*)C = GE_default512;
	((T512*)(C))->a1 = a1;
	((T512*)(C))->a2 = (((T468*)(GE_void(((T512*)(C))->a1)))->a3);
	((T512*)(C))->a3 = (T512f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].new_cursor */
T0* T512f4(T0* C)
{
	T0* R = 0;
	R = T556c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [LX_SYMBOL_CLASS, STRING_8].make */
T0* T556c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T556));
	*(T556*)C = GE_default556;
	((T556*)(C))->a1 = a1;
	t1 = (((T512*)(GE_void(((T556*)(C))->a1)))->a1);
	((T556*)(C))->a2 = (T468f28(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_sparse_container */
void T468f52(T0* C, T6 a1)
{
	T6 t1;
	((T468*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f57(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f58(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T468f59(C, t1);
	((T468*)(C))->a10 = (T468f25(C, a1));
	t1 = ((T6)((((T468*)(C))->a10)+((T6)(GE_int32(1)))));
	T468f60(C, t1);
	((T468*)(C))->a9 = (T6)(GE_int32(0));
	((T468*)(C))->a8 = (T6)(GE_int32(0));
	((T468*)(C))->a1 = (T6)(GE_int32(0));
	T468f46(C);
	((T468*)(C))->a17 = (T468f28(C));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_slots */
void T468f60(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T468f31(C));
	((T468*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_clashes */
void T468f59(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T468f31(C));
	((T468*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_key_storage */
void T468f58(T0* C, T6 a1)
{
	((T468*)(C))->a19 = T66c3();
	((T468*)(C))->a16 = (T66f2(GE_void(((T468*)(C))->a19), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_item_storage */
void T468f57(T0* C, T6 a1)
{
	((T468*)(C))->a18 = T471c3();
	((T468*)(C))->a2 = (T471f1(GE_void(((T468*)(C))->a18), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].set_key_equality_tester */
void T80f44(T0* C, T0* a1)
{
	((T80*)(C))->a1 = a1;
	T61f6(GE_void(((T80*)(C))->a2), a1);
}

/* LX_WILDCARD_PARSER.string_equality_tester */
unsigned char ge175os3089 = '\0';
T0* ge175ov3089;
T0* T438f112(T0* C)
{
	T0* R = 0;
	if (ge175os3089) {
		return ge175ov3089;
	} else {
		ge175os3089 = '\1';
		ge175ov3089 = R;
	}
	R = T426c2();
	ge175ov3089 = R;
	return R;
}

/* KL_STRING_EQUALITY_TESTER.default_create */
T0* T426c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T426));
	*(T426*)C = GE_default426;
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_map */
void T80f46(T0* C, T6 a1)
{
	T80f47(C, a1, EIF_VOID, EIF_VOID);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_map */
T0* T80c46(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T80));
	*(T80*)C = GE_default80;
	T80f47(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_with_equality_testers */
void T80f47(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T80*)(C))->a3 = a2;
	((T80*)(C))->a1 = a3;
	T80f48(C, a1);
	((T80*)(C))->a2 = T61c5(C);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_sparse_container */
void T80f48(T0* C, T6 a1)
{
	T6 t1;
	((T80*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f49(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f50(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f51(C, t1);
	((T80*)(C))->a5 = (T80f21(C, a1));
	t1 = ((T6)((((T80*)(C))->a5)+((T6)(GE_int32(1)))));
	T80f52(C, t1);
	((T80*)(C))->a6 = (T6)(GE_int32(0));
	((T80*)(C))->a7 = (T6)(GE_int32(0));
	((T80*)(C))->a8 = (T6)(GE_int32(0));
	T80f53(C);
	((T80*)(C))->a9 = (T80f40(C));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].unset_found_item */
void T80f53(T0* C)
{
	((T80*)(C))->a16 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_slots */
void T80f52(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T80f41(C));
	((T80*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].special_integer_ */
T0* T80f41(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].new_modulus */
T6 T80f21(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_clashes */
void T80f51(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T80f41(C));
	((T80*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_key_storage */
void T80f50(T0* C, T6 a1)
{
	((T80*)(C))->a12 = T66c3();
	((T80*)(C))->a13 = (T66f2(GE_void(((T80*)(C))->a12), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_item_storage */
void T80f49(T0* C, T6 a1)
{
	((T80*)(C))->a10 = T66c3();
	((T80*)(C))->a11 = (T66f2(GE_void(((T80*)(C))->a10), a1));
}

/* LX_WILDCARD_PARSER.make_with_buffer */
void T438f225(T0* C, T0* a1)
{
	((T438*)(C))->a17 = a1;
	T438f239(C);
	T438f228(C);
}

/* LX_WILDCARD_PARSER.yy_initialize */
void T438f239(T0* C)
{
	T0* t1;
	T0* t2;
	T6 t3;
	T438f252(C);
	((T438*)(C))->a56 = (T6)(GE_int32(1));
	((T438*)(C))->a20 = (T6)(GE_int32(1));
	((T438*)(C))->a21 = (T6)(GE_int32(1));
	((T438*)(C))->a19 = (T6)(GE_int32(1));
	((T438*)(C))->a53 = (T6)(GE_int32(1));
	((T438*)(C))->a54 = (T6)(GE_int32(1));
	((T438*)(C))->a55 = (T6)(GE_int32(1));
	if (EIF_FALSE) {
		t1 = (T438f160(C));
		t2 = (((T206*)(GE_void(((T438*)(C))->a17)))->a4);
		t3 = (T326f4(GE_void(t2)));
		t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
		((T438*)(C))->a57 = (T65f2(GE_void(t1), t3));
	}
}

/* LX_WILDCARD_PARSER.yy_build_tables */
void T438f252(T0* C)
{
	((T438*)(C))->a69 = (T438f191(C));
	((T438*)(C))->a65 = (T438f192(C));
	((T438*)(C))->a66 = (T438f193(C));
	((T438*)(C))->a67 = (T438f194(C));
	((T438*)(C))->a59 = (T438f195(C));
	((T438*)(C))->a68 = (T438f196(C));
	((T438*)(C))->a62 = (T438f197(C));
}

/* LX_WILDCARD_PARSER.yy_accept_template */
unsigned char ge387os11159 = '\0';
T0* ge387ov11159;
T0* T438f197(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11159) {
		return ge387ov11159;
	} else {
		ge387os11159 = '\1';
		ge387ov11159 = R;
	}
	t1 = GE_ma193((T6)55,
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(6)),
(T6)(GE_int32(19)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(13)),
(T6)(GE_int32(13)),
(T6)(GE_int32(16)),
(T6)(GE_int32(18)),
(T6)(GE_int32(16)),
(T6)(GE_int32(16)),
(T6)(GE_int32(17)),
(T6)(GE_int32(3)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(11)),
(T6)(GE_int32(12)),
(T6)(GE_int32(15)),
(T6)(GE_int32(4)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11159 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_fixed_array */
T0* T438f218(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T438f160(C));
	R = (T65f3(GE_void(t1), a1));
	return R;
}

/* LX_WILDCARD_PARSER.yy_meta_template */
unsigned char ge387os11158 = '\0';
T0* ge387ov11158;
T0* T438f196(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11158) {
		return ge387ov11158;
	} else {
		ge387os11158 = '\1';
		ge387ov11158 = R;
	}
	t1 = GE_ma193((T6)17,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11158 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_ec_template */
unsigned char ge387os11157 = '\0';
T0* ge387ov11157;
T0* T438f195(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11157) {
		return ge387ov11157;
	} else {
		ge387os11157 = '\1';
		ge387ov11157 = R;
	}
	t1 = GE_ma193((T6)258,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(7)),
(T6)(GE_int32(1)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(11)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(11)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11157 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_def_template */
unsigned char ge387os11156 = '\0';
T0* ge387ov11156;
T0* T438f194(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11156) {
		return ge387ov11156;
	} else {
		ge387os11156 = '\1';
		ge387ov11156 = R;
	}
	t1 = GE_ma193((T6)62,
(T6)(GE_int32(0)),
(T6)(GE_int32(53)),
(T6)(GE_int32(1)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(58)),
(T6)(GE_int32(59)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(60)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(57)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(43)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(0)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11156 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_base_template */
unsigned char ge387os11155 = '\0';
T0* ge387ov11155;
T0* T438f193(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11155) {
		return ge387ov11155;
	} else {
		ge387os11155 = '\1';
		ge387ov11155 = R;
	}
	t1 = GE_ma193((T6)62,
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(14)),
(T6)(GE_int32(26)),
(T6)(GE_int32(38)),
(T6)(GE_int32(52)),
(T6)(GE_int32(66)),
(T6)(GE_int32(79)),
(T6)(GE_int32(70)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(14)),
(T6)(GE_int32(56)),
(T6)(GE_int32(10)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(13)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(14)),
(T6)(GE_int32(19)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(58)),
(T6)(GE_int32(21)),
(T6)(GE_int32(27)),
(T6)(GE_int32(112)),
(T6)(GE_int32(55)),
(T6)(GE_int32(32)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(34)),
(T6)(GE_int32(112)),
(T6)(GE_int32(85)),
(T6)(GE_int32(37)),
(T6)(GE_int32(54)),
(T6)(GE_int32(39)),
(T6)(GE_int32(53)),
(T6)(GE_int32(46)),
(T6)(GE_int32(49)),
(T6)(GE_int32(35)),
(T6)(GE_int32(28)),
(T6)(GE_int32(22)),
(T6)(GE_int32(112)),
(T6)(GE_int32(99)),
(T6)(GE_int32(102)),
(T6)(GE_int32(105)),
(T6)(GE_int32(49)),
(T6)(GE_int32(56)),
(T6)(GE_int32(108)),
(T6)(GE_int32(59)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11155 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_chk_template */
unsigned char ge387os11154 = '\0';
T0* ge387ov11154;
T0* T438f192(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11154) {
		return ge387ov11154;
	} else {
		ge387os11154 = '\1';
		ge387ov11154 = R;
	}
	t1 = GE_ma193((T6)129,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(3)),
(T6)(GE_int32(14)),
(T6)(GE_int32(16)),
(T6)(GE_int32(14)),
(T6)(GE_int32(16)),
(T6)(GE_int32(20)),
(T6)(GE_int32(23)),
(T6)(GE_int32(20)),
(T6)(GE_int32(23)),
(T6)(GE_int32(24)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(4)),
(T6)(GE_int32(28)),
(T6)(GE_int32(52)),
(T6)(GE_int32(28)),
(T6)(GE_int32(24)),
(T6)(GE_int32(32)),
(T6)(GE_int32(32)),
(T6)(GE_int32(33)),
(T6)(GE_int32(51)),
(T6)(GE_int32(33)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(36)),
(T6)(GE_int32(36)),
(T6)(GE_int32(41)),
(T6)(GE_int32(50)),
(T6)(GE_int32(41)),
(T6)(GE_int32(44)),
(T6)(GE_int32(44)),
(T6)(GE_int32(46)),
(T6)(GE_int32(46)),
(T6)(GE_int32(57)),
(T6)(GE_int32(5)),
(T6)(GE_int32(57)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(48)),
(T6)(GE_int32(48)),
(T6)(GE_int32(58)),
(T6)(GE_int32(49)),
(T6)(GE_int32(58)),
(T6)(GE_int32(60)),
(T6)(GE_int32(60)),
(T6)(GE_int32(47)),
(T6)(GE_int32(45)),
(T6)(GE_int32(35)),
(T6)(GE_int32(6)),
(T6)(GE_int32(31)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(15)),
(T6)(GE_int32(9)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(7)),
(T6)(GE_int32(8)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(8)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(8)),
(T6)(GE_int32(8)),
(T6)(GE_int32(43)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(59)),
(T6)(GE_int32(59)),
(T6)(GE_int32(59)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11154 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_nxt_template */
unsigned char ge387os11153 = '\0';
T0* ge387ov11153;
T0* T438f191(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge387os11153) {
		return ge387ov11153;
	} else {
		ge387os11153 = '\1';
		ge387ov11153 = R;
	}
	t1 = GE_ma193((T6)129,
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(11)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(15)),
(T6)(GE_int32(16)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(18)),
(T6)(GE_int32(19)),
(T6)(GE_int32(30)),
(T6)(GE_int32(35)),
(T6)(GE_int32(31)),
(T6)(GE_int32(36)),
(T6)(GE_int32(35)),
(T6)(GE_int32(35)),
(T6)(GE_int32(36)),
(T6)(GE_int32(36)),
(T6)(GE_int32(38)),
(T6)(GE_int32(20)),
(T6)(GE_int32(18)),
(T6)(GE_int32(19)),
(T6)(GE_int32(35)),
(T6)(GE_int32(32)),
(T6)(GE_int32(36)),
(T6)(GE_int32(38)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(43)),
(T6)(GE_int32(32)),
(T6)(GE_int32(44)),
(T6)(GE_int32(20)),
(T6)(GE_int32(22)),
(T6)(GE_int32(46)),
(T6)(GE_int32(46)),
(T6)(GE_int32(47)),
(T6)(GE_int32(32)),
(T6)(GE_int32(48)),
(T6)(GE_int32(50)),
(T6)(GE_int32(50)),
(T6)(GE_int32(34)),
(T6)(GE_int32(34)),
(T6)(GE_int32(32)),
(T6)(GE_int32(23)),
(T6)(GE_int32(32)),
(T6)(GE_int32(24)),
(T6)(GE_int32(22)),
(T6)(GE_int32(52)),
(T6)(GE_int32(52)),
(T6)(GE_int32(34)),
(T6)(GE_int32(32)),
(T6)(GE_int32(34)),
(T6)(GE_int32(39)),
(T6)(GE_int32(39)),
(T6)(GE_int32(51)),
(T6)(GE_int32(34)),
(T6)(GE_int32(45)),
(T6)(GE_int32(23)),
(T6)(GE_int32(40)),
(T6)(GE_int32(24)),
(T6)(GE_int32(26)),
(T6)(GE_int32(33)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(27)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(28)),
(T6)(GE_int32(29)),
(T6)(GE_int32(26)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(27)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(28)),
(T6)(GE_int32(29)),
(T6)(GE_int32(49)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(17)),
(T6)(GE_int32(17)),
(T6)(GE_int32(17)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(37)),
(T6)(GE_int32(37)),
(T6)(GE_int32(37)),
(T6)(GE_int32(9)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T438f218(C, t1));
	ge387ov11153 = R;
	return R;
}

/* LX_WILDCARD_PARSER.empty_buffer */
unsigned char ge403os6928 = '\0';
T0* ge403ov6928;
T0* T438f154(T0* C)
{
	T0* R = 0;
	if (ge403os6928) {
		return ge403ov6928;
	} else {
		ge403os6928 = '\1';
		ge403ov6928 = R;
	}
	R = T206c12(GE_ms("", 0));
	ge403ov6928 = R;
	return R;
}

/* LX_DESCRIPTION.set_case_insensitive */
void T439f32(T0* C, T1 a1)
{
	((T439*)(C))->a14 = a1;
}

/* LX_DESCRIPTION.set_full_table */
void T439f31(T0* C, T1 a1)
{
	((T439*)(C))->a3 = a1;
}

/* LX_DESCRIPTION.set_meta_equiv_classes_used */
void T439f30(T0* C, T1 a1)
{
	((T439*)(C))->a4 = a1;
}

/* LX_DESCRIPTION.set_equiv_classes_used */
void T439f29(T0* C, T1 a1)
{
	((T439*)(C))->a2 = a1;
}

/* LX_DESCRIPTION.make */
T0* T439c28(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T439));
	*(T439*)C = GE_default439;
	((T439*)(C))->a2 = EIF_TRUE;
	((T439*)(C))->a4 = EIF_TRUE;
	((T439*)(C))->a9 = (T6)(GE_int32(256));
	((T439*)(C))->a10 = (T6)(GE_int32(1000));
	((T439*)(C))->a11 = EIF_TRUE;
	((T439*)(C))->a7 = T464c12((T6)(GE_int32(250)));
	((T439*)(C))->a12 = T464c12((T6)(GE_int32(40)));
	((T439*)(C))->a13 = T71c23((T6)(GE_int32(1)));
	((T439*)(C))->a8 = T465c12((T6)(GE_int32(40)));
	return C;
}

/* LX_START_CONDITIONS.make_with_initial */
T0* T465c12(T6 a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T465));
	*(T465*)C = GE_default465;
	T465f10(C, a1);
	l1 = T493c6(GE_ms("INITIAL", 7), (T6)(GE_int32(0)), EIF_FALSE);
	T465f14(C, l1);
	return C;
}

/* LX_START_CONDITIONS.put_first */
void T465f14(T0* C, T0* a1)
{
	T465f15(C, a1, (T6)(GE_int32(1)));
}

/* LX_START_CONDITIONS.put */
void T465f15(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T465*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T465f16(C, a1);
	} else {
		T465f17(C, a2, (T6)(GE_int32(1)));
		T465f18(C, a2, (T6)(GE_int32(1)));
		((T508*)(GE_void(((T465*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* LX_START_CONDITIONS.move_cursors_right */
void T465f18(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T465*)(C))->a5;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T510*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T510f5(GE_void(l1), t2);
		}
		l1 = (((T510*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_START_CONDITION].set_position */
void T510f5(T0* C, T6 a1)
{
	((T510*)(C))->a1 = a1;
}

/* LX_START_CONDITIONS.move_right */
void T465f17(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T465*)(C))->a1;
	((T465*)(C))->a1 = ((T6)((((T465*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T508*)(GE_void(((T465*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T508*)(GE_void(((T465*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* LX_START_CONDITIONS.put_last */
void T465f16(T0* C, T0* a1)
{
	((T465*)(C))->a1 = ((T6)((((T465*)(C))->a1)+((T6)(GE_int32(1)))));
	((T508*)(GE_void(((T465*)(C))->a2)))->z2[((T465*)(C))->a1] = (a1);
}

/* LX_START_CONDITION.make */
T0* T493c6(T0* a1, T6 a2, T1 a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T493));
	*(T493*)C = GE_default493;
	((T493*)(C))->a1 = a1;
	((T493*)(C))->a2 = a2;
	((T493*)(C))->a3 = a3;
	((T493*)(C))->a4 = T495c10((T6)(GE_int32(50)));
	((T493*)(C))->a5 = T495c10((T6)(GE_int32(50)));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA].make */
T0* T495c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T495));
	*(T495*)C = GE_default495;
	((T495*)(C))->a1 = T476c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T495*)(C))->a2 = (T476f1(GE_void(((T495*)(C))->a1), t1));
	((T495*)(C))->a3 = a1;
	((T495*)(C))->a4 = (T495f6(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA].new_cursor */
T0* T495f6(T0* C)
{
	T0* R = 0;
	R = T541c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA].make */
T0* T541c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T541));
	*(T541*)C = GE_default541;
	((T541*)(C))->a1 = a1;
	return C;
}

/* UT_ERROR_HANDLER.make_null */
T0* T28c10(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T28));
	*(T28*)C = GE_default28;
	((T28*)(C))->a1 = (T28f6(C));
	((T28*)(C))->a2 = (T28f6(C));
	((T28*)(C))->a3 = (T28f6(C));
	return C;
}

/* UT_ERROR_HANDLER.null_output_stream */
unsigned char ge205os2522 = '\0';
T0* ge205ov2522;
T0* T28f6(T0* C)
{
	T0* R = 0;
	if (ge205os2522) {
		return ge205ov2522;
	} else {
		ge205os2522 = '\1';
		ge205ov2522 = R;
	}
	R = T452c3(GE_ms("null", 4));
	ge205ov2522 = R;
	return R;
}

/* KL_NULL_TEXT_OUTPUT_STREAM.make */
T0* T452c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T452));
	*(T452*)C = GE_default452;
	((T452*)(C))->a1 = a1;
	return C;
}

/* LX_DFA_WILDCARD.wipe_out */
void T415f15(T0* C)
{
	((T415*)(C))->a5 = (T6)(GE_int32(0));
	((T415*)(C))->a3 = (T6)(GE_int32(1));
	((T415*)(C))->a4 = (T6)(GE_int32(0));
	((T415*)(C))->a2 = ge491ov9740;
}

/* GEANT_FILESET_ELEMENT.exclude_attribute_name */
unsigned char ge132os9507 = '\0';
T0* ge132ov9507;
T0* T361f11(T0* C)
{
	T0* R = 0;
	if (ge132os9507) {
		return ge132ov9507;
	} else {
		ge132os9507 = '\1';
		ge132ov9507 = R;
	}
	R = GE_ms("exclude", 7);
	ge132ov9507 = R;
	return R;
}

/* GEANT_FILESET.set_include_wc_string */
void T362f40(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T362*)(C))->a15 = a1;
	((T362*)(C))->a3 = T415c14(((T362*)(C))->a15, EIF_TRUE);
	t1 = (T415f11(GE_void(((T362*)(C))->a3)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [fileset] error: invalid include wildcard: \'", 46),
((T362*)(C))->a15,
GE_ms("\'", 1));
		T22f41(GE_void(((T362*)(C))->a2), t2);
	}
}

/* GEANT_FILESET_ELEMENT.include_attribute_name */
unsigned char ge132os9506 = '\0';
T0* ge132ov9506;
T0* T361f10(T0* C)
{
	T0* R = 0;
	if (ge132os9506) {
		return ge132ov9506;
	} else {
		ge132os9506 = '\1';
		ge132ov9506 = R;
	}
	R = GE_ms("include", 7);
	ge132ov9506 = R;
	return R;
}

/* GEANT_FILESET.set_directory_name */
void T362f39(T0* C, T0* a1)
{
	((T362*)(C))->a1 = a1;
}

/* GEANT_FILESET.set_dir_name */
void T362f38(T0* C, T0* a1)
{
	((T362*)(C))->a9 = a1;
}

/* GEANT_FILESET_ELEMENT.attribute_value */
T0* T361f9(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T361*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T361f24(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T361f24(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T361f25(C));
		t4 = (((T22*)(GE_void(((T361*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T361f25(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_FILESET_ELEMENT.project_variables_resolver */
T0* T361f25(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.target_arguments_stack */
T0* T361f24(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.dir_attribute_name */
unsigned char ge136os2382 = '\0';
T0* ge136ov2382;
T0* T361f8(T0* C)
{
	T0* R = 0;
	if (ge136os2382) {
		return ge136ov2382;
	} else {
		ge136os2382 = '\1';
		ge136ov2382 = R;
	}
	R = GE_ms("dir", 3);
	ge136ov2382 = R;
	return R;
}

/* GEANT_FILESET.make */
T0* T362c33(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T362));
	*(T362*)C = GE_default362;
	((T362*)(C))->a2 = a1;
	((T362*)(C))->a6 = T410c39((T6)(GE_int32(20)));
	((T362*)(C))->a11 = T412c35((T6)(GE_int32(20)));
	l1 = T59c3();
	T412f36(GE_void(((T362*)(C))->a11), l1);
	((T362*)(C))->a12 = T412c35((T6)(GE_int32(20)));
	T412f36(GE_void(((T362*)(C))->a12), l1);
	T362f44(C, GE_ms("fs.filename", 11));
	T362f45(C, GE_ms("fs.mapped_filename", 18));
	((T362*)(C))->a13 = EIF_TRUE;
	return C;
}

/* DS_HASH_SET [STRING_8].set_equality_tester */
void T412f36(T0* C, T0* a1)
{
	((T412*)(C))->a7 = a1;
}

/* DS_HASH_SET [STRING_8].make */
T0* T412c35(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T412));
	*(T412*)C = GE_default412;
	((T412*)(C))->a1 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f38(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f39(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T412f40(C, t1);
	((T412*)(C))->a2 = (T412f22(C, a1));
	t1 = ((T6)((((T412*)(C))->a2)+((T6)(GE_int32(1)))));
	T412f41(C, t1);
	((T412*)(C))->a3 = (T6)(GE_int32(0));
	((T412*)(C))->a4 = (T6)(GE_int32(0));
	((T412*)(C))->a5 = (T6)(GE_int32(0));
	T412f42(C);
	((T412*)(C))->a6 = (T412f20(C));
	return C;
}

/* DS_HASH_SET [STRING_8].new_cursor */
T0* T412f20(T0* C)
{
	T0* R = 0;
	R = T414c6(C);
	return R;
}

/* DS_HASH_SET_CURSOR [STRING_8].make */
T0* T414c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T414));
	*(T414*)C = GE_default414;
	((T414*)(C))->a1 = a1;
	((T414*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [STRING_8].make_slots */
void T412f41(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T412f19(C));
	((T412*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [STRING_8].make_clashes */
void T412f40(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T412f19(C));
	((T412*)(C))->a12 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [STRING_8].make_key_storage */
void T412f39(T0* C, T6 a1)
{
}

/* DS_HASH_SET [STRING_8].make_item_storage */
void T412f38(T0* C, T6 a1)
{
	((T412*)(C))->a10 = T66c3();
	((T412*)(C))->a11 = (T66f2(GE_void(((T412*)(C))->a10), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_equal */
T0* T410c39(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T410));
	*(T410*)C = GE_default410;
	T410f44(C, a1);
	((T410*)(C))->a3 = T436c3();
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_FILESET_ENTRY].default_create */
T0* T436c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T436));
	*(T436*)C = GE_default436;
	return C;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make */
void T410f44(T0* C, T6 a1)
{
	T6 t1;
	((T410*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T410f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T410f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T410f56(C, t1);
	((T410*)(C))->a9 = (T410f22(C, a1));
	t1 = ((T6)((((T410*)(C))->a9)+((T6)(GE_int32(1)))));
	T410f57(C, t1);
	((T410*)(C))->a5 = (T6)(GE_int32(0));
	((T410*)(C))->a10 = (T6)(GE_int32(0));
	((T410*)(C))->a4 = (T6)(GE_int32(0));
	T410f47(C);
	((T410*)(C))->a1 = (T410f24(C));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].new_cursor */
T0* T410f24(T0* C)
{
	T0* R = 0;
	R = T434c4(C);
	return R;
}

/* DS_HASH_SET_CURSOR [GEANT_FILESET_ENTRY].make */
T0* T434c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T434));
	*(T434*)C = GE_default434;
	((T434*)(C))->a3 = a1;
	((T434*)(C))->a1 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].unset_found_item */
void T410f47(T0* C)
{
	((T410*)(C))->a11 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_slots */
void T410f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T410f37(C));
	((T410*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].special_integer_ */
T0* T410f37(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].new_modulus */
T6 T410f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_clashes */
void T410f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T410f37(C));
	((T410*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_key_storage */
void T410f55(T0* C, T6 a1)
{
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_item_storage */
void T410f54(T0* C, T6 a1)
{
	((T410*)(C))->a15 = T437c3();
	((T410*)(C))->a2 = (T437f1(GE_void(((T410*)(C))->a15), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_FILESET_ENTRY].make */
T0* T437f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T463c2(a1);
	R = (((T463*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_FILESET_ENTRY].make_area */
T0* T463c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T463));
	*(T463*)C = GE_default463;
	((T463*)(C))->a1 = T435c4(a1);
	return C;
}

/* SPECIAL [GEANT_FILESET_ENTRY].make */
T0* T435c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T435)+a1*sizeof(T0*));
	*(T435*)C = GE_default435;
	((T435*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_FILESET_ENTRY].default_create */
T0* T437c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T437));
	*(T437*)C = GE_default437;
	return C;
}

/* GEANT_FILESET_ELEMENT.exit_application */
void T361f30(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T361f22(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T361f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T361f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T361f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T361f23(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_FILESET_ELEMENT.exceptions */
T0* T361f23(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.mapped_filename_directory_attribute_name */
unsigned char ge132os9514 = '\0';
T0* ge132ov9514;
T0* T361f6(T0* C)
{
	T0* R = 0;
	if (ge132os9514) {
		return ge132ov9514;
	} else {
		ge132os9514 = '\1';
		ge132ov9514 = R;
	}
	R = GE_ms("mapped_filename_directory", 25);
	ge132ov9514 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.filename_directory_attribute_name */
unsigned char ge132os9512 = '\0';
T0* ge132ov9512;
T0* T361f5(T0* C)
{
	T0* R = 0;
	if (ge132os9512) {
		return ge132ov9512;
	} else {
		ge132os9512 = '\1';
		ge132ov9512 = R;
	}
	R = GE_ms("filename_directory", 18);
	ge132ov9512 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.directory_attribute_name */
unsigned char ge132os9505 = '\0';
T0* ge132ov9505;
T0* T361f4(T0* C)
{
	T0* R = 0;
	if (ge132os9505) {
		return ge132ov9505;
	} else {
		ge132os9505 = '\1';
		ge132ov9505 = R;
	}
	R = GE_ms("directory", 9);
	ge132ov9505 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.has_attribute */
T1 T361f20(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T361*)(C))->a3), a1));
	return R;
}

/* GEANT_FILESET_ELEMENT.concat_attribute_name */
unsigned char ge132os9509 = '\0';
T0* ge132ov9509;
T0* T361f7(T0* C)
{
	T0* R = 0;
	if (ge132os9509) {
		return ge132ov9509;
	} else {
		ge132os9509 = '\1';
		ge132ov9509 = R;
	}
	R = GE_ms("concat", 6);
	ge132ov9509 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.make */
void T361f29p1(T0* C, T0* a1, T0* a2)
{
	T361f31(C, a2);
	T361f32(C, a1);
}

/* GEANT_FILESET_ELEMENT.set_project */
void T361f32(T0* C, T0* a1)
{
	((T361*)(C))->a2 = a1;
}

/* GEANT_FILESET_ELEMENT.element_make */
void T361f31(T0* C, T0* a1)
{
	T361f33(C, a1);
}

/* GEANT_FILESET_ELEMENT.set_xml_element */
void T361f33(T0* C, T0* a1)
{
	((T361*)(C))->a3 = a1;
}

/* XM_ELEMENT.element_by_name */
T0* T97f16(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T320c11();
	l1 = (T97f19(C));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		T192x5876T0(GE_void(t2), l2);
		t1 = (T320f8(GE_void(l2)));
		if (t1) {
			t2 = (((T320*)(GE_void(l2)))->a1);
			t1 = (T97f8(C, t2, a1));
		}
		if (t1) {
			R = (((T320*)(GE_void(l2)))->a1);
			T191f12(GE_void(l1));
		} else {
			T191f11(GE_void(l1));
		}
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].go_after */
void T191f12(T0* C)
{
	if (((T0*)(GE_void(((T191*)(C))->a3)))->id==97) {
		T97f39(((T191*)(C))->a3, C);
	} else {
		T96f25(((T191*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_go_after */
void T96f25(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T96f12(C, a1));
	T191f15(a1);
	t1 = ((T1)(!(l1)));
	if (t1) {
		T96f29(C, a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set_after */
void T191f15(T0* C)
{
	((T191*)(C))->a2 = EIF_VOID;
	((T191*)(C))->a4 = EIF_FALSE;
	((T191*)(C))->a1 = EIF_TRUE;
}

/* XM_DOCUMENT.cursor_off */
T1 T96f12(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T191*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* XM_ELEMENT.cursor_go_after */
void T97f39(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T97f23(C, a1));
	T191f15(a1);
	t1 = ((T1)(!(l1)));
	if (t1) {
		T97f42(C, a1);
	}
}

/* XM_ELEMENT.cursor_off */
T1 T97f23(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T191*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* XM_ELEMENT.named_same_name */
T1 T97f8(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	t1 = (((T97*)(GE_void(a1)))->a3);
	t2 = (T97f10(C, t1, a2));
	if (t2) {
		R = (T97f11(C, a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_ELEMENT.same_namespace */
T1 T97f11(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	t1 = (T97f13(C));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T97f13(GE_void(a1)));
		t1 = ((T1)(!(t2)));
	}
	if (!(t1)) {
		t1 = (T97f13(C));
		if (t1) {
			t1 = (T97f13(GE_void(a1)));
		}
		if (t1) {
			t3 = (((T97*)(GE_void(a1)))->a2);
			R = (T316f4(GE_void(((T97*)(C))->a2), t3));
		} else {
			R = EIF_FALSE;
		}
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* XM_ELEMENT.has_namespace */
T1 T97f13(T0* C)
{
	T1 R = 0;
	R = ((((T97*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* XM_ELEMENT.same_string */
T1 T97f10(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T97f12(C));
	R = (T59f1(GE_void(t1), a1, a2));
	return R;
}

/* XM_ELEMENT.string_equality_tester */
unsigned char ge237os2091 = '\0';
T0* ge237ov2091;
T0* T97f12(T0* C)
{
	T0* R = 0;
	if (ge237os2091) {
		return ge237ov2091;
	} else {
		ge237os2091 = '\1';
		ge237ov2091 = R;
	}
	R = T59c3();
	ge237ov2091 = R;
	return R;
}

/* XM_NODE_TYPER.is_element */
T1 T320f8(T0* C)
{
	T1 R = 0;
	R = ((((T320*)(C))->a1)!=(EIF_VOID));
	return R;
}

/* XM_NODE_TYPER.default_create */
T0* T320c11(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T320));
	*(T320*)C = GE_default320;
	return C;
}

/* GEANT_REPLACE_TASK.fileset_element_name */
unsigned char ge117os9192 = '\0';
T0* ge117ov9192;
T0* T306f21(T0* C)
{
	T0* R = 0;
	if (ge117os9192) {
		return ge117ov9192;
	} else {
		ge117os9192 = '\1';
		ge117ov9192 = R;
	}
	R = GE_ms("fileset", 7);
	ge117ov9192 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_flags */
void T390f36(T0* C, T0* a1)
{
	((T390*)(C))->a11 = a1;
}

/* GEANT_REPLACE_TASK.flags_attribute_name */
unsigned char ge117os9191 = '\0';
T0* ge117ov9191;
T0* T306f20(T0* C)
{
	T0* R = 0;
	if (ge117os9191) {
		return ge117ov9191;
	} else {
		ge117os9191 = '\1';
		ge117ov9191 = R;
	}
	R = GE_ms("flags", 5);
	ge117ov9191 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_replace */
void T390f35(T0* C, T0* a1)
{
	((T390*)(C))->a10 = a1;
}

/* GEANT_REPLACE_TASK.replace_attribute_name */
unsigned char ge117os9190 = '\0';
T0* ge117ov9190;
T0* T306f19(T0* C)
{
	T0* R = 0;
	if (ge117os9190) {
		return ge117ov9190;
	} else {
		ge117os9190 = '\1';
		ge117ov9190 = R;
	}
	R = GE_ms("replace", 7);
	ge117ov9190 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_variable_pattern */
void T390f34(T0* C, T0* a1)
{
	((T390*)(C))->a8 = a1;
}

/* GEANT_REPLACE_TASK.variable_pattern_attribute_name */
unsigned char ge117os9189 = '\0';
T0* ge117ov9189;
T0* T306f18(T0* C)
{
	T0* R = 0;
	if (ge117os9189) {
		return ge117ov9189;
	} else {
		ge117os9189 = '\1';
		ge117ov9189 = R;
	}
	R = GE_ms("variable_pattern", 16);
	ge117ov9189 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_token */
void T390f33(T0* C, T0* a1)
{
	((T390*)(C))->a7 = a1;
}

/* GEANT_REPLACE_TASK.token_attribute_name */
unsigned char ge117os9188 = '\0';
T0* ge117ov9188;
T0* T306f17(T0* C)
{
	T0* R = 0;
	if (ge117os9188) {
		return ge117ov9188;
	} else {
		ge117os9188 = '\1';
		ge117ov9188 = R;
	}
	R = GE_ms("token", 5);
	ge117ov9188 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_match */
void T390f32(T0* C, T0* a1)
{
	((T390*)(C))->a6 = a1;
}

/* GEANT_REPLACE_TASK.match_attribute_name */
unsigned char ge117os9187 = '\0';
T0* ge117ov9187;
T0* T306f16(T0* C)
{
	T0* R = 0;
	if (ge117os9187) {
		return ge117ov9187;
	} else {
		ge117os9187 = '\1';
		ge117ov9187 = R;
	}
	R = GE_ms("match", 5);
	ge117ov9187 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_to_directory */
void T390f31(T0* C, T0* a1)
{
	((T390*)(C))->a9 = a1;
}

/* GEANT_REPLACE_TASK.to_directory_attribute_name */
unsigned char ge117os9186 = '\0';
T0* ge117ov9186;
T0* T306f15(T0* C)
{
	T0* R = 0;
	if (ge117os9186) {
		return ge117ov9186;
	} else {
		ge117os9186 = '\1';
		ge117ov9186 = R;
	}
	R = GE_ms("to_directory", 12);
	ge117ov9186 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_to_file */
void T390f30(T0* C, T0* a1)
{
	((T390*)(C))->a4 = a1;
}

/* GEANT_REPLACE_TASK.to_file_attribute_name */
unsigned char ge117os9185 = '\0';
T0* ge117ov9185;
T0* T306f14(T0* C)
{
	T0* R = 0;
	if (ge117os9185) {
		return ge117ov9185;
	} else {
		ge117os9185 = '\1';
		ge117ov9185 = R;
	}
	R = GE_ms("to_file", 7);
	ge117ov9185 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_file */
void T390f29(T0* C, T0* a1)
{
	((T390*)(C))->a3 = a1;
}

/* GEANT_REPLACE_TASK.attribute_value */
T0* T306f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T306*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T306f26(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T306f26(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T306f6(C));
		t4 = (((T22*)(GE_void(((T306*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T306f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_REPLACE_TASK.project_variables_resolver */
T0* T306f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_REPLACE_TASK.target_arguments_stack */
T0* T306f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_REPLACE_TASK.has_attribute */
T1 T306f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T306*)(C))->a3), a1));
	return R;
}

/* GEANT_REPLACE_TASK.file_attribute_name */
unsigned char ge117os9184 = '\0';
T0* ge117ov9184;
T0* T306f12(T0* C)
{
	T0* R = 0;
	if (ge117os9184) {
		return ge117ov9184;
	} else {
		ge117os9184 = '\1';
		ge117ov9184 = R;
	}
	R = GE_ms("file", 4);
	ge117ov9184 = R;
	return R;
}

/* GEANT_REPLACE_TASK.task_make */
void T306f32(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T306f34(C, a1);
	t1 = (((T390*)(GE_void(a1)))->a2);
	T306f35(C, t1, a2);
}

/* GEANT_REPLACE_TASK.interpreting_element_make */
void T306f35(T0* C, T0* a1, T0* a2)
{
	T306f36(C, a2);
	T306f37(C, a1);
}

/* GEANT_REPLACE_TASK.set_project */
void T306f37(T0* C, T0* a1)
{
	((T306*)(C))->a2 = a1;
}

/* GEANT_REPLACE_TASK.element_make */
void T306f36(T0* C, T0* a1)
{
	T306f38(C, a1);
}

/* GEANT_REPLACE_TASK.set_xml_element */
void T306f38(T0* C, T0* a1)
{
	((T306*)(C))->a3 = a1;
}

/* GEANT_REPLACE_TASK.set_command */
void T306f34(T0* C, T0* a1)
{
	((T306*)(C))->a1 = a1;
}

/* GEANT_REPLACE_COMMAND.make */
T0* T390c28(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T390));
	*(T390*)C = GE_default390;
	T390f39(C, a1);
	return C;
}

/* GEANT_REPLACE_COMMAND.set_project */
void T390f39(T0* C, T0* a1)
{
	((T390*)(C))->a2 = a1;
}

/* GEANT_TARGET.replace_task_name */
unsigned char ge130os2426 = '\0';
T0* ge130ov2426;
T0* T26f72(T0* C)
{
	T0* R = 0;
	if (ge130os2426) {
		return ge130ov2426;
	} else {
		ge130os2426 = '\1';
		ge130ov2426 = R;
	}
	R = GE_ms("replace", 7);
	ge130ov2426 = R;
	return R;
}

/* GEANT_INPUT_TASK.make */
T0* T305c31(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T305));
	*(T305*)C = GE_default305;
	((T305*)(C))->a1 = T389c14(a1);
	T305f33(C, ((T305*)(C))->a1, a2);
	t1 = (T305f12(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f12(C));
		l1 = (T305f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T389f15(GE_void(((T305*)(C))->a1), l1);
		}
	}
	t1 = (T305f14(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f14(C));
		l1 = (T305f13(C, t1));
		T389f16(GE_void(((T305*)(C))->a1), l1);
	}
	t1 = (T305f15(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f15(C));
		l1 = (T305f13(C, t1));
		T389f17(GE_void(((T305*)(C))->a1), l1);
	}
	t1 = (T305f16(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f16(C));
		l1 = (T305f13(C, t1));
		T389f18(GE_void(((T305*)(C))->a1), l1);
	}
	t1 = (T305f17(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f17(C));
		l1 = (T305f13(C, t1));
		T389f19(GE_void(((T305*)(C))->a1), l1);
	}
	t1 = (T305f18(C));
	t2 = (T305f9(C, t1));
	if (t2) {
		t1 = (T305f18(C));
		t2 = (T305f19(C, t1));
		T389f20(GE_void(((T305*)(C))->a1), t2);
	}
	return C;
}

/* GEANT_INPUT_COMMAND.set_answer_required */
void T389f20(T0* C, T1 a1)
{
	((T389*)(C))->a8 = a1;
}

/* GEANT_INPUT_TASK.boolean_value */
T1 T305f19(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T305f13(C, a1));
	t1 = (T305f25(C));
	t2 = (T305f26(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T305f25(C));
		t2 = (T305f27(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T305f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T305f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T305f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T305f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T305f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_INPUT_TASK.std */
T0* T305f22(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_INPUT_TASK.false_attribute_value */
T0* T305f27(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_INPUT_TASK.true_attribute_value */
T0* T305f26(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_INPUT_TASK.string_ */
T0* T305f25(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_INPUT_TASK.answer_required_attribute_name */
unsigned char ge110os9166 = '\0';
T0* ge110ov9166;
T0* T305f18(T0* C)
{
	T0* R = 0;
	if (ge110os9166) {
		return ge110ov9166;
	} else {
		ge110os9166 = '\1';
		ge110ov9166 = R;
	}
	R = GE_ms("answer_required", 15);
	ge110ov9166 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_validregexp */
void T389f19(T0* C, T0* a1)
{
	((T389*)(C))->a7 = a1;
}

/* GEANT_INPUT_TASK.validregexp_attribute_name */
unsigned char ge110os9165 = '\0';
T0* ge110ov9165;
T0* T305f17(T0* C)
{
	T0* R = 0;
	if (ge110os9165) {
		return ge110ov9165;
	} else {
		ge110os9165 = '\1';
		ge110ov9165 = R;
	}
	R = GE_ms("validregexp", 11);
	ge110ov9165 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_validargs */
void T389f18(T0* C, T0* a1)
{
	((T389*)(C))->a6 = a1;
}

/* GEANT_INPUT_TASK.validargs_attribute_name */
unsigned char ge110os9164 = '\0';
T0* ge110ov9164;
T0* T305f16(T0* C)
{
	T0* R = 0;
	if (ge110os9164) {
		return ge110ov9164;
	} else {
		ge110os9164 = '\1';
		ge110ov9164 = R;
	}
	R = GE_ms("validargs", 9);
	ge110ov9164 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_default_value */
void T389f17(T0* C, T0* a1)
{
	((T389*)(C))->a5 = a1;
}

/* GEANT_INPUT_TASK.defaultvalue_attribute_name */
unsigned char ge110os9163 = '\0';
T0* ge110ov9163;
T0* T305f15(T0* C)
{
	T0* R = 0;
	if (ge110os9163) {
		return ge110ov9163;
	} else {
		ge110os9163 = '\1';
		ge110ov9163 = R;
	}
	R = GE_ms("defaultvalue", 12);
	ge110ov9163 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_message */
void T389f16(T0* C, T0* a1)
{
	((T389*)(C))->a4 = a1;
}

/* GEANT_INPUT_TASK.message_attribute_name */
unsigned char ge110os9162 = '\0';
T0* ge110ov9162;
T0* T305f14(T0* C)
{
	T0* R = 0;
	if (ge110os9162) {
		return ge110ov9162;
	} else {
		ge110os9162 = '\1';
		ge110ov9162 = R;
	}
	R = GE_ms("message", 7);
	ge110ov9162 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_variable */
void T389f15(T0* C, T0* a1)
{
	((T389*)(C))->a3 = a1;
}

/* GEANT_INPUT_TASK.attribute_value */
T0* T305f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T305*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T305f24(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T305f24(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T305f6(C));
		t4 = (((T22*)(GE_void(((T305*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T305f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_INPUT_TASK.project_variables_resolver */
T0* T305f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_INPUT_TASK.target_arguments_stack */
T0* T305f24(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_INPUT_TASK.has_attribute */
T1 T305f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T305*)(C))->a3), a1));
	return R;
}

/* GEANT_INPUT_TASK.variable_attribute_name */
unsigned char ge110os9161 = '\0';
T0* ge110ov9161;
T0* T305f12(T0* C)
{
	T0* R = 0;
	if (ge110os9161) {
		return ge110ov9161;
	} else {
		ge110os9161 = '\1';
		ge110ov9161 = R;
	}
	R = GE_ms("variable", 8);
	ge110ov9161 = R;
	return R;
}

/* GEANT_INPUT_TASK.task_make */
void T305f33(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T305f35(C, a1);
	t1 = (((T389*)(GE_void(a1)))->a2);
	T305f36(C, t1, a2);
}

/* GEANT_INPUT_TASK.interpreting_element_make */
void T305f36(T0* C, T0* a1, T0* a2)
{
	T305f37(C, a2);
	T305f38(C, a1);
}

/* GEANT_INPUT_TASK.set_project */
void T305f38(T0* C, T0* a1)
{
	((T305*)(C))->a2 = a1;
}

/* GEANT_INPUT_TASK.element_make */
void T305f37(T0* C, T0* a1)
{
	T305f39(C, a1);
}

/* GEANT_INPUT_TASK.set_xml_element */
void T305f39(T0* C, T0* a1)
{
	((T305*)(C))->a3 = a1;
}

/* GEANT_INPUT_TASK.set_command */
void T305f35(T0* C, T0* a1)
{
	((T305*)(C))->a1 = a1;
}

/* GEANT_INPUT_COMMAND.make */
T0* T389c14(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T389));
	*(T389*)C = GE_default389;
	T389f22(C, a1);
	return C;
}

/* GEANT_INPUT_COMMAND.set_project */
void T389f22(T0* C, T0* a1)
{
	((T389*)(C))->a2 = a1;
}

/* GEANT_TARGET.input_task_name */
unsigned char ge130os2425 = '\0';
T0* ge130ov2425;
T0* T26f71(T0* C)
{
	T0* R = 0;
	if (ge130os2425) {
		return ge130ov2425;
	} else {
		ge130os2425 = '\1';
		ge130ov2425 = R;
	}
	R = GE_ms("input", 5);
	ge130ov2425 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.make */
T0* T304c25(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T304));
	*(T304*)C = GE_default304;
	((T304*)(C))->a1 = T388c14(a1);
	T304f27(C, ((T304*)(C))->a1, a2);
	t1 = (T304f12(C));
	t2 = (T304f9(C, t1));
	if (t2) {
		t1 = (T304f12(C));
		l1 = (T304f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f15(GE_void(((T304*)(C))->a1), l1);
		}
	}
	T388f16(GE_void(((T304*)(C))->a1), GE_ms("true", 4));
	t1 = (T304f14(C));
	t2 = (T304f9(C, t1));
	if (t2) {
		t1 = (T304f14(C));
		l1 = (T304f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f16(GE_void(((T304*)(C))->a1), l1);
		}
	}
	T388f17(GE_void(((T304*)(C))->a1), GE_ms("false", 5));
	t1 = (T304f15(C));
	t2 = (T304f9(C, t1));
	if (t2) {
		t1 = (T304f15(C));
		l1 = (T304f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f17(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f16(C));
	t2 = (T304f9(C, t1));
	if (t2) {
		t1 = (T304f16(C));
		l1 = (T304f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f18(GE_void(((T304*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_AVAILABLE_COMMAND.set_variable_name */
void T388f18(T0* C, T0* a1)
{
	((T388*)(C))->a6 = a1;
}

/* GEANT_AVAILABLE_TASK.variable_attribute_name */
unsigned char ge97os9144 = '\0';
T0* ge97ov9144;
T0* T304f16(T0* C)
{
	T0* R = 0;
	if (ge97os9144) {
		return ge97ov9144;
	} else {
		ge97os9144 = '\1';
		ge97ov9144 = R;
	}
	R = GE_ms("variable", 8);
	ge97ov9144 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.false_value_attribute_name */
unsigned char ge97os9146 = '\0';
T0* ge97ov9146;
T0* T304f15(T0* C)
{
	T0* R = 0;
	if (ge97os9146) {
		return ge97ov9146;
	} else {
		ge97os9146 = '\1';
		ge97ov9146 = R;
	}
	R = GE_ms("false_value", 11);
	ge97ov9146 = R;
	return R;
}

/* GEANT_AVAILABLE_COMMAND.set_false_value */
void T388f17(T0* C, T0* a1)
{
	((T388*)(C))->a5 = a1;
}

/* GEANT_AVAILABLE_TASK.true_value_attribute_name */
unsigned char ge97os9145 = '\0';
T0* ge97ov9145;
T0* T304f14(T0* C)
{
	T0* R = 0;
	if (ge97os9145) {
		return ge97ov9145;
	} else {
		ge97os9145 = '\1';
		ge97ov9145 = R;
	}
	R = GE_ms("true_value", 10);
	ge97ov9145 = R;
	return R;
}

/* GEANT_AVAILABLE_COMMAND.set_true_value */
void T388f16(T0* C, T0* a1)
{
	((T388*)(C))->a4 = a1;
}

/* GEANT_AVAILABLE_COMMAND.set_resource_name */
void T388f15(T0* C, T0* a1)
{
	((T388*)(C))->a3 = a1;
}

/* GEANT_AVAILABLE_TASK.attribute_value */
T0* T304f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T304*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T304f21(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T304f21(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T304f6(C));
		t4 = (((T22*)(GE_void(((T304*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T304f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_AVAILABLE_TASK.project_variables_resolver */
T0* T304f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.target_arguments_stack */
T0* T304f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.has_attribute */
T1 T304f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T304*)(C))->a3), a1));
	return R;
}

/* GEANT_AVAILABLE_TASK.resource_attribute_name */
unsigned char ge97os9143 = '\0';
T0* ge97ov9143;
T0* T304f12(T0* C)
{
	T0* R = 0;
	if (ge97os9143) {
		return ge97ov9143;
	} else {
		ge97os9143 = '\1';
		ge97ov9143 = R;
	}
	R = GE_ms("resource", 8);
	ge97ov9143 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.task_make */
void T304f27(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T304f29(C, a1);
	t1 = (((T388*)(GE_void(a1)))->a2);
	T304f30(C, t1, a2);
}

/* GEANT_AVAILABLE_TASK.interpreting_element_make */
void T304f30(T0* C, T0* a1, T0* a2)
{
	T304f31(C, a2);
	T304f32(C, a1);
}

/* GEANT_AVAILABLE_TASK.set_project */
void T304f32(T0* C, T0* a1)
{
	((T304*)(C))->a2 = a1;
}

/* GEANT_AVAILABLE_TASK.element_make */
void T304f31(T0* C, T0* a1)
{
	T304f33(C, a1);
}

/* GEANT_AVAILABLE_TASK.set_xml_element */
void T304f33(T0* C, T0* a1)
{
	((T304*)(C))->a3 = a1;
}

/* GEANT_AVAILABLE_TASK.set_command */
void T304f29(T0* C, T0* a1)
{
	((T304*)(C))->a1 = a1;
}

/* GEANT_AVAILABLE_COMMAND.make */
T0* T388c14(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T388));
	*(T388*)C = GE_default388;
	T388f20(C, a1);
	return C;
}

/* GEANT_AVAILABLE_COMMAND.set_project */
void T388f20(T0* C, T0* a1)
{
	((T388*)(C))->a2 = a1;
}

/* GEANT_TARGET.available_task_name */
unsigned char ge130os2424 = '\0';
T0* ge130ov2424;
T0* T26f70(T0* C)
{
	T0* R = 0;
	if (ge130os2424) {
		return ge130ov2424;
	} else {
		ge130os2424 = '\1';
		ge130ov2424 = R;
	}
	R = GE_ms("available", 9);
	ge130ov2424 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.make */
T0* T303c27(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T303));
	*(T303*)C = GE_default303;
	((T303*)(C))->a1 = T387c7(a1);
	T303f29(C, ((T303*)(C))->a1, a2);
	t1 = (T303f12(C));
	t2 = (T303f9(C, t1));
	if (t2) {
		t1 = (T303f12(C));
		l1 = (T303f13(C, t1));
		T387f8(GE_void(((T303*)(C))->a1), l1);
	}
	t1 = (T303f14(C));
	l2 = (T303f15(C, t1));
	t1 = (T303f16(C));
	t2 = (T303f9(C, t1));
	if (t2) {
		t3 = (((T116*)(GE_void(l2)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = GE_ma33((T6)1,
GE_ms("  [precursor]: error: Usage of both, attribute \'arguments\' and subelements \'argument\' is not allowed.", 101));
			T303f30(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (T303f16(C));
		l1 = (T303f13(C, t1));
		t1 = (T303f17(C));
		l6 = (T373f6(GE_void(t1), l1));
		l5 = (T226f7(GE_void(l6)));
		l7 = (T6)(GE_int32(1));
		T273f8(GE_void(l5));
		t2 = (((T273*)(GE_void(l5)))->a3);
		while (!(t2)) {
			t1 = (((T387*)(GE_void(((T303*)(C))->a1)))->a2);
			t4 = (T273f6(GE_void(l5)));
			t5 = (T6f12(&l7));
			T34f67(GE_void(t1), t4, t5);
			t1 = (T273f6(GE_void(l5)));
			t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: found actual (terse) argument. Value: \'", 54),
t1,
GE_ms("\'\n", 2));
			T22f31(GE_void(((T303*)(C))->a2), t1);
			l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
			T273f9(GE_void(l5));
			t2 = (((T273*)(GE_void(l5)))->a3);
		}
	} else {
		l4 = (T116f5(GE_void(l2)));
		T117f8(GE_void(l4));
		t2 = (((T117*)(GE_void(l4)))->a1);
		while (!(t2)) {
			t1 = (T117f6(GE_void(l4)));
			l3 = T367c16(((T303*)(C))->a2, t1);
			t2 = (T367f10(GE_void(l3)));
			if (t2) {
				t1 = (T367f4(GE_void(l3)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (((T387*)(GE_void(((T303*)(C))->a1)))->a2);
				t4 = (T367f4(GE_void(l3)));
				t2 = (T34f37(GE_void(t1), t4));
				if (t2) {
					t1 = (T367f4(GE_void(l3)));
					t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: error: duplicate definition for argument \'", 57),
t1,
GE_ms("\'", 1));
					T303f30(C, (T6)(GE_int32(1)), t1);
				}
				t1 = (((T387*)(GE_void(((T303*)(C))->a1)))->a2);
				t4 = (T367f5(GE_void(l3)));
				t5 = (T367f4(GE_void(l3)));
				T34f67(GE_void(t1), t4, t5);
				t1 = (T367f4(GE_void(l3)));
				t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: found actual argument \'", 38),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T303*)(C))->a2), t1);
			}
			T117f9(GE_void(l4));
			t2 = (((T117*)(GE_void(l4)))->a1);
		}
	}
	return C;
}

/* GEANT_DEFINE_ELEMENT.value */
T0* T367f5(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T367f12(C));
	R = (T367f14(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.value_attribute_name */
unsigned char ge139os7793 = '\0';
T0* ge139ov7793;
T0* T367f12(T0* C)
{
	T0* R = 0;
	if (ge139os7793) {
		return ge139ov7793;
	} else {
		ge139os7793 = '\1';
		ge139ov7793 = R;
	}
	R = GE_ms("value", 5);
	ge139ov7793 = R;
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has */
T1 T34f37(T0* C, T0* a1)
{
	T1 R = 0;
	T34f51(C, a1);
	R = ((((T34*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].forth */
void T273f9(T0* C)
{
	T226f14(GE_void(((T273*)(C))->a1), C);
}

/* DS_LINKED_LIST [STRING_8].cursor_forth */
void T226f14(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T273*)(a1))->a2);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T226*)(C))->a2;
	} else {
		t2 = (((T273*)(a1))->a4);
		l3 = (((T277*)(GE_void(t2)))->a2);
	}
	l2 = ((l3)==(EIF_VOID));
	T273f10(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T226f16(C, a1);
		}
	} else {
		if (l1) {
			T226f15(C, a1);
		}
	}
}

/* DS_LINKED_LIST [STRING_8].add_traversing_cursor */
void T226f15(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T226*)(C))->a1));
	if (t1) {
		t2 = (((T273*)(GE_void(((T226*)(C))->a1)))->a5);
		T273f11(a1, t2);
		T273f11(GE_void(((T226*)(C))->a1), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [STRING_8].set_next_cursor */
void T273f11(T0* C, T0* a1)
{
	((T273*)(C))->a5 = a1;
}

/* DS_LINKED_LIST [STRING_8].remove_traversing_cursor */
void T226f16(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T226*)(C))->a1));
	if (t1) {
		l2 = ((T226*)(C))->a1;
		l1 = (((T273*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T273*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T273*)(a1))->a5);
			T273f11(GE_void(l2), t2);
			T273f11(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [STRING_8].set */
void T273f10(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T273*)(C))->a4 = a1;
	((T273*)(C))->a2 = a2;
	((T273*)(C))->a3 = a3;
}

/* GEANT_ARGUMENT_VARIABLES.force_last */
void T34f67(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T34f50(C);
	T34f51(C, a2);
	t1 = ((((T34*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T34f52(C, a1, ((T34*)(C))->a1);
	} else {
		l1 = ((T6)((((T34*)(C))->a6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T34*)(C))->a3));
		if (t1) {
			t2 = (T34f23(C, l1));
			T34f53(C, t2);
			l2 = (T34f24(C, a2));
		} else {
			l2 = ((T34*)(C))->a4;
		}
		t2 = (T34f29(C, l2));
		T34f54(C, t2, l1);
		T34f55(C, l1, l2);
		T34f52(C, a1, l1);
		T34f56(C, a2, l1);
		((T34*)(C))->a6 = l1;
		((T34*)(C))->a2 = ((T6)((((T34*)(C))->a2)+((T6)(GE_int32(1)))));
	}
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_put */
void T34f56(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T34*)(C))->a15)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.slots_put */
void T34f55(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T34*)(C))->a14)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.clashes_put */
void T34f54(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T34*)(C))->a13)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.resize */
void T34f53(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T34f50(C);
	l1 = (T34f31(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T34f58(C, t1);
	l2 = ((T34*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T34f55(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T34*)(C))->a10 = l1;
	l2 = ((T34*)(C))->a6;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T34f27(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T34f28(C, l2));
			l3 = (T34f24(C, t3));
			t1 = (T34f29(C, l3));
			T34f54(C, t1, l2);
			T34f55(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f59(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f60(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f61(C, t1);
	((T34*)(C))->a3 = a1;
	((T34*)(C))->a1 = (T6)(GE_int32(0));
}

/* GEANT_ARGUMENT_VARIABLES.clashes_resize */
void T34f61(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a13 = (T65f1(GE_void(t1), ((T34*)(C))->a13, a1));
}

/* GEANT_ARGUMENT_VARIABLES.special_integer_ */
T0* T34f26(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_resize */
void T34f60(T0* C, T6 a1)
{
	((T34*)(C))->a15 = (T66f1(GE_void(((T34*)(C))->a18), ((T34*)(C))->a15, a1));
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_resize */
void T34f59(T0* C, T6 a1)
{
	((T34*)(C))->a12 = (T66f1(GE_void(((T34*)(C))->a17), ((T34*)(C))->a12, a1));
}

/* GEANT_ARGUMENT_VARIABLES.slots_resize */
void T34f58(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a14 = (T65f1(GE_void(t1), ((T34*)(C))->a14, a1));
}

/* GEANT_ARGUMENT_VARIABLES.new_modulus */
T6 T34f31(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.new_capacity */
T6 T34f23(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_put */
void T34f52(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T34*)(C))->a12)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.unset_found_item */
void T34f50(T0* C)
{
	((T34*)(C))->a9 = (T6)(GE_int32(0));
}

/* DS_LINKED_LIST_CURSOR [STRING_8].item */
T0* T273f6(T0* C)
{
	T0* R = 0;
	R = (((T277*)(GE_void(((T273*)(C))->a4)))->a1);
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].start */
void T273f8(T0* C)
{
	T226f13(GE_void(((T273*)(C))->a1), C);
}

/* DS_LINKED_LIST [STRING_8].cursor_start */
void T226f13(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T226f9(C, a1));
	l2 = ((((T226*)(C))->a2)==(EIF_VOID));
	T273f10(a1, ((T226*)(C))->a2, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T226f15(C, a1);
	}
}

/* DS_LINKED_LIST [STRING_8].cursor_off */
T1 T226f9(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T273*)(a1))->a4);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_LINKED_LIST [STRING_8].new_cursor */
T0* T226f7(T0* C)
{
	T0* R = 0;
	R = T273c7(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].make */
T0* T273c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T273));
	*(T273*)C = GE_default273;
	((T273*)(C))->a1 = a1;
	((T273*)(C))->a2 = EIF_TRUE;
	return C;
}

/* ST_SPLITTER.split */
T0* T373f6(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T373f8(C, a1, EIF_FALSE));
	return R;
}

/* ST_SPLITTER.do_split */
T0* T373f8(T0* C, T0* a1, T1 a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T0* l7 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	R = T226c10();
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		if (((T373*)(C))->a1) {
			l5 = ((T6)(((T373*)(C))->a2));
		}
		l1 = (T6)(GE_int32(1));
		l3 = (T6)(GE_int32(0));
		l4 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l6 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T195f14(a1, l1)));
			if (((T373*)(C))->a1) {
				t1 = ((l6)==(l5));
			} else {
				t1 = EIF_FALSE;
			}
			if (t1) {
				t1 = ((T1)((l1)<(l2)));
			}
			if (t1) {
				t1 = ((l7)==(EIF_VOID));
				if (t1) {
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, t2):T195f11(a1, l4, t2)));
				} else {
					t3 = (T373f5(C));
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					l7 = (T76f4(GE_void(t3), l7, a1, l4, t2));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				l4 = l1;
			} else {
				t1 = (T420f24(GE_void(((T373*)(C))->a3), l6));
				if (t1) {
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					t1 = ((l3)==(t2));
					if (t1) {
						if (a2) {
							T226f11(GE_void(R), GE_ms("", 0));
						}
					} else {
						t1 = ((l7)==(EIF_VOID));
						if (t1) {
							t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
							l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, t2):T195f11(a1, l4, t2)));
						} else {
							t3 = (T373f5(C));
							t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
							l7 = (T76f4(GE_void(t3), l7, a1, l4, t2));
						}
						T226f11(GE_void(R), l7);
					}
					l7 = EIF_VOID;
					l3 = l1;
					l4 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t1 = ((l3)==((T6)(GE_int32(0))));
		if (t1) {
			t1 = ((l7)==(EIF_VOID));
			if (t1) {
				l7 = a1;
			} else {
				t3 = (T373f5(C));
				l7 = (T76f4(GE_void(t3), l7, a1, l4, l2));
			}
			T226f11(GE_void(R), l7);
		} else {
			t1 = ((T1)((l3)<(l2)));
			if (t1) {
				t1 = ((l7)==(EIF_VOID));
				if (t1) {
					l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, l2):T195f11(a1, l4, l2)));
				} else {
					t3 = (T373f5(C));
					l7 = (T76f4(GE_void(t3), l7, a1, l4, l2));
				}
				T226f11(GE_void(R), l7);
			} else {
				if (a2) {
					T226f11(GE_void(R), GE_ms("", 0));
				}
			}
		}
	}
	return R;
}

/* DS_LINKED_LIST [STRING_8].force_last */
void T226f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T226f6(C));
	if (t1) {
		((T226*)(C))->a2 = T277c3(a1);
		((T226*)(C))->a4 = ((T226*)(C))->a2;
		((T226*)(C))->a5 = (T6)(GE_int32(1));
	} else {
		l1 = ((T226*)(C))->a4;
		((T226*)(C))->a4 = T277c3(a1);
		T277f4(GE_void(l1), ((T226*)(C))->a4);
		((T226*)(C))->a5 = ((T6)((((T226*)(C))->a5)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [STRING_8].put_right */
void T277f4(T0* C, T0* a1)
{
	((T277*)(C))->a2 = a1;
}

/* DS_LINKABLE [STRING_8].make */
T0* T277c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T277));
	*(T277*)C = GE_default277;
	((T277*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [STRING_8].is_empty */
T1 T226f6(T0* C)
{
	T1 R = 0;
	R = ((((T226*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].has */
T1 T420f24(T0* C, T6 a1)
{
	T1 R = 0;
	T420f32(C, a1);
	R = ((((T420*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].search_position */
void T420f32(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	t1 = (EIF_FALSE);
	if (t1) {
		((T420*)(C))->a1 = (T420f25(C, ((T420*)(C))->a3));
		((T420*)(C))->a7 = ((T420*)(C))->a3;
		((T420*)(C))->a9 = (T6)(GE_int32(0));
	} else {
		l4 = (T420f17(C));
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T420*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T420f18(C, ((T420*)(C))->a1));
				t3 = ((GE_void(l4), a1, t2, (T1)0));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = ((GE_void(l4), a1, l3, (T1)0));
			}
			if (t1) {
				((T420*)(C))->a7 = (T420f19(C, a1));
				l1 = (T420f25(C, ((T420*)(C))->a7));
				((T420*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T420f18(C, l1));
					t1 = ((GE_void(l4), a1, t2, (T1)0));
					if (t1) {
						((T420*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T420f22(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T420*)(C))->a9 = l2;
			}
		} else {
			t1 = ((((T420*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T420f18(C, ((T420*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T420*)(C))->a7 = (T420f19(C, a1));
				l1 = (T420f25(C, ((T420*)(C))->a7));
				((T420*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T420f18(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T420*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T420f22(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T420*)(C))->a9 = l2;
			}
		}
	}
}

/* DS_HASH_SET [INTEGER_32].clashes_item */
T6 T420f22(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T420*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [INTEGER_32].hash_position */
T6 T420f19(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = (EIF_TRUE);
	if (t1) {
		t1 = ((((T420*)(C))->a16)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T420*)(C))->a16), a1, (T6)0));
			R = ((T6)((t2)%(((T420*)(C))->a3)));
		} else {
			t2 = (T6f24(&a1));
			R = ((T6)((t2)%(((T420*)(C))->a3)));
		}
	} else {
		R = ((T420*)(C))->a3;
	}
	return R;
}

/* DS_HASH_SET [INTEGER_32].key_storage_item */
T6 T420f18(T0* C, T6 a1)
{
	T6 R = 0;
	R = (T420f27(C, a1));
	return R;
}

/* DS_HASH_SET [INTEGER_32].item_storage_item */
T6 T420f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T420*)(C))->a11)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [INTEGER_32].key_equality_tester */
T0* T420f17(T0* C)
{
	T0* R = 0;
	R = ((T420*)(C))->a15;
	return R;
}

/* DS_HASH_SET [INTEGER_32].slots_item */
T6 T420f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T420*)(C))->a13)))->z2[a1]);
	return R;
}

/* KL_STRING_ROUTINES.appended_substring */
T0* T76f4(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 195:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T195f57(GE_void(l1), a2, a3, a4);
		R = l1;
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 195:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			t2 = ((T6)((t2)+(a4)));
			t2 = ((T6)((t2)-(a3)));
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			l1 = (T195f9(GE_void(l1), t2));
			T195f55(GE_void(l1), a1);
			T195f57(GE_void(l1), a2, a3, a4);
			R = l1;
		} else {
			l2 = a3;
			t1 = (T6f1(&l2, a4));
			while (!(t1)) {
				t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f9(a2, l2):T195f10(a2, l2)));
				if (((T0*)(GE_void(a1)))->id==17) {
					T17f34(a1, t3);
				} else {
					T195f56(a1, t3);
				}
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l2, a4));
			}
			R = a1;
		}
	}
	return R;
}

/* UC_UTF8_STRING.append_character */
void T195f56(T0* C, T2 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		l2 = (T6)(GE_int32(1));
	} else {
		t2 = (T195f25(C));
		l2 = (T194f23(GE_void(t2), a1));
	}
	l1 = ((T6)((((T195*)(C))->a3)+((T6)(GE_int32(1)))));
	l3 = ((T6)((((T195*)(C))->a3)+(l2)));
	t3 = (T195f38(C));
	t1 = (T6f1(&l3, t3));
	if (t1) {
		T195f65(C, l3);
	}
	((T195*)(C))->a3 = l3;
	t1 = ((l2)==((T6)(GE_int32(1))));
	if (t1) {
		l4 = ((T6)((((T195*)(C))->a1)+((T6)(GE_int32(1)))));
		T195f61(C, ((T195*)(C))->a3);
		T195f66(C, a1, l1);
		T195f61(C, l4);
	} else {
		t3 = ((T6)((((T195*)(C))->a1)+((T6)(GE_int32(1)))));
		T195f61(C, t3);
		T195f67(C, a1, l2, l1);
	}
}

/* UC_UTF8_STRING.resize_byte_storage */
void T195f65(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	t1 = (T195f38(C));
	t2 = (T6f1(&a1, t1));
	if (t2) {
		T195f72(C, a1);
		l1 = ((T195*)(C))->a1;
		T195f61(C, a1);
		T195f63(C, a1);
		T195f61(C, l1);
	}
}

/* UC_UTF8_STRING.resize */
void T195f72(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T15*)(GE_void(((T195*)(C))->a2)))->z1);
	t1 = (T6f5(&a1, l1));
	if (t1) {
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T195*)(C))->a2 = (T15f2(GE_void(((T195*)(C))->a2), t2));
	}
}

/* UC_UTF8_STRING.append_string */
void T195f55(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T195f36(C));
	t2 = (T83f1(GE_void(t1), a1, ge318ov6412));
	if (t2) {
		t1 = (T195f25(C));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		l1 = (T194f22(GE_void(t1), a1, (T6)(GE_int32(1)), t3));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t2 = ((l1)==(t3));
		if (t2) {
			l4 = ((T6)((((T195*)(C))->a3)+(l1)));
			l5 = ((T6)((((T195*)(C))->a1)+(l1)));
			T195f61(C, ((T195*)(C))->a3);
			T195f63(C, ((T195*)(C))->a3);
			l8 = (T254s1(EIF_FALSE));
			T195f55p1(C, a1);
			l8 = (T254s1(l8));
			t3 = (T195f38(C));
			T195f61(C, t3);
			t3 = (T195f38(C));
			T195f63(C, t3);
			T195f61(C, l5);
			((T195*)(C))->a3 = l4;
		} else {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			T195f57(C, a1, (T6)(GE_int32(1)), t3);
		}
	} else {
		if ((a1)==EIF_VOID) {
			l7 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 195:
				l7 = a1;
				break;
			default:
				l7 = EIF_VOID;
			}
		}
		t2 = ((l7)!=(EIF_VOID));
		if (t2) {
			if ((a1)==EIF_VOID) {
				l6 = EIF_VOID;
			} else {
				switch (((T0*)(a1))->id) {
				case 195:
					l6 = a1;
					break;
				default:
					l6 = EIF_VOID;
				}
			}
			t2 = ((l6)!=(EIF_VOID));
			if (!(t2)) {
				t1 = (T195f36(C));
				t4 = (T195f39(C));
				t2 = (T83f1(GE_void(t1), l7, t4));
			}
			if (t2) {
				t2 = ((l7)==(C));
				if (t2) {
					t3 = (T6)(GE_int32(2));
					l4 = ((T6)((t3)*(((T195*)(C))->a3)));
					t3 = (T6)(GE_int32(2));
					l5 = ((T6)((t3)*(((T195*)(C))->a1)));
					T195f61(C, ((T195*)(C))->a3);
					T195f63(C, ((T195*)(C))->a3);
					l8 = (T254s1(EIF_FALSE));
					T195f55p1(C, a1);
					l8 = (T254s1(l8));
					t3 = (T195f38(C));
					T195f61(C, t3);
					t3 = (T195f38(C));
					T195f63(C, t3);
					T195f61(C, l5);
					((T195*)(C))->a3 = l4;
				} else {
					l3 = (((T195*)(GE_void(l7)))->a1);
					l2 = (((T195*)(GE_void(l7)))->a3);
					l4 = ((T6)((((T195*)(C))->a3)+(l2)));
					l5 = ((T6)((((T195*)(C))->a1)+(l3)));
					T195f61(GE_void(l7), l2);
					T195f61(C, ((T195*)(C))->a3);
					T195f63(C, ((T195*)(C))->a3);
					l8 = (T254s1(EIF_FALSE));
					T195f55p1(C, a1);
					l8 = (T254s1(l8));
					t3 = (T195f38(C));
					T195f61(C, t3);
					t3 = (T195f38(C));
					T195f63(C, t3);
					T195f61(C, l5);
					T195f61(GE_void(l7), l3);
					((T195*)(C))->a3 = l4;
				}
			} else {
				t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
				T195f57(C, a1, (T6)(GE_int32(1)), t3);
			}
		} else {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			T195f57(C, a1, (T6)(GE_int32(1)), t3);
		}
	}
}

/* UC_UTF8_STRING.dummy_uc_string */
unsigned char ge318os6413 = '\0';
T0* ge318ov6413;
T0* T195f39(T0* C)
{
	T0* R = 0;
	if (ge318os6413) {
		return ge318ov6413;
	} else {
		ge318os6413 = '\1';
		ge318ov6413 = R;
	}
	R = T112c8();
	ge318ov6413 = R;
	return R;
}

/* UC_UTF8_STRING.append_string */
void T195f55p1(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		T195f64(C, a1);
	}
}

/* UC_UTF8_STRING.append */
void T195f64(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l1 = ((T195*)(C))->a1;
		l3 = ((T6)((l2)+(l1)));
		t2 = (T195f38(C));
		t1 = (T6f1(&l3, t2));
		if (t1) {
			t2 = (T195f41(C));
			t2 = ((T6)((l3)+(t2)));
			T195f72(C, t2);
		}
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
		T15f8(GE_void(((T195*)(C))->a2), t3, (T6)(GE_int32(0)), l1, l2);
		((T195*)(C))->a1 = l3;
		((T195*)(C))->a4 = (T6)(GE_int32(0));
	}
}

/* UC_UTF8_STRING.additional_space */
T6 T195f41(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T195f38(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* ISE_RUNTIME.check_assert */
T1 T254s1(T1 a1)
{
	T1 R = 0;
	return R;
}

/* UC_UTF8_STRING.new_empty_string */
T0* T195f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = T195c59(a1);
	return R;
}

/* UC_UTF8_STRING.append_substring */
void T195f57(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a3)-(a2)));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t2 = ((l1)!=((T6)(GE_int32(0))));
	if (t2) {
		t2 = ((a1)==(C));
		if (t2) {
			l5 = (T195f40(C));
		} else {
			l5 = a1;
		}
		t3 = (T195f25(C));
		l3 = (T194f22(GE_void(t3), l5, a2, a3));
		l2 = ((T6)((((T195*)(C))->a3)+((T6)(GE_int32(1)))));
		l4 = ((T6)((((T195*)(C))->a3)+(l3)));
		t1 = (T195f38(C));
		t2 = (T6f1(&l4, t1));
		if (t2) {
			T195f65(C, l4);
		}
		((T195*)(C))->a3 = l4;
		t1 = ((T6)((((T195*)(C))->a1)+(l1)));
		T195f61(C, t1);
		T195f68(C, l5, a2, a3, l3, l2);
	}
}

/* ST_SPLITTER.string_ */
T0* T373f5(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* DS_LINKED_LIST [STRING_8].make */
T0* T226c10(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T226));
	*(T226*)C = GE_default226;
	((T226*)(C))->a1 = (T226f7(C));
	return C;
}

/* GEANT_PRECURSOR_TASK.arguments_string_splitter */
unsigned char ge61os1710 = '\0';
T0* ge61ov1710;
T0* T303f17(T0* C)
{
	T0* R = 0;
	if (ge61os1710) {
		return ge61ov1710;
	} else {
		ge61os1710 = '\1';
		ge61ov1710 = R;
	}
	R = T373c9();
	ge61ov1710 = R;
	T373f10(GE_void(R), GE_ms(",\t", 2));
	return R;
}

/* ST_SPLITTER.set_separators */
void T373f10(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	((T373*)(C))->a4 = a1;
	l2 = (((T17*)(a1))->a2);
	((T373*)(C))->a3 = T420c30(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T17f12(a1, l1));
		T420f31(GE_void(((T373*)(C))->a3), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* DS_HASH_SET [INTEGER_32].put */
void T420f31(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T420f37(C);
	T420f32(C, a1);
	t1 = ((((T420*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T420f38(C, a1, ((T420*)(C))->a1);
	} else {
		l1 = ((T420*)(C))->a5;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T420*)(C))->a4 = ((T6)((((T420*)(C))->a4)+((T6)(GE_int32(1)))));
			l1 = ((T420*)(C))->a4;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T420f22(C, l1));
			((T420*)(C))->a5 = ((T6)((t2)-(t3)));
		}
		l2 = ((T420*)(C))->a7;
		t2 = (T420f25(C, l2));
		T420f39(C, t2, l1);
		T420f40(C, l1, l2);
		T420f38(C, a1, l1);
		((T420*)(C))->a8 = ((T6)((((T420*)(C))->a8)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_SET [INTEGER_32].slots_put */
void T420f40(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T420*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].clashes_put */
void T420f39(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T420*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].item_storage_put */
void T420f38(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T420*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].unset_found_item */
void T420f37(T0* C)
{
	((T420*)(C))->a14 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [INTEGER_32].make */
T0* T420c30(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T420));
	*(T420*)C = GE_default420;
	((T420*)(C))->a2 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T420f33(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T420f34(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T420f35(C, t1);
	((T420*)(C))->a3 = (T420f28(C, a1));
	t1 = ((T6)((((T420*)(C))->a3)+((T6)(GE_int32(1)))));
	T420f36(C, t1);
	((T420*)(C))->a4 = (T6)(GE_int32(0));
	((T420*)(C))->a5 = (T6)(GE_int32(0));
	((T420*)(C))->a1 = (T6)(GE_int32(0));
	T420f37(C);
	((T420*)(C))->a6 = (T420f20(C));
	return C;
}

/* DS_HASH_SET [INTEGER_32].new_cursor */
T0* T420f20(T0* C)
{
	T0* R = 0;
	R = T442c3(C);
	return R;
}

/* DS_HASH_SET_CURSOR [INTEGER_32].make */
T0* T442c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T442));
	*(T442*)C = GE_default442;
	((T442*)(C))->a1 = a1;
	((T442*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [INTEGER_32].make_slots */
void T420f36(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T420f23(C));
	((T420*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [INTEGER_32].special_integer_ */
T0* T420f23(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_SET [INTEGER_32].new_modulus */
T6 T420f28(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].make_clashes */
void T420f35(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T420f23(C));
	((T420*)(C))->a12 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [INTEGER_32].make_key_storage */
void T420f34(T0* C, T6 a1)
{
}

/* DS_HASH_SET [INTEGER_32].make_item_storage */
void T420f33(T0* C, T6 a1)
{
	((T420*)(C))->a10 = T65c4();
	((T420*)(C))->a11 = (T65f2(GE_void(((T420*)(C))->a10), a1));
}

/* ST_SPLITTER.make */
T0* T373c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T373));
	*(T373*)C = GE_default373;
	T373f10(C, ge528ov9582);
	return C;
}

/* GEANT_PRECURSOR_TASK.exit_application */
void T303f30(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T303f20(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T303f20(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T303f20(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T303f20(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T303f21(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PRECURSOR_TASK.exceptions */
T0* T303f21(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.std */
T0* T303f20(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.arguments_attribute_name */
unsigned char ge116os9133 = '\0';
T0* ge116ov9133;
T0* T303f16(T0* C)
{
	T0* R = 0;
	if (ge116os9133) {
		return ge116ov9133;
	} else {
		ge116os9133 = '\1';
		ge116ov9133 = R;
	}
	R = GE_ms("arguments", 9);
	ge116ov9133 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.elements_by_name */
T0* T303f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T303*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T303f23(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PRECURSOR_TASK.string_ */
T0* T303f23(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.argument_element_name */
unsigned char ge116os9132 = '\0';
T0* ge116ov9132;
T0* T303f14(T0* C)
{
	T0* R = 0;
	if (ge116os9132) {
		return ge116ov9132;
	} else {
		ge116os9132 = '\1';
		ge116ov9132 = R;
	}
	R = GE_ms("argument", 8);
	ge116ov9132 = R;
	return R;
}

/* GEANT_PRECURSOR_COMMAND.set_parent */
void T387f8(T0* C, T0* a1)
{
	((T387*)(C))->a4 = a1;
}

/* GEANT_PRECURSOR_TASK.attribute_value */
T0* T303f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T303*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T303f22(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T303f22(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T303f6(C));
		t4 = (((T22*)(GE_void(((T303*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T303f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_PRECURSOR_TASK.project_variables_resolver */
T0* T303f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.target_arguments_stack */
T0* T303f22(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.has_attribute */
T1 T303f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T303*)(C))->a3), a1));
	return R;
}

/* GEANT_PRECURSOR_TASK.parent_attribute_name */
unsigned char ge116os9131 = '\0';
T0* ge116ov9131;
T0* T303f12(T0* C)
{
	T0* R = 0;
	if (ge116os9131) {
		return ge116ov9131;
	} else {
		ge116os9131 = '\1';
		ge116ov9131 = R;
	}
	R = GE_ms("parent", 6);
	ge116ov9131 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.task_make */
void T303f29(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T303f31(C, a1);
	t1 = (((T387*)(GE_void(a1)))->a3);
	T303f32(C, t1, a2);
}

/* GEANT_PRECURSOR_TASK.interpreting_element_make */
void T303f32(T0* C, T0* a1, T0* a2)
{
	T303f33(C, a2);
	T303f34(C, a1);
}

/* GEANT_PRECURSOR_TASK.set_project */
void T303f34(T0* C, T0* a1)
{
	((T303*)(C))->a2 = a1;
}

/* GEANT_PRECURSOR_TASK.element_make */
void T303f33(T0* C, T0* a1)
{
	T303f35(C, a1);
}

/* GEANT_PRECURSOR_TASK.set_xml_element */
void T303f35(T0* C, T0* a1)
{
	((T303*)(C))->a3 = a1;
}

/* GEANT_PRECURSOR_TASK.set_command */
void T303f31(T0* C, T0* a1)
{
	((T303*)(C))->a1 = a1;
}

/* GEANT_PRECURSOR_COMMAND.make */
T0* T387c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T387));
	*(T387*)C = GE_default387;
	T387f7p1(C, a1);
	((T387*)(C))->a2 = T34c46();
	return C;
}

/* GEANT_PRECURSOR_COMMAND.make */
void T387f7p1(T0* C, T0* a1)
{
	T387f10(C, a1);
}

/* GEANT_PRECURSOR_COMMAND.set_project */
void T387f10(T0* C, T0* a1)
{
	((T387*)(C))->a3 = a1;
}

/* GEANT_TARGET.precursor_task_name */
unsigned char ge130os2423 = '\0';
T0* ge130ov2423;
T0* T26f69(T0* C)
{
	T0* R = 0;
	if (ge130os2423) {
		return ge130ov2423;
	} else {
		ge130os2423 = '\1';
		ge130ov2423 = R;
	}
	R = GE_ms("precursor", 9);
	ge130ov2423 = R;
	return R;
}

/* GEANT_EXIT_TASK.make */
T0* T302c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T302));
	*(T302*)C = GE_default302;
	((T302*)(C))->a1 = T386c6(a1);
	T302f24(C, ((T302*)(C))->a1, a2);
	t1 = (T302f12(C));
	t2 = (T302f9(C, t1));
	if (t2) {
		t1 = (T302f12(C));
		l1 = (T302f13(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T195f45(l1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = GE_ma33((T6)3,
GE_ms("  [exit] warning: code \'", 24),
l1,
GE_ms("\' is not a valid integer value. Using value \'1\' instead.", 56));
			T22f41(GE_void(a1), t1);
			T386f7(GE_void(((T302*)(C))->a1), (T6)(GE_int32(1)));
		} else {
			t3 = (((((T0*)(GE_void(l1)))->id==17)?T17f15(l1):T195f46(l1)));
			T386f7(GE_void(((T302*)(C))->a1), t3);
		}
	}
	return C;
}

/* UC_UTF8_STRING.to_integer */
T6 T195f46(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 t1;
	l1 = (T195f48(C));
	t1 = ((T6)(GE_int32(0)));
	T114f17(GE_void(l1), C, t1);
	R = (T114f13(GE_void(l1)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parsed_integer */
T6 T114f13(T0* C)
{
	T6 R = 0;
	T1 t1;
	T11 t2;
	T6 t3;
	t1 = ((((T114*)(C))->a1)==((T6)(GE_int32(1))));
	if (t1) {
		t2 = ((T11)((((T114*)(C))->a2)*((T11)(GE_nat64(10)))));
		t2 = ((T11)((t2)+(((T114*)(C))->a3)));
		t3 = ((T6)(t2));
		R = ((T6)(-(t3)));
	} else {
		t2 = ((T11)((((T114*)(C))->a2)*((T11)(GE_nat64(10)))));
		t2 = ((T11)((t2)+(((T114*)(C))->a3)));
		R = ((T6)(t2));
	}
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parse_string_with_type */
void T114f17(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T2 t2;
	T3 t3;
	T10 t4;
	T114f18(C, a2);
	l1 = (T6)(GE_int32(0));
	l2 = (((((T0*)(a1))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	l3 = a1;
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		l4 = (((((T0*)(GE_void(l3)))->id==17)?((T17*)(l3))->a1:((T195*)(l3))->a2));
		t1 = ((l1)==(l2));
		if (!(t1)) {
			t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
		}
		while (!(t1)) {
			t2 = (((T15*)(GE_void(l4)))->z2[l1]);
			T114f23(C, t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
			}
		}
	} else {
		l5 = EIF_VOID;
		t1 = ((l5)!=(EIF_VOID));
		if (t1) {
			l6 = ((GE_void(l5), (T0*)0));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
			}
			while (!(t1)) {
				t3 = ((GE_void(l6), l1, (T3)0));
				t2 = ((T2)(t3));
				T114f23(C, t2);
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((l1)==(l2));
				if (!(t1)) {
					t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
				}
			}
		} else {
			l1 = (T6)(GE_int32(1));
			l2 = (((((T0*)(a1))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
			}
			while (!(t1)) {
				t4 = (((((T0*)(a1))->id==17)?T17f27(a1, l1):T195f49(a1, l1)));
				t2 = ((T2)(t4));
				T114f23(C, t2);
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (T6f5(&(((T114*)(C))->a4), (T6)(GE_int32(4))));
				}
			}
		}
	}
}

/* UC_UTF8_STRING.code */
T10 T195f49(T0* C, T6 a1)
{
	T10 R = 0;
	T6 t1;
	t1 = (T195f14(C, a1));
	R = ((T10)(t1));
	return R;
}

/* STRING_8.code */
T10 T17f27(T0* C, T6 a1)
{
	T10 R = 0;
	T6 t1;
	T2 t2;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	t2 = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	t1 = ((T6)(t2));
	R = (T6f21(&t1));
	return R;
}

/* INTEGER_32.to_natural_32 */
T10 T6f21(T6* C)
{
	T10 R = 0;
	R = ((T10)(*C));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parse_character */
void T114f23(T0* C, T2 a1)
{
	T11 l1 = 0;
	T11 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T11 t4;
	l3 = ((T114*)(C))->a4;
	t1 = (T6f9(&l3, (T6)(GE_int32(4))));
	if (t1) {
		switch (l3) {
		case (T6)(T6)(GE_int32(0)):
			t1 = (T2f6(&a1));
			if (t1) {
				l3 = (T6)(GE_int32(2));
				((T114*)(C))->a2 = (T11)(GE_nat64(0));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T114*)(C))->a3 = (T6f19(&t2));
			} else {
				t1 = ((a1)==((T2)('-')));
				if (!(t1)) {
					t1 = ((a1)==((T2)('+')));
				}
				if (t1) {
					l3 = (T6)(GE_int32(1));
					t1 = ((a1)==((T2)('-')));
					if (t1) {
						((T114*)(C))->a1 = (T6)(GE_int32(1));
					} else {
						((T114*)(C))->a1 = (T6)(GE_int32(0));
					}
				} else {
					if (((T114*)(C))->a9) {
						t1 = (T17f28(GE_void(((T114*)(C))->a7), a1));
					} else {
						t1 = EIF_FALSE;
					}
					if (t1) {
					} else {
						l3 = (T6)(GE_int32(4));
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(1)):
			t1 = (T2f6(&a1));
			if (t1) {
				((T114*)(C))->a2 = (T11)(GE_nat64(0));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T114*)(C))->a3 = (T6f19(&t2));
				t1 = ((((T114*)(C))->a6)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = (T114f14(C));
					t1 = (T199f7(GE_void(t3), ((T114*)(C))->a2, ((T114*)(C))->a3, ((T114*)(C))->a6, ((T114*)(C))->a1));
					if (t1) {
						((T114*)(C))->a5 = EIF_TRUE;
						((T114*)(C))->a2 = l1;
						((T114*)(C))->a3 = l2;
						l3 = (T6)(GE_int32(5));
					}
				}
				l3 = (T6)(GE_int32(2));
			} else {
				l3 = (T6)(GE_int32(4));
			}
			break;
		case (T6)(T6)(GE_int32(2)):
			t1 = (T2f6(&a1));
			if (t1) {
				l1 = ((T114*)(C))->a2;
				l2 = ((T114*)(C))->a3;
				t4 = ((T11)((((T114*)(C))->a2)*((T11)(GE_nat64(10)))));
				((T114*)(C))->a2 = ((T11)((t4)+(((T114*)(C))->a3)));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T114*)(C))->a3 = (T6f19(&t2));
				t1 = ((((T114*)(C))->a6)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = (T114f14(C));
					((T114*)(C))->a5 = (T199f7(GE_void(t3), ((T114*)(C))->a2, ((T114*)(C))->a3, ((T114*)(C))->a6, ((T114*)(C))->a1));
					t1 = (T114f15(C));
					if (t1) {
						((T114*)(C))->a2 = l1;
						((T114*)(C))->a3 = l2;
						l3 = (T6)(GE_int32(5));
					}
				}
			} else {
				if (((T114*)(C))->a10) {
					t1 = (T17f28(GE_void(((T114*)(C))->a8), a1));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					l3 = (T6)(GE_int32(3));
				} else {
					l3 = (T6)(GE_int32(4));
				}
			}
			break;
		case (T6)(T6)(GE_int32(3)):
			if (((T114*)(C))->a10) {
				t1 = (T17f28(GE_void(((T114*)(C))->a8), a1));
			} else {
				t1 = EIF_FALSE;
			}
			if (t1) {
			} else {
				l3 = (T6)(GE_int32(4));
			}
			break;
		default:
			break;
		}
	}
	((T114*)(C))->a4 = l3;
}

/* STRING_TO_INTEGER_CONVERTOR.overflowed */
T1 T114f15(T0* C)
{
	T1 R = 0;
	if (((T114*)(C))->a5) {
		R = ((((T114*)(C))->a1)==((T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* INTEGER_OVERFLOW_CHECKER.will_overflow */
T1 T199f7(T0* C, T11 a1, T11 a2, T6 a3, T6 a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T11 t3;
	R = ((a3)!=((T6)(GE_int32(0))));
	if (R) {
		t1 = ((a3)==((T6)(GE_int32(1))));
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(2))));
		}
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(3))));
		}
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(4))));
		}
		if (t1) {
			t2 = ((T6)((a4)*((T6)(GE_int32(4)))));
			l1 = ((T6)((t2)+(a3)));
			t3 = (((T257*)(GE_void(((T199*)(C))->a1)))->z2[l1]);
			t1 = (T11f4(&a1, t3));
			if (!(t1)) {
				t3 = (((T257*)(GE_void(((T199*)(C))->a1)))->z2[l1]);
				t1 = ((a1)==(t3));
				if (t1) {
					t3 = (((T257*)(GE_void(((T199*)(C))->a2)))->z2[l1]);
					R = (T11f4(&a2, t3));
				} else {
					R = EIF_FALSE;
				}
			} else {
				R = EIF_TRUE;
			}
		} else {
			l1 = ((T6)((a3)-((T6)(GE_int32(10)))));
			t1 = ((a4)==((T6)(GE_int32(1))));
			if (t1) {
				t1 = (T11f4(&a1, (T11)(GE_nat64(0))));
				if (!(t1)) {
					R = (T11f4(&a2, (T11)(GE_nat64(0))));
				} else {
					R = EIF_TRUE;
				}
			} else {
				t3 = (((T257*)(GE_void(((T199*)(C))->a3)))->z2[l1]);
				t1 = (T11f4(&a1, t3));
				if (!(t1)) {
					t3 = (((T257*)(GE_void(((T199*)(C))->a3)))->z2[l1]);
					t1 = ((a1)==(t3));
					if (t1) {
						t3 = (((T257*)(GE_void(((T199*)(C))->a4)))->z2[l1]);
						R = (T11f4(&a2, t3));
					} else {
						R = EIF_FALSE;
					}
				} else {
					R = EIF_TRUE;
				}
			}
		}
	}
	return R;
}

/* NATURAL_64.infix ">" */
T1 T11f4(T11* C, T11 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.overflow_checker */
unsigned char ge2234os6654 = '\0';
T0* ge2234ov6654;
T0* T114f14(T0* C)
{
	T0* R = 0;
	if (ge2234os6654) {
		return ge2234ov6654;
	} else {
		ge2234os6654 = '\1';
		ge2234ov6654 = R;
	}
	R = T199c13();
	ge2234ov6654 = R;
	return R;
}

/* INTEGER_OVERFLOW_CHECKER.make */
T0* T199c13(void)
{
	T0* C;
	T6 t1;
	T4 t2;
	T11 t3;
	T5 t4;
	T7 t5;
	T8 t6;
	T9 t7;
	T10 t8;
	C = (T0*)GE_alloc(sizeof(T199));
	*(T199*)C = GE_default199;
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T199*)(C))->a1 = T257c2(t1);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T199*)(C))->a2 = T257c2(t1);
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t3 = (T4f3(&t2));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(1))] = (t3);
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t3 = (T4f3(&t2));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(1))] = (t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t3 = (T5f3(&t4));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(2))] = (t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t3 = (T5f3(&t4));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(2))] = (t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t3 = (T6f19(&t1));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(3))] = (t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t3 = (T6f19(&t1));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(3))] = (t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t3 = (T7f3(&t5));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(4))] = (t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t3 = (T7f3(&t5));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(4))] = (t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f3(&t2));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(5))] = (t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f3(&t2));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(5))] = (t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f3(&t4));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(6))] = (t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f3(&t4));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(6))] = (t3);
	t1 = ((T6)(GE_int32(-2147483647)-1));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f19(&t1));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(7))] = (t3);
	t1 = ((T6)(GE_int32(-2147483647)-1));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f19(&t1));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(7))] = (t3);
	t5 = ((T7)(GE_int64(-9223372036854775807)-1));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f3(&t5));
	((T257*)(GE_void(((T199*)(C))->a1)))->z2[(T6)(GE_int32(8))] = (t3);
	t5 = ((T7)(GE_int64(-9223372036854775807)-1));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f3(&t5));
	((T257*)(GE_void(((T199*)(C))->a2)))->z2[(T6)(GE_int32(8))] = (t3);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T199*)(C))->a3 = T257c2(t1);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T199*)(C))->a4 = T257c2(t1);
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)/((T8)(GE_nat8(10)))));
	t3 = (T8f10(&t6));
	((T257*)(GE_void(((T199*)(C))->a3)))->z2[(T6)(GE_int32(1))] = (t3);
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)%((T8)(GE_nat8(10)))));
	t3 = (T8f10(&t6));
	((T257*)(GE_void(((T199*)(C))->a4)))->z2[(T6)(GE_int32(1))] = (t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)/((T9)(GE_nat16(10)))));
	t3 = (T9f3(&t7));
	((T257*)(GE_void(((T199*)(C))->a3)))->z2[(T6)(GE_int32(2))] = (t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)%((T9)(GE_nat16(10)))));
	t3 = (T9f3(&t7));
	((T257*)(GE_void(((T199*)(C))->a4)))->z2[(T6)(GE_int32(2))] = (t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)/((T10)(GE_nat32(10)))));
	t3 = (T10f4(&t8));
	((T257*)(GE_void(((T199*)(C))->a3)))->z2[(T6)(GE_int32(3))] = (t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)%((T10)(GE_nat32(10)))));
	t3 = (T10f4(&t8));
	((T257*)(GE_void(((T199*)(C))->a4)))->z2[(T6)(GE_int32(3))] = (t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)/((T11)(GE_nat64(10)))));
	t3 = (T11f7(&t3));
	((T257*)(GE_void(((T199*)(C))->a3)))->z2[(T6)(GE_int32(4))] = (t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)%((T11)(GE_nat64(10)))));
	t3 = (T11f7(&t3));
	((T257*)(GE_void(((T199*)(C))->a4)))->z2[(T6)(GE_int32(4))] = (t3);
	return C;
}

/* NATURAL_64.to_natural_64 */
T11 T11f7(T11* C)
{
	T11 R = 0;
	R = (*C);
	return R;
}

/* NATURAL_32.to_natural_64 */
T11 T10f4(T10* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* NATURAL_16.to_natural_64 */
T11 T9f3(T9* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* NATURAL_8.to_natural_64 */
T11 T8f10(T8* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_64.to_natural_64 */
T11 T7f3(T7* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_16.to_natural_64 */
T11 T5f3(T5* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_8.to_natural_64 */
T11 T4f3(T4* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* SPECIAL [NATURAL_64].make */
T0* T257c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T257)+a1*sizeof(T11));
	*(T257*)C = GE_default257;
	((T257*)(C))->z1 = a1;
	return C;
}

/* STRING_8.has */
T1 T17f28(T0* C, T2 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T2 t2;
	l2 = ((T17*)(C))->a2;
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l3 = ((T17*)(C))->a1;
		t1 = ((l1)==(l2));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l3)))->z2[l1]);
			t1 = ((t2)==(a1));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t2 = (((T15*)(GE_void(l3)))->z2[l1]);
				t1 = ((t2)==(a1));
			}
		}
		R = ((T1)((l1)<(l2)));
	}
	return R;
}

/* INTEGER_32.to_natural_64 */
T11 T6f19(T6* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* CHARACTER_8.is_digit */
T1 T2f6(T2* C)
{
	T1 R = 0;
	T2 t1;
	T6 t2;
	T8 t3;
	t1 = (*C);
	t2 = ((T6)(t1));
	t3 = (T2f7(C, t2));
	t3 = (T8f1(&t3, (T8)(GE_nat8(0x04))));
	R = (T8f2(&t3, (T8)(GE_nat8(0))));
	return R;
}

/* NATURAL_8.infix ">" */
T1 T8f2(T8* C, T8 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* NATURAL_8.infix "&" */
T8 T8f1(T8* C, T8 a1)
{
	T8 R = 0;
	R = ((T8)((*C)&(a1)));
	return R;
}

/* CHARACTER_8.character_types */
T8 T2f7(T2* C, T6 a1)
{
	T8 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((T1)((a1)<((T6)(GE_int32(256)))));
	if (t1) {
		t2 = (T2f9(C));
		R = (((T243*)(GE_void(t2)))->z2[a1]);
	}
	return R;
}

/* CHARACTER_8.internal_character_types */
unsigned char ge37os93 = '\0';
T0* ge37ov93;
T0* T2f9(T2* C)
{
	T0* R = 0;
	T8 t1;
	if (ge37os93) {
		return ge37ov93;
	} else {
		ge37os93 = '\1';
		ge37ov93 = R;
	}
	R = T243c2((T6)(GE_int32(256)));
	ge37ov93 = R;
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(0))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(1))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(2))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(3))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(4))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(5))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(6))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(7))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(8))] = ((T8)(GE_nat8(0x20)));
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(9))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(10))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(11))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(12))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(13))] = (t1);
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(14))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(15))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(16))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(17))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(18))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(19))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(20))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(21))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(22))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(23))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(24))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(25))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(26))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(27))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(28))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(29))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(30))] = ((T8)(GE_nat8(0x20)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(31))] = ((T8)(GE_nat8(0x20)));
	t1 = (T8)(GE_nat8(0x08));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x80))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(32))] = (t1);
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(33))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(34))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(35))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(36))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(37))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(38))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(39))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(40))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(41))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(42))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(43))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(44))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(45))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(46))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(47))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(48))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(49))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(50))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(51))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(52))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(53))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(54))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(55))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(56))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(57))] = ((T8)(GE_nat8(0x04)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(58))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(59))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(60))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(61))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(62))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(63))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(64))] = ((T8)(GE_nat8(0x10)));
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(65))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(66))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(67))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(68))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(69))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(70))] = (t1);
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(71))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(72))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(73))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(74))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(75))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(76))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(77))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(78))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(79))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(80))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(81))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(82))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(83))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(84))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(85))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(86))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(87))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(88))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(89))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(90))] = ((T8)(GE_nat8(0x01)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(91))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(92))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(93))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(94))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(95))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(96))] = ((T8)(GE_nat8(0x10)));
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(97))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(98))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(99))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(100))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(101))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(102))] = (t1);
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(103))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(104))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(105))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(106))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(107))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(108))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(109))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(110))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(111))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(112))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(113))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(114))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(115))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(116))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(117))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(118))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(119))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(120))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(121))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(122))] = ((T8)(GE_nat8(0x02)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(123))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(124))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(125))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(126))] = ((T8)(GE_nat8(0x10)));
	((T243*)(GE_void(R)))->z2[(T6)(GE_int32(127))] = ((T8)(GE_nat8(0x20)));
	return R;
}

/* NATURAL_8.infix "|" */
T8 T8f3(T8* C, T8 a1)
{
	T8 R = 0;
	R = ((T8)((*C)|(a1)));
	return R;
}

/* SPECIAL [NATURAL_8].make */
T0* T243c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T243)+a1*sizeof(T8));
	*(T243*)C = GE_default243;
	((T243*)(C))->z1 = a1;
	return C;
}

/* STRING_TO_INTEGER_CONVERTOR.reset */
void T114f18(T0* C, T6 a1)
{
	((T114*)(C))->a4 = (T6)(GE_int32(0));
	((T114*)(C))->a2 = (T11)(GE_nat64(0));
	((T114*)(C))->a3 = (T11)(GE_nat64(0));
	((T114*)(C))->a1 = (T6)(GE_int32(0));
	((T114*)(C))->a6 = a1;
	((T114*)(C))->a5 = EIF_FALSE;
}

/* UC_UTF8_STRING.ctoi_convertor */
unsigned char ge2231os1258 = '\0';
T0* ge2231ov1258;
T0* T195f48(T0* C)
{
	T0* R = 0;
	if (ge2231os1258) {
		return ge2231ov1258;
	} else {
		ge2231os1258 = '\1';
		ge2231ov1258 = R;
	}
	R = T114c16();
	ge2231ov1258 = R;
	T114f19(GE_void(R), GE_ms(" ", 1));
	T114f20(GE_void(R), GE_ms(" ", 1));
	T114f21(GE_void(R), EIF_TRUE);
	T114f22(GE_void(R), EIF_TRUE);
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.set_trailing_separators_acceptable */
void T114f22(T0* C, T1 a1)
{
	((T114*)(C))->a10 = a1;
}

/* STRING_TO_INTEGER_CONVERTOR.set_leading_separators_acceptable */
void T114f21(T0* C, T1 a1)
{
	((T114*)(C))->a9 = a1;
}

/* STRING_TO_INTEGER_CONVERTOR.set_trailing_separators */
void T114f20(T0* C, T0* a1)
{
	((T114*)(C))->a8 = T17c47(a1);
}

/* STRING_8.make_from_string */
T0* T17c47(T0* a1)
{
	T0* C;
	T1 t1;
	T0* t2;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	t1 = ((C)!=(a1));
	if (t1) {
		t2 = (((T17*)(a1))->a1);
		((T17*)(C))->a1 = (T15f4(GE_void(t2)));
		((T17*)(C))->a2 = (((T17*)(a1))->a2);
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
	return C;
}

/* STRING_TO_INTEGER_CONVERTOR.set_leading_separators */
void T114f19(T0* C, T0* a1)
{
	((T114*)(C))->a7 = T17c47(a1);
}

/* STRING_TO_INTEGER_CONVERTOR.make */
T0* T114c16(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T114));
	*(T114*)C = GE_default114;
	T114f18(C, (T6)(GE_int32(0)));
	T114f19(C, GE_ms(" ", 1));
	T114f20(C, GE_ms(" ", 1));
	return C;
}

/* STRING_8.to_integer */
T6 T17f15(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 t1;
	l1 = (T17f21(C));
	t1 = ((T6)(GE_int32(0)));
	T114f17(GE_void(l1), C, t1);
	R = (T114f13(GE_void(l1)));
	return R;
}

/* STRING_8.ctoi_convertor */
T0* T17f21(T0* C)
{
	T0* R = 0;
	if (ge2231os1258) {
		return ge2231ov1258;
	} else {
		ge2231os1258 = '\1';
		ge2231ov1258 = R;
	}
	R = T114c16();
	ge2231ov1258 = R;
	T114f19(GE_void(R), GE_ms(" ", 1));
	T114f20(GE_void(R), GE_ms(" ", 1));
	T114f21(GE_void(R), EIF_TRUE);
	T114f22(GE_void(R), EIF_TRUE);
	return R;
}

/* GEANT_EXIT_COMMAND.set_code */
void T386f7(T0* C, T6 a1)
{
	((T386*)(C))->a3 = a1;
}

/* UC_UTF8_STRING.is_integer */
T1 T195f45(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)(GE_int32(3)));
	R = (T195f47(C, t1));
	return R;
}

/* UC_UTF8_STRING.is_valid_integer_or_natural */
T1 T195f47(T0* C, T6 a1)
{
	T1 R = 0;
	T0* l1 = 0;
	l1 = (T195f48(C));
	T114f18(GE_void(l1), a1);
	T114f17(GE_void(l1), C, a1);
	R = (T114f12(GE_void(l1)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.is_integral_integer */
T1 T114f12(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T114*)(C))->a4)==((T6)(GE_int32(2))));
	if (!(t1)) {
		t1 = ((((T114*)(C))->a4)==((T6)(GE_int32(3))));
	}
	if (t1) {
		R = ((T1)(!(((T114*)(C))->a5)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* STRING_8.is_integer */
T1 T17f14(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)(GE_int32(3)));
	R = (T17f20(C, t1));
	return R;
}

/* STRING_8.is_valid_integer_or_natural */
T1 T17f20(T0* C, T6 a1)
{
	T1 R = 0;
	T0* l1 = 0;
	l1 = (T17f21(C));
	T114f18(GE_void(l1), a1);
	T114f17(GE_void(l1), C, a1);
	R = (T114f12(GE_void(l1)));
	return R;
}

/* GEANT_EXIT_TASK.attribute_value */
T0* T302f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T302*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T302f18(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T302f18(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T302f6(C));
		t4 = (((T22*)(GE_void(((T302*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T302f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_EXIT_TASK.project_variables_resolver */
T0* T302f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_EXIT_TASK.target_arguments_stack */
T0* T302f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_EXIT_TASK.has_attribute */
T1 T302f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T302*)(C))->a3), a1));
	return R;
}

/* GEANT_EXIT_TASK.code_attribute_name */
unsigned char ge102os9122 = '\0';
T0* ge102ov9122;
T0* T302f12(T0* C)
{
	T0* R = 0;
	if (ge102os9122) {
		return ge102ov9122;
	} else {
		ge102os9122 = '\1';
		ge102ov9122 = R;
	}
	R = GE_ms("code", 4);
	ge102ov9122 = R;
	return R;
}

/* GEANT_EXIT_TASK.task_make */
void T302f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T302f26(C, a1);
	t1 = (((T386*)(GE_void(a1)))->a2);
	T302f27(C, t1, a2);
}

/* GEANT_EXIT_TASK.interpreting_element_make */
void T302f27(T0* C, T0* a1, T0* a2)
{
	T302f28(C, a2);
	T302f29(C, a1);
}

/* GEANT_EXIT_TASK.set_project */
void T302f29(T0* C, T0* a1)
{
	((T302*)(C))->a2 = a1;
}

/* GEANT_EXIT_TASK.element_make */
void T302f28(T0* C, T0* a1)
{
	T302f30(C, a1);
}

/* GEANT_EXIT_TASK.set_xml_element */
void T302f30(T0* C, T0* a1)
{
	((T302*)(C))->a3 = a1;
}

/* GEANT_EXIT_TASK.set_command */
void T302f26(T0* C, T0* a1)
{
	((T302*)(C))->a1 = a1;
}

/* GEANT_EXIT_COMMAND.make */
T0* T386c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T386));
	*(T386*)C = GE_default386;
	T386f9(C, a1);
	return C;
}

/* GEANT_EXIT_COMMAND.set_project */
void T386f9(T0* C, T0* a1)
{
	((T386*)(C))->a2 = a1;
}

/* GEANT_TARGET.exit_task_name */
unsigned char ge130os2422 = '\0';
T0* ge130ov2422;
T0* T26f68(T0* C)
{
	T0* R = 0;
	if (ge130os2422) {
		return ge130ov2422;
	} else {
		ge130os2422 = '\1';
		ge130ov2422 = R;
	}
	R = GE_ms("exit", 4);
	ge130ov2422 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.make */
T0* T301c27(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T301));
	*(T301*)C = GE_default301;
	((T301*)(C))->a1 = T385c19(a1);
	T301f29(C, ((T301*)(C))->a1, a2);
	t1 = (T301f12(C));
	t2 = (T301f9(C, t1));
	if (t2) {
		t1 = (T301f12(C));
		l1 = (T301f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T385f20(GE_void(((T301*)(C))->a1), l1);
		}
	}
	t1 = (T301f14(C));
	t2 = (T301f9(C, t1));
	if (t2) {
		t1 = (T301f14(C));
		l1 = (T301f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T385f21(GE_void(((T301*)(C))->a1), l1);
		}
	}
	T385f22(GE_void(((T301*)(C))->a1), GE_ms("true", 4));
	t1 = (T301f15(C));
	t2 = (T301f9(C, t1));
	if (t2) {
		t1 = (T301f15(C));
		l1 = (T301f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T385f22(GE_void(((T301*)(C))->a1), l1);
		}
	}
	T385f23(GE_void(((T301*)(C))->a1), GE_ms("false", 5));
	t1 = (T301f16(C));
	t2 = (T301f9(C, t1));
	if (t2) {
		t1 = (T301f16(C));
		l1 = (T301f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T385f23(GE_void(((T301*)(C))->a1), l1);
		}
	}
	t1 = (T301f17(C));
	t2 = (T301f9(C, t1));
	if (t2) {
		t1 = (T301f17(C));
		l1 = (T301f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T385f24(GE_void(((T301*)(C))->a1), l1);
		}
	}
	t1 = (T301f18(C));
	l2 = (T97f16(GE_void(((T301*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T301*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T385f25(GE_void(((T301*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_OUTOFDATE_COMMAND.set_fileset */
void T385f25(T0* C, T0* a1)
{
	((T385*)(C))->a5 = a1;
}

/* GEANT_OUTOFDATE_TASK.fileset_element_name */
unsigned char ge115os9101 = '\0';
T0* ge115ov9101;
T0* T301f18(T0* C)
{
	T0* R = 0;
	if (ge115os9101) {
		return ge115ov9101;
	} else {
		ge115os9101 = '\1';
		ge115ov9101 = R;
	}
	R = GE_ms("fileset", 7);
	ge115ov9101 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_variable_name */
void T385f24(T0* C, T0* a1)
{
	((T385*)(C))->a8 = a1;
}

/* GEANT_OUTOFDATE_TASK.variable_attribute_name */
unsigned char ge115os9098 = '\0';
T0* ge115ov9098;
T0* T301f17(T0* C)
{
	T0* R = 0;
	if (ge115os9098) {
		return ge115ov9098;
	} else {
		ge115os9098 = '\1';
		ge115ov9098 = R;
	}
	R = GE_ms("variable", 8);
	ge115ov9098 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.false_value_attribute_name */
unsigned char ge115os9100 = '\0';
T0* ge115ov9100;
T0* T301f16(T0* C)
{
	T0* R = 0;
	if (ge115os9100) {
		return ge115ov9100;
	} else {
		ge115os9100 = '\1';
		ge115ov9100 = R;
	}
	R = GE_ms("false_value", 11);
	ge115ov9100 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_false_value */
void T385f23(T0* C, T0* a1)
{
	((T385*)(C))->a7 = a1;
}

/* GEANT_OUTOFDATE_TASK.true_value_attribute_name */
unsigned char ge115os9099 = '\0';
T0* ge115ov9099;
T0* T301f15(T0* C)
{
	T0* R = 0;
	if (ge115os9099) {
		return ge115ov9099;
	} else {
		ge115os9099 = '\1';
		ge115ov9099 = R;
	}
	R = GE_ms("true_value", 10);
	ge115ov9099 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_true_value */
void T385f22(T0* C, T0* a1)
{
	((T385*)(C))->a6 = a1;
}

/* GEANT_OUTOFDATE_COMMAND.set_target_filename */
void T385f21(T0* C, T0* a1)
{
	((T385*)(C))->a4 = a1;
}

/* GEANT_OUTOFDATE_TASK.target_attribute_name */
unsigned char ge115os9097 = '\0';
T0* ge115ov9097;
T0* T301f14(T0* C)
{
	T0* R = 0;
	if (ge115os9097) {
		return ge115ov9097;
	} else {
		ge115os9097 = '\1';
		ge115ov9097 = R;
	}
	R = GE_ms("target", 6);
	ge115ov9097 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_source_filename */
void T385f20(T0* C, T0* a1)
{
	((T385*)(C))->a3 = a1;
}

/* GEANT_OUTOFDATE_TASK.attribute_value */
T0* T301f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T301*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T301f23(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T301f23(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T301f6(C));
		t4 = (((T22*)(GE_void(((T301*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T301f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_OUTOFDATE_TASK.project_variables_resolver */
T0* T301f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.target_arguments_stack */
T0* T301f23(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.has_attribute */
T1 T301f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T301*)(C))->a3), a1));
	return R;
}

/* GEANT_OUTOFDATE_TASK.source_attribute_name */
unsigned char ge115os9096 = '\0';
T0* ge115ov9096;
T0* T301f12(T0* C)
{
	T0* R = 0;
	if (ge115os9096) {
		return ge115ov9096;
	} else {
		ge115os9096 = '\1';
		ge115ov9096 = R;
	}
	R = GE_ms("source", 6);
	ge115ov9096 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.task_make */
void T301f29(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T301f31(C, a1);
	t1 = (((T385*)(GE_void(a1)))->a2);
	T301f32(C, t1, a2);
}

/* GEANT_OUTOFDATE_TASK.interpreting_element_make */
void T301f32(T0* C, T0* a1, T0* a2)
{
	T301f33(C, a2);
	T301f34(C, a1);
}

/* GEANT_OUTOFDATE_TASK.set_project */
void T301f34(T0* C, T0* a1)
{
	((T301*)(C))->a2 = a1;
}

/* GEANT_OUTOFDATE_TASK.element_make */
void T301f33(T0* C, T0* a1)
{
	T301f35(C, a1);
}

/* GEANT_OUTOFDATE_TASK.set_xml_element */
void T301f35(T0* C, T0* a1)
{
	((T301*)(C))->a3 = a1;
}

/* GEANT_OUTOFDATE_TASK.set_command */
void T301f31(T0* C, T0* a1)
{
	((T301*)(C))->a1 = a1;
}

/* GEANT_OUTOFDATE_COMMAND.make */
T0* T385c19(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T385));
	*(T385*)C = GE_default385;
	T385f27(C, a1);
	return C;
}

/* GEANT_OUTOFDATE_COMMAND.set_project */
void T385f27(T0* C, T0* a1)
{
	((T385*)(C))->a2 = a1;
}

/* GEANT_TARGET.outofdate_task_name */
unsigned char ge130os2421 = '\0';
T0* ge130ov2421;
T0* T26f67(T0* C)
{
	T0* R = 0;
	if (ge130os2421) {
		return ge130ov2421;
	} else {
		ge130os2421 = '\1';
		ge130ov2421 = R;
	}
	R = GE_ms("outofdate", 9);
	ge130ov2421 = R;
	return R;
}

/* GEANT_XSLT_TASK.make */
T0* T300c40(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T1 l9 = 0;
	T1 l10 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	T6 t4;
	C = (T0*)GE_alloc(sizeof(T300));
	*(T300*)C = GE_default300;
	((T300*)(C))->a1 = T382c25(a1);
	T300f42(C, ((T300*)(C))->a1, a2);
	t1 = (T300f12(C));
	t2 = (T300f9(C, t1));
	if (t2) {
		t1 = (T300f12(C));
		l2 = (T300f13(C, t1));
		t1 = (T300f14(C));
		t3 = (T300f15(C));
		t2 = (T76f1(GE_void(t1), l2, t3));
		if (t2) {
			l7 = EIF_TRUE;
			T382f26(GE_void(((T300*)(C))->a1));
		} else {
			t1 = (T300f14(C));
			t3 = (T300f16(C));
			t2 = (T76f1(GE_void(t1), l2, t3));
			if (t2) {
				l8 = EIF_TRUE;
				T382f27(GE_void(((T300*)(C))->a1));
			} else {
				t1 = (T300f14(C));
				t3 = (T300f17(C));
				t2 = (T76f1(GE_void(t1), l2, t3));
				if (t2) {
					l9 = EIF_TRUE;
					T382f28(GE_void(((T300*)(C))->a1));
				} else {
					t1 = (T300f14(C));
					t3 = (T300f18(C));
					t2 = (T76f1(GE_void(t1), l2, t3));
					if (t2) {
						l10 = EIF_TRUE;
						T382f29(GE_void(((T300*)(C))->a1));
					}
				}
			}
		}
	}
	t1 = (T300f19(C));
	t2 = (T300f9(C, t1));
	if (t2) {
		t1 = (T300f19(C));
		l2 = (T300f13(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T382f30(GE_void(((T300*)(C))->a1), l2);
		}
	}
	t1 = (T300f20(C));
	t2 = (T300f9(C, t1));
	if (t2) {
		t1 = (T300f20(C));
		l2 = (T300f13(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T382f31(GE_void(((T300*)(C))->a1), l2);
		}
	}
	t1 = (T300f21(C));
	t2 = (T300f9(C, t1));
	if (t2) {
		t1 = (T300f21(C));
		l2 = (T300f13(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T382f32(GE_void(((T300*)(C))->a1), l2);
		}
	}
	t1 = (T300f22(C));
	t2 = (T300f9(C, t1));
	if (t2) {
		t1 = (T300f22(C));
		t2 = (T300f23(C, t1));
		T382f33(GE_void(((T300*)(C))->a1), t2);
	}
	if (!(l8)) {
		t2 = (l7);
	} else {
		t2 = EIF_TRUE;
	}
	if (t2) {
		t1 = (T300f24(C));
		t2 = (T300f9(C, t1));
		if (t2) {
			t1 = (T300f24(C));
			l2 = (T300f13(C, t1));
			t2 = (((((T0*)(GE_void(l2)))->id==17)?T17f14(l2):T195f45(l2)));
			if (t2) {
				T382f34(GE_void(((T300*)(C))->a1), l2);
			}
		}
	}
	t1 = (T300f25(C));
	l3 = (T300f26(C, t1));
	l4 = (T116f5(GE_void(l3)));
	T117f8(GE_void(l4));
	t2 = (((T117*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l4)));
		l5 = T367c16(((T300*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l5)));
		if (t2) {
			t2 = (T367f10(GE_void(l5)));
		}
		if (t2) {
			t2 = (T367f3(GE_void(l5)));
		}
		if (t2) {
			l1 = (T367f4(GE_void(l5)));
			l2 = (T367f5(GE_void(l5)));
			l6 = T383c3(l1, l2);
			t1 = (((T382*)(GE_void(((T300*)(C))->a1)))->a2);
			T384f11(GE_void(t1), l6);
		}
		T117f9(GE_void(l4));
		t2 = (((T117*)(GE_void(l4)))->a1);
	}
	if (l8) {
		t1 = (T300f27(C));
		t2 = (T300f9(C, t1));
		if (t2) {
			t1 = (T300f27(C));
			l2 = (T300f13(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T382f35(GE_void(((T300*)(C))->a1), l2);
			}
		}
		t1 = (T300f28(C));
		t2 = (T300f9(C, t1));
		if (t2) {
			t1 = (T300f28(C));
			l2 = (T300f13(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T382f36(GE_void(((T300*)(C))->a1), l2);
			}
		}
		t1 = (T300f29(C));
		t2 = (T300f9(C, t1));
		if (t2) {
			t1 = (T300f29(C));
			l2 = (T300f13(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T382f37(GE_void(((T300*)(C))->a1), l2);
			}
		}
	}
	return C;
}

/* GEANT_XSLT_COMMAND.set_classpath */
void T382f37(T0* C, T0* a1)
{
	((T382*)(C))->a12 = a1;
}

/* GEANT_XSLT_TASK.classpath_attribute_name */
unsigned char ge124os9056 = '\0';
T0* ge124ov9056;
T0* T300f29(T0* C)
{
	T0* R = 0;
	if (ge124os9056) {
		return ge124ov9056;
	} else {
		ge124os9056 = '\1';
		ge124ov9056 = R;
	}
	R = GE_ms("classpath", 9);
	ge124ov9056 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_extdirs */
void T382f36(T0* C, T0* a1)
{
	((T382*)(C))->a11 = a1;
}

/* GEANT_XSLT_TASK.extdirs_attribute_name */
unsigned char ge124os9055 = '\0';
T0* ge124ov9055;
T0* T300f28(T0* C)
{
	T0* R = 0;
	if (ge124os9055) {
		return ge124ov9055;
	} else {
		ge124os9055 = '\1';
		ge124ov9055 = R;
	}
	R = GE_ms("extdirs", 7);
	ge124ov9055 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_format */
void T382f35(T0* C, T0* a1)
{
	((T382*)(C))->a10 = a1;
}

/* GEANT_XSLT_TASK.format_attribute_name */
unsigned char ge124os9053 = '\0';
T0* ge124ov9053;
T0* T300f27(T0* C)
{
	T0* R = 0;
	if (ge124os9053) {
		return ge124ov9053;
	} else {
		ge124os9053 = '\1';
		ge124ov9053 = R;
	}
	R = GE_ms("format", 6);
	ge124ov9053 = R;
	return R;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].force_last */
void T384f11(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T384f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T384*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T384f9(C, t2));
		T384f12(C, t2);
	}
	((T384*)(C))->a1 = ((T6)((((T384*)(C))->a1)+((T6)(GE_int32(1)))));
	((T422*)(GE_void(((T384*)(C))->a2)))->z2[((T384*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].resize */
void T384f12(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T384*)(C))->a2 = (T423f2(GE_void(((T384*)(C))->a3), ((T384*)(C))->a2, t1));
	((T384*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].resize */
T0* T423f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T422*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T422f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].resized_area */
T0* T422f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T422c4(a1);
	t1 = (((T422*)(C))->z1);
	T422f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].copy_data */
void T422f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T422f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T422*)(a1))->z2[l1]);
			((T422*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].move_data */
void T422f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T422f8(C, a1, a2, a3);
			} else {
				T422f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T422f8(C, a1, a2, a3);
			} else {
				T422f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].overlapping_move */
void T422f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T422*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T422*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T422*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T422*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].non_overlapping_move */
void T422f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T422*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T422*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].make */
T0* T422c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T422)+a1*sizeof(T0*));
	*(T422*)C = GE_default422;
	((T422*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].new_capacity */
T6 T384f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].extendible */
T1 T384f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T384*)(C))->a1)+(a1)));
	R = (T6f5(&(((T384*)(C))->a4), t1));
	return R;
}

/* DS_PAIR [STRING_8, STRING_8].make */
T0* T383c3(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T383));
	*(T383*)C = GE_default383;
	((T383*)(C))->a1 = a1;
	((T383*)(C))->a2 = a2;
	return C;
}

/* GEANT_DEFINE_ELEMENT.has_value */
T1 T367f3(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T367f12(C));
	R = (T367f9(C, t1));
	return R;
}

/* GEANT_XSLT_TASK.elements_by_name */
T0* T300f26(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T300*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T300f14(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_XSLT_TASK.parameter_element_name */
unsigned char ge124os9057 = '\0';
T0* ge124ov9057;
T0* T300f25(T0* C)
{
	T0* R = 0;
	if (ge124os9057) {
		return ge124ov9057;
	} else {
		ge124os9057 = '\1';
		ge124ov9057 = R;
	}
	R = GE_ms("parameter", 9);
	ge124ov9057 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_indent */
void T382f34(T0* C, T0* a1)
{
	((T382*)(C))->a9 = a1;
}

/* GEANT_XSLT_TASK.indent_attribute_name */
unsigned char ge124os9054 = '\0';
T0* ge124ov9054;
T0* T300f24(T0* C)
{
	T0* R = 0;
	if (ge124os9054) {
		return ge124ov9054;
	} else {
		ge124os9054 = '\1';
		ge124ov9054 = R;
	}
	R = GE_ms("indent", 6);
	ge124ov9054 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_force */
void T382f33(T0* C, T1 a1)
{
	((T382*)(C))->a8 = a1;
}

/* GEANT_XSLT_TASK.boolean_value */
T1 T300f23(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T300f13(C, a1));
	t1 = (T300f14(C));
	t2 = (T300f35(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T300f14(C));
		t2 = (T300f36(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T300f32(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T300f32(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T300f32(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T300f32(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T300f32(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_XSLT_TASK.std */
T0* T300f32(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_XSLT_TASK.false_attribute_value */
T0* T300f36(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_XSLT_TASK.true_attribute_value */
T0* T300f35(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_XSLT_TASK.force_attribute_name */
unsigned char ge124os9047 = '\0';
T0* ge124ov9047;
T0* T300f22(T0* C)
{
	T0* R = 0;
	if (ge124os9047) {
		return ge124ov9047;
	} else {
		ge124os9047 = '\1';
		ge124ov9047 = R;
	}
	R = GE_ms("force", 5);
	ge124ov9047 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_stylesheet_filename */
void T382f32(T0* C, T0* a1)
{
	((T382*)(C))->a6 = a1;
}

/* GEANT_XSLT_TASK.stylesheet_filename_attribute_name */
unsigned char ge124os9046 = '\0';
T0* ge124ov9046;
T0* T300f21(T0* C)
{
	T0* R = 0;
	if (ge124os9046) {
		return ge124ov9046;
	} else {
		ge124os9046 = '\1';
		ge124ov9046 = R;
	}
	R = GE_ms("stylesheet", 10);
	ge124ov9046 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_output_filename */
void T382f31(T0* C, T0* a1)
{
	((T382*)(C))->a5 = a1;
}

/* GEANT_XSLT_TASK.output_filename_attribute_name */
unsigned char ge124os9045 = '\0';
T0* ge124ov9045;
T0* T300f20(T0* C)
{
	T0* R = 0;
	if (ge124os9045) {
		return ge124ov9045;
	} else {
		ge124os9045 = '\1';
		ge124ov9045 = R;
	}
	R = GE_ms("output", 6);
	ge124ov9045 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_input_filename */
void T382f30(T0* C, T0* a1)
{
	((T382*)(C))->a4 = a1;
}

/* GEANT_XSLT_TASK.input_filename_attribute_name */
unsigned char ge124os9044 = '\0';
T0* ge124ov9044;
T0* T300f19(T0* C)
{
	T0* R = 0;
	if (ge124os9044) {
		return ge124ov9044;
	} else {
		ge124os9044 = '\1';
		ge124ov9044 = R;
	}
	R = GE_ms("input", 5);
	ge124ov9044 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_gexslt */
void T382f29(T0* C)
{
	T382f40(C, (T6)(GE_int32(4)));
}

/* GEANT_XSLT_COMMAND.set_processor */
void T382f40(T0* C, T6 a1)
{
	((T382*)(C))->a7 = a1;
}

/* GEANT_XSLT_TASK.processor_attribute_value_gexslt */
unsigned char ge124os9052 = '\0';
T0* ge124ov9052;
T0* T300f18(T0* C)
{
	T0* R = 0;
	if (ge124os9052) {
		return ge124ov9052;
	} else {
		ge124os9052 = '\1';
		ge124ov9052 = R;
	}
	R = GE_ms("gexslt", 6);
	ge124ov9052 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xsltproc */
void T382f28(T0* C)
{
	T382f40(C, (T6)(GE_int32(3)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xsltproc */
unsigned char ge124os9051 = '\0';
T0* ge124ov9051;
T0* T300f17(T0* C)
{
	T0* R = 0;
	if (ge124os9051) {
		return ge124ov9051;
	} else {
		ge124os9051 = '\1';
		ge124ov9051 = R;
	}
	R = GE_ms("xsltproc", 8);
	ge124ov9051 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xalan_java */
void T382f27(T0* C)
{
	T382f40(C, (T6)(GE_int32(2)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xalan_java */
unsigned char ge124os9050 = '\0';
T0* ge124ov9050;
T0* T300f16(T0* C)
{
	T0* R = 0;
	if (ge124os9050) {
		return ge124ov9050;
	} else {
		ge124os9050 = '\1';
		ge124ov9050 = R;
	}
	R = GE_ms("xalan_java", 10);
	ge124ov9050 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xalan_cpp */
void T382f26(T0* C)
{
	T382f40(C, (T6)(GE_int32(1)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xalan_cpp */
unsigned char ge124os9049 = '\0';
T0* ge124ov9049;
T0* T300f15(T0* C)
{
	T0* R = 0;
	if (ge124os9049) {
		return ge124ov9049;
	} else {
		ge124os9049 = '\1';
		ge124ov9049 = R;
	}
	R = GE_ms("xalan_cpp", 9);
	ge124ov9049 = R;
	return R;
}

/* GEANT_XSLT_TASK.string_ */
T0* T300f14(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_XSLT_TASK.attribute_value */
T0* T300f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T300*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T300f34(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T300f34(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T300f6(C));
		t4 = (((T22*)(GE_void(((T300*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T300f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_XSLT_TASK.project_variables_resolver */
T0* T300f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_XSLT_TASK.target_arguments_stack */
T0* T300f34(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_XSLT_TASK.has_attribute */
T1 T300f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T300*)(C))->a3), a1));
	return R;
}

/* GEANT_XSLT_TASK.processor_attribute_name */
unsigned char ge124os9048 = '\0';
T0* ge124ov9048;
T0* T300f12(T0* C)
{
	T0* R = 0;
	if (ge124os9048) {
		return ge124ov9048;
	} else {
		ge124os9048 = '\1';
		ge124ov9048 = R;
	}
	R = GE_ms("processor", 9);
	ge124ov9048 = R;
	return R;
}

/* GEANT_XSLT_TASK.task_make */
void T300f42(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T300f44(C, a1);
	t1 = (((T382*)(GE_void(a1)))->a3);
	T300f45(C, t1, a2);
}

/* GEANT_XSLT_TASK.interpreting_element_make */
void T300f45(T0* C, T0* a1, T0* a2)
{
	T300f46(C, a2);
	T300f47(C, a1);
}

/* GEANT_XSLT_TASK.set_project */
void T300f47(T0* C, T0* a1)
{
	((T300*)(C))->a2 = a1;
}

/* GEANT_XSLT_TASK.element_make */
void T300f46(T0* C, T0* a1)
{
	T300f48(C, a1);
}

/* GEANT_XSLT_TASK.set_xml_element */
void T300f48(T0* C, T0* a1)
{
	((T300*)(C))->a3 = a1;
}

/* GEANT_XSLT_TASK.set_command */
void T300f44(T0* C, T0* a1)
{
	((T300*)(C))->a1 = a1;
}

/* GEANT_XSLT_COMMAND.make */
T0* T382c25(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T382));
	*(T382*)C = GE_default382;
	T382f25p1(C, a1);
	((T382*)(C))->a4 = GE_ms("", 0);
	((T382*)(C))->a5 = GE_ms("", 0);
	((T382*)(C))->a7 = (T6)(GE_int32(1));
	T382f34(C, GE_ms("4", 1));
	((T382*)(C))->a2 = T384c10((T6)(GE_int32(10)));
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].make */
T0* T384c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T384));
	*(T384*)C = GE_default384;
	((T384*)(C))->a3 = T423c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T384*)(C))->a2 = (T423f1(GE_void(((T384*)(C))->a3), t1));
	((T384*)(C))->a4 = a1;
	((T384*)(C))->a5 = (T384f7(C));
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].new_cursor */
T0* T384f7(T0* C)
{
	T0* R = 0;
	R = T424c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [DS_PAIR [STRING_8, STRING_8]].make */
T0* T424c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T424));
	*(T424*)C = GE_default424;
	((T424*)(C))->a1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].make */
T0* T423f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T444c2(a1);
	R = (((T444*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [DS_PAIR [STRING_8, STRING_8]].make_area */
T0* T444c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T444));
	*(T444*)C = GE_default444;
	((T444*)(C))->a1 = T422c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].default_create */
T0* T423c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T423));
	*(T423*)C = GE_default423;
	return C;
}

/* GEANT_XSLT_COMMAND.make */
void T382f25p1(T0* C, T0* a1)
{
	T382f39(C, a1);
}

/* GEANT_XSLT_COMMAND.set_project */
void T382f39(T0* C, T0* a1)
{
	((T382*)(C))->a3 = a1;
}

/* GEANT_TARGET.xslt_task_name */
unsigned char ge130os2420 = '\0';
T0* ge130ov2420;
T0* T26f66(T0* C)
{
	T0* R = 0;
	if (ge130os2420) {
		return ge130ov2420;
	} else {
		ge130os2420 = '\1';
		ge130ov2420 = R;
	}
	R = GE_ms("xslt", 4);
	ge130ov2420 = R;
	return R;
}

/* GEANT_SETENV_TASK.make */
T0* T299c23(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T299));
	*(T299*)C = GE_default299;
	((T299*)(C))->a1 = T381c8(a1);
	T299f25(C, ((T299*)(C))->a1, a2);
	t1 = (T299f12(C));
	t2 = (T299f9(C, t1));
	if (t2) {
		t1 = (T299f12(C));
		l1 = (T299f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T381f9(GE_void(((T299*)(C))->a1), l1);
		}
	}
	t1 = (T299f14(C));
	t2 = (T299f9(C, t1));
	if (t2) {
		t1 = (T299f14(C));
		l1 = (T299f13(C, t1));
		T381f10(GE_void(((T299*)(C))->a1), l1);
	}
	return C;
}

/* GEANT_SETENV_COMMAND.set_value */
void T381f10(T0* C, T0* a1)
{
	((T381*)(C))->a4 = a1;
}

/* GEANT_SETENV_TASK.value_attribute_name */
unsigned char ge118os9034 = '\0';
T0* ge118ov9034;
T0* T299f14(T0* C)
{
	T0* R = 0;
	if (ge118os9034) {
		return ge118ov9034;
	} else {
		ge118os9034 = '\1';
		ge118ov9034 = R;
	}
	R = GE_ms("value", 5);
	ge118ov9034 = R;
	return R;
}

/* GEANT_SETENV_COMMAND.set_name */
void T381f9(T0* C, T0* a1)
{
	((T381*)(C))->a3 = a1;
}

/* GEANT_SETENV_TASK.attribute_value */
T0* T299f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T299*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T299f19(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T299f19(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T299f6(C));
		t4 = (((T22*)(GE_void(((T299*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T299f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SETENV_TASK.project_variables_resolver */
T0* T299f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_SETENV_TASK.target_arguments_stack */
T0* T299f19(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_SETENV_TASK.has_attribute */
T1 T299f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T299*)(C))->a3), a1));
	return R;
}

/* GEANT_SETENV_TASK.name_attribute_name */
unsigned char ge118os9033 = '\0';
T0* ge118ov9033;
T0* T299f12(T0* C)
{
	T0* R = 0;
	if (ge118os9033) {
		return ge118ov9033;
	} else {
		ge118os9033 = '\1';
		ge118ov9033 = R;
	}
	R = GE_ms("name", 4);
	ge118ov9033 = R;
	return R;
}

/* GEANT_SETENV_TASK.task_make */
void T299f25(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T299f27(C, a1);
	t1 = (((T381*)(GE_void(a1)))->a2);
	T299f28(C, t1, a2);
}

/* GEANT_SETENV_TASK.interpreting_element_make */
void T299f28(T0* C, T0* a1, T0* a2)
{
	T299f29(C, a2);
	T299f30(C, a1);
}

/* GEANT_SETENV_TASK.set_project */
void T299f30(T0* C, T0* a1)
{
	((T299*)(C))->a2 = a1;
}

/* GEANT_SETENV_TASK.element_make */
void T299f29(T0* C, T0* a1)
{
	T299f31(C, a1);
}

/* GEANT_SETENV_TASK.set_xml_element */
void T299f31(T0* C, T0* a1)
{
	((T299*)(C))->a3 = a1;
}

/* GEANT_SETENV_TASK.set_command */
void T299f27(T0* C, T0* a1)
{
	((T299*)(C))->a1 = a1;
}

/* GEANT_SETENV_COMMAND.make */
T0* T381c8(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T381));
	*(T381*)C = GE_default381;
	T381f12(C, a1);
	return C;
}

/* GEANT_SETENV_COMMAND.set_project */
void T381f12(T0* C, T0* a1)
{
	((T381*)(C))->a2 = a1;
}

/* GEANT_TARGET.setenv_task_name */
unsigned char ge130os2419 = '\0';
T0* ge130ov2419;
T0* T26f65(T0* C)
{
	T0* R = 0;
	if (ge130os2419) {
		return ge130ov2419;
	} else {
		ge130os2419 = '\1';
		ge130ov2419 = R;
	}
	R = GE_ms("setenv", 6);
	ge130ov2419 = R;
	return R;
}

/* GEANT_MOVE_TASK.make */
T0* T298c25(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T298));
	*(T298*)C = GE_default298;
	((T298*)(C))->a1 = T380c16(a1);
	T298f27(C, ((T298*)(C))->a1, a2);
	t1 = (T298f12(C));
	t2 = (T298f9(C, t1));
	if (t2) {
		t1 = (T298f12(C));
		l1 = (T298f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T380f17(GE_void(((T298*)(C))->a1), l1);
		}
	}
	t1 = (T298f14(C));
	t2 = (T298f9(C, t1));
	if (t2) {
		t1 = (T298f14(C));
		l1 = (T298f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T380f18(GE_void(((T298*)(C))->a1), l1);
		}
	}
	t1 = (T298f15(C));
	t2 = (T298f9(C, t1));
	if (t2) {
		t1 = (T298f15(C));
		l1 = (T298f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T380f19(GE_void(((T298*)(C))->a1), l1);
		}
	}
	t1 = (T298f16(C));
	l2 = (T97f16(GE_void(((T298*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T298*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T380f20(GE_void(((T298*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_MOVE_COMMAND.set_fileset */
void T380f20(T0* C, T0* a1)
{
	((T380*)(C))->a6 = a1;
}

/* GEANT_MOVE_TASK.fileset_element_name */
unsigned char ge114os9015 = '\0';
T0* ge114ov9015;
T0* T298f16(T0* C)
{
	T0* R = 0;
	if (ge114os9015) {
		return ge114ov9015;
	} else {
		ge114os9015 = '\1';
		ge114ov9015 = R;
	}
	R = GE_ms("fileset", 7);
	ge114ov9015 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_to_directory */
void T380f19(T0* C, T0* a1)
{
	((T380*)(C))->a5 = a1;
}

/* GEANT_MOVE_TASK.to_directory_attribute_name */
unsigned char ge114os9014 = '\0';
T0* ge114ov9014;
T0* T298f15(T0* C)
{
	T0* R = 0;
	if (ge114os9014) {
		return ge114ov9014;
	} else {
		ge114os9014 = '\1';
		ge114ov9014 = R;
	}
	R = GE_ms("to_directory", 12);
	ge114ov9014 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_to_file */
void T380f18(T0* C, T0* a1)
{
	((T380*)(C))->a4 = a1;
}

/* GEANT_MOVE_TASK.to_file_attribute_name */
unsigned char ge114os9013 = '\0';
T0* ge114ov9013;
T0* T298f14(T0* C)
{
	T0* R = 0;
	if (ge114os9013) {
		return ge114ov9013;
	} else {
		ge114os9013 = '\1';
		ge114ov9013 = R;
	}
	R = GE_ms("to_file", 7);
	ge114ov9013 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_file */
void T380f17(T0* C, T0* a1)
{
	((T380*)(C))->a3 = a1;
}

/* GEANT_MOVE_TASK.attribute_value */
T0* T298f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T298*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T298f21(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T298f21(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T298f6(C));
		t4 = (((T22*)(GE_void(((T298*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T298f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MOVE_TASK.project_variables_resolver */
T0* T298f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_MOVE_TASK.target_arguments_stack */
T0* T298f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_MOVE_TASK.has_attribute */
T1 T298f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T298*)(C))->a3), a1));
	return R;
}

/* GEANT_MOVE_TASK.file_attribute_name */
unsigned char ge114os9012 = '\0';
T0* ge114ov9012;
T0* T298f12(T0* C)
{
	T0* R = 0;
	if (ge114os9012) {
		return ge114ov9012;
	} else {
		ge114os9012 = '\1';
		ge114ov9012 = R;
	}
	R = GE_ms("file", 4);
	ge114ov9012 = R;
	return R;
}

/* GEANT_MOVE_TASK.task_make */
void T298f27(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T298f29(C, a1);
	t1 = (((T380*)(GE_void(a1)))->a2);
	T298f30(C, t1, a2);
}

/* GEANT_MOVE_TASK.interpreting_element_make */
void T298f30(T0* C, T0* a1, T0* a2)
{
	T298f31(C, a2);
	T298f32(C, a1);
}

/* GEANT_MOVE_TASK.set_project */
void T298f32(T0* C, T0* a1)
{
	((T298*)(C))->a2 = a1;
}

/* GEANT_MOVE_TASK.element_make */
void T298f31(T0* C, T0* a1)
{
	T298f33(C, a1);
}

/* GEANT_MOVE_TASK.set_xml_element */
void T298f33(T0* C, T0* a1)
{
	((T298*)(C))->a3 = a1;
}

/* GEANT_MOVE_TASK.set_command */
void T298f29(T0* C, T0* a1)
{
	((T298*)(C))->a1 = a1;
}

/* GEANT_MOVE_COMMAND.make */
T0* T380c16(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T380));
	*(T380*)C = GE_default380;
	T380f22(C, a1);
	return C;
}

/* GEANT_MOVE_COMMAND.set_project */
void T380f22(T0* C, T0* a1)
{
	((T380*)(C))->a2 = a1;
}

/* GEANT_TARGET.move_task_name */
unsigned char ge130os2418 = '\0';
T0* ge130ov2418;
T0* T26f64(T0* C)
{
	T0* R = 0;
	if (ge130os2418) {
		return ge130ov2418;
	} else {
		ge130os2418 = '\1';
		ge130ov2418 = R;
	}
	R = GE_ms("move", 4);
	ge130ov2418 = R;
	return R;
}

/* GEANT_COPY_TASK.make */
T0* T297c30(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T297));
	*(T297*)C = GE_default297;
	((T297*)(C))->a1 = T379c19(a1);
	T297f32(C, ((T297*)(C))->a1, a2);
	t1 = (T297f12(C));
	t2 = (T297f9(C, t1));
	if (t2) {
		t1 = (T297f12(C));
		l1 = (T297f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T379f20(GE_void(((T297*)(C))->a1), l1);
		}
	}
	t1 = (T297f14(C));
	t2 = (T297f9(C, t1));
	if (t2) {
		t1 = (T297f14(C));
		l1 = (T297f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T379f21(GE_void(((T297*)(C))->a1), l1);
		}
	}
	t1 = (T297f15(C));
	t2 = (T297f9(C, t1));
	if (t2) {
		t1 = (T297f15(C));
		l1 = (T297f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T379f22(GE_void(((T297*)(C))->a1), l1);
		}
	}
	t1 = (T297f16(C));
	t2 = (T297f9(C, t1));
	if (t2) {
		t1 = (T297f16(C));
		t2 = (T297f17(C, t1));
		T379f23(GE_void(((T297*)(C))->a1), t2);
	}
	t1 = (T297f18(C));
	l2 = (T97f16(GE_void(((T297*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T297*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T379f24(GE_void(((T297*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_COPY_COMMAND.set_fileset */
void T379f24(T0* C, T0* a1)
{
	((T379*)(C))->a6 = a1;
}

/* GEANT_COPY_TASK.fileset_element_name */
unsigned char ge98os8992 = '\0';
T0* ge98ov8992;
T0* T297f18(T0* C)
{
	T0* R = 0;
	if (ge98os8992) {
		return ge98ov8992;
	} else {
		ge98os8992 = '\1';
		ge98ov8992 = R;
	}
	R = GE_ms("fileset", 7);
	ge98ov8992 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_force */
void T379f23(T0* C, T1 a1)
{
	((T379*)(C))->a7 = a1;
}

/* GEANT_COPY_TASK.boolean_value */
T1 T297f17(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T297f13(C, a1));
	t1 = (T297f24(C));
	t2 = (T297f25(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T297f24(C));
		t2 = (T297f26(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T297f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T297f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T297f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T297f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T297f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_COPY_TASK.std */
T0* T297f21(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_COPY_TASK.false_attribute_value */
T0* T297f26(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_COPY_TASK.true_attribute_value */
T0* T297f25(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_COPY_TASK.string_ */
T0* T297f24(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_COPY_TASK.force_attribute_name */
unsigned char ge98os8991 = '\0';
T0* ge98ov8991;
T0* T297f16(T0* C)
{
	T0* R = 0;
	if (ge98os8991) {
		return ge98ov8991;
	} else {
		ge98os8991 = '\1';
		ge98ov8991 = R;
	}
	R = GE_ms("force", 5);
	ge98ov8991 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_to_directory */
void T379f22(T0* C, T0* a1)
{
	((T379*)(C))->a5 = a1;
}

/* GEANT_COPY_TASK.to_directory_attribute_name */
unsigned char ge98os8990 = '\0';
T0* ge98ov8990;
T0* T297f15(T0* C)
{
	T0* R = 0;
	if (ge98os8990) {
		return ge98ov8990;
	} else {
		ge98os8990 = '\1';
		ge98ov8990 = R;
	}
	R = GE_ms("to_directory", 12);
	ge98ov8990 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_to_file */
void T379f21(T0* C, T0* a1)
{
	((T379*)(C))->a4 = a1;
}

/* GEANT_COPY_TASK.to_file_attribute_name */
unsigned char ge98os8989 = '\0';
T0* ge98ov8989;
T0* T297f14(T0* C)
{
	T0* R = 0;
	if (ge98os8989) {
		return ge98ov8989;
	} else {
		ge98os8989 = '\1';
		ge98ov8989 = R;
	}
	R = GE_ms("to_file", 7);
	ge98ov8989 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_file */
void T379f20(T0* C, T0* a1)
{
	((T379*)(C))->a3 = a1;
}

/* GEANT_COPY_TASK.attribute_value */
T0* T297f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T297*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T297f23(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T297f23(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T297f6(C));
		t4 = (((T22*)(GE_void(((T297*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T297f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_COPY_TASK.project_variables_resolver */
T0* T297f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_COPY_TASK.target_arguments_stack */
T0* T297f23(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_COPY_TASK.has_attribute */
T1 T297f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T297*)(C))->a3), a1));
	return R;
}

/* GEANT_COPY_TASK.file_attribute_name */
unsigned char ge98os8988 = '\0';
T0* ge98ov8988;
T0* T297f12(T0* C)
{
	T0* R = 0;
	if (ge98os8988) {
		return ge98ov8988;
	} else {
		ge98os8988 = '\1';
		ge98ov8988 = R;
	}
	R = GE_ms("file", 4);
	ge98ov8988 = R;
	return R;
}

/* GEANT_COPY_TASK.task_make */
void T297f32(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T297f34(C, a1);
	t1 = (((T379*)(GE_void(a1)))->a2);
	T297f35(C, t1, a2);
}

/* GEANT_COPY_TASK.interpreting_element_make */
void T297f35(T0* C, T0* a1, T0* a2)
{
	T297f36(C, a2);
	T297f37(C, a1);
}

/* GEANT_COPY_TASK.set_project */
void T297f37(T0* C, T0* a1)
{
	((T297*)(C))->a2 = a1;
}

/* GEANT_COPY_TASK.element_make */
void T297f36(T0* C, T0* a1)
{
	T297f38(C, a1);
}

/* GEANT_COPY_TASK.set_xml_element */
void T297f38(T0* C, T0* a1)
{
	((T297*)(C))->a3 = a1;
}

/* GEANT_COPY_TASK.set_command */
void T297f34(T0* C, T0* a1)
{
	((T297*)(C))->a1 = a1;
}

/* GEANT_COPY_COMMAND.make */
T0* T379c19(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T379));
	*(T379*)C = GE_default379;
	T379f26(C, a1);
	return C;
}

/* GEANT_COPY_COMMAND.set_project */
void T379f26(T0* C, T0* a1)
{
	((T379*)(C))->a2 = a1;
}

/* GEANT_TARGET.copy_task_name */
unsigned char ge130os2417 = '\0';
T0* ge130ov2417;
T0* T26f63(T0* C)
{
	T0* R = 0;
	if (ge130os2417) {
		return ge130ov2417;
	} else {
		ge130os2417 = '\1';
		ge130ov2417 = R;
	}
	R = GE_ms("copy", 4);
	ge130ov2417 = R;
	return R;
}

/* GEANT_DELETE_TASK.make */
T0* T296c25(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T296));
	*(T296*)C = GE_default296;
	((T296*)(C))->a1 = T376c18(a1);
	T296f27(C, ((T296*)(C))->a1, a2);
	t1 = (T296f12(C));
	t2 = (T296f9(C, t1));
	if (t2) {
		t1 = (T296f12(C));
		l1 = (T296f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T376f19(GE_void(((T296*)(C))->a1), l1);
		}
	}
	t1 = (T296f14(C));
	t2 = (T296f9(C, t1));
	if (t2) {
		t1 = (T296f14(C));
		l1 = (T296f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T376f20(GE_void(((T296*)(C))->a1), l1);
		}
	}
	t1 = (T296f15(C));
	l2 = (T97f16(GE_void(((T296*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T296*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T376f21(GE_void(((T296*)(C))->a1), t1);
	}
	t1 = (T296f16(C));
	l2 = (T97f16(GE_void(((T296*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l4 = T377c20(((T296*)(C))->a2, l2);
		t1 = (((T377*)(GE_void(l4)))->a1);
		T376f22(GE_void(((T296*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_DELETE_COMMAND.set_directoryset */
void T376f22(T0* C, T0* a1)
{
	((T376*)(C))->a6 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.make */
T0* T377c20(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T377));
	*(T377*)C = GE_default377;
	T377f20p1(C, a1, a2);
	((T377*)(C))->a1 = T378c21(((T377*)(C))->a2);
	t1 = (T377f13(C));
	t2 = (T377f4(C, t1));
	if (t2) {
		t1 = (T377f13(C));
		l1 = (T377f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f25(GE_void(((T377*)(C))->a1), l1);
		}
	}
	t1 = (T377f6(C));
	t2 = (T377f4(C, t1));
	if (t2) {
		t1 = (T377f6(C));
		l1 = (T377f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f26(GE_void(((T377*)(C))->a1), l1);
		}
	}
	t1 = (T377f7(C));
	t2 = (T377f4(C, t1));
	if (t2) {
		t1 = (T377f7(C));
		l1 = (T377f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f27(GE_void(((T377*)(C))->a1), l1);
		}
	}
	t1 = (T377f8(C));
	t2 = (T377f4(C, t1));
	if (t2) {
		t1 = (T377f8(C));
		t2 = (T377f9(C, t1));
		T378f28(GE_void(((T377*)(C))->a1), t2);
	}
	t1 = (T377f10(C));
	l2 = (T377f11(C, t1));
	l3 = (T116f5(GE_void(l2)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l4 = T367c16(((T377*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l4)));
		if (t2) {
			t2 = (T367f10(GE_void(l4)));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l4)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l4)));
			T378f29(GE_void(((T377*)(C))->a1), t1);
		}
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	t1 = (T377f12(C));
	l2 = (T377f11(C, t1));
	l3 = (T116f5(GE_void(l2)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l4 = T367c16(((T377*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l4)));
		if (t2) {
			t2 = (T367f10(GE_void(l4)));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l4)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l4)));
			T378f30(GE_void(((T377*)(C))->a1), t1);
		}
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	return C;
}

/* GEANT_DIRECTORYSET.add_single_exclude */
void T378f30(T0* C, T0* a1)
{
	T412f37(GE_void(((T378*)(C))->a8), a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.exclude_element_name */
unsigned char ge128os9605 = '\0';
T0* ge128ov9605;
T0* T377f12(T0* C)
{
	T0* R = 0;
	if (ge128os9605) {
		return ge128ov9605;
	} else {
		ge128os9605 = '\1';
		ge128ov9605 = R;
	}
	R = GE_ms("exclude", 7);
	ge128ov9605 = R;
	return R;
}

/* GEANT_DIRECTORYSET.add_single_include */
void T378f29(T0* C, T0* a1)
{
	T412f37(GE_void(((T378*)(C))->a7), a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.elements_by_name */
T0* T377f11(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T377*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T377f16(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.string_ */
T0* T377f16(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.include_element_name */
unsigned char ge128os9604 = '\0';
T0* ge128ov9604;
T0* T377f10(T0* C)
{
	T0* R = 0;
	if (ge128os9604) {
		return ge128ov9604;
	} else {
		ge128os9604 = '\1';
		ge128ov9604 = R;
	}
	R = GE_ms("include", 7);
	ge128ov9604 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_concat */
void T378f28(T0* C, T1 a1)
{
	((T378*)(C))->a11 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.boolean_value */
T1 T377f9(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T377f5(C, a1));
	t1 = (T377f16(C));
	t2 = (T377f17(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T377f16(C));
		t2 = (T377f18(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T377f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T377f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T377f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T377f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T377f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.std */
T0* T377f19(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.false_attribute_value */
T0* T377f18(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.true_attribute_value */
T0* T377f17(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.concat_attribute_name */
unsigned char ge128os9603 = '\0';
T0* ge128ov9603;
T0* T377f8(T0* C)
{
	T0* R = 0;
	if (ge128os9603) {
		return ge128ov9603;
	} else {
		ge128os9603 = '\1';
		ge128ov9603 = R;
	}
	R = GE_ms("concat", 6);
	ge128ov9603 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_exclude_wc_string */
void T378f27(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T378*)(C))->a10 = a1;
	((T378*)(C))->a4 = T415c14(((T378*)(C))->a10, EIF_TRUE);
	t1 = (T415f11(GE_void(((T378*)(C))->a4)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [directoryset] error: invalid exclude wildcard: \'", 51),
((T378*)(C))->a10,
GE_ms("\'", 1));
		T22f41(GE_void(((T378*)(C))->a2), t2);
	}
}

/* GEANT_DIRECTORYSET_ELEMENT.exclude_attribute_name */
unsigned char ge128os9602 = '\0';
T0* ge128ov9602;
T0* T377f7(T0* C)
{
	T0* R = 0;
	if (ge128os9602) {
		return ge128ov9602;
	} else {
		ge128os9602 = '\1';
		ge128ov9602 = R;
	}
	R = GE_ms("exclude", 7);
	ge128ov9602 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_include_wc_string */
void T378f26(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T378*)(C))->a9 = a1;
	((T378*)(C))->a3 = T415c14(((T378*)(C))->a9, EIF_TRUE);
	t1 = (T415f11(GE_void(((T378*)(C))->a3)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [directoryset] error: invalid include wildcard: \'", 51),
((T378*)(C))->a9,
GE_ms("\'", 1));
		T22f41(GE_void(((T378*)(C))->a2), t2);
	}
}

/* GEANT_DIRECTORYSET_ELEMENT.include_attribute_name */
unsigned char ge128os9601 = '\0';
T0* ge128ov9601;
T0* T377f6(T0* C)
{
	T0* R = 0;
	if (ge128os9601) {
		return ge128ov9601;
	} else {
		ge128os9601 = '\1';
		ge128ov9601 = R;
	}
	R = GE_ms("include", 7);
	ge128ov9601 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_directory_name */
void T378f25(T0* C, T0* a1)
{
	((T378*)(C))->a1 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.attribute_value */
T0* T377f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T377*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T377f14(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T377f14(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T377f15(C));
		t4 = (((T22*)(GE_void(((T377*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T377f15(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.project_variables_resolver */
T0* T377f15(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.target_arguments_stack */
T0* T377f14(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.has_attribute */
T1 T377f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T377*)(C))->a3), a1));
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.directory_attribute_name */
unsigned char ge128os9600 = '\0';
T0* ge128ov9600;
T0* T377f13(T0* C)
{
	T0* R = 0;
	if (ge128os9600) {
		return ge128ov9600;
	} else {
		ge128os9600 = '\1';
		ge128ov9600 = R;
	}
	R = GE_ms("directory", 9);
	ge128ov9600 = R;
	return R;
}

/* GEANT_DIRECTORYSET.make */
T0* T378c21(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T378));
	*(T378*)C = GE_default378;
	((T378*)(C))->a2 = a1;
	((T378*)(C))->a5 = T410c39((T6)(GE_int32(20)));
	((T378*)(C))->a7 = T412c35((T6)(GE_int32(20)));
	l1 = T59c3();
	T412f36(GE_void(((T378*)(C))->a7), l1);
	((T378*)(C))->a8 = T412c35((T6)(GE_int32(20)));
	T412f36(GE_void(((T378*)(C))->a8), l1);
	T378f31(C, GE_ms("fs.directoryname", 16));
	return C;
}

/* GEANT_DIRECTORYSET.set_directory_name_variable_name */
void T378f31(T0* C, T0* a1)
{
	((T378*)(C))->a12 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.make */
void T377f20p1(T0* C, T0* a1, T0* a2)
{
	T377f21(C, a2);
	T377f22(C, a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.set_project */
void T377f22(T0* C, T0* a1)
{
	((T377*)(C))->a2 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.element_make */
void T377f21(T0* C, T0* a1)
{
	T377f23(C, a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.set_xml_element */
void T377f23(T0* C, T0* a1)
{
	((T377*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.directoryset_element_name */
unsigned char ge99os8970 = '\0';
T0* ge99ov8970;
T0* T296f16(T0* C)
{
	T0* R = 0;
	if (ge99os8970) {
		return ge99ov8970;
	} else {
		ge99os8970 = '\1';
		ge99ov8970 = R;
	}
	R = GE_ms("directoryset", 12);
	ge99ov8970 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_fileset */
void T376f21(T0* C, T0* a1)
{
	((T376*)(C))->a5 = a1;
}

/* GEANT_DELETE_TASK.fileset_element_name */
unsigned char ge99os8969 = '\0';
T0* ge99ov8969;
T0* T296f15(T0* C)
{
	T0* R = 0;
	if (ge99os8969) {
		return ge99ov8969;
	} else {
		ge99os8969 = '\1';
		ge99ov8969 = R;
	}
	R = GE_ms("fileset", 7);
	ge99ov8969 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_file */
void T376f20(T0* C, T0* a1)
{
	((T376*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.file_attribute_name */
unsigned char ge99os8968 = '\0';
T0* ge99ov8968;
T0* T296f14(T0* C)
{
	T0* R = 0;
	if (ge99os8968) {
		return ge99ov8968;
	} else {
		ge99os8968 = '\1';
		ge99ov8968 = R;
	}
	R = GE_ms("file", 4);
	ge99ov8968 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_directory */
void T376f19(T0* C, T0* a1)
{
	((T376*)(C))->a4 = a1;
}

/* GEANT_DELETE_TASK.attribute_value */
T0* T296f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T296*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T296f21(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T296f21(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T296f6(C));
		t4 = (((T22*)(GE_void(((T296*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T296f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DELETE_TASK.project_variables_resolver */
T0* T296f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_DELETE_TASK.target_arguments_stack */
T0* T296f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_DELETE_TASK.has_attribute */
T1 T296f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T296*)(C))->a3), a1));
	return R;
}

/* GEANT_DELETE_TASK.directory_attribute_name */
unsigned char ge99os8967 = '\0';
T0* ge99ov8967;
T0* T296f12(T0* C)
{
	T0* R = 0;
	if (ge99os8967) {
		return ge99ov8967;
	} else {
		ge99os8967 = '\1';
		ge99ov8967 = R;
	}
	R = GE_ms("directory", 9);
	ge99ov8967 = R;
	return R;
}

/* GEANT_DELETE_TASK.task_make */
void T296f27(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T296f29(C, a1);
	t1 = (((T376*)(GE_void(a1)))->a2);
	T296f30(C, t1, a2);
}

/* GEANT_DELETE_TASK.interpreting_element_make */
void T296f30(T0* C, T0* a1, T0* a2)
{
	T296f31(C, a2);
	T296f32(C, a1);
}

/* GEANT_DELETE_TASK.set_project */
void T296f32(T0* C, T0* a1)
{
	((T296*)(C))->a2 = a1;
}

/* GEANT_DELETE_TASK.element_make */
void T296f31(T0* C, T0* a1)
{
	T296f33(C, a1);
}

/* GEANT_DELETE_TASK.set_xml_element */
void T296f33(T0* C, T0* a1)
{
	((T296*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.set_command */
void T296f29(T0* C, T0* a1)
{
	((T296*)(C))->a1 = a1;
}

/* GEANT_DELETE_COMMAND.make */
T0* T376c18(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T376));
	*(T376*)C = GE_default376;
	T376f24(C, a1);
	return C;
}

/* GEANT_DELETE_COMMAND.set_project */
void T376f24(T0* C, T0* a1)
{
	((T376*)(C))->a2 = a1;
}

/* GEANT_TARGET.delete_task_name */
unsigned char ge130os2416 = '\0';
T0* ge130ov2416;
T0* T26f62(T0* C)
{
	T0* R = 0;
	if (ge130os2416) {
		return ge130ov2416;
	} else {
		ge130os2416 = '\1';
		ge130ov2416 = R;
	}
	R = GE_ms("delete", 6);
	ge130ov2416 = R;
	return R;
}

/* GEANT_MKDIR_TASK.make */
T0* T295c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T295));
	*(T295*)C = GE_default295;
	((T295*)(C))->a1 = T375c10(a1);
	T295f24(C, ((T295*)(C))->a1, a2);
	t1 = (T295f12(C));
	t2 = (T295f9(C, t1));
	if (t2) {
		t1 = (T295f12(C));
		l1 = (T295f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T375f11(GE_void(((T295*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_MKDIR_COMMAND.set_directory */
void T375f11(T0* C, T0* a1)
{
	((T375*)(C))->a3 = a1;
}

/* GEANT_MKDIR_TASK.attribute_value */
T0* T295f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T295*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T295f18(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T295f18(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T295f6(C));
		t4 = (((T22*)(GE_void(((T295*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T295f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MKDIR_TASK.project_variables_resolver */
T0* T295f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_MKDIR_TASK.target_arguments_stack */
T0* T295f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_MKDIR_TASK.has_attribute */
T1 T295f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T295*)(C))->a3), a1));
	return R;
}

/* GEANT_MKDIR_TASK.directory_attribute_name */
unsigned char ge113os8959 = '\0';
T0* ge113ov8959;
T0* T295f12(T0* C)
{
	T0* R = 0;
	if (ge113os8959) {
		return ge113ov8959;
	} else {
		ge113os8959 = '\1';
		ge113ov8959 = R;
	}
	R = GE_ms("directory", 9);
	ge113ov8959 = R;
	return R;
}

/* GEANT_MKDIR_TASK.task_make */
void T295f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T295f26(C, a1);
	t1 = (((T375*)(GE_void(a1)))->a2);
	T295f27(C, t1, a2);
}

/* GEANT_MKDIR_TASK.interpreting_element_make */
void T295f27(T0* C, T0* a1, T0* a2)
{
	T295f28(C, a2);
	T295f29(C, a1);
}

/* GEANT_MKDIR_TASK.set_project */
void T295f29(T0* C, T0* a1)
{
	((T295*)(C))->a2 = a1;
}

/* GEANT_MKDIR_TASK.element_make */
void T295f28(T0* C, T0* a1)
{
	T295f30(C, a1);
}

/* GEANT_MKDIR_TASK.set_xml_element */
void T295f30(T0* C, T0* a1)
{
	((T295*)(C))->a3 = a1;
}

/* GEANT_MKDIR_TASK.set_command */
void T295f26(T0* C, T0* a1)
{
	((T295*)(C))->a1 = a1;
}

/* GEANT_MKDIR_COMMAND.make */
T0* T375c10(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T375));
	*(T375*)C = GE_default375;
	T375f13(C, a1);
	return C;
}

/* GEANT_MKDIR_COMMAND.set_project */
void T375f13(T0* C, T0* a1)
{
	((T375*)(C))->a2 = a1;
}

/* GEANT_TARGET.mkdir_task_name */
unsigned char ge130os2415 = '\0';
T0* ge130ov2415;
T0* T26f61(T0* C)
{
	T0* R = 0;
	if (ge130os2415) {
		return ge130ov2415;
	} else {
		ge130os2415 = '\1';
		ge130ov2415 = R;
	}
	R = GE_ms("mkdir", 5);
	ge130ov2415 = R;
	return R;
}

/* GEANT_ECHO_TASK.make */
T0* T294c28(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 l3 = 0;
	T1 l4 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	C = (T0*)GE_alloc(sizeof(T294));
	*(T294*)C = GE_default294;
	((T294*)(C))->a1 = T374c8(a1);
	T294f30(C, ((T294*)(C))->a1, a2);
	l2 = (T97f26(GE_void(a2)));
	t1 = ((l2)==(EIF_VOID));
	if (!(t1)) {
		t1 = (((((T0*)(GE_void(l2)))->id==17)?T17f29(l2):T195f50(l2)));
	}
	l4 = ((T1)(!(t1)));
	t2 = (T294f12(C));
	l3 = (T294f9(C, t2));
	if (l4) {
		t1 = (l3);
	} else {
		t1 = EIF_FALSE;
	}
	if (t1) {
		t2 = GE_ma33((T6)1,
GE_ms("  [echo]: error: Usage of both, attribute \'message\' and text content within element \'echo\' is not allowed.", 106));
		T294f31(C, (T6)(GE_int32(1)), t2);
	}
	t1 = ((T1)(!(l4)));
	if (t1) {
		t1 = ((T1)(!(l3)));
	}
	if (t1) {
		t2 = GE_ma33((T6)1,
GE_ms("  [echo]: error: You have to specify either attribute \'message\' or text content within the element \'echo\'.", 106));
		T294f31(C, (T6)(GE_int32(1)), t2);
	}
	if (l3) {
		t2 = (T294f12(C));
		l1 = (T294f13(C, t2));
		T374f9(GE_void(((T294*)(C))->a1), l1);
	} else {
		T374f9(GE_void(((T294*)(C))->a1), l2);
	}
	t2 = (T294f14(C));
	t1 = (T294f9(C, t2));
	if (t1) {
		t2 = (T294f14(C));
		l1 = (T294f13(C, t2));
		T374f10(GE_void(((T294*)(C))->a1), l1);
		t2 = (T294f15(C));
		t1 = (T294f9(C, t2));
		if (t1) {
			t2 = (T294f15(C));
			t1 = (T294f16(C, t2));
			T374f11(GE_void(((T294*)(C))->a1), t1);
		}
	}
	return C;
}

/* GEANT_ECHO_COMMAND.set_append */
void T374f11(T0* C, T1 a1)
{
	((T374*)(C))->a5 = a1;
}

/* GEANT_ECHO_TASK.boolean_value */
T1 T294f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T294f13(C, a1));
	t1 = (T294f22(C));
	t2 = (T294f23(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T294f22(C));
		t2 = (T294f24(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T294f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T294f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T294f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T294f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T294f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_ECHO_TASK.std */
T0* T294f19(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_ECHO_TASK.false_attribute_value */
T0* T294f24(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_ECHO_TASK.true_attribute_value */
T0* T294f23(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_ECHO_TASK.string_ */
T0* T294f22(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_ECHO_TASK.append_attribute_name */
unsigned char ge100os8947 = '\0';
T0* ge100ov8947;
T0* T294f15(T0* C)
{
	T0* R = 0;
	if (ge100os8947) {
		return ge100ov8947;
	} else {
		ge100os8947 = '\1';
		ge100ov8947 = R;
	}
	R = GE_ms("append", 6);
	ge100ov8947 = R;
	return R;
}

/* GEANT_ECHO_COMMAND.set_to_file */
void T374f10(T0* C, T0* a1)
{
	((T374*)(C))->a4 = a1;
}

/* GEANT_ECHO_TASK.to_file_attribute_name */
unsigned char ge100os8946 = '\0';
T0* ge100ov8946;
T0* T294f14(T0* C)
{
	T0* R = 0;
	if (ge100os8946) {
		return ge100ov8946;
	} else {
		ge100os8946 = '\1';
		ge100ov8946 = R;
	}
	R = GE_ms("to_file", 7);
	ge100ov8946 = R;
	return R;
}

/* GEANT_ECHO_COMMAND.set_message */
void T374f9(T0* C, T0* a1)
{
	((T374*)(C))->a3 = a1;
}

/* GEANT_ECHO_TASK.attribute_value */
T0* T294f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T294*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T294f21(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T294f21(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T294f6(C));
		t4 = (((T22*)(GE_void(((T294*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T294f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_ECHO_TASK.project_variables_resolver */
T0* T294f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_ECHO_TASK.target_arguments_stack */
T0* T294f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_ECHO_TASK.exit_application */
void T294f31(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T294f19(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T294f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T294f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T294f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T294f20(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_ECHO_TASK.exceptions */
T0* T294f20(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_ECHO_TASK.has_attribute */
T1 T294f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T294*)(C))->a3), a1));
	return R;
}

/* GEANT_ECHO_TASK.message_attribute_name */
unsigned char ge100os8945 = '\0';
T0* ge100ov8945;
T0* T294f12(T0* C)
{
	T0* R = 0;
	if (ge100os8945) {
		return ge100ov8945;
	} else {
		ge100os8945 = '\1';
		ge100ov8945 = R;
	}
	R = GE_ms("message", 7);
	ge100ov8945 = R;
	return R;
}

/* UC_UTF8_STRING.old_is_empty */
T1 T195f50(T0* C)
{
	T1 R = 0;
	R = ((((T195*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* STRING_8.is_empty */
T1 T17f29(T0* C)
{
	T1 R = 0;
	R = ((((T17*)(C))->a2)==((T6)(GE_int32(0))));
	return R;
}

/* XM_ELEMENT.text */
T0* T97f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = T320c11();
	l2 = (T97f19(C));
	T191f10(GE_void(l2));
	t1 = (((T191*)(GE_void(l2)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l2)));
		T192x5876T0(GE_void(t2), l1);
		t1 = (T320f10(GE_void(l1)));
		if (t1) {
			t1 = ((R)==(EIF_VOID));
			if (t1) {
				t2 = (T97f27(C));
				t3 = (((T320*)(GE_void(l1)))->a5);
				t3 = (((T315*)(GE_void(t3)))->a1);
				R = (T76f7(GE_void(t2), t3));
			} else {
				t2 = (T97f27(C));
				t3 = (((T320*)(GE_void(l1)))->a5);
				t3 = (((T315*)(GE_void(t3)))->a1);
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		T191f11(GE_void(l2));
		t1 = (((T191*)(GE_void(l2)))->a1);
	}
	return R;
}

/* KL_STRING_ROUTINES.appended_string */
T0* T76f5(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 195:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T195f55(GE_void(l1), a2);
		R = l1;
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 195:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			R = (T76f6(C, a1, a2));
		} else {
			if (((T0*)(GE_void(a1)))->id==17) {
				T17f39(a1, a2);
			} else {
				T195f55(a1, a2);
			}
			R = a1;
		}
	}
	return R;
}

/* STRING_8.append_string */
void T17f39(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		T17f35(C, a1);
	}
}

/* KL_STRING_ROUTINES.concat */
T0* T76f6(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 195:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T195f7(GE_void(l1), a2));
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 195:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			R = (T195f8(GE_void(l1), a1));
		} else {
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f8(a1, a2):T195f7(a1, a2)));
		}
	}
	return R;
}

/* UC_UTF8_STRING.prefixed_string */
T0* T195f8(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T195f25(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = (T194f22(GE_void(t1), a1, (T6)(GE_int32(1)), t2));
	t2 = ((T6)((((T195*)(C))->a3)+(t2)));
	R = T195c59(t2);
	T195f55(GE_void(R), a1);
	T195f55(GE_void(R), C);
	return R;
}

/* XM_ELEMENT.string_ */
T0* T97f27(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* XM_NODE_TYPER.is_character_data */
T1 T320f10(T0* C)
{
	T1 R = 0;
	R = ((((T320*)(C))->a5)!=(EIF_VOID));
	return R;
}

/* GEANT_ECHO_TASK.task_make */
void T294f30(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T294f32(C, a1);
	t1 = (((T374*)(GE_void(a1)))->a2);
	T294f33(C, t1, a2);
}

/* GEANT_ECHO_TASK.interpreting_element_make */
void T294f33(T0* C, T0* a1, T0* a2)
{
	T294f34(C, a2);
	T294f35(C, a1);
}

/* GEANT_ECHO_TASK.set_project */
void T294f35(T0* C, T0* a1)
{
	((T294*)(C))->a2 = a1;
}

/* GEANT_ECHO_TASK.element_make */
void T294f34(T0* C, T0* a1)
{
	T294f36(C, a1);
}

/* GEANT_ECHO_TASK.set_xml_element */
void T294f36(T0* C, T0* a1)
{
	((T294*)(C))->a3 = a1;
}

/* GEANT_ECHO_TASK.set_command */
void T294f32(T0* C, T0* a1)
{
	((T294*)(C))->a1 = a1;
}

/* GEANT_ECHO_COMMAND.make */
T0* T374c8(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T374));
	*(T374*)C = GE_default374;
	T374f13(C, a1);
	return C;
}

/* GEANT_ECHO_COMMAND.set_project */
void T374f13(T0* C, T0* a1)
{
	((T374*)(C))->a2 = a1;
}

/* GEANT_TARGET.echo_task_name */
unsigned char ge130os2414 = '\0';
T0* ge130ov2414;
T0* T26f60(T0* C)
{
	T0* R = 0;
	if (ge130os2414) {
		return ge130ov2414;
	} else {
		ge130os2414 = '\1';
		ge130ov2414 = R;
	}
	R = GE_ms("echo", 4);
	ge130ov2414 = R;
	return R;
}

/* GEANT_GEANT_TASK.make */
T0* T293c34(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T6 l9 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T293));
	*(T293*)C = GE_default293;
	((T293*)(C))->a1 = T372c24(a1);
	T293f36(C, ((T293*)(C))->a1, a2);
	t1 = (T293f12(C));
	t2 = (T293f9(C, t1));
	if (t2) {
		t1 = (T293f12(C));
		l1 = (T293f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T372f25(GE_void(((T293*)(C))->a1), l1);
		}
	}
	t1 = (T293f14(C));
	t2 = (T293f9(C, t1));
	if (t2) {
		t1 = (T293f14(C));
		t2 = (T293f15(C, t1));
		T372f26(GE_void(((T293*)(C))->a1), t2);
	}
	t1 = (T293f16(C));
	t2 = (T293f9(C, t1));
	if (t2) {
		t1 = (T293f16(C));
		l1 = (T293f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T372f27(GE_void(((T293*)(C))->a1), l1);
		}
		T372f28(GE_void(((T293*)(C))->a1), EIF_TRUE);
	} else {
		T372f28(GE_void(((T293*)(C))->a1), EIF_FALSE);
	}
	t1 = (T293f17(C));
	l2 = (T97f16(GE_void(((T293*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T293*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T372f29(GE_void(((T293*)(C))->a1), t1);
	}
	t1 = (T293f18(C));
	t2 = (T293f9(C, t1));
	if (t2) {
		t1 = (T293f18(C));
		t2 = (T293f15(C, t1));
		T372f28(GE_void(((T293*)(C))->a1), t2);
	}
	t1 = (T293f19(C));
	l4 = (T293f20(C, t1));
	t1 = (T293f21(C));
	t2 = (T293f9(C, t1));
	if (t2) {
		t3 = (((T116*)(GE_void(l4)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = GE_ma33((T6)1,
GE_ms("  [geant]: error: Usage of both, attribute \'arguments\' and subelements \'argument\' is not allowed.", 97));
			T293f37(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (T293f21(C));
		l1 = (T293f13(C, t1));
		t1 = (T293f22(C));
		l8 = (T373f6(GE_void(t1), l1));
		l7 = (T226f7(GE_void(l8)));
		l9 = (T6)(GE_int32(1));
		T273f8(GE_void(l7));
		t2 = (((T273*)(GE_void(l7)))->a3);
		while (!(t2)) {
			t1 = (((T372*)(GE_void(((T293*)(C))->a1)))->a2);
			t4 = (T273f6(GE_void(l7)));
			t5 = (T6f12(&l9));
			T34f67(GE_void(t1), t4, t5);
			t1 = (T273f6(GE_void(l7)));
			t1 = GE_ma33((T6)3,
GE_ms("  [geant]: found actual (terse) argument. Value: \'", 50),
t1,
GE_ms("\'\n", 2));
			T22f31(GE_void(((T293*)(C))->a2), t1);
			l9 = ((T6)((l9)+((T6)(GE_int32(1)))));
			T273f9(GE_void(l7));
			t2 = (((T273*)(GE_void(l7)))->a3);
		}
	} else {
		l6 = (T116f5(GE_void(l4)));
		T117f8(GE_void(l6));
		t2 = (((T117*)(GE_void(l6)))->a1);
		while (!(t2)) {
			t1 = (T117f6(GE_void(l6)));
			l5 = T367c16(((T293*)(C))->a2, t1);
			t2 = (T367f10(GE_void(l5)));
			if (t2) {
				t1 = (T367f4(GE_void(l5)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (((T372*)(GE_void(((T293*)(C))->a1)))->a2);
				t4 = (T367f4(GE_void(l5)));
				t2 = (T34f37(GE_void(t1), t4));
				if (t2) {
					t1 = (T367f4(GE_void(l5)));
					t1 = GE_ma33((T6)3,
GE_ms("  [geant]: error: duplicate definition for argument \'", 53),
t1,
GE_ms("\'", 1));
					T293f37(C, (T6)(GE_int32(1)), t1);
				}
				t1 = (((T372*)(GE_void(((T293*)(C))->a1)))->a2);
				t4 = (T367f5(GE_void(l5)));
				t5 = (T367f4(GE_void(l5)));
				T34f67(GE_void(t1), t4, t5);
				t1 = (T367f4(GE_void(l5)));
				t1 = GE_ma33((T6)3,
GE_ms("  [geant]: found actual argument \'", 34),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T293*)(C))->a2), t1);
			}
			T117f9(GE_void(l6));
			t2 = (((T117*)(GE_void(l6)))->a1);
		}
	}
	return C;
}

/* GEANT_GEANT_TASK.arguments_string_splitter */
T0* T293f22(T0* C)
{
	T0* R = 0;
	if (ge61os1710) {
		return ge61ov1710;
	} else {
		ge61os1710 = '\1';
		ge61ov1710 = R;
	}
	R = T373c9();
	ge61ov1710 = R;
	T373f10(GE_void(R), GE_ms(",\t", 2));
	return R;
}

/* GEANT_GEANT_TASK.exit_application */
void T293f37(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T293f25(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T293f25(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T293f25(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T293f25(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T293f26(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_GEANT_TASK.exceptions */
T0* T293f26(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_GEANT_TASK.std */
T0* T293f25(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GEANT_TASK.arguments_attribute_name */
unsigned char ge103os8918 = '\0';
T0* ge103ov8918;
T0* T293f21(T0* C)
{
	T0* R = 0;
	if (ge103os8918) {
		return ge103ov8918;
	} else {
		ge103os8918 = '\1';
		ge103ov8918 = R;
	}
	R = GE_ms("arguments", 9);
	ge103ov8918 = R;
	return R;
}

/* GEANT_GEANT_TASK.elements_by_name */
T0* T293f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T293*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T293f28(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEANT_TASK.string_ */
T0* T293f28(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GEANT_TASK.argument_element_name */
unsigned char ge103os8917 = '\0';
T0* ge103ov8917;
T0* T293f19(T0* C)
{
	T0* R = 0;
	if (ge103os8917) {
		return ge103ov8917;
	} else {
		ge103os8917 = '\1';
		ge103ov8917 = R;
	}
	R = GE_ms("argument", 8);
	ge103ov8917 = R;
	return R;
}

/* GEANT_GEANT_TASK.fork_attribute_name */
unsigned char ge103os8915 = '\0';
T0* ge103ov8915;
T0* T293f18(T0* C)
{
	T0* R = 0;
	if (ge103os8915) {
		return ge103ov8915;
	} else {
		ge103os8915 = '\1';
		ge103ov8915 = R;
	}
	R = GE_ms("fork", 4);
	ge103ov8915 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_fileset */
void T372f29(T0* C, T0* a1)
{
	((T372*)(C))->a9 = a1;
}

/* GEANT_GEANT_TASK.fileset_element_name */
unsigned char ge103os8916 = '\0';
T0* ge103ov8916;
T0* T293f17(T0* C)
{
	T0* R = 0;
	if (ge103os8916) {
		return ge103ov8916;
	} else {
		ge103os8916 = '\1';
		ge103ov8916 = R;
	}
	R = GE_ms("fileset", 7);
	ge103ov8916 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_fork */
void T372f28(T0* C, T1 a1)
{
	((T372*)(C))->a7 = a1;
	((T372*)(C))->a8 = EIF_TRUE;
}

/* GEANT_GEANT_COMMAND.set_filename */
void T372f27(T0* C, T0* a1)
{
	((T372*)(C))->a4 = a1;
}

/* GEANT_GEANT_TASK.filename_attribute_name */
unsigned char ge103os8912 = '\0';
T0* ge103ov8912;
T0* T293f16(T0* C)
{
	T0* R = 0;
	if (ge103os8912) {
		return ge103ov8912;
	} else {
		ge103os8912 = '\1';
		ge103ov8912 = R;
	}
	R = GE_ms("file", 4);
	ge103ov8912 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_reuse_variables */
void T372f26(T0* C, T1 a1)
{
	((T372*)(C))->a6 = a1;
}

/* GEANT_GEANT_TASK.boolean_value */
T1 T293f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T293f13(C, a1));
	t1 = (T293f28(C));
	t2 = (T293f29(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T293f28(C));
		t2 = (T293f30(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T293f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T293f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T293f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T293f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T293f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEANT_TASK.false_attribute_value */
T0* T293f30(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GEANT_TASK.true_attribute_value */
T0* T293f29(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GEANT_TASK.reuse_variables_attribute_name */
unsigned char ge103os8914 = '\0';
T0* ge103ov8914;
T0* T293f14(T0* C)
{
	T0* R = 0;
	if (ge103os8914) {
		return ge103ov8914;
	} else {
		ge103os8914 = '\1';
		ge103ov8914 = R;
	}
	R = GE_ms("reuse_variables", 15);
	ge103ov8914 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_start_target_name */
void T372f25(T0* C, T0* a1)
{
	((T372*)(C))->a5 = a1;
}

/* GEANT_GEANT_TASK.attribute_value */
T0* T293f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T293*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T293f27(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T293f27(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T293f6(C));
		t4 = (((T22*)(GE_void(((T293*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T293f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEANT_TASK.project_variables_resolver */
T0* T293f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GEANT_TASK.target_arguments_stack */
T0* T293f27(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GEANT_TASK.has_attribute */
T1 T293f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T293*)(C))->a3), a1));
	return R;
}

/* GEANT_GEANT_TASK.start_target_attribute_name */
unsigned char ge103os8913 = '\0';
T0* ge103ov8913;
T0* T293f12(T0* C)
{
	T0* R = 0;
	if (ge103os8913) {
		return ge103ov8913;
	} else {
		ge103os8913 = '\1';
		ge103ov8913 = R;
	}
	R = GE_ms("target", 6);
	ge103ov8913 = R;
	return R;
}

/* GEANT_GEANT_TASK.task_make */
void T293f36(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T293f38(C, a1);
	t1 = (((T372*)(GE_void(a1)))->a3);
	T293f39(C, t1, a2);
}

/* GEANT_GEANT_TASK.interpreting_element_make */
void T293f39(T0* C, T0* a1, T0* a2)
{
	T293f40(C, a2);
	T293f41(C, a1);
}

/* GEANT_GEANT_TASK.set_project */
void T293f41(T0* C, T0* a1)
{
	((T293*)(C))->a2 = a1;
}

/* GEANT_GEANT_TASK.element_make */
void T293f40(T0* C, T0* a1)
{
	T293f42(C, a1);
}

/* GEANT_GEANT_TASK.set_xml_element */
void T293f42(T0* C, T0* a1)
{
	((T293*)(C))->a3 = a1;
}

/* GEANT_GEANT_TASK.set_command */
void T293f38(T0* C, T0* a1)
{
	((T293*)(C))->a1 = a1;
}

/* GEANT_GEANT_COMMAND.make */
T0* T372c24(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T372));
	*(T372*)C = GE_default372;
	T372f24p1(C, a1);
	((T372*)(C))->a2 = T34c46();
	return C;
}

/* GEANT_GEANT_COMMAND.make */
void T372f24p1(T0* C, T0* a1)
{
	T372f31(C, a1);
}

/* GEANT_GEANT_COMMAND.set_project */
void T372f31(T0* C, T0* a1)
{
	((T372*)(C))->a3 = a1;
}

/* GEANT_TARGET.geant_task_name */
unsigned char ge130os2413 = '\0';
T0* ge130ov2413;
T0* T26f59(T0* C)
{
	T0* R = 0;
	if (ge130os2413) {
		return ge130ov2413;
	} else {
		ge130os2413 = '\1';
		ge130ov2413 = R;
	}
	R = GE_ms("geant", 5);
	ge130ov2413 = R;
	return R;
}

/* GEANT_GETEST_TASK.make */
T0* T292c38(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T292));
	*(T292*)C = GE_default292;
	((T292*)(C))->a1 = T371c21(a1);
	T292f40(C, ((T292*)(C))->a1, a2);
	t1 = (T292f12(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f12(C));
		t2 = (T292f13(C, t1));
		T371f22(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f14(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f14(C));
		l2 = (T292f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T371f23(GE_void(((T292*)(C))->a1), l2);
		}
	}
	t1 = (T292f16(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f16(C));
		l2 = (T292f15(C, t1));
		T371f24(GE_void(((T292*)(C))->a1), l2);
	}
	t1 = (T292f17(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f17(C));
		l2 = (T292f15(C, t1));
		T371f25(GE_void(((T292*)(C))->a1), l2);
	}
	t1 = (T292f18(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f18(C));
		l2 = (T292f15(C, t1));
		T371f26(GE_void(((T292*)(C))->a1), l2);
	}
	t1 = (T292f19(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f19(C));
		t2 = (T292f13(C, t1));
		T371f27(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f20(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f20(C));
		t2 = (T292f13(C, t1));
		T371f28(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f21(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f21(C));
		t2 = (T292f13(C, t1));
		T371f29(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f22(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f22(C));
		t2 = (T292f13(C, t1));
		T371f30(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f23(C));
	t2 = (T292f9(C, t1));
	if (t2) {
		t1 = (T292f23(C));
		t2 = (T292f13(C, t1));
		T371f31(GE_void(((T292*)(C))->a1), t2);
	}
	t1 = (T292f24(C));
	l7 = (T292f25(C, t1));
	l3 = (T116f5(GE_void(l7)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l6 = T367c16(((T292*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l6)));
		if (t2) {
			t2 = (T367f10(GE_void(l6)));
		}
		if (t2) {
			t2 = (T367f3(GE_void(l6)));
		}
		if (t2) {
			l1 = (T367f4(GE_void(l6)));
			l2 = (T367f5(GE_void(l6)));
			t1 = (T292f26(C));
			t4 = (T292f17(C));
			t2 = (T76f1(GE_void(t1), l1, t4));
			if (t2) {
				T371f25(GE_void(((T292*)(C))->a1), l2);
			} else {
				t1 = (T292f26(C));
				t4 = (T292f18(C));
				t2 = (T76f1(GE_void(t1), l1, t4));
				if (t2) {
					T371f26(GE_void(((T292*)(C))->a1), l2);
				} else {
					t1 = (T292f26(C));
					t4 = (T292f19(C));
					t2 = (T76f1(GE_void(t1), l1, t4));
					if (t2) {
						t1 = (T292f26(C));
						t4 = (T292f27(C));
						t2 = (T76f1(GE_void(t1), t4, l2));
						if (t2) {
							T371f27(GE_void(((T292*)(C))->a1), EIF_TRUE);
						} else {
							T371f27(GE_void(((T292*)(C))->a1), EIF_FALSE);
						}
					}
				}
			}
		}
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	t1 = (T292f28(C));
	l5 = (T292f25(C, t1));
	l3 = (T116f5(GE_void(l5)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l4 = T367c16(((T292*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l4)));
		if (t2) {
			t2 = (T367f10(GE_void(l4)));
		}
		if (t2) {
			t2 = (T367f3(GE_void(l4)));
		}
		if (t2) {
			l1 = (T367f4(GE_void(l4)));
			l2 = (T367f5(GE_void(l4)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T371*)(GE_void(((T292*)(C))->a1)))->a2);
				T80f70(GE_void(t1), l2, l1);
			}
		}
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].force */
void T80f70(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T80f53(C);
	T80f57(C, a2);
	t1 = ((((T80*)(C))->a8)!=((T6)(GE_int32(0))));
	if (t1) {
		T80f61(C, a1, ((T80*)(C))->a8);
	} else {
		t1 = ((((T80*)(C))->a17)==(((T80*)(C))->a4));
		if (t1) {
			t2 = ((T6)((((T80*)(C))->a17)+((T6)(GE_int32(1)))));
			t2 = (T80f32(C, t2));
			T80f58(C, t2);
			l2 = (T80f35(C, a2));
		} else {
			l2 = ((T80*)(C))->a18;
		}
		l1 = ((T80*)(C))->a7;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T80*)(C))->a6 = ((T6)((((T80*)(C))->a6)+((T6)(GE_int32(1)))));
			l1 = ((T80*)(C))->a6;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T80f34(C, l1));
			((T80*)(C))->a7 = ((T6)((t2)-(t3)));
		}
		t2 = (T80f36(C, l2));
		T80f59(C, t2, l1);
		T80f60(C, l1, l2);
		T80f61(C, a1, l1);
		T80f62(C, a2, l1);
		((T80*)(C))->a17 = ((T6)((((T80*)(C))->a17)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_put */
void T80f62(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T80*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_put */
void T80f60(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T80*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_put */
void T80f59(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T80*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_item */
T6 T80f36(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T80*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_item */
T6 T80f34(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T80*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].hash_position */
T6 T80f35(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T80*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T80*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T80*)(C))->a5)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T80*)(C))->a5)));
		}
	} else {
		R = ((T80*)(C))->a5;
	}
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].resize */
void T80f58(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T80f53(C);
	l1 = (T80f21(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T80f65(C, t1);
	l2 = ((T80*)(C))->a5;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T80f60(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T80*)(C))->a5 = l1;
	l2 = ((T80*)(C))->a6;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T80f34(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T80f30(C, l2));
			l3 = (T80f35(C, t3));
			t1 = (T80f36(C, l3));
			T80f59(C, t1, l2);
			T80f60(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f66(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f67(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T80f68(C, t1);
	((T80*)(C))->a4 = a1;
	((T80*)(C))->a8 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_resize */
void T80f68(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T80f41(C));
	((T80*)(C))->a14 = (T65f1(GE_void(t1), ((T80*)(C))->a14, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_resize */
void T80f67(T0* C, T6 a1)
{
	((T80*)(C))->a13 = (T66f1(GE_void(((T80*)(C))->a12), ((T80*)(C))->a13, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].item_storage_resize */
void T80f66(T0* C, T6 a1)
{
	((T80*)(C))->a11 = (T66f1(GE_void(((T80*)(C))->a10), ((T80*)(C))->a11, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_item */
T0* T80f30(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T80*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_resize */
void T80f65(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T80f41(C));
	((T80*)(C))->a15 = (T65f1(GE_void(t1), ((T80*)(C))->a15, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].new_capacity */
T6 T80f32(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].item_storage_put */
void T80f61(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T80*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].search_position */
void T80f57(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T80*)(C))->a8 = (T80f36(C, ((T80*)(C))->a5));
		((T80*)(C))->a18 = ((T80*)(C))->a5;
		((T80*)(C))->a19 = (T6)(GE_int32(0));
	} else {
		l4 = ((T80*)(C))->a1;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T80*)(C))->a8)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T80f30(C, ((T80*)(C))->a8));
				t3 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, t2):T426f1(l4, a1, t2)));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, l3):T426f1(l4, a1, l3)));
			}
			if (t1) {
				((T80*)(C))->a18 = (T80f35(C, a1));
				l1 = (T80f36(C, ((T80*)(C))->a18));
				((T80*)(C))->a8 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T80f30(C, l1));
					t1 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, t2):T426f1(l4, a1, t2)));
					if (t1) {
						((T80*)(C))->a8 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T80f34(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T80*)(C))->a19 = l2;
			}
		} else {
			t1 = ((((T80*)(C))->a8)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T80f30(C, ((T80*)(C))->a8));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T80*)(C))->a18 = (T80f35(C, a1));
				l1 = (T80f36(C, ((T80*)(C))->a18));
				((T80*)(C))->a8 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T80f30(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T80*)(C))->a8 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T80f34(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T80*)(C))->a19 = l2;
			}
		}
	}
}

/* GEANT_GETEST_TASK.define_element_name */
unsigned char ge107os8883 = '\0';
T0* ge107ov8883;
T0* T292f28(T0* C)
{
	T0* R = 0;
	if (ge107os8883) {
		return ge107ov8883;
	} else {
		ge107os8883 = '\1';
		ge107ov8883 = R;
	}
	R = GE_ms("define", 6);
	ge107ov8883 = R;
	return R;
}

/* GEANT_GETEST_TASK.true_attribute_value */
T0* T292f27(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GETEST_TASK.string_ */
T0* T292f26(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GETEST_TASK.elements_by_name */
T0* T292f25(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T292*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T292f26(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GETEST_TASK.attribute_element_name */
unsigned char ge107os8882 = '\0';
T0* ge107ov8882;
T0* T292f24(T0* C)
{
	T0* R = 0;
	if (ge107os8882) {
		return ge107ov8882;
	} else {
		ge107os8882 = '\1';
		ge107ov8882 = R;
	}
	R = GE_ms("attribute", 9);
	ge107ov8882 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_abort */
void T371f31(T0* C, T1 a1)
{
	((T371*)(C))->a13 = a1;
}

/* GEANT_GETEST_TASK.abort_attribute_name */
unsigned char ge107os8881 = '\0';
T0* ge107ov8881;
T0* T292f23(T0* C)
{
	T0* R = 0;
	if (ge107os8881) {
		return ge107ov8881;
	} else {
		ge107os8881 = '\1';
		ge107ov8881 = R;
	}
	R = GE_ms("abort", 5);
	ge107ov8881 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_execution */
void T371f30(T0* C, T1 a1)
{
	((T371*)(C))->a7 = a1;
}

/* GEANT_GETEST_TASK.execution_attribute_name */
unsigned char ge107os8880 = '\0';
T0* ge107ov8880;
T0* T292f22(T0* C)
{
	T0* R = 0;
	if (ge107os8880) {
		return ge107ov8880;
	} else {
		ge107os8880 = '\1';
		ge107ov8880 = R;
	}
	R = GE_ms("execution", 9);
	ge107ov8880 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_compilation */
void T371f29(T0* C, T1 a1)
{
	((T371*)(C))->a6 = a1;
}

/* GEANT_GETEST_TASK.compilation_attribute_name */
unsigned char ge107os8879 = '\0';
T0* ge107ov8879;
T0* T292f21(T0* C)
{
	T0* R = 0;
	if (ge107os8879) {
		return ge107ov8879;
	} else {
		ge107os8879 = '\1';
		ge107ov8879 = R;
	}
	R = GE_ms("compilation", 11);
	ge107ov8879 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_generation */
void T371f28(T0* C, T1 a1)
{
	((T371*)(C))->a5 = a1;
}

/* GEANT_GETEST_TASK.generation_attribute_name */
unsigned char ge107os8878 = '\0';
T0* ge107ov8878;
T0* T292f20(T0* C)
{
	T0* R = 0;
	if (ge107os8878) {
		return ge107ov8878;
	} else {
		ge107os8878 = '\1';
		ge107ov8878 = R;
	}
	R = GE_ms("generation", 10);
	ge107ov8878 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_default_test_included */
void T371f27(T0* C, T1 a1)
{
	((T371*)(C))->a12 = a1;
}

/* GEANT_GETEST_TASK.default_test_attribute_name */
unsigned char ge107os8877 = '\0';
T0* ge107ov8877;
T0* T292f19(T0* C)
{
	T0* R = 0;
	if (ge107os8877) {
		return ge107ov8877;
	} else {
		ge107os8877 = '\1';
		ge107ov8877 = R;
	}
	R = GE_ms("default_test", 12);
	ge107ov8877 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_feature_regexp */
void T371f26(T0* C, T0* a1)
{
	((T371*)(C))->a11 = a1;
}

/* GEANT_GETEST_TASK.feature_attribute_name */
unsigned char ge107os8876 = '\0';
T0* ge107ov8876;
T0* T292f18(T0* C)
{
	T0* R = 0;
	if (ge107os8876) {
		return ge107ov8876;
	} else {
		ge107os8876 = '\1';
		ge107ov8876 = R;
	}
	R = GE_ms("feature", 7);
	ge107ov8876 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_class_regexp */
void T371f25(T0* C, T0* a1)
{
	((T371*)(C))->a10 = a1;
}

/* GEANT_GETEST_TASK.class_attribute_name */
unsigned char ge107os8875 = '\0';
T0* ge107ov8875;
T0* T292f17(T0* C)
{
	T0* R = 0;
	if (ge107os8875) {
		return ge107ov8875;
	} else {
		ge107os8875 = '\1';
		ge107ov8875 = R;
	}
	R = GE_ms("class", 5);
	ge107ov8875 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_compile */
void T371f24(T0* C, T0* a1)
{
	((T371*)(C))->a9 = a1;
}

/* GEANT_GETEST_TASK.compile_attribute_name */
unsigned char ge107os8874 = '\0';
T0* ge107ov8874;
T0* T292f16(T0* C)
{
	T0* R = 0;
	if (ge107os8874) {
		return ge107ov8874;
	} else {
		ge107os8874 = '\1';
		ge107ov8874 = R;
	}
	R = GE_ms("compile", 7);
	ge107ov8874 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_config_filename */
void T371f23(T0* C, T0* a1)
{
	((T371*)(C))->a4 = a1;
}

/* GEANT_GETEST_TASK.attribute_value */
T0* T292f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T292*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T292f34(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T292f34(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T292f6(C));
		t4 = (((T22*)(GE_void(((T292*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T292f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GETEST_TASK.project_variables_resolver */
T0* T292f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GETEST_TASK.target_arguments_stack */
T0* T292f34(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GETEST_TASK.config_filename_attribute_name */
unsigned char ge107os8873 = '\0';
T0* ge107ov8873;
T0* T292f14(T0* C)
{
	T0* R = 0;
	if (ge107os8873) {
		return ge107ov8873;
	} else {
		ge107os8873 = '\1';
		ge107ov8873 = R;
	}
	R = GE_ms("config", 6);
	ge107ov8873 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_verbose */
void T371f22(T0* C, T1 a1)
{
	((T371*)(C))->a8 = a1;
}

/* GEANT_GETEST_TASK.boolean_value */
T1 T292f13(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T292f15(C, a1));
	t1 = (T292f26(C));
	t2 = (T292f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T292f26(C));
		t2 = (T292f33(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T292f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T292f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T292f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T292f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T292f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GETEST_TASK.std */
T0* T292f31(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GETEST_TASK.false_attribute_value */
T0* T292f33(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GETEST_TASK.has_attribute */
T1 T292f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T292*)(C))->a3), a1));
	return R;
}

/* GEANT_GETEST_TASK.verbose_attribute_name */
unsigned char ge107os8872 = '\0';
T0* ge107ov8872;
T0* T292f12(T0* C)
{
	T0* R = 0;
	if (ge107os8872) {
		return ge107ov8872;
	} else {
		ge107os8872 = '\1';
		ge107ov8872 = R;
	}
	R = GE_ms("verbose", 7);
	ge107ov8872 = R;
	return R;
}

/* GEANT_GETEST_TASK.task_make */
void T292f40(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T292f42(C, a1);
	t1 = (((T371*)(GE_void(a1)))->a3);
	T292f43(C, t1, a2);
}

/* GEANT_GETEST_TASK.interpreting_element_make */
void T292f43(T0* C, T0* a1, T0* a2)
{
	T292f44(C, a2);
	T292f45(C, a1);
}

/* GEANT_GETEST_TASK.set_project */
void T292f45(T0* C, T0* a1)
{
	((T292*)(C))->a2 = a1;
}

/* GEANT_GETEST_TASK.element_make */
void T292f44(T0* C, T0* a1)
{
	T292f46(C, a1);
}

/* GEANT_GETEST_TASK.set_xml_element */
void T292f46(T0* C, T0* a1)
{
	((T292*)(C))->a3 = a1;
}

/* GEANT_GETEST_TASK.set_command */
void T292f42(T0* C, T0* a1)
{
	((T292*)(C))->a1 = a1;
}

/* GEANT_GETEST_COMMAND.make */
T0* T371c21(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T371));
	*(T371*)C = GE_default371;
	T371f21p1(C, a1);
	((T371*)(C))->a2 = T80c46((T6)(GE_int32(10)));
	l1 = T59c3();
	T80f44(GE_void(((T371*)(C))->a2), l1);
	((T371*)(C))->a5 = EIF_TRUE;
	((T371*)(C))->a6 = EIF_TRUE;
	((T371*)(C))->a7 = EIF_TRUE;
	return C;
}

/* GEANT_GETEST_COMMAND.make */
void T371f21p1(T0* C, T0* a1)
{
	T371f33(C, a1);
}

/* GEANT_GETEST_COMMAND.set_project */
void T371f33(T0* C, T0* a1)
{
	((T371*)(C))->a3 = a1;
}

/* GEANT_TARGET.getest_task_name */
unsigned char ge130os2412 = '\0';
T0* ge130ov2412;
T0* T26f58(T0* C)
{
	T0* R = 0;
	if (ge130os2412) {
		return ge130ov2412;
	} else {
		ge130os2412 = '\1';
		ge130ov2412 = R;
	}
	R = GE_ms("getest", 6);
	ge130ov2412 = R;
	return R;
}

/* GEANT_GEPP_TASK.make */
T0* T291c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T291));
	*(T291*)C = GE_default291;
	((T291*)(C))->a1 = T370c20(a1);
	T291f35(C, ((T291*)(C))->a1, a2);
	t1 = (T291f12(C));
	t2 = (T291f9(C, t1));
	if (t2) {
		t1 = (T291f12(C));
		l1 = (T291f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T370f21(GE_void(((T291*)(C))->a1), l1);
		}
	}
	t1 = (T291f14(C));
	t2 = (T291f9(C, t1));
	if (t2) {
		t1 = (T291f14(C));
		l1 = (T291f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T370f22(GE_void(((T291*)(C))->a1), l1);
		}
	}
	t1 = (T291f15(C));
	t2 = (T291f9(C, t1));
	if (t2) {
		t1 = (T291f15(C));
		l2 = (T291f16(C, t1));
		T370f23(GE_void(((T291*)(C))->a1), l2);
	}
	t1 = (T291f17(C));
	l3 = (T291f18(C, t1));
	l4 = (T116f5(GE_void(l3)));
	T117f8(GE_void(l4));
	t2 = (((T117*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l4)));
		l5 = T367c16(((T291*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l5)));
		if (t2) {
			t2 = (T367f10(GE_void(l5)));
		}
		if (t2) {
			t1 = (T367f4(GE_void(l5)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (((T370*)(GE_void(((T291*)(C))->a1)))->a2);
			t4 = (T367f4(GE_void(l5)));
			T71f27(GE_void(t1), t4);
		}
		T117f9(GE_void(l4));
		t2 = (((T117*)(GE_void(l4)))->a1);
	}
	t1 = (T291f19(C));
	t2 = (T291f9(C, t1));
	if (t2) {
		t1 = (T291f19(C));
		l1 = (T291f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T370f24(GE_void(((T291*)(C))->a1), l1);
		}
	}
	t1 = (T291f20(C));
	t2 = (T291f9(C, t1));
	if (t2) {
		t1 = (T291f20(C));
		t2 = (T291f16(C, t1));
		T370f25(GE_void(((T291*)(C))->a1), t2);
	}
	t1 = (T291f21(C));
	l6 = (T97f16(GE_void(((T291*)(C))->a3), t1));
	t2 = ((l6)!=(EIF_VOID));
	if (t2) {
		l7 = T361c29(((T291*)(C))->a2, l6);
		t1 = (((T361*)(GE_void(l7)))->a1);
		T370f26(GE_void(((T291*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_GEPP_COMMAND.set_fileset */
void T370f26(T0* C, T0* a1)
{
	((T370*)(C))->a6 = a1;
}

/* GEANT_GEPP_TASK.fileset_element_name */
unsigned char ge106os8847 = '\0';
T0* ge106ov8847;
T0* T291f21(T0* C)
{
	T0* R = 0;
	if (ge106os8847) {
		return ge106ov8847;
	} else {
		ge106os8847 = '\1';
		ge106ov8847 = R;
	}
	R = GE_ms("fileset", 7);
	ge106ov8847 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_force */
void T370f25(T0* C, T1 a1)
{
	((T370*)(C))->a9 = a1;
}

/* GEANT_GEPP_TASK.force_attribute_name */
unsigned char ge106os8846 = '\0';
T0* ge106ov8846;
T0* T291f20(T0* C)
{
	T0* R = 0;
	if (ge106os8846) {
		return ge106ov8846;
	} else {
		ge106os8846 = '\1';
		ge106ov8846 = R;
	}
	R = GE_ms("force", 5);
	ge106ov8846 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_to_directory */
void T370f24(T0* C, T0* a1)
{
	((T370*)(C))->a8 = a1;
}

/* GEANT_GEPP_TASK.to_directory_attribute_name */
unsigned char ge106os8845 = '\0';
T0* ge106ov8845;
T0* T291f19(T0* C)
{
	T0* R = 0;
	if (ge106os8845) {
		return ge106ov8845;
	} else {
		ge106os8845 = '\1';
		ge106ov8845 = R;
	}
	R = GE_ms("to_directory", 12);
	ge106ov8845 = R;
	return R;
}

/* GEANT_GEPP_TASK.elements_by_name */
T0* T291f18(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T291*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T291f27(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEPP_TASK.string_ */
T0* T291f27(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GEPP_TASK.define_element_name */
unsigned char ge106os8844 = '\0';
T0* ge106ov8844;
T0* T291f17(T0* C)
{
	T0* R = 0;
	if (ge106os8844) {
		return ge106ov8844;
	} else {
		ge106os8844 = '\1';
		ge106ov8844 = R;
	}
	R = GE_ms("define", 6);
	ge106ov8844 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_empty_lines */
void T370f23(T0* C, T1 a1)
{
	((T370*)(C))->a7 = a1;
}

/* GEANT_GEPP_TASK.boolean_value */
T1 T291f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T291f13(C, a1));
	t1 = (T291f27(C));
	t2 = (T291f28(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T291f27(C));
		t2 = (T291f29(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEPP_TASK.std */
T0* T291f24(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GEPP_TASK.false_attribute_value */
T0* T291f29(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GEPP_TASK.true_attribute_value */
T0* T291f28(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GEPP_TASK.lines_attribute_name */
unsigned char ge106os8843 = '\0';
T0* ge106ov8843;
T0* T291f15(T0* C)
{
	T0* R = 0;
	if (ge106os8843) {
		return ge106ov8843;
	} else {
		ge106os8843 = '\1';
		ge106ov8843 = R;
	}
	R = GE_ms("lines", 5);
	ge106ov8843 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_output_filename */
void T370f22(T0* C, T0* a1)
{
	((T370*)(C))->a5 = a1;
}

/* GEANT_GEPP_TASK.output_filename_attribute_name */
unsigned char ge106os8842 = '\0';
T0* ge106ov8842;
T0* T291f14(T0* C)
{
	T0* R = 0;
	if (ge106os8842) {
		return ge106ov8842;
	} else {
		ge106os8842 = '\1';
		ge106ov8842 = R;
	}
	R = GE_ms("output", 6);
	ge106ov8842 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_input_filename */
void T370f21(T0* C, T0* a1)
{
	((T370*)(C))->a4 = a1;
}

/* GEANT_GEPP_TASK.attribute_value */
T0* T291f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T291*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T291f26(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T291f26(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T291f6(C));
		t4 = (((T22*)(GE_void(((T291*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T291f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEPP_TASK.project_variables_resolver */
T0* T291f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GEPP_TASK.target_arguments_stack */
T0* T291f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GEPP_TASK.has_attribute */
T1 T291f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T291*)(C))->a3), a1));
	return R;
}

/* GEANT_GEPP_TASK.input_filename_attribute_name */
unsigned char ge106os8841 = '\0';
T0* ge106ov8841;
T0* T291f12(T0* C)
{
	T0* R = 0;
	if (ge106os8841) {
		return ge106ov8841;
	} else {
		ge106os8841 = '\1';
		ge106ov8841 = R;
	}
	R = GE_ms("input", 5);
	ge106ov8841 = R;
	return R;
}

/* GEANT_GEPP_TASK.task_make */
void T291f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T291f37(C, a1);
	t1 = (((T370*)(GE_void(a1)))->a3);
	T291f38(C, t1, a2);
}

/* GEANT_GEPP_TASK.interpreting_element_make */
void T291f38(T0* C, T0* a1, T0* a2)
{
	T291f39(C, a2);
	T291f40(C, a1);
}

/* GEANT_GEPP_TASK.set_project */
void T291f40(T0* C, T0* a1)
{
	((T291*)(C))->a2 = a1;
}

/* GEANT_GEPP_TASK.element_make */
void T291f39(T0* C, T0* a1)
{
	T291f41(C, a1);
}

/* GEANT_GEPP_TASK.set_xml_element */
void T291f41(T0* C, T0* a1)
{
	((T291*)(C))->a3 = a1;
}

/* GEANT_GEPP_TASK.set_command */
void T291f37(T0* C, T0* a1)
{
	((T291*)(C))->a1 = a1;
}

/* GEANT_GEPP_COMMAND.make */
T0* T370c20(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T370));
	*(T370*)C = GE_default370;
	T370f20p1(C, a1);
	((T370*)(C))->a4 = GE_ms("", 0);
	((T370*)(C))->a5 = GE_ms("", 0);
	((T370*)(C))->a2 = T71c23((T6)(GE_int32(10)));
	return C;
}

/* GEANT_GEPP_COMMAND.make */
void T370f20p1(T0* C, T0* a1)
{
	T370f28(C, a1);
}

/* GEANT_GEPP_COMMAND.set_project */
void T370f28(T0* C, T0* a1)
{
	((T370*)(C))->a3 = a1;
}

/* GEANT_TARGET.gepp_task_name */
unsigned char ge130os2411 = '\0';
T0* ge130ov2411;
T0* T26f57(T0* C)
{
	T0* R = 0;
	if (ge130os2411) {
		return ge130ov2411;
	} else {
		ge130os2411 = '\1';
		ge130ov2411 = R;
	}
	R = GE_ms("gepp", 4);
	ge130ov2411 = R;
	return R;
}

/* GEANT_GEYACC_TASK.make */
T0* T290c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T290));
	*(T290*)C = GE_default290;
	((T290*)(C))->a1 = T369c18(a1);
	T290f35(C, ((T290*)(C))->a1, a2);
	t1 = (T290f12(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f12(C));
		t2 = (T290f13(C, t1));
		T369f19(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f14(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f14(C));
		l1 = (T290f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f20(GE_void(((T290*)(C))->a1), l1);
		}
	}
	t1 = (T290f16(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f16(C));
		t2 = (T290f13(C, t1));
		T369f21(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f17(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f17(C));
		t2 = (T290f13(C, t1));
		T369f22(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f18(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f18(C));
		l1 = (T290f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f23(GE_void(((T290*)(C))->a1), l1);
		}
	}
	t1 = (T290f19(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f19(C));
		l1 = (T290f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f24(GE_void(((T290*)(C))->a1), l1);
		}
	}
	t1 = (T290f20(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f20(C));
		l1 = (T290f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f25(GE_void(((T290*)(C))->a1), l1);
		}
	}
	t1 = (T290f21(C));
	t2 = (T290f9(C, t1));
	if (t2) {
		t1 = (T290f21(C));
		l1 = (T290f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f26(GE_void(((T290*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GEYACC_COMMAND.set_input_filename */
void T369f26(T0* C, T0* a1)
{
	((T369*)(C))->a3 = a1;
}

/* GEANT_GEYACC_TASK.input_filename_attribute_name */
unsigned char ge109os8816 = '\0';
T0* ge109ov8816;
T0* T290f21(T0* C)
{
	T0* R = 0;
	if (ge109os8816) {
		return ge109ov8816;
	} else {
		ge109os8816 = '\1';
		ge109ov8816 = R;
	}
	R = GE_ms("input", 5);
	ge109ov8816 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_output_filename */
void T369f25(T0* C, T0* a1)
{
	((T369*)(C))->a4 = a1;
}

/* GEANT_GEYACC_TASK.output_filename_attribute_name */
unsigned char ge109os8815 = '\0';
T0* ge109ov8815;
T0* T290f20(T0* C)
{
	T0* R = 0;
	if (ge109os8815) {
		return ge109ov8815;
	} else {
		ge109os8815 = '\1';
		ge109ov8815 = R;
	}
	R = GE_ms("output", 6);
	ge109ov8815 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_tokens_filename */
void T369f24(T0* C, T0* a1)
{
	((T369*)(C))->a10 = a1;
}

/* GEANT_GEYACC_TASK.tokens_filename_attribute_name */
unsigned char ge109os8814 = '\0';
T0* ge109ov8814;
T0* T290f19(T0* C)
{
	T0* R = 0;
	if (ge109os8814) {
		return ge109ov8814;
	} else {
		ge109os8814 = '\1';
		ge109ov8814 = R;
	}
	R = GE_ms("tokens_file", 11);
	ge109ov8814 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_tokens_classname */
void T369f23(T0* C, T0* a1)
{
	((T369*)(C))->a9 = a1;
}

/* GEANT_GEYACC_TASK.tokens_classname_attribute_name */
unsigned char ge109os8813 = '\0';
T0* ge109ov8813;
T0* T290f18(T0* C)
{
	T0* R = 0;
	if (ge109os8813) {
		return ge109ov8813;
	} else {
		ge109os8813 = '\1';
		ge109ov8813 = R;
	}
	R = GE_ms("tokens", 6);
	ge109ov8813 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_new_typing */
void T369f22(T0* C, T1 a1)
{
	((T369*)(C))->a8 = a1;
}

/* GEANT_GEYACC_TASK.new_typing_attribute_name */
unsigned char ge109os8818 = '\0';
T0* ge109ov8818;
T0* T290f17(T0* C)
{
	T0* R = 0;
	if (ge109os8818) {
		return ge109ov8818;
	} else {
		ge109os8818 = '\1';
		ge109ov8818 = R;
	}
	R = GE_ms("new_typing", 10);
	ge109ov8818 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_old_typing */
void T369f21(T0* C, T1 a1)
{
	((T369*)(C))->a7 = a1;
}

/* GEANT_GEYACC_TASK.old_typing_attribute_name */
unsigned char ge109os8817 = '\0';
T0* ge109ov8817;
T0* T290f16(T0* C)
{
	T0* R = 0;
	if (ge109os8817) {
		return ge109ov8817;
	} else {
		ge109os8817 = '\1';
		ge109ov8817 = R;
	}
	R = GE_ms("old_typing", 10);
	ge109ov8817 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_verbose_filename */
void T369f20(T0* C, T0* a1)
{
	((T369*)(C))->a6 = a1;
}

/* GEANT_GEYACC_TASK.attribute_value */
T0* T290f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T290*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T290f29(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T290f29(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T290f6(C));
		t4 = (((T22*)(GE_void(((T290*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T290f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEYACC_TASK.project_variables_resolver */
T0* T290f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GEYACC_TASK.target_arguments_stack */
T0* T290f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GEYACC_TASK.verbose_filename_attribute_name */
unsigned char ge109os8812 = '\0';
T0* ge109ov8812;
T0* T290f14(T0* C)
{
	T0* R = 0;
	if (ge109os8812) {
		return ge109ov8812;
	} else {
		ge109os8812 = '\1';
		ge109ov8812 = R;
	}
	R = GE_ms("verbose", 7);
	ge109ov8812 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_separate_actions */
void T369f19(T0* C, T1 a1)
{
	((T369*)(C))->a5 = a1;
}

/* GEANT_GEYACC_TASK.boolean_value */
T1 T290f13(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T290f15(C, a1));
	t1 = (T290f26(C));
	t2 = (T290f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T290f26(C));
		t2 = (T290f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T290f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T290f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T290f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T290f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T290f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEYACC_TASK.std */
T0* T290f24(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GEYACC_TASK.false_attribute_value */
T0* T290f28(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GEYACC_TASK.true_attribute_value */
T0* T290f27(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GEYACC_TASK.string_ */
T0* T290f26(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GEYACC_TASK.has_attribute */
T1 T290f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T290*)(C))->a3), a1));
	return R;
}

/* GEANT_GEYACC_TASK.separate_actions_attribute_name */
unsigned char ge109os8811 = '\0';
T0* ge109ov8811;
T0* T290f12(T0* C)
{
	T0* R = 0;
	if (ge109os8811) {
		return ge109ov8811;
	} else {
		ge109os8811 = '\1';
		ge109ov8811 = R;
	}
	R = GE_ms("separate_actions", 16);
	ge109ov8811 = R;
	return R;
}

/* GEANT_GEYACC_TASK.task_make */
void T290f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T290f37(C, a1);
	t1 = (((T369*)(GE_void(a1)))->a2);
	T290f38(C, t1, a2);
}

/* GEANT_GEYACC_TASK.interpreting_element_make */
void T290f38(T0* C, T0* a1, T0* a2)
{
	T290f39(C, a2);
	T290f40(C, a1);
}

/* GEANT_GEYACC_TASK.set_project */
void T290f40(T0* C, T0* a1)
{
	((T290*)(C))->a2 = a1;
}

/* GEANT_GEYACC_TASK.element_make */
void T290f39(T0* C, T0* a1)
{
	T290f41(C, a1);
}

/* GEANT_GEYACC_TASK.set_xml_element */
void T290f41(T0* C, T0* a1)
{
	((T290*)(C))->a3 = a1;
}

/* GEANT_GEYACC_TASK.set_command */
void T290f37(T0* C, T0* a1)
{
	((T290*)(C))->a1 = a1;
}

/* GEANT_GEYACC_COMMAND.make */
T0* T369c18(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T369));
	*(T369*)C = GE_default369;
	T369f18p1(C, a1);
	((T369*)(C))->a4 = GE_ms("", 0);
	((T369*)(C))->a3 = GE_ms("", 0);
	return C;
}

/* GEANT_GEYACC_COMMAND.make */
void T369f18p1(T0* C, T0* a1)
{
	T369f28(C, a1);
}

/* GEANT_GEYACC_COMMAND.set_project */
void T369f28(T0* C, T0* a1)
{
	((T369*)(C))->a2 = a1;
}

/* GEANT_TARGET.geyacc_task_name */
unsigned char ge130os2410 = '\0';
T0* ge130ov2410;
T0* T26f56(T0* C)
{
	T0* R = 0;
	if (ge130os2410) {
		return ge130ov2410;
	} else {
		ge130os2410 = '\1';
		ge130ov2410 = R;
	}
	R = GE_ms("geyacc", 6);
	ge130ov2410 = R;
	return R;
}

/* GEANT_GELEX_TASK.make */
T0* T289c36(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T289));
	*(T289*)C = GE_default289;
	((T289*)(C))->a1 = T368c21(a1);
	T289f38(C, ((T289*)(C))->a1, a2);
	t1 = (T289f12(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f12(C));
		l1 = (T289f13(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T195f45(l1)));
		if (t2) {
			T368f22(GE_void(((T289*)(C))->a1), l1);
		}
	}
	t1 = (T289f14(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f14(C));
		t2 = (T289f15(C, t1));
		T368f23(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f16(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f16(C));
		t2 = (T289f15(C, t1));
		T368f24(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f17(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f17(C));
		t2 = (T289f15(C, t1));
		T368f25(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f18(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f18(C));
		t2 = (T289f15(C, t1));
		T368f26(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f19(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f19(C));
		t2 = (T289f15(C, t1));
		T368f27(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f20(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f20(C));
		t2 = (T289f15(C, t1));
		T368f28(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f21(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f21(C));
		t2 = (T289f15(C, t1));
		T368f29(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f22(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f22(C));
		t2 = (T289f15(C, t1));
		T368f30(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f23(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f23(C));
		l1 = (T289f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T368f31(GE_void(((T289*)(C))->a1), l1);
		}
	}
	t1 = (T289f24(C));
	t2 = (T289f9(C, t1));
	if (t2) {
		t1 = (T289f24(C));
		l1 = (T289f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T368f32(GE_void(((T289*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GELEX_COMMAND.set_input_filename */
void T368f32(T0* C, T0* a1)
{
	((T368*)(C))->a3 = a1;
}

/* GEANT_GELEX_TASK.input_filename_attribute_name */
unsigned char ge105os8782 = '\0';
T0* ge105ov8782;
T0* T289f24(T0* C)
{
	T0* R = 0;
	if (ge105os8782) {
		return ge105ov8782;
	} else {
		ge105os8782 = '\1';
		ge105ov8782 = R;
	}
	R = GE_ms("input", 5);
	ge105ov8782 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_output_filename */
void T368f31(T0* C, T0* a1)
{
	((T368*)(C))->a6 = a1;
}

/* GEANT_GELEX_TASK.output_filename_attribute_name */
unsigned char ge105os8781 = '\0';
T0* ge105ov8781;
T0* T289f23(T0* C)
{
	T0* R = 0;
	if (ge105os8781) {
		return ge105ov8781;
	} else {
		ge105os8781 = '\1';
		ge105ov8781 = R;
	}
	R = GE_ms("output", 6);
	ge105ov8781 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_separate_actions */
void T368f30(T0* C, T1 a1)
{
	((T368*)(C))->a13 = a1;
}

/* GEANT_GELEX_TASK.separate_actions_attribute_name */
unsigned char ge105os8780 = '\0';
T0* ge105ov8780;
T0* T289f22(T0* C)
{
	T0* R = 0;
	if (ge105os8780) {
		return ge105ov8780;
	} else {
		ge105os8780 = '\1';
		ge105ov8780 = R;
	}
	R = GE_ms("separate_actions", 16);
	ge105ov8780 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_no_warn */
void T368f29(T0* C, T1 a1)
{
	((T368*)(C))->a12 = a1;
}

/* GEANT_GELEX_TASK.no_warn_attribute_name */
unsigned char ge105os8779 = '\0';
T0* ge105ov8779;
T0* T289f21(T0* C)
{
	T0* R = 0;
	if (ge105os8779) {
		return ge105ov8779;
	} else {
		ge105os8779 = '\1';
		ge105ov8779 = R;
	}
	R = GE_ms("no_warn", 7);
	ge105ov8779 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_no_default */
void T368f28(T0* C, T1 a1)
{
	((T368*)(C))->a11 = a1;
}

/* GEANT_GELEX_TASK.no_default_attribute_name */
unsigned char ge105os8778 = '\0';
T0* ge105ov8778;
T0* T289f20(T0* C)
{
	T0* R = 0;
	if (ge105os8778) {
		return ge105ov8778;
	} else {
		ge105os8778 = '\1';
		ge105ov8778 = R;
	}
	R = GE_ms("no_default", 10);
	ge105ov8778 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_meta_ecs */
void T368f27(T0* C, T1 a1)
{
	((T368*)(C))->a5 = a1;
}

/* GEANT_GELEX_TASK.meta_ecs_attribute_name */
unsigned char ge105os8777 = '\0';
T0* ge105ov8777;
T0* T289f19(T0* C)
{
	T0* R = 0;
	if (ge105os8777) {
		return ge105ov8777;
	} else {
		ge105os8777 = '\1';
		ge105ov8777 = R;
	}
	R = GE_ms("meta_ecs", 8);
	ge105ov8777 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_case_insensitive */
void T368f26(T0* C, T1 a1)
{
	((T368*)(C))->a10 = a1;
}

/* GEANT_GELEX_TASK.case_insensitive_attribute_name */
unsigned char ge105os8776 = '\0';
T0* ge105ov8776;
T0* T289f18(T0* C)
{
	T0* R = 0;
	if (ge105os8776) {
		return ge105ov8776;
	} else {
		ge105os8776 = '\1';
		ge105ov8776 = R;
	}
	R = GE_ms("case_insensitive", 16);
	ge105ov8776 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_full */
void T368f25(T0* C, T1 a1)
{
	((T368*)(C))->a4 = a1;
}

/* GEANT_GELEX_TASK.full_attribute_name */
unsigned char ge105os8775 = '\0';
T0* ge105ov8775;
T0* T289f17(T0* C)
{
	T0* R = 0;
	if (ge105os8775) {
		return ge105ov8775;
	} else {
		ge105os8775 = '\1';
		ge105ov8775 = R;
	}
	R = GE_ms("full", 4);
	ge105ov8775 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_ecs */
void T368f24(T0* C, T1 a1)
{
	((T368*)(C))->a8 = a1;
}

/* GEANT_GELEX_TASK.ecs_attribute_name */
unsigned char ge105os8774 = '\0';
T0* ge105ov8774;
T0* T289f16(T0* C)
{
	T0* R = 0;
	if (ge105os8774) {
		return ge105ov8774;
	} else {
		ge105os8774 = '\1';
		ge105ov8774 = R;
	}
	R = GE_ms("ecs", 3);
	ge105ov8774 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_backup */
void T368f23(T0* C, T1 a1)
{
	((T368*)(C))->a9 = a1;
}

/* GEANT_GELEX_TASK.boolean_value */
T1 T289f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T289f13(C, a1));
	t1 = (T289f30(C));
	t2 = (T289f31(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T289f30(C));
		t2 = (T289f32(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T289f27(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T289f27(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T289f27(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T289f27(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T289f27(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GELEX_TASK.std */
T0* T289f27(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GELEX_TASK.false_attribute_value */
T0* T289f32(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GELEX_TASK.true_attribute_value */
T0* T289f31(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GELEX_TASK.string_ */
T0* T289f30(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GELEX_TASK.backup_attribute_name */
unsigned char ge105os8773 = '\0';
T0* ge105ov8773;
T0* T289f14(T0* C)
{
	T0* R = 0;
	if (ge105os8773) {
		return ge105ov8773;
	} else {
		ge105os8773 = '\1';
		ge105ov8773 = R;
	}
	R = GE_ms("backup", 6);
	ge105ov8773 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_size */
void T368f22(T0* C, T0* a1)
{
	((T368*)(C))->a7 = a1;
}

/* GEANT_GELEX_TASK.attribute_value */
T0* T289f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T289*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T289f29(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T289f29(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T289f6(C));
		t4 = (((T22*)(GE_void(((T289*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T289f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GELEX_TASK.project_variables_resolver */
T0* T289f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GELEX_TASK.target_arguments_stack */
T0* T289f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GELEX_TASK.has_attribute */
T1 T289f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T289*)(C))->a3), a1));
	return R;
}

/* GEANT_GELEX_TASK.size_attribute_name */
unsigned char ge105os8772 = '\0';
T0* ge105ov8772;
T0* T289f12(T0* C)
{
	T0* R = 0;
	if (ge105os8772) {
		return ge105ov8772;
	} else {
		ge105os8772 = '\1';
		ge105ov8772 = R;
	}
	R = GE_ms("size", 4);
	ge105ov8772 = R;
	return R;
}

/* GEANT_GELEX_TASK.task_make */
void T289f38(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T289f40(C, a1);
	t1 = (((T368*)(GE_void(a1)))->a2);
	T289f41(C, t1, a2);
}

/* GEANT_GELEX_TASK.interpreting_element_make */
void T289f41(T0* C, T0* a1, T0* a2)
{
	T289f42(C, a2);
	T289f43(C, a1);
}

/* GEANT_GELEX_TASK.set_project */
void T289f43(T0* C, T0* a1)
{
	((T289*)(C))->a2 = a1;
}

/* GEANT_GELEX_TASK.element_make */
void T289f42(T0* C, T0* a1)
{
	T289f44(C, a1);
}

/* GEANT_GELEX_TASK.set_xml_element */
void T289f44(T0* C, T0* a1)
{
	((T289*)(C))->a3 = a1;
}

/* GEANT_GELEX_TASK.set_command */
void T289f40(T0* C, T0* a1)
{
	((T289*)(C))->a1 = a1;
}

/* GEANT_GELEX_COMMAND.make */
T0* T368c21(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T368));
	*(T368*)C = GE_default368;
	T368f21p1(C, a1);
	((T368*)(C))->a6 = GE_ms("", 0);
	((T368*)(C))->a3 = GE_ms("", 0);
	((T368*)(C))->a7 = GE_ms("", 0);
	((T368*)(C))->a8 = EIF_TRUE;
	((T368*)(C))->a5 = EIF_TRUE;
	return C;
}

/* GEANT_GELEX_COMMAND.make */
void T368f21p1(T0* C, T0* a1)
{
	T368f34(C, a1);
}

/* GEANT_GELEX_COMMAND.set_project */
void T368f34(T0* C, T0* a1)
{
	((T368*)(C))->a2 = a1;
}

/* GEANT_TARGET.gelex_task_name */
unsigned char ge130os2409 = '\0';
T0* ge130ov2409;
T0* T26f55(T0* C)
{
	T0* R = 0;
	if (ge130os2409) {
		return ge130ov2409;
	} else {
		ge130os2409 = '\1';
		ge130ov2409 = R;
	}
	R = GE_ms("gelex", 5);
	ge130ov2409 = R;
	return R;
}

/* GEANT_GEXACE_TASK.make */
T0* T288c34(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T288));
	*(T288*)C = GE_default288;
	((T288*)(C))->a1 = T366c22(a1);
	T288f36(C, ((T288*)(C))->a1, a2);
	t1 = (T288f12(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f12(C));
		t2 = (T288f13(C, t1));
		T366f23(GE_void(((T288*)(C))->a1), t2);
	}
	t1 = (T288f14(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f14(C));
		t2 = (T288f13(C, t1));
		T366f24(GE_void(((T288*)(C))->a1), t2);
	}
	t1 = (T288f15(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f15(C));
		l2 = (T288f16(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f25(GE_void(((T288*)(C))->a1), l2);
		}
	}
	t1 = (T288f17(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f17(C));
		l2 = (T288f16(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f26(GE_void(((T288*)(C))->a1), l2);
		}
	}
	t1 = (T288f18(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f18(C));
		l2 = (T288f16(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f27(GE_void(((T288*)(C))->a1), l2);
		}
	}
	t1 = (T288f19(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f19(C));
		l2 = (T288f16(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f28(GE_void(((T288*)(C))->a1), l2);
		}
	}
	t1 = (T288f20(C));
	t2 = (T288f9(C, t1));
	if (t2) {
		t1 = (T288f20(C));
		l2 = (T288f16(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f29(GE_void(((T288*)(C))->a1), l2);
		}
	}
	t1 = (T288f21(C));
	l3 = (T288f22(C, t1));
	l4 = (T116f5(GE_void(l3)));
	T117f8(GE_void(l4));
	t2 = (((T117*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l4)));
		l5 = T367c16(((T288*)(C))->a2, t1);
		t2 = (T367f7(GE_void(l5)));
		if (t2) {
			t2 = (T367f10(GE_void(l5)));
		}
		if (t2) {
			t2 = (T367f3(GE_void(l5)));
		}
		if (t2) {
			l1 = (T367f4(GE_void(l5)));
			l2 = (T367f5(GE_void(l5)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T366*)(GE_void(((T288*)(C))->a1)))->a2);
				T80f69(GE_void(t1), l2, l1);
			}
		}
		T117f9(GE_void(l4));
		t2 = (((T117*)(GE_void(l4)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].force_last */
void T80f69(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T80f53(C);
	T80f57(C, a2);
	t1 = ((((T80*)(C))->a8)!=((T6)(GE_int32(0))));
	if (t1) {
		T80f61(C, a1, ((T80*)(C))->a8);
	} else {
		l1 = ((T6)((((T80*)(C))->a6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T80*)(C))->a4));
		if (t1) {
			t2 = (T80f32(C, l1));
			T80f58(C, t2);
			l2 = (T80f35(C, a2));
		} else {
			l2 = ((T80*)(C))->a18;
		}
		t2 = (T80f36(C, l2));
		T80f59(C, t2, l1);
		T80f60(C, l1, l2);
		T80f61(C, a1, l1);
		T80f62(C, a2, l1);
		((T80*)(C))->a6 = l1;
		((T80*)(C))->a17 = ((T6)((((T80*)(C))->a17)+((T6)(GE_int32(1)))));
	}
}

/* GEANT_GEXACE_TASK.elements_by_name */
T0* T288f22(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T288*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T288f27(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEXACE_TASK.string_ */
T0* T288f27(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GEXACE_TASK.define_element_name */
unsigned char ge108os8746 = '\0';
T0* ge108ov8746;
T0* T288f21(T0* C)
{
	T0* R = 0;
	if (ge108os8746) {
		return ge108ov8746;
	} else {
		ge108os8746 = '\1';
		ge108ov8746 = R;
	}
	R = GE_ms("define", 6);
	ge108ov8746 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_output_filename */
void T366f29(T0* C, T0* a1)
{
	((T366*)(C))->a5 = a1;
}

/* GEANT_GEXACE_TASK.output_filename_attribute_name */
unsigned char ge108os8745 = '\0';
T0* ge108ov8745;
T0* T288f20(T0* C)
{
	T0* R = 0;
	if (ge108os8745) {
		return ge108ov8745;
	} else {
		ge108os8745 = '\1';
		ge108ov8745 = R;
	}
	R = GE_ms("output", 6);
	ge108ov8745 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_xace_filename */
void T366f28(T0* C, T0* a1)
{
	((T366*)(C))->a10 = a1;
}

/* GEANT_GEXACE_TASK.xace_filename_attribute_name */
unsigned char ge108os8744 = '\0';
T0* ge108ov8744;
T0* T288f19(T0* C)
{
	T0* R = 0;
	if (ge108os8744) {
		return ge108ov8744;
	} else {
		ge108os8744 = '\1';
		ge108ov8744 = R;
	}
	R = GE_ms("xace", 4);
	ge108ov8744 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_format */
void T366f27(T0* C, T0* a1)
{
	((T366*)(C))->a9 = a1;
}

/* GEANT_GEXACE_TASK.format_attribute_name */
unsigned char ge108os8743 = '\0';
T0* ge108ov8743;
T0* T288f18(T0* C)
{
	T0* R = 0;
	if (ge108os8743) {
		return ge108ov8743;
	} else {
		ge108os8743 = '\1';
		ge108ov8743 = R;
	}
	R = GE_ms("format", 6);
	ge108ov8743 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_library_command */
void T366f26(T0* C, T0* a1)
{
	((T366*)(C))->a7 = a1;
}

/* GEANT_GEXACE_TASK.library_attribute_name */
unsigned char ge108os8742 = '\0';
T0* ge108ov8742;
T0* T288f17(T0* C)
{
	T0* R = 0;
	if (ge108os8742) {
		return ge108ov8742;
	} else {
		ge108os8742 = '\1';
		ge108ov8742 = R;
	}
	R = GE_ms("library", 7);
	ge108ov8742 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_system_command */
void T366f25(T0* C, T0* a1)
{
	((T366*)(C))->a6 = a1;
}

/* GEANT_GEXACE_TASK.attribute_value */
T0* T288f16(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T288*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T288f30(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T288f30(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T288f6(C));
		t4 = (((T22*)(GE_void(((T288*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T288f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEXACE_TASK.project_variables_resolver */
T0* T288f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GEXACE_TASK.target_arguments_stack */
T0* T288f30(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GEXACE_TASK.system_attribute_name */
unsigned char ge108os8741 = '\0';
T0* ge108ov8741;
T0* T288f15(T0* C)
{
	T0* R = 0;
	if (ge108os8741) {
		return ge108ov8741;
	} else {
		ge108os8741 = '\1';
		ge108ov8741 = R;
	}
	R = GE_ms("system", 6);
	ge108ov8741 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_validate_command */
void T366f24(T0* C, T1 a1)
{
	((T366*)(C))->a4 = a1;
}

/* GEANT_GEXACE_TASK.validate_attribute_name */
unsigned char ge108os8740 = '\0';
T0* ge108ov8740;
T0* T288f14(T0* C)
{
	T0* R = 0;
	if (ge108os8740) {
		return ge108ov8740;
	} else {
		ge108os8740 = '\1';
		ge108ov8740 = R;
	}
	R = GE_ms("validate", 8);
	ge108ov8740 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_verbose */
void T366f23(T0* C, T1 a1)
{
	((T366*)(C))->a8 = a1;
}

/* GEANT_GEXACE_TASK.boolean_value */
T1 T288f13(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T288f16(C, a1));
	t1 = (T288f27(C));
	t2 = (T288f28(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T288f27(C));
		t2 = (T288f29(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T288f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T288f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T288f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T288f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T288f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEXACE_TASK.std */
T0* T288f25(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GEXACE_TASK.false_attribute_value */
T0* T288f29(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GEXACE_TASK.true_attribute_value */
T0* T288f28(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GEXACE_TASK.has_attribute */
T1 T288f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T288*)(C))->a3), a1));
	return R;
}

/* GEANT_GEXACE_TASK.verbose_attribute_name */
unsigned char ge108os8739 = '\0';
T0* ge108ov8739;
T0* T288f12(T0* C)
{
	T0* R = 0;
	if (ge108os8739) {
		return ge108ov8739;
	} else {
		ge108os8739 = '\1';
		ge108ov8739 = R;
	}
	R = GE_ms("verbose", 7);
	ge108ov8739 = R;
	return R;
}

/* GEANT_GEXACE_TASK.task_make */
void T288f36(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T288f38(C, a1);
	t1 = (((T366*)(GE_void(a1)))->a3);
	T288f39(C, t1, a2);
}

/* GEANT_GEXACE_TASK.interpreting_element_make */
void T288f39(T0* C, T0* a1, T0* a2)
{
	T288f40(C, a2);
	T288f41(C, a1);
}

/* GEANT_GEXACE_TASK.set_project */
void T288f41(T0* C, T0* a1)
{
	((T288*)(C))->a2 = a1;
}

/* GEANT_GEXACE_TASK.element_make */
void T288f40(T0* C, T0* a1)
{
	T288f42(C, a1);
}

/* GEANT_GEXACE_TASK.set_xml_element */
void T288f42(T0* C, T0* a1)
{
	((T288*)(C))->a3 = a1;
}

/* GEANT_GEXACE_TASK.set_command */
void T288f38(T0* C, T0* a1)
{
	((T288*)(C))->a1 = a1;
}

/* GEANT_GEXACE_COMMAND.make */
T0* T366c22(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T366));
	*(T366*)C = GE_default366;
	T366f22p1(C, a1);
	((T366*)(C))->a2 = T80c46((T6)(GE_int32(10)));
	l1 = T59c3();
	T80f44(GE_void(((T366*)(C))->a2), l1);
	return C;
}

/* GEANT_GEXACE_COMMAND.make */
void T366f22p1(T0* C, T0* a1)
{
	T366f31(C, a1);
}

/* GEANT_GEXACE_COMMAND.set_project */
void T366f31(T0* C, T0* a1)
{
	((T366*)(C))->a3 = a1;
}

/* GEANT_TARGET.gexace_task_name */
unsigned char ge130os2408 = '\0';
T0* ge130ov2408;
T0* T26f54(T0* C)
{
	T0* R = 0;
	if (ge130os2408) {
		return ge130ov2408;
	} else {
		ge130os2408 = '\1';
		ge130ov2408 = R;
	}
	R = GE_ms("gexace", 6);
	ge130ov2408 = R;
	return R;
}

/* GEANT_UNSET_TASK.make */
T0* T287c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T287));
	*(T287*)C = GE_default287;
	((T287*)(C))->a1 = T365c6(a1);
	T287f24(C, ((T287*)(C))->a1, a2);
	t1 = (T287f12(C));
	t2 = (T287f9(C, t1));
	if (t2) {
		t1 = (T287f12(C));
		l1 = (T287f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T365f7(GE_void(((T287*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_UNSET_COMMAND.set_name */
void T365f7(T0* C, T0* a1)
{
	((T365*)(C))->a3 = a1;
}

/* GEANT_UNSET_TASK.attribute_value */
T0* T287f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T287*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T287f18(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T287f18(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T287f6(C));
		t4 = (((T22*)(GE_void(((T287*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T287f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_UNSET_TASK.project_variables_resolver */
T0* T287f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_UNSET_TASK.target_arguments_stack */
T0* T287f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_UNSET_TASK.has_attribute */
T1 T287f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T287*)(C))->a3), a1));
	return R;
}

/* GEANT_UNSET_TASK.name_attribute_name */
unsigned char ge122os8731 = '\0';
T0* ge122ov8731;
T0* T287f12(T0* C)
{
	T0* R = 0;
	if (ge122os8731) {
		return ge122ov8731;
	} else {
		ge122os8731 = '\1';
		ge122ov8731 = R;
	}
	R = GE_ms("name", 4);
	ge122ov8731 = R;
	return R;
}

/* GEANT_UNSET_TASK.task_make */
void T287f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T287f26(C, a1);
	t1 = (((T365*)(GE_void(a1)))->a2);
	T287f27(C, t1, a2);
}

/* GEANT_UNSET_TASK.interpreting_element_make */
void T287f27(T0* C, T0* a1, T0* a2)
{
	T287f28(C, a2);
	T287f29(C, a1);
}

/* GEANT_UNSET_TASK.set_project */
void T287f29(T0* C, T0* a1)
{
	((T287*)(C))->a2 = a1;
}

/* GEANT_UNSET_TASK.element_make */
void T287f28(T0* C, T0* a1)
{
	T287f30(C, a1);
}

/* GEANT_UNSET_TASK.set_xml_element */
void T287f30(T0* C, T0* a1)
{
	((T287*)(C))->a3 = a1;
}

/* GEANT_UNSET_TASK.set_command */
void T287f26(T0* C, T0* a1)
{
	((T287*)(C))->a1 = a1;
}

/* GEANT_UNSET_COMMAND.make */
T0* T365c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T365));
	*(T365*)C = GE_default365;
	T365f9(C, a1);
	return C;
}

/* GEANT_UNSET_COMMAND.set_project */
void T365f9(T0* C, T0* a1)
{
	((T365*)(C))->a2 = a1;
}

/* GEANT_TARGET.unset_task_name */
unsigned char ge130os2407 = '\0';
T0* ge130ov2407;
T0* T26f53(T0* C)
{
	T0* R = 0;
	if (ge130os2407) {
		return ge130ov2407;
	} else {
		ge130os2407 = '\1';
		ge130ov2407 = R;
	}
	R = GE_ms("unset", 5);
	ge130ov2407 = R;
	return R;
}

/* GEANT_SET_TASK.make */
T0* T286c23(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T286));
	*(T286*)C = GE_default286;
	((T286*)(C))->a1 = T364c7(a1);
	T286f25(C, ((T286*)(C))->a1, a2);
	t1 = (T286f12(C));
	t2 = (T286f9(C, t1));
	if (t2) {
		t1 = (T286f12(C));
		l1 = (T286f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f8(GE_void(((T286*)(C))->a1), l1);
		}
	}
	t1 = (T286f14(C));
	t2 = (T286f9(C, t1));
	if (t2) {
		t1 = (T286f14(C));
		l1 = (T286f13(C, t1));
		T364f9(GE_void(((T286*)(C))->a1), l1);
	}
	return C;
}

/* GEANT_SET_COMMAND.set_value */
void T364f9(T0* C, T0* a1)
{
	((T364*)(C))->a4 = a1;
}

/* GEANT_SET_TASK.value_attribute_name */
unsigned char ge119os8721 = '\0';
T0* ge119ov8721;
T0* T286f14(T0* C)
{
	T0* R = 0;
	if (ge119os8721) {
		return ge119ov8721;
	} else {
		ge119os8721 = '\1';
		ge119ov8721 = R;
	}
	R = GE_ms("value", 5);
	ge119ov8721 = R;
	return R;
}

/* GEANT_SET_COMMAND.set_name */
void T364f8(T0* C, T0* a1)
{
	((T364*)(C))->a3 = a1;
}

/* GEANT_SET_TASK.attribute_value */
T0* T286f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T286*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T286f19(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T286f19(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T286f6(C));
		t4 = (((T22*)(GE_void(((T286*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T286f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SET_TASK.project_variables_resolver */
T0* T286f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_SET_TASK.target_arguments_stack */
T0* T286f19(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_SET_TASK.has_attribute */
T1 T286f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T286*)(C))->a3), a1));
	return R;
}

/* GEANT_SET_TASK.name_attribute_name */
unsigned char ge119os8720 = '\0';
T0* ge119ov8720;
T0* T286f12(T0* C)
{
	T0* R = 0;
	if (ge119os8720) {
		return ge119ov8720;
	} else {
		ge119os8720 = '\1';
		ge119ov8720 = R;
	}
	R = GE_ms("name", 4);
	ge119ov8720 = R;
	return R;
}

/* GEANT_SET_TASK.task_make */
void T286f25(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T286f27(C, a1);
	t1 = (((T364*)(GE_void(a1)))->a2);
	T286f28(C, t1, a2);
}

/* GEANT_SET_TASK.interpreting_element_make */
void T286f28(T0* C, T0* a1, T0* a2)
{
	T286f29(C, a2);
	T286f30(C, a1);
}

/* GEANT_SET_TASK.set_project */
void T286f30(T0* C, T0* a1)
{
	((T286*)(C))->a2 = a1;
}

/* GEANT_SET_TASK.element_make */
void T286f29(T0* C, T0* a1)
{
	T286f31(C, a1);
}

/* GEANT_SET_TASK.set_xml_element */
void T286f31(T0* C, T0* a1)
{
	((T286*)(C))->a3 = a1;
}

/* GEANT_SET_TASK.set_command */
void T286f27(T0* C, T0* a1)
{
	((T286*)(C))->a1 = a1;
}

/* GEANT_SET_COMMAND.make */
T0* T364c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T364));
	*(T364*)C = GE_default364;
	T364f11(C, a1);
	return C;
}

/* GEANT_SET_COMMAND.set_project */
void T364f11(T0* C, T0* a1)
{
	((T364*)(C))->a2 = a1;
}

/* GEANT_TARGET.set_task_name */
unsigned char ge130os2406 = '\0';
T0* ge130ov2406;
T0* T26f52(T0* C)
{
	T0* R = 0;
	if (ge130os2406) {
		return ge130ov2406;
	} else {
		ge130os2406 = '\1';
		ge130ov2406 = R;
	}
	R = GE_ms("set", 3);
	ge130ov2406 = R;
	return R;
}

/* GEANT_LCC_TASK.make */
T0* T285c23(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T285));
	*(T285*)C = GE_default285;
	((T285*)(C))->a1 = T363c12(a1);
	T285f25(C, ((T285*)(C))->a1, a2);
	t1 = (T285f12(C));
	t2 = (T285f9(C, t1));
	if (t2) {
		t1 = (T285f12(C));
		l1 = (T285f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T363f13(GE_void(((T285*)(C))->a1), l1);
		}
	}
	t1 = (T285f14(C));
	t2 = (T285f9(C, t1));
	if (t2) {
		t1 = (T285f14(C));
		l1 = (T285f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T363f14(GE_void(((T285*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_LCC_COMMAND.set_source_filename */
void T363f14(T0* C, T0* a1)
{
	((T363*)(C))->a4 = a1;
}

/* GEANT_LCC_TASK.source_filename_attribute_name */
unsigned char ge112os8710 = '\0';
T0* ge112ov8710;
T0* T285f14(T0* C)
{
	T0* R = 0;
	if (ge112os8710) {
		return ge112ov8710;
	} else {
		ge112os8710 = '\1';
		ge112ov8710 = R;
	}
	R = GE_ms("sourcefilename", 14);
	ge112ov8710 = R;
	return R;
}

/* GEANT_LCC_COMMAND.set_executable */
void T363f13(T0* C, T0* a1)
{
	((T363*)(C))->a3 = a1;
}

/* GEANT_LCC_TASK.attribute_value */
T0* T285f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T285*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T285f19(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T285f19(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T285f6(C));
		t4 = (((T22*)(GE_void(((T285*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T285f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_LCC_TASK.project_variables_resolver */
T0* T285f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_LCC_TASK.target_arguments_stack */
T0* T285f19(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_LCC_TASK.has_attribute */
T1 T285f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T285*)(C))->a3), a1));
	return R;
}

/* GEANT_LCC_TASK.executable_attribute_name */
unsigned char ge112os8709 = '\0';
T0* ge112ov8709;
T0* T285f12(T0* C)
{
	T0* R = 0;
	if (ge112os8709) {
		return ge112ov8709;
	} else {
		ge112os8709 = '\1';
		ge112ov8709 = R;
	}
	R = GE_ms("executable", 10);
	ge112ov8709 = R;
	return R;
}

/* GEANT_LCC_TASK.task_make */
void T285f25(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T285f27(C, a1);
	t1 = (((T363*)(GE_void(a1)))->a2);
	T285f28(C, t1, a2);
}

/* GEANT_LCC_TASK.interpreting_element_make */
void T285f28(T0* C, T0* a1, T0* a2)
{
	T285f29(C, a2);
	T285f30(C, a1);
}

/* GEANT_LCC_TASK.set_project */
void T285f30(T0* C, T0* a1)
{
	((T285*)(C))->a2 = a1;
}

/* GEANT_LCC_TASK.element_make */
void T285f29(T0* C, T0* a1)
{
	T285f31(C, a1);
}

/* GEANT_LCC_TASK.set_xml_element */
void T285f31(T0* C, T0* a1)
{
	((T285*)(C))->a3 = a1;
}

/* GEANT_LCC_TASK.set_command */
void T285f27(T0* C, T0* a1)
{
	((T285*)(C))->a1 = a1;
}

/* GEANT_LCC_COMMAND.make */
T0* T363c12(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T363));
	*(T363*)C = GE_default363;
	T363f16(C, a1);
	return C;
}

/* GEANT_LCC_COMMAND.set_project */
void T363f16(T0* C, T0* a1)
{
	((T363*)(C))->a2 = a1;
}

/* GEANT_TARGET.lcc_task_name */
unsigned char ge130os2405 = '\0';
T0* ge130ov2405;
T0* T26f51(T0* C)
{
	T0* R = 0;
	if (ge130os2405) {
		return ge130ov2405;
	} else {
		ge130os2405 = '\1';
		ge130ov2405 = R;
	}
	R = GE_ms("lcc", 3);
	ge130ov2405 = R;
	return R;
}

/* GEANT_EXEC_TASK.make */
T0* T284c29(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T284));
	*(T284*)C = GE_default284;
	((T284*)(C))->a1 = T360c12(a1);
	T284f31(C, ((T284*)(C))->a1, a2);
	t1 = (T284f12(C));
	t2 = (T284f9(C, t1));
	if (t2) {
		t1 = (T284f12(C));
		l1 = (T284f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T360f13(GE_void(((T284*)(C))->a1), l1);
		}
	}
	t1 = (T284f14(C));
	t2 = (T284f9(C, t1));
	if (t2) {
		t1 = (T284f14(C));
		l1 = (T284f13(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T360f14(GE_void(((T284*)(C))->a1), l1);
		}
	}
	t1 = (T284f15(C));
	t2 = (T284f9(C, t1));
	if (t2) {
		t1 = (T284f15(C));
		t2 = (T284f16(C, t1));
		T360f15(GE_void(((T284*)(C))->a1), t2);
	}
	t1 = (T284f17(C));
	l2 = (T97f16(GE_void(((T284*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T361c29(((T284*)(C))->a2, l2);
		t1 = (((T361*)(GE_void(l3)))->a1);
		T360f16(GE_void(((T284*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_EXEC_COMMAND.set_fileset */
void T360f16(T0* C, T0* a1)
{
	((T360*)(C))->a4 = a1;
	T362f34(GE_void(((T360*)(C))->a4), EIF_TRUE);
}

/* GEANT_EXEC_TASK.fileset_element_name */
unsigned char ge101os8693 = '\0';
T0* ge101ov8693;
T0* T284f17(T0* C)
{
	T0* R = 0;
	if (ge101os8693) {
		return ge101ov8693;
	} else {
		ge101os8693 = '\1';
		ge101ov8693 = R;
	}
	R = GE_ms("fileset", 7);
	ge101ov8693 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_accept_errors */
void T360f15(T0* C, T1 a1)
{
	((T360*)(C))->a6 = a1;
}

/* GEANT_EXEC_TASK.boolean_value */
T1 T284f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T284f13(C, a1));
	t1 = (T284f23(C));
	t2 = (T284f24(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T284f23(C));
		t2 = (T284f25(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T284f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T284f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T284f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T284f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T284f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_EXEC_TASK.std */
T0* T284f20(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_EXEC_TASK.false_attribute_value */
T0* T284f25(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_EXEC_TASK.true_attribute_value */
T0* T284f24(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_EXEC_TASK.string_ */
T0* T284f23(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_EXEC_TASK.accept_errors_attribute_name */
unsigned char ge101os8691 = '\0';
T0* ge101ov8691;
T0* T284f15(T0* C)
{
	T0* R = 0;
	if (ge101os8691) {
		return ge101ov8691;
	} else {
		ge101os8691 = '\1';
		ge101ov8691 = R;
	}
	R = GE_ms("accept_errors", 13);
	ge101ov8691 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_exit_code_variable_name */
void T360f14(T0* C, T0* a1)
{
	((T360*)(C))->a5 = a1;
}

/* GEANT_EXEC_TASK.exit_code_variable_attribute_name */
unsigned char ge101os8692 = '\0';
T0* ge101ov8692;
T0* T284f14(T0* C)
{
	T0* R = 0;
	if (ge101os8692) {
		return ge101ov8692;
	} else {
		ge101os8692 = '\1';
		ge101ov8692 = R;
	}
	R = GE_ms("exit_code_variable", 18);
	ge101ov8692 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_command_line */
void T360f13(T0* C, T0* a1)
{
	((T360*)(C))->a3 = a1;
}

/* GEANT_EXEC_TASK.attribute_value */
T0* T284f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T284*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T284f22(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T284f22(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T284f6(C));
		t4 = (((T22*)(GE_void(((T284*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T284f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_EXEC_TASK.project_variables_resolver */
T0* T284f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_EXEC_TASK.target_arguments_stack */
T0* T284f22(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_EXEC_TASK.has_attribute */
T1 T284f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T284*)(C))->a3), a1));
	return R;
}

/* GEANT_EXEC_TASK.executable_attribute_name */
unsigned char ge101os8690 = '\0';
T0* ge101ov8690;
T0* T284f12(T0* C)
{
	T0* R = 0;
	if (ge101os8690) {
		return ge101ov8690;
	} else {
		ge101os8690 = '\1';
		ge101ov8690 = R;
	}
	R = GE_ms("executable", 10);
	ge101ov8690 = R;
	return R;
}

/* GEANT_EXEC_TASK.task_make */
void T284f31(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T284f33(C, a1);
	t1 = (((T360*)(GE_void(a1)))->a2);
	T284f34(C, t1, a2);
}

/* GEANT_EXEC_TASK.interpreting_element_make */
void T284f34(T0* C, T0* a1, T0* a2)
{
	T284f35(C, a2);
	T284f36(C, a1);
}

/* GEANT_EXEC_TASK.set_project */
void T284f36(T0* C, T0* a1)
{
	((T284*)(C))->a2 = a1;
}

/* GEANT_EXEC_TASK.element_make */
void T284f35(T0* C, T0* a1)
{
	T284f37(C, a1);
}

/* GEANT_EXEC_TASK.set_xml_element */
void T284f37(T0* C, T0* a1)
{
	((T284*)(C))->a3 = a1;
}

/* GEANT_EXEC_TASK.set_command */
void T284f33(T0* C, T0* a1)
{
	((T284*)(C))->a1 = a1;
}

/* GEANT_EXEC_COMMAND.make */
T0* T360c12(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T360));
	*(T360*)C = GE_default360;
	T360f18(C, a1);
	return C;
}

/* GEANT_EXEC_COMMAND.set_project */
void T360f18(T0* C, T0* a1)
{
	((T360*)(C))->a2 = a1;
}

/* GEANT_TARGET.exec_task_name */
unsigned char ge130os2404 = '\0';
T0* ge130ov2404;
T0* T26f50(T0* C)
{
	T0* R = 0;
	if (ge130os2404) {
		return ge130ov2404;
	} else {
		ge130os2404 = '\1';
		ge130ov2404 = R;
	}
	R = GE_ms("exec", 4);
	ge130ov2404 = R;
	return R;
}

/* GEANT_VE_TASK.make */
T0* T283c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T283));
	*(T283*)C = GE_default283;
	((T283*)(C))->a1 = T359c20(a1);
	T283f35(C, ((T283*)(C))->a1, a2);
	t1 = (T283f12(C));
	t2 = (T283f9(C, t1));
	if (t2) {
		t1 = (T283f12(C));
		l1 = (T283f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T359f21(GE_void(((T283*)(C))->a1), l1);
		}
	}
	t1 = (T283f14(C));
	t2 = (T283f9(C, t1));
	if (t2) {
		t1 = (T283f14(C));
		l1 = (T283f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T359f22(GE_void(((T283*)(C))->a1), l1);
		}
	}
	t1 = (T283f15(C));
	t2 = (T283f9(C, t1));
	if (t2) {
		t1 = (T283f15(C));
		l1 = (T283f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T359f23(GE_void(((T283*)(C))->a1), l1);
		}
		t1 = (T283f16(C));
		t2 = (T283f9(C, t1));
		if (t2) {
			t1 = (T283f16(C));
			t2 = (T283f17(C, t1));
			T359f24(GE_void(((T283*)(C))->a1), t2);
		}
	}
	t1 = (T283f18(C));
	t2 = (T283f9(C, t1));
	if (t2) {
		t1 = (T283f18(C));
		l1 = (T283f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T359f25(GE_void(((T283*)(C))->a1), l1);
		}
		t1 = (T283f19(C));
		t2 = (T283f9(C, t1));
		if (t2) {
			t1 = (T283f19(C));
			l1 = (T283f13(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T359f26(GE_void(((T283*)(C))->a1), l1);
			}
		}
	}
	t1 = (T283f20(C));
	t2 = (T283f9(C, t1));
	if (t2) {
		t1 = (T283f20(C));
		l1 = (T283f21(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T359f27(GE_void(((T283*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_VE_COMMAND.set_exit_code_variable_name */
void T359f27(T0* C, T0* a1)
{
	((T359*)(C))->a3 = a1;
}

/* GEANT_VE_TASK.attribute_value */
T0* T283f21(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T283*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T283f29(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T283f29(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T283f6(C));
		t4 = (((T22*)(GE_void(((T283*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T283f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_VE_TASK.project_variables_resolver */
T0* T283f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_VE_TASK.target_arguments_stack */
T0* T283f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_VE_TASK.exit_code_variable_attribute_name */
unsigned char ge123os8665 = '\0';
T0* ge123ov8665;
T0* T283f20(T0* C)
{
	T0* R = 0;
	if (ge123os8665) {
		return ge123ov8665;
	} else {
		ge123os8665 = '\1';
		ge123ov8665 = R;
	}
	R = GE_ms("exit_code_variable", 18);
	ge123ov8665 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_tuning_level */
void T359f26(T0* C, T0* a1)
{
	((T359*)(C))->a9 = a1;
}

/* GEANT_VE_TASK.level_attribute_name */
unsigned char ge123os8664 = '\0';
T0* ge123ov8664;
T0* T283f19(T0* C)
{
	T0* R = 0;
	if (ge123os8664) {
		return ge123ov8664;
	} else {
		ge123os8664 = '\1';
		ge123ov8664 = R;
	}
	R = GE_ms("level", 5);
	ge123ov8664 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_tuned_system */
void T359f25(T0* C, T0* a1)
{
	((T359*)(C))->a7 = a1;
}

/* GEANT_VE_TASK.tune_attribute_name */
unsigned char ge123os8663 = '\0';
T0* ge123ov8663;
T0* T283f18(T0* C)
{
	T0* R = 0;
	if (ge123os8663) {
		return ge123ov8663;
	} else {
		ge123os8663 = '\1';
		ge123ov8663 = R;
	}
	R = GE_ms("tune", 4);
	ge123ov8663 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_recursive_clean */
void T359f24(T0* C, T1 a1)
{
	((T359*)(C))->a8 = a1;
}

/* GEANT_VE_TASK.boolean_value */
T1 T283f17(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T283f21(C, a1));
	t1 = (T283f26(C));
	t2 = (T283f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T283f26(C));
		t2 = (T283f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T283f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T283f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T283f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T283f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T283f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_VE_TASK.std */
T0* T283f24(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_VE_TASK.false_attribute_value */
T0* T283f28(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_VE_TASK.true_attribute_value */
T0* T283f27(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_VE_TASK.string_ */
T0* T283f26(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_VE_TASK.recursive_attribute_name */
unsigned char ge123os8662 = '\0';
T0* ge123ov8662;
T0* T283f16(T0* C)
{
	T0* R = 0;
	if (ge123os8662) {
		return ge123ov8662;
	} else {
		ge123os8662 = '\1';
		ge123ov8662 = R;
	}
	R = GE_ms("recursive", 9);
	ge123ov8662 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_clean */
void T359f23(T0* C, T0* a1)
{
	((T359*)(C))->a6 = a1;
}

/* GEANT_VE_TASK.clean_attribute_name */
unsigned char ge123os8661 = '\0';
T0* ge123ov8661;
T0* T283f15(T0* C)
{
	T0* R = 0;
	if (ge123os8661) {
		return ge123ov8661;
	} else {
		ge123os8661 = '\1';
		ge123ov8661 = R;
	}
	R = GE_ms("clean", 5);
	ge123ov8661 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_xace_filename */
void T359f22(T0* C, T0* a1)
{
	((T359*)(C))->a5 = a1;
}

/* GEANT_VE_TASK.xace_attribute_name */
unsigned char ge123os8660 = '\0';
T0* ge123ov8660;
T0* T283f14(T0* C)
{
	T0* R = 0;
	if (ge123os8660) {
		return ge123ov8660;
	} else {
		ge123os8660 = '\1';
		ge123ov8660 = R;
	}
	R = GE_ms("xace", 4);
	ge123ov8660 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_esd_filename */
void T359f21(T0* C, T0* a1)
{
	((T359*)(C))->a4 = a1;
}

/* GEANT_VE_TASK.attribute_value_or_default */
T0* T283f13(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T97f20(GE_void(((T283*)(C))->a3), a1));
	if (t1) {
		R = (T283f21(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_VE_TASK.has_attribute */
T1 T283f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T283*)(C))->a3), a1));
	return R;
}

/* GEANT_VE_TASK.esd_attribute_name */
unsigned char ge123os8659 = '\0';
T0* ge123ov8659;
T0* T283f12(T0* C)
{
	T0* R = 0;
	if (ge123os8659) {
		return ge123ov8659;
	} else {
		ge123os8659 = '\1';
		ge123ov8659 = R;
	}
	R = GE_ms("esd", 3);
	ge123ov8659 = R;
	return R;
}

/* GEANT_VE_TASK.task_make */
void T283f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T283f37(C, a1);
	t1 = (((T359*)(GE_void(a1)))->a2);
	T283f38(C, t1, a2);
}

/* GEANT_VE_TASK.interpreting_element_make */
void T283f38(T0* C, T0* a1, T0* a2)
{
	T283f39(C, a2);
	T283f40(C, a1);
}

/* GEANT_VE_TASK.set_project */
void T283f40(T0* C, T0* a1)
{
	((T283*)(C))->a2 = a1;
}

/* GEANT_VE_TASK.element_make */
void T283f39(T0* C, T0* a1)
{
	T283f41(C, a1);
}

/* GEANT_VE_TASK.set_xml_element */
void T283f41(T0* C, T0* a1)
{
	((T283*)(C))->a3 = a1;
}

/* GEANT_VE_TASK.set_command */
void T283f37(T0* C, T0* a1)
{
	((T283*)(C))->a1 = a1;
}

/* GEANT_VE_COMMAND.make */
T0* T359c20(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T359));
	*(T359*)C = GE_default359;
	T359f29(C, a1);
	return C;
}

/* GEANT_VE_COMMAND.set_project */
void T359f29(T0* C, T0* a1)
{
	((T359*)(C))->a2 = a1;
}

/* GEANT_TARGET.ve_task_name */
unsigned char ge130os2403 = '\0';
T0* ge130ov2403;
T0* T26f49(T0* C)
{
	T0* R = 0;
	if (ge130os2403) {
		return ge130ov2403;
	} else {
		ge130os2403 = '\1';
		ge130ov2403 = R;
	}
	R = GE_ms("ve", 2);
	ge130ov2403 = R;
	return R;
}

/* GEANT_ISE_TASK.make */
T0* T282c32(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T282));
	*(T282*)C = GE_default282;
	((T282*)(C))->a1 = T358c18(a1);
	T282f34(C, ((T282*)(C))->a1, a2);
	t1 = (T282f12(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f12(C));
		l1 = (T282f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f19(GE_void(((T282*)(C))->a1), l1);
		}
	}
	t1 = (T282f14(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f14(C));
		l1 = (T282f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f20(GE_void(((T282*)(C))->a1), l1);
		}
	}
	t1 = (T282f15(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f15(C));
		l1 = (T282f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f21(GE_void(((T282*)(C))->a1), l1);
		}
	}
	t1 = (T282f16(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f16(C));
		t2 = (T282f17(C, t1));
		T358f22(GE_void(((T282*)(C))->a1), t2);
	}
	t1 = (T282f18(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f18(C));
		t2 = (T282f17(C, t1));
		T358f23(GE_void(((T282*)(C))->a1), t2);
	}
	t1 = (T282f19(C));
	t2 = (T282f9(C, t1));
	if (t2) {
		t1 = (T282f19(C));
		l1 = (T282f20(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f24(GE_void(((T282*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_ISE_COMMAND.set_exit_code_variable_name */
void T358f24(T0* C, T0* a1)
{
	((T358*)(C))->a3 = a1;
}

/* GEANT_ISE_TASK.attribute_value */
T0* T282f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T282*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T282f28(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T282f28(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T282f6(C));
		t4 = (((T22*)(GE_void(((T282*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T282f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_ISE_TASK.project_variables_resolver */
T0* T282f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_ISE_TASK.target_arguments_stack */
T0* T282f28(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_ISE_TASK.exit_code_variable_attribute_name */
unsigned char ge111os8637 = '\0';
T0* ge111ov8637;
T0* T282f19(T0* C)
{
	T0* R = 0;
	if (ge111os8637) {
		return ge111ov8637;
	} else {
		ge111os8637 = '\1';
		ge111ov8637 = R;
	}
	R = GE_ms("exit_code_variable", 18);
	ge111ov8637 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_finish_freezing */
void T358f23(T0* C, T1 a1)
{
	((T358*)(C))->a8 = a1;
}

/* GEANT_ISE_TASK.finish_freezing_attribute_name */
unsigned char ge111os8635 = '\0';
T0* ge111ov8635;
T0* T282f18(T0* C)
{
	T0* R = 0;
	if (ge111os8635) {
		return ge111ov8635;
	} else {
		ge111os8635 = '\1';
		ge111ov8635 = R;
	}
	R = GE_ms("finish_freezing", 15);
	ge111ov8635 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_finalize_mode */
void T358f22(T0* C, T1 a1)
{
	((T358*)(C))->a7 = a1;
}

/* GEANT_ISE_TASK.boolean_value */
T1 T282f17(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T282f20(C, a1));
	t1 = (T282f25(C));
	t2 = (T282f26(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T282f25(C));
		t2 = (T282f27(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T282f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T282f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T282f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T282f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T282f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_ISE_TASK.std */
T0* T282f23(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_ISE_TASK.false_attribute_value */
T0* T282f27(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_ISE_TASK.true_attribute_value */
T0* T282f26(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_ISE_TASK.string_ */
T0* T282f25(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_ISE_TASK.finalize_attribute_name */
unsigned char ge111os8634 = '\0';
T0* ge111ov8634;
T0* T282f16(T0* C)
{
	T0* R = 0;
	if (ge111os8634) {
		return ge111ov8634;
	} else {
		ge111os8634 = '\1';
		ge111ov8634 = R;
	}
	R = GE_ms("finalize", 8);
	ge111ov8634 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_clean */
void T358f21(T0* C, T0* a1)
{
	((T358*)(C))->a5 = a1;
}

/* GEANT_ISE_TASK.clean_attribute_name */
unsigned char ge111os8636 = '\0';
T0* ge111ov8636;
T0* T282f15(T0* C)
{
	T0* R = 0;
	if (ge111os8636) {
		return ge111ov8636;
	} else {
		ge111os8636 = '\1';
		ge111ov8636 = R;
	}
	R = GE_ms("clean", 5);
	ge111ov8636 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_system_name */
void T358f20(T0* C, T0* a1)
{
	((T358*)(C))->a4 = a1;
}

/* GEANT_ISE_TASK.system_attribute_name */
unsigned char ge111os8633 = '\0';
T0* ge111ov8633;
T0* T282f14(T0* C)
{
	T0* R = 0;
	if (ge111os8633) {
		return ge111ov8633;
	} else {
		ge111os8633 = '\1';
		ge111ov8633 = R;
	}
	R = GE_ms("system", 6);
	ge111ov8633 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_ace_filename */
void T358f19(T0* C, T0* a1)
{
	((T358*)(C))->a6 = a1;
}

/* GEANT_ISE_TASK.attribute_value_or_default */
T0* T282f13(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T97f20(GE_void(((T282*)(C))->a3), a1));
	if (t1) {
		R = (T282f20(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_ISE_TASK.has_attribute */
T1 T282f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T282*)(C))->a3), a1));
	return R;
}

/* GEANT_ISE_TASK.ace_attribute_name */
unsigned char ge111os8632 = '\0';
T0* ge111ov8632;
T0* T282f12(T0* C)
{
	T0* R = 0;
	if (ge111os8632) {
		return ge111ov8632;
	} else {
		ge111os8632 = '\1';
		ge111ov8632 = R;
	}
	R = GE_ms("ace", 3);
	ge111ov8632 = R;
	return R;
}

/* GEANT_ISE_TASK.task_make */
void T282f34(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T282f36(C, a1);
	t1 = (((T358*)(GE_void(a1)))->a2);
	T282f37(C, t1, a2);
}

/* GEANT_ISE_TASK.interpreting_element_make */
void T282f37(T0* C, T0* a1, T0* a2)
{
	T282f38(C, a2);
	T282f39(C, a1);
}

/* GEANT_ISE_TASK.set_project */
void T282f39(T0* C, T0* a1)
{
	((T282*)(C))->a2 = a1;
}

/* GEANT_ISE_TASK.element_make */
void T282f38(T0* C, T0* a1)
{
	T282f40(C, a1);
}

/* GEANT_ISE_TASK.set_xml_element */
void T282f40(T0* C, T0* a1)
{
	((T282*)(C))->a3 = a1;
}

/* GEANT_ISE_TASK.set_command */
void T282f36(T0* C, T0* a1)
{
	((T282*)(C))->a1 = a1;
}

/* GEANT_ISE_COMMAND.make */
T0* T358c18(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T358));
	*(T358*)C = GE_default358;
	T358f26(C, a1);
	return C;
}

/* GEANT_ISE_COMMAND.set_project */
void T358f26(T0* C, T0* a1)
{
	((T358*)(C))->a2 = a1;
}

/* GEANT_TARGET.ise_task_name */
unsigned char ge130os2402 = '\0';
T0* ge130ov2402;
T0* T26f48(T0* C)
{
	T0* R = 0;
	if (ge130os2402) {
		return ge130ov2402;
	} else {
		ge130os2402 = '\1';
		ge130ov2402 = R;
	}
	R = GE_ms("ise", 3);
	ge130ov2402 = R;
	return R;
}

/* GEANT_SE_TASK.make */
T0* T281c34(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T281));
	*(T281*)C = GE_default281;
	((T281*)(C))->a1 = T357c24(a1);
	T281f36(C, ((T281*)(C))->a1, a2);
	t1 = (T281f12(C));
	t2 = (T281f9(C, t1));
	if (t2) {
		t1 = (T281f12(C));
		l1 = (T281f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f25(GE_void(((T281*)(C))->a1), l1);
		}
	} else {
		t1 = (T281f14(C));
		t2 = (T281f9(C, t1));
		if (t2) {
			t1 = (T281f14(C));
			l1 = (T281f13(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T357f26(GE_void(((T281*)(C))->a1), l1);
			}
		} else {
			t1 = (T281f15(C));
			t2 = (T281f9(C, t1));
			if (t2) {
				t1 = (T281f15(C));
				l1 = (T281f16(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T357f27(GE_void(((T281*)(C))->a1), l1);
				}
			}
			t1 = (T281f17(C));
			t2 = (T281f9(C, t1));
			if (t2) {
				t1 = (T281f17(C));
				l1 = (T281f16(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T357f28(GE_void(((T281*)(C))->a1), l1);
				}
			}
			t1 = (T281f18(C));
			t2 = (T281f9(C, t1));
			if (t2) {
				t1 = (T281f18(C));
				l1 = (T281f16(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T357f29(GE_void(((T281*)(C))->a1), l1);
				}
			}
			t1 = (T281f19(C));
			t2 = (T281f9(C, t1));
			if (t2) {
				t1 = (T281f19(C));
				t2 = (T281f20(C, t1));
				T357f30(GE_void(((T281*)(C))->a1), t2);
			}
			t1 = (T281f21(C));
			t2 = (T281f9(C, t1));
			if (t2) {
				t1 = (T281f21(C));
				t2 = (T281f20(C, t1));
				T357f31(GE_void(((T281*)(C))->a1), t2);
			}
		}
	}
	t1 = (T281f22(C));
	t2 = (T281f9(C, t1));
	if (t2) {
		t1 = (T281f22(C));
		l1 = (T281f16(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f32(GE_void(((T281*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_SE_COMMAND.set_exit_code_variable_name */
void T357f32(T0* C, T0* a1)
{
	((T357*)(C))->a3 = a1;
}

/* GEANT_SE_TASK.exit_code_variable_attribute_name */
unsigned char ge120os8604 = '\0';
T0* ge120ov8604;
T0* T281f22(T0* C)
{
	T0* R = 0;
	if (ge120os8604) {
		return ge120ov8604;
	} else {
		ge120os8604 = '\1';
		ge120ov8604 = R;
	}
	R = GE_ms("exit_code_variable", 18);
	ge120ov8604 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_no_style_warning */
void T357f31(T0* C, T1 a1)
{
	((T357*)(C))->a10 = a1;
}

/* GEANT_SE_TASK.no_style_warning_attribute_name */
unsigned char ge120os8602 = '\0';
T0* ge120ov8602;
T0* T281f21(T0* C)
{
	T0* R = 0;
	if (ge120os8602) {
		return ge120ov8602;
	} else {
		ge120os8602 = '\1';
		ge120ov8602 = R;
	}
	R = GE_ms("no_style_warning", 16);
	ge120ov8602 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_case_insensitive */
void T357f30(T0* C, T1 a1)
{
	((T357*)(C))->a9 = a1;
}

/* GEANT_SE_TASK.boolean_value */
T1 T281f20(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T281f16(C, a1));
	t1 = (T281f28(C));
	t2 = (T281f29(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T281f28(C));
		t2 = (T281f30(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T281f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T281f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T281f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T281f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T281f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_SE_TASK.std */
T0* T281f25(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_SE_TASK.false_attribute_value */
T0* T281f30(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_SE_TASK.true_attribute_value */
T0* T281f29(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_SE_TASK.string_ */
T0* T281f28(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_SE_TASK.case_insensitive_attribute_name */
unsigned char ge120os8601 = '\0';
T0* ge120ov8601;
T0* T281f19(T0* C)
{
	T0* R = 0;
	if (ge120os8601) {
		return ge120ov8601;
	} else {
		ge120os8601 = '\1';
		ge120ov8601 = R;
	}
	R = GE_ms("case_insensitive", 16);
	ge120ov8601 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_executable */
void T357f29(T0* C, T0* a1)
{
	((T357*)(C))->a6 = a1;
}

/* GEANT_SE_TASK.executable_attribute_name */
unsigned char ge120os8600 = '\0';
T0* ge120ov8600;
T0* T281f18(T0* C)
{
	T0* R = 0;
	if (ge120os8600) {
		return ge120ov8600;
	} else {
		ge120os8600 = '\1';
		ge120ov8600 = R;
	}
	R = GE_ms("executable", 10);
	ge120ov8600 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_creation_procedure */
void T357f28(T0* C, T0* a1)
{
	((T357*)(C))->a8 = a1;
}

/* GEANT_SE_TASK.creation_procedure_attribute_name */
unsigned char ge120os8599 = '\0';
T0* ge120ov8599;
T0* T281f17(T0* C)
{
	T0* R = 0;
	if (ge120os8599) {
		return ge120ov8599;
	} else {
		ge120os8599 = '\1';
		ge120ov8599 = R;
	}
	R = GE_ms("creation_procedure", 18);
	ge120ov8599 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_root_class */
void T357f27(T0* C, T0* a1)
{
	((T357*)(C))->a5 = a1;
}

/* GEANT_SE_TASK.attribute_value */
T0* T281f16(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T281*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T281f27(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T281f27(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T281f6(C));
		t4 = (((T22*)(GE_void(((T281*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T281f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SE_TASK.project_variables_resolver */
T0* T281f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_SE_TASK.target_arguments_stack */
T0* T281f27(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_SE_TASK.root_class_attribute_name */
unsigned char ge120os8598 = '\0';
T0* ge120ov8598;
T0* T281f15(T0* C)
{
	T0* R = 0;
	if (ge120os8598) {
		return ge120ov8598;
	} else {
		ge120os8598 = '\1';
		ge120ov8598 = R;
	}
	R = GE_ms("root_class", 10);
	ge120ov8598 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_clean */
void T357f26(T0* C, T0* a1)
{
	((T357*)(C))->a7 = a1;
}

/* GEANT_SE_TASK.clean_attribute_name */
unsigned char ge120os8603 = '\0';
T0* ge120ov8603;
T0* T281f14(T0* C)
{
	T0* R = 0;
	if (ge120os8603) {
		return ge120ov8603;
	} else {
		ge120os8603 = '\1';
		ge120ov8603 = R;
	}
	R = GE_ms("clean", 5);
	ge120ov8603 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_ace_filename */
void T357f25(T0* C, T0* a1)
{
	((T357*)(C))->a4 = a1;
}

/* GEANT_SE_TASK.attribute_value_or_default */
T0* T281f13(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T97f20(GE_void(((T281*)(C))->a3), a1));
	if (t1) {
		R = (T281f16(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_SE_TASK.has_attribute */
T1 T281f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T281*)(C))->a3), a1));
	return R;
}

/* GEANT_SE_TASK.ace_attribute_name */
unsigned char ge120os8597 = '\0';
T0* ge120ov8597;
T0* T281f12(T0* C)
{
	T0* R = 0;
	if (ge120os8597) {
		return ge120ov8597;
	} else {
		ge120os8597 = '\1';
		ge120ov8597 = R;
	}
	R = GE_ms("ace", 3);
	ge120ov8597 = R;
	return R;
}

/* GEANT_SE_TASK.task_make */
void T281f36(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T281f38(C, a1);
	t1 = (((T357*)(GE_void(a1)))->a2);
	T281f39(C, t1, a2);
}

/* GEANT_SE_TASK.interpreting_element_make */
void T281f39(T0* C, T0* a1, T0* a2)
{
	T281f40(C, a2);
	T281f41(C, a1);
}

/* GEANT_SE_TASK.set_project */
void T281f41(T0* C, T0* a1)
{
	((T281*)(C))->a2 = a1;
}

/* GEANT_SE_TASK.element_make */
void T281f40(T0* C, T0* a1)
{
	T281f42(C, a1);
}

/* GEANT_SE_TASK.set_xml_element */
void T281f42(T0* C, T0* a1)
{
	((T281*)(C))->a3 = a1;
}

/* GEANT_SE_TASK.set_command */
void T281f38(T0* C, T0* a1)
{
	((T281*)(C))->a1 = a1;
}

/* GEANT_SE_COMMAND.make */
T0* T357c24(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T357));
	*(T357*)C = GE_default357;
	T357f34(C, a1);
	return C;
}

/* GEANT_SE_COMMAND.set_project */
void T357f34(T0* C, T0* a1)
{
	((T357*)(C))->a2 = a1;
}

/* GEANT_TARGET.se_task_name */
unsigned char ge130os2401 = '\0';
T0* ge130ov2401;
T0* T26f47(T0* C)
{
	T0* R = 0;
	if (ge130os2401) {
		return ge130ov2401;
	} else {
		ge130os2401 = '\1';
		ge130ov2401 = R;
	}
	R = GE_ms("se", 2);
	ge130ov2401 = R;
	return R;
}

/* GEANT_GEC_TASK.make */
T0* T280c35(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T1 t4;
	C = (T0*)GE_alloc(sizeof(T280));
	*(T280*)C = GE_default280;
	((T280*)(C))->a1 = T356c23(a1);
	T280f37(C, ((T280*)(C))->a1, a2);
	t1 = (T280f12(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f12(C));
		l1 = (T280f13(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f24(GE_void(((T280*)(C))->a1), l1);
		}
	} else {
		t1 = (T280f14(C));
		t2 = (T280f9(C, t1));
		if (t2) {
			t1 = (T280f14(C));
			l1 = (T280f13(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T356f25(GE_void(((T280*)(C))->a1), l1);
			}
		}
	}
	t1 = (T280f15(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f15(C));
		t2 = (T280f16(C, t1));
		T356f26(GE_void(((T280*)(C))->a1), t2);
	}
	t1 = (T280f17(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f17(C));
		t2 = (T280f16(C, t1));
		T356f27(GE_void(((T280*)(C))->a1), t2);
	}
	t1 = (T280f18(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f18(C));
		l1 = (T280f19(C, t1));
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?T17f29(l1):T195f50(l1)));
			t2 = ((T1)(!(t4)));
		}
		if (t2) {
			T356f28(GE_void(((T280*)(C))->a1), l1);
		}
	}
	t1 = (T280f20(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f20(C));
		t2 = (T280f16(C, t1));
		T356f29(GE_void(((T280*)(C))->a1), t2);
	}
	t1 = (T280f21(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f21(C));
		l1 = (T280f19(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T195f45(l1)));
		if (t2) {
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f15(l1):T195f46(l1)));
			t2 = (T6f1(&l2, (T6)(GE_int32(0))));
			if (t2) {
				T356f30(GE_void(((T280*)(C))->a1), l2);
			}
		}
	}
	t1 = (T280f22(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f22(C));
		l1 = (T280f19(C, t1));
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?T17f29(l1):T195f50(l1)));
			t2 = ((T1)(!(t4)));
		}
		if (t2) {
			T356f31(GE_void(((T280*)(C))->a1), l1);
		}
	}
	t1 = (T280f23(C));
	t2 = (T280f9(C, t1));
	if (t2) {
		t1 = (T280f23(C));
		l1 = (T280f19(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f32(GE_void(((T280*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GEC_COMMAND.set_exit_code_variable_name */
void T356f32(T0* C, T0* a1)
{
	((T356*)(C))->a3 = a1;
}

/* GEANT_GEC_TASK.exit_code_variable_attribute_name */
unsigned char ge104os8556 = '\0';
T0* ge104ov8556;
T0* T280f23(T0* C)
{
	T0* R = 0;
	if (ge104os8556) {
		return ge104ov8556;
	} else {
		ge104os8556 = '\1';
		ge104ov8556 = R;
	}
	R = GE_ms("exit_code_variable", 18);
	ge104ov8556 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_garbage_collector */
void T356f31(T0* C, T0* a1)
{
	((T356*)(C))->a11 = a1;
}

/* GEANT_GEC_TASK.gc_attribute_name */
unsigned char ge104os8558 = '\0';
T0* ge104ov8558;
T0* T280f22(T0* C)
{
	T0* R = 0;
	if (ge104os8558) {
		return ge104ov8558;
	} else {
		ge104os8558 = '\1';
		ge104ov8558 = R;
	}
	R = GE_ms("gc", 2);
	ge104ov8558 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_split_size */
void T356f30(T0* C, T6 a1)
{
	((T356*)(C))->a10 = a1;
}

/* GEANT_GEC_TASK.split_size_attribute_name */
unsigned char ge104os8560 = '\0';
T0* ge104ov8560;
T0* T280f21(T0* C)
{
	T0* R = 0;
	if (ge104os8560) {
		return ge104ov8560;
	} else {
		ge104os8560 = '\1';
		ge104ov8560 = R;
	}
	R = GE_ms("split_size", 10);
	ge104ov8560 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_split_mode */
void T356f29(T0* C, T1 a1)
{
	((T356*)(C))->a7 = a1;
}

/* GEANT_GEC_TASK.split_attribute_name */
unsigned char ge104os8559 = '\0';
T0* ge104ov8559;
T0* T280f20(T0* C)
{
	T0* R = 0;
	if (ge104os8559) {
		return ge104ov8559;
	} else {
		ge104os8559 = '\1';
		ge104ov8559 = R;
	}
	R = GE_ms("split", 5);
	ge104ov8559 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_catcall_mode */
void T356f28(T0* C, T0* a1)
{
	((T356*)(C))->a9 = a1;
}

/* GEANT_GEC_TASK.attribute_value */
T0* T280f19(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T280*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T280f31(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T280f31(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T280f6(C));
		t4 = (((T22*)(GE_void(((T280*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T280f6(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEC_TASK.project_variables_resolver */
T0* T280f6(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_GEC_TASK.target_arguments_stack */
T0* T280f31(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_GEC_TASK.catcall_attribute_name */
unsigned char ge104os8554 = '\0';
T0* ge104ov8554;
T0* T280f18(T0* C)
{
	T0* R = 0;
	if (ge104os8554) {
		return ge104ov8554;
	} else {
		ge104os8554 = '\1';
		ge104ov8554 = R;
	}
	R = GE_ms("catcall", 7);
	ge104ov8554 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_finalize */
void T356f27(T0* C, T1 a1)
{
	((T356*)(C))->a8 = a1;
}

/* GEANT_GEC_TASK.finalize_attribute_name */
unsigned char ge104os8557 = '\0';
T0* ge104ov8557;
T0* T280f17(T0* C)
{
	T0* R = 0;
	if (ge104os8557) {
		return ge104ov8557;
	} else {
		ge104os8557 = '\1';
		ge104ov8557 = R;
	}
	R = GE_ms("finalize", 8);
	ge104ov8557 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_c_compile */
void T356f26(T0* C, T1 a1)
{
	((T356*)(C))->a6 = a1;
}

/* GEANT_GEC_TASK.boolean_value */
T1 T280f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T280f19(C, a1));
	t1 = (T280f28(C));
	t2 = (T280f29(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T280f28(C));
		t2 = (T280f30(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T280f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T280f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T280f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T280f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T280f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEC_TASK.std */
T0* T280f26(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_GEC_TASK.false_attribute_value */
T0* T280f30(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_GEC_TASK.true_attribute_value */
T0* T280f29(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_GEC_TASK.string_ */
T0* T280f28(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_GEC_TASK.c_compile_attribute_name */
unsigned char ge104os8553 = '\0';
T0* ge104ov8553;
T0* T280f15(T0* C)
{
	T0* R = 0;
	if (ge104os8553) {
		return ge104ov8553;
	} else {
		ge104os8553 = '\1';
		ge104ov8553 = R;
	}
	R = GE_ms("c_compile", 9);
	ge104ov8553 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_clean */
void T356f25(T0* C, T0* a1)
{
	((T356*)(C))->a5 = a1;
}

/* GEANT_GEC_TASK.clean_attribute_name */
unsigned char ge104os8555 = '\0';
T0* ge104ov8555;
T0* T280f14(T0* C)
{
	T0* R = 0;
	if (ge104os8555) {
		return ge104ov8555;
	} else {
		ge104os8555 = '\1';
		ge104ov8555 = R;
	}
	R = GE_ms("clean", 5);
	ge104ov8555 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_ace_filename */
void T356f24(T0* C, T0* a1)
{
	((T356*)(C))->a4 = a1;
}

/* GEANT_GEC_TASK.attribute_value_or_default */
T0* T280f13(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T97f20(GE_void(((T280*)(C))->a3), a1));
	if (t1) {
		R = (T280f19(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_GEC_TASK.has_attribute */
T1 T280f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T280*)(C))->a3), a1));
	return R;
}

/* GEANT_GEC_TASK.ace_attribute_name */
unsigned char ge104os8552 = '\0';
T0* ge104ov8552;
T0* T280f12(T0* C)
{
	T0* R = 0;
	if (ge104os8552) {
		return ge104ov8552;
	} else {
		ge104os8552 = '\1';
		ge104ov8552 = R;
	}
	R = GE_ms("ace", 3);
	ge104ov8552 = R;
	return R;
}

/* GEANT_GEC_TASK.task_make */
void T280f37(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T280f39(C, a1);
	t1 = (((T356*)(GE_void(a1)))->a2);
	T280f40(C, t1, a2);
}

/* GEANT_GEC_TASK.interpreting_element_make */
void T280f40(T0* C, T0* a1, T0* a2)
{
	T280f41(C, a2);
	T280f42(C, a1);
}

/* GEANT_GEC_TASK.set_project */
void T280f42(T0* C, T0* a1)
{
	((T280*)(C))->a2 = a1;
}

/* GEANT_GEC_TASK.element_make */
void T280f41(T0* C, T0* a1)
{
	T280f43(C, a1);
}

/* GEANT_GEC_TASK.set_xml_element */
void T280f43(T0* C, T0* a1)
{
	((T280*)(C))->a3 = a1;
}

/* GEANT_GEC_TASK.set_command */
void T280f39(T0* C, T0* a1)
{
	((T280*)(C))->a1 = a1;
}

/* GEANT_GEC_COMMAND.make */
T0* T356c23(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T356));
	*(T356*)C = GE_default356;
	T356f23p1(C, a1);
	((T356*)(C))->a6 = EIF_TRUE;
	((T356*)(C))->a7 = EIF_TRUE;
	return C;
}

/* GEANT_GEC_COMMAND.make */
void T356f23p1(T0* C, T0* a1)
{
	T356f34(C, a1);
}

/* GEANT_GEC_COMMAND.set_project */
void T356f34(T0* C, T0* a1)
{
	((T356*)(C))->a2 = a1;
}

/* GEANT_TARGET.gec_task_name */
unsigned char ge130os2400 = '\0';
T0* ge130ov2400;
T0* T26f46(T0* C)
{
	T0* R = 0;
	if (ge130os2400) {
		return ge130ov2400;
	} else {
		ge130os2400 = '\1';
		ge130ov2400 = R;
	}
	R = GE_ms("gec", 3);
	ge130ov2400 = R;
	return R;
}

/* GEANT_TARGET.obsolete_element_name */
unsigned char ge63os2369 = '\0';
T0* ge63ov2369;
T0* T26f16(T0* C)
{
	T0* R = 0;
	if (ge63os2369) {
		return ge63ov2369;
	} else {
		ge63os2369 = '\1';
		ge63ov2369 = R;
	}
	R = GE_ms("obsolete", 8);
	ge63ov2369 = R;
	return R;
}

/* GEANT_TARGET.argument_element_name */
unsigned char ge63os2370 = '\0';
T0* ge63ov2370;
T0* T26f14(T0* C)
{
	T0* R = 0;
	if (ge63os2370) {
		return ge63ov2370;
	} else {
		ge63os2370 = '\1';
		ge63ov2370 = R;
	}
	R = GE_ms("argument", 8);
	ge63ov2370 = R;
	return R;
}

/* KL_STRING_ROUTINES.same_string */
T1 T76f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T0* t4;
	t1 = ((a2)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T195*)(a2))->a1));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==(t3));
		if (t1) {
			if ((a1)==EIF_VOID) {
				l1 = EIF_VOID;
			} else {
				switch (((T0*)(a1))->id) {
				case 195:
					l1 = a1;
					break;
				default:
					l1 = EIF_VOID;
				}
			}
			t1 = ((l1)!=(EIF_VOID));
			if (t1) {
				R = (T195f12(GE_void(l1), a2));
			} else {
				if ((a2)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(a2))->id) {
					case 195:
						l1 = a2;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					R = (T195f12(GE_void(l1), a1));
				} else {
					t4 = (T76f8(C));
					t1 = (T83f1(GE_void(t4), a1, ge312ov4945));
					if (t1) {
						t4 = (T76f8(C));
						t1 = (T83f1(GE_void(t4), a2, ge312ov4945));
					}
					if (t1) {
						R = (T76f10(C, a1, a2));
					} else {
						R = EIF_TRUE;
						l3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
						l2 = (T6)(GE_int32(1));
						t1 = (T6f1(&l2, l3));
						while (!(t1)) {
							t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l2):T195f14(a1, l2)));
							t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f12(a2, l2):T195f14(a2, l2)));
							t1 = ((t2)!=(t3));
							if (t1) {
								R = EIF_FALSE;
								l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
							} else {
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l2, l3));
						}
					}
				}
			}
		}
	}
	return R;
}

/* KL_STRING_ROUTINES.elks_same_string */
T1 T76f10(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T0* t4;
	t1 = ((a2)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T195*)(a2))->a1));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==(t3));
		if (t1) {
			t4 = (T76f8(C));
			t1 = (T83f1(GE_void(t4), a2, ge312ov4945));
			if (t1) {
				R = (((((T0*)(GE_void(a1)))->id==17)?T17f17(a1, a2):T195f13(a1, a2)));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==17)?T17f17(a2, a1):T195f13(a2, a1)));
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.same_string */
T1 T195f13(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==(((T195*)(C))->a1));
		if (t1) {
			t2 = (T195f29(C, a1, (T6)(GE_int32(1))));
			R = ((t2)==((T6)(GE_int32(1))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.substring_index */
T6 T195f29(T0* C, T0* a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T2 t4;
	T2 t5;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==((T6)(GE_int32(1))));
		if (t1) {
			R = (T6)(GE_int32(1));
		}
	} else {
		l11 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((l11)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
		} else {
			t2 = ((T6)((((T195*)(C))->a1)-(l11)));
			l9 = ((T6)((t2)+((T6)(GE_int32(1)))));
			t1 = (T6f9(&a2, l9));
			if (t1) {
				t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
				if (t1) {
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 195:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T195*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(GE_void(l6), l1));
								t3 = (T195f22(C));
								t2 = (T198f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								t4 = (T195f20(C, l2));
								t2 = ((T6)(t4));
								t1 = ((t2)!=(l4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = (T195f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								t4 = (T195f20(C, l2));
								t5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
								t1 = ((t4)!=(t5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				} else {
					l8 = (T195f26(C, a2));
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 195:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T195*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(C, l2));
								t3 = (T195f22(C));
								t2 = (T198f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								l5 = (T195f21(GE_void(l6), l1));
								t3 = (T195f22(C));
								t2 = (T198f1(GE_void(t3)));
								t1 = (T6f1(&l5, t2));
								if (t1) {
									l5 = (T6)(GE_int32(0));
								}
								t1 = ((l4)!=(l5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T195f24(C, l2));
									l1 = (T195f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T195f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(C, l2));
								t3 = (T195f22(C));
								t2 = (T198f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
								t2 = ((T6)(t4));
								t1 = ((l4)!=(t2));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T195f24(C, l2));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T195f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				}
			}
		}
	}
	return R;
}

/* STRING_8.same_string */
T1 T17f17(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T2 t4;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==(((T17*)(C))->a2));
		if (t1) {
			R = EIF_TRUE;
			l2 = ((T17*)(C))->a2;
			t1 = ((T1)(((T0*)(GE_void(a1)))->id==17));
			if (t1) {
				l3 = ((T17*)(C))->a1;
				l4 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
				t1 = ((l1)==(l2));
				while (!(t1)) {
					t3 = (((T15*)(GE_void(l3)))->z2[l1]);
					t4 = (((T15*)(GE_void(l4)))->z2[l1]);
					t1 = ((t3)!=(t4));
					if (t1) {
						R = EIF_FALSE;
						l1 = l2;
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = ((l1)==(l2));
				}
			} else {
				l1 = (T6)(GE_int32(1));
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				t1 = ((l1)==(l2));
				while (!(t1)) {
					t3 = (T17f9(C, l1));
					t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
					t1 = ((t3)!=(t4));
					if (t1) {
						R = EIF_FALSE;
						l1 = l2;
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = ((l1)==(l2));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.same_unicode_string */
T1 T195f12(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==(((T195*)(C))->a1));
		if (t1) {
			t2 = (T195f28(C, a1, (T6)(GE_int32(1))));
			R = ((t2)==((T6)(GE_int32(1))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.unicode_substring_index */
T6 T195f28(T0* C, T0* a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==((T6)(GE_int32(1))));
		if (t1) {
			R = (T6)(GE_int32(1));
		}
	} else {
		l11 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((l11)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
		} else {
			t2 = ((T6)((((T195*)(C))->a1)-(l11)));
			l9 = ((T6)((t2)+((T6)(GE_int32(1)))));
			t1 = (T6f9(&a2, l9));
			if (t1) {
				t1 = ((((T195*)(C))->a1)==(((T195*)(C))->a3));
				if (t1) {
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 195:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T195*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(GE_void(l6), l1));
								t3 = (T195f20(C, l2));
								t2 = ((T6)(t3));
								t1 = ((t2)!=(l4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = (T195f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								t3 = (T195f20(C, l2));
								t2 = ((T6)(t3));
								t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T195f14(a1, l1)));
								t1 = ((t2)!=(t4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				} else {
					l8 = (T195f26(C, a2));
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 195:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T195*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(C, l2));
								l5 = (T195f21(GE_void(l6), l1));
								t1 = ((l4)!=(l5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T195f24(C, l2));
									l1 = (T195f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T195f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T195f21(C, l2));
								t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T195f14(a1, l1)));
								t1 = ((l4)!=(t2));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T195f24(C, l2));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T195f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				}
			}
		}
	}
	return R;
}

/* GEANT_TARGET.description_element_name */
unsigned char ge129os2395 = '\0';
T0* ge129ov2395;
T0* T26f19(T0* C)
{
	T0* R = 0;
	if (ge129os2395) {
		return ge129ov2395;
	} else {
		ge129os2395 = '\1';
		ge129ov2395 = R;
	}
	R = GE_ms("description", 11);
	ge129ov2395 = R;
	return R;
}

/* GEANT_TARGET.string_ */
T0* T26f24(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].item */
T0* T191f8(T0* C)
{
	T0* R = 0;
	R = (((T319*)(GE_void(((T191*)(C))->a2)))->a2);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].start */
void T191f10(T0* C)
{
	if (((T0*)(GE_void(((T191*)(C))->a3)))->id==97) {
		T97f37(((T191*)(C))->a3, C);
	} else {
		T96f23(((T191*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_start */
void T96f23(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T96f12(C, a1));
	l2 = ((((T96*)(C))->a3)==(EIF_VOID));
	T191f14(a1, ((T96*)(C))->a3, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T96f28(C, a1);
	}
}

/* XM_ELEMENT.cursor_start */
void T97f37(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T97f23(C, a1));
	l2 = ((((T97*)(C))->a5)==(EIF_VOID));
	T191f14(a1, ((T97*)(C))->a5, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T97f41(C, a1);
	}
}

/* XM_ELEMENT.new_cursor */
T0* T97f19(T0* C)
{
	T0* R = 0;
	R = T191c9(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].make */
T0* T191c9(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T191));
	*(T191*)C = GE_default191;
	((T191*)(C))->a3 = a1;
	((T191*)(C))->a4 = EIF_TRUE;
	return C;
}

/* GEANT_TARGET.prepared_arguments_from_formal_arguments */
T0* T26f45(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	T0* t5;
	R = a1;
	t1 = (((T34*)(GE_void(a1)))->a2);
	t2 = (((T34*)(GE_void(((T26*)(C))->a3)))->a2);
	t3 = ((t1)!=(t2));
	if (t3) {
		t1 = (((T34*)(GE_void(a1)))->a2);
		t4 = (T6f12(&t1));
		t1 = (((T34*)(GE_void(((T26*)(C))->a3)))->a2);
		t5 = (T6f12(&t1));
		t4 = GE_ma33((T6)7,
GE_ms("  error: number of actual and formal arguments do not match for target \'", 72),
((T26*)(C))->a1,
GE_ms("\' (", 3),
t4,
GE_ms(" against ", 9),
t5,
GE_ms(")", 1));
		T26f81(C, (T6)(GE_int32(1)), t4);
	}
	t3 = (T34f39(GE_void(a1)));
	if (t3) {
		R = (T26f78(C, a1));
	}
	t3 = (T34f34(GE_void(R), ((T26*)(C))->a3));
	t3 = ((T1)(!(t3)));
	if (t3) {
		t4 = GE_ma33((T6)3,
GE_ms("  error: actual and formal arguments do not match for target \'", 62),
((T26*)(C))->a1,
GE_ms("\'", 1));
		T26f81(C, (T6)(GE_int32(1)), t4);
	}
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has_same_keys */
T1 T34f34(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (((T34*)(GE_void(a1)))->a2);
	R = ((((T34*)(C))->a2)==(t1));
	if (R) {
		l1 = (T34f30(C));
		T64f8(GE_void(l1));
		t2 = (T64f5(GE_void(l1)));
		if (!(t2)) {
			t2 = ((T1)(!(R)));
		}
		while (!(t2)) {
			t3 = (T64f4(GE_void(l1)));
			R = (T34f37(GE_void(a1), t3));
			T64f9(GE_void(l1));
			t2 = (T64f5(GE_void(l1)));
			if (!(t2)) {
				t2 = ((T1)(!(R)));
			}
		}
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].forth */
void T64f9(T0* C)
{
	T80x2052T0(GE_void(((T64*)(C))->a1), C);
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].key */
T0* T64f4(T0* C)
{
	T0* R = 0;
	R = (T80x1909T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].after */
T1 T64f5(T0* C)
{
	T1 R = 0;
	R = (T80x2050T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].start */
void T64f8(T0* C)
{
	T80x2051T0(GE_void(((T64*)(C))->a1), C);
}

/* GEANT_TARGET.named_from_numbered_arguments */
T0* T26f78(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T34c46();
	l1 = (T34f30(GE_void(a1)));
	l2 = (T34f30(GE_void(((T26*)(C))->a3)));
	T64f8(GE_void(l1));
	T64f8(GE_void(l2));
	t1 = (T64f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T64f6(GE_void(l1)));
		t3 = (T64f4(GE_void(l2)));
		T34f67(GE_void(R), t2, t3);
		T64f9(GE_void(l1));
		T64f9(GE_void(l2));
		t1 = (T64f5(GE_void(l1)));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].item */
T0* T64f6(T0* C)
{
	T0* R = 0;
	R = (T80x2066T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has_numbered_keys */
T1 T34f39(T0* C)
{
	T1 R = 0;
	R = (T34f37(C, GE_ms("1", 1)));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].item */
T0* T101f5(T0* C)
{
	T0* R = 0;
	R = (((T177*)(GE_void(((T101*)(C))->a2)))->z2[((T101*)(C))->a1]);
	return R;
}

/* GEANT_TARGET.target_arguments_stack */
T0* T26f27(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.set_current_working_directory */
void T54f33(T0* C, T0* a1)
{
	GE_rescue r;
	T1 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		t2 = (T54f13(C));
		l2 = (T76f2(GE_void(t2), a1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (T54f18(C));
			T82f7(GE_void(t2), l2);
		}
	}
	GE_last_rescue = r.previous;
}

/* EXECUTION_ENVIRONMENT.change_working_directory */
void T82f7(T0* C, T0* a1)
{
	T0* l1 = 0;
	T77 t1;
	T14 t2;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f11(a1):T195f19(a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	((T82*)(C))->a1 = (T82f5(C, t2));
}

/* EXECUTION_ENVIRONMENT.eif_chdir */
T6 T82f5(T0* C, T14 a1)
{
	T6 R = 0;
	R = (T6)eif_chdir((char*)a1);
	return R;
}

/* KL_UNIX_FILE_SYSTEM.execution_environment */
unsigned char ge286os3935 = '\0';
T0* ge286ov3935;
T0* T54f18(T0* C)
{
	T0* R = 0;
	if (ge286os3935) {
		return ge286ov3935;
	} else {
		ge286os3935 = '\1';
		ge286ov3935 = R;
	}
	R = T82c6();
	ge286ov3935 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.string_ */
T0* T54f13(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.set_current_working_directory */
void T53f37(T0* C, T0* a1)
{
	GE_rescue r;
	T1 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		t2 = (T53f12(C));
		l2 = (T76f2(GE_void(t2), a1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (T53f20(C));
			T82f7(GE_void(t2), l2);
		}
	}
	GE_last_rescue = r.previous;
}

/* KL_WINDOWS_FILE_SYSTEM.execution_environment */
T0* T53f20(T0* C)
{
	T0* R = 0;
	if (ge286os3935) {
		return ge286ov3935;
	} else {
		ge286os3935 = '\1';
		ge286ov3935 = R;
	}
	R = T82c6();
	ge286ov3935 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.string_ */
T0* T53f12(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_TARGET.exit_application */
void T26f81(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T26f17(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T26f18(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_TARGET.exceptions */
T0* T26f18(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_TARGET.std */
T0* T26f17(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.directory_exists */
T1 T54f24(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T54f25(C));
	T354f36(GE_void(t1), a1);
	t1 = (T54f25(C));
	R = (T354f11(GE_void(t1)));
	return R;
}

/* KL_DIRECTORY.exists */
T1 T354f11(T0* C)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	t1 = (((((T0*)(GE_void(((T354*)(C))->a1)))->id==17)?((T17*)(((T354*)(C))->a1))->a2:((T195*)(((T354*)(C))->a1))->a1));
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		R = (T354f15(C));
	}
	return R;
}

/* KL_DIRECTORY.old_exists */
T1 T354f15(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T77 t1;
	T14 t2;
	l1 = (((((T0*)(GE_void(((T354*)(C))->a1)))->id==17)?T17f11(((T354*)(C))->a1):T195f19(((T354*)(C))->a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	R = (T354f10(C, t2));
	return R;
}

/* KL_DIRECTORY.eif_dir_exists */
T1 T354f10(T0* C, T14 a1)
{
	T1 R = 0;
	R = (T1)EIF_TEST((EIF_BOOLEAN )eif_dir_exists((char *)a1));
	return R;
}

/* KL_DIRECTORY.reset */
void T354f36(T0* C, T0* a1)
{
	T354f35(C, a1);
}

/* KL_DIRECTORY.make */
void T354f35(T0* C, T0* a1)
{
	T0* t1;
	((T354*)(C))->a2 = a1;
	t1 = (T354f13(C));
	t1 = (T76f2(GE_void(t1), a1));
	T354f37(C, t1);
}

/* KL_DIRECTORY.make */
T0* T354c35(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T354));
	*(T354*)C = GE_default354;
	((T354*)(C))->a2 = a1;
	t1 = (T354f13(C));
	t1 = (T76f2(GE_void(t1), a1));
	T354f37(C, t1);
	return C;
}

/* KL_DIRECTORY.old_make */
void T354f37(T0* C, T0* a1)
{
	((T354*)(C))->a1 = a1;
	((T354*)(C))->a3 = (T6)(GE_int32(1));
}

/* KL_DIRECTORY.string_ */
T0* T354f13(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.tmp_directory */
unsigned char ge286os3933 = '\0';
T0* ge286ov3933;
T0* T54f25(T0* C)
{
	T0* R = 0;
	if (ge286os3933) {
		return ge286ov3933;
	} else {
		ge286os3933 = '\1';
		ge286ov3933 = R;
	}
	R = T354c35(ge286ov3934);
	ge286ov3933 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.directory_exists */
T1 T53f27(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T53f28(C));
	T354f36(GE_void(t1), a1);
	t1 = (T53f28(C));
	R = (T354f11(GE_void(t1)));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.tmp_directory */
T0* T53f28(T0* C)
{
	T0* R = 0;
	if (ge286os3933) {
		return ge286ov3933;
	} else {
		ge286os3933 = '\1';
		ge286ov3933 = R;
	}
	R = T354c35(ge286ov3934);
	ge286ov3933 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.current_working_directory */
T0* T54f23(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T54f18(C));
	R = (T82f2(GE_void(t1)));
	return R;
}

/* EXECUTION_ENVIRONMENT.current_working_directory */
T0* T82f2(T0* C)
{
	T0* R = 0;
	R = (T0*)dir_current();
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.current_working_directory */
T0* T53f26(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T53f20(C));
	R = (T82f2(GE_void(t1)));
	return R;
}

/* GEANT_TARGET.file_system */
unsigned char ge203os1723 = '\0';
T0* ge203ov1723;
T0* T26f44(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1723) {
		return ge203ov1723;
	} else {
		ge203os1723 = '\1';
		ge203ov1723 = R;
	}
	t1 = (T26f75(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T26f76(C));
		ge203ov1723 = R;
	} else {
		t1 = (T26f75(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T26f77(C));
			ge203ov1723 = R;
		} else {
			R = (T26f77(C));
			ge203ov1723 = R;
		}
	}
	return R;
}

/* GEANT_TARGET.unix_file_system */
unsigned char ge203os1726 = '\0';
T0* ge203ov1726;
T0* T26f77(T0* C)
{
	T0* R = 0;
	if (ge203os1726) {
		return ge203ov1726;
	} else {
		ge203os1726 = '\1';
		ge203ov1726 = R;
	}
	R = T54c32();
	ge203ov1726 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.make */
T0* T54c32(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T54));
	*(T54*)C = GE_default54;
	return C;
}

/* KL_OPERATING_SYSTEM.is_unix */
unsigned char ge302os3151 = '\0';
T1 ge302ov3151;
T1 T51f2(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if (ge302os3151) {
		return ge302ov3151;
	} else {
		ge302os3151 = '\1';
		ge302ov3151 = R;
	}
	l2 = (T51f3(C, GE_ms("GOBO_OS", 7)));
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(l2)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T17f23(GE_void(l2), GE_ms("unix", 4)));
		if (t1) {
			R = EIF_TRUE;
			ge302ov3151 = R;
		}
	} else {
		l1 = (T51f4(C));
		t2 = (((T17*)(GE_void(l1)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t1) {
			t3 = (T17f9(GE_void(l1), (T6)(GE_int32(1))));
			R = ((t3)==((T2)('/')));
			ge302ov3151 = R;
		}
	}
	return R;
}

/* KL_OPERATING_SYSTEM.current_working_directory */
T0* T51f4(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T51f5(C));
	R = (T82f2(GE_void(t1)));
	return R;
}

/* KL_OPERATING_SYSTEM.execution_environment */
unsigned char ge302os3155 = '\0';
T0* ge302ov3155;
T0* T51f5(T0* C)
{
	T0* R = 0;
	if (ge302os3155) {
		return ge302ov3155;
	} else {
		ge302os3155 = '\1';
		ge302ov3155 = R;
	}
	R = T82c6();
	ge302ov3155 = R;
	return R;
}

/* STRING_8.is_equal */
T1 T17f23(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = ((T17*)(C))->a2;
		t2 = (((T17*)(a1))->a2);
		t1 = ((l1)==(t2));
		if (t1) {
			t3 = (((T17*)(a1))->a1);
			t2 = (T17f25(C, ((T17*)(C))->a1, t3, l1));
			R = ((t2)==((T6)(GE_int32(0))));
		}
	}
	return R;
}

/* STRING_8.str_strict_cmp */
T6 T17f25(T0* C, T0* a1, T0* a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	t1 = ((l1)==(a3));
	while (!(t1)) {
		t2 = (((T15*)(GE_void(a1)))->z2[l1]);
		l2 = ((T6)(t2));
		t2 = (((T15*)(GE_void(a2)))->z2[l1]);
		l3 = ((T6)(t2));
		t1 = ((l2)!=(l3));
		if (t1) {
			R = ((T6)((l2)-(l3)));
			l1 = ((T6)((a3)-((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(a3));
	}
	return R;
}

/* KL_OPERATING_SYSTEM.variable_value */
T0* T51f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T51f5(C));
	R = (T82f4(GE_void(t1), a1));
	return R;
}

/* GEANT_TARGET.windows_file_system */
unsigned char ge203os1724 = '\0';
T0* ge203ov1724;
T0* T26f76(T0* C)
{
	T0* R = 0;
	if (ge203os1724) {
		return ge203ov1724;
	} else {
		ge203os1724 = '\1';
		ge203ov1724 = R;
	}
	R = T53c36();
	ge203ov1724 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.make */
T0* T53c36(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T53));
	*(T53*)C = GE_default53;
	((T53*)(C))->a1 = (T2)('/');
	return C;
}

/* KL_OPERATING_SYSTEM.is_windows */
unsigned char ge302os3150 = '\0';
T1 ge302ov3150;
T1 T51f1(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if (ge302os3150) {
		return ge302ov3150;
	} else {
		ge302os3150 = '\1';
		ge302ov3150 = R;
	}
	l2 = (T51f3(C, GE_ms("GOBO_OS", 7)));
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(l2)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T17f23(GE_void(l2), GE_ms("windows", 7)));
		if (t1) {
			R = EIF_TRUE;
			ge302ov3150 = R;
		}
	} else {
		l3 = (T51f3(C, GE_ms("OS", 2)));
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			t1 = (T17f23(GE_void(l3), GE_ms("Windows_NT", 10)));
		}
		if (t1) {
			R = EIF_TRUE;
			ge302ov3150 = R;
		} else {
			l1 = (T51f4(C));
			t2 = (((T17*)(GE_void(l1)))->a2);
			t1 = (T6f5(&t2, (T6)(GE_int32(3))));
			if (t1) {
				t3 = (T17f9(GE_void(l1), (T6)(GE_int32(2))));
				t1 = ((t3)==((T2)(':')));
				if (t1) {
					t3 = (T17f9(GE_void(l1), (T6)(GE_int32(3))));
					t1 = ((t3)==((T2)('\\')));
				}
				if (t1) {
					R = EIF_TRUE;
					ge302ov3150 = R;
				} else {
					t3 = (T17f9(GE_void(l1), (T6)(GE_int32(1))));
					t1 = ((t3)==((T2)('\\')));
					if (t1) {
						t3 = (T17f9(GE_void(l1), (T6)(GE_int32(2))));
						t1 = ((t3)==((T2)('\\')));
					}
					if (t1) {
						R = EIF_TRUE;
						ge302ov3150 = R;
					}
				}
			}
		}
	}
	return R;
}

/* GEANT_TARGET.operating_system */
T0* T26f75(T0* C)
{
	T0* R = 0;
	if (ge224os1727) {
		return ge224ov1727;
	} else {
		ge224os1727 = '\1';
		ge224ov1727 = R;
	}
	R = T51c7();
	ge224ov1727 = R;
	return R;
}

/* GEANT_STRING_INTERPRETER.interpreted_string */
T0* T244f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T1 l5 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	l2 = (T6)(GE_int32(1));
	l3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T244f2(C));
	R = (T76f3(GE_void(t1), a1, l3));
	t2 = (T6f1(&l2, l3));
	while (!(t2)) {
		l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T195f10(a1, l2)));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l4)!=((T2)('$')));
		if (t2) {
			t2 = ((l4)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f34(R, l4);
				} else {
					T195f56(R, l4);
				}
			} else {
				t1 = (T244f2(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T76f4(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l3));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f34(R, (T2)('$'));
				} else {
					T195f56(R, (T2)('$'));
				}
			} else {
				l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T195f10(a1, l2)));
				t2 = ((l4)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f34(R, (T2)('$'));
					} else {
						T195f56(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T244f2(C));
					l1 = (T76f3(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l4)==((T2)('{')));
					if (t2) {
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						l5 = EIF_FALSE;
						t2 = (T6f1(&l2, l3));
						if (!(t2)) {
							t2 = (l5);
						}
						while (!(t2)) {
							l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T195f10(a1, l2)));
							t2 = ((l4)==((T2)('}')));
							if (t2) {
								l5 = EIF_TRUE;
							} else {
								t2 = ((l4)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f34(l1, l4);
									} else {
										T195f56(l1, l4);
									}
								} else {
									t1 = (T244f2(C));
									T76f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l3));
							if (!(t2)) {
								t2 = (l5);
							}
						}
					} else {
						l5 = EIF_FALSE;
						t2 = (T6f1(&l2, l3));
						if (!(t2)) {
							t2 = (l5);
						}
						while (!(t2)) {
							l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T195f10(a1, l2)));
							switch (l4) {
							case (T2)'a':
							case (T2)'b':
							case (T2)'c':
							case (T2)'d':
							case (T2)'e':
							case (T2)'f':
							case (T2)'g':
							case (T2)'h':
							case (T2)'i':
							case (T2)'j':
							case (T2)'k':
							case (T2)'l':
							case (T2)'m':
							case (T2)'n':
							case (T2)'o':
							case (T2)'p':
							case (T2)'q':
							case (T2)'r':
							case (T2)'s':
							case (T2)'t':
							case (T2)'u':
							case (T2)'v':
							case (T2)'w':
							case (T2)'x':
							case (T2)'y':
							case (T2)'z':
							case (T2)'A':
							case (T2)'B':
							case (T2)'C':
							case (T2)'D':
							case (T2)'E':
							case (T2)'F':
							case (T2)'G':
							case (T2)'H':
							case (T2)'I':
							case (T2)'J':
							case (T2)'K':
							case (T2)'L':
							case (T2)'M':
							case (T2)'N':
							case (T2)'O':
							case (T2)'P':
							case (T2)'Q':
							case (T2)'R':
							case (T2)'S':
							case (T2)'T':
							case (T2)'U':
							case (T2)'V':
							case (T2)'W':
							case (T2)'X':
							case (T2)'Y':
							case (T2)'Z':
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
							case (T2)(T2)('_'):
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f34(l1, l4);
								} else {
									T195f56(l1, l4);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l5 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l3));
							if (!(t2)) {
								t2 = (l5);
							}
						}
					}
					l1 = (T244f3(C, l1));
					t1 = (T244f2(C));
					R = (T76f5(GE_void(t1), R, l1));
				}
			}
		}
		t2 = (T6f1(&l2, l3));
	}
	return R;
}

/* GEANT_STRING_INTERPRETER.variable_value */
T0* T244f3(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?T17f29(a1):T195f50(a1)));
	if (t1) {
		R = (T244f4(C, a1));
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		t1 = (((((T0*)(GE_void(((T244*)(C))->a1)))->id==245)?T245f3(((T244*)(C))->a1, a1):T58f5(((T244*)(C))->a1, a1)));
		if (t1) {
			R = (((((T0*)(GE_void(((T244*)(C))->a1)))->id==245)?T245f2(((T244*)(C))->a1, a1):T58f7(((T244*)(C))->a1, a1)));
			t1 = ((R)!=(EIF_VOID));
			if (t1) {
				R = (T244f6(C, R));
			}
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = (T244f4(C, a1));
	}
	return R;
}

/* GEANT_STRING_INTERPRETER.expanded_variable_value */
T0* T244f6(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = a1;
	R = (T244f5(C, l1));
	t1 = (T244f2(C));
	t2 = (T76f1(GE_void(t1), R, l1));
	while (!(t2)) {
		l1 = R;
		R = (T244f5(C, l1));
		t1 = (T244f2(C));
		t2 = (T76f1(GE_void(t1), R, l1));
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.value */
T0* T58f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T58f2(C));
	t2 = (T76f1(GE_void(t1), a1, GE_ms("cwd", 3)));
	if (t2) {
		t1 = (T58f9(C));
		R = (((((T0*)(GE_void(t1)))->id==53)?T53f10(t1):T54f10(t1)));
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f3(C));
		t3 = (((T101*)(GE_void(t1)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = (T58f3(C));
			t1 = (T101f5(GE_void(t1)));
			T34f68(GE_void(t1), a1);
			t1 = (T58f3(C));
			t1 = (T101f5(GE_void(t1)));
			t2 = (T34f33(GE_void(t1)));
			if (t2) {
				t1 = (T58f3(C));
				t1 = (T101f5(GE_void(t1)));
				R = (T34f44(GE_void(t1)));
			}
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f4(C));
		T29f67(GE_void(t1), a1);
		t1 = (T58f4(C));
		t2 = (T29f36(GE_void(t1)));
		if (t2) {
			t1 = (T58f4(C));
			R = (T29f43(GE_void(t1)));
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		T25f80(GE_void(((T58*)(C))->a1), a1);
		t2 = (T25f44(GE_void(((T58*)(C))->a1)));
		if (t2) {
			R = (T25f51(GE_void(((T58*)(C))->a1)));
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f6(C));
		t1 = (T100f5(GE_void(t1), a1));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T58f6(C));
			R = (T100f5(GE_void(t1), a1));
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLES.found_item */
T0* T25f51(T0* C)
{
	T0* R = 0;
	R = (T25f53(C, ((T25*)(C))->a10));
	return R;
}

/* GEANT_PROJECT_VARIABLES.item_storage_item */
T0* T25f53(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T25*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.found_item */
T0* T29f43(T0* C)
{
	T0* R = 0;
	R = (T29f35(C, ((T29*)(C))->a9));
	return R;
}

/* GEANT_VARIABLES.item_storage_item */
T0* T29f35(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T29*)(C))->a12)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.found_item */
T0* T34f44(T0* C)
{
	T0* R = 0;
	R = (T34f41(C, ((T34*)(C))->a9));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_item */
T0* T34f41(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T34*)(C))->a12)))->z2[a1]);
	return R;
}

/* KL_UNIX_FILE_SYSTEM.cwd */
T0* T54f10(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T54f18(C));
	R = (T82f2(GE_void(t1)));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.cwd */
T0* T53f10(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T53f20(C));
	R = (T82f2(GE_void(t1)));
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.file_system */
T0* T58f9(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1723) {
		return ge203ov1723;
	} else {
		ge203os1723 = '\1';
		ge203ov1723 = R;
	}
	t1 = (T58f11(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T58f12(C));
		ge203ov1723 = R;
	} else {
		t1 = (T58f11(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T58f13(C));
			ge203ov1723 = R;
		} else {
			R = (T58f13(C));
			ge203ov1723 = R;
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.unix_file_system */
T0* T58f13(T0* C)
{
	T0* R = 0;
	if (ge203os1726) {
		return ge203ov1726;
	} else {
		ge203os1726 = '\1';
		ge203ov1726 = R;
	}
	R = T54c32();
	ge203ov1726 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.windows_file_system */
T0* T58f12(T0* C)
{
	T0* R = 0;
	if (ge203os1724) {
		return ge203ov1724;
	} else {
		ge203os1724 = '\1';
		ge203ov1724 = R;
	}
	R = T53c36();
	ge203ov1724 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.operating_system */
T0* T58f11(T0* C)
{
	T0* R = 0;
	if (ge224os1727) {
		return ge224ov1727;
	} else {
		ge224os1727 = '\1';
		ge224ov1727 = R;
	}
	R = T51c7();
	ge224ov1727 = R;
	return R;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.value */
T0* T245f2(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	t1 = (T245f3(C, a1));
	if (t1) {
		R = (((((T0*)(GE_void(((T245*)(C))->a1)))->id==34)?T34f38(((T245*)(C))->a1, a1):T29f34(((T245*)(C))->a1, a1)));
	}
	return R;
}

/* GEANT_VARIABLES.item */
T0* T29f34(T0* C, T0* a1)
{
	T0* R = 0;
	T29f51(C, a1);
	R = (T29f35(C, ((T29*)(C))->a1));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item */
T0* T34f38(T0* C, T0* a1)
{
	T0* R = 0;
	T34f51(C, a1);
	R = (T34f41(C, ((T34*)(C))->a1));
	return R;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.has */
T1 T245f3(T0* C, T0* a1)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T245*)(C))->a1)))->id==34)?T34f37(((T245*)(C))->a1, a1):T29f32(((T245*)(C))->a1, a1)));
	return R;
}

/* GEANT_VARIABLES.has */
T1 T29f32(T0* C, T0* a1)
{
	T1 R = 0;
	T29f51(C, a1);
	R = ((((T29*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_STRING_INTERPRETER.default_variable_value */
T0* T244f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T244f2(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = ((T6)((t2)+((T6)(GE_int32(3)))));
	R = (T76f3(GE_void(t1), a1, t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, GE_ms("${", 2));
	} else {
		T195f55(R, GE_ms("${", 2));
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, a1);
	} else {
		T195f55(R, a1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, GE_ms("}", 1));
	} else {
		T195f55(R, GE_ms("}", 1));
	}
	return R;
}

/* KL_STRING_ROUTINES.append_substring_to_string */
void T76f20(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 195:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T195f57(GE_void(l1), a2, a3, a4);
	} else {
		l2 = a3;
		t1 = (T6f1(&l2, a4));
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(a2)))->id==17)?T17f9(a2, l2):T195f10(a2, l2)));
			if (((T0*)(GE_void(a1)))->id==17) {
				T17f34(a1, t2);
			} else {
				T195f56(a1, t2);
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l2, a4));
		}
	}
}

/* KL_STRING_ROUTINES.new_empty_string */
T0* T76f3(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T76f8(C));
	t2 = (T83f1(GE_void(t1), a1, ge312ov4945));
	if (t2) {
		R = T17c33(a2);
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 195:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			R = (T195f9(GE_void(l1), a2));
		} else {
			R = (T76f7(C, a1));
			if (((T0*)(GE_void(R)))->id==17) {
				T17f38(R);
			} else {
				T195f75(R);
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.old_wipe_out */
void T195f75(T0* C)
{
	((T195*)(C))->a1 = (T6)(GE_int32(0));
	T195f75p1(C);
	T195f78(C);
}

/* UC_UTF8_STRING.wipe_out */
void T195f78(T0* C)
{
	((T195*)(C))->a3 = (T6)(GE_int32(0));
	T195f61(C, (T6)(GE_int32(0)));
}

/* UC_UTF8_STRING.wipe_out */
void T195f75p1(T0* C)
{
	((T195*)(C))->a2 = T15c9((T6)(GE_int32(1)));
	((T195*)(C))->a1 = (T6)(GE_int32(0));
	((T195*)(C))->a4 = (T6)(GE_int32(0));
}

/* STRING_8.wipe_out */
void T17f38(T0* C)
{
	((T17*)(C))->a1 = T15c9((T6)(GE_int32(1)));
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_STRING_INTERPRETER.string_ */
T0* T244f2(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* UC_UTF8_STRING.out */
T0* T195f16(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T2 l5 = 0;
	T6 l6 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	l2 = ((T195*)(C))->a1;
	R = T17c33(l2);
	t1 = ((l2)==(((T195*)(C))->a3));
	if (t1) {
		t2 = (T195f31(C));
		l5 = ((T2)('\177'));
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l4 = (T195f20(C, l1));
			t1 = (T2f17(&l4, l5));
			if (t1) {
				T17f34(GE_void(R), l4);
			} else {
				T17f34(GE_void(R), (T2)('\045'));
				T17f34(GE_void(R), (T2)('/'));
				t3 = ((T6)(l4));
				t2 = (T6f12(&t3));
				T17f39(GE_void(R), t2);
				T17f34(GE_void(R), (T2)('/'));
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
	} else {
		l2 = ((T195*)(C))->a3;
		t2 = (T195f31(C));
		l6 = ((T6)(GE_int32(127)));
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T195f21(C, l1));
			t1 = (T6f9(&l3, l6));
			if (t1) {
				t2 = (T195f23(C));
				t4 = (T197f2(GE_void(t2), l3));
				T17f34(GE_void(R), t4);
			} else {
				T17f34(GE_void(R), (T2)('\045'));
				T17f34(GE_void(R), (T2)('/'));
				t2 = (T6f12(&l3));
				T17f39(GE_void(R), t2);
				T17f34(GE_void(R), (T2)('/'));
			}
			l1 = (T195f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
	}
	return R;
}

/* UC_UTF8_STRING.unicode */
unsigned char ge232os4951 = '\0';
T0* ge232ov4951;
T0* T195f31(T0* C)
{
	T0* R = 0;
	if (ge232os4951) {
		return ge232ov4951;
	} else {
		ge232os4951 = '\1';
		ge232ov4951 = R;
	}
	R = T253c29();
	ge232ov4951 = R;
	return R;
}

/* UC_UNICODE_ROUTINES.default_create */
T0* T253c29(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T253));
	*(T253*)C = GE_default253;
	return C;
}

/* STRING_8.out */
T0* T17f4(T0* C)
{
	T0* R = 0;
	R = T17c33(((T17*)(C))->a2);
	T17f35(GE_void(R), C);
	return R;
}

/* XM_ELEMENT.attribute_by_name */
T0* T97f21(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T320c11();
	l1 = (T97f19(C));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		T192x5876T0(GE_void(t2), l2);
		t1 = (T320f9(GE_void(l2)));
		if (t1) {
			t2 = (((T320*)(GE_void(l2)))->a2);
			t1 = (T97f9(C, t2, a1));
		}
		if (t1) {
			R = (((T320*)(GE_void(l2)))->a2);
			T191f12(GE_void(l1));
		} else {
			T191f11(GE_void(l1));
		}
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* XM_ELEMENT.attribute_same_name */
T1 T97f9(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (((T190*)(GE_void(a1)))->a1);
	t2 = (T97f10(C, t1, a2));
	if (t2) {
		t1 = (((T190*)(GE_void(a1)))->a2);
		t1 = (((T316*)(GE_void(t1)))->a1);
		t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
		R = ((t3)==((T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NODE_TYPER.is_attribute */
T1 T320f9(T0* C)
{
	T1 R = 0;
	R = ((((T320*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* GEANT_STRING_INTERPRETER.set_variable_resolver */
void T244f8(T0* C, T0* a1)
{
	((T244*)(C))->a1 = a1;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.set_variables */
void T58f17(T0* C, T0* a1)
{
	((T58*)(C))->a1 = a1;
}

/* GEANT_TARGET.project_variables_resolver */
T0* T26f28(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_STRING_INTERPRETER.make */
T0* T244c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T244));
	*(T244*)C = GE_default244;
	return C;
}

/* XM_ELEMENT.has_attribute_by_name */
T1 T97f20(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T320c11();
	l1 = (T97f19(C));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		T192x5876T0(GE_void(t2), l2);
		t1 = (T320f9(GE_void(l2)));
		if (t1) {
			t2 = (((T320*)(GE_void(l2)))->a2);
			t1 = (T97f9(C, t2, a1));
		}
		if (t1) {
			R = EIF_TRUE;
			T191f12(GE_void(l1));
		} else {
			T191f11(GE_void(l1));
		}
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_TARGET.dir_attribute_name */
T0* T26f43(T0* C)
{
	T0* R = 0;
	if (ge136os2382) {
		return ge136ov2382;
	} else {
		ge136os2382 = '\1';
		ge136ov2382 = R;
	}
	R = GE_ms("dir", 3);
	ge136ov2382 = R;
	return R;
}

/* GEANT_PROJECT.log */
void T22f41(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l1 = (((T33*)(a1))->a2);
	l2 = (((T33*)(a1))->a3);
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T33f4(a1, l1));
		T68f12(GE_void(((T22*)(C))->a6), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	T68f13(GE_void(((T22*)(C))->a6));
	T68f18(GE_void(((T22*)(C))->a6));
}

/* KL_STDOUT_FILE.flush */
void T68f18(T0* C)
{
	T68f19(C);
}

/* KL_STDOUT_FILE.old_flush */
void T68f19(T0* C)
{
	T68f20(C, ((T68*)(C))->a1);
}

/* KL_STDOUT_FILE.file_flush */
void T68f20(T0* C, T14 a1)
{
	file_flush((FILE *)a1);
}

/* KL_STDOUT_FILE.put_new_line */
void T68f13(T0* C)
{
	T68f12(C, ge310ov3135);
}

/* KL_STDOUT_FILE.put_string */
void T68f12(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T68f6(C));
	l1 = (T76f2(GE_void(t1), a1));
	T68f16(C, l1);
}

/* KL_STDOUT_FILE.old_put_string */
void T68f16(T0* C, T0* a1)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T77 t3;
	T14 t4;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = ((t1)!=((T6)(GE_int32(0))));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T195*)(a1))->a2));
		(t3).id = 77;
		(t3).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
		t4 = ((t3).a1);
		t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		T68f17(C, ((T68*)(C))->a1, t4, t1);
	}
}

/* KL_STDOUT_FILE.console_ps */
void T68f17(T0* C, T14 a1, T14 a2, T6 a3)
{
	console_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
}

/* KL_STDOUT_FILE.string_ */
T0* T68f6(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_PROJECT.target_name */
T0* T22f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T31f29(GE_void(((T22*)(C))->a1)));
	T124f9(GE_void(l1));
	t1 = (T124f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T124f6(GE_void(l1)));
		t1 = ((a1)==(t2));
		if (t1) {
			R = (T124f7(GE_void(l1)));
			T124f13(GE_void(l1));
		} else {
			T124f10(GE_void(l1));
		}
		t1 = (T124f5(GE_void(l1)));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].forth */
void T124f10(T0* C)
{
	T31f66(GE_void(((T124*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_forth */
void T31f66(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T124*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T31*)(C))->a5;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T124f14(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T31f70(C, a1);
		}
	} else {
		T124f14(a1, l1);
		if (l3) {
			T31f71(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].add_traversing_cursor */
void T31f71(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T31*)(C))->a17));
	if (t1) {
		t2 = (((T124*)(GE_void(((T31*)(C))->a17)))->a3);
		T124f15(a1, t2);
		T124f15(GE_void(((T31*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].set_next_cursor */
void T124f15(T0* C, T0* a1)
{
	((T124*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove_traversing_cursor */
void T31f70(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T31*)(C))->a17));
	if (t1) {
		l2 = ((T31*)(C))->a17;
		l1 = (((T124*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T124*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T124*)(a1))->a3);
			T124f15(GE_void(l2), t2);
			T124f15(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].set_position */
void T124f14(T0* C, T6 a1)
{
	((T124*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_item */
T6 T31f32(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T31*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].go_after */
void T124f13(T0* C)
{
	T31f76(GE_void(((T124*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_go_after */
void T31f76(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T31f41(C, a1));
	T124f14(a1, (T6)(GE_int32(-2)));
	t1 = ((T1)(!(l1)));
	if (t1) {
		T31f70(C, a1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_off */
T1 T31f41(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T124*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].key */
T0* T124f7(T0* C)
{
	T0* R = 0;
	R = (T31f36(GE_void(((T124*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_key */
T0* T31f36(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T124*)(a1))->a2);
	R = (T31f31(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_item */
T0* T31f31(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T31*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].item */
T0* T124f6(T0* C)
{
	T0* R = 0;
	R = (T31f35(GE_void(((T124*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_item */
T0* T31f35(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T124*)(a1))->a2);
	R = (T31f27(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_item */
T0* T31f27(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T120*)(GE_void(((T31*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].after */
T1 T124f5(T0* C)
{
	T1 R = 0;
	R = (T31f34(GE_void(((T124*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_after */
T1 T31f34(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T124*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].start */
void T124f9(T0* C)
{
	T31f65(GE_void(((T124*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_start */
void T31f65(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T31f40(C));
	if (t1) {
		T124f14(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T31f41(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T31*)(C))->a5;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T31f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T124f14(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T31f70(C, a1);
			}
		} else {
			T124f14(a1, l1);
			if (l3) {
				T31f71(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].is_empty */
T1 T31f40(T0* C)
{
	T1 R = 0;
	R = ((((T31*)(C))->a8)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_cursor */
T0* T31f29(T0* C)
{
	T0* R = 0;
	R = T124c8(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].make */
T0* T124c8(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T124));
	*(T124*)C = GE_default124;
	((T124*)(C))->a1 = a1;
	((T124*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_TARGET.is_enabled */
T1 T26f42(T0* C)
{
	T1 R = 0;
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (T26f28(C));
	t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
	T58f17(GE_void(t1), t2);
	l1 = EIF_TRUE;
	l2 = EIF_FALSE;
	t1 = (T26f73(C));
	t3 = (T26f35(C, t1));
	if (t3) {
		t1 = (T26f73(C));
		t1 = (T97f21(GE_void(((T26*)(C))->a2), t1));
		l3 = (((T190*)(GE_void(t1)))->a3);
		t1 = (T26f28(C));
		l1 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l1));
		t1 = GE_ma33((T6)4,
GE_ms(" if: \'", 6),
l3,
GE_ms("\': ", 3),
t1);
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
	t1 = (T26f74(C));
	t3 = (T26f35(C, t1));
	if (t3) {
		t1 = (T26f74(C));
		t1 = (T97f21(GE_void(((T26*)(C))->a2), t1));
		l3 = (((T190*)(GE_void(t1)))->a3);
		t1 = (T26f28(C));
		l2 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l2));
		t1 = GE_ma33((T6)4,
GE_ms(" unless: \'", 10),
l3,
GE_ms("\'=", 2),
t1);
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
	if (l1) {
		R = ((T1)(!(l2)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_TARGET.unless_attribute_name */
T0* T26f74(T0* C)
{
	T0* R = 0;
	if (ge136os2384) {
		return ge136ov2384;
	} else {
		ge136os2384 = '\1';
		ge136ov2384 = R;
	}
	R = GE_ms("unless", 6);
	ge136ov2384 = R;
	return R;
}

/* GEANT_TARGET.if_attribute_name */
T0* T26f73(T0* C)
{
	T0* R = 0;
	if (ge136os2383) {
		return ge136ov2383;
	} else {
		ge136os2383 = '\1';
		ge136ov2383 = R;
	}
	R = GE_ms("if", 2);
	ge136ov2383 = R;
	return R;
}

/* GEANT_TARGET.final_target */
T0* T26f32(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	R = C;
	t1 = (((T26*)(GE_void(R)))->a11);
	t2 = ((t1)==(EIF_VOID));
	while (!(t2)) {
		R = (((T26*)(GE_void(R)))->a11);
		t1 = (((T26*)(GE_void(R)))->a11);
		t2 = ((t1)==(EIF_VOID));
	}
	return R;
}

/* GEANT_PROJECT.trace_debug */
void T22f31(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T24*)(GE_void(((T22*)(C))->a9)))->a2);
	if (t1) {
		l1 = (((T33*)(GE_void(a1)))->a2);
		l2 = (((T33*)(GE_void(a1)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T33f4(GE_void(a1), l1));
			T68f12(GE_void(((T22*)(C))->a6), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		T68f13(GE_void(((T22*)(C))->a6));
		T68f18(GE_void(((T22*)(C))->a6));
	}
}

/* DS_ARRAYED_STACK [GEANT_TARGET].item */
T0* T187f5(T0* C)
{
	T0* R = 0;
	R = (((T120*)(GE_void(((T187*)(C))->a2)))->z2[((T187*)(C))->a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.make */
T0* T34c46(void)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T34));
	*(T34*)C = GE_default34;
	T34f48(C, (T6)(GE_int32(10)));
	l1 = T59c3();
	T34f49(C, l1);
	return C;
}

/* GEANT_ARGUMENT_VARIABLES.set_key_equality_tester */
void T34f49(T0* C, T0* a1)
{
	((T34*)(C))->a7 = a1;
	T61f6(GE_void(((T34*)(C))->a8), a1);
}

/* GEANT_ARGUMENT_VARIABLES.make_map */
void T34f48(T0* C, T6 a1)
{
	T34f57(C, a1, EIF_VOID, EIF_VOID);
}

/* GEANT_ARGUMENT_VARIABLES.make_with_equality_testers */
void T34f57(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T34*)(C))->a16 = a2;
	((T34*)(C))->a7 = a3;
	T34f62(C, a1);
	((T34*)(C))->a8 = T61c5(C);
}

/* GEANT_ARGUMENT_VARIABLES.make_sparse_container */
void T34f62(T0* C, T6 a1)
{
	T6 t1;
	((T34*)(C))->a3 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f63(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f64(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f65(C, t1);
	((T34*)(C))->a10 = (T34f31(C, a1));
	t1 = ((T6)((((T34*)(C))->a10)+((T6)(GE_int32(1)))));
	T34f66(C, t1);
	((T34*)(C))->a6 = (T6)(GE_int32(0));
	((T34*)(C))->a5 = (T6)(GE_int32(0));
	((T34*)(C))->a1 = (T6)(GE_int32(0));
	T34f50(C);
	((T34*)(C))->a19 = (T34f30(C));
}

/* GEANT_ARGUMENT_VARIABLES.make_slots */
void T34f66(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_clashes */
void T34f65(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_key_storage */
void T34f64(T0* C, T6 a1)
{
	((T34*)(C))->a18 = T66c3();
	((T34*)(C))->a15 = (T66f2(GE_void(((T34*)(C))->a18), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_item_storage */
void T34f63(T0* C, T6 a1)
{
	((T34*)(C))->a17 = T66c3();
	((T34*)(C))->a12 = (T66f2(GE_void(((T34*)(C))->a17), a1));
}

/* GEANT_PROJECT.calculate_depend_order */
void T22f39(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	l1 = (T187f5(GE_void(a1)));
	t1 = (((T26*)(GE_void(l1)))->a1);
	t1 = GE_ma33((T6)2,
GE_ms("pushing target: ", 16),
t1);
	T22f31(C, t1);
	l2 = (T26f36(GE_void(l1)));
	t2 = (((T187*)(GE_void(l2)))->a1);
	t3 = ((t2)==((T6)(GE_int32(0))));
	while (!(t3)) {
		t1 = (T187f5(GE_void(l2)));
		T187f9(GE_void(a1), t1);
		T187f10(GE_void(l2));
		T22f39(C, a1);
		t2 = (((T187*)(GE_void(l2)))->a1);
		t3 = ((t2)==((T6)(GE_int32(0))));
	}
}

/* GEANT_TARGET.dependent_targets */
T0* T26f36(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	R = T187c8((T6)(GE_int32(10)));
	t1 = (T26f39(C));
	if (t1) {
		t2 = (T26f40(C));
		l3 = (T26f21(C, t2, (T2)(',')));
		t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a9);
		t1 = (((T24*)(GE_void(t2)))->a2);
		if (t1) {
			T26f93(C, l3);
		}
		l4 = (T6)(GE_int32(1));
		t3 = (((T71*)(GE_void(l3)))->a1);
		t1 = (T6f1(&l4, t3));
		while (!(t1)) {
			l2 = (T71f14(GE_void(l3), l4));
			t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a1);
			t1 = (T31f24(GE_void(t2), l2));
			if (t1) {
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a1);
				t2 = (T31f28(GE_void(t2), l2));
				l1 = (T26f32(GE_void(t2)));
				T187f9(GE_void(R), l1);
			} else {
				t2 = GE_ma33((T6)3,
GE_ms("geant error: unknown dependent target \'", 39),
l2,
GE_ms("\'", 1));
				T26f81(C, (T6)(GE_int32(1)), t2);
			}
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
			t3 = (((T71*)(GE_void(l3)))->a1);
			t1 = (T6f1(&l4, t3));
		}
	}
	return R;
}

/* GEANT_TARGET.show_dependent_targets */
void T26f93(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T26f17(C));
	t1 = (T46f2(GE_void(t1)));
	T68f10(GE_void(t1), GE_ms("======= DEPENDENCIES ==========", 31));
	l1 = (T6)(GE_int32(1));
	t2 = (((T71*)(GE_void(a1)))->a1);
	t3 = (T6f1(&l1, t2));
	while (!(t3)) {
		t1 = (T26f17(C));
		t1 = (T46f2(GE_void(t1)));
		t4 = (T71f14(GE_void(a1), l1));
		T68f10(GE_void(t1), t4);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (((T71*)(GE_void(a1)))->a1);
		t3 = (T6f1(&l1, t2));
	}
	t1 = (T26f17(C));
	t1 = (T46f2(GE_void(t1)));
	T68f10(GE_void(t1), GE_ms("=================", 17));
}

/* KL_STDOUT_FILE.put_line */
void T68f10(T0* C, T0* a1)
{
	T68f12(C, a1);
	T68f13(C);
}

/* KL_STANDARD_FILES.output */
unsigned char ge206os3125 = '\0';
T0* ge206ov3125;
T0* T46f2(T0* C)
{
	T0* R = 0;
	if (ge206os3125) {
		return ge206ov3125;
	} else {
		ge206os3125 = '\1';
		ge206ov3125 = R;
	}
	R = T68c9();
	ge206ov3125 = R;
	return R;
}

/* KL_STDOUT_FILE.make */
T0* T68c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T68));
	*(T68*)C = GE_default68;
	T68f11(C, GE_ms("stdout", 6));
	return C;
}

/* KL_STDOUT_FILE.make_open_stdout */
void T68f11(T0* C, T0* a1)
{
	T68f14(C, a1);
	((T68*)(C))->a1 = (T68f5(C, (T6)(GE_int32(1))));
	T68f15(C);
}

/* KL_STDOUT_FILE.set_write_mode */
void T68f15(T0* C)
{
	((T68*)(C))->a3 = (T6)(GE_int32(2));
}

/* KL_STDOUT_FILE.console_def */
T14 T68f5(T0* C, T6 a1)
{
	T14 R = 0;
	R = (T14)console_def(a1);
	return R;
}

/* KL_STDOUT_FILE.old_make */
void T68f14(T0* C, T0* a1)
{
	((T68*)(C))->a2 = a1;
	((T68*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_TARGET.string_tokens */
T0* T26f21(T0* C, T0* a1, T2 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l6 = (T6)(GE_int32(1));
	l8 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l6, l8));
	if (!(t1)) {
		t1 = (l9);
	}
	while (!(t1)) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l6):T195f10(a1, l6)));
		switch (t2) {
		case (T2)(T2)(' '):
		case (T2)(T2)('\t'):
		case (T2)(T2)('\r'):
		case (T2)(T2)('\n'):
			l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
			break;
		default:
			l9 = EIF_TRUE;
			break;
		}
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
	}
	t1 = ((T1)(!(l9)));
	if (t1) {
		t3 = (T26f24(C));
		l1 = (T76f7(GE_void(t3), GE_ms("", 0)));
	} else {
		l9 = EIF_FALSE;
		l7 = l8;
		while (!(l9)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l7):T195f10(a1, l7)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
		}
		l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l6, l7):T195f11(a1, l6, l7)));
	}
	R = T71c23((T6)(GE_int32(5)));
	while (!(l5)) {
		l5 = EIF_TRUE;
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, (T6)(GE_int32(1))):T195f10(l1, (T6)(GE_int32(1)))));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f48(l1, t4);
				} else {
					T195f76(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, t4):T195f10(l1, t4)));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f49(l1, t4);
				} else {
					T195f74(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
	}
	l3 = (T6)(GE_int32(1));
	l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T195f17(l1, a2, l3)));
	t1 = ((l4)==((T6)(GE_int32(0))));
	if (!(t1)) {
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f1(&l3, t4));
	}
	while (!(t1)) {
		l6 = l3;
		l8 = ((T6)((l4)-((T6)(GE_int32(1)))));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T195f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T195f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T195f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
		l3 = ((T6)((l4)+((T6)(GE_int32(1)))));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t1 = (T6f9(&l3, t4));
		if (t1) {
			l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T195f17(l1, a2, l3)));
		}
		t1 = ((l4)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
			t1 = (T6f1(&l3, t4));
		}
	}
	t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
	t1 = (T6f9(&l3, t4));
	if (t1) {
		l6 = l3;
		l8 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T195f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T195f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T195f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T195*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
	}
	return R;
}

/* GEANT_TARGET.dependencies */
T0* T26f40(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T26f41(C));
	t1 = (T97f21(GE_void(((T26*)(C))->a2), t1));
	R = (((T190*)(GE_void(t1)))->a3);
	return R;
}

/* GEANT_TARGET.depend_attribute_name */
unsigned char ge63os2372 = '\0';
T0* ge63ov2372;
T0* T26f41(T0* C)
{
	T0* R = 0;
	if (ge63os2372) {
		return ge63ov2372;
	} else {
		ge63os2372 = '\1';
		ge63ov2372 = R;
	}
	R = GE_ms("depend", 6);
	ge63ov2372 = R;
	return R;
}

/* GEANT_TARGET.has_dependencies */
T1 T26f39(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T26f41(C));
	R = (T97f20(GE_void(((T26*)(C))->a2), t1));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].force */
void T187f9(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T187f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T187*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T187f7(C, t2));
		T187f11(C, t2);
	}
	((T187*)(C))->a1 = ((T6)((((T187*)(C))->a1)+((T6)(GE_int32(1)))));
	((T120*)(GE_void(((T187*)(C))->a2)))->z2[((T187*)(C))->a1] = (a1);
}

/* DS_ARRAYED_STACK [GEANT_TARGET].resize */
void T187f11(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T187*)(C))->a2 = (T125f1(GE_void(((T187*)(C))->a3), ((T187*)(C))->a2, t1));
	((T187*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].resize */
T0* T125f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T120*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T120f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_TARGET].resized_area */
T0* T120f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T120c4(a1);
	t1 = (((T120*)(C))->z1);
	T120f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_TARGET].copy_data */
void T120f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T120f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T120*)(a1))->z2[l1]);
			((T120*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_TARGET].move_data */
void T120f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T120f8(C, a1, a2, a3);
			} else {
				T120f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T120f8(C, a1, a2, a3);
			} else {
				T120f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_TARGET].overlapping_move */
void T120f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T120*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T120*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T120*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T120*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_TARGET].non_overlapping_move */
void T120f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T120*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T120*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_TARGET].make */
T0* T120c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T120)+a1*sizeof(T0*));
	*(T120*)C = GE_default120;
	((T120*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].new_capacity */
T6 T187f7(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].extendible */
T1 T187f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T187*)(C))->a1)+(a1)));
	R = (T6f5(&(((T187*)(C))->a4), t1));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].make */
T0* T187c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T187));
	*(T187*)C = GE_default187;
	((T187*)(C))->a3 = T125c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T187*)(C))->a2 = (T125f2(GE_void(((T187*)(C))->a3), t1));
	((T187*)(C))->a4 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].make */
T0* T125f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T204c2(a1);
	R = (((T204*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_TARGET].make_area */
T0* T204c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T204));
	*(T204*)C = GE_default204;
	((T204*)(C))->a1 = T120c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].default_create */
T0* T125c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T125));
	*(T125*)C = GE_default125;
	return C;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].force */
void T101f9(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T101f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T101*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T101f7(C, t2));
		T101f11(C, t2);
	}
	((T101*)(C))->a1 = ((T6)((((T101*)(C))->a1)+((T6)(GE_int32(1)))));
	((T177*)(GE_void(((T101*)(C))->a2)))->z2[((T101*)(C))->a1] = (a1);
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].resize */
void T101f11(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T101*)(C))->a2 = (T178f2(GE_void(((T101*)(C))->a3), ((T101*)(C))->a2, t1));
	((T101*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].resize */
T0* T178f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T177*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T177f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].resized_area */
T0* T177f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T177c4(a1);
	t1 = (((T177*)(C))->z1);
	T177f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].copy_data */
void T177f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T177f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T177*)(a1))->z2[l1]);
			((T177*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].move_data */
void T177f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T177f8(C, a1, a2, a3);
			} else {
				T177f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T177f8(C, a1, a2, a3);
			} else {
				T177f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].overlapping_move */
void T177f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T177*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T177*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T177*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T177*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].non_overlapping_move */
void T177f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T177*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T177*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].new_capacity */
T6 T101f7(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].extendible */
T1 T101f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T101*)(C))->a1)+(a1)));
	R = (T6f5(&(((T101*)(C))->a4), t1));
	return R;
}

/* GEANT_PROJECT.target_arguments_stack */
T0* T22f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_PROJECT.trace */
void T22f24(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T24*)(GE_void(((T22*)(C))->a9)))->a1);
	if (t1) {
		l1 = (((T33*)(a1))->a2);
		l2 = (((T33*)(a1))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T33f4(a1, l1));
			T68f12(GE_void(((T22*)(C))->a6), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		T68f13(GE_void(((T22*)(C))->a6));
		T68f18(GE_void(((T22*)(C))->a6));
	}
}

/* GEANT.commandline_arguments */
unsigned char ge61os1706 = '\0';
T0* ge61ov1706;
T0* T21f11(T0* C)
{
	T0* R = 0;
	if (ge61os1706) {
		return ge61ov1706;
	} else {
		ge61os1706 = '\1';
		ge61ov1706 = R;
	}
	R = T34c46();
	ge61ov1706 = R;
	return R;
}

/* GEANT_PROJECT.start_target */
T0* T22f19(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	R = (T22f16(C));
	t1 = ((((T22*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?((T17*)(((T22*)(C))->a4))->a2:((T195*)(((T22*)(C))->a4))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t3 = (T22f15(C));
		t1 = ((t3)==(EIF_VOID));
		if (t1) {
			t3 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?T17f8(((T22*)(C))->a4, GE_ms("\'", 1)):T195f7(((T22*)(C))->a4, GE_ms("\'", 1))));
			t3 = GE_ma33((T6)2,
GE_ms("Cannot determine start target `", 31),
t3);
			T22f35(C, (T6)(GE_int32(1)), t3);
		} else {
			R = (T22f15(C));
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		t3 = GE_ma33((T6)1,
GE_ms("Cannot determine start target.", 30));
		T22f35(C, (T6)(GE_int32(1)), t3);
	}
	return R;
}

/* GEANT_PROJECT.exit_application */
void T22f35(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T22f14(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T22f17(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PROJECT.exceptions */
T0* T22f17(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_PROJECT.std */
T0* T22f14(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_PROJECT.preferred_start_target */
T0* T22f15(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T22*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?((T17*)(((T22*)(C))->a4))->a2:((T195*)(((T22*)(C))->a4))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T31f24(GE_void(((T22*)(C))->a1), ((T22*)(C))->a4));
		if (t1) {
			R = (T31f28(GE_void(((T22*)(C))->a1), ((T22*)(C))->a4));
		}
	}
	return R;
}

/* GEANT_PROJECT.default_target */
T0* T22f16(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T22*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a5)))->id==17)?((T17*)(((T22*)(C))->a5))->a2:((T195*)(((T22*)(C))->a5))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T31f24(GE_void(((T22*)(C))->a1), ((T22*)(C))->a5));
		if (t1) {
			R = (T31f28(GE_void(((T22*)(C))->a1), ((T22*)(C))->a5));
		}
	}
	return R;
}

/* GEANT_PROJECT.show_target_info */
void T22f27(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = (T31f29(GE_void(((T22*)(C))->a1)));
	T124f9(GE_void(l1));
	t1 = (T124f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T124f6(GE_void(l1)));
		t1 = (T26f29(GE_void(l2)));
		if (t1) {
			t2 = (T26f30(GE_void(l2)));
			T68f10(GE_void(((T22*)(C))->a6), t2);
			t2 = (((T26*)(GE_void(l2)))->a5);
			t1 = ((t2)!=(EIF_VOID));
			if (t1) {
				t2 = (((T26*)(GE_void(l2)))->a5);
				t2 = (T17f8(GE_ms("  obsolete. ", 12), t2));
				T68f10(GE_void(((T22*)(C))->a6), t2);
			}
			t2 = (((T26*)(GE_void(l2)))->a6);
			t2 = (T17f8(GE_ms("  ", 2), t2));
			T68f10(GE_void(((T22*)(C))->a6), t2);
		}
		T124f10(GE_void(l1));
		t1 = (T124f5(GE_void(l1)));
	}
}

/* GEANT_PROJECT.set_start_target_name */
void T22f26(T0* C, T0* a1)
{
	((T22*)(C))->a4 = a1;
}

/* GEANT_TARGET.full_name */
T0* T26f30(T0* C)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (T26f24(C));
	t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
	R = (T76f7(GE_void(t1), t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)('.'));
	} else {
		T195f56(R, (T2)('.'));
	}
	t1 = (T26f24(C));
	R = (T76f5(GE_void(t1), R, ((T26*)(C))->a1));
	return R;
}

/* GEANT_TARGET.is_exported_to_any */
T1 T26f29(T0* C)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((((T26*)(C))->a7)!=(EIF_VOID));
	if (t1) {
		t2 = (T26f22(C));
		R = (T71f22(GE_void(((T26*)(C))->a7), t2));
	}
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].has */
T1 T71f22(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T71*)(C))->a1;
	l2 = ((T71*)(C))->a6;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
			t1 = (T59f1(GE_void(l2), t2, a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* GEANT_TARGET.project_name_any */
unsigned char ge63os2375 = '\0';
T0* ge63ov2375;
T0* T26f22(T0* C)
{
	T0* R = 0;
	if (ge63os2375) {
		return ge63ov2375;
	} else {
		ge63os2375 = '\1';
		ge63ov2375 = R;
	}
	R = GE_ms("ANY", 3);
	ge63ov2375 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item */
T0* T31f28(T0* C, T0* a1)
{
	T0* R = 0;
	T31f47(C, a1);
	R = (T31f27(C, ((T31*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].search_position */
void T31f47(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T31*)(C))->a1 = (T31f25(C, ((T31*)(C))->a9));
		((T31*)(C))->a7 = ((T31*)(C))->a9;
		((T31*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T31*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T31*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T31f31(C, ((T31*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T31*)(C))->a7 = (T31f21(C, a1));
				l1 = (T31f25(C, ((T31*)(C))->a7));
				((T31*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T31f31(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T31*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T31f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T31*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T31*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T31f31(C, ((T31*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T31*)(C))->a7 = (T31f21(C, a1));
				l1 = (T31f25(C, ((T31*)(C))->a7));
				((T31*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T31f31(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T31*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T31f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T31*)(C))->a10 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].hash_position */
T6 T31f21(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T31*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T31*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T31*)(C))->a9)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T31*)(C))->a9)));
		}
	} else {
		R = ((T31*)(C))->a9;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_item */
T6 T31f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T31*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT.exit_application */
void T21f22(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T21f13(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T21f14(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT.exceptions */
T0* T21f14(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT.std */
T0* T21f13(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* UC_UTF8_STRING.infix "+" */
T0* T195f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T195f25(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = (T194f22(GE_void(t1), a1, (T6)(GE_int32(1)), t2));
	t2 = ((T6)((((T195*)(C))->a3)+(t2)));
	R = T195c59(t2);
	T195f55(GE_void(R), C);
	T195f55(GE_void(R), a1);
	return R;
}

/* STRING_8.infix "+" */
T0* T17f8(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = ((T6)((((T17*)(C))->a2)+(t1)));
	R = (T17f19(C, t1));
	T17f35(GE_void(R), C);
	T17f35(GE_void(R), a1);
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].has */
T1 T31f24(T0* C, T0* a1)
{
	T1 R = 0;
	T31f47(C, a1);
	R = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* INTEGER_32.infix ">" */
T1 T6f1(T6* C, T6 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* GEANT_PROJECT.merge_in_parent_projects */
void T22f25(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((((T22*)(C))->a10)!=(EIF_VOID));
	if (t1) {
		t2 = (((T119*)(GE_void(((T22*)(C))->a10)))->a1);
		l2 = (T185f7(GE_void(t2)));
		T186f8(GE_void(l2));
		t1 = (T186f6(GE_void(l2)));
		while (!(t1)) {
			l1 = (T186f4(GE_void(l2)));
			T183f14(GE_void(l1));
			T186f9(GE_void(l2));
			t1 = (T186f6(GE_void(l2)));
		}
		t2 = (((T119*)(GE_void(((T22*)(C))->a10)))->a1);
		l2 = (T185f7(GE_void(t2)));
		T186f8(GE_void(l2));
		t1 = (T186f6(GE_void(l2)));
		while (!(t1)) {
			l1 = (T186f4(GE_void(l2)));
			T119f7(GE_void(((T22*)(C))->a10), l1);
			T186f9(GE_void(l2));
			t1 = (T186f6(GE_void(l2)));
		}
		T119f8(GE_void(((T22*)(C))->a10));
		l4 = (T31f29(GE_void(((T22*)(C))->a1)));
		T124f9(GE_void(l4));
		t2 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
((T22*)(C))->a2,
GE_ms("\': target list:", 15));
		T22f31(C, t2);
		t1 = (T124f5(GE_void(l4)));
		while (!(t1)) {
			l3 = (T124f6(GE_void(l4)));
			t2 = (T124f7(GE_void(l4)));
			t3 = (T26f30(GE_void(l3)));
			t2 = GE_ma33((T6)5,
GE_ms("  target `", 10),
t2,
GE_ms("\' (", 3),
t3,
GE_ms(")", 1));
			T22f31(C, t2);
			T26f92(GE_void(l3));
			T124f10(GE_void(l4));
			t1 = (T124f5(GE_void(l4)));
		}
	}
}

/* GEANT_TARGET.show_precursors */
void T26f92(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = C;
	l2 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(1)));
	T33f12(GE_void(l2), GE_ms("    precursor list: ", 20), (T6)(GE_int32(1)));
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), GE_ms("\'", 1), t2);
		t3 = (T26f30(GE_void(l1)));
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), t3, t2);
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), GE_ms("\'", 1), t2);
		l1 = (((T26*)(GE_void(l1)))->a10);
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (T33f10(GE_void(l2)));
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			T33f14(GE_void(l2), GE_ms(", ", 2), t2);
		}
		t1 = ((l1)==(EIF_VOID));
	}
	T22f31(GE_void(((T26*)(C))->a4), l2);
}

/* ARRAY [STRING_8].force */
void T33f14(T0* C, T0* a1, T6 a2)
{
	T1 t1;
	t1 = ((T1)((a2)<(((T33*)(C))->a2)));
	if (t1) {
		T33f15(C, a2, ((T33*)(C))->a3);
	} else {
		t1 = (T6f1(&a2, ((T33*)(C))->a3));
		if (t1) {
			T33f15(C, ((T33*)(C))->a2, a2);
		}
	}
	T33f12(C, a1, a2);
}

/* ARRAY [STRING_8].auto_resize */
void T33f15(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = (T33f6(C));
	if (t1) {
		l3 = a1;
		l4 = a2;
	} else {
		l3 = (T6f18(&a1, ((T33*)(C))->a2));
		l4 = (T6f10(&a2, ((T33*)(C))->a3));
	}
	t2 = ((T6)((l4)-(l3)));
	l2 = ((T6)((t2)+((T6)(GE_int32(1)))));
	t1 = (T33f6(C));
	t1 = ((T1)(!(t1)));
	if (t1) {
		l1 = (((T32*)(GE_void(((T33*)(C))->a1)))->z1);
		t1 = (T6f1(&l2, l1));
		if (t1) {
			t2 = ((T6)((l2)-(l1)));
			t3 = (T33f7(C));
			t1 = ((T1)((t2)<(t3)));
		}
		if (t1) {
			t2 = (T33f7(C));
			l2 = ((T6)((l1)+(t2)));
		}
	}
	t1 = (T33f6(C));
	if (t1) {
		T33f13(C, l2);
	} else {
		t1 = (T6f1(&l2, l1));
		if (t1) {
			((T33*)(C))->a1 = (T32f4(GE_void(((T33*)(C))->a1), l2));
		}
		t1 = ((T1)((l3)<(((T33*)(C))->a2)));
		if (t1) {
			l5 = ((T6)((((T33*)(C))->a2)-(l3)));
			t2 = (T33f8(C));
			T32f9(GE_void(((T33*)(C))->a1), (T6)(GE_int32(0)), l5, t2);
			t2 = ((T6)((l5)-((T6)(GE_int32(1)))));
			T32f12(GE_void(((T33*)(C))->a1), l6, (T6)(GE_int32(0)), t2);
		}
	}
	((T33*)(C))->a2 = l3;
	((T33*)(C))->a3 = l4;
}

/* SPECIAL [STRING_8].fill_with */
void T32f12(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l1 = a2;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		((T32*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* ARRAY [STRING_8].capacity */
T6 T33f8(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T33*)(C))->a3)-(((T33*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* SPECIAL [STRING_8].aliased_resized_area */
T0* T32f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T32*)(C))->z1;
	if (a1>t1) {
		R = (T0*)GE_alloc(sizeof(T32)+a1*sizeof(T0*));
		*(T32*)(R) = *(T32*)(C);
		memcpy(((T32*)(R))->z2,((T32*)(C))->z2,t1*sizeof(T0*));
	} else {
		R = C;
	}
	((T32*)(R))->z1 = a1;
	return R;
}

/* ARRAY [STRING_8].additional_space */
T6 T33f7(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T33f8(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* ARRAY [STRING_8].empty_area */
T1 T33f6(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T33*)(C))->a1)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T32*)(GE_void(((T33*)(C))->a1)))->z1);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* GEANT_INHERIT.apply_selects */
void T119f8(T0* C)
{
	T0* t1;
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("\nProject \'", 10),
t1,
GE_ms("\': --> application of select clause:", 36));
	T22f31(GE_void(((T119*)(C))->a2), t1);
	T119f12(C);
	T119f13(C);
	T119f14(C);
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- application of select clause done.", 41));
	T22f31(GE_void(((T119*)(C))->a2), t1);
}

/* GEANT_INHERIT.check_targets_for_conflicts */
void T119f14(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T124f11(GE_void(l1));
	t2 = (T124f4(GE_void(l1)));
	while (!(t2)) {
		l2 = (T124f6(GE_void(l1)));
		l3 = (T124f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		l4 = (T31f29(GE_void(t1)));
		T124f11(GE_void(l4));
		t2 = (T124f4(GE_void(l4)));
		while (!(t2)) {
			l5 = (T124f6(GE_void(l4)));
			l6 = (T124f7(GE_void(l4)));
			t2 = ((l5)!=(l2));
			if (t2) {
				t2 = (T26f34(GE_void(l5), l2));
				if (t2) {
					t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
					t1 = GE_ma33((T6)8,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' contains target `", 19),
l3,
GE_ms("\' which conflicts with target `", 31),
l6,
GE_ms("\'.\nUse a select clause to resolve the conflict.", 47));
					T119f15(C, (T6)(GE_int32(1)), t1);
				}
			}
			T124f12(GE_void(l4));
			t2 = (T124f4(GE_void(l4)));
		}
		T124f12(GE_void(l1));
		t2 = (T124f4(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].back */
void T124f12(T0* C)
{
	T31f68(GE_void(((T124*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_back */
void T31f68(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	l3 = (((T124*)(a1))->a2);
	t1 = ((l3)==((T6)(GE_int32(-2))));
	if (t1) {
		l2 = EIF_TRUE;
		l1 = ((T31*)(C))->a5;
	} else {
		l1 = ((T6)((l3)-((T6)(GE_int32(1)))));
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (t1) {
		T124f14(a1, (T6)(GE_int32(-1)));
		t1 = ((T1)(!(l2)));
		if (t1) {
			T31f70(C, a1);
		}
	} else {
		T124f14(a1, l1);
		if (l2) {
			T31f71(C, a1);
		}
	}
}

/* GEANT_INHERIT.exit_application */
void T119f15(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T119f4(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T119f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T119f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T119f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T119f5(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_INHERIT.exceptions */
T0* T119f5(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_INHERIT.std */
T0* T119f4(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_TARGET.conflicts_with */
T1 T26f34(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T26f24(C));
	t2 = (T26f38(C));
	t2 = (T26f30(GE_void(t2)));
	t3 = (T26f38(GE_void(a1)));
	t3 = (T26f30(GE_void(t3)));
	R = (T76f1(GE_void(t1), t2, t3));
	return R;
}

/* GEANT_TARGET.seed */
T0* T26f38(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	R = C;
	t1 = (((T26*)(GE_void(R)))->a10);
	t2 = ((t1)==(EIF_VOID));
	while (!(t2)) {
		R = (((T26*)(GE_void(R)))->a10);
		t1 = (((T26*)(GE_void(R)))->a10);
		t2 = ((t1)==(EIF_VOID));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].before */
T1 T124f4(T0* C)
{
	T1 R = 0;
	R = (T31f37(GE_void(((T124*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_before */
T1 T31f37(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T124*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].finish */
void T124f11(T0* C)
{
	T31f67(GE_void(((T124*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_finish */
void T31f67(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = (T31f40(C));
	if (t1) {
		T124f14(a1, (T6)(GE_int32(-1)));
	} else {
		l2 = (T31f41(C, a1));
		l1 = ((T31*)(C))->a5;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (T31f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(0)))));
		if (t1) {
			T124f14(a1, (T6)(GE_int32(-1)));
			t1 = ((T1)(!(l2)));
			if (t1) {
				T31f70(C, a1);
			}
		} else {
			T124f14(a1, l1);
			if (l2) {
				T31f71(C, a1);
			}
		}
	}
}

/* GEANT_INHERIT.sort_out_selected_targets */
void T119f13(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 l9 = 0;
	T6 l10 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': removing targets conflicting with selected targets", 53));
	T22f31(GE_void(((T119*)(C))->a2), t1);
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a10);
	t1 = (((T119*)(GE_void(t1)))->a1);
	l1 = (T185f7(GE_void(t1)));
	T186f8(GE_void(l1));
	t2 = (T186f6(GE_void(l1)));
	while (!(t2)) {
		l2 = (T186f4(GE_void(l1)));
		t1 = (((T183*)(GE_void(l2)))->a2);
		t1 = (((T22*)(GE_void(t1)))->a8);
		l3 = (T31f29(GE_void(t1)));
		T124f9(GE_void(l3));
		t2 = (T124f5(GE_void(l3)));
		while (!(t2)) {
			l5 = (T124f7(GE_void(l3)));
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
			t2 = (T31f24(GE_void(t1), l5));
			t2 = ((T1)(!(t2)));
			if (t2) {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' selected target `", 19),
l5,
GE_ms("\' does not exist.", 17));
				T119f15(C, (T6)(GE_int32(1)), t1);
			}
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
			l4 = (T31f28(GE_void(t1), l5));
			l9 = EIF_TRUE;
			l10 = (T6)(GE_int32(0));
			t2 = ((l9)==(EIF_FALSE));
			while (!(t2)) {
				l9 = EIF_FALSE;
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
				l6 = (T31f29(GE_void(t1)));
				T124f11(GE_void(l6));
				t2 = (T124f4(GE_void(l6)));
				while (!(t2)) {
					l7 = (T124f6(GE_void(l6)));
					l8 = (T22f20(GE_void(((T119*)(C))->a2), l7));
					t2 = ((l7)!=(l4));
					if (t2) {
						t2 = (T26f34(GE_void(l4), l7));
						if (t2) {
							t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
							t3 = (T26f30(GE_void(l7)));
							t4 = (T26f30(GE_void(l4)));
							t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': conflict found! Replacing target `(", 38),
t3,
GE_ms(")\' with selected target `(", 26),
t4,
GE_ms(")\'.", 3));
							T22f31(GE_void(((T119*)(C))->a2), t1);
							t1 = GE_ma33((T6)1,
GE_ms("a_target: ", 10));
							T22f31(GE_void(((T119*)(C))->a2), t1);
							T26f92(GE_void(l7));
							t1 = GE_ma33((T6)1,
GE_ms("a_selected_target: ", 19));
							T22f31(GE_void(((T119*)(C))->a2), t1);
							T26f92(GE_void(l4));
							l9 = EIF_TRUE;
							l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
							t1 = (((T26*)(GE_void(l7)))->a10);
							T26f96(GE_void(t1), l4);
							t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
							T31f64(GE_void(t1), l8);
						}
					}
					T124f12(GE_void(l6));
					t2 = (T124f4(GE_void(l6)));
				}
				t2 = ((l9)==(EIF_FALSE));
			}
			t2 = ((l10)==((T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': There is no need to select target `", 38),
l5,
GE_ms("\' since there are no other conflicting targets.", 47));
				T119f15(C, (T6)(GE_int32(1)), t1);
			}
			T124f10(GE_void(l3));
			t2 = (T124f5(GE_void(l3)));
		}
		T186f9(GE_void(l1));
		t2 = (T186f6(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove */
void T31f64(T0* C, T0* a1)
{
	T1 t1;
	T31f49(C);
	T31f47(C, a1);
	t1 = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T31f69(C, ((T31*)(C))->a1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove_position */
void T31f69(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(((T31*)(C))->a1));
	if (t1) {
		l2 = (T31f31(C, a1));
		l4 = (T31f21(C, l2));
		t2 = (T31f25(C, l4));
		t1 = ((t2)==(a1));
		if (t1) {
			((T31*)(C))->a1 = a1;
			((T31*)(C))->a7 = l4;
			((T31*)(C))->a10 = (T6)(GE_int32(0));
		} else {
			l5 = ((T31*)(C))->a3;
			T31f72(C, EIF_VOID);
			T31f47(C, l2);
			T31f72(C, l5);
		}
	}
	T31f73(C, ((T31*)(C))->a1);
	t1 = ((((T31*)(C))->a10)==((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T31f32(C, ((T31*)(C))->a1));
		T31f53(C, t2, ((T31*)(C))->a7);
	} else {
		t2 = (T31f32(C, ((T31*)(C))->a1));
		T31f52(C, t2, ((T31*)(C))->a10);
	}
	T31f50(C, l1, ((T31*)(C))->a1);
	T31f54(C, l3, ((T31*)(C))->a1);
	t1 = ((((T31*)(C))->a16)==((T6)(GE_int32(0))));
	if (t1) {
		t1 = ((((T31*)(C))->a1)==(((T31*)(C))->a5));
	}
	if (t1) {
		((T31*)(C))->a5 = ((T6)((((T31*)(C))->a5)-((T6)(GE_int32(1)))));
		T31f52(C, (T6)(GE_int32(0)), ((T31*)(C))->a1);
	} else {
		t2 = (T6)(GE_int32(-1));
		t2 = ((T6)((t2)-(((T31*)(C))->a16)));
		T31f52(C, t2, ((T31*)(C))->a1);
		((T31*)(C))->a16 = ((T31*)(C))->a1;
	}
	((T31*)(C))->a8 = ((T6)((((T31*)(C))->a8)-((T6)(GE_int32(1)))));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_put */
void T31f54(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T31*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_put */
void T31f50(T0* C, T0* a1, T6 a2)
{
	((T120*)(GE_void(((T31*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_put */
void T31f52(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T31*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_put */
void T31f53(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T31*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_cursors_forth */
void T31f73(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	l2 = ((T31*)(C))->a5;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T31f74(C, a1);
	} else {
		T31f75(C, a1, l1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_all_cursors */
void T31f75(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T31*)(C))->a17;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		t2 = (((T124*)(GE_void(l1)))->a2);
		t1 = ((t2)==(a1));
		if (t1) {
			T124f14(GE_void(l1), a2);
		}
		l1 = (((T124*)(GE_void(l1)))->a3);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_cursors_after */
void T31f74(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T1 t2;
	l1 = ((T31*)(C))->a17;
	t1 = (((T124*)(GE_void(l1)))->a2);
	t2 = ((t1)==(a1));
	if (t2) {
		T124f14(GE_void(l1), (T6)(GE_int32(-2)));
	}
	l2 = l1;
	l1 = (((T124*)(GE_void(l1)))->a3);
	t2 = ((l1)==(EIF_VOID));
	while (!(t2)) {
		t1 = (((T124*)(GE_void(l1)))->a2);
		t2 = ((t1)==(a1));
		if (t2) {
			T124f14(GE_void(l1), (T6)(GE_int32(-2)));
			l3 = (((T124*)(GE_void(l1)))->a3);
			T124f15(GE_void(l2), l3);
			T124f15(GE_void(l1), EIF_VOID);
			l1 = l3;
		} else {
			l2 = l1;
			l1 = (((T124*)(GE_void(l1)))->a3);
		}
		t2 = ((l1)==(EIF_VOID));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].internal_set_key_equality_tester */
void T31f72(T0* C, T0* a1)
{
	((T31*)(C))->a3 = a1;
	T122f6(GE_void(((T31*)(C))->a4), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].internal_set_equality_tester */
void T122f6(T0* C, T0* a1)
{
	((T122*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].unset_found_item */
void T31f49(T0* C)
{
	((T31*)(C))->a12 = (T6)(GE_int32(0));
}

/* GEANT_TARGET.set_redefining_target */
void T26f96(T0* C, T0* a1)
{
	((T26*)(C))->a11 = a1;
}

/* GEANT_INHERIT.validate_parent_selects */
void T119f12(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': making sure there are no conflicting selects", 47));
	T22f31(GE_void(((T119*)(C))->a2), t1);
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a10);
	t1 = (((T119*)(GE_void(t1)))->a1);
	l1 = (T185f7(GE_void(t1)));
	T186f8(GE_void(l1));
	t2 = (T186f6(GE_void(l1)));
	while (!(t2)) {
		l2 = (T186f4(GE_void(l1)));
		t1 = (((T183*)(GE_void(l2)))->a2);
		t1 = (((T22*)(GE_void(t1)))->a8);
		l5 = (T31f29(GE_void(t1)));
		T124f9(GE_void(l5));
		t2 = (T124f5(GE_void(l5)));
		while (!(t2)) {
			l6 = (T124f6(GE_void(l5)));
			l9 = (T124f7(GE_void(l5)));
			l3 = (T185f7(GE_void(((T119*)(C))->a1)));
			T186f8(GE_void(l3));
			t2 = (T186f6(GE_void(l3)));
			while (!(t2)) {
				l4 = (T186f4(GE_void(l3)));
				t2 = ((l2)!=(l4));
				if (t2) {
					t1 = (((T183*)(GE_void(l4)))->a2);
					t1 = (((T22*)(GE_void(t1)))->a8);
					l7 = (T31f29(GE_void(t1)));
					T124f9(GE_void(l7));
					t2 = (T124f5(GE_void(l7)));
					while (!(t2)) {
						l8 = (T124f6(GE_void(l7)));
						t2 = (T26f34(GE_void(l6), l8));
						if (t2) {
							t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
							t3 = (T26f30(GE_void(l6)));
							t4 = (T26f30(GE_void(l8)));
							t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': conflicting selects: `", 25),
t3,
GE_ms("\' and `", 7),
t4,
GE_ms("\'.", 2));
							T119f15(C, (T6)(GE_int32(1)), t1);
						}
						T124f10(GE_void(l7));
						t2 = (T124f5(GE_void(l7)));
					}
				}
				T186f9(GE_void(l3));
				t2 = (T186f6(GE_void(l3)));
			}
			T124f10(GE_void(l5));
			t2 = (T124f5(GE_void(l5)));
		}
		T186f9(GE_void(l1));
		t2 = (T186f6(GE_void(l1)));
	}
}

/* GEANT_INHERIT.merge_in_parent_project */
void T119f7(T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t2 = (((T183*)(GE_void(a1)))->a2);
	t2 = (((T22*)(GE_void(t2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("\nProject \'", 10),
t1,
GE_ms("\': --> merging in parent \'", 26),
t2,
GE_ms("\':", 2));
	T22f31(GE_void(((T119*)(C))->a2), t1);
	T119f9(C, a1);
	T119f10(C, a1);
	T119f11(C, a1);
	t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
	t2 = (((T183*)(GE_void(a1)))->a2);
	t2 = (((T22*)(GE_void(t2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- merging in of parent `", 29),
t2,
GE_ms("\' done.\n", 8));
	T22f31(GE_void(((T119*)(C))->a2), t1);
}

/* GEANT_INHERIT.merge_in_unchanged_targets */
void T119f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = (((T183*)(GE_void(a1)))->a6);
	l1 = (T31f29(GE_void(t1)));
	T124f9(GE_void(l1));
	t2 = (T124f5(GE_void(l1)));
	while (!(t2)) {
		l3 = (T124f6(GE_void(l1)));
		l4 = (T124f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T183*)(GE_void(a1)))->a2);
		t4 = (((T22*)(GE_void(t4)))->a2);
		t1 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in unchanged parent target `", 39),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(") from parent \'", 15),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T119*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		if (t2) {
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
			l2 = (T31f28(GE_void(t1), l4));
			t1 = (T119f3(C));
			t3 = (T26f30(GE_void(l2)));
			t4 = (T26f30(GE_void(l3)));
			t2 = (T76f1(GE_void(t1), t3, t4));
			if (t2) {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l3)));
				t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': sharing target `", 19),
l4,
GE_ms("\' since name and full_name (\'", 29),
t3,
GE_ms("\') is equal to the existing target.", 35));
				T22f31(GE_void(((T119*)(C))->a2), t1);
			} else {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t3 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
				t3 = (T31f28(GE_void(t3), l4));
				t3 = (T26f30(GE_void(t3)));
				t4 = (T26f30(GE_void(l3)));
				t5 = (((T183*)(GE_void(a1)))->a2);
				t5 = (((T22*)(GE_void(t5)))->a2);
				t1 = GE_ma33((T6)16,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' contains target\n    `", 23),
t3,
GE_ms("\' named `", 9),
l4,
GE_ms("\'\n  which causes a name clash with target ", 42),
GE_ms("\n    `", 6),
t4,
GE_ms("\' named `", 9),
l4,
GE_ms("\'\n  inherited from project \'", 28),
t5,
GE_ms("\'.\n", 3),
GE_ms("  Use a rename or redefine clause to resolve the name clash.", 60));
				T119f15(C, (T6)(GE_int32(1)), t1);
			}
		}
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		T31f46(GE_void(t1), l3, l4);
		T124f10(GE_void(l1));
		t2 = (T124f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].force_last */
void T31f46(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T31f49(C);
	T31f47(C, a2);
	t1 = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T31f50(C, a1, ((T31*)(C))->a1);
	} else {
		l1 = ((T6)((((T31*)(C))->a5)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T31*)(C))->a6));
		if (t1) {
			t2 = (T31f33(C, l1));
			T31f51(C, t2);
			l2 = (T31f21(C, a2));
		} else {
			l2 = ((T31*)(C))->a7;
		}
		t2 = (T31f25(C, l2));
		T31f52(C, t2, l1);
		T31f53(C, l1, l2);
		T31f50(C, a1, l1);
		T31f54(C, a2, l1);
		((T31*)(C))->a5 = l1;
		((T31*)(C))->a8 = ((T6)((((T31*)(C))->a8)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].resize */
void T31f51(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T31f49(C);
	l1 = (T31f22(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T31f56(C, t1);
	l2 = ((T31*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T31f53(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T31*)(C))->a9 = l1;
	l2 = ((T31*)(C))->a5;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T31f32(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T31f31(C, l2));
			l3 = (T31f21(C, t3));
			t1 = (T31f25(C, l3));
			T31f52(C, t1, l2);
			T31f53(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f57(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f58(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f59(C, t1);
	((T31*)(C))->a6 = a1;
	((T31*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_resize */
void T31f59(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a13 = (T65f1(GE_void(t1), ((T31*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].special_integer_ */
T0* T31f30(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_resize */
void T31f58(T0* C, T6 a1)
{
	((T31*)(C))->a15 = (T66f1(GE_void(((T31*)(C))->a19), ((T31*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_resize */
void T31f57(T0* C, T6 a1)
{
	((T31*)(C))->a2 = (T125f1(GE_void(((T31*)(C))->a18), ((T31*)(C))->a2, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_resize */
void T31f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a14 = (T65f1(GE_void(t1), ((T31*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_modulus */
T6 T31f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_capacity */
T6 T31f33(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* GEANT_INHERIT.string_ */
T0* T119f3(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_INHERIT.merge_in_renamed_targets */
void T119f10(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = (((T183*)(GE_void(a1)))->a7);
	l1 = (T31f29(GE_void(t1)));
	T124f11(GE_void(l1));
	t2 = (T124f4(GE_void(l1)));
	while (!(t2)) {
		l3 = (T124f6(GE_void(l1)));
		l4 = (T124f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in renamed target `", 30),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(")", 1));
		T22f31(GE_void(((T119*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		if (t2) {
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
			l2 = (T31f28(GE_void(t1), l4));
			t1 = (T119f3(C));
			t3 = (T26f30(GE_void(l2)));
			t4 = (T26f30(GE_void(l3)));
			t2 = (T76f1(GE_void(t1), t3, t4));
			if (t2) {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l3)));
				t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': sharing target `", 19),
l4,
GE_ms("\' since name and full_name (\'", 29),
t3,
GE_ms("\') is equal to the existing target.", 35));
				T22f31(GE_void(((T119*)(C))->a2), t1);
			} else {
				t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l2)));
				t4 = (T26f30(GE_void(l3)));
				t5 = (((T183*)(GE_void(a1)))->a2);
				t5 = (((T22*)(GE_void(t5)))->a2);
				t1 = GE_ma33((T6)15,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\': contains target `", 20),
t3,
GE_ms("\' named `", 9),
l4,
GE_ms("\' which causes a name clash with\n  target `", 43),
t4,
GE_ms("\' named `", 9),
l4,
GE_ms("\' inherited from project \'", 26),
t5,
GE_ms("\'.\n", 3),
GE_ms("  Use a rename or redefine clause to resolve the name clash.", 60));
				T119f15(C, (T6)(GE_int32(1)), t1);
			}
		} else {
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
			T31f46(GE_void(t1), l3, l4);
		}
		T124f12(GE_void(l1));
		t2 = (T124f4(GE_void(l1)));
	}
}

/* GEANT_INHERIT.merge_in_redefined_targets */
void T119f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T183*)(GE_void(a1)))->a8);
	l1 = (T31f29(GE_void(t1)));
	T124f11(GE_void(l1));
	t2 = (T124f4(GE_void(l1)));
	while (!(t2)) {
		l3 = (T124f6(GE_void(l1)));
		l4 = (T124f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T183*)(GE_void(a1)))->a2);
		t4 = (((T22*)(GE_void(t4)))->a2);
		t1 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in redefined target `", 32),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(") from parent \'", 15),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T119*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
			t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' does not redefine parent target `", 35),
l4,
GE_ms("\' as declared.", 14));
			T119f15(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a1);
		l2 = (T31f28(GE_void(t1), l4));
		t2 = (T26f33(GE_void(l2), l3));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (T26f30(GE_void(l2)));
			t3 = (T26f30(GE_void(l3)));
			t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Target \'", 8),
t1,
GE_ms("\'s arguments do not match it\'s parent\'s (`", 42),
t3,
GE_ms("\'s) arguments.", 14));
			T119f15(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(((T119*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l2)));
		t4 = (T26f30(GE_void(l3)));
		t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': connecting target `", 22),
t3,
GE_ms("\' and target `", 14),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T119*)(C))->a2), t1);
		T26f96(GE_void(l3), l2);
		T26f91(GE_void(l2), l3);
		T124f12(GE_void(l1));
		t2 = (T124f4(GE_void(l1)));
	}
}

/* GEANT_TARGET.set_precursor_target */
void T26f91(T0* C, T0* a1)
{
	((T26*)(C))->a10 = a1;
}

/* GEANT_TARGET.formal_arguments_match */
T1 T26f33(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T26*)(GE_void(a1)))->a3);
	R = (T34f34(GE_void(((T26*)(C))->a3), t1));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].forth */
void T186f9(T0* C)
{
	T185f20(GE_void(((T186*)(C))->a1), C);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_forth */
void T185f20(T0* C, T0* a1)
{
	T1 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l2 = (((T186*)(a1))->a2);
	l1 = ((l2)==((T6)(GE_int32(0))));
	l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t1 = (T6f1(&l2, ((T185*)(C))->a5));
	if (t1) {
		l2 = (T6)(GE_int32(-1));
		t1 = ((T1)(!(l1)));
		if (t1) {
			T185f22(C, a1);
		}
	} else {
		if (l1) {
			T185f21(C, a1);
		}
	}
	T186f10(a1, l2);
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].set_position */
void T186f10(T0* C, T6 a1)
{
	((T186*)(C))->a2 = a1;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].add_traversing_cursor */
void T185f21(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T185*)(C))->a4));
	if (t1) {
		t2 = (((T186*)(GE_void(((T185*)(C))->a4)))->a3);
		T186f11(a1, t2);
		T186f11(GE_void(((T185*)(C))->a4), a1);
	}
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].set_next_cursor */
void T186f11(T0* C, T0* a1)
{
	((T186*)(C))->a3 = a1;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].remove_traversing_cursor */
void T185f22(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T185*)(C))->a4));
	if (t1) {
		l2 = ((T185*)(C))->a4;
		l1 = (((T186*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T186*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T186*)(a1))->a3);
			T186f11(GE_void(l2), t2);
			T186f11(a1, EIF_VOID);
		}
	}
}

/* GEANT_PARENT.prepare_project */
void T183f14(T0* C)
{
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
	t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': --> preparing parent \'", 25),
t2,
GE_ms("\' for inheritance:", 18));
	T22f31(GE_void(((T183*)(C))->a5), t1);
	T183f15(C);
	T183f16(C);
	T183f17(C);
	t3 = (((T22*)(GE_void(((T183*)(C))->a5)))->a12);
	if (t3) {
		T183f18(C);
	}
	T183f19(C);
	t1 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
	t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- preparation of \'", 23),
t2,
GE_ms("\' for inheritance done.", 23));
	T22f31(GE_void(((T183*)(C))->a5), t1);
}

/* GEANT_PARENT.apply_selects */
void T183f19(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = (T266f26(GE_void(((T183*)(C))->a4)));
	T350f7(GE_void(l1));
	t1 = (T350f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T350f4(GE_void(l1)));
		t1 = (T265f2(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid select clause.", 22));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T265*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T183*)(C))->a8), t2));
		if (t1) {
			t2 = (((T265*)(GE_void(l2)))->a1);
			l3 = (T31f28(GE_void(((T183*)(C))->a8), t2));
		} else {
			t2 = (((T265*)(GE_void(l2)))->a1);
			t1 = (T31f24(GE_void(((T183*)(C))->a7), t2));
			if (t1) {
				t2 = (((T265*)(GE_void(l2)))->a1);
				l3 = (T31f28(GE_void(((T183*)(C))->a7), t2));
			} else {
				t2 = (((T265*)(GE_void(l2)))->a1);
				t1 = (T31f24(GE_void(((T183*)(C))->a6), t2));
				if (t1) {
					t2 = (((T265*)(GE_void(l2)))->a1);
					l3 = (T31f28(GE_void(((T183*)(C))->a6), t2));
				}
			}
		}
		t1 = ((l3)==(EIF_VOID));
		if (t1) {
			t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t3 = (((T265*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': selected target: `", 21),
t3,
GE_ms("\' does not exist.", 17));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
		t3 = (((T265*)(GE_void(l2)))->a1);
		t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': moving target \'", 18),
t3,
GE_ms("\' to list of selected targets.", 30));
		T22f31(GE_void(((T183*)(C))->a5), t2);
		t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a8);
		t3 = (((T265*)(GE_void(l2)))->a1);
		T31f46(GE_void(t2), l3, t3);
		T350f8(GE_void(l1));
		t1 = (T350f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].forth */
void T350f8(T0* C)
{
	T266f59(GE_void(((T350*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_forth */
void T266f59(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T350*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T266*)(C))->a3;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T266f25(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T266f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T350f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T266f60(C, a1);
		}
	} else {
		T350f9(a1, l1);
		if (l3) {
			T266f61(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].add_traversing_cursor */
void T266f61(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T266*)(C))->a17));
	if (t1) {
		t2 = (((T350*)(GE_void(((T266*)(C))->a17)))->a3);
		T350f10(a1, t2);
		T350f10(GE_void(((T266*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].set_next_cursor */
void T350f10(T0* C, T0* a1)
{
	((T350*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].remove_traversing_cursor */
void T266f60(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T266*)(C))->a17));
	if (t1) {
		l2 = ((T266*)(C))->a17;
		l1 = (((T350*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T350*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T350*)(a1))->a3);
			T350f10(GE_void(l2), t2);
			T350f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].set_position */
void T350f9(T0* C, T6 a1)
{
	((T350*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_item */
T6 T266f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T266*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_PARENT.exit_application */
void T183f20(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T183f10(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T183f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T183f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T183f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T183f11(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PARENT.exceptions */
T0* T183f11(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_PARENT.std */
T0* T183f10(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_SELECT.is_executable */
T1 T265f2(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T265*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T265*)(C))->a1)))->id==17)?((T17*)(((T265*)(C))->a1))->a2:((T195*)(((T265*)(C))->a1))->a1));
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].item */
T0* T350f4(T0* C)
{
	T0* R = 0;
	R = (T266f33(GE_void(((T350*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_item */
T0* T266f33(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T350*)(a1))->a2);
	R = (T266f35(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_item */
T0* T266f35(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T349*)(GE_void(((T266*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].after */
T1 T350f5(T0* C)
{
	T1 R = 0;
	R = (T266f32(GE_void(((T350*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_after */
T1 T266f32(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T350*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].start */
void T350f7(T0* C)
{
	T266f58(GE_void(((T350*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_start */
void T266f58(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T266f36(C));
	if (t1) {
		T350f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T266f37(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T266*)(C))->a3;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T266f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T266f25(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T350f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T266f60(C, a1);
			}
		} else {
			T350f9(a1, l1);
			if (l3) {
				T266f61(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_off */
T1 T266f37(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T350*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].is_empty */
T1 T266f36(T0* C)
{
	T1 R = 0;
	R = ((((T266*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_cursor */
T0* T266f26(T0* C)
{
	T0* R = 0;
	R = T350c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].make */
T0* T350c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T350));
	*(T350*)C = GE_default350;
	((T350*)(C))->a1 = a1;
	((T350*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_PARENT.apply_undeclared_redefines */
void T183f18(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	t1 = (((T22*)(GE_void(((T183*)(C))->a5)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T124f9(GE_void(l1));
	t2 = (T124f5(GE_void(l1)));
	while (!(t2)) {
		l2 = (T124f6(GE_void(l1)));
		l3 = (T124f7(GE_void(l1)));
		t2 = (T31f24(GE_void(((T183*)(C))->a6), l3));
		if (t2) {
			t1 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Applying implicit redefinition for target `", 55),
l3,
GE_ms("\' due to old inheritance format.", 32));
			T22f24(GE_void(((T183*)(C))->a5), t1);
			t1 = (T31f28(GE_void(((T183*)(C))->a6), l3));
			T31f46(GE_void(((T183*)(C))->a8), t1, l3);
			T31f64(GE_void(((T183*)(C))->a6), l3);
		}
		T124f10(GE_void(l1));
		t2 = (T124f5(GE_void(l1)));
	}
}

/* GEANT_PARENT.apply_unchangeds */
void T183f17(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T124f11(GE_void(l1));
	t2 = (T124f4(GE_void(l1)));
	while (!(t2)) {
		l2 = (T124f6(GE_void(l1)));
		l3 = (T124f7(GE_void(l1)));
		t2 = (T31f43(GE_void(((T183*)(C))->a7), l2));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t3 = (T31f43(GE_void(((T183*)(C))->a8), l2));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			T31f46(GE_void(((T183*)(C))->a6), l2, l3);
		}
		T124f12(GE_void(l1));
		t2 = (T124f4(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].has_item */
T1 T31f43(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = ((T31*)(C))->a5;
	l2 = ((T31*)(C))->a11;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			if (t1) {
				t3 = (T31f27(C, l1));
				t1 = ((GE_void(l2), t3, a1, (T1)0));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			if (t1) {
				t3 = (T31f27(C, l1));
				t1 = ((t3)==(a1));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* GEANT_PARENT.apply_redefines */
void T183f16(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = (T264f26(GE_void(((T183*)(C))->a3)));
	T344f7(GE_void(l1));
	t1 = (T344f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T344f4(GE_void(l1)));
		t1 = (T263f2(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid redefine clause.", 24));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T263*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T183*)(C))->a7), t2));
		if (t1) {
			t2 = (((T263*)(GE_void(l2)))->a1);
			l3 = (T31f28(GE_void(((T183*)(C))->a7), t2));
		} else {
			t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
			t3 = (((T263*)(GE_void(l2)))->a1);
			t1 = (T31f24(GE_void(t2), t3));
			if (t1) {
				t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
				t3 = (((T263*)(GE_void(l2)))->a1);
				l3 = (T31f28(GE_void(t2), t3));
			}
		}
		t1 = ((l3)==(EIF_VOID));
		if (t1) {
			t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t3 = (((T263*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': cannot redefine target: `", 28),
t3,
GE_ms("\' since it does not exist.", 26));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T263*)(GE_void(l2)))->a1);
		T31f46(GE_void(((T183*)(C))->a8), l3, t2);
		t2 = (((T263*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T183*)(C))->a7), t2));
		if (t1) {
			t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t3 = (((T263*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': moving target \'", 18),
t3,
GE_ms("\' from list of renamed targets to list of redefined targets.", 60));
			T22f31(GE_void(((T183*)(C))->a5), t2);
			t2 = (((T263*)(GE_void(l2)))->a1);
			T31f64(GE_void(((T183*)(C))->a7), t2);
		} else {
			t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t3 = (((T263*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': adding target \'", 18),
t3,
GE_ms("\' to list of redefined targets.", 31));
			T22f31(GE_void(((T183*)(C))->a5), t2);
		}
		T344f8(GE_void(l1));
		t1 = (T344f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].forth */
void T344f8(T0* C)
{
	T264f59(GE_void(((T344*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_forth */
void T264f59(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T344*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T264*)(C))->a3;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T264f25(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T264f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T344f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T264f60(C, a1);
		}
	} else {
		T344f9(a1, l1);
		if (l3) {
			T264f61(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].add_traversing_cursor */
void T264f61(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T264*)(C))->a17));
	if (t1) {
		t2 = (((T344*)(GE_void(((T264*)(C))->a17)))->a3);
		T344f10(a1, t2);
		T344f10(GE_void(((T264*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].set_next_cursor */
void T344f10(T0* C, T0* a1)
{
	((T344*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].remove_traversing_cursor */
void T264f60(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T264*)(C))->a17));
	if (t1) {
		l2 = ((T264*)(C))->a17;
		l1 = (((T344*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T344*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T344*)(a1))->a3);
			T344f10(GE_void(l2), t2);
			T344f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].set_position */
void T344f9(T0* C, T6 a1)
{
	((T344*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_item */
T6 T264f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T264*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_REDEFINE.is_executable */
T1 T263f2(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T263*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T263*)(C))->a1)))->id==17)?((T17*)(((T263*)(C))->a1))->a2:((T195*)(((T263*)(C))->a1))->a1));
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].item */
T0* T344f4(T0* C)
{
	T0* R = 0;
	R = (T264f33(GE_void(((T344*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_item */
T0* T264f33(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T344*)(a1))->a2);
	R = (T264f35(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_item */
T0* T264f35(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T343*)(GE_void(((T264*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].after */
T1 T344f5(T0* C)
{
	T1 R = 0;
	R = (T264f32(GE_void(((T344*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_after */
T1 T264f32(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T344*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].start */
void T344f7(T0* C)
{
	T264f58(GE_void(((T344*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_start */
void T264f58(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T264f36(C));
	if (t1) {
		T344f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T264f37(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T264*)(C))->a3;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T264f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T264f25(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T344f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T264f60(C, a1);
			}
		} else {
			T344f9(a1, l1);
			if (l3) {
				T264f61(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_off */
T1 T264f37(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T344*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].is_empty */
T1 T264f36(T0* C)
{
	T1 R = 0;
	R = ((((T264*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_cursor */
T0* T264f26(T0* C)
{
	T0* R = 0;
	R = T344c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].make */
T0* T344c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T344));
	*(T344*)C = GE_default344;
	((T344*)(C))->a1 = a1;
	((T344*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_PARENT.apply_renames */
void T183f15(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	T0* t4;
	T0* t5;
	l1 = (T262f27(GE_void(((T183*)(C))->a1)));
	T338f7(GE_void(l1));
	t1 = (T338f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T338f4(GE_void(l1)));
		t1 = (T261f3(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid rename clause.", 22));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
		t3 = (((T261*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(t2), t3));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t4 = (((T22*)(GE_void(((T183*)(C))->a2)))->a2);
			t2 = GE_ma33((T6)9,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': VHRC-1: Inheritance clause contains inheritance operator", 59),
GE_ms(" \'rename\'\nfor a feature `", 25),
t3,
GE_ms("\' which does not exist in parent \'", 34),
t4,
GE_ms("\'.", 2));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
		t3 = (((T261*)(GE_void(l2)))->a2);
		t1 = (T31f24(GE_void(t2), t3));
		if (t1) {
			t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a2);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t4 = (((T261*)(GE_void(l2)))->a2);
			t2 = GE_ma33((T6)8,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': cannot rename target: `", 26),
t3,
GE_ms(" to `", 5),
t4,
GE_ms("\' since it already exists.", 26));
			T183f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T183*)(C))->a2)))->a1);
		t3 = (((T261*)(GE_void(l2)))->a1);
		l3 = (T31f28(GE_void(t2), t3));
		t2 = (((T22*)(GE_void(((T183*)(C))->a5)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T261*)(GE_void(l2)))->a1);
		t5 = (((T261*)(GE_void(l2)))->a2);
		t2 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t2,
GE_ms("\': renaming target: `", 21),
t3,
GE_ms("\' named `", 9),
t4,
GE_ms("\' as: `", 7),
t5,
GE_ms("\'", 1));
		T22f31(GE_void(((T183*)(C))->a5), t2);
		t2 = (((T261*)(GE_void(l2)))->a2);
		T31f46(GE_void(((T183*)(C))->a7), l3, t2);
		T338f8(GE_void(l1));
		t1 = (T338f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].back */
void T338f8(T0* C)
{
	T262f60(GE_void(((T338*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_back */
void T262f60(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	l3 = (((T338*)(a1))->a2);
	t1 = ((l3)==((T6)(GE_int32(-2))));
	if (t1) {
		l2 = EIF_TRUE;
		l1 = ((T262*)(C))->a3;
	} else {
		l1 = ((T6)((l3)-((T6)(GE_int32(1)))));
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (!(t1)) {
		t2 = (T262f26(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T262f26(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (t1) {
		T338f9(a1, (T6)(GE_int32(-1)));
		t1 = ((T1)(!(l2)));
		if (t1) {
			T262f61(C, a1);
		}
	} else {
		T338f9(a1, l1);
		if (l2) {
			T262f62(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].add_traversing_cursor */
void T262f62(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T262*)(C))->a17));
	if (t1) {
		t2 = (((T338*)(GE_void(((T262*)(C))->a17)))->a3);
		T338f10(a1, t2);
		T338f10(GE_void(((T262*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].set_next_cursor */
void T338f10(T0* C, T0* a1)
{
	((T338*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].remove_traversing_cursor */
void T262f61(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T262*)(C))->a17));
	if (t1) {
		l2 = ((T262*)(C))->a17;
		l1 = (((T338*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T338*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T338*)(a1))->a3);
			T338f10(GE_void(l2), t2);
			T338f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].set_position */
void T338f9(T0* C, T6 a1)
{
	((T338*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_item */
T6 T262f26(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T262*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_RENAME.is_executable */
T1 T261f3(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T261*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T261*)(C))->a1)))->id==17)?((T17*)(((T261*)(C))->a1))->a2:((T195*)(((T261*)(C))->a1))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = ((((T261*)(C))->a2)!=(EIF_VOID));
	}
	if (t1) {
		t2 = (((((T0*)(GE_void(((T261*)(C))->a2)))->id==17)?((T17*)(((T261*)(C))->a2))->a2:((T195*)(((T261*)(C))->a2))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t3 = (T261f4(C));
		t1 = (T76f1(GE_void(t3), ((T261*)(C))->a1, ((T261*)(C))->a2));
		R = ((T1)(!(t1)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_RENAME.string_ */
T0* T261f4(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].item */
T0* T338f4(T0* C)
{
	T0* R = 0;
	R = (T262f34(GE_void(((T338*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_item */
T0* T262f34(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T338*)(a1))->a2);
	R = (T262f35(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_item */
T0* T262f35(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T337*)(GE_void(((T262*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].before */
T1 T338f5(T0* C)
{
	T1 R = 0;
	R = (T262f33(GE_void(((T338*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_before */
T1 T262f33(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T338*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].finish */
void T338f7(T0* C)
{
	T262f59(GE_void(((T338*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_finish */
void T262f59(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = (T262f36(C));
	if (t1) {
		T338f9(a1, (T6)(GE_int32(-1)));
	} else {
		l2 = (T262f37(C, a1));
		l1 = ((T262*)(C))->a3;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T262f26(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (T262f26(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(0)))));
		if (t1) {
			T338f9(a1, (T6)(GE_int32(-1)));
			t1 = ((T1)(!(l2)));
			if (t1) {
				T262f61(C, a1);
			}
		} else {
			T338f9(a1, l1);
			if (l2) {
				T262f62(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_off */
T1 T262f37(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T338*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].is_empty */
T1 T262f36(T0* C)
{
	T1 R = 0;
	R = ((((T262*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_cursor */
T0* T262f27(T0* C)
{
	T0* R = 0;
	R = T338c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].make */
T0* T338c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T338));
	*(T338*)C = GE_default338;
	((T338*)(C))->a1 = a1;
	((T338*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].item */
T0* T186f4(T0* C)
{
	T0* R = 0;
	R = (T185f10(GE_void(((T186*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_item */
T0* T185f10(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T186*)(a1))->a2);
	R = (T185f12(C, t1));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].item */
T0* T185f12(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T252*)(GE_void(((T185*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].after */
T1 T186f6(T0* C)
{
	T1 R = 0;
	R = (T185f9(GE_void(((T186*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_after */
T1 T185f9(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T186*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].start */
void T186f8(T0* C)
{
	T185f19(GE_void(((T186*)(C))->a1), C);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_start */
void T185f19(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T186f5(a1));
	t1 = (T185f13(C));
	if (t1) {
		T186f10(a1, (T6)(GE_int32(-1)));
	} else {
		T186f10(a1, (T6)(GE_int32(1)));
		if (l1) {
			T185f21(C, a1);
		}
	}
}

/* DS_ARRAYED_LIST [GEANT_PARENT].is_empty */
T1 T185f13(T0* C)
{
	T1 R = 0;
	R = ((((T185*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].off */
T1 T186f5(T0* C)
{
	T1 R = 0;
	R = (T185f14(GE_void(((T186*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_off */
T1 T185f14(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T185f9(C, a1));
	if (!(t1)) {
		R = (T185f15(C, a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_before */
T1 T185f15(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T186*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].new_cursor */
T0* T185f7(T0* C)
{
	T0* R = 0;
	R = T186c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].make */
T0* T186c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T186));
	*(T186*)C = GE_default186;
	((T186*)(C))->a1 = a1;
	return C;
}

/* GEANT_PROJECT_LOADER.load */
void T23f10(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	((T23*)(C))->a1 = EIF_VOID;
	t1 = (((((T0*)(GE_void(((T23*)(C))->a2)))->id==17)?T17f4(((T23*)(C))->a2):T195f16(((T23*)(C))->a2)));
	l1 = T55c56(t1);
	T55f57(GE_void(l1));
	t2 = (T55f17(GE_void(l1)));
	if (t2) {
		l2 = T56c8(a1, a2, ((T23*)(C))->a2);
		T56f9(GE_void(l2), l1);
		T55f58(GE_void(l1));
		((T23*)(C))->a1 = (((T56*)(GE_void(l2)))->a1);
	} else {
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f10(GE_void(t1), GE_ms("cannot read file: \'", 19));
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f10(GE_void(t1), ((T23*)(C))->a2);
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f18(GE_void(t1), (T2)('\''));
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f11(GE_void(t1));
	}
	t2 = ((((T23*)(C))->a1)==(EIF_VOID));
	if (t2) {
		t1 = (T23f3(C));
		t3 = (T23f3(C));
		t4 = (T23f4(C));
		t3 = (((((T0*)(GE_void(t3)))->id==54)?T54f3(t3, ((T23*)(C))->a2, t4):T53f3(t3, ((T23*)(C))->a2, t4)));
		l3 = (((((T0*)(GE_void(t1)))->id==54)?T54f4(t1, t3):T53f4(t1, t3)));
		t1 = GE_ma33((T6)3,
GE_ms("Parsing error in file \'", 23),
l3,
GE_ms("\'", 1));
		T23f11(C, (T6)(GE_int32(1)), t1);
	}
}

/* GEANT_PROJECT_LOADER.exit_application */
void T23f11(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T23f5(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T23f6(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PROJECT_LOADER.exceptions */
T0* T23f6(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.absolute_pathname */
T0* T53f4(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = (T53f8(C, a1));
	if (t1) {
		R = a1;
	} else {
		t1 = (T53f9(C, a1));
		if (t1) {
			t2 = (T53f10(C));
			R = (T53f11(C, t2, a1));
		} else {
			t2 = (T53f12(C));
			t3 = (T53f13(C));
			R = (T76f6(GE_void(t2), t3, a1));
		}
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.current_drive */
T0* T53f13(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l1 = (T53f10(C));
	l3 = (((T17*)(GE_void(l1)))->a2);
	l2 = (T6)(GE_int32(1));
	t1 = (T6f1(&l2, l3));
	if (!(t1)) {
		t2 = (T17f9(GE_void(l1), l2));
		t1 = (T53f19(C, t2));
	}
	while (!(t1)) {
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, l3));
		if (!(t1)) {
			t2 = (T17f9(GE_void(l1), l2));
			t1 = (T53f19(C, t2));
		}
	}
	t1 = (T6f1(&l2, (T6)(GE_int32(1))));
	if (t1) {
		t1 = (T6f9(&l2, l3));
	}
	if (t1) {
		t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
		R = (T17f10(GE_void(l1), (T6)(GE_int32(1)), t3));
	} else {
		R = GE_ms("", 0);
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_directory_separator */
T1 T53f19(T0* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==((T2)('\\')));
	if (!(t1)) {
		R = ((a1)==(((T53*)(C))->a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname */
T0* T53f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T2 t4;
	T1 t5;
	t1 = (T53f12(C));
	R = (T76f7(GE_void(t1), a1));
	t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T195*)(a2))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
		t3 = (T6f1(&l1, (T6)(GE_int32(0))));
		if (t3) {
			t4 = (((((T0*)(GE_void(R)))->id==17)?T17f9(R, l1):T195f10(R, l1)));
			t5 = (T53f19(C, t4));
			t3 = ((T1)(!(t5)));
		}
		if (t3) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T195f56(R, (T2)('\\'));
			}
		}
		t1 = (T53f12(C));
		R = (T76f5(GE_void(t1), R, a2));
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_relative_pathname */
T1 T53f9(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = (T53f8(C, a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = ((t2)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T195f10(a1, (T6)(GE_int32(1)))));
			t1 = (T53f19(C, t3));
			R = ((T1)(!(t1)));
		} else {
			R = EIF_TRUE;
		}
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_absolute_pathname */
T1 T53f8(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 l4 = 0;
	T2 l5 = 0;
	T1 t1;
	T2 t2;
	T1 t3;
	T6 t4;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f5(&l2, (T6)(GE_int32(4))));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T195f10(a1, (T6)(GE_int32(1)))));
		t1 = (T53f19(C, t2));
	}
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(2))):T195f10(a1, (T6)(GE_int32(2)))));
		t1 = (T53f19(C, t2));
		if (t1) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(3))):T195f10(a1, (T6)(GE_int32(3)))));
			t3 = (T53f19(C, t2));
			t1 = ((T1)(!(t3)));
		}
		if (t1) {
			l1 = (T6)(GE_int32(4));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t1 = (R);
			}
			while (!(t1)) {
				l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
				t1 = (T53f19(C, l5));
				if (t1) {
					R = EIF_TRUE;
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (R);
				}
			}
		}
	} else {
		t1 = (T6f5(&l2, (T6)(GE_int32(3))));
		if (t1) {
			l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T195f10(a1, (T6)(GE_int32(1)))));
			t1 = (T53f19(C, l5));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t1 = ((l5)!=((T2)(':')));
			}
			if (t1) {
				l1 = (T6)(GE_int32(2));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (l3);
				}
				if (!(t1)) {
					t1 = (l4);
				}
				while (!(t1)) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
					t1 = (T53f19(C, l5));
					if (t1) {
						l3 = EIF_TRUE;
					} else {
						t1 = ((l5)==((T2)(':')));
						if (t1) {
							l4 = EIF_TRUE;
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
					}
					t1 = (T6f1(&l1, l2));
					if (!(t1)) {
						t1 = (l3);
					}
					if (!(t1)) {
						t1 = (l4);
					}
				}
				if (l4) {
					t1 = ((T1)((l1)<(l2)));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, t4):T195f10(a1, t4)));
					R = (T53f19(C, l5));
				}
			}
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.absolute_pathname */
T0* T54f4(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	t1 = (T54f9(C, a1));
	if (t1) {
		R = a1;
	} else {
		t2 = (T54f10(C));
		R = (T54f11(C, t2, a1));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname */
T0* T54f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T2 t4;
	t1 = (T54f13(C));
	R = (T76f7(GE_void(t1), a1));
	t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T195*)(a2))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
		t3 = (T6f1(&l1, (T6)(GE_int32(0))));
		if (t3) {
			t4 = (((((T0*)(GE_void(R)))->id==17)?T17f9(R, l1):T195f10(R, l1)));
			t3 = ((t4)!=((T2)('/')));
		}
		if (t3) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('/'));
			} else {
				T195f56(R, (T2)('/'));
			}
		}
		t1 = (T54f13(C));
		R = (T76f5(GE_void(t1), R, a2));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.is_absolute_pathname */
T1 T54f9(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T195f10(a1, (T6)(GE_int32(1)))));
		R = ((t3)==((T2)('/')));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname_from_file_system */
T0* T53f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	t1 = (T53f6(C));
	t2 = (T83f1(GE_void(t1), C, a2));
	if (t2) {
		R = a1;
	} else {
		t1 = (T54f5(GE_void(a2), a1));
		R = (T53f7(C, t1));
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname_to_string */
T0* T53f7(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T17c33((T6)(GE_int32(50)));
	l2 = (((T85*)(GE_void(a1)))->a1);
	l3 = (((T85*)(GE_void(a1)))->a2);
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		t2 = (T53f12(C));
		R = (T76f5(GE_void(t2), R, l3));
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('\\'));
		} else {
			T195f56(R, (T2)('\\'));
		}
	} else {
		l4 = (((T85*)(GE_void(a1)))->a3);
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T195f56(R, (T2)('\\'));
			}
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T195f56(R, (T2)('\\'));
			}
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, l4));
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T195f56(R, (T2)('\\'));
			}
			l5 = (((T85*)(GE_void(a1)))->a4);
			t1 = ((l5)!=(EIF_VOID));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, l5));
				t1 = (T6f1(&l2, (T6)(GE_int32(0))));
				if (t1) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f34(R, (T2)('\\'));
					} else {
						T195f56(R, (T2)('\\'));
					}
				}
			}
		} else {
			t1 = (((T85*)(GE_void(a1)))->a5);
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (T53f12(C));
				t3 = (T53f16(C));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	l1 = (T6)(GE_int32(1));
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = (T85f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, ge211ov3972));
		} else {
			t1 = (T85f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, ge211ov3973));
			} else {
				t2 = (T53f12(C));
				t3 = (T85f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('\\'));
		} else {
			T195f56(R, (T2)('\\'));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	t1 = ((l1)==(l2));
	if (t1) {
		t1 = (T85f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, ge211ov3972));
		} else {
			t1 = (T85f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, ge211ov3973));
			} else {
				t2 = (T53f12(C));
				t3 = (T85f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	return R;
}

/* KL_PATHNAME.item */
T0* T85f8(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T33f4(GE_void(((T85*)(C))->a6), a1));
	return R;
}

/* KL_PATHNAME.is_parent */
T1 T85f7(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T85f8(C, a1));
	R = ((t1)==(ge200ov4231));
	return R;
}

/* KL_PATHNAME.is_current */
T1 T85f11(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T85f8(C, a1));
	R = ((t1)==(ge200ov4230));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.root_directory */
unsigned char ge211os3974 = '\0';
T0* ge211ov3974;
T0* T53f16(T0* C)
{
	T0* R = 0;
	if (ge211os3974) {
		return ge211ov3974;
	} else {
		ge211os3974 = '\1';
		ge211ov3974 = R;
	}
	R = GE_ms("\\", 1);
	ge211ov3974 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.string_to_pathname */
T0* T54f5(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	R = T85c13();
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T195f10(a1, (T6)(GE_int32(1)))));
		t1 = ((t2)!=((T2)('/')));
		if (t1) {
			T85f14(GE_void(R), EIF_TRUE);
		}
	} else {
		T85f14(GE_void(R), EIF_TRUE);
	}
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
			t1 = ((t2)!=((T2)('/')));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
				t1 = ((t2)!=((T2)('/')));
			}
		}
		t1 = (T6f9(&l1, l2));
		if (t1) {
			l3 = l1;
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
				t1 = ((t2)==((T2)('/')));
			}
			while (!(t1)) {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
					t1 = ((t2)==((T2)('/')));
				}
			}
			l4 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l3, l4):T195f11(a1, l3, l4)));
			t3 = (T54f13(C));
			t1 = (T76f1(GE_void(t3), l5, ge209ov3972));
			if (t1) {
				T85f15(GE_void(R));
			} else {
				t3 = (T54f13(C));
				t1 = (T76f1(GE_void(t3), l5, ge209ov3973));
				if (t1) {
					T85f16(GE_void(R));
				} else {
					T85f17(GE_void(R), l5);
				}
			}
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* KL_PATHNAME.append_name */
void T85f17(T0* C, T0* a1)
{
	((T85*)(C))->a1 = ((T6)((((T85*)(C))->a1)+((T6)(GE_int32(1)))));
	T33f14(GE_void(((T85*)(C))->a6), a1, ((T85*)(C))->a1);
}

/* KL_PATHNAME.append_parent */
void T85f16(T0* C)
{
	T85f17(C, ge200ov4231);
}

/* KL_PATHNAME.append_current */
void T85f15(T0* C)
{
	T85f17(C, ge200ov4230);
}

/* KL_PATHNAME.set_relative */
void T85f14(T0* C, T1 a1)
{
	((T85*)(C))->a5 = a1;
}

/* KL_PATHNAME.make */
T0* T85c13(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T85));
	*(T85*)C = GE_default85;
	((T85*)(C))->a6 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(10)));
	return C;
}

/* KL_WINDOWS_FILE_SYSTEM.any_ */
T0* T53f6(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname_from_file_system */
T0* T54f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	t1 = (T54f7(C));
	t2 = (T83f1(GE_void(t1), C, a2));
	if (t2) {
		R = a1;
	} else {
		t1 = (T54f5(GE_void(a2), a1));
		R = (T54f8(C, t1));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname_to_string */
T0* T54f8(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T17c33((T6)(GE_int32(50)));
	t1 = (((T85*)(GE_void(a1)))->a5);
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T54f13(C));
		t3 = (T54f17(C));
		R = (T76f5(GE_void(t2), R, t3));
	}
	l2 = (((T85*)(GE_void(a1)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = (T85f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T54f13(C));
			R = (T76f5(GE_void(t2), R, ge209ov3972));
		} else {
			t1 = (T85f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T54f13(C));
				R = (T76f5(GE_void(t2), R, ge209ov3973));
			} else {
				t2 = (T54f13(C));
				t3 = (T85f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('/'));
		} else {
			T195f56(R, (T2)('/'));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	t1 = ((l1)==(l2));
	if (t1) {
		t1 = (T85f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T54f13(C));
			R = (T76f5(GE_void(t2), R, ge209ov3972));
		} else {
			t1 = (T85f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T54f13(C));
				R = (T76f5(GE_void(t2), R, ge209ov3973));
			} else {
				t2 = (T54f13(C));
				t3 = (T85f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.root_directory */
unsigned char ge209os3974 = '\0';
T0* ge209ov3974;
T0* T54f17(T0* C)
{
	T0* R = 0;
	if (ge209os3974) {
		return ge209ov3974;
	} else {
		ge209os3974 = '\1';
		ge209ov3974 = R;
	}
	R = GE_ms("/", 1);
	ge209ov3974 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.any_ */
T0* T54f7(T0* C)
{
	T0* R = 0;
	if (ge166os1926) {
		return ge166ov1926;
	} else {
		ge166os1926 = '\1';
		ge166ov1926 = R;
	}
	R = T83c3();
	ge166ov1926 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.unix_file_system */
T0* T23f4(T0* C)
{
	T0* R = 0;
	if (ge203os1726) {
		return ge203ov1726;
	} else {
		ge203os1726 = '\1';
		ge203ov1726 = R;
	}
	R = T54c32();
	ge203ov1726 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.file_system */
T0* T23f3(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1723) {
		return ge203ov1723;
	} else {
		ge203os1723 = '\1';
		ge203ov1723 = R;
	}
	t1 = (T23f7(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T23f8(C));
		ge203ov1723 = R;
	} else {
		t1 = (T23f7(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T23f4(C));
			ge203ov1723 = R;
		} else {
			R = (T23f4(C));
			ge203ov1723 = R;
		}
	}
	return R;
}

/* GEANT_PROJECT_LOADER.windows_file_system */
T0* T23f8(T0* C)
{
	T0* R = 0;
	if (ge203os1724) {
		return ge203ov1724;
	} else {
		ge203os1724 = '\1';
		ge203ov1724 = R;
	}
	R = T53c36();
	ge203ov1724 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.operating_system */
T0* T23f7(T0* C)
{
	T0* R = 0;
	if (ge224os1727) {
		return ge224ov1727;
	} else {
		ge224os1727 = '\1';
		ge224ov1727 = R;
	}
	R = T51c7();
	ge224ov1727 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.std */
T0* T23f5(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* KL_TEXT_INPUT_FILE.close */
void T55f58(T0* C)
{
	GE_rescue r;
	T1 l1 = 0;
	T1 t1;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		T55f63(C);
		((T55*)(C))->a4 = EIF_VOID;
	}
	GE_last_rescue = r.previous;
}

/* KL_TEXT_INPUT_FILE.old_close */
void T55f63(T0* C)
{
	T55f64(C, ((T55*)(C))->a6);
	((T55*)(C))->a2 = (T6)(GE_int32(0));
	((T55*)(C))->a7 = EIF_FALSE;
}

/* KL_TEXT_INPUT_FILE.file_close */
void T55f64(T0* C, T14 a1)
{
	file_close((FILE *)a1);
}

/* GEANT_PROJECT_PARSER.parse_file */
void T56f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	((T56*)(C))->a1 = EIF_VOID;
	T91f205(GE_void(((T56*)(C))->a5), a1);
	t1 = (T91f121(GE_void(((T56*)(C))->a5)));
	if (t1) {
		t2 = (((T92*)(GE_void(((T56*)(C))->a6)))->a3);
		t1 = (((T98*)(GE_void(t2)))->a1);
		t1 = ((T1)(!(t1)));
		if (t1) {
			l1 = (T92f8(GE_void(((T56*)(C))->a6)));
			l2 = (((T96*)(GE_void(l1)))->a1);
			((T56*)(C))->a1 = T30c20(l2, ((T56*)(C))->a2, ((T56*)(C))->a3, ((T56*)(C))->a4);
		} else {
			t2 = (T56f7(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T92f5(GE_void(((T56*)(C))->a6)));
			T47f10(GE_void(t2), t3);
			t2 = (T56f7(C));
			t2 = (T46f1(GE_void(t2)));
			T47f21(GE_void(t2));
		}
	} else {
		t2 = (T56f7(C));
		t2 = (T46f1(GE_void(t2)));
		t3 = (T91f89(GE_void(((T56*)(C))->a5)));
		T47f10(GE_void(t2), t3);
		t2 = (T56f7(C));
		t2 = (T46f1(GE_void(t2)));
		T47f21(GE_void(t2));
	}
}

/* XM_EIFFEL_PARSER.last_error_extended_description */
T0* T91f89(T0* C)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T91f128(C));
	t1 = (((T129*)(GE_void(t1)))->a1);
	R = (T91f170(C, t1));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T195f56(R, (T2)(':'));
	}
	t1 = (T91f128(C));
	t2 = (((T129*)(GE_void(t1)))->a2);
	t1 = (T6f12(&t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, t1);
	} else {
		T195f55(R, t1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T195f56(R, (T2)(':'));
	}
	t1 = (T91f128(C));
	t2 = (((T129*)(GE_void(t1)))->a3);
	t1 = (T6f12(&t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, t1);
	} else {
		T195f55(R, t1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T195f56(R, (T2)(':'));
	}
	t1 = (T91f177(C));
	t3 = ((t1)!=(EIF_VOID));
	if (t3) {
		t1 = (T91f85(C));
		t4 = (T91f177(C));
		R = (T76f5(GE_void(t1), R, t4));
	}
	return R;
}

/* XM_EIFFEL_PARSER.string_ */
T0* T91f85(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* XM_EIFFEL_PARSER.last_error_description */
T0* T91f177(T0* C)
{
	T0* R = 0;
	R = ((T91*)(C))->a1;
	return R;
}

/* XM_EIFFEL_PARSER.safe_error_component */
T0* T91f170(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		R = ge1411ov5251;
	} else {
		R = T17c44();
		l1 = (T6)(GE_int32(1));
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
		t1 = (T6f1(&l1, t2));
		if (!(t1)) {
			t1 = (T6f1(&l1, (T6)(GE_int32(100))));
		}
		while (!(t1)) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
			t1 = (T91f109(C, t3));
			if (t1) {
				t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T195f10(a1, l1)));
				T17f34(GE_void(R), t3);
			} else {
				T17f34(GE_void(R), (T2)('?'));
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			t1 = (T6f1(&l1, t2));
			if (!(t1)) {
				t1 = (T6f1(&l1, (T6)(GE_int32(100))));
			}
		}
		t1 = (T6f1(&l1, (T6)(GE_int32(100))));
		if (t1) {
			T17f39(GE_void(R), ge1411ov5250);
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T195*)(a1))->a1));
			l1 = ((T6)((t2)+((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* XM_EIFFEL_PARSER.is_safe_error_character */
T1 T91f109(T0* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	T1 t2;
	t1 = (T2f4(&a1, (T2)('/')));
	if (t1) {
		t1 = (T2f5(&a1, (T2)('9')));
	}
	if (!(t1)) {
		t2 = (T2f4(&a1, (T2)('@')));
		if (t2) {
			t1 = (T2f5(&a1, (T2)('Z')));
		} else {
			t1 = EIF_FALSE;
		}
	}
	if (!(t1)) {
		t1 = (T2f4(&a1, (T2)('a')));
		if (t1) {
			R = (T2f5(&a1, (T2)('z')));
		} else {
			R = EIF_FALSE;
		}
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* CHARACTER_8.infix ">=" */
T1 T2f4(T2* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T2f5(C, a1));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.make_empty */
T0* T17c44(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	T17f33(C, (T6)(GE_int32(0)));
	return C;
}

/* XM_EIFFEL_PARSER.position */
T0* T91f128(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	t1 = (T91f121(C));
	if (t1) {
		R = (T128x6786(GE_void(((T91*)(C))->a2)));
	} else {
		t2 = (T91f91(C));
		R = (T131f6(GE_void(t2)));
	}
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].first */
T0* T131f6(T0* C)
{
	T0* R = 0;
	R = (((T211*)(GE_void(((T131*)(C))->a1)))->a1);
	return R;
}

/* XM_EIFFEL_PARSER.positions */
T0* T91f91(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T91*)(C))->a3)==(EIF_VOID));
	if (t1) {
		R = (T91f125(C));
	} else {
		R = ((T91*)(C))->a3;
	}
	return R;
}

/* XM_EIFFEL_PARSER.new_positions */
T0* T91f125(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = T132c5();
	T132f6(GE_void(l1), ((T91*)(C))->a4);
	R = T131c8();
	t1 = (T128x6786(GE_void(((T91*)(C))->a2)));
	T131f9(GE_void(R), t1);
	t2 = (T132f3(GE_void(l1)));
	while (!(t2)) {
		t1 = (T132f4(GE_void(l1)));
		t1 = (T128x6786(GE_void(t1)));
		T131f9(GE_void(R), t1);
		T132f7(GE_void(l1));
		t2 = (T132f3(GE_void(l1)));
	}
	return R;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].remove */
void T132f7(T0* C)
{
	((T132*)(C))->a2 = (((T213*)(GE_void(((T132*)(C))->a2)))->a2);
	((T132*)(C))->a1 = ((T6)((((T132*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].item */
T0* T132f4(T0* C)
{
	T0* R = 0;
	R = (((T213*)(GE_void(((T132*)(C))->a2)))->a1);
	return R;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].is_empty */
T1 T132f3(T0* C)
{
	T1 R = 0;
	R = ((((T132*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].force_last */
void T131f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T131f5(C));
	if (t1) {
		((T131*)(C))->a1 = T211c4(a1);
		((T131*)(C))->a3 = ((T131*)(C))->a1;
		((T131*)(C))->a4 = (T6)(GE_int32(1));
	} else {
		l1 = ((T131*)(C))->a3;
		((T131*)(C))->a3 = T211c4(a1);
		T211f5(GE_void(l1), ((T131*)(C))->a3);
		((T131*)(C))->a4 = ((T6)((((T131*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* DS_BILINKABLE [XM_POSITION].put_right */
void T211f5(T0* C, T0* a1)
{
	((T211*)(C))->a2 = a1;
	T211f6(GE_void(a1), C);
}

/* DS_BILINKABLE [XM_POSITION].attach_left */
void T211f6(T0* C, T0* a1)
{
	((T211*)(C))->a3 = a1;
}

/* DS_BILINKABLE [XM_POSITION].make */
T0* T211c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T211));
	*(T211*)C = GE_default211;
	((T211*)(C))->a1 = a1;
	return C;
}

/* DS_BILINKED_LIST [XM_POSITION].is_empty */
T1 T131f5(T0* C)
{
	T1 R = 0;
	R = ((((T131*)(C))->a4)==((T6)(GE_int32(0))));
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].make */
T0* T131c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T131));
	*(T131*)C = GE_default131;
	((T131*)(C))->a2 = (T131f7(C));
	return C;
}

/* DS_BILINKED_LIST [XM_POSITION].new_cursor */
T0* T131f7(T0* C)
{
	T0* R = 0;
	R = T212c3(C);
	return R;
}

/* DS_BILINKED_LIST_CURSOR [XM_POSITION].make */
T0* T212c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T212));
	*(T212*)C = GE_default212;
	((T212*)(C))->a1 = a1;
	((T212*)(C))->a2 = EIF_TRUE;
	return C;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].copy */
void T132f6(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(C));
	if (t1) {
		*(T132*)(C) = *(T132*)(a1);
		t1 = (T132f3(GE_void(a1)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			l3 = (((T132*)(GE_void(a1)))->a2);
			t2 = (((T213*)(GE_void(l3)))->a1);
			((T132*)(C))->a2 = T213c3(t2);
			l1 = ((T132*)(C))->a2;
			l3 = (((T213*)(GE_void(l3)))->a2);
			t1 = ((l3)==(EIF_VOID));
			while (!(t1)) {
				t2 = (((T213*)(GE_void(l3)))->a1);
				l2 = T213c3(t2);
				T213f4(GE_void(l1), l2);
				l1 = l2;
				l3 = (((T213*)(GE_void(l3)))->a2);
				t1 = ((l3)==(EIF_VOID));
			}
		}
	}
}

/* DS_LINKABLE [XM_EIFFEL_SCANNER].put_right */
void T213f4(T0* C, T0* a1)
{
	((T213*)(C))->a2 = a1;
}

/* DS_LINKABLE [XM_EIFFEL_SCANNER].make */
T0* T213c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T213));
	*(T213*)C = GE_default213;
	((T213*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].make */
T0* T132c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T132));
	*(T132*)C = GE_default132;
	return C;
}

/* KL_STDERR_FILE.flush */
void T47f21(T0* C)
{
	T47f22(C);
}

/* KL_STDERR_FILE.old_flush */
void T47f22(T0* C)
{
	T47f23(C, ((T47*)(C))->a1);
}

/* KL_STDERR_FILE.file_flush */
void T47f23(T0* C, T14 a1)
{
	file_flush((FILE *)a1);
}

/* XM_TREE_CALLBACKS_PIPE.last_error */
T0* T92f5(T0* C)
{
	T0* R = 0;
	R = (((T98*)(GE_void(((T92*)(C))->a3)))->a2);
	return R;
}

/* GEANT_PROJECT_PARSER.std */
T0* T56f7(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* GEANT_PROJECT_ELEMENT.make */
T0* T30c20(T0* a1, T0* a2, T0* a3, T0* a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	T6 t4;
	T0* t5;
	T0* t6;
	C = (T0*)GE_alloc(sizeof(T30));
	*(T30*)C = GE_default30;
	T30f21(C, a1);
	l8 = T22c23(a2, a3, GE_ms("trace_project", 13));
	t1 = GE_ma33((T6)2,
GE_ms("Loading Project\'s configuration from ", 37),
a4);
	T22f24(GE_void(l8), t1);
	t1 = (T30f5(C));
	t2 = (T30f3(C, t1));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)5,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project in file \'", 19),
a4,
GE_ms("\' does not have a name.\n", 24),
GE_ms("  Please specify a name for this project.", 41));
		T30f22(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T30f5(C));
	t1 = (T30f4(C, t1));
	((T30*)(C))->a1 = T22c23(a2, a3, t1);
	t1 = (T30f6(C));
	t2 = (T97f15(GE_void(((T30*)(C))->a2), t1));
	if (t2) {
		t1 = (T30f6(C));
		t1 = (T97f16(GE_void(((T30*)(C))->a2), t1));
		t1 = (T97f26(GE_void(t1)));
		T22f29(GE_void(((T30*)(C))->a1), t1);
	}
	t1 = (T30f7(C));
	t3 = (T30f8(C));
	l7 = (((((T0*)(GE_void(t1)))->id==54)?T54f3(t1, a4, t3):T53f3(t1, a4, t3)));
	t1 = (T30f7(C));
	t3 = (T30f7(C));
	t3 = (((((T0*)(GE_void(t3)))->id==54)?T54f4(t3, l7):T53f4(t3, l7)));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f20(t1, t3):T53f23(t1, t3)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".absdir", 7)):T195f7(t1, GE_ms(".absdir", 7))));
	T25f59(GE_void(a2), t1, l6);
	t1 = (T30f7(C));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f20(t1, l7):T53f23(t1, l7)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".dir", 4)):T195f7(t1, GE_ms(".dir", 4))));
	T25f59(GE_void(a2), t1, l6);
	t1 = (T30f7(C));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f21(t1, l7):T53f24(t1, l7)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".filename", 9)):T195f7(t1, GE_ms(".filename", 9))));
	T25f59(GE_void(a2), t1, l6);
	t1 = (T30f9(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t1 = (T30f9(C));
		t1 = (T30f4(C, t1));
		T22f30(GE_void(((T30*)(C))->a1), t1);
	}
	t1 = (T30f10(C));
	l1 = (T30f11(C, t1));
	t4 = (((T116*)(GE_void(l1)))->a1);
	l3 = T31c44(t4);
	l5 = T59c3();
	T31f45(GE_void(l3), l5);
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t4 = (((T116*)(GE_void(l1)))->a1);
	t3 = (T6f12(&t4));
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': loading ", 11),
t3,
GE_ms(" immediate targets.", 19));
	T22f31(GE_void(((T30*)(C))->a1), t1);
	l2 = (T116f5(GE_void(l1)));
	T117f8(GE_void(l2));
	t2 = (((T117*)(GE_void(l2)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l2)));
		l4 = T26c80(((T30*)(C))->a1, t1);
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t3 = (((T26*)(GE_void(l4)))->a1);
		t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': loading target `", 19),
t3,
GE_ms("\'", 1));
		T22f31(GE_void(((T30*)(C))->a1), t1);
		t1 = (((T26*)(GE_void(l4)))->a1);
		t2 = (T31f24(GE_void(l3), t1));
		if (t2) {
			t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
			t3 = (((T26*)(GE_void(l4)))->a1);
			t5 = (((T26*)(GE_void(l4)))->a1);
			t6 = (((T26*)(GE_void(l4)))->a1);
			t6 = (T31f28(GE_void(l3), t6));
			t6 = (((T26*)(GE_void(t6)))->a4);
			t6 = (((T22*)(GE_void(t6)))->a2);
			t1 = GE_ma33((T6)11,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' contains a target named `", 27),
t3,
GE_ms("\' which conflicts with target `", 31),
t5,
GE_ms("\' from project \'", 16),
t6,
GE_ms("\'.\n", 3),
GE_ms("  Either use a different name, use the rename clause, or redefine this target.", 78));
			T30f22(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T26*)(GE_void(l4)))->a1);
		T31f46(GE_void(l3), l4, t1);
		T117f9(GE_void(l2));
		t2 = (((T117*)(GE_void(l2)))->a1);
	}
	T22f32(GE_void(((T30*)(C))->a1), l3);
	T30f23(C);
	return C;
}

/* GEANT_PROJECT_ELEMENT.load_parent_projects */
void T30f23(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	t1 = (T30f14(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t2 = (T30f15(C));
	}
	if (t2) {
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("\nLOAD ERROR in project \'", 24),
t1,
GE_ms("\':\n", 3),
GE_ms("  Remove obsolete attribute \'inherit\' and use subelement \'inherit\' instead.", 75));
		T30f22(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T30f14(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete inheritance format using attribute \'inherit\' found.\n", 73),
GE_ms("Use new inheritance format with subelement instead.", 51));
		T22f24(GE_void(((T30*)(C))->a1), t1);
		T22f33(GE_void(((T30*)(C))->a1), EIF_TRUE);
		l1 = T118c9(((T30*)(C))->a1, ((T30*)(C))->a2);
		t1 = (((T118*)(GE_void(l1)))->a1);
		T22f34(GE_void(((T30*)(C))->a1), t1);
	}
	t2 = (T30f15(C));
	if (t2) {
		t1 = (T30f16(C));
		l2 = (T97f16(GE_void(((T30*)(C))->a2), t1));
		l1 = T118c10(((T30*)(C))->a1, l2);
		t1 = (((T118*)(GE_void(l1)))->a1);
		T22f34(GE_void(((T30*)(C))->a1), t1);
	}
}

/* GEANT_INHERIT_ELEMENT.make */
T0* T118c10(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	C = (T0*)GE_alloc(sizeof(T118));
	*(T118*)C = GE_default118;
	T118f11(C, a1, a2);
	((T118*)(C))->a1 = T119c6(((T118*)(C))->a2);
	t1 = (T118f7(C));
	l1 = (T118f4(C, t1));
	l2 = (T116f5(GE_void(l1)));
	T117f8(GE_void(l2));
	t2 = (((T117*)(GE_void(l2)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l2)));
		l3 = T201c18(((T118*)(C))->a2, t1);
		t1 = (((T201*)(GE_void(l3)))->a1);
		t2 = (T183f9(GE_void(t1)));
		if (t2) {
			t1 = (((T119*)(GE_void(((T118*)(C))->a1)))->a1);
			t3 = (((T201*)(GE_void(l3)))->a1);
			T185f17(GE_void(t1), t3);
		} else {
			t1 = GE_ma33((T6)1,
GE_ms("ERROR in \'parent\' clause", 24));
			T118f12(C, (T6)(GE_int32(1)), t1);
		}
		T117f9(GE_void(l2));
		t2 = (((T117*)(GE_void(l2)))->a1);
	}
	return C;
}

/* GEANT_INHERIT_ELEMENT.exit_application */
void T118f12(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T118f5(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T118f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T118f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T118f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T118f6(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_INHERIT_ELEMENT.exceptions */
T0* T118f6(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_INHERIT_ELEMENT.std */
T0* T118f5(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].force_last */
void T185f17(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T185f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T185*)(C))->a5)+((T6)(GE_int32(1)))));
		t2 = (T185f8(C, t2));
		T185f18(C, t2);
	}
	((T185*)(C))->a5 = ((T6)((((T185*)(C))->a5)+((T6)(GE_int32(1)))));
	((T252*)(GE_void(((T185*)(C))->a2)))->z2[((T185*)(C))->a5] = (a1);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].resize */
void T185f18(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T185*)(C))->a2 = (T251f2(GE_void(((T185*)(C))->a1), ((T185*)(C))->a2, t1));
	((T185*)(C))->a3 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].resize */
T0* T251f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T252*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T252f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_PARENT].resized_area */
T0* T252f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T252c4(a1);
	t1 = (((T252*)(C))->z1);
	T252f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_PARENT].copy_data */
void T252f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T252f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T252*)(a1))->z2[l1]);
			((T252*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_PARENT].move_data */
void T252f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T252f8(C, a1, a2, a3);
			} else {
				T252f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T252f8(C, a1, a2, a3);
			} else {
				T252f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_PARENT].overlapping_move */
void T252f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T252*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T252*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T252*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T252*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_PARENT].non_overlapping_move */
void T252f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T252*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T252*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_PARENT].make */
T0* T252c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T252)+a1*sizeof(T0*));
	*(T252*)C = GE_default252;
	((T252*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].new_capacity */
T6 T185f8(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].extendible */
T1 T185f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T185*)(C))->a5)+(a1)));
	R = (T6f5(&(((T185*)(C))->a3), t1));
	return R;
}

/* GEANT_PARENT.is_executable */
T1 T183f9(T0* C)
{
	T1 R = 0;
	R = ((((T183*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* GEANT_PARENT_ELEMENT.make */
T0* T201c18(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T201));
	*(T201*)C = GE_default201;
	T201f19(C, a1, a2);
	((T201*)(C))->a1 = T183c12(a1);
	t1 = (T201f5(C));
	t2 = (T201f6(C, t1));
	if (t2) {
		t1 = (T201f5(C));
		l7 = (T201f13(C, t1));
		t3 = (((((T0*)(GE_void(l7)))->id==17)?((T17*)(l7))->a2:((T195*)(l7))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			l9 = T23c9(l7);
			t1 = (((T22*)(GE_void(a1)))->a7);
			t4 = (((T22*)(GE_void(a1)))->a9);
			T23f10(GE_void(l9), t1, t4);
			t1 = (((T23*)(GE_void(l9)))->a1);
			l10 = (((T30*)(GE_void(t1)))->a1);
			T183f13(GE_void(((T201*)(C))->a1), l10);
			T22f25(GE_void(l10));
		}
	}
	t1 = (T201f7(C));
	l2 = (T201f8(C, t1));
	l3 = (T116f5(GE_void(l2)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l4 = T258c10(((T201*)(C))->a2, t1);
		t1 = (((T258*)(GE_void(l4)))->a1);
		l1 = (((T261*)(GE_void(t1)))->a1);
		t1 = (((T183*)(GE_void(((T201*)(C))->a1)))->a1);
		t2 = (T262f29(GE_void(t1), l1));
		if (t2) {
			l8 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(9)));
			T33f12(GE_void(l8), GE_ms("\nLOAD ERROR:\n", 13), (T6)(GE_int32(1)));
			T33f12(GE_void(l8), GE_ms("  Project \'", 11), (T6)(GE_int32(2)));
			t1 = (((T22*)(GE_void(((T201*)(C))->a2)))->a2);
			T33f12(GE_void(l8), t1, (T6)(GE_int32(3)));
			T33f12(GE_void(l8), GE_ms("\': VHRC-2: old_name `", 21), (T6)(GE_int32(4)));
			T33f12(GE_void(l8), l1, (T6)(GE_int32(5)));
			T33f12(GE_void(l8), GE_ms("\' appears more than once as the first element", 45), (T6)(GE_int32(6)));
			T33f12(GE_void(l8), GE_ms(" of a Rename_pair in the same Rename subclause of parent \'", 58), (T6)(GE_int32(7)));
			t1 = (((T183*)(GE_void(((T201*)(C))->a1)))->a2);
			t1 = (((T22*)(GE_void(t1)))->a2);
			T33f12(GE_void(l8), t1, (T6)(GE_int32(8)));
			T33f12(GE_void(l8), GE_ms("\'", 1), (T6)(GE_int32(9)));
			T201f20(C, (T6)(GE_int32(1)), l8);
		}
		t1 = (((T183*)(GE_void(((T201*)(C))->a1)))->a1);
		t4 = (((T258*)(GE_void(l4)))->a1);
		T262f40(GE_void(t1), t4, l1);
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	t1 = (T201f9(C));
	l2 = (T201f8(C, t1));
	l3 = (T116f5(GE_void(l2)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l5 = T259c9(((T201*)(C))->a2, t1);
		t1 = (((T259*)(GE_void(l5)))->a1);
		l1 = (((T263*)(GE_void(t1)))->a1);
		t1 = (((T183*)(GE_void(((T201*)(C))->a1)))->a3);
		t4 = (((T259*)(GE_void(l5)))->a1);
		T264f39(GE_void(t1), t4, l1);
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	t1 = (T201f10(C));
	l2 = (T201f8(C, t1));
	l3 = (T116f5(GE_void(l2)));
	T117f8(GE_void(l3));
	t2 = (((T117*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T117f6(GE_void(l3)));
		l6 = T260c9(((T201*)(C))->a2, t1);
		t1 = (((T260*)(GE_void(l6)))->a1);
		l1 = (((T265*)(GE_void(t1)))->a1);
		t1 = (((T183*)(GE_void(((T201*)(C))->a1)))->a4);
		t4 = (((T260*)(GE_void(l6)))->a1);
		T266f39(GE_void(t1), t4, l1);
		T117f9(GE_void(l3));
		t2 = (((T117*)(GE_void(l3)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].force_last */
void T266f39(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T266f42(C);
	T266f43(C, a2);
	t1 = ((((T266*)(C))->a2)!=((T6)(GE_int32(0))));
	if (t1) {
		T266f44(C, a1, ((T266*)(C))->a2);
	} else {
		l1 = ((T6)((((T266*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T266*)(C))->a4));
		if (t1) {
			t2 = (T266f22(C, l1));
			T266f45(C, t2);
			l2 = (T266f23(C, a2));
		} else {
			l2 = ((T266*)(C))->a5;
		}
		t2 = (T266f21(C, l2));
		T266f46(C, t2, l1);
		T266f47(C, l1, l2);
		T266f44(C, a1, l1);
		T266f48(C, a2, l1);
		((T266*)(C))->a3 = l1;
		((T266*)(C))->a6 = ((T6)((((T266*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_put */
void T266f48(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T266*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_put */
void T266f47(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T266*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_put */
void T266f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T266*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_item */
T6 T266f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T266*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].hash_position */
T6 T266f23(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T266*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T266*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T266*)(C))->a10)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T266*)(C))->a10)));
		}
	} else {
		R = ((T266*)(C))->a10;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].resize */
void T266f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T266f42(C);
	l1 = (T266f29(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T266f50(C, t1);
	l2 = ((T266*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T266f47(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T266*)(C))->a10 = l1;
	l2 = ((T266*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T266f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T266f24(C, l2));
			l3 = (T266f23(C, t3));
			t1 = (T266f21(C, l3));
			T266f46(C, t1, l2);
			T266f47(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f52(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f53(C, t1);
	((T266*)(C))->a4 = a1;
	((T266*)(C))->a2 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_resize */
void T266f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T266f27(C));
	((T266*)(C))->a13 = (T65f1(GE_void(t1), ((T266*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].special_integer_ */
T0* T266f27(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_resize */
void T266f52(T0* C, T6 a1)
{
	((T266*)(C))->a15 = (T66f1(GE_void(((T266*)(C))->a19), ((T266*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_resize */
void T266f51(T0* C, T6 a1)
{
	((T266*)(C))->a12 = (T351f1(GE_void(((T266*)(C))->a18), ((T266*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].resize */
T0* T351f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T349*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T349f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_SELECT].resized_area */
T0* T349f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T349c4(a1);
	t1 = (((T349*)(C))->z1);
	T349f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_SELECT].copy_data */
void T349f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T349f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T349*)(a1))->z2[l1]);
			((T349*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_SELECT].move_data */
void T349f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T349f8(C, a1, a2, a3);
			} else {
				T349f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T349f8(C, a1, a2, a3);
			} else {
				T349f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_SELECT].overlapping_move */
void T349f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T349*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T349*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T349*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T349*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_SELECT].non_overlapping_move */
void T349f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T349*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T349*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_SELECT].make */
T0* T349c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T349)+a1*sizeof(T0*));
	*(T349*)C = GE_default349;
	((T349*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_item */
T0* T266f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T266*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_resize */
void T266f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T266f27(C));
	((T266*)(C))->a14 = (T65f1(GE_void(t1), ((T266*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_modulus */
T6 T266f29(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_capacity */
T6 T266f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_put */
void T266f44(T0* C, T0* a1, T6 a2)
{
	((T349*)(GE_void(((T266*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].search_position */
void T266f43(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T266*)(C))->a2 = (T266f21(C, ((T266*)(C))->a10));
		((T266*)(C))->a5 = ((T266*)(C))->a10;
		((T266*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T266*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T266*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T266f24(C, ((T266*)(C))->a2));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T266*)(C))->a5 = (T266f23(C, a1));
				l1 = (T266f21(C, ((T266*)(C))->a5));
				((T266*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T266f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T266*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T266f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T266*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T266*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T266f24(C, ((T266*)(C))->a2));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T266*)(C))->a5 = (T266f23(C, a1));
				l1 = (T266f21(C, ((T266*)(C))->a5));
				((T266*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T266f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T266*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T266f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T266*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].unset_found_item */
void T266f42(T0* C)
{
	((T266*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_SELECT_ELEMENT.make */
T0* T260c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T260));
	*(T260*)C = GE_default260;
	T260f10(C, a1, a2);
	((T260*)(C))->a1 = T265c3();
	t1 = (T260f5(C));
	t2 = (T260f6(C, t1));
	if (t2) {
		t1 = (T260f5(C));
		l1 = (T260f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T265f4(GE_void(((T260*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_SELECT.set_name */
void T265f4(T0* C, T0* a1)
{
	((T265*)(C))->a1 = a1;
}

/* GEANT_SELECT_ELEMENT.attribute_value */
T0* T260f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T260*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T260f7(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T260f7(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T260f8(C));
		t4 = (((T22*)(GE_void(((T260*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T260f8(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SELECT_ELEMENT.project_variables_resolver */
T0* T260f8(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_SELECT_ELEMENT.target_arguments_stack */
T0* T260f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_SELECT_ELEMENT.has_attribute */
T1 T260f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T260*)(C))->a3), a1));
	return R;
}

/* GEANT_SELECT_ELEMENT.target_attribute_name */
unsigned char ge149os8526 = '\0';
T0* ge149ov8526;
T0* T260f5(T0* C)
{
	T0* R = 0;
	if (ge149os8526) {
		return ge149ov8526;
	} else {
		ge149os8526 = '\1';
		ge149ov8526 = R;
	}
	R = GE_ms("target", 6);
	ge149ov8526 = R;
	return R;
}

/* GEANT_SELECT.make */
T0* T265c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T265));
	*(T265*)C = GE_default265;
	return C;
}

/* GEANT_SELECT_ELEMENT.interpreting_element_make */
void T260f10(T0* C, T0* a1, T0* a2)
{
	T260f11(C, a2);
	T260f12(C, a1);
}

/* GEANT_SELECT_ELEMENT.set_project */
void T260f12(T0* C, T0* a1)
{
	((T260*)(C))->a2 = a1;
}

/* GEANT_SELECT_ELEMENT.element_make */
void T260f11(T0* C, T0* a1)
{
	T260f13(C, a1);
}

/* GEANT_SELECT_ELEMENT.set_xml_element */
void T260f13(T0* C, T0* a1)
{
	((T260*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.select_element_name */
unsigned char ge141os8086 = '\0';
T0* ge141ov8086;
T0* T201f10(T0* C)
{
	T0* R = 0;
	if (ge141os8086) {
		return ge141ov8086;
	} else {
		ge141os8086 = '\1';
		ge141ov8086 = R;
	}
	R = GE_ms("select", 6);
	ge141ov8086 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].force_last */
void T264f39(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T264f42(C);
	T264f43(C, a2);
	t1 = ((((T264*)(C))->a2)!=((T6)(GE_int32(0))));
	if (t1) {
		T264f44(C, a1, ((T264*)(C))->a2);
	} else {
		l1 = ((T6)((((T264*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T264*)(C))->a4));
		if (t1) {
			t2 = (T264f22(C, l1));
			T264f45(C, t2);
			l2 = (T264f23(C, a2));
		} else {
			l2 = ((T264*)(C))->a5;
		}
		t2 = (T264f21(C, l2));
		T264f46(C, t2, l1);
		T264f47(C, l1, l2);
		T264f44(C, a1, l1);
		T264f48(C, a2, l1);
		((T264*)(C))->a3 = l1;
		((T264*)(C))->a6 = ((T6)((((T264*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_put */
void T264f48(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T264*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_put */
void T264f47(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T264*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_put */
void T264f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T264*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_item */
T6 T264f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T264*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].hash_position */
T6 T264f23(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T264*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T264*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T264*)(C))->a10)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T264*)(C))->a10)));
		}
	} else {
		R = ((T264*)(C))->a10;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].resize */
void T264f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T264f42(C);
	l1 = (T264f29(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T264f50(C, t1);
	l2 = ((T264*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T264f47(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T264*)(C))->a10 = l1;
	l2 = ((T264*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T264f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T264f24(C, l2));
			l3 = (T264f23(C, t3));
			t1 = (T264f21(C, l3));
			T264f46(C, t1, l2);
			T264f47(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f52(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f53(C, t1);
	((T264*)(C))->a4 = a1;
	((T264*)(C))->a2 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_resize */
void T264f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a13 = (T65f1(GE_void(t1), ((T264*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].special_integer_ */
T0* T264f27(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_resize */
void T264f52(T0* C, T6 a1)
{
	((T264*)(C))->a15 = (T66f1(GE_void(((T264*)(C))->a19), ((T264*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_resize */
void T264f51(T0* C, T6 a1)
{
	((T264*)(C))->a12 = (T345f1(GE_void(((T264*)(C))->a18), ((T264*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].resize */
T0* T345f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T343*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T343f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_REDEFINE].resized_area */
T0* T343f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T343c4(a1);
	t1 = (((T343*)(C))->z1);
	T343f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_REDEFINE].copy_data */
void T343f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T343f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T343*)(a1))->z2[l1]);
			((T343*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].move_data */
void T343f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T343f8(C, a1, a2, a3);
			} else {
				T343f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T343f8(C, a1, a2, a3);
			} else {
				T343f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].overlapping_move */
void T343f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T343*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T343*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T343*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T343*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].non_overlapping_move */
void T343f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T343*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T343*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_REDEFINE].make */
T0* T343c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T343)+a1*sizeof(T0*));
	*(T343*)C = GE_default343;
	((T343*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_item */
T0* T264f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T264*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_resize */
void T264f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a14 = (T65f1(GE_void(t1), ((T264*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_modulus */
T6 T264f29(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_capacity */
T6 T264f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_put */
void T264f44(T0* C, T0* a1, T6 a2)
{
	((T343*)(GE_void(((T264*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].search_position */
void T264f43(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T264*)(C))->a2 = (T264f21(C, ((T264*)(C))->a10));
		((T264*)(C))->a5 = ((T264*)(C))->a10;
		((T264*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T264*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T264*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T264f24(C, ((T264*)(C))->a2));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T264*)(C))->a5 = (T264f23(C, a1));
				l1 = (T264f21(C, ((T264*)(C))->a5));
				((T264*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T264f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T264*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T264f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T264*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T264*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T264f24(C, ((T264*)(C))->a2));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T264*)(C))->a5 = (T264f23(C, a1));
				l1 = (T264f21(C, ((T264*)(C))->a5));
				((T264*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T264f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T264*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T264f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T264*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].unset_found_item */
void T264f42(T0* C)
{
	((T264*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_REDEFINE_ELEMENT.make */
T0* T259c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T259));
	*(T259*)C = GE_default259;
	T259f10(C, a1, a2);
	((T259*)(C))->a1 = T263c3();
	t1 = (T259f5(C));
	t2 = (T259f6(C, t1));
	if (t2) {
		t1 = (T259f5(C));
		l1 = (T259f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T263f4(GE_void(((T259*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_REDEFINE.set_name */
void T263f4(T0* C, T0* a1)
{
	((T263*)(C))->a1 = a1;
}

/* GEANT_REDEFINE_ELEMENT.attribute_value */
T0* T259f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T259*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T259f7(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T259f7(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T259f8(C));
		t4 = (((T22*)(GE_void(((T259*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T259f8(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_REDEFINE_ELEMENT.project_variables_resolver */
T0* T259f8(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_REDEFINE_ELEMENT.target_arguments_stack */
T0* T259f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_REDEFINE_ELEMENT.has_attribute */
T1 T259f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T259*)(C))->a3), a1));
	return R;
}

/* GEANT_REDEFINE_ELEMENT.target_attribute_name */
unsigned char ge145os8522 = '\0';
T0* ge145ov8522;
T0* T259f5(T0* C)
{
	T0* R = 0;
	if (ge145os8522) {
		return ge145ov8522;
	} else {
		ge145os8522 = '\1';
		ge145ov8522 = R;
	}
	R = GE_ms("target", 6);
	ge145ov8522 = R;
	return R;
}

/* GEANT_REDEFINE.make */
T0* T263c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T263));
	*(T263*)C = GE_default263;
	return C;
}

/* GEANT_REDEFINE_ELEMENT.interpreting_element_make */
void T259f10(T0* C, T0* a1, T0* a2)
{
	T259f11(C, a2);
	T259f12(C, a1);
}

/* GEANT_REDEFINE_ELEMENT.set_project */
void T259f12(T0* C, T0* a1)
{
	((T259*)(C))->a2 = a1;
}

/* GEANT_REDEFINE_ELEMENT.element_make */
void T259f11(T0* C, T0* a1)
{
	T259f13(C, a1);
}

/* GEANT_REDEFINE_ELEMENT.set_xml_element */
void T259f13(T0* C, T0* a1)
{
	((T259*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.redefine_element_name */
unsigned char ge141os8085 = '\0';
T0* ge141ov8085;
T0* T201f9(T0* C)
{
	T0* R = 0;
	if (ge141os8085) {
		return ge141ov8085;
	} else {
		ge141os8085 = '\1';
		ge141ov8085 = R;
	}
	R = GE_ms("redefine", 8);
	ge141ov8085 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].force_last */
void T262f40(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T262f44(C);
	T262f42(C, a2);
	t1 = ((((T262*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T262f45(C, a1, ((T262*)(C))->a1);
	} else {
		l1 = ((T6)((((T262*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T262*)(C))->a4));
		if (t1) {
			t2 = (T262f30(C, l1));
			T262f46(C, t2);
			l2 = (T262f22(C, a2));
		} else {
			l2 = ((T262*)(C))->a5;
		}
		t2 = (T262f24(C, l2));
		T262f47(C, t2, l1);
		T262f48(C, l1, l2);
		T262f45(C, a1, l1);
		T262f49(C, a2, l1);
		((T262*)(C))->a3 = l1;
		((T262*)(C))->a6 = ((T6)((((T262*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_put */
void T262f49(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T262*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_put */
void T262f48(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T262*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_put */
void T262f47(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T262*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_item */
T6 T262f24(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T262*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].hash_position */
T6 T262f22(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t1 = ((((T262*)(C))->a20)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(((T262*)(C))->a20), a1, (T6)0));
			R = ((T6)((t2)%(((T262*)(C))->a9)));
		} else {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T195f15(a1)));
			R = ((T6)((t2)%(((T262*)(C))->a9)));
		}
	} else {
		R = ((T262*)(C))->a9;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].resize */
void T262f46(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T262f44(C);
	l1 = (T262f31(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T262f51(C, t1);
	l2 = ((T262*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T262f48(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T262*)(C))->a9 = l1;
	l2 = ((T262*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T262f26(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T262f25(C, l2));
			l3 = (T262f22(C, t3));
			t1 = (T262f24(C, l3));
			T262f47(C, t1, l2);
			T262f48(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f52(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f53(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f54(C, t1);
	((T262*)(C))->a4 = a1;
	((T262*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_resize */
void T262f54(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f28(C));
	((T262*)(C))->a13 = (T65f1(GE_void(t1), ((T262*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].special_integer_ */
T0* T262f28(T0* C)
{
	T0* R = 0;
	if (ge172os2089) {
		return ge172ov2089;
	} else {
		ge172os2089 = '\1';
		ge172ov2089 = R;
	}
	R = T65c4();
	ge172ov2089 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_resize */
void T262f53(T0* C, T6 a1)
{
	((T262*)(C))->a15 = (T66f1(GE_void(((T262*)(C))->a19), ((T262*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_resize */
void T262f52(T0* C, T6 a1)
{
	((T262*)(C))->a12 = (T339f1(GE_void(((T262*)(C))->a18), ((T262*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].resize */
T0* T339f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T337*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T337f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_RENAME].resized_area */
T0* T337f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T337c4(a1);
	t1 = (((T337*)(C))->z1);
	T337f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_RENAME].copy_data */
void T337f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T337f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T337*)(a1))->z2[l1]);
			((T337*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_RENAME].move_data */
void T337f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T337f8(C, a1, a2, a3);
			} else {
				T337f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T337f8(C, a1, a2, a3);
			} else {
				T337f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_RENAME].overlapping_move */
void T337f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T337*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T337*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T337*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T337*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_RENAME].non_overlapping_move */
void T337f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T337*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T337*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_RENAME].make */
T0* T337c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T337)+a1*sizeof(T0*));
	*(T337*)C = GE_default337;
	((T337*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_item */
T0* T262f25(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T262*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_resize */
void T262f51(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f28(C));
	((T262*)(C))->a14 = (T65f1(GE_void(t1), ((T262*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_modulus */
T6 T262f31(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_capacity */
T6 T262f30(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_put */
void T262f45(T0* C, T0* a1, T6 a2)
{
	((T337*)(GE_void(((T262*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].search_position */
void T262f42(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T262*)(C))->a1 = (T262f24(C, ((T262*)(C))->a9));
		((T262*)(C))->a5 = ((T262*)(C))->a9;
		((T262*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T262*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T262*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T262f25(C, ((T262*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T262*)(C))->a5 = (T262f22(C, a1));
				l1 = (T262f24(C, ((T262*)(C))->a5));
				((T262*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T262f25(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T262*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T262f26(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T262*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T262*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T262f25(C, ((T262*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T262*)(C))->a5 = (T262f22(C, a1));
				l1 = (T262f24(C, ((T262*)(C))->a5));
				((T262*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T262f25(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T262*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T262f26(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T262*)(C))->a10 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].unset_found_item */
void T262f44(T0* C)
{
	((T262*)(C))->a11 = (T6)(GE_int32(0));
}

/* GEANT_PARENT_ELEMENT.exit_application */
void T201f20(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T201f11(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T201f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T201f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T201f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T201f12(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PARENT_ELEMENT.exceptions */
T0* T201f12(T0* C)
{
	T0* R = 0;
	if (ge222os1720) {
		return ge222ov1720;
	} else {
		ge222os1720 = '\1';
		ge222ov1720 = R;
	}
	R = T48c1();
	ge222ov1720 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.std */
T0* T201f11(T0* C)
{
	T0* R = 0;
	if (ge204os1722) {
		return ge204ov1722;
	} else {
		ge204os1722 = '\1';
		ge204ov1722 = R;
	}
	R = T46c3();
	ge204ov1722 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].has */
T1 T262f29(T0* C, T0* a1)
{
	T1 R = 0;
	T262f42(C, a1);
	R = ((((T262*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_RENAME_ELEMENT.make */
T0* T258c10(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T258));
	*(T258*)C = GE_default258;
	T258f11(C, a1, a2);
	((T258*)(C))->a1 = T261c5();
	t1 = (T258f6(C));
	t2 = (T258f7(C, t1));
	if (t2) {
		t1 = (T258f6(C));
		l1 = (T258f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T261f6(GE_void(((T258*)(C))->a1), l1);
		}
	}
	t1 = (T258f5(C));
	t2 = (T258f7(C, t1));
	if (t2) {
		t1 = (T258f5(C));
		l1 = (T258f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T261f7(GE_void(((T258*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_RENAME.set_new_name */
void T261f7(T0* C, T0* a1)
{
	((T261*)(C))->a2 = a1;
}

/* GEANT_RENAME_ELEMENT.as_attribute_name */
unsigned char ge147os8518 = '\0';
T0* ge147ov8518;
T0* T258f5(T0* C)
{
	T0* R = 0;
	if (ge147os8518) {
		return ge147ov8518;
	} else {
		ge147os8518 = '\1';
		ge147ov8518 = R;
	}
	R = GE_ms("as", 2);
	ge147ov8518 = R;
	return R;
}

/* GEANT_RENAME.set_original_name */
void T261f6(T0* C, T0* a1)
{
	((T261*)(C))->a1 = a1;
}

/* GEANT_RENAME_ELEMENT.attribute_value */
T0* T258f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T258*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T258f8(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T258f8(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T258f9(C));
		t4 = (((T22*)(GE_void(((T258*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T258f9(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_RENAME_ELEMENT.project_variables_resolver */
T0* T258f9(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_RENAME_ELEMENT.target_arguments_stack */
T0* T258f8(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_RENAME_ELEMENT.has_attribute */
T1 T258f7(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T258*)(C))->a3), a1));
	return R;
}

/* GEANT_RENAME_ELEMENT.target_attribute_name */
unsigned char ge147os8517 = '\0';
T0* ge147ov8517;
T0* T258f6(T0* C)
{
	T0* R = 0;
	if (ge147os8517) {
		return ge147ov8517;
	} else {
		ge147os8517 = '\1';
		ge147ov8517 = R;
	}
	R = GE_ms("target", 6);
	ge147ov8517 = R;
	return R;
}

/* GEANT_RENAME.make */
T0* T261c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T261));
	*(T261*)C = GE_default261;
	return C;
}

/* GEANT_RENAME_ELEMENT.interpreting_element_make */
void T258f11(T0* C, T0* a1, T0* a2)
{
	T258f12(C, a2);
	T258f13(C, a1);
}

/* GEANT_RENAME_ELEMENT.set_project */
void T258f13(T0* C, T0* a1)
{
	((T258*)(C))->a2 = a1;
}

/* GEANT_RENAME_ELEMENT.element_make */
void T258f12(T0* C, T0* a1)
{
	T258f14(C, a1);
}

/* GEANT_RENAME_ELEMENT.set_xml_element */
void T258f14(T0* C, T0* a1)
{
	((T258*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.elements_by_name */
T0* T201f8(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T201*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T201f14(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PARENT_ELEMENT.string_ */
T0* T201f14(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.rename_element_name */
unsigned char ge141os8084 = '\0';
T0* ge141ov8084;
T0* T201f7(T0* C)
{
	T0* R = 0;
	if (ge141os8084) {
		return ge141ov8084;
	} else {
		ge141os8084 = '\1';
		ge141ov8084 = R;
	}
	R = GE_ms("rename", 6);
	ge141ov8084 = R;
	return R;
}

/* GEANT_PARENT.set_parent_project */
void T183f13(T0* C, T0* a1)
{
	((T183*)(C))->a2 = a1;
}

/* GEANT_PARENT_ELEMENT.attribute_value */
T0* T201f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T201*)(C))->a3), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T201f15(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T201f15(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T201f16(C));
		t4 = (((T22*)(GE_void(((T201*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T201f16(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_PARENT_ELEMENT.project_variables_resolver */
T0* T201f16(T0* C)
{
	T0* R = 0;
	if (ge61os1712) {
		return ge61ov1712;
	} else {
		ge61os1712 = '\1';
		ge61ov1712 = R;
	}
	R = T58c16();
	ge61ov1712 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.target_arguments_stack */
T0* T201f15(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1713) {
		return ge61ov1713;
	} else {
		ge61os1713 = '\1';
		ge61ov1713 = R;
	}
	l1 = T101c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1713 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.has_attribute */
T1 T201f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T201*)(C))->a3), a1));
	return R;
}

/* GEANT_PARENT_ELEMENT.location_attribute_name */
unsigned char ge141os8082 = '\0';
T0* ge141ov8082;
T0* T201f5(T0* C)
{
	T0* R = 0;
	if (ge141os8082) {
		return ge141ov8082;
	} else {
		ge141os8082 = '\1';
		ge141ov8082 = R;
	}
	R = GE_ms("location", 8);
	ge141ov8082 = R;
	return R;
}

/* GEANT_PARENT.make */
T0* T183c12(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T183));
	*(T183*)C = GE_default183;
	((T183*)(C))->a5 = a1;
	l1 = T59c3();
	((T183*)(C))->a1 = T262c39((T6)(GE_int32(10)));
	T262f41(GE_void(((T183*)(C))->a1), l1);
	((T183*)(C))->a3 = T264c38((T6)(GE_int32(10)));
	T264f40(GE_void(((T183*)(C))->a3), l1);
	((T183*)(C))->a4 = T266c38((T6)(GE_int32(10)));
	T266f40(GE_void(((T183*)(C))->a4), l1);
	((T183*)(C))->a6 = T31c44((T6)(GE_int32(10)));
	T31f45(GE_void(((T183*)(C))->a6), l1);
	((T183*)(C))->a7 = T31c44((T6)(GE_int32(5)));
	T31f45(GE_void(((T183*)(C))->a7), l1);
	((T183*)(C))->a8 = T31c44((T6)(GE_int32(5)));
	T31f45(GE_void(((T183*)(C))->a8), l1);
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].set_key_equality_tester */
void T266f40(T0* C, T0* a1)
{
	((T266*)(C))->a7 = a1;
	T347f6(GE_void(((T266*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].internal_set_equality_tester */
void T347f6(T0* C, T0* a1)
{
	((T347*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_map_equal */
T0* T266c38(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T266));
	*(T266*)C = GE_default266;
	((T266*)(C))->a1 = T346c1();
	T266f41(C, a1, ((T266*)(C))->a1, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_with_equality_testers */
void T266f41(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T266*)(C))->a1 = a2;
	((T266*)(C))->a7 = a3;
	T266f49(C, a1);
	((T266*)(C))->a8 = T347c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].make */
T0* T347c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T347));
	*(T347*)C = GE_default347;
	((T347*)(C))->a1 = a1;
	((T347*)(C))->a2 = (((T266*)(GE_void(((T347*)(C))->a1)))->a7);
	((T347*)(C))->a3 = (T347f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].new_cursor */
T0* T347f4(T0* C)
{
	T0* R = 0;
	R = T399c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_SELECT, STRING_8].make */
T0* T399c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T399));
	*(T399*)C = GE_default399;
	((T399*)(C))->a1 = a1;
	t1 = (((T347*)(GE_void(((T399*)(C))->a1)))->a1);
	((T399*)(C))->a2 = (T266f26(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_sparse_container */
void T266f49(T0* C, T6 a1)
{
	T6 t1;
	((T266*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T266f56(C, t1);
	((T266*)(C))->a10 = (T266f29(C, a1));
	t1 = ((T6)((((T266*)(C))->a10)+((T6)(GE_int32(1)))));
	T266f57(C, t1);
	((T266*)(C))->a3 = (T6)(GE_int32(0));
	((T266*)(C))->a16 = (T6)(GE_int32(0));
	((T266*)(C))->a2 = (T6)(GE_int32(0));
	T266f42(C);
	((T266*)(C))->a17 = (T266f26(C));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_slots */
void T266f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T266f27(C));
	((T266*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_clashes */
void T266f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T266f27(C));
	((T266*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_key_storage */
void T266f55(T0* C, T6 a1)
{
	((T266*)(C))->a19 = T66c3();
	((T266*)(C))->a15 = (T66f2(GE_void(((T266*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_item_storage */
void T266f54(T0* C, T6 a1)
{
	((T266*)(C))->a18 = T351c3();
	((T266*)(C))->a12 = (T351f2(GE_void(((T266*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].make */
T0* T351f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T400c2(a1);
	R = (((T400*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_SELECT].make_area */
T0* T400c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T400));
	*(T400*)C = GE_default400;
	((T400*)(C))->a1 = T349c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].default_create */
T0* T351c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T351));
	*(T351*)C = GE_default351;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_SELECT].default_create */
T0* T346c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T346));
	*(T346*)C = GE_default346;
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].set_key_equality_tester */
void T264f40(T0* C, T0* a1)
{
	((T264*)(C))->a7 = a1;
	T341f6(GE_void(((T264*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].internal_set_equality_tester */
void T341f6(T0* C, T0* a1)
{
	((T341*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_map_equal */
T0* T264c38(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T264));
	*(T264*)C = GE_default264;
	((T264*)(C))->a1 = T340c1();
	T264f41(C, a1, ((T264*)(C))->a1, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_with_equality_testers */
void T264f41(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T264*)(C))->a1 = a2;
	((T264*)(C))->a7 = a3;
	T264f49(C, a1);
	((T264*)(C))->a8 = T341c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].make */
T0* T341c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T341));
	*(T341*)C = GE_default341;
	((T341*)(C))->a1 = a1;
	((T341*)(C))->a2 = (((T264*)(GE_void(((T341*)(C))->a1)))->a7);
	((T341*)(C))->a3 = (T341f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].new_cursor */
T0* T341f4(T0* C)
{
	T0* R = 0;
	R = T397c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_REDEFINE, STRING_8].make */
T0* T397c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T397));
	*(T397*)C = GE_default397;
	((T397*)(C))->a1 = a1;
	t1 = (((T341*)(GE_void(((T397*)(C))->a1)))->a1);
	((T397*)(C))->a2 = (T264f26(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_sparse_container */
void T264f49(T0* C, T6 a1)
{
	T6 t1;
	((T264*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f56(C, t1);
	((T264*)(C))->a10 = (T264f29(C, a1));
	t1 = ((T6)((((T264*)(C))->a10)+((T6)(GE_int32(1)))));
	T264f57(C, t1);
	((T264*)(C))->a3 = (T6)(GE_int32(0));
	((T264*)(C))->a16 = (T6)(GE_int32(0));
	((T264*)(C))->a2 = (T6)(GE_int32(0));
	T264f42(C);
	((T264*)(C))->a17 = (T264f26(C));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_slots */
void T264f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_clashes */
void T264f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_key_storage */
void T264f55(T0* C, T6 a1)
{
	((T264*)(C))->a19 = T66c3();
	((T264*)(C))->a15 = (T66f2(GE_void(((T264*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_item_storage */
void T264f54(T0* C, T6 a1)
{
	((T264*)(C))->a18 = T345c3();
	((T264*)(C))->a12 = (T345f2(GE_void(((T264*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].make */
T0* T345f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T398c2(a1);
	R = (((T398*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_REDEFINE].make_area */
T0* T398c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T398));
	*(T398*)C = GE_default398;
	((T398*)(C))->a1 = T343c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].default_create */
T0* T345c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T345));
	*(T345*)C = GE_default345;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_REDEFINE].default_create */
T0* T340c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T340));
	*(T340*)C = GE_default340;
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].set_key_equality_tester */
void T262f41(T0* C, T0* a1)
{
	((T262*)(C))->a7 = a1;
	T335f6(GE_void(((T262*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].internal_set_equality_tester */
void T335f6(T0* C, T0* a1)
{
	((T335*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_map_equal */
T0* T262c39(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T262));
	*(T262*)C = GE_default262;
	((T262*)(C))->a2 = T334c1();
	T262f43(C, a1, ((T262*)(C))->a2, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_with_equality_testers */
void T262f43(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T262*)(C))->a2 = a2;
	((T262*)(C))->a7 = a3;
	T262f50(C, a1);
	((T262*)(C))->a8 = T335c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].make */
T0* T335c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T335));
	*(T335*)C = GE_default335;
	((T335*)(C))->a1 = a1;
	((T335*)(C))->a2 = (((T262*)(GE_void(((T335*)(C))->a1)))->a7);
	((T335*)(C))->a3 = (T335f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].new_cursor */
T0* T335f4(T0* C)
{
	T0* R = 0;
	R = T395c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_RENAME, STRING_8].make */
T0* T395c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T395));
	*(T395*)C = GE_default395;
	((T395*)(C))->a1 = a1;
	t1 = (((T335*)(GE_void(((T395*)(C))->a1)))->a1);
	((T395*)(C))->a2 = (T262f27(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_sparse_container */
void T262f50(T0* C, T6 a1)
{
	T6 t1;
	((T262*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f56(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f57(C, t1);
	((T262*)(C))->a9 = (T262f31(C, a1));
	t1 = ((T6)((((T262*)(C))->a9)+((T6)(GE_int32(1)))));
	T262f58(C, t1);
	((T262*)(C))->a3 = (T6)(GE_int32(0));
	((T262*)(C))->a16 = (T6)(GE_int32(0));
	((T262*)(C))->a1 = (T6)(GE_int32(0));
	T262f44(C);
	((T262*)(C))->a17 = (T262f27(C));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_slots */
void T262f58(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f28(C));
	((T262*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_clashes */
void T262f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f28(C));
	((T262*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_key_storage */
void T262f56(T0* C, T6 a1)
{
	((T262*)(C))->a19 = T66c3();
	((T262*)(C))->a15 = (T66f2(GE_void(((T262*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_item_storage */
void T262f55(T0* C, T6 a1)
{
	((T262*)(C))->a18 = T339c3();
	((T262*)(C))->a12 = (T339f2(GE_void(((T262*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].make */
T0* T339f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T396c2(a1);
	R = (((T396*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_RENAME].make_area */
T0* T396c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T396));
	*(T396*)C = GE_default396;
	((T396*)(C))->a1 = T337c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].default_create */
T0* T339c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T339));
	*(T339*)C = GE_default339;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_RENAME].default_create */
T0* T334c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T334));
	*(T334*)C = GE_default334;
	return C;
}

/* GEANT_PARENT_ELEMENT.interpreting_element_make */
void T201f19(T0* C, T0* a1, T0* a2)
{
	T201f21(C, a2);
	T201f22(C, a1);
}

/* GEANT_PARENT_ELEMENT.set_project */
void T201f22(T0* C, T0* a1)
{
	((T201*)(C))->a2 = a1;
}

/* GEANT_PARENT_ELEMENT.element_make */
void T201f21(T0* C, T0* a1)
{
	T201f23(C, a1);
}

/* GEANT_PARENT_ELEMENT.set_xml_element */
void T201f23(T0* C, T0* a1)
{
	((T201*)(C))->a3 = a1;
}

/* GEANT_INHERIT_ELEMENT.elements_by_name */
T0* T118f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T118*)(C))->a3)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T118f8(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_INHERIT_ELEMENT.string_ */
T0* T118f8(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_INHERIT_ELEMENT.parent_element_name */
unsigned char ge135os6680 = '\0';
T0* ge135ov6680;
T0* T118f7(T0* C)
{
	T0* R = 0;
	if (ge135os6680) {
		return ge135ov6680;
	} else {
		ge135os6680 = '\1';
		ge135ov6680 = R;
	}
	R = GE_ms("parent", 6);
	ge135ov6680 = R;
	return R;
}

/* GEANT_INHERIT.make */
T0* T119c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T119));
	*(T119*)C = GE_default119;
	((T119*)(C))->a2 = a1;
	((T119*)(C))->a1 = T185c16((T6)(GE_int32(5)));
	return C;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].make */
T0* T185c16(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T185));
	*(T185*)C = GE_default185;
	((T185*)(C))->a1 = T251c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T185*)(C))->a2 = (T251f1(GE_void(((T185*)(C))->a1), t1));
	((T185*)(C))->a3 = a1;
	((T185*)(C))->a4 = (T185f7(C));
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].make */
T0* T251f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T330c2(a1);
	R = (((T330*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_PARENT].make_area */
T0* T330c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T330));
	*(T330*)C = GE_default330;
	((T330*)(C))->a1 = T252c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].default_create */
T0* T251c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T251));
	*(T251*)C = GE_default251;
	return C;
}

/* GEANT_INHERIT_ELEMENT.interpreting_element_make */
void T118f11(T0* C, T0* a1, T0* a2)
{
	T118f13(C, a2);
	T118f14(C, a1);
}

/* GEANT_INHERIT_ELEMENT.set_project */
void T118f14(T0* C, T0* a1)
{
	((T118*)(C))->a2 = a1;
}

/* GEANT_INHERIT_ELEMENT.element_make */
void T118f13(T0* C, T0* a1)
{
	T118f15(C, a1);
}

/* GEANT_INHERIT_ELEMENT.set_xml_element */
void T118f15(T0* C, T0* a1)
{
	((T118*)(C))->a3 = a1;
}

/* GEANT_PROJECT_ELEMENT.inherit_element_name */
unsigned char ge142os2531 = '\0';
T0* ge142ov2531;
T0* T30f16(T0* C)
{
	T0* R = 0;
	if (ge142os2531) {
		return ge142ov2531;
	} else {
		ge142os2531 = '\1';
		ge142ov2531 = R;
	}
	R = GE_ms("inherit", 7);
	ge142ov2531 = R;
	return R;
}

/* GEANT_PROJECT.set_inherit_clause */
void T22f34(T0* C, T0* a1)
{
	((T22*)(C))->a10 = a1;
}

/* GEANT_INHERIT_ELEMENT.make_old */
T0* T118c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	C = (T0*)GE_alloc(sizeof(T118));
	*(T118*)C = GE_default118;
	T118f11(C, a1, a2);
	((T118*)(C))->a1 = T119c6(((T118*)(C))->a2);
	l1 = T201c17(((T118*)(C))->a2, a2);
	t1 = (((T201*)(GE_void(l1)))->a1);
	t2 = (T183f9(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)1,
GE_ms("ERROR in \'parent\' clause", 24));
		T118f12(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (((T119*)(GE_void(((T118*)(C))->a1)))->a1);
	t3 = (((T201*)(GE_void(l1)))->a1);
	T185f17(GE_void(t1), t3);
	return C;
}

/* GEANT_PARENT_ELEMENT.make_old */
T0* T201c17(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T201));
	*(T201*)C = GE_default201;
	T201f19(C, a1, a2);
	((T201*)(C))->a1 = T183c12(a1);
	t1 = (T201f4(C));
	l1 = (T201f13(C, t1));
	t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T195*)(l1))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l2 = T23c9(l1);
		t1 = (((T22*)(GE_void(a1)))->a7);
		t4 = (((T22*)(GE_void(a1)))->a9);
		T23f10(GE_void(l2), t1, t4);
		t1 = (((T23*)(GE_void(l2)))->a1);
		l3 = (((T30*)(GE_void(t1)))->a1);
		T183f13(GE_void(((T201*)(C))->a1), l3);
		T22f25(GE_void(l3));
	} else {
		t1 = (((T22*)(GE_void(((T201*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' invalid inherit clause.", 25));
		T201f20(C, (T6)(GE_int32(1)), t1);
	}
	return C;
}

/* GEANT_PARENT_ELEMENT.inherit_attribute_name */
unsigned char ge141os8083 = '\0';
T0* ge141ov8083;
T0* T201f4(T0* C)
{
	T0* R = 0;
	if (ge141os8083) {
		return ge141ov8083;
	} else {
		ge141os8083 = '\1';
		ge141ov8083 = R;
	}
	R = GE_ms("inherit", 7);
	ge141ov8083 = R;
	return R;
}

/* GEANT_PROJECT.set_old_inherit */
void T22f33(T0* C, T1 a1)
{
	((T22*)(C))->a12 = a1;
}

/* GEANT_PROJECT_ELEMENT.has_inherit_element */
T1 T30f15(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	t1 = (T30f16(C));
	l1 = (T97f16(GE_void(((T30*)(C))->a2), t1));
	R = ((l1)!=(EIF_VOID));
	return R;
}

/* GEANT_PROJECT_ELEMENT.inherit_attribute_name */
unsigned char ge142os2530 = '\0';
T0* ge142ov2530;
T0* T30f14(T0* C)
{
	T0* R = 0;
	if (ge142os2530) {
		return ge142ov2530;
	} else {
		ge142os2530 = '\1';
		ge142ov2530 = R;
	}
	R = GE_ms("inherit", 7);
	ge142ov2530 = R;
	return R;
}

/* GEANT_PROJECT.set_targets */
void T22f32(T0* C, T0* a1)
{
	((T22*)(C))->a1 = a1;
}

/* GEANT_TARGET.make */
T0* T26c80(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T26));
	*(T26*)C = GE_default26;
	T26f80p1(C, a1, a2);
	t1 = (T26f12(C));
	t2 = (T97f20(GE_void(a2), t1));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)2,
GE_ms("Element \'target\' without attribute \'name\' found.", 48),
GE_ms(" Make sure each target has an associated attribute \'name\'.", 58));
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T26f12(C));
	t1 = (T97f21(GE_void(((T26*)(C))->a2), t1));
	t1 = (((T190*)(GE_void(t1)))->a3);
	T26f82(C, t1);
	t1 = (T26f16(C));
	l3 = (T97f16(GE_void(a2), t1));
	t2 = ((l3)!=(EIF_VOID));
	if (t2) {
		t1 = (T97f26(GE_void(l3)));
		T26f83(C, t1);
	}
	t1 = (T26f19(C));
	l2 = (T97f16(GE_void(a2), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		t1 = (T97f26(GE_void(l2)));
		T26f84(C, t1);
	} else {
		T26f84(C, GE_ms("", 0));
	}
	t1 = (T26f20(C));
	t2 = (T97f20(GE_void(a2), t1));
	if (t2) {
		t1 = (T26f20(C));
		t1 = (T97f21(GE_void(a2), t1));
		t1 = (((T190*)(GE_void(t1)))->a3);
		l4 = (T26f21(C, t1, (T2)(',')));
	} else {
		l4 = T71c23((T6)(GE_int32(1)));
		t1 = (T26f22(C));
		T71f29(GE_void(l4), t1, (T6)(GE_int32(1)));
	}
	l1 = T59c3();
	T71f37(GE_void(l4), l1);
	T26f85(C, l4);
	t1 = (T26f31(C));
	t2 = (T26f35(C, t1));
	if (t2) {
		t1 = (T26f31(C));
		t2 = (T26f37(C, t1));
		T26f86(C, t2);
	}
	((T26*)(C))->a3 = (T26f13(C));
	t1 = (T26f14(C));
	l5 = (T26f15(C, t1));
	t3 = (((T116*)(GE_void(l5)))->a1);
	t2 = ((t3)!=((T6)(GE_int32(0))));
	if (t2) {
		((T26*)(C))->a3 = T34c46();
		l7 = (T116f5(GE_void(l5)));
		T117f8(GE_void(l7));
		t2 = (((T117*)(GE_void(l7)))->a1);
		while (!(t2)) {
			t1 = (T117f6(GE_void(l7)));
			l6 = T188c7(t1);
			t2 = (T188f6(GE_void(l6)));
			if (t2) {
				t1 = (T188f2(GE_void(l6)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T195*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (T188f2(GE_void(l6)));
				T34f67(GE_void(((T26*)(C))->a3), GE_ms("dummy_value", 11), t1);
				t1 = (T188f2(GE_void(l6)));
				t1 = GE_ma33((T6)3,
GE_ms("found formal argument \'", 23),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T26*)(C))->a4), t1);
			}
			T117f9(GE_void(l7));
			t2 = (((T117*)(GE_void(l7)))->a1);
		}
	}
	return C;
}

/* GEANT_ARGUMENT_ELEMENT.name */
T0* T188f2(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T188f3(C));
	R = (T188f5(C, t1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.attribute_value */
T0* T188f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T97f21(GE_void(((T188*)(C))->a1), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.name_attribute_name */
T0* T188f3(T0* C)
{
	T0* R = 0;
	if (ge139os7792) {
		return ge139ov7792;
	} else {
		ge139os7792 = '\1';
		ge139ov7792 = R;
	}
	R = GE_ms("name", 4);
	ge139ov7792 = R;
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.has_name */
T1 T188f6(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T188f3(C));
	R = (T188f4(C, t1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.has_attribute */
T1 T188f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T97f20(GE_void(((T188*)(C))->a1), a1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.make */
T0* T188c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T188));
	*(T188*)C = GE_default188;
	T188f8(C, a1);
	return C;
}

/* GEANT_ARGUMENT_ELEMENT.set_xml_element */
void T188f8(T0* C, T0* a1)
{
	((T188*)(C))->a1 = a1;
}

/* GEANT_TARGET.elements_by_name */
T0* T26f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T26*)(C))->a2)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T26f24(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_TARGET.empty_argument_variables */
unsigned char ge61os1708 = '\0';
T0* ge61ov1708;
T0* T26f13(T0* C)
{
	T0* R = 0;
	if (ge61os1708) {
		return ge61ov1708;
	} else {
		ge61os1708 = '\1';
		ge61ov1708 = R;
	}
	R = T34c46();
	ge61ov1708 = R;
	return R;
}

/* GEANT_TARGET.set_execute_once */
void T26f86(T0* C, T1 a1)
{
	((T26*)(C))->a8 = a1;
}

/* GEANT_TARGET.boolean_value */
T1 T26f37(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T26f23(C, a1));
	t1 = (T26f24(C));
	t2 = (T26f25(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T26f24(C));
		t2 = (T26f26(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_TARGET.false_attribute_value */
T0* T26f26(T0* C)
{
	T0* R = 0;
	if (ge129os2397) {
		return ge129ov2397;
	} else {
		ge129os2397 = '\1';
		ge129ov2397 = R;
	}
	R = GE_ms("false", 5);
	ge129ov2397 = R;
	return R;
}

/* GEANT_TARGET.true_attribute_value */
T0* T26f25(T0* C)
{
	T0* R = 0;
	if (ge129os2396) {
		return ge129ov2396;
	} else {
		ge129os2396 = '\1';
		ge129ov2396 = R;
	}
	R = GE_ms("true", 4);
	ge129ov2396 = R;
	return R;
}

/* GEANT_TARGET.attribute_value */
T0* T26f23(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T97f21(GE_void(((T26*)(C))->a2), a1));
	R = (((T190*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T195*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T244c7();
		t1 = (T26f27(C));
		t2 = (((T101*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T245c4();
			T244f8(GE_void(l1), l2);
			t1 = (T26f27(C));
			t1 = (T101f5(GE_void(t1)));
			T245f5(GE_void(l2), t1);
			R = (T244f5(GE_void(l1), R));
		}
		t1 = (T26f28(C));
		t4 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T26f28(C));
		T244f8(GE_void(l1), t1);
		R = (T244f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_TARGET.once_attribute_name */
unsigned char ge63os2374 = '\0';
T0* ge63ov2374;
T0* T26f31(T0* C)
{
	T0* R = 0;
	if (ge63os2374) {
		return ge63ov2374;
	} else {
		ge63os2374 = '\1';
		ge63ov2374 = R;
	}
	R = GE_ms("once", 4);
	ge63ov2374 = R;
	return R;
}

/* GEANT_TARGET.set_exports */
void T26f85(T0* C, T0* a1)
{
	((T26*)(C))->a7 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].set_equality_tester */
void T71f37(T0* C, T0* a1)
{
	((T71*)(C))->a6 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].put */
void T71f29(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T71f32(C, a1);
	} else {
		T71f33(C, a2, (T6)(GE_int32(1)));
		T71f34(C, a2, (T6)(GE_int32(1)));
		((T32*)(GE_void(((T71*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [STRING_8].move_cursors_right */
void T71f34(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T71*)(C))->a3;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T72*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T72f10(GE_void(l1), t2);
		}
		l1 = (((T72*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [STRING_8].set_position */
void T72f10(T0* C, T6 a1)
{
	((T72*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].move_right */
void T71f33(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T71*)(C))->a1;
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T32*)(GE_void(((T71*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* DS_ARRAYED_LIST [STRING_8].put_last */
void T71f32(T0* C, T0* a1)
{
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	((T32*)(GE_void(((T71*)(C))->a2)))->z2[((T71*)(C))->a1] = (a1);
}

/* GEANT_TARGET.export_attribute_name */
unsigned char ge63os2373 = '\0';
T0* ge63ov2373;
T0* T26f20(T0* C)
{
	T0* R = 0;
	if (ge63os2373) {
		return ge63ov2373;
	} else {
		ge63os2373 = '\1';
		ge63ov2373 = R;
	}
	R = GE_ms("export", 6);
	ge63ov2373 = R;
	return R;
}

/* GEANT_TARGET.set_description */
void T26f84(T0* C, T0* a1)
{
	((T26*)(C))->a6 = a1;
}

/* GEANT_TARGET.set_obsolete_message */
void T26f83(T0* C, T0* a1)
{
	((T26*)(C))->a5 = a1;
}

/* GEANT_TARGET.set_name */
void T26f82(T0* C, T0* a1)
{
	((T26*)(C))->a1 = a1;
}

/* GEANT_TARGET.name_attribute_name */
unsigned char ge63os2371 = '\0';
T0* ge63ov2371;
T0* T26f12(T0* C)
{
	T0* R = 0;
	if (ge63os2371) {
		return ge63ov2371;
	} else {
		ge63os2371 = '\1';
		ge63ov2371 = R;
	}
	R = GE_ms("name", 4);
	ge63ov2371 = R;
	return R;
}

/* GEANT_TARGET.make */
void T26f80p1(T0* C, T0* a1, T0* a2)
{
	T26f87(C, a2);
	T26f88(C, a1);
}

/* GEANT_TARGET.set_project */
void T26f88(T0* C, T0* a1)
{
	((T26*)(C))->a4 = a1;
}

/* GEANT_TARGET.element_make */
void T26f87(T0* C, T0* a1)
{
	T26f89(C, a1);
}

/* GEANT_TARGET.set_xml_element */
void T26f89(T0* C, T0* a1)
{
	((T26*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].set_key_equality_tester */
void T31f45(T0* C, T0* a1)
{
	((T31*)(C))->a3 = a1;
	T122f6(GE_void(((T31*)(C))->a4), a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_map */
T0* T31c44(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T31));
	*(T31*)C = GE_default31;
	T31f48(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_with_equality_testers */
void T31f48(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T31*)(C))->a11 = a2;
	((T31*)(C))->a3 = a3;
	T31f55(C, a1);
	((T31*)(C))->a4 = T122c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].make */
T0* T122c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T122));
	*(T122*)C = GE_default122;
	((T122*)(C))->a1 = a1;
	((T122*)(C))->a2 = (((T31*)(GE_void(((T122*)(C))->a1)))->a3);
	((T122*)(C))->a3 = (T122f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].new_cursor */
T0* T122f4(T0* C)
{
	T0* R = 0;
	R = T203c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_TARGET, STRING_8].make */
T0* T203c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T203));
	*(T203*)C = GE_default203;
	((T203*)(C))->a1 = a1;
	t1 = (((T122*)(GE_void(((T203*)(C))->a1)))->a1);
	((T203*)(C))->a2 = (T31f29(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_sparse_container */
void T31f55(T0* C, T6 a1)
{
	T6 t1;
	((T31*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f60(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f61(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f62(C, t1);
	((T31*)(C))->a9 = (T31f22(C, a1));
	t1 = ((T6)((((T31*)(C))->a9)+((T6)(GE_int32(1)))));
	T31f63(C, t1);
	((T31*)(C))->a5 = (T6)(GE_int32(0));
	((T31*)(C))->a16 = (T6)(GE_int32(0));
	((T31*)(C))->a1 = (T6)(GE_int32(0));
	T31f49(C);
	((T31*)(C))->a17 = (T31f29(C));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_slots */
void T31f63(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_clashes */
void T31f62(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_key_storage */
void T31f61(T0* C, T6 a1)
{
	((T31*)(C))->a19 = T66c3();
	((T31*)(C))->a15 = (T66f2(GE_void(((T31*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_item_storage */
void T31f60(T0* C, T6 a1)
{
	((T31*)(C))->a18 = T125c3();
	((T31*)(C))->a2 = (T125f2(GE_void(((T31*)(C))->a18), a1));
}

/* GEANT_PROJECT_ELEMENT.elements_by_name */
T0* T30f11(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T116c8();
	l1 = (T97f19(GE_void(((T30*)(C))->a2)));
	T191f10(GE_void(l1));
	t1 = (((T191*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T191f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 97:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T30f19(C));
			t3 = (((T97*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T116f9(GE_void(R), l2);
		}
		T191f11(GE_void(l1));
		t1 = (((T191*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PROJECT_ELEMENT.string_ */
T0* T30f19(T0* C)
{
	T0* R = 0;
	if (ge174os1718) {
		return ge174ov1718;
	} else {
		ge174os1718 = '\1';
		ge174ov1718 = R;
	}
	R = T76c19();
	ge174ov1718 = R;
	return R;
}

/* GEANT_PROJECT_ELEMENT.target_element_name */
unsigned char ge142os2533 = '\0';
T0* ge142ov2533;
T0* T30f10(T0* C)
{
