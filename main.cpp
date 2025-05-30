#include <windows.h>
#include <winnt.h>
#include <windef.h>
#include <stdio.h>
#include "../defs.h"

int main(int argc, const char** argv, const char** envp){
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // rdx
	int i10; // eax
	__int64 v6; // rax
	char v8; // [rsp+30h] [rbp-B98h]
	char v9; // [rsp+31h] [rbp-B97h]
	char v10; // [rsp+40h] [rbp-B88h]
	_WORD *v12; // [rsp+48h] [rbp-B80h]
	int v13; // [rsp+50h] [rbp-B78h]
	int v14; // [rsp+58h] [rbp-B70h]
	int v15; // [rsp+60h] [rbp-B68h]
	int v16; // [rsp+68h] [rbp-B60h]
	unsigned int v17; // [rsp+70h] [rbp-B58h]
	_WORD *v18; // [rsp+78h] [rbp-B50h]
	unsigned int v19; // [rsp+84h] [rbp-B44h]
	unsigned int v20; // [rsp+88h] [rbp-B40h]
	unsigned int *v21; // [rsp+90h] [rbp-B38h]
	unsigned int v22; // [rsp+98h] [rbp-B30h]
	int v23; // [rsp+9Ch] [rbp-B2Ch]
	unsigned int v24; // [rsp+A0h] [rbp-B28h]
	int v25; // [rsp+A4h] [rbp-B24h]
	char *v26; // [rsp+A8h] [rbp-B20h]
	char *v27; // [rsp+B0h] [rbp-B18h]
	unsigned int *v28; // [rsp+B8h] [rbp-B10h]
	__int64 v29; // [rsp+C0h] [rbp-B08h]
	unsigned int i3; // [rsp+C8h] [rbp-B00h]
	unsigned int i5; // [rsp+CCh] [rbp-AFCh]
	unsigned int v32; // [rsp+D0h] [rbp-AF8h]
	int v33; // [rsp+D4h] [rbp-AF4h]
	int i14; // [rsp+D8h] [rbp-AF0h]
	unsigned int v35; // [rsp+DCh] [rbp-AECh]
	_BYTE *v36; // [rsp+E0h] [rbp-AE8h]
	unsigned int ii; // [rsp+E8h] [rbp-AE0h]
	unsigned int n; // [rsp+ECh] [rbp-ADCh]
	int v39; // [rsp+F0h] [rbp-AD8h]
	unsigned int k; // [rsp+F4h] [rbp-AD4h]
	unsigned int v41; // [rsp+F8h] [rbp-AD0h]
	unsigned int mm; // [rsp+FCh] [rbp-ACCh]
	unsigned int i1; // [rsp+100h] [rbp-AC8h]
	unsigned int jj; // [rsp+104h] [rbp-AC4h]
	_QWORD *v45; // [rsp+108h] [rbp-AC0h]
	_QWORD *v46; // [rsp+108h] [rbp-AC0h]
	int *v47; // [rsp+110h] [rbp-AB8h]
	__int64 v48; // [rsp+118h] [rbp-AB0h]
	unsigned int *v49; // [rsp+120h] [rbp-AA8h]
	char *v50; // [rsp+128h] [rbp-AA0h]
	int i11; // [rsp+130h] [rbp-A98h]
	unsigned int i12; // [rsp+134h] [rbp-A94h]
	unsigned int v53; // [rsp+138h] [rbp-A90h]
	int v54; // [rsp+13Ch] [rbp-A8Ch]
	unsigned int v55; // [rsp+13Ch] [rbp-A8Ch]
	unsigned int v56; // [rsp+140h] [rbp-A88h]
	int v57; // [rsp+148h] [rbp-A80h]
	int i; // [rsp+14Ch] [rbp-A7Ch]
	int v59; // [rsp+150h] [rbp-A78h]
	unsigned int j; // [rsp+158h] [rbp-A70h]
	unsigned int m; // [rsp+15Ch] [rbp-A6Ch]
	unsigned int v62; // [rsp+160h] [rbp-A68h]
	unsigned int kk; // [rsp+164h] [rbp-A64h]
	int nn; // [rsp+168h] [rbp-A60h]
	int i2; // [rsp+16Ch] [rbp-A5Ch]
	int i4; // [rsp+170h] [rbp-A58h]
	int i6; // [rsp+174h] [rbp-A54h]
	int i7; // [rsp+178h] [rbp-A50h]
	unsigned int v69; // [rsp+17Ch] [rbp-A4Ch]
	unsigned int i9; // [rsp+180h] [rbp-A48h]
	_DWORD *v71; // [rsp+188h] [rbp-A40h]
	unsigned int *i8; // [rsp+190h] [rbp-A38h]
	__int64 *v73; // [rsp+198h] [rbp-A30h]
	__int64 v74; // [rsp+1A0h] [rbp-A28h]
	_DWORD *v75; // [rsp+1A8h] [rbp-A20h]
	_QWORD v76[3]; // [rsp+1B0h] [rbp-A18h] BYREF
	int *v77; // [rsp+1C8h] [rbp-A00h] BYREF
	_BYTE *v78; // [rsp+1D0h] [rbp-9F8h]
	__int64 *v79; // [rsp+1D8h] [rbp-9F0h]
	_BYTE *v80; // [rsp+1E0h] [rbp-9E8h]
	_BYTE *v81; // [rsp+1E8h] [rbp-9E0h]
	char *v82; // [rsp+1F0h] [rbp-9D8h]
	__int64 v83; // [rsp+1F8h] [rbp-9D0h]
	_BYTE *v84; // [rsp+200h] [rbp-9C8h]
	_BYTE *v85; // [rsp+208h] [rbp-9C0h]
	unsigned int *v86; // [rsp+210h] [rbp-9B8h]
	char *i13; // [rsp+218h] [rbp-9B0h]
	_DWORD v88[2]; // [rsp+220h] [rbp-9A8h] BYREF
	int v89; // [rsp+228h] [rbp-9A0h]
	BOOL v90; // [rsp+22Ch] [rbp-99Ch]
	BOOL v91; // [rsp+230h] [rbp-998h]
	BOOL v92; // [rsp+234h] [rbp-994h]
	int v93; // [rsp+238h] [rbp-990h]
	int *v94; // [rsp+240h] [rbp-988h]
	int *v95; // [rsp+248h] [rbp-980h]
	unsigned int *v96; // [rsp+250h] [rbp-978h]
	int v97; // [rsp+258h] [rbp-970h]
	struct _TEB *v98; // [rsp+260h] [rbp-968h]
	_BYTE *v99; // [rsp+268h] [rbp-960h]
	_BYTE *v100; // [rsp+270h] [rbp-958h]
	_BYTE *v101; // [rsp+278h] [rbp-950h]
	_BYTE *v102; // [rsp+280h] [rbp-948h]
	char *v103; // [rsp+288h] [rbp-940h]
	_DWORD *v104; // [rsp+290h] [rbp-938h]
	_WORD *v105; // [rsp+298h] [rbp-930h]
	char *v106; // [rsp+2A0h] [rbp-928h]
	_WORD *v107; // [rsp+2A8h] [rbp-920h]
	_WORD v108[16]; // [rsp+2B0h] [rbp-918h] BYREF
	int v109; // [rsp+2D0h] [rbp-8F8h]
	int v110; // [rsp+2D4h] [rbp-8F4h]
	int v111; // [rsp+2D8h] [rbp-8F0h]
	int v112; // [rsp+2E0h] [rbp-8E8h]
	unsigned int v113; // [rsp+2E8h] [rbp-8E0h]
	unsigned int v114; // [rsp+2ECh] [rbp-8DCh]
	unsigned int v115; // [rsp+2F0h] [rbp-8D8h]
	int v116; // [rsp+2F4h] [rbp-8D4h]
	unsigned int v117; // [rsp+2F8h] [rbp-8D0h]
	int v118; // [rsp+2FCh] [rbp-8CCh]
	BOOL v120; // [rsp+304h] [rbp-8C4h]
	_BYTE *v121; // [rsp+308h] [rbp-8C0h]
	__int64 v122; // [rsp+310h] [rbp-8B8h]
	__int64 v123; // [rsp+318h] [rbp-8B0h]
	_BYTE *v124; // [rsp+320h] [rbp-8A8h]
	__int64 v125; // [rsp+328h] [rbp-8A0h]
	_BYTE *v126; // [rsp+330h] [rbp-898h]
	char *v127; // [rsp+338h] [rbp-890h]
	__int64 v128; // [rsp+340h] [rbp-888h]
	unsigned int *v129; // [rsp+348h] [rbp-880h]
	unsigned __int16 *v130; // [rsp+350h] [rbp-878h]
	__int64 v131; // [rsp+358h] [rbp-870h]
	int *v132; // [rsp+360h] [rbp-868h]
	char *v133; // [rsp+368h] [rbp-860h]
	__int64 v134; // [rsp+370h] [rbp-858h]
	int **v135; // [rsp+378h] [rbp-850h]
	__int64 v136; // [rsp+380h] [rbp-848h]
	char *v137; // [rsp+388h] [rbp-840h]
	int *v138; // [rsp+390h] [rbp-838h]
	__int64 v139; // [rsp+398h] [rbp-830h]
	char *v140; // [rsp+3A0h] [rbp-828h]
	__int64 v141; // [rsp+3A8h] [rbp-820h]
	char *v142; // [rsp+3B0h] [rbp-818h]
	char *v143; // [rsp+3B8h] [rbp-810h]
	char *v144; // [rsp+3C0h] [rbp-808h]
	unsigned __int64 v145; // [rsp+3C8h] [rbp-800h]
	__int64 v146; // [rsp+3D0h] [rbp-7F8h]
	__int64 v147; // [rsp+3D8h] [rbp-7F0h]
	int *v148; // [rsp+3E0h] [rbp-7E8h]
	__int64 v149; // [rsp+3E8h] [rbp-7E0h]
	unsigned int *v150; // [rsp+3F0h] [rbp-7D8h]
	unsigned __int16 *v151; // [rsp+3F8h] [rbp-7D0h]
	_BYTE *v152; // [rsp+400h] [rbp-7C8h]
	__int64 v153; // [rsp+408h] [rbp-7C0h]
	_BYTE *v154; // [rsp+410h] [rbp-7B8h]
	__int64 v155; // [rsp+418h] [rbp-7B0h]
	__int64 *v156; // [rsp+420h] [rbp-7A8h]
	__int64 v157; // [rsp+428h] [rbp-7A0h]
	_BYTE *v158; // [rsp+430h] [rbp-798h]
	__int64 v159; // [rsp+438h] [rbp-790h]
	_BYTE *v160; // [rsp+440h] [rbp-788h]
	__int64 v161; // [rsp+448h] [rbp-780h]
	__int64 *v162; // [rsp+450h] [rbp-778h]
	__int64 v163; // [rsp+458h] [rbp-770h]
	_BYTE *v164; // [rsp+460h] [rbp-768h]
	__int64 v165; // [rsp+468h] [rbp-760h]
	__int64 v166; // [rsp+470h] [rbp-758h]
	__int64 v167; // [rsp+478h] [rbp-750h]
	__int64 v168; // [rsp+480h] [rbp-748h]
	__int64 v169; // [rsp+488h] [rbp-740h]
	_BYTE *v170; // [rsp+490h] [rbp-738h]
	__int64 v171; // [rsp+498h] [rbp-730h]
	_BYTE *v172; // [rsp+4A0h] [rbp-728h]
	__int64 v173; // [rsp+4A8h] [rbp-720h]
	__int64 *v174; // [rsp+4B0h] [rbp-718h]
	__int64 v175; // [rsp+4B8h] [rbp-710h]
	_BYTE *v176; // [rsp+4C0h] [rbp-708h]
	__int64 v177; // [rsp+4C8h] [rbp-700h]
	_BYTE *v178; // [rsp+4D0h] [rbp-6F8h]
	__int64 v179; // [rsp+4D8h] [rbp-6F0h]
	__int64 *v180; // [rsp+4E0h] [rbp-6E8h]
	__int64 v181; // [rsp+4E8h] [rbp-6E0h]
	int v182; // [rsp+4F0h] [rbp-6D8h]
	__int64 v183; // [rsp+4F8h] [rbp-6D0h]
	__int64 v184; // [rsp+500h] [rbp-6C8h]
	_QWORD *v185; // [rsp+508h] [rbp-6C0h]
	unsigned __int64 v186; // [rsp+510h] [rbp-6B8h]
	char *v187; // [rsp+518h] [rbp-6B0h]
	__int64 v188; // [rsp+520h] [rbp-6A8h]
	unsigned int *v189; // [rsp+528h] [rbp-6A0h]
	__int64 v190; // [rsp+530h] [rbp-698h]
	_DWORD *v191; // [rsp+538h] [rbp-690h]
	__int64 v192; // [rsp+540h] [rbp-688h]
	_QWORD *v193; // [rsp+548h] [rbp-680h]
	unsigned int *v194; // [rsp+550h] [rbp-678h]
	unsigned int (__fastcall *v195)(__int64, __int64, _QWORD); // [rsp+558h] [rbp-670h]
	_WORD *v196; // [rsp+560h] [rbp-668h]
	__int64 (__fastcall *v197)(__int64, _QWORD *, __int64); // [rsp+568h] [rbp-660h]
	_WORD *v198; // [rsp+570h] [rbp-658h]
	_WORD *v199; // [rsp+578h] [rbp-650h]
	unsigned int *v200; // [rsp+580h] [rbp-648h]
	__int64 v201; // [rsp+588h] [rbp-640h]
	__int64 v202; // [rsp+590h] [rbp-638h]
	void (__fastcall *v203)(_QWORD, _BYTE *, _BYTE *, __int64); // [rsp+598h] [rbp-630h]
	_WORD *v204; // [rsp+5A0h] [rbp-628h]
	char *v205; // [rsp+5A8h] [rbp-620h]
	_BYTE *v206; // [rsp+5B0h] [rbp-618h]
	_QWORD *v207; // [rsp+5B8h] [rbp-610h]
	__int64 v208; // [rsp+5C0h] [rbp-608h]
	int *v209; // [rsp+5C8h] [rbp-600h]
	char *v210; // [rsp+5D0h] [rbp-5F8h]
	__int64 v211; // [rsp+5D8h] [rbp-5F0h]
	__int64 v212; // [rsp+5E0h] [rbp-5E8h]
	__int64 v213; // [rsp+5E8h] [rbp-5E0h]
	char *v214; // [rsp+5F0h] [rbp-5D8h]
	__int64 v215; // [rsp+5F8h] [rbp-5D0h]
	_BYTE *v216; // [rsp+600h] [rbp-5C8h]
	void (__fastcall *v217)(__int64, _QWORD); // [rsp+608h] [rbp-5C0h]
	char v218[8]; // [rsp+610h] [rbp-5B8h] BYREF
	char *v219; // [rsp+618h] [rbp-5B0h]
	_QWORD v220[58]; // [rsp+620h] [rbp-5A8h] BYREF
	_BYTE v221[56]; // [rsp+7F0h] [rbp-3D8h] BYREF
	_BYTE v222[40]; // [rsp+828h] [rbp-3A0h] BYREF
	_QWORD v223[30]; // [rsp+850h] [rbp-378h] BYREF
	_BYTE v224[640]; // [rsp+940h] [rbp-288h] BYREF
	__int64 v225; // [rsp+BC0h] [rbp-8h] BYREF
	__int64 v226; // [rsp+BD0h] [rbp+8h]
	__int64 v227; // [rsp+BF0h] [rbp+28h]

	v226 = *(_QWORD *)&argc;
	qmemcpy(v223, (const void *)(*(_QWORD *)&argc - 240LL), sizeof(v223));
	v122 = *(_QWORD *)&argc;
	v121 = v224;
	v123 = 0;
	v59 = v223[0];
	v94 = (int *)v223 + 1;
	for ( i = 59; i; --i )
	{
	v182 = *v94;
	*v94++ ^= v59;
	v59 = v182;
	}
	v109 = v59;
	if ( HIDWORD(v223[0]) != -1059143457 )
	goto LABEL_285;
	v83 = *(_QWORD *)&argc - v223[2];
	v184 = *(_QWORD *)&argc - LODWORD(v223[3]);
	memset(v220, 0, sizeof(v220));
	v124 = v221;
	v125 = 0;
	v24 = (HIDWORD(v223[5]) + 15) & 0xFFFFFFF0;
	if ( !v24 || v24 > 0x280uLL )
	goto LABEL_285;
	v214 = (char *)(LODWORD(v223[5]) + v184);
	qmemcpy(v224, v214, v24);
	v127 = &v214[v24];
	v126 = &v224[v24];
	v128 = 0;
	v97 = v109;
	v95 = (int *)v224;
	v3 = v24 % 4uLL;
	for ( j = v24 / 4; j; --j )
	{
	v110 = *v95;
	*v95++ ^= v97;
	v97 = v110;
	}
	v36 = v224;
	for ( k = 0; k < 0x22; ++k )
	{
	if ( v36 >= &v224[HIDWORD(v223[5])] )
		goto LABEL_285;
	v220[k + 24] = v36;
	while ( *v36 )
	{
		if ( ++v36 >= &v224[HIDWORD(v223[5])] )
		goto LABEL_285;
	}
	++v36;
	}
	if ( v36 != &v224[HIDWORD(v223[5])] )
	goto LABEL_285;
	v18 = 0;
	v108[0] = 107;
	v108[1] = 101;
	v108[2] = 114;
	v108[3] = 110;
	v108[4] = 101;
	v108[5] = 108;
	v108[6] = 51;
	v108[7] = 50;
	v108[8] = 46;
	v108[9] = 100;
	v108[10] = 108;
	v108[11] = 108;
	v108[12] = 0;
	if ( v223[25] )
	{
	v220[19] = *(_QWORD *)(v83 + v223[25]);
	v18 = (_WORD *)((__int64 (__fastcall *)(_QWORD, unsigned __int64, const char **))v220[19])(v220[44], v3, envp);
	}
	else if ( v223[26] )
	{
	v220[20] = *(_QWORD *)(v83 + v223[26]);
	v18 = (_WORD *)((__int64 (__fastcall *)(_WORD *, unsigned __int64, const char **))v220[20])(v108, v3, envp);
	}
	else if ( v223[27] )
	{
	v220[21] = *(_QWORD *)(v83 + v223[27]);
	v18 = (_WORD *)((__int64 (__fastcall *)(_QWORD, unsigned __int64, const char **))v220[21])(v220[44], v3, envp);
	}
	else if ( v223[28] )
	{
	v220[22] = *(_QWORD *)(v83 + v223[28]);
	v18 = (_WORD *)((__int64 (__fastcall *)(_WORD *, unsigned __int64, const char **))v220[22])(v108, v3, envp);
	}
	if ( !v18 )
	goto LABEL_285;
	if ( v223[29] )
	{
	v220[23] = *(_QWORD *)(v83 + v223[29]);
	goto LABEL_70;
	}
	v204 = v18;
	if ( *v18 == 23117 )
	{
	v103 = (char *)v18 + *((int *)v204 + 15);
	if ( *(_DWORD *)v103 == 17744 )
	{
		if ( *((unsigned __int16 *)v103 + 2) == 34404 )
		{
		if ( *((_WORD *)v103 + 10) == 240 )
		{
			v96 = (unsigned int *)(v103 + 136);
			if ( *((_DWORD *)v103 + 35) )
			{
			v71 = (_DWORD *)((char *)v18 + *v96);
			if ( v71[6] && v71[5] )
			{
				v129 = (unsigned int *)((char *)v18 + (unsigned int)v71[8]);
				v130 = (_WORD *)((char *)v18 + (unsigned int)v71[9]);
				v39 = -1;
				for ( m = 0; m < v71[6]; ++m )
				{
				v85 = (char *)v18 + *v129;
				v78 = (_BYTE *)v220[47];
				while ( *v78 && *v85 )
				{
					if ( *v78 < *v85 )
					{
					v23 = -1;
					goto LABEL_58;
					}
					if ( *v78 > *v85 )
					{
					v23 = 1;
					goto LABEL_58;
					}
					++v78;
					++v85;
				}
				if ( *v85 )
					v23 = -1;
				else
					v23 = *v78 != 0;
LABEL_58:
				if ( !v23 )
				{
					v39 = *v130;
					break;
				}
				++v129;
				++v130;
				}
				if ( v39 == -1 )
				{
				v27 = 0;
				}
				else if ( (unsigned int)v39 <= v71[5] )
				{
				v62 = *(_DWORD *)((char *)&v18[2 * v39] + (unsigned int)v71[7]);
				if ( v62 < *v96 || v62 >= v96[1] + *v96 )
					v27 = (char *)v18 + v62;
				else
					v27 = 0;
				}
				else
				{
				v27 = 0;
				}
			}
			else
			{
				v27 = 0;
			}
			}
			else
			{
			v27 = 0;
			}
		}
		else
		{
			v27 = 0;
		}
		}
		else
		{
		v27 = 0;
		}
	}
	else
	{
		v27 = 0;
	}
	}
	else
	{
	v27 = 0;
	}
	v220[23] = v27;
	if ( !v27 )
	{
LABEL_285:
	memset(v223, 0, sizeof(v223));
	v158 = v224;
	v159 = 0;
	memset(v220, 0, sizeof(v220));
	v160 = v221;
	v161 = 0;
	memset(v224, 0, sizeof(v224));
	v162 = &v225;
	v163 = 0;
	while ( 1 )
		__debugbreak();
	}
LABEL_70:
	if ( !v223[25] )
	{
	v220[19] = ((__int64 (__fastcall *)(_WORD *, _QWORD))v220[23])(v18, v220[48]);
	if ( !v220[19] )
		goto LABEL_285;
	}
	v220[21] = ((__int64 (__fastcall *)(_WORD *, _QWORD))v220[23])(v18, v220[49]);
	if ( !v220[21] )
	goto LABEL_285;
	v183 = ((__int64 (__fastcall *)(_QWORD))v220[21])(v220[45]);
	if ( !v183 )
	goto LABEL_285;
	v45 = v220;
	for ( n = 0; n < 3; ++n )
	{
	*v45 = ((__int64 (__fastcall *)(__int64, _QWORD))v220[23])(v183, v220[n + 24]);
	if ( !*v45 )
		goto LABEL_285;
	++v45;
	}
	v46 = &v220[3];
	for ( ii = 0; ii < 0x10; ++ii )
	{
	*v46 = ((__int64 (__fastcall *)(_WORD *, _QWORD))v220[23])(v18, v220[ii + 27]);
	if ( !*v46 )
		goto LABEL_285;
	++v46;
	}
	if ( (v223[7] & 0x2000000000LL) == 0 )
	{
	v98 = NtCurrentTeb();
	if ( !v98
		|| (struct _TEB *)v98->NtTib.Self != v98
		|| !v98->ProcessEnvironmentBlock
		|| v98->ProcessEnvironmentBlock->BeingDebugged )
	{
		v8 = 84;
		goto LABEL_287;
	}
	}
	if ( (v223[21] & 1) != 0 )
	{
	v131 = v227;
	v111 = *(_DWORD *)(v227 + 88);
	if ( v111 != 1 )
		goto LABEL_284;
	}
	v47 = (int *)((__int64 (__fastcall *)(__int64, _QWORD))v220[0])(1, HIDWORD(v223[6]));
	if ( !v47 )
	{
	v8 = 87;
	goto LABEL_287;
	}
	v134 = HIDWORD(v223[6]);
	v205 = (char *)(LODWORD(v223[6]) + v184);
	v132 = v47;
	v133 = v205;
	qmemcpy(v47, v205, HIDWORD(v223[6]));
	v133 += v134;
	v132 = (int *)((char *)v132 + v134);
	v134 = 0;
	v112 = HIDWORD(v223[6]);
	v104 = v47;
	v185 = &v223[19];
	v4 = HIDWORD(v223[6]) % 8;
	v113 = HIDWORD(v223[6]) / 8;
	memset(v88, 85, sizeof(v88));
	for ( jj = 0; jj < v113; ++jj )
	{
	v41 = 2 * jj;
	v19 = v104[2 * jj];
	v114 = v19;
	v20 = v104[2 * jj + 1];
	v115 = v20;
	v22 = -957401312;
	for ( kk = 0; kk < 0x20; ++kk )
	{
		v20 -= (*((_DWORD *)v185 + ((v22 >> 11) & 3)) + v22) ^ (v19 + ((v19 >> 5) ^ (16 * v19)));
		v22 += 1640531527;
		v19 -= (*((_DWORD *)v185 + (v22 & 3)) + v22) ^ (v20 + ((v20 >> 5) ^ (16 * v20)));
	}
	v104[v41] = v88[0] ^ v19;
	v4 = (unsigned __int64)v104;
	v104[v41 + 1] = v88[1] ^ v20;
	v88[0] = v114;
	v88[1] = v115;
	}
	v116 = HIDWORD(v223[8]);
	HIDWORD(v223[8]) = 0;
	v14 = 0;
	v206 = v224;
	for ( mm = 0; mm < v24; ++mm )
	{
	v14 ^= (unsigned __int8)v206[mm] << 24;
	for ( nn = 8; nn > 0; --nn )
	{
		if ( v14 >= 0 )
		v14 *= 2;
		else
		v14 = (2 * v14) ^ 0x488781ED;
	}
	}
	v15 = v14;
	v207 = v223;
	for ( i1 = 0; i1 < 0xF0; ++i1 )
	{
	v15 ^= *((unsigned __int8 *)v207 + i1) << 24;
	for ( i2 = 8; i2 > 0; --i2 )
	{
		if ( v15 >= 0 )
		v15 *= 2;
		else
		v15 = (2 * v15) ^ 0x488781ED;
	}
	}
	v16 = v15;
	v208 = v226;
	for ( i3 = 0; i3 < ((HIDWORD(v223[3]) + 15) & 0xFFFFFFF0); ++i3 )
	{
	v16 ^= *(unsigned __int8 *)(v208 + i3) << 24;
	for ( i4 = 8; i4 > 0; --i4 )
	{
		if ( v16 >= 0 )
		v16 *= 2;
		else
		v16 = (2 * v16) ^ 0x488781ED;
	}
	}
	v13 = v16;
	v209 = v47;
	for ( i5 = 0; i5 < HIDWORD(v223[6]); ++i5 )
	{
	v13 ^= *((unsigned __int8 *)v209 + i5) << 24;
	for ( i6 = 8; i6 > 0; --i6 )
	{
		if ( v13 >= 0 )
		v13 *= 2;
		else
		v13 = (2 * v13) ^ 0x488781ED;
	}
	}
	HIDWORD(v223[8]) = v116;
	if ( v13 != v116 )
	{
	v8 = 81;
	goto LABEL_287;
	}
	v186 = HIDWORD(v223[6]);
	v77 = v47;
	if ( HIDWORD(v223[6]) < 0x40uLL || *(_WORD *)v77 != 23117 )
	{
	v12 = 0;
	goto LABEL_224;
	}
	v50 = (char *)v47 + v77[15];
	if ( v186 < v77[15] + 264LL || *(_DWORD *)v50 != 17744 )
	{
	v12 = 0;
	goto LABEL_224;
	}
	v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v220[13])(
			*((_QWORD *)v50 + 6),
			*((unsigned int *)v50 + 20),
			0x2000,
			4);
	if ( !v29 )
	v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v220[13])(
			0,
			*((unsigned int *)v50 + 20),
			0x2000,
			4);
	if ( !v29 )
	{
	v12 = 0;
	goto LABEL_224;
	}
	memset(v76, 0, sizeof(v76));
	v135 = &v77;
	v136 = 0;
	v76[1] = v29;
	v187 = (char *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v220[13])(
					 v29,
					 *((unsigned int *)v50 + 20),
					 4096,
					 4);
	v117 = *((_DWORD *)v50 + 21) + v77[15];
	v139 = v117;
	v137 = v187;
	v138 = v77;
	qmemcpy(v187, v77, v117);
	v138 = (int *)((char *)v138 + v139);
	v137 += v139;
	v139 = 0;
	v76[2] = &v187[v77[15]];
	*(_QWORD *)(v76[2] + 48LL) = v29;
	v188 = v76[1];
	v49 = (unsigned int *)(v76[2] + *(unsigned __int16 *)(v76[2] + 20LL) + 24LL);
	for ( i7 = 0; i7 < *(unsigned __int16 *)(v76[2] + 6LL); ++i7 )
	{
	if ( v49[4] )
	{
		v142 = (char *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v220[13])(
						 v49[3] + v188,
						 v49[4],
						 4096,
						 4);
		v145 = v49[4];
		v210 = (char *)v47 + v49[5];
		v143 = v142;
		v144 = v210;
		qmemcpy(v142, v210, v145);
		v144 += v145;
		v143 += v145;
		v145 = 0;
	}
	else
	{
		v69 = *((_DWORD *)v50 + 14);
		if ( v69 )
		{
		v142 = (char *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v220[13])(
						 v49[3] + v188,
						 v69,
						 4096,
						 4);
		v141 = v69;
		v140 = v142;
		memset(v142, 0, v69);
		v140 += v141;
		v141 = 0;
		}
	}
	v49 += 10;
	}
	v146 = v29 - *((_QWORD *)v50 + 6);
	if ( v146 )
	{
	v190 = v76[1];
	v189 = (unsigned int *)(v76[2] + 176LL);
	if ( *(_DWORD *)(v76[2] + 180LL) )
	{
		for ( i8 = (unsigned int *)(*v189 + v190); *i8; i8 = (unsigned int *)((char *)i8 + i8[1]) )
		{
		v192 = *i8 + v190;
		v105 = i8 + 2;
		for ( i9 = 0; ; ++i9 )
		{
			v211 = i9;
			v4 = ((unsigned __int64)i8[1] - 8) % 2;
			if ( i9 >= ((unsigned __int64)i8[1] - 8) / 2 )
			break;
			v118 = (int)(unsigned __int16)*v105 >> 12;
			v89 = *v105 & 0xFFF;
			if ( v118 )
			{
			if ( v118 == 3 )
			{
				v191 = (_DWORD *)(v89 + v192);
				*v191 += v146;
			}
			else if ( v118 == 10 )
			{
				v193 = (_QWORD *)(v89 + v192);
				*v193 += v146;
			}
			else
			{
				__debugbreak();
			}
			}
			++v105;
		}
		}
	}
	}
	v74 = v76[1];
	v194 = (unsigned int *)(v76[2] + 144LL);
	if ( *(_DWORD *)(v76[2] + 148LL) )
	{
	v28 = (unsigned int *)(*v194 + v76[1]);
	for ( i10 = ((__int64 (__fastcall *)(unsigned int *, __int64))v220[16])(v28, 20);
			!i10 && v28[3];
			i10 = ((__int64 (__fastcall *)(unsigned int *, __int64))v220[16])(v28, 20) )
	{
		v212 = v28[3] + v74;
		v147 = ((__int64 (__fastcall *)(__int64))v220[21])(v212);
		if ( !v147 )
		{
		v10 = 0;
		goto LABEL_191;
		}
		if ( *v28 )
		v73 = (__int64 *)(*v28 + v74);
		else
		v73 = (__int64 *)(v28[4] + v74);
		v79 = (__int64 *)(v28[4] + v74);
		while ( *v73 )
		{
		if ( *v73 >= 0 )
		{
			v213 = *v73 + v74;
			v6 = ((__int64 (__fastcall *)(__int64, __int64))v220[23])(v147, v213 + 2);
		}
		else
		{
			v6 = ((__int64 (__fastcall *)(__int64, _QWORD))v220[23])(v147, (unsigned __int16)*v73);
		}
		*v79 = v6;
		if ( !*v79 )
		{
			v10 = 0;
			goto LABEL_191;
		}
		++v73;
		++v79;
		}
		v28 += 5;
	}
	}
	v10 = 1;
