#include <windows.h>
#include <stdio.h>

typedef unsigned char code;
typedef char undefined;
typedef short undefined2;
typedef int undefined4;
typedef long long undefined8;

#define SUB164(x,y) x - y
#define ZEXT816(x) x
#define ZEXT416(x) x


int main(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4){
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  short *psVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  short *psVar11;
  unsigned long uVar12;
  unsigned long extraout_RDX;
  undefined8 uVar13;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long in_GS_OFFSET;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  long param_7;
  long in_stack_00000028;
  char local_b98;
  char local_b97;
  short *local_b80;
  unsigned int local_b78;
  unsigned int local_b70;
  unsigned int local_b68;
  unsigned int local_b60;
  unsigned int local_b58;
  short *local_b50;
  unsigned int local_b44;
  unsigned int local_b40;
  undefined *local_b38;
  unsigned int local_b30;
  int local_b2c;
  int local_b24;
  code *local_b20;
  code *local_b18;
  unsigned int *local_b10;
  short *local_b08;
  unsigned int local_b00;
  unsigned int local_afc;
  int local_af8;
  unsigned int local_af4;
  int local_af0;
  unsigned int local_aec;
  unsigned int *local_ae8;
  unsigned int local_ae0;
  unsigned int local_adc;
  unsigned int local_ad8;
  unsigned int local_ad4;
  unsigned int local_acc;
  unsigned int local_ac8;
  unsigned int local_ac4;
  code **local_ac0;
  undefined *local_aa8;
  int local_a98;
  unsigned int local_a94;
  unsigned int local_a88;
  int local_a7c;
  unsigned int local_a78;
  int local_a70;
  unsigned int local_a6c;
  unsigned int local_a64;
  int local_a60;
  int local_a5c;
  int local_a58;
  int local_a54;
  int local_a50;
  unsigned int local_a48;
  unsigned int *local_a38;
  unsigned long *local_a30;
  undefined local_a18 [8];
  short *local_a10;
  undefined *local_a08;
  short *local_a00;
  char *local_9f8;
  long *local_9f0;
  char *local_9e8;
  char *local_9e0;
  int *local_9d8;
  long local_9d0;
  char *local_9c8;
  char *local_9c0;
  unsigned int *local_9b8;
  long local_9b0;
  unsigned int local_9a8;
  unsigned int local_9a4;
  unsigned int local_9a0;
  unsigned int local_99c;
  unsigned int local_998;
  unsigned int local_994;
  unsigned int local_990;
  unsigned int *local_988;
  unsigned int *local_980;
  unsigned int *local_978;
  unsigned int local_970;
  long local_968;
  char *local_960;
  char *local_958;
  char *local_950;
  char *local_948;
  int *local_940;
  short *local_938;
  unsigned int *local_930;
  int *local_928;
  short *local_920;
  undefined2 local_918;
  undefined2 uStack_916;
  undefined2 uStack_914;
  undefined2 uStack_912;
  undefined2 uStack_910;
  undefined2 uStack_90e;
  undefined2 uStack_90c;
  undefined2 uStack_90a;
  undefined2 uStack_908;
  undefined2 uStack_906;
  undefined2 uStack_904;
  undefined2 uStack_902;
  undefined2 uStack_900;
  unsigned int local_8f8;
  unsigned int local_8f4;
  int local_8f0;
  unsigned int local_8e0;
  unsigned int local_8dc;
  unsigned int local_8d8;
  unsigned int local_8d0;
  int local_8cc;
  int local_8c8;
  unsigned int *local_8c0;
  undefined *local_8b8;
  code **local_8a8;
  long local_8a0;
  unsigned int *local_898;
  undefined *local_890;
  unsigned long local_888;
  unsigned int *local_880;
  unsigned short *local_878;
  long local_870;
  short *local_868;
  undefined *local_860;
  unsigned long local_858;
  undefined *local_850;
  long local_848;
  undefined *local_840;
  short *local_838;
  unsigned long local_830;
  undefined *local_828;
  unsigned long local_820;
  undefined *local_818;
  undefined *local_810;
  undefined *local_808;
  unsigned long local_800;
  long local_7f8;
  long local_7f0;
  short *local_7e8;
  unsigned long local_7e0;
  unsigned int *local_7d8;
  unsigned short *local_7d0;
  unsigned int *local_7c8;
  long local_7c0;
  code **local_7b8;
  long local_7b0;
  unsigned int *local_7a8;
  long local_7a0;
  unsigned int *local_798;
  long local_790;
  code **local_788;
  long local_780;
  unsigned int *local_778;
  long local_770;
  char *local_768;
  long local_760;
  long local_758;
  long local_750;
  long local_748;
  undefined8 local_740;
  unsigned int *local_738;
  long local_730;
  code **local_728;
  long local_720;
  unsigned int *local_718;
  long local_710;
  unsigned int *local_708;
  long local_700;
  code **local_6f8;
  long local_6f0;
  unsigned int *local_6e8;
  long local_6e0;
  unsigned int local_6d8;
  long local_6d0;
  long local_6c8;
  int *local_6c0;
  unsigned long local_6b8;
  undefined8 local_6b0;
  short *local_6a8;
  unsigned int *local_6a0;
  short *local_698;
  int *local_690;
  long local_688;
  long *local_680;
  unsigned int *local_678;
  code *local_670;
  short *local_668;
  code *local_660;
  short *local_658;
  code *local_650;
  unsigned int *local_648;
  long local_640;
  long local_638;
  code *local_630;
  short *local_628;
  undefined *local_620;
  unsigned int *local_618;
  unsigned int *local_610;
  long local_608;
  short *local_600;
  undefined *local_5f8;
  unsigned long local_5f0;
  long local_5e8;
  long local_5e0;
  undefined *local_5d8;
  char *local_5c8;
  code *local_5c0;
  undefined local_5b8 [8];
  long local_5b0;
  code *local_5a8;
  code *local_5a0;
  code *local_590;
  code *local_588;
  code *local_580;
  code *local_578;
  code *local_570;
  code *local_568;
  code *local_560;
  code *local_558;
  code *local_550;
  code *local_548;
  code *local_540;
  code *local_538;
  code *local_530;
  code *local_528;
  code *local_518;
  code *local_510;
  code *local_508;
  code *local_500;
  code *local_4f8;
  code *local_4f0;
  unsigned int *apuStack_4e8 [34];
  char local_3d8 [56];
  char local_3a0 [40];
  unsigned int local_378 [5];
  undefined4 uStack_364;
  unsigned int local_360;
  int local_35c;
  long local_358;
  unsigned int local_350;
  unsigned int local_34c;
  unsigned int local_348;
  unsigned int local_344;
  undefined4 local_340;
  unsigned int local_33c;
  unsigned int local_334;
  int aiStack_2e0 [4];
  unsigned int local_2d0;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  unsigned int local_288 [162];
  
  local_8c0 = local_378;
  local_8b8 = (undefined *)(param_4 + -0xf0);
  for (long i = 0xf0; i != 0; i--) {
    *(undefined *)local_8c0 = *local_8b8;
    local_8c0 = (unsigned int *)((long)local_8c0 + 1);
    local_8b8 = local_8b8 + 1;
  }
  local_988 = local_378;
  local_a78 = local_378[0];
  for (local_a7c = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0xec)) / ZEXT816(4),0);
      local_988 = local_988 + 1, local_a7c != 0; local_a7c = local_a7c + -1) {
    local_6d8 = *local_988;
    *local_988 = *local_988 ^ local_a78;
    local_a78 = local_6d8;
  }
  local_8f8 = local_a78;
  param_7 = param_4;
  if (local_378[1] != -0x3f213f21) {
LAB_141db7d29:
    local_798 = local_378;
    for (local_790 = 0xf0; local_790 != 0; local_790 = local_790 + -1) {
      *(undefined *)local_798 = 0;
      local_798 = (unsigned int *)((long)local_798 + 1);
    }
    local_788 = &local_5a8;
    for (local_780 = 0x1d0; local_780 != 0; local_780 = local_780 + -1) {
      *(undefined *)local_788 = 0;
      local_788 = (code **)((long)local_788 + 1);
    }
    local_778 = local_288;
    for (local_770 = 0x280; local_770 != 0; local_770 = local_770 + -1) {
      *(undefined *)local_778 = 0;
      local_778 = (unsigned int *)((long)local_778 + 1);
    }
    pcVar6 = (code *)swi(3);
    lVar8 = (*pcVar6)();
    return lVar8;
  }
  local_9d0 = param_4 - CONCAT44(uStack_364,local_378[4]);
  local_6c8 = param_4 - (unsigned long)local_360;
  local_8a8 = &local_5a8;
  for (local_8a0 = 0x1d0; local_8a0 != 0; local_8a0 = local_8a0 + -1) {
    *(undefined *)local_8a8 = 0;
    local_8a8 = (code **)((long)local_8a8 + 1);
  }
  uVar2 = local_34c + 0xf & 0xfffffff0;
  if ((uVar2 == 0) || (0x280 < uVar2)) goto LAB_141db7d29;
  local_5d8 = (undefined *)(local_6c8 + (unsigned long)local_350);
  local_898 = local_288;
  local_890 = local_5d8;
  for (local_888 = (unsigned long)uVar2; local_888 != 0; local_888 = local_888 - 1) {
    *(undefined *)local_898 = *local_890;
    local_898 = (unsigned int *)((long)local_898 + 1);
    local_890 = local_890 + 1;
  }
  local_970 = local_a78;
  local_980 = local_288;
  for (local_a70 = SUB164(ZEXT416(uVar2) / ZEXT816(4),0); local_a70 != 0; local_a70 = local_a70 + -1
      ) {
    local_8f4 = *local_980;
    *local_980 = *local_980 ^ local_970;
    local_980 = local_980 + 1;
    local_970 = local_8f4;
  }
  local_ae8 = local_288;
  for (local_ad4 = 0; local_ad4 < 0x22; local_ad4 = local_ad4 + 1) {
    if ((unsigned int *)((long)local_288 + (unsigned long)local_34c) <= local_ae8) goto LAB_141db7d29;
    apuStack_4e8[local_ad4] = local_ae8;
    while (*(char *)local_ae8 != '\0') {
      local_ae8 = (unsigned int *)((long)local_ae8 + 1);
      if ((unsigned int *)((long)local_288 + (unsigned long)local_34c) <= local_ae8) goto LAB_141db7d29;
    }
    local_ae8 = (unsigned int *)((long)local_ae8 + 1);
  }
  if (local_ae8 != (unsigned int *)((long)local_288 + (unsigned long)local_34c)) goto LAB_141db7d29;
  local_b50 = (short *)0x0;
  local_918 = 0x6b;
  uStack_916 = 0x65;
  uStack_914 = 0x72;
  uStack_912 = 0x6e;
  uStack_910 = 0x65;
  uStack_90e = 0x6c;
  uStack_90c = 0x33;
  uStack_90a = 0x32;
  uStack_908 = 0x2e;
  uStack_906 = 100;
  uStack_904 = 0x6c;
  uStack_902 = 0x6c;
  uStack_900 = 0;
  if (local_2b0 == 0) {
    if (local_2a8 == 0) {
      if (local_2a0 == 0) {
        if (local_298 != 0) {
          local_4f8 = *(code **)(local_9d0 + local_298);
          local_b50 = (short *)(*local_4f8)(param_1,param_2,(unsigned long)uVar2 % 4,&local_918);
        }
      }
      else {
        local_500 = *(code **)(local_9d0 + local_2a0);
        local_b50 = (short *)(*local_500)();
      }
    }
    else {
      local_508 = *(code **)(local_9d0 + local_2a8);
      local_b50 = (short *)(*local_508)();
    }
  }
  else {
    local_510 = *(code **)(local_9d0 + local_2b0);
    local_b50 = (short *)(*local_510)();
  }
  if (local_b50 == (short *)0x0) goto LAB_141db7d29;
  if (local_290 == 0) {
    local_628 = local_b50;
    if (*local_b50 == 0x5a4d) {
      local_940 = (int *)((long)local_b50 + (long)*(int *)(local_b50 + 0x1e));
      if (*local_940 == 0x4550) {
        if (*(short *)(local_940 + 1) == -0x799c) {
          if (*(short *)(local_940 + 5) == 0xf0) {
            local_978 = (unsigned int *)(local_940 + 0x22);
            if (local_940[0x23] == 0) {
              local_b18 = (code *)0x0;
            }
            else {
              uVar1 = *local_978;
              if ((*(int *)((long)local_b50 + (unsigned long)uVar1 + 0x18) == 0) ||
                 (*(int *)((long)local_b50 + (unsigned long)uVar1 + 0x14) == 0)) {
                local_b18 = (code *)0x0;
              }
              else {
                local_880 = (unsigned int *)((long)local_b50 +
                                    (unsigned long)*(unsigned int *)((long)local_b50 + (unsigned long)uVar1 + 0x20));
                local_878 = (unsigned short *)
                            ((long)local_b50 +
                            (unsigned long)*(unsigned int *)((long)local_b50 + (unsigned long)uVar1 + 0x24));
                local_ad8 = 0xffffffff;
                for (local_a6c = 0; local_a6c < *(unsigned int *)((long)local_b50 + (unsigned long)uVar1 + 0x18);
                    local_a6c = local_a6c + 1) {
                  local_9f8 = (char *)apuStack_4e8[23];
                  for (local_9c0 = (char *)((long)local_b50 + (unsigned long)*local_880);
                      (*local_9f8 != '\0' && (*local_9c0 != '\0')); local_9c0 = local_9c0 + 1) {
                    if (*local_9f8 < *local_9c0) {
                      local_b2c = -1;
                      goto LAB_141db5de3;
                    }
                    if (*local_9c0 < *local_9f8) {
                      local_b2c = 1;
                      goto LAB_141db5de3;
                    }
                    local_9f8 = local_9f8 + 1;
                  }
                  if (*local_9c0 == '\0') {
                    if (*local_9f8 == '\0') {
                      local_b2c = 0;
                    }
                    else {
                      local_b2c = 1;
                    }
                  }
                  else {
                    local_b2c = -1;
                  }
LAB_141db5de3:
                  if (local_b2c == 0) {
                    local_ad8 = (unsigned int)*local_878;
                    break;
                  }
                  local_880 = local_880 + 1;
                  local_878 = local_878 + 1;
                }
                if (local_ad8 == 0xffffffff) {
                  local_b18 = (code *)0x0;
                }
                else if (*(unsigned int *)((long)local_b50 + (unsigned long)uVar1 + 0x14) < local_ad8) {
                  local_b18 = (code *)0x0;
                }
                else {
                  uVar1 = *(unsigned int *)((long)local_b50 +
                                   (long)(int)local_ad8 * 4 +
                                   (unsigned long)*(unsigned int *)((long)local_b50 + (unsigned long)uVar1 + 0x1c));
                  if ((uVar1 < *local_978) || (*local_978 + local_940[0x23] <= uVar1)) {
                    local_b18 = (code *)((long)local_b50 + (unsigned long)uVar1);
                  }
                  else {
                    local_b18 = (code *)0x0;
                  }
                }
              }
            }
          }
          else {
            local_b18 = (code *)0x0;
          }
        }
        else {
          local_b18 = (code *)0x0;
        }
      }
      else {
        local_b18 = (code *)0x0;
      }
    }
    else {
      local_b18 = (code *)0x0;
    }
    local_4f0 = local_b18;
    if (local_b18 == (code *)0x0) goto LAB_141db7d29;
  }
  else {
    local_4f0 = *(code **)(local_9d0 + local_290);
  }
  if ((((local_2b0 == 0) &&
       (local_510 = (code *)(*local_4f0)(param_1,param_2,apuStack_4e8[24],local_b50),
       local_510 == (code *)0x0)) ||
      (local_500 = (code *)(*local_4f0)(param_1,param_2,apuStack_4e8[25],local_b50),
      local_500 == (code *)0x0)) || (local_6d0 = (*local_500)(), local_6d0 == 0))
  goto LAB_141db7d29;
  local_ac0 = &local_5a8;
  for (local_adc = 0; local_adc < 3; local_adc = local_adc + 1) {
    pcVar6 = (code *)(*local_4f0)(param_1,param_2,apuStack_4e8[local_adc],local_6d0);
    *local_ac0 = pcVar6;
    if (*local_ac0 == (code *)0x0) goto LAB_141db7d29;
    local_ac0 = local_ac0 + 1;
  }
  local_ac0 = &local_590;
  for (local_ae0 = 0; local_ae0 < 0x10; local_ae0 = local_ae0 + 1) {
    pcVar6 = (code *)(*local_4f0)(param_1,param_2,apuStack_4e8[local_ae0 + 3],local_b50);
    *local_ac0 = pcVar6;
    if (*local_ac0 == (code *)0x0) goto LAB_141db7d29;
    local_ac0 = local_ac0 + 1;
  }
  if ((local_33c & 0x20) == 0) {
    local_968 = *(long *)(in_GS_OFFSET + 0x30);
    if (((local_968 == 0) || (*(long *)(local_968 + 0x30) != local_968)) ||
       ((*(long *)(local_968 + 0x60) == 0 || (*(char *)(*(long *)(local_968 + 0x60) + 2) != '\0') )))
    {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      local_b98 = 'T';
      goto LAB_141db7e3a;
    }
  }
  if ((local_2d0 & 1) != 0) {
    local_870 = in_stack_00000028;
    local_8f0 = *(int *)(in_stack_00000028 + 0x58);
    if (local_8f0 != 1) goto LAB_141db7bef;
  }
  psVar7 = (short *)(*local_5a8)(param_1,param_2,local_344,1);
  uVar1 = local_334;
  if (psVar7 == (short *)0x0) {
    local_b98 = 'W';
    local_334 = uVar1;
    goto LAB_141db7e3a;
  }
  local_620 = (undefined *)(local_6c8 + (unsigned long)local_348);
  local_868 = psVar7;
  local_860 = local_620;
  for (local_858 = (unsigned long)local_344; local_858 != 0; local_858 = local_858 - 1) {
    *(undefined *)local_868 = *local_860;
    local_868 = (short *)((long)local_868 + 1);
    local_860 = local_860 + 1;
  }
  local_6c0 = aiStack_2e0;
  local_8e0 = local_344 / 8;
  local_9a8 = 0x55555555;
  local_9a4 = 0x55555555;
  local_ac4 = 0;
  psVar11 = (short *)((unsigned long)local_344 % 8);
  while( true ) {
    auVar19._8_8_ = psVar11;
    auVar19._0_8_ = local_7f0;
    auVar17._8_8_ = psVar11;
    auVar17._0_8_ = local_7f0;
    if (local_8e0 <= local_ac4) break;
    uVar3 = local_ac4 * 2;
    local_8dc = *(unsigned int *)(psVar7 + (unsigned long)uVar3 * 2);
    local_8d8 = *(unsigned int *)(psVar7 + (unsigned long)(uVar3 + 1) * 2);
    local_b30 = 0xc6ef3720;
    local_b44 = local_8dc;
    local_b40 = local_8d8;
    for (local_a64 = 0; local_a64 < 0x20; local_a64 = local_a64 + 1) {
      local_b40 = local_b40 -
                  ((local_b44 << 4 ^ local_b44 >> 5) + local_b44 ^
                  local_b30 + local_6c0[local_b30 >> 0xb & 3]);
      local_b30 = local_b30 + 0x61c88647;
      local_b44 = local_b44 -
                  ((local_b40 * 0x10 ^ local_b40 >> 5) + local_b40 ^
                  local_b30 + local_6c0[local_b30 & 3]);
    }
    *(unsigned int *)(psVar7 + (unsigned long)uVar3 * 2) = local_b44 ^ local_9a8;
    *(unsigned int *)(psVar7 + (unsigned long)(uVar3 + 1) * 2) = local_b40 ^ local_9a4;
    local_ac4 = local_ac4 + 1;
    psVar11 = psVar7;
    local_9a8 = local_8dc;
    local_9a4 = local_8d8;
  }
  local_334 = 0;
  local_b70 = 0;
  local_618 = local_288;
  for (local_acc = 0; local_acc < uVar2; local_acc = local_acc + 1) {
    local_b70 = local_b70 ^ (unsigned int)*(byte *)((long)local_618 + (unsigned long)local_acc) << 0x18;
    for (local_a60 = 8; 0 < local_a60; local_a60 = local_a60 + -1) {
      if ((local_b70 & 0x80000000) == 0) {
        local_b70 = local_b70 << 1;
      }
      else {
        local_b70 = local_b70 << 1 ^ 0x488781ed;
      }
    }
  }
  local_b68 = local_b70;
  local_610 = local_378;
  for (local_ac8 = 0; local_ac8 < 0xf0; local_ac8 = local_ac8 + 1) {
    local_b68 = local_b68 ^ (unsigned int)*(byte *)((long)local_610 + (unsigned long)local_ac8) << 0x18;
    for (local_a5c = 8; 0 < local_a5c; local_a5c = local_a5c + -1) {
      if ((local_b68 & 0x80000000) == 0) {
        local_b68 = local_b68 << 1;
      }
      else {
        local_b68 = local_b68 << 1 ^ 0x488781ed;
      }
    }
  }
  local_b60 = local_b68;
  local_608 = param_7;
  for (local_b00 = 0; local_b00 < (local_35c + 0xfU & 0xfffffff0); local_b00 = local_b00 + 1) {
    local_b60 = local_b60 ^ (unsigned int)*(byte *)(param_7 + (unsigned long)local_b00) << 0x18;
    for (local_a58 = 8; 0 < local_a58; local_a58 = local_a58 + -1) {
      if ((local_b60 & 0x80000000) == 0) {
        local_b60 = local_b60 << 1;
      }
      else {
        local_b60 = local_b60 << 1 ^ 0x488781ed;
      }
    }
  }
  local_b78 = local_b60;
  for (local_afc = 0; local_afc < local_344; local_afc = local_afc + 1) {
    local_b78 = local_b78 ^ (unsigned int)*(byte *)((long)psVar7 + (unsigned long)local_afc) << 0x18;
    for (local_a54 = 8; 0 < local_a54; local_a54 = local_a54 + -1) {
      if ((local_b78 & 0x80000000) == 0) {
        local_b78 = local_b78 << 1;
      }
      else {
        local_b78 = local_b78 << 1 ^ 0x488781ed;
      }
    }
  }
  local_938 = psVar7;
  local_600 = psVar7;
  if (local_b78 != uVar1) {
    local_b98 = 'Q';
    local_334 = uVar1;
    goto LAB_141db7e3a;
  }
  local_6b8 = (unsigned long)local_344;
  local_a00 = psVar7;
  if ((local_6b8 < 0x40) || (*psVar7 != 0x5a4d)) {
    local_b80 = (short *)0x0;
    local_334 = uVar1;
    auVar19 = auVar17;
  }
  else {
    piVar10 = (int *)((long)psVar7 + (long)*(int *)(psVar7 + 0x1e));
    if ((local_6b8 < (long)*(int *)(psVar7 + 0x1e) + 0x108U) || (*piVar10 != 0x4550)) {
      local_b80 = (short *)0x0;
      local_334 = uVar1;
    }
    else {
      local_334 = uVar1;
      auVar17 = (*local_540)(param_1,param_2,piVar10[0x14],*(undefined8 *)(piVar10 + 0xc),0x2000, 4);
      if (auVar17._0_8_ == 0) {
        auVar17 = (*local_540)(param_1,param_2,piVar10[0x14],0,0x2000,4);
      }
      auVar19._8_8_ = auVar17._8_8_;
      auVar19._0_8_ = local_7f0;
      local_b08 = auVar17._0_8_;
      if (local_b08 == (short *)0x0) {
        local_b80 = (short *)0x0;
      }
      else {
        local_850 = local_a18;
        for (local_848 = 0x18; local_848 != 0; local_848 = local_848 + -1) {
          *local_850 = 0;
          local_850 = local_850 + 1;
        }
        local_a10 = local_b08;
        auVar18 = (*local_540)(param_1,param_2,piVar10[0x14],local_b08,0x1000,4);
        local_8d0 = *(int *)(local_a00 + 0x1e) + piVar10[0x15];
        local_838 = local_a00;
        local_840 = auVar18._0_8_;
        for (local_830 = (unsigned long)local_8d0; local_830 != 0; local_830 = local_830 - 1) {
          *local_840 = *(undefined *)local_838;
          local_840 = local_840 + 1;
          local_838 = (short *)((long)local_838 + 1);
        }
        local_a08 = auVar18._0_8_ + *(int *)(local_a00 + 0x1e);
        *(short **)(local_a08 + 0x30) = local_b08;
        local_6a8 = local_a10;
        local_aa8 = local_a08 + (unsigned long)*(unsigned short *)(local_a08 + 0x14) + 0x18;
        local_a50 = 0;
        while( true ) {
          psVar11 = local_a10;
          uVar12 = auVar18._8_8_;
          local_6b0 = auVar18._0_8_;
          if ((int)(unsigned int)*(unsigned short *)(local_a08 + 6) <= local_a50) break;
          if (*(int *)(local_aa8 + 0x10) == 0) {
            uVar2 = piVar10[0xe];
            if (uVar2 != 0) {
              auVar19 = (*local_540)(param_1,param_2,uVar2,
                                     (long)local_6a8 + (unsigned long)*(unsigned int *)(local_aa8 + 0xc),0x1000,4) ;
              auVar18._8_8_ = auVar19._8_8_;
              auVar18._0_8_ = local_6b0;
              local_818 = auVar19._0_8_;
              local_828 = local_818;
              for (local_820 = (unsigned long)uVar2; local_820 != 0; local_820 = local_820 - 1) {
                *local_828 = 0;
                local_828 = local_828 + 1;
              }
            }
          }
          else {
            auVar19 = (*local_540)(param_1,param_2,*(undefined4 *)(local_aa8 + 0x10),
                                   (long)local_6a8 + (unsigned long)*(unsigned int *)(local_aa8 + 0xc),0x1000,4);
            auVar18._8_8_ = auVar19._8_8_;
            auVar18._0_8_ = local_6b0;
            local_818 = auVar19._0_8_;
            local_5f8 = (undefined *)((long)psVar7 + (unsigned long)*(unsigned int *)(local_aa8 + 0x14));
            local_810 = local_818;
            local_808 = local_5f8;
            for (local_800 = (unsigned long)*(unsigned int *)(local_aa8 + 0x10); local_800 != 0;
                local_800 = local_800 - 1) {
              *local_810 = *local_808;
              local_810 = local_810 + 1;
              local_808 = local_808 + 1;
            }
          }
          local_a50 = local_a50 + 1;
          local_aa8 = local_aa8 + 0x28;
        }
        local_7f8 = (long)local_b08 - *(long *)(piVar10 + 0xc);
        if (local_7f8 != 0) {
          local_698 = local_a10;
          local_6a0 = (unsigned int *)(local_a08 + 0xb0);
          if (*(int *)(local_a08 + 0xb4) != 0) {
            for (local_a38 = (unsigned int *)((long)local_a10 + (unsigned long)*local_6a0); *local_a38 != 0;
                local_a38 = (unsigned int *)((long)local_a38 + (unsigned long)local_a38[1])) {
              local_688 = (long)local_a10 + (unsigned long)*local_a38;
              local_930 = local_a38 + 2;
              local_a48 = 0;
              while( true ) {
                local_5f0 = (unsigned long)local_a48;
                uVar12 = ((unsigned long)local_a38[1] - 8) % 2;
                if (((unsigned long)local_a38[1] - 8) / 2 <= local_5f0) break;
                local_8cc = (int)(unsigned int)*(unsigned short *)local_930 >> 0xc;
                local_9a0 = *(unsigned short *)local_930 & 0xfff;
                if (local_8cc != 0) {
                  if (local_8cc == 3) {
                    local_690 = (int *)(local_688 + (int)local_9a0);
                    *local_690 = *local_690 + (int)local_7f8;
                  }
                  else {
                    if (local_8cc != 10) {
                      pcVar6 = (code *)swi(3);
                      lVar8 = (*pcVar6)();
                      return lVar8;
                    }
                    local_680 = (long *)(local_688 + (int)local_9a0);
                    *local_680 = *local_680 + local_7f8;
                  }
                }
                local_a48 = local_a48 + 1;
                local_930 = (unsigned int *)((long)local_930 + 2);
              }
            }
          }
        }
        local_678 = (unsigned int *)(local_a08 + 0x90);
        if (*(int *)(local_a08 + 0x94) != 0) {
          for (local_b10 = (unsigned int *)((long)local_a10 + (unsigned long)*local_678);
              (iVar4 = (*local_528)(param_1,param_2,0x14,local_b10), uVar12 = extraout_RDX,
              iVar4 == 0 && (local_b10[3] != 0)); local_b10 = local_b10 + 5) {
            local_5e8 = (long)psVar11 + (unsigned long)local_b10[3];
            auVar19 = (*local_500)();
            local_7f0 = auVar19._0_8_;
            if (local_7f0 == 0) {
              bVar14 = false;
              goto LAB_141db7209;
            }
            if (*local_b10 == 0) {
              uVar1 = local_b10[4];
              uVar2 = local_b10[4];
            }
            else {
              uVar1 = *local_b10;
              uVar2 = local_b10[4];
            }
            local_9f0 = (long *)((long)psVar11 + (unsigned long)uVar2);
            for (local_a30 = (unsigned long *)((long)psVar11 + (unsigned long)uVar1); *local_a30 != 0;
                local_a30 = local_a30 + 1) {
              if ((*local_a30 & 0x8000000000000000) == 0) {
                local_5e0 = (long)psVar11 + *local_a30;
                auVar19 = (*local_4f0)(param_1,param_2,local_5e0 + 2,local_7f0);
                uVar13 = auVar19._8_8_;
                *local_9f0 = auVar19._0_8_;
              }
              else {
                auVar19 = (*local_4f0)(param_1,param_2,*local_a30 & 0xffff,local_7f0);
                uVar13 = auVar19._8_8_;
                *local_9f0 = auVar19._0_8_;
              }
              auVar19._8_8_ = uVar13;
              auVar19._0_8_ = local_7f0;
              if (*local_9f0 == 0) {
                bVar14 = false;
                goto LAB_141db7209;
              }
              local_9f0 = local_9f0 + 1;
            }
          }
        }
        auVar19._8_8_ = uVar12;
        auVar19._0_8_ = local_7f0;
        bVar14 = true;
LAB_141db7209:
        if (bVar14) {
          local_b38 = local_a08 + (unsigned long)*(unsigned short *)(local_a08 + 0x14) + 0x18;
          for (local_a98 = 0; local_7f0 = auVar19._0_8_,
              local_a98 < (int)(unsigned int)*(unsigned short *)(local_a08 + 6); local_a98 = local_a98 + 1) {
            bVar14 = (*(unsigned int *)(local_b38 + 0x24) & 0x20000000) != 0;
            local_99c = (unsigned int)bVar14;
            bVar15 = (*(unsigned int *)(local_b38 + 0x24) & 0x40000000) != 0;
            local_998 = (unsigned int)bVar15;
            bVar16 = (*(unsigned int *)(local_b38 + 0x24) & 0x80000000) != 0;
            local_994 = (unsigned int)bVar16;
            if ((*(unsigned int *)(local_b38 + 0x24) & 0x2000000) == 0) {
              if (bVar15) {
                if (bVar16) {
                  local_b58 = 4;
                }
                else {
                  local_b58 = 2;
                }
              }
              else if (bVar16) {
                local_b58 = 8;
              }
              else {
                local_b58 = 1;
              }
              if (bVar14) {
                local_b58 = local_b58 << 4;
              }
              if ((*(unsigned int *)(local_b38 + 0x24) & 0x4000000) != 0) {
                local_b58 = local_b58 | 0x200;
              }
              local_af8 = *(int *)(local_b38 + 0x10);
              if (local_af8 == 0) {
                if ((*(unsigned int *)(local_b38 + 0x24) & 0x40) == 0) {
                  if ((*(unsigned int *)(local_b38 + 0x24) & 0x80) != 0) {
                    local_af8 = *(int *)(local_a08 + 0x24);
                  }
                }
                else {
                  local_af8 = *(int *)(local_a08 + 0x20);
                }
              }
              if (local_af8 != 0) {
                (*local_530)(param_1,param_2,*(undefined4 *)(local_b38 + 0x10),
                             (unsigned long)*(unsigned int *)(local_b38 + 0xc) + (long)local_a10,local_b58,local_5 b8
                            );
                auVar19._8_8_ = extraout_RDX_01;
                auVar19._0_8_ = local_7f0;
              }
            }
            else {
              (*local_538)(param_1,param_2,*(undefined4 *)(local_b38 + 0x10),
                           (unsigned long)*(unsigned int *)(local_b38 + 0xc) + (long)local_a10);
              auVar19._8_8_ = extraout_RDX_00;
              auVar19._0_8_ = local_7f0;
            }
            local_b38 = local_b38 + 0x28;
          }
          if (*(int *)(local_a08 + 0x28) == 0) {
LAB_141db7525:
            local_b80 = local_b08;
          }
          else {
            local_670 = (code *)((long)local_b08 + (unsigned long)*(unsigned int *)(local_a08 + 0x28));
            if (local_670 == (code *)0x0) {
              local_b80 = (short *)0x0;
            }
            else {
              local_8c8 = (*local_670)(param_1,param_2,1,local_b08,0);
              auVar19._8_8_ = extraout_RDX_02;
              auVar19._0_8_ = local_7f0;
              if (local_8c8 != 0) {
                local_a18[0] = 1;
                goto LAB_141db7525;
              }
              local_b80 = (short *)0x0;
            }
          }
        }
        else {
          local_b80 = (short *)0x0;
        }
      }
    }
  }
  local_7f0 = auVar19._0_8_;
  local_7e8 = psVar7;
  for (local_7e0 = (unsigned long)local_344; local_7e0 != 0; local_7e0 = local_7e0 - 1) {
    *(undefined *)local_7e8 = 0;
    local_7e8 = (short *)((long)local_7e8 + 1);
  }
  (*local_5a0)(param_1,param_2,auVar19._8_8_,psVar7);
  if (local_b80 == (short *)0x0) {
    local_b98 = 'B';
  }
  else {
    local_668 = local_b80;
    if (*local_b80 == 0x5a4d) {
      local_928 = (int *)((long)local_b80 + (long)*(int *)(local_b80 + 0x1e));
      if (*local_928 == 0x4550) {
        if (*(short *)(local_928 + 1) == -0x799c) {
          if (*(short *)(local_928 + 5) == 0xf0) {
            local_9b8 = (unsigned int *)(local_928 + 0x22);
            if (local_928[0x23] == 0) {
              local_b20 = (code *)0x0;
            }
            else {
              uVar2 = *local_9b8;
              if ((*(int *)((long)local_b80 + (unsigned long)uVar2 + 0x18) == 0) ||
                 (*(int *)((long)local_b80 + (unsigned long)uVar2 + 0x14) == 0)) {
                local_b20 = (code *)0x0;
              }
              else {
                local_7d8 = (unsigned int *)((long)local_b80 +
                                    (unsigned long)*(unsigned int *)((long)local_b80 + (unsigned long)uVar2 + 0x20));
                local_7d0 = (unsigned short *)
                            ((long)local_b80 +
                            (unsigned long)*(unsigned int *)((long)local_b80 + (unsigned long)uVar2 + 0x24));
                local_af4 = 0xffffffff;
                for (local_a94 = 0; local_a94 < *(unsigned int *)((long)local_b80 + (unsigned long)uVar2 + 0x18);
                    local_a94 = local_a94 + 1) {
                  local_9e0 = (char *)apuStack_4e8[33];
                  for (local_9e8 = (char *)((long)local_b80 + (unsigned long)*local_7d8);
                      (*local_9e0 != '\0' && (*local_9e8 != '\0')); local_9e8 = local_9e8 + 1) {
                    if (*local_9e0 < *local_9e8) {
                      local_b24 = -1;
                      goto LAB_141db78b6;
                    }
                    if (*local_9e8 < *local_9e0) {
                      local_b24 = 1;
                      goto LAB_141db78b6;
                    }
                    local_9e0 = local_9e0 + 1;
                  }
                  if (*local_9e8 == '\0') {
                    if (*local_9e0 == '\0') {
                      local_b24 = 0;
                    }
                    else {
                      local_b24 = 1;
                    }
                  }
                  else {
                    local_b24 = -1;
                  }
LAB_141db78b6:
                  if (local_b24 == 0) {
                    local_af4 = (unsigned int)*local_7d0;
                    break;
                  }
                  local_7d8 = local_7d8 + 1;
                  local_7d0 = local_7d0 + 1;
                }
                if (local_af4 == 0xffffffff) {
                  local_b20 = (code *)0x0;
                }
                else if (*(unsigned int *)((long)local_b80 + (unsigned long)uVar2 + 0x14) < local_af4) {
                  local_b20 = (code *)0x0;
                }
                else {
                  uVar2 = *(unsigned int *)((long)local_b80 +
                                   (long)(int)local_af4 * 4 +
                                   (unsigned long)*(unsigned int *)((long)local_b80 + (unsigned long)uVar2 + 0x1c));
                  if ((uVar2 < *local_9b8) || (*local_9b8 + local_928[0x23] <= uVar2)) {
                    local_b20 = (code *)((long)local_b80 + (unsigned long)uVar2);
                  }
                  else {
                    local_b20 = (code *)0x0;
                  }
                }
              }
            }
          }
          else {
            local_b20 = (code *)0x0;
          }
        }
        else {
          local_b20 = (code *)0x0;
        }
      }
      else {
        local_b20 = (code *)0x0;
      }
    }
    else {
      local_b20 = (code *)0x0;
    }
    local_660 = local_b20;
    if (local_b20 == (code *)0x0) {
      local_b98 = 'C';
    }
    else {
      local_b98 = (*local_b20)(param_1,param_2,local_378,param_7,0xf0);
      if (local_b98 == '0') {
        local_658 = local_b80;
        if ((((*local_b80 == 0x5a4d) &&
             (local_9d8 = (int *)((long)local_b80 + (long)*(int *)(local_b80 + 0x1e)),
             *local_9d8 == 0x4550)) && (*(short *)(local_9d8 + 1) == -0x799c)) &&
           (*(short *)(local_9d8 + 5) == 0xf0)) {
          local_920 = local_b80;
          if (local_9d8[10] != 0) {
            local_650 = (code *)((long)local_b80 + (unsigned long)(unsigned int)local_9d8[10]);
            if (local_650 == (code *)0x0) goto LAB_141db7bef;
            (*local_650)(param_1,param_2,0,local_b80,0);
          }
          local_648 = (unsigned int *)(local_9d8 + 0x24);
          if (local_9d8[0x25] != 0) {
            local_9b0 = (long)local_920 + (unsigned long)*local_648;
            while ((iVar4 = (*local_528)(param_1,param_2,0x14,local_9b0), iVar4 == 0 &&
                   (*(int *)(local_9b0 + 0xc) != 0))) {
              local_5b0 = (long)local_920 + (unsigned long)*(unsigned int *)(local_9b0 + 0xc);
              local_640 = (*local_510)();
              if (local_640 != 0) {
                (*local_518)();
              }
              local_9b0 = local_9b0 + 0x14;
            }
          }
          (*local_538)(param_1,param_2,0,local_b80,0x8000);
        }
LAB_141db7bef:
        local_7c8 = local_378;
        for (local_7c0 = 0xf0; local_7c0 != 0; local_7c0 = local_7c0 + -1) {
          *(undefined *)local_7c8 = 0;
          local_7c8 = (unsigned int *)((long)local_7c8 + 1);
        }
        local_7b8 = &local_5a8;
        for (local_7b0 = 0x1d0; local_7b0 != 0; local_7b0 = local_7b0 + -1) {
          *(undefined *)local_7b8 = 0;
          local_7b8 = (code **)((long)local_7b8 + 1);
        }
        local_7a8 = local_288;
        for (local_7a0 = 0x280; local_7a0 != 0; local_7a0 = local_7a0 + -1) {
          *(undefined *)local_7a8 = 0;
          local_7a8 = (unsigned int *)((long)local_7a8 + 1);
        }
        return local_9d0 + local_358;
      }
    }
  }
