#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKACCELERATORMANAGER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKACCELERATORMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAcceleratorManager KAcceleratorManager;
typedef struct QWidget QWidget;
#endif

KAcceleratorManager* KAcceleratorManager_new(const KAcceleratorManager* other);
KAcceleratorManager* KAcceleratorManager_new2(KAcceleratorManager* other);
void KAcceleratorManager_CopyAssign(KAcceleratorManager* self, KAcceleratorManager* other);
void KAcceleratorManager_MoveAssign(KAcceleratorManager* self, KAcceleratorManager* other);
void KAcceleratorManager_Manage(QWidget* widget);
void KAcceleratorManager_LastManage(libqt_string added, libqt_string changed, libqt_string removed);
void KAcceleratorManager_SetNoAccel(QWidget* widget);
void KAcceleratorManager_AddStandardActionNames(const libqt_list /* of libqt_string */ names);
void KAcceleratorManager_Manage2(QWidget* widget, bool programmers_mode);
void KAcceleratorManager_Delete(KAcceleratorManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
