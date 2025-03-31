#pragma once
#ifndef SRCC_LIBQCLIPBOARD_H
#define SRCC_LIBQCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QClipboard QClipboard;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QClipboard::Mode Mode; // C++ enum
#else
typedef int Mode; // C ABI enum
#endif

QMetaObject* QClipboard_MetaObject(const QClipboard* self);
void* QClipboard_Metacast(QClipboard* self, const char* param1);
int QClipboard_Metacall(QClipboard* self, int param1, int param2, void** param3);
libqt_string QClipboard_Tr(const char* s);
void QClipboard_Clear(QClipboard* self);
bool QClipboard_SupportsSelection(const QClipboard* self);
bool QClipboard_SupportsFindBuffer(const QClipboard* self);
bool QClipboard_OwnsSelection(const QClipboard* self);
bool QClipboard_OwnsClipboard(const QClipboard* self);
bool QClipboard_OwnsFindBuffer(const QClipboard* self);
libqt_string QClipboard_Text(const QClipboard* self);
libqt_string QClipboard_TextWithSubtype(const QClipboard* self, libqt_string subtype);
void QClipboard_SetText(QClipboard* self, libqt_string param1);
QMimeData* QClipboard_MimeData(const QClipboard* self);
void QClipboard_SetMimeData(QClipboard* self, QMimeData* data);
QImage* QClipboard_Image(const QClipboard* self);
QPixmap* QClipboard_Pixmap(const QClipboard* self);
void QClipboard_SetImage(QClipboard* self, QImage* param1);
void QClipboard_SetPixmap(QClipboard* self, QPixmap* param1);
void QClipboard_Changed(QClipboard* self, int mode);
void QClipboard_Connect_Changed(QClipboard* self, intptr_t slot);
void QClipboard_SelectionChanged(QClipboard* self);
void QClipboard_Connect_SelectionChanged(QClipboard* self, intptr_t slot);
void QClipboard_FindBufferChanged(QClipboard* self);
void QClipboard_Connect_FindBufferChanged(QClipboard* self, intptr_t slot);
void QClipboard_DataChanged(QClipboard* self);
void QClipboard_Connect_DataChanged(QClipboard* self, intptr_t slot);
libqt_string QClipboard_Tr2(const char* s, const char* c);
libqt_string QClipboard_Tr3(const char* s, const char* c, int n);
void QClipboard_Clear1(QClipboard* self, int mode);
libqt_string QClipboard_Text1(const QClipboard* self, int mode);
libqt_string QClipboard_Text2(const QClipboard* self, libqt_string subtype, int mode);
void QClipboard_SetText2(QClipboard* self, libqt_string param1, int mode);
QMimeData* QClipboard_MimeData1(const QClipboard* self, int mode);
void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, int mode);
QImage* QClipboard_Image1(const QClipboard* self, int mode);
QPixmap* QClipboard_Pixmap1(const QClipboard* self, int mode);
void QClipboard_SetImage2(QClipboard* self, QImage* param1, int mode);
void QClipboard_SetPixmap2(QClipboard* self, QPixmap* param1, int mode);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
