#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQIMAGECAPTURE_H
#define SRC_MULTIMEDIAC_LIBQIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QImageCapture QImageCapture;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

#ifdef __cplusplus
typedef QImageCapture::Error Error;           // C++ enum
typedef QImageCapture::FileFormat FileFormat; // C++ enum
typedef QImageCapture::Quality Quality;       // C++ enum
#else
typedef int Error;      // C ABI enum
typedef int FileFormat; // C ABI enum
typedef int Quality;    // C ABI enum
#endif

QImageCapture* QImageCapture_new();
QImageCapture* QImageCapture_new2(QObject* parent);
QMetaObject* QImageCapture_MetaObject(const QImageCapture* self);
void* QImageCapture_Metacast(QImageCapture* self, const char* param1);
int QImageCapture_Metacall(QImageCapture* self, int param1, int param2, void** param3);
void QImageCapture_OnMetacall(QImageCapture* self, intptr_t slot);
int QImageCapture_QBaseMetacall(QImageCapture* self, int param1, int param2, void** param3);
libqt_string QImageCapture_Tr(const char* s);
bool QImageCapture_IsAvailable(const QImageCapture* self);
QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self);
int QImageCapture_Error(const QImageCapture* self);
libqt_string QImageCapture_ErrorString(const QImageCapture* self);
bool QImageCapture_IsReadyForCapture(const QImageCapture* self);
int QImageCapture_FileFormat(const QImageCapture* self);
void QImageCapture_SetFileFormat(QImageCapture* self, int format);
libqt_list /* of int */ QImageCapture_SupportedFormats();
libqt_string QImageCapture_FileFormatName(int c);
libqt_string QImageCapture_FileFormatDescription(int c);
QSize* QImageCapture_Resolution(const QImageCapture* self);
void QImageCapture_SetResolution(QImageCapture* self, QSize* resolution);
void QImageCapture_SetResolution2(QImageCapture* self, int width, int height);
int QImageCapture_Quality(const QImageCapture* self);
void QImageCapture_SetQuality(QImageCapture* self, int quality);
QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self);
void QImageCapture_SetMetaData(QImageCapture* self, QMediaMetaData* metaData);
void QImageCapture_AddMetaData(QImageCapture* self, QMediaMetaData* metaData);
int QImageCapture_CaptureToFile(QImageCapture* self);
int QImageCapture_Capture(QImageCapture* self);
void QImageCapture_ErrorChanged(QImageCapture* self);
void QImageCapture_Connect_ErrorChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int errorVal, libqt_string errorString);
void QImageCapture_Connect_ErrorOccurred(QImageCapture* self, intptr_t slot);
void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready);
void QImageCapture_Connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_MetaDataChanged(QImageCapture* self);
void QImageCapture_Connect_MetaDataChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_FileFormatChanged(QImageCapture* self);
void QImageCapture_Connect_FileFormatChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_QualityChanged(QImageCapture* self);
void QImageCapture_Connect_QualityChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ResolutionChanged(QImageCapture* self);
void QImageCapture_Connect_ResolutionChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageExposed(QImageCapture* self, int id);
void QImageCapture_Connect_ImageExposed(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageCaptured(QImageCapture* self, int id, QImage* preview);
void QImageCapture_Connect_ImageCaptured(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData);
void QImageCapture_Connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageAvailable(QImageCapture* self, int id, QVideoFrame* frame);
void QImageCapture_Connect_ImageAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageSaved(QImageCapture* self, int id, libqt_string fileName);
void QImageCapture_Connect_ImageSaved(QImageCapture* self, intptr_t slot);
libqt_string QImageCapture_Tr2(const char* s, const char* c);
libqt_string QImageCapture_Tr3(const char* s, const char* c, int n);
int QImageCapture_CaptureToFile1(QImageCapture* self, libqt_string location);
bool QImageCapture_Event(QImageCapture* self, QEvent* event);
void QImageCapture_OnEvent(QImageCapture* self, intptr_t slot);
bool QImageCapture_QBaseEvent(QImageCapture* self, QEvent* event);
bool QImageCapture_EventFilter(QImageCapture* self, QObject* watched, QEvent* event);
void QImageCapture_OnEventFilter(QImageCapture* self, intptr_t slot);
bool QImageCapture_QBaseEventFilter(QImageCapture* self, QObject* watched, QEvent* event);
void QImageCapture_TimerEvent(QImageCapture* self, QTimerEvent* event);
void QImageCapture_OnTimerEvent(QImageCapture* self, intptr_t slot);
void QImageCapture_QBaseTimerEvent(QImageCapture* self, QTimerEvent* event);
void QImageCapture_ChildEvent(QImageCapture* self, QChildEvent* event);
void QImageCapture_OnChildEvent(QImageCapture* self, intptr_t slot);
void QImageCapture_QBaseChildEvent(QImageCapture* self, QChildEvent* event);
void QImageCapture_CustomEvent(QImageCapture* self, QEvent* event);
void QImageCapture_OnCustomEvent(QImageCapture* self, intptr_t slot);
void QImageCapture_QBaseCustomEvent(QImageCapture* self, QEvent* event);
void QImageCapture_ConnectNotify(QImageCapture* self, QMetaMethod* signal);
void QImageCapture_OnConnectNotify(QImageCapture* self, intptr_t slot);
void QImageCapture_QBaseConnectNotify(QImageCapture* self, QMetaMethod* signal);
void QImageCapture_DisconnectNotify(QImageCapture* self, QMetaMethod* signal);
void QImageCapture_OnDisconnectNotify(QImageCapture* self, intptr_t slot);
void QImageCapture_QBaseDisconnectNotify(QImageCapture* self, QMetaMethod* signal);
QObject* QImageCapture_Sender(const QImageCapture* self);
void QImageCapture_OnSender(const QImageCapture* self, intptr_t slot);
QObject* QImageCapture_QBaseSender(const QImageCapture* self);
int QImageCapture_SenderSignalIndex(const QImageCapture* self);
void QImageCapture_OnSenderSignalIndex(const QImageCapture* self, intptr_t slot);
int QImageCapture_QBaseSenderSignalIndex(const QImageCapture* self);
int QImageCapture_Receivers(const QImageCapture* self, const char* signal);
void QImageCapture_OnReceivers(const QImageCapture* self, intptr_t slot);
int QImageCapture_QBaseReceivers(const QImageCapture* self, const char* signal);
bool QImageCapture_IsSignalConnected(const QImageCapture* self, QMetaMethod* signal);
void QImageCapture_OnIsSignalConnected(const QImageCapture* self, intptr_t slot);
bool QImageCapture_QBaseIsSignalConnected(const QImageCapture* self, QMetaMethod* signal);
void QImageCapture_Delete(QImageCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
