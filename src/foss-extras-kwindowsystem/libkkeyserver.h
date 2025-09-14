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

libqt_string KKeyServer_ModToStringUser(unsigned int param1);
unsigned int KKeyServer_StringUserToMod(const libqt_string param1);
bool KKeyServer_IsShiftAsModifierAllowed(int param1);
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
bool KKeyServer_KeyQtToSymX(int param1, int* param2);
libqt_list /* of int */ KKeyServer_KeyQtToSymXs(int param1);
bool KKeyServer_KeyQtToCodeX(int param1, int* param2);
libqt_list /* of int */ KKeyServer_KeyQtToCodeXs(int param1);
bool KKeyServer_KeyQtToModX(int param1, unsigned int* param2);
bool KKeyServer_SymXModXToKeyQt(uint32_t param1, uint16_t param2, int* param3);
bool KKeyServer_ModXToQt(unsigned int param1, int* param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
