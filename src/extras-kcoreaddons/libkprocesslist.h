#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKPROCESSLIST_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKPROCESSLIST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KProcessList__KProcessInfo)
typedef KProcessList::KProcessInfo KProcessList__KProcessInfo;
#endif
#else
typedef struct KProcessList KProcessList;
typedef struct KProcessList__KProcessInfo KProcessList__KProcessInfo;
#endif

KProcessList__KProcessInfo* KProcessList__KProcessInfo_new();
KProcessList__KProcessInfo* KProcessList__KProcessInfo_new2(long long pid, const libqt_string command, const libqt_string user);
KProcessList__KProcessInfo* KProcessList__KProcessInfo_new3(long long pid, const libqt_string command, const libqt_string name, const libqt_string user);
KProcessList__KProcessInfo* KProcessList__KProcessInfo_new4(const KProcessList__KProcessInfo* other);
void KProcessList__KProcessInfo_OperatorAssign(KProcessList__KProcessInfo* self, const KProcessList__KProcessInfo* other);
bool KProcessList__KProcessInfo_IsValid(const KProcessList__KProcessInfo* self);
long long KProcessList__KProcessInfo_Pid(const KProcessList__KProcessInfo* self);
libqt_string KProcessList__KProcessInfo_Name(const KProcessList__KProcessInfo* self);
libqt_string KProcessList__KProcessInfo_User(const KProcessList__KProcessInfo* self);
libqt_string KProcessList__KProcessInfo_Command(const KProcessList__KProcessInfo* self);
void KProcessList__KProcessInfo_Delete(KProcessList__KProcessInfo* self);

libqt_list /* of KProcessList__KProcessInfo* */ KProcessList_ProcessInfoList();
KProcessList__KProcessInfo* KProcessList_ProcessInfo(long long param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
