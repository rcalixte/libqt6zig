#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKDESKTOPFILEACTION_H
#define SRC_EXTRAS_KCONFIGC_LIBKDESKTOPFILEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDesktopFileAction KDesktopFileAction;
#endif

KDesktopFileAction* KDesktopFileAction_new();
KDesktopFileAction* KDesktopFileAction_new2(const libqt_string name, const libqt_string text, const libqt_string icon, const libqt_string exec, const libqt_string desktopFilePath);
KDesktopFileAction* KDesktopFileAction_new3(const KDesktopFileAction* other);
void KDesktopFileAction_OperatorAssign(KDesktopFileAction* self, const KDesktopFileAction* other);
libqt_string KDesktopFileAction_ActionsKey(const KDesktopFileAction* self);
libqt_string KDesktopFileAction_DesktopFilePath(const KDesktopFileAction* self);
libqt_string KDesktopFileAction_Name(const KDesktopFileAction* self);
libqt_string KDesktopFileAction_Icon(const KDesktopFileAction* self);
libqt_string KDesktopFileAction_Exec(const KDesktopFileAction* self);
bool KDesktopFileAction_IsSeparator(const KDesktopFileAction* self);
void KDesktopFileAction_Delete(KDesktopFileAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
