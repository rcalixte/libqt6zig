#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSTANDARDSHORTCUTWATCHER_H
#define SRC_EXTRAS_KCONFIGC_LIBKSTANDARDSHORTCUTWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KStandardShortcut__StandardShortcutWatcher)
typedef KStandardShortcut::StandardShortcutWatcher KStandardShortcut__StandardShortcutWatcher;
#endif
#else
typedef struct KStandardShortcut KStandardShortcut;
typedef struct KStandardShortcut__StandardShortcutWatcher KStandardShortcut__StandardShortcutWatcher;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KStandardShortcut__StandardShortcutWatcher_MetaObject(const KStandardShortcut__StandardShortcutWatcher* self);
void* KStandardShortcut__StandardShortcutWatcher_Metacast(KStandardShortcut__StandardShortcutWatcher* self, const char* param1);
int KStandardShortcut__StandardShortcutWatcher_Metacall(KStandardShortcut__StandardShortcutWatcher* self, int param1, int param2, void** param3);
libqt_string KStandardShortcut__StandardShortcutWatcher_Tr(const char* s);
void KStandardShortcut__StandardShortcutWatcher_ShortcutChanged(KStandardShortcut__StandardShortcutWatcher* self, int id, const libqt_list /* of QKeySequence* */ shortcut);
void KStandardShortcut__StandardShortcutWatcher_Connect_ShortcutChanged(KStandardShortcut__StandardShortcutWatcher* self, intptr_t slot);
libqt_string KStandardShortcut__StandardShortcutWatcher_Tr2(const char* s, const char* c);
libqt_string KStandardShortcut__StandardShortcutWatcher_Tr3(const char* s, const char* c, int n);
void KStandardShortcut__StandardShortcutWatcher_Delete(KStandardShortcut__StandardShortcutWatcher* self);

KStandardShortcut__StandardShortcutWatcher* KStandardShortcut_ShortcutWatcher();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
