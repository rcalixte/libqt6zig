#pragma once
#ifndef SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBKGLOBALACCEL_H
#define SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBKGLOBALACCEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KGlobalAccel KGlobalAccel;
typedef struct KGlobalShortcutInfo KGlobalShortcutInfo;
typedef struct QAction QAction;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QMetaObject* KGlobalAccel_MetaObject(const KGlobalAccel* self);
void* KGlobalAccel_Metacast(KGlobalAccel* self, const char* param1);
int KGlobalAccel_Metacall(KGlobalAccel* self, int param1, int param2, void** param3);
libqt_string KGlobalAccel_Tr(const char* s);
KGlobalAccel* KGlobalAccel_Self();
void KGlobalAccel_StealShortcutSystemwide(const QKeySequence* seq);
bool KGlobalAccel_CleanComponent(const libqt_string componentUnique);
bool KGlobalAccel_IsComponentActive(const libqt_string componentName);
libqt_list /* of KGlobalShortcutInfo* */ KGlobalAccel_GlobalShortcutsByKey(const QKeySequence* seq);
bool KGlobalAccel_IsGlobalShortcutAvailable(const QKeySequence* seq);
bool KGlobalAccel_PromptStealShortcutSystemwide(QWidget* parent, const libqt_list /* of KGlobalShortcutInfo* */ shortcuts, const QKeySequence* seq);
bool KGlobalAccel_SetDefaultShortcut(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut);
bool KGlobalAccel_SetShortcut(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut);
bool KGlobalAccel_SetGlobalShortcut(QAction* action, const libqt_list /* of QKeySequence* */ shortcut);
bool KGlobalAccel_SetGlobalShortcut2(QAction* action, const QKeySequence* shortcut);
libqt_list /* of QKeySequence* */ KGlobalAccel_DefaultShortcut(const KGlobalAccel* self, const QAction* action);
libqt_list /* of QKeySequence* */ KGlobalAccel_Shortcut(const KGlobalAccel* self, const QAction* action);
libqt_list /* of QKeySequence* */ KGlobalAccel_GlobalShortcut(const KGlobalAccel* self, const libqt_string componentName, const libqt_string actionId);
void KGlobalAccel_RemoveAllShortcuts(KGlobalAccel* self, QAction* action);
bool KGlobalAccel_HasShortcut(const KGlobalAccel* self, const QAction* action);
void KGlobalAccel_GlobalShortcutChanged(KGlobalAccel* self, QAction* action, const QKeySequence* seq);
void KGlobalAccel_Connect_GlobalShortcutChanged(KGlobalAccel* self, intptr_t slot);
void KGlobalAccel_GlobalShortcutActiveChanged(KGlobalAccel* self, QAction* action, bool active);
void KGlobalAccel_Connect_GlobalShortcutActiveChanged(KGlobalAccel* self, intptr_t slot);
libqt_string KGlobalAccel_Tr2(const char* s, const char* c);
libqt_string KGlobalAccel_Tr3(const char* s, const char* c, int n);
libqt_list /* of KGlobalShortcutInfo* */ KGlobalAccel_GlobalShortcutsByKey2(const QKeySequence* seq, int typeVal);
bool KGlobalAccel_IsGlobalShortcutAvailable2(const QKeySequence* seq, const libqt_string component);
bool KGlobalAccel_SetDefaultShortcut3(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut, int loadFlag);
bool KGlobalAccel_SetShortcut3(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut, int loadFlag);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