LABEL_191:
	if ( !v10 )
	{
	v12 = 0;
	goto LABEL_224;
	}
	v21 = (unsigned int *)(v76[2] + *(unsigned __int16 *)(v76[2] + 20LL) + 24LL);
	for ( i11 = 0; i11 < *(unsigned __int16 *)(v76[2] + 6LL); ++i11 )
	{
	v90 = (v21[9] & 0x20000000) != 0;
	v91 = (v21[9] & 0x40000000) != 0;
	v92 = (v21[9] & 0x80000000) != 0;
	if ( (v21[9] & 0x2000000) != 0 )
	{
		((void (__fastcall *)(_QWORD, _QWORD, __int64))v220[14])(v76[1] + v21[3], v21[4], 0x4000);
	}
	else
	{
		if ( v91 )
		{
		if ( v92 )
			v17 = 4;
		else
			v17 = 2;
		}
		else if ( v92 )
		{
		v17 = 8;
		}
		else
		{
		v17 = 1;
		}
		if ( v90 )
		v17 *= 16;
		if ( (v21[9] & 0x4000000) != 0 )
		v17 |= 0x200u;
		v32 = v21[4];
		if ( !v32 )
		{
		if ( (v21[9] & 0x40) != 0 )
		{
			v32 = *(_DWORD *)(v76[2] + 32LL);
		}
		else if ( (v21[9] & 0x80) != 0 )
		{
			v32 = *(_DWORD *)(v76[2] + 36LL);
		}
		}
		if ( v32 )
		((void (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v220[15])(v76[1] + v21[3], v21[4], v17, v218);
	}
	v21 += 10;
	}
	if ( *(_DWORD *)(v76[2] + 40LL) )
	{
	v195 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD))(*(unsigned int *)(v76[2] + 40LL) + v29);
	if ( !v195 )
	{
		v12 = 0;
		goto LABEL_224;
	}
	if ( !v195(v29, 1, 0) )
	{
		v12 = 0;
		goto LABEL_224;
	}
	LOBYTE(v76[0]) = 1;
	}
	v12 = (_WORD *)v29;
