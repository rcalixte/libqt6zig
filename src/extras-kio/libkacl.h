#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKACL_H
#define SRC_EXTRAS_KIOC_LIBKACL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KACL KACL;
#endif

KACL* KACL_new(const libqt_string aclString);
KACL* KACL_new2(const KACL* rhs);
KACL* KACL_new3(mode_t basicPermissions);
KACL* KACL_new4();
void KACL_OperatorAssign(KACL* self, const KACL* rhs);
bool KACL_OperatorEqual(const KACL* self, const KACL* rhs);
bool KACL_OperatorNotEqual(const KACL* self, const KACL* rhs);
bool KACL_IsValid(const KACL* self);
uint16_t KACL_OwnerPermissions(const KACL* self);
bool KACL_SetOwnerPermissions(KACL* self, uint16_t ownerPermissions);
uint16_t KACL_OwningGroupPermissions(const KACL* self);
bool KACL_SetOwningGroupPermissions(KACL* self, uint16_t owningGroupPermissions);
uint16_t KACL_OthersPermissions(const KACL* self);
bool KACL_SetOthersPermissions(KACL* self, uint16_t othersPermissions);
mode_t KACL_BasePermissions(const KACL* self);
bool KACL_IsExtended(const KACL* self);
uint16_t KACL_MaskPermissions(const KACL* self, bool* exists);
bool KACL_SetMaskPermissions(KACL* self, uint16_t maskPermissions);
uint16_t KACL_NamedUserPermissions(const KACL* self, const libqt_string name, bool* exists);
bool KACL_SetNamedUserPermissions(KACL* self, const libqt_string name, uint16_t param2);
libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ KACL_AllUserPermissions(const KACL* self);
uint16_t KACL_NamedGroupPermissions(const KACL* self, const libqt_string name, bool* exists);
bool KACL_SetNamedGroupPermissions(KACL* self, const libqt_string name, uint16_t param2);
libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ KACL_AllGroupPermissions(const KACL* self);
bool KACL_SetACL(KACL* self, const libqt_string aclStr);
libqt_string KACL_AsString(const KACL* self);
void KACL_VirtualHook(KACL* self, int id, void* data);
void KACL_OnVirtualHook(KACL* self, intptr_t slot);
void KACL_QBaseVirtualHook(KACL* self, int id, void* data);
void KACL_Delete(KACL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
