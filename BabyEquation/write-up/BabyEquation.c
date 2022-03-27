#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void flag(void) {
	char nothingButFakeFlag[44] = { 0, };
	strcpy_s(nothingButFakeFlag, 44, "BCTF{hI_I_4m_4_rE41_FlAg}");
}

int ret1(void) {
	char nothingButString[256] = { 0, };
	strcpy_s(nothingButString, 256, "BCTF{cyAlume_Cy41umE_wHAt_vA1u3_t0_rE7urn?}");

	return 1;
}

int ret0(void) {
	char chat[256] = { 0, };
	strcpy_s(chat, 256, "BCTF{hAha_yOu_musT_en73r3D_5Ome7hINg_wr0Ng!}");

	return 0;
}

int check6(void) {
	_asm {
		mov eax, fs: [0x30]
		mov eax, [eax + 2]
		and eax, 0x01
		test eax, eax

		je notDebugged;
	}
;
	return 0;

notDebugged:
	return 1;
}

int check5(char* f) {
	int e1, e2, e3, e4, e5, e6, e7, e8, e9, e0 = 0;
	e1 = f[37] - f[18] - f[36] - f[20] - f[41] - f[11] + f[20];
	e2 = f[42] + f[6] + f[40] - f[31] ^ f[27] - f[23] ^ f[33] ^ f[15];
	e3 = f[32] - f[42] - f[7] + f[29] - f[11] + f[43] + f[21] ^ f[34] - f[20];
	e4 = f[13] ^ f[20] + f[21] ^ f[41] - f[12] - f[2] + f[24] - f[39] ^ f[42] - f[40] - f[6];
	e5 = f[40] - f[11] + f[15] + f[22] - f[14] - f[41] + f[7] + f[2] + f[30] + f[18] + f[34];
	e6 = f[41] + f[38] + f[37] + f[28] - f[39] - f[22] + f[4] + f[28];
	e7 = f[21] + f[11] - f[17] + f[30] + f[43] + f[38] - f[10] + f[10] + f[32] - f[1];
	e8 = f[38] + f[7] - f[17] + f[0] + f[11] - f[4] - f[12];
	e9 = f[21] + f[18] + f[16] - f[7] - f[34] - f[10] + f[24] + f[31];
	e0 = f[31] - f[12] + f[16] + f[10] + f[0] + f[29] - f[19] + f[7] - f[18] - f[24] ^ f[40];

	if (e1 != -232) {
		return 1;
	}
	else if (e2 != -218) {
		return 1;
	}
	else if (e3 != -128) {
		return 1;
	}
	else if (e4 != 49) {
		return 1;
	}
	else if (e5 != 388) {
		return 1;
	}
	else if (e6 != 488) {
		return 1;
	}
	else if (e7 != 327) {
		return 1;
	}
	else if (e8 != 57) {
		return 1;
	}
	else if (e9 != 120) {
		return 1;
	}
	else if (e0 != 149) {
		return 1;
	}
	else if (check6()) {
		return 0;
	}
	else return 1;
}