LABEL_224:
	v149 = HIDWORD(v223[6]);
	v148 = v47;
	memset(v47, 0, HIDWORD(v223[6]));
	v148 = (int *)((char *)v148 + v149);
	v149 = 0;
	((void (__fastcall *)(int *, unsigned __int64))v220[1])(v47, v4);
	if ( !v12 )
	{
	v8 = 66;
	goto LABEL_287;
	}
	v196 = v12;
	if ( *v12 == 23117 )
	{
	v106 = (char *)v12 + *((int *)v196 + 15);
	if ( *(_DWORD *)v106 == 17744 )
	{
		if ( *((unsigned __int16 *)v106 + 2) == 34404 )
		{
		if ( *((_WORD *)v106 + 10) == 240 )
		{
			v86 = (unsigned int *)(v106 + 136);
			if ( *((_DWORD *)v106 + 35) )
			{
			v75 = (_DWORD *)((char *)v12 + *v86);
			if ( v75[6] && v75[5] )
			{
				v150 = (unsigned int *)((char *)v12 + (unsigned int)v75[8]);
				v151 = (_WORD *)((char *)v12 + (unsigned int)v75[9]);
				v33 = -1;
				for ( i12 = 0; i12 < v75[6]; ++i12 )
				{
				v80 = (char *)v12 + *v150;
				v81 = (_BYTE *)v220[57];
				while ( *v81 && *v80 )
				{
					if ( *v81 < *v80 )
					{
					v25 = -1;
					goto LABEL_253;
					}
					if ( *v81 > *v80 )
					{
					v25 = 1;
					goto LABEL_253;
					}
					++v81;
					++v80;
				}
				if ( *v80 )
					v25 = -1;
				else
					v25 = *v81 != 0;
LABEL_253:
				if ( !v25 )
				{
					v33 = *v151;
					break;
				}
				++v150;
				++v151;
				}
				if ( v33 == -1 )
				{
				v26 = 0;
				}
				else if ( (unsigned int)v33 <= v75[5] )
				{
				v53 = *(_DWORD *)((char *)&v12[2 * v33] + (unsigned int)v75[7]);
				if ( v53 < *v86 || v53 >= v86[1] + *v86 )
					v26 = (char *)v12 + v53;
				else
					v26 = 0;
				}
				else
				{
				v26 = 0;
				}
			}
			else
			{
				v26 = 0;
			}
			}
			else
			{
			v26 = 0;
			}
		}
		else
		{
			v26 = 0;
		}
		}
		else
		{
		v26 = 0;
		}
	}
	else
	{
		v26 = 0;
	}
	}
	else
	{
	v26 = 0;
	}
	v197 = (__int64 (__fastcall *)(__int64, _QWORD *, __int64))v26;
	if ( !v26 )
	{
	v8 = 67;
	goto LABEL_287;
	}
	v8 = v197(v226, v223, 240);
	if ( v8 == 48 )
	{
	v198 = v12;
	if ( *v12 == 23117 )
	{
		v82 = (char *)v12 + *((int *)v198 + 15);
		if ( *(_DWORD *)v82 == 17744 && *((unsigned __int16 *)v82 + 2) == 34404 && *((_WORD *)v82 + 10) == 240 )
		{
		v107 = v12;
		if ( !*((_DWORD *)v82 + 10) )
		{
LABEL_276:
			v200 = (unsigned int *)(v82 + 144);
			if ( *((_DWORD *)v82 + 37) )
			{
			for ( i13 = (char *)v107 + *v200;
					!((unsigned int (__fastcall *)(char *, __int64))v220[16])(i13, 20) && *((_DWORD *)i13 + 3);
					i13 += 20 )
			{
				v219 = (char *)v107 + *((unsigned int *)i13 + 3);
				v201 = ((__int64 (__fastcall *)(char *))v220[19])(v219);
				if ( v201 )
				((void (__fastcall *)(__int64))v220[18])(v201);
			}
			}
			v120 = ((__int64 (__fastcall *)(_WORD *, _QWORD, __int64))v220[14])(v12, 0, 0x8000) == 1;
			goto LABEL_284;
		}
		v199 = (_WORD *)((char *)v107 + *((unsigned int *)v82 + 10));
		if ( v199 )
		{
			((void (__fastcall *)(_WORD *, _QWORD, _QWORD))v199)(v107, 0, 0);
			goto LABEL_276;
		}
		}
	}
LABEL_284:
	v215 = v223[4] + v83;
	memset(v223, 0, sizeof(v223));
	v152 = v224;
	v153 = 0;
	memset(v220, 0, sizeof(v220));
	v154 = v221;
	v155 = 0;
	memset(v224, 0, sizeof(v224));
	v156 = &v225;
	v157 = 0;
	return v215;
	}
