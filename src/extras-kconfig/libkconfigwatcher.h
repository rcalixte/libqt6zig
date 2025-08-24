#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGWATCHER_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KConfigWatcher KConfigWatcher;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KConfigWatcher_MetaObject(const KConfigWatcher* self);
void* KConfigWatcher_Metacast(KConfigWatcher* self, const char* param1);
int KConfigWatcher_Metacall(KConfigWatcher* self, int param1, int param2, void** param3);
libqt_string KConfigWatcher_Tr(const char* s);
void KConfigWatcher_ConfigChanged(KConfigWatcher* self, const KConfigGroup* group, const libqt_list /* of libqt_string */ names);
void KConfigWatcher_Connect_ConfigChanged(KConfigWatcher* self, intptr_t slot);
libqt_string KConfigWatcher_Tr2(const char* s, const char* c);
libqt_string KConfigWatcher_Tr3(const char* s, const char* c, int n);
void KConfigWatcher_Delete(KConfigWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
