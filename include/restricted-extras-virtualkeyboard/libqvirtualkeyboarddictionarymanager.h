#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARYMANAGER_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARYMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVirtualKeyboardDictionary QVirtualKeyboardDictionary;
typedef struct QVirtualKeyboardDictionaryManager QVirtualKeyboardDictionaryManager;
#endif

QMetaObject* QVirtualKeyboardDictionaryManager_MetaObject(const QVirtualKeyboardDictionaryManager* self);
void* QVirtualKeyboardDictionaryManager_Metacast(QVirtualKeyboardDictionaryManager* self, const char* param1);
int QVirtualKeyboardDictionaryManager_Metacall(QVirtualKeyboardDictionaryManager* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardDictionaryManager_Tr(const char* s);
QVirtualKeyboardDictionaryManager* QVirtualKeyboardDictionaryManager_Instance();
libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_AvailableDictionaries(const QVirtualKeyboardDictionaryManager* self);
libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_BaseDictionaries(const QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_SetBaseDictionaries(QVirtualKeyboardDictionaryManager* self, const libqt_list /* of libqt_string */ baseDictionaries);
libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_ExtraDictionaries(const QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_SetExtraDictionaries(QVirtualKeyboardDictionaryManager* self, const libqt_list /* of libqt_string */ extraDictionaries);
libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_ActiveDictionaries(const QVirtualKeyboardDictionaryManager* self);
QVirtualKeyboardDictionary* QVirtualKeyboardDictionaryManager_CreateDictionary(QVirtualKeyboardDictionaryManager* self, const libqt_string name);
QVirtualKeyboardDictionary* QVirtualKeyboardDictionaryManager_Dictionary(const QVirtualKeyboardDictionaryManager* self, const libqt_string name);
void QVirtualKeyboardDictionaryManager_AvailableDictionariesChanged(QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_Connect_AvailableDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot);
void QVirtualKeyboardDictionaryManager_BaseDictionariesChanged(QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_Connect_BaseDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot);
void QVirtualKeyboardDictionaryManager_ExtraDictionariesChanged(QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_Connect_ExtraDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot);
void QVirtualKeyboardDictionaryManager_ActiveDictionariesChanged(QVirtualKeyboardDictionaryManager* self);
void QVirtualKeyboardDictionaryManager_Connect_ActiveDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot);
libqt_string QVirtualKeyboardDictionaryManager_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardDictionaryManager_Tr3(const char* s, const char* c, int n);
void QVirtualKeyboardDictionaryManager_Delete(QVirtualKeyboardDictionaryManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