LAB_141db7e3a:
  local_5c0 = local_590;
  iVar4 = (*local_588)();
  if (((local_b98 != '5') && (local_b98 != '0')) && (local_b98 != 'E')) {
    local_958 = local_3a0;
    for (local_960 = (char *)apuStack_4e8[29]; *local_960 != '\0'; local_960 = local_960 + 1) {
      *local_958 = *local_960;
      local_958 = local_958 + 1;
    }
    *local_958 = '\0';
    local_948 = local_3d8;
    for (local_950 = (char *)apuStack_4e8[30]; *local_950 != '\0'; local_950 = local_950 + 1) {
      *local_948 = *local_950;
      local_948 = local_948 + 1;
    }
    *local_948 = '\0';
    local_a88 = iVar4 + 0xff98;
    local_760 = 0;
    for (local_768 = local_3d8; *local_768 != '\0'; local_768 = local_768 + 1) {
      local_760 = local_760 + 1;
    }
    pcVar9 = local_3d8 + local_760;
    do {
      local_9c8 = pcVar9;
      pcVar9 = local_9c8 + -1;
      if (pcVar9 <= local_3d8) goto LAB_141db8117;
    } while (*pcVar9 != ':');
    local_9c8[-2] = local_b98;
    local_5c8 = local_9c8;
    local_aec = 1000000000;
    for (local_af0 = 0; local_af0 < 10; local_af0 = local_af0 + 1) {
      local_990 = local_a88 / local_aec;
      local_9c8[local_af0] = (char)local_990 + '0';
      local_a88 = local_a88 - local_990 * local_aec;
      local_aec = local_aec / 10;
    }
LAB_141db8117:
    local_9c8 = pcVar9;
    if (CONCAT44(uStack_364,local_378[4]) < 0x100000000) {
      local_748 = (*local_580)(param_1,param_2,0,0x100000,apuStack_4e8[28]);
      local_750 = (*local_578)(param_1,param_2,0,2,apuStack_4e8[27]);
      if ((local_748 == 0) || (local_750 == 0)) {
        local_b97 = '5';
      }
      else {
        iVar4 = (*local_568)(param_1,param_2,5000,local_748);
        if (iVar4 == 0) {
          lVar8 = (*local_570)(param_1,param_2,2,local_750,0,0);
          local_758 = lVar8;
          if (lVar8 == 0) {
            local_b97 = 'H';
          }
          else if (*(int *)(lVar8 + 0x90) == 2) {
            if (*(int *)(lVar8 + 0x94) == 0) {
              local_740 = (*local_560)(param_1,param_2,0,0,0,0);
              uVar5 = (*local_548)();
              *(undefined4 *)(lVar8 + 0x98) = uVar5;
              *(undefined4 *)(lVar8 + 0xa8) = local_340;
              *(unsigned int *)(lVar8 + 0xac) = local_334;
              *(unsigned int *)(lVar8 + 0xb4) = local_378[4] + -0xf0;
              *(int *)(lVar8 + 0xb0) = (int)local_b98;
              *(undefined8 *)(lVar8 + 0xa0) = local_740;
              *(undefined4 *)(lVar8 + 0x94) = 2;
              iVar4 = (*local_568)(param_1,param_2,5000,local_740);
              (*local_558)();
              (*local_550)();
              (*local_550)();
              (*local_550)();
              if (iVar4 == 0) {
                local_b97 = '0';
              }
              else {
                local_b97 = 'L';
              }
            }
            else {
              local_b97 = 'J';
            }
          }
          else {
            local_b97 = 'I';
          }
        }
        else {
          local_b97 = 'G';
        }
      }
    }
    else {
      local_b97 = '5';
    }
    if (((local_b97 != '0') && ((local_33c & 0x40) == 0)) &&
       (local_638 = (*local_500)(), local_638 != 0)) {
      local_630 = (code *)(*local_4f0)(param_1,param_2,apuStack_4e8[26],local_638);
      local_738 = local_378;
      for (local_730 = 0xf0; local_730 != 0; local_730 = local_730 + -1) {
        *(undefined *)local_738 = 0;
        local_738 = (unsigned int *)((long)local_738 + 1);
      }
      local_728 = &local_5a8;
      for (local_720 = 0x1d0; local_720 != 0; local_720 = local_720 + -1) {
        *(undefined *)local_728 = 0;
        local_728 = (code **)((long)local_728 + 1);
      }
      local_718 = local_288;
      for (local_710 = 0x280; local_710 != 0; local_710 = local_710 + -1) {
        *(undefined *)local_718 = 0;
        local_718 = (unsigned int *)((long)local_718 + 1);
      }
      if (local_630 != (code *)0x0) {
        (*local_630)(param_1,param_2,local_3d8,0,local_3a0,0x10);
      }
    }
  }
  local_708 = local_378;
  for (local_700 = 0xf0; local_700 != 0; local_700 = local_700 + -1) {
    *(undefined *)local_708 = 0;
    local_708 = (unsigned int *)((long)local_708 + 1);
  }
  local_6f8 = &local_5a8;
  for (local_6f0 = 0x1d0; local_6f0 != 0; local_6f0 = local_6f0 + -1) {
    *(undefined *)local_6f8 = 0;
    local_6f8 = (code **)((long)local_6f8 + 1);
  }
  local_6e8 = local_288;
  for (local_6e0 = 0x280; local_6e0 != 0; local_6e0 = local_6e0 + -1) {
    *(undefined *)local_6e8 = 0;
    local_6e8 = (unsigned int *)((long)local_6e8 + 1);
  }
  (*local_5c0)(param_1,param_2,(int)local_b98,0xffffffffffffffff);
  return 0;
}