LABEL_287:
	v217 = (void (__fastcall *)(__int64, _QWORD))v220[3];
	v54 = ((__int64 (*)(void))v220[4])();
	if ( v8 != 53 && v8 != 48 && v8 != 69 )
	{
	v99 = (_BYTE *)v220[53];
	v100 = v222;
	while ( *v99 )
		*v100++ = *v99++;
	*v100 = 0;
	v101 = (_BYTE *)v220[54];
	v102 = v221;
	while ( *v101 )
		*v102++ = *v101++;
	*v102 = 0;
	v55 = v54 + 65432;
	v164 = v221;
	v165 = 0;
	while ( *v164 )
	{
		++v165;
		++v164;
	}
	v84 = &v221[v165];
	while ( --v84 > v221 )
	{
		if ( *v84 == 58 )
		{
		*(v84 - 1) = v8;
		v216 = v84 + 1;
		v56 = v55;
		v35 = 1000000000;
		for ( i14 = 0; i14 < 10; ++i14 )
		{
			v93 = v56 / v35;
			v216[i14] = v56 / v35 + 48;
			v56 -= v35 * v93;
			v35 /= 0xAu;
		}
		break;
		}
	}
	if ( v223[2] <= 0xFFFFFFFF )
	{
		v168 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v220[5])(0x100000, 0, v220[52]);
		v167 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v220[6])(2, 0, v220[51]);
		if ( v168 && v167 )
		{
		if ( ((unsigned int (__fastcall *)(__int64, __int64))v220[8])(v168, 5000) )
		{
			v9 = 71;
		}
		else
		{
			v166 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v220[7])(v167, 2, 0, 0, 0);
			if ( v166 )
			{
			v48 = v166;
			if ( *(_DWORD *)(v166 + 144) == 2 )
			{
				if ( *(_DWORD *)(v166 + 148) )
				{
				v9 = 74;
				}
				else
				{
				v169 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v220[9])(0, 0, 0, 0);
				*(_DWORD *)(v48 + 152) = ((__int64 (*)(void))v220[12])();
				*(_DWORD *)(v48 + 168) = v223[7];
				*(_DWORD *)(v48 + 172) = HIDWORD(v223[8]);
				*(_DWORD *)(v48 + 180) = LODWORD(v223[2]) - 240;
				*(_DWORD *)(v48 + 176) = v8;
				*(_QWORD *)(v48 + 160) = v169;
				*(_DWORD *)(v48 + 148) = 2;
				v57 = ((__int64 (__fastcall *)(__int64, __int64))v220[8])(v169, 5000);
				((void (__fastcall *)(__int64))v220[10])(v166);
				((void (__fastcall *)(__int64))v220[11])(v167);
				((void (__fastcall *)(__int64))v220[11])(v168);
				((void (__fastcall *)(__int64))v220[11])(v169);
				if ( v57 )
					v9 = 76;
				else
					v9 = 48;
				}
			}
			else
			{
				v9 = 73;
			}
			}
			else
			{
			v9 = 72;
			}
		}
		}
		else
		{
		v9 = 53;
		}
	}
	else
	{
		v9 = 53;
	}
	if ( v9 != 48 && (v223[7] & 0x4000000000LL) == 0 )
	{
		v202 = ((__int64 (__fastcall *)(_QWORD))v220[21])(v220[46]);
		if ( v202 )
		{
		v203 = (void (__fastcall *)(_QWORD, _BYTE *, _BYTE *, __int64))((__int64 (__fastcall *)(__int64, _QWORD))v220[23])(
																		 v202,
																		 v220[50]);
		memset(v223, 0, sizeof(v223));
		v170 = v224;
		v171 = 0;
		memset(v220, 0, sizeof(v220));
		v172 = v221;
		v173 = 0;
		memset(v224, 0, sizeof(v224));
		v174 = &v225;
		v175 = 0;
		if ( v203 )
			v203(0, v221, v222, 16);
		}
		}
	}
	memset(v223, 0, sizeof(v223));
	v176 = v224;
	v177 = 0;
	memset(v220, 0, sizeof(v220));
	v178 = v221;
	v179 = 0;
	memset(v224, 0, sizeof(v224));
	v180 = &v225;
	v181 = 0;
	v217(-1, (unsigned int)v8);
	return 0;
}