int check4(char* f) { //31~40
	int (*fp[2])(void);

	fp[0] = ret0;
	fp[1] = ret1;

	int returnValue = 0;

	if (fp[((f[2] ^ f[38] + f[41] + f[35] - f[31] - f[23] + f[33] ^ f[28]) == 260)]()) {
		if (fp[((f[36] - f[33] ^ f[13] + f[13] - f[7] + f[0] - f[1]) == -183)]()) {
			if (!fp[((f[1] ^ f[4] + f[39] - f[5] + f[8] + f[20] - f[13] - f[15]) != -37)]()) {
				if (!fp[((f[21] ^ f[11] - f[25] - f[33] + f[10] - f[41] - f[0] - f[42] + f[29]) != -129)]()) {
					if (fp[((f[23] - f[8] - f[13] + f[20] + f[2] + f[29] - f[36]) == 148)]()) {
						
					}else {
						returnValue = fp[0]();
						return returnValue;
					}
				}else {
					returnValue = fp[0]();
					return returnValue;
				}
			}else {
				returnValue = fp[0]();
				return returnValue;
			}
		}else {
			returnValue = fp[0]();
			return returnValue;
		}
	}
	else {
		returnValue = fp[0]();
		return returnValue;
	}

	if (fp[!((f[27] - f[38] + f[35] + f[30] + f[2] + f[9] + f[34] ^ f[8] - f[10] - f[39]) != -410)]()) {
		if (fp[((f[9] - f[38] ^ f[16] - f[23] - f[1] - f[31] + f[8]) == -28)]()) {
			if (!fp[((f[25] - f[43] + f[3] + f[43] + f[32] - f[18] + f[40] + f[13] + f[30]) != 561)]()) {
				if (!fp[((f[1] ^ f[17] + f[10] - f[4] + f[27] - f[13] - f[8] - f[31] - f[8] - f[5] ^ f[10]) != -171)]()) {
					if (fp[((f[26] - f[19] + f[42] + f[4] - f[27] - f[21] - f[43]) == 34)]()) {

					}
					else {
						returnValue = fp[0]();
						return returnValue;
					}
				}
				else {
					returnValue = fp[0]();
					return returnValue;
				}
			}
			else {
				returnValue = fp[0]();
				return returnValue;
			}
		}
		else {
			returnValue = fp[0]();
			return returnValue;
		}
	}
	else {
		returnValue = fp[0]();
		return returnValue;
	}

	if (!check5(f)) {
		return 1;
	}
	else {
		return 0;
	}
}

int check3(char* f) { //21~30
	int val = 0;
	val = f[42] + f[15] - f[27] - f[4] + f[8] - f[27] + f[39] + f[13];

	switch (val) 
	{
	case 221:
		goto _22;

	default:
		goto fail;
	}

_22:
	val = f[8] + f[2] - f[0] - f[17] + f[9] - f[32] + f[20];
	switch (val)
	{
	case 85:
		goto _23;

	default:
		goto fail;
	}

_23:
	val = f[5] + f[31] + f[43] + f[10] + f[5] + f[14] - f[11] ^ f[42] + f[19] - f[28];
	switch (val) 
	{
	case 320:
		goto _24;

	default:
		goto fail;
	}

_24:
	val = f[34] - f[26] ^ f[21] ^ f[8] + f[40] + f[8] + f[3] - f[34];
	switch (val) 
	{
	case -355:
		goto _25;

	default:
		goto fail;
	}

_25:
	val = f[20] + f[3] + f[10] + f[10] + f[20] + f[13] - f[2];
	switch (val)
	{
	case 498:
		goto _26;

	default:
		goto fail;
	}

_26:
	val = f[13] + f[20] + f[5] + f[7] - f[10] ^ f[2] ^ f[24] + f[0] - f[42] - f[42] - f[33];
	switch (val)
	{
	case -331:
		goto _27;

	default:
		goto fail;
	}

_27:
	val = f[5] + f[37] + f[18] - f[28] + f[37] - f[32] ^ f[15] + f[7] + f[29] + f[32] + f[8];
	switch (val)
	{
	case 279:
		goto _28;

	default:
		goto fail;
	}

_28:
	val = f[38] + f[26] - f[5] + f[43] + f[17] + f[14] - f[40] - f[2] + f[7] + f[42];
	switch (val)
	{
	case 105:
		goto _29;

	default:
		goto fail;
	}

_29:
	val = f[38] - f[11] + f[39] + f[4] ^ f[30] - f[13] + f[41];
	switch (val)
	{
	case 240:
		goto _30;

	default:
		goto fail;
	}

_30:
	val = f[1] - f[36] - f[22] + f[42] + f[8] + f[26] + f[5] + f[34];
	switch (val)
	{
	case 316:
		goto ch4;

	default:
		goto fail;
	}

fail:
	return 0;

ch4:
	if (check4(f)) {
		return 1;
	}
	else {
		return 0;
	}
}

