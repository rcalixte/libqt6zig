#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWindowInfo KWindowInfo;
typedef struct NETExtendedStrut NETExtendedStrut;
typedef struct QRect QRect;
#endif

KWindowInfo* KWindowInfo_new(const KWindowInfo* param1);
bool KWindowInfo_Valid(const KWindowInfo* self);
uintptr_t KWindowInfo_Win(const KWindowInfo* self);
bool KWindowInfo_IsMinimized(const KWindowInfo* self);
NETExtendedStrut* KWindowInfo_ExtendedStrut(const KWindowInfo* self);
libqt_string KWindowInfo_VisibleName(const KWindowInfo* self);
libqt_string KWindowInfo_VisibleNameWithState(const KWindowInfo* self);
libqt_string KWindowInfo_Name(const KWindowInfo* self);
libqt_string KWindowInfo_VisibleIconName(const KWindowInfo* self);
libqt_string KWindowInfo_VisibleIconNameWithState(const KWindowInfo* self);
libqt_string KWindowInfo_IconName(const KWindowInfo* self);
bool KWindowInfo_IsOnCurrentDesktop(const KWindowInfo* self);
bool KWindowInfo_IsOnDesktop(const KWindowInfo* self, int desktop);
bool KWindowInfo_OnAllDesktops(const KWindowInfo* self);
int KWindowInfo_Desktop(const KWindowInfo* self);
libqt_list /* of libqt_string */ KWindowInfo_Activities(const KWindowInfo* self);
QRect* KWindowInfo_Geometry(const KWindowInfo* self);
QRect* KWindowInfo_FrameGeometry(const KWindowInfo* self);
uintptr_t KWindowInfo_TransientFor(const KWindowInfo* self);
uintptr_t KWindowInfo_GroupLeader(const KWindowInfo* self);
libqt_string KWindowInfo_WindowClassClass(const KWindowInfo* self);
libqt_string KWindowInfo_WindowClassName(const KWindowInfo* self);
libqt_string KWindowInfo_WindowRole(const KWindowInfo* self);
libqt_string KWindowInfo_ClientMachine(const KWindowInfo* self);
libqt_string KWindowInfo_DesktopFileName(const KWindowInfo* self);
libqt_string KWindowInfo_GtkApplicationId(const KWindowInfo* self);
int KWindowInfo_Pid(const KWindowInfo* self);
libqt_string KWindowInfo_ApplicationMenuServiceName(const KWindowInfo* self);
libqt_string KWindowInfo_ApplicationMenuObjectPath(const KWindowInfo* self);
void KWindowInfo_OperatorAssign(KWindowInfo* self, const KWindowInfo* param1);
bool KWindowInfo_Valid1(const KWindowInfo* self, bool withdrawn_is_valid);
void KWindowInfo_Delete(KWindowInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
