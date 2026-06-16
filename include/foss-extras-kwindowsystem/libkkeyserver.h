#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKKEYSERVER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKKEYSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KKeyServer KKeyServer;
#endif

libqt_string KKeyServer_ModToStringUser(unsigned int mod);
unsigned int KKeyServer_StringUserToMod(const libqt_string mod);
bool KKeyServer_IsShiftAsModifierAllowed(int keyQt);
bool KKeyServer_InitializeMods();
bool KKeyServer_KeyboardHasMetaKey();
unsigned int KKeyServer_ModXShift();
unsigned int KKeyServer_ModXLock();
unsigned int KKeyServer_ModXCtrl();
unsigned int KKeyServer_ModXAlt();
unsigned int KKeyServer_ModXMeta();
unsigned int KKeyServer_ModXNumLock();
unsigned int KKeyServer_ModXScrollLock();
unsigned int KKeyServer_ModXModeSwitch();
unsigned int KKeyServer_AccelModMaskX();
bool KKeyServer_KeyQtToSymX(int keyQt, int* sym);
libqt_list /* of int */ KKeyServer_KeyQtToSymXs(int keyQt);
bool KKeyServer_KeyQtToCodeX(int keyQt, int* keyCode);
libqt_list /* of int */ KKeyServer_KeyQtToCodeXs(int keyQt);
bool KKeyServer_KeyQtToModX(int keyQt, unsigned int* mod);
bool KKeyServer_SymXModXToKeyQt(uint32_t keySym, uint16_t modX, int* keyQt);
bool KKeyServer_ModXToQt(unsigned int modX, int* modQt);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