int check2(char* f) { //11~20
	int e1, e2, e3, e4, e5, e6, e7, e8, e9, e0 = 0;
	e1 = f[16] + f[27] ^ f[27] - f[0] - f[38] ^ f[37] - f[9] + f[42] + f[32];
	e2 = f[22] + f[33] + f[30] ^ f[7] ^ f[1] ^ f[29] + f[8] - f[38];
	e3 = f[13] + f[9] - f[32] + f[36] + f[9] + f[39];
	e4 = f[34] - f[15] - f[18] + f[41] - f[18] - f[2];
	e5 = f[19] - f[19] - f[12] - f[2] - f[10] + f[43] + f[23] - f[5] - f[6];
	e6 = f[23] - f[22] + f[34] - f[32] ^ f[25] - f[15];
	e7 = f[39] - f[13] ^ f[42] + f[36] + f[40] + f[17] + f[17] ^ f[33] + f[0];
	e8 = f[16] - f[16] + f[2] + f[9] - f[28] ^ f[29] + f[25];
	e9 = f[36] ^ f[4] - f[15] + f[14] + f[32] - f[16] - f[28];
	e0 = f[25] ^ f[22] + f[27] - f[12] - f[15] + f[0];

	if (e1 != -165) {
		return 0;
	}
	else if (e2 != 345) {
		return 0;
	}
	else if (e3 != 319) {
		return 0;
	}
	else if (e4 != -120) {
		return 0;
	}
	else if (e5 != -456) {
		return 0;
	}
	else if (e6 != 5) {
		return 0;
	}
	else if (e7 != -364) {
		return 0;
	}
	else if (e8 != 215) {
		return 0;
	}
	else if (e9 != -23) {
		return 0;
	}
	else if (e0 != -75) {
		return 0;
	}
	else if (check3(f)) {
		return 1;
	}
	else return 0;
}

int check1(char* f) { //1~10

	if (!(f[0] > 32 && f[0] < 126 && f[1] > 32 && f[1] < 126)) {
		return 0;
	}

	if ((f[34] - f[37] - f[25] ^ f[36] - f[11] ^ f[22] - f[5] + f[0]) == -189) {
		if ((f[39] + f[12] - f[7] + f[15] + f[18] ^ f[42] - f[21] + f[40] - f[15] - f[38] ^ f[39]) == -337) {
			if ((f[21] + f[27] + f[20] + f[9] ^ f[19] ^ f[17] - f[34] - f[28] - f[42] - f[32] - f[30]) == -17) {
				if ((f[8] - f[7] + f[19] - f[31] + f[7] - f[41]) == -22) {
					if ((f[22] + f[38] + f[37] ^ f[16] ^ f[16] + f[32] + f[18] - f[31]) == 108) {
						if ((f[43] ^ f[26] + f[27] - f[8] + f[0] ^ f[31] - f[24]) == -165) {
							if ((f[43] + f[19] - f[3] - f[31] - f[39] + f[24] + f[22] + f[13] + f[16] + f[36] - f[37]) == 186) {
								if ((f[5] - f[15] ^ f[12] - f[13] + f[7] + f[28] - f[36] ^ f[42] + f[22]) == 60) {
									if ((f[13] + f[32] - f[35] - f[17] + f[0] ^ f[2]) == 23) {
										if ((f[38] - f[3] - f[37] - f[37] - f[1] + f[16]) == -186) {
											if (check2(f)) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else return 0;
									}
									else return 0;
								}
								else return 0;
							}
							else return 0;
						}
						else return 0;
					}
					else return 0;
				}
				else return 0;
			}
			else return 0;
		}
		else return 0;
	}
	else return 0;

}

int main(void) {
	char input[44] = { 0, };

	_asm {
		mov eax, fs: [0x30]
		mov eax, [eax + 2]
		and eax, 0x01
		test eax, eax

		je notDebugged;
	}

	exit(-1);

notDebugged:

	printf("The answer is already with you....\n");
	printf("Flag: ");

	scanf_s("%44s", input, sizeof(input));

	if (check1(input)) {
		printf("\nYes.... Yess...!\n");
		printf("The very flag is: BCTF{%43s}\n\n", input);
		return 0;
	}
	else {
		printf("Nah.... You know the answer, don't lie!");
		return -1;
	}
}