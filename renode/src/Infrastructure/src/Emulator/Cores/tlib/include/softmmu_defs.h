#pragma once

uint8_t REGPARM __ldb_mmu(target_ulong addr, int mmu_idx);
uint8_t REGPARM __ldb_err_mmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stb_mmu(target_ulong addr, uint8_t val, int mmu_idx);
uint16_t REGPARM __ldw_mmu(target_ulong addr, int mmu_idx);
uint16_t REGPARM __ldw_err_mmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stw_mmu(target_ulong addr, uint16_t val, int mmu_idx);
uint32_t REGPARM __ldl_mmu(target_ulong addr, int mmu_idx);
uint32_t REGPARM __ldl_err_mmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stl_mmu(target_ulong addr, uint32_t val, int mmu_idx);
uint64_t REGPARM __ldq_mmu(target_ulong addr, int mmu_idx);
uint64_t REGPARM __ldq_err_mmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stq_mmu(target_ulong addr, uint64_t val, int mmu_idx);

uint8_t REGPARM __ldb_cmmu(target_ulong addr, int mmu_idx);
uint8_t REGPARM __ldb_err_cmmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stb_cmmu(target_ulong addr, uint8_t val, int mmu_idx);
uint16_t REGPARM __ldw_cmmu(target_ulong addr, int mmu_idx);
uint16_t REGPARM __ldw_err_cmmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stw_cmmu(target_ulong addr, uint16_t val, int mmu_idx);
uint32_t REGPARM __ldl_cmmu(target_ulong addr, int mmu_idx);
uint32_t REGPARM __ldl_err_cmmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stl_cmmu(target_ulong addr, uint32_t val, int mmu_idx);
uint64_t REGPARM __ldq_cmmu(target_ulong addr, int mmu_idx);
uint64_t REGPARM __ldq_err_cmmu(target_ulong addr, int mmu_idx, int *err);
void REGPARM __stq_cmmu(target_ulong addr, uint64_t val, int mmu_idx);
