#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARY_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARY_H

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
#endif

QMetaObject* QVirtualKeyboardDictionary_MetaObject(const QVirtualKeyboardDictionary* self);
void* QVirtualKeyboardDictionary_Metacast(QVirtualKeyboardDictionary* self, const char* param1);
int QVirtualKeyboardDictionary_Metacall(QVirtualKeyboardDictionary* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardDictionary_Tr(const char* s);
libqt_string QVirtualKeyboardDictionary_Name(const QVirtualKeyboardDictionary* self);
libqt_list /* of libqt_string */ QVirtualKeyboardDictionary_Contents(const QVirtualKeyboardDictionary* self);
void QVirtualKeyboardDictionary_SetContents(QVirtualKeyboardDictionary* self, const libqt_list /* of libqt_string */ contents);
void QVirtualKeyboardDictionary_ResetContents(QVirtualKeyboardDictionary* self);
void QVirtualKeyboardDictionary_ContentsChanged(QVirtualKeyboardDictionary* self);
void QVirtualKeyboardDictionary_Connect_ContentsChanged(QVirtualKeyboardDictionary* self, intptr_t slot);
libqt_string QVirtualKeyboardDictionary_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardDictionary_Tr3(const char* s, const char* c, int n);
void QVirtualKeyboardDictionary_Delete(QVirtualKeyboardDictionary* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
