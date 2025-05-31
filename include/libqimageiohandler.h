#pragma once
#ifndef SRCC_LIBQIMAGEIOHANDLER_H
#define SRCC_LIBQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageIOHandler QImageIOHandler;
typedef struct QImageIOPlugin QImageIOPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QImageIOHandler::ImageOption ImageOption;         // C++ enum
typedef QImageIOHandler::Transformation Transformation;   // C++ enum
typedef QImageIOHandler::Transformations Transformations; // C++ QFlags
typedef QImageIOPlugin::Capabilities Capabilities;        // C++ QFlags
typedef QImageIOPlugin::Capability Capability;            // C++ enum
#else
typedef int Capabilities;    // C ABI QFlags
typedef int Capability;      // C ABI enum
typedef int ImageOption;     // C ABI enum
typedef int Transformation;  // C ABI enum
typedef int Transformations; // C ABI QFlags
#endif

QImageIOHandler* QImageIOHandler_new();
void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_Device(const QImageIOHandler* self);
void QImageIOHandler_SetFormat(QImageIOHandler* self, const libqt_string format);
void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, const libqt_string format);
libqt_string QImageIOHandler_Format(const QImageIOHandler* self);
bool QImageIOHandler_CanRead(const QImageIOHandler* self);
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self);
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image);
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image);
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, const QImage* image);
QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option);
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot);
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option);
void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value);
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot);
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, const QVariant* value);
bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option);
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option);
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self);
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self);
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber);
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber);
int QImageIOHandler_LoopCount(const QImageIOHandler* self);
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self);
int QImageIOHandler_ImageCount(const QImageIOHandler* self);
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self);
int QImageIOHandler_NextImageDelay(const QImageIOHandler* self);
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self);
int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self);
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self);
QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self);
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot);
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self);
bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image);
void QImageIOHandler_Delete(QImageIOHandler* self);

QImageIOPlugin* QImageIOPlugin_new();
QImageIOPlugin* QImageIOPlugin_new2(QObject* parent);
QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self);
void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1);
int QImageIOPlugin_Metacall(QImageIOPlugin* self, int param1, int param2, void** param3);
void QImageIOPlugin_OnMetacall(QImageIOPlugin* self, intptr_t slot);
int QImageIOPlugin_QBaseMetacall(QImageIOPlugin* self, int param1, int param2, void** param3);
libqt_string QImageIOPlugin_Tr(const char* s);
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
void QImageIOPlugin_OnCapabilities(const QImageIOPlugin* self, intptr_t slot);
int QImageIOPlugin_QBaseCapabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
void QImageIOPlugin_OnCreate(const QImageIOPlugin* self, intptr_t slot);
QImageIOHandler* QImageIOPlugin_QBaseCreate(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
libqt_string QImageIOPlugin_Tr2(const char* s, const char* c);
libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n);
bool QImageIOPlugin_Event(QImageIOPlugin* self, QEvent* event);
void QImageIOPlugin_OnEvent(QImageIOPlugin* self, intptr_t slot);
bool QImageIOPlugin_QBaseEvent(QImageIOPlugin* self, QEvent* event);
bool QImageIOPlugin_EventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event);
void QImageIOPlugin_OnEventFilter(QImageIOPlugin* self, intptr_t slot);
bool QImageIOPlugin_QBaseEventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event);
void QImageIOPlugin_TimerEvent(QImageIOPlugin* self, QTimerEvent* event);
void QImageIOPlugin_OnTimerEvent(QImageIOPlugin* self, intptr_t slot);
void QImageIOPlugin_QBaseTimerEvent(QImageIOPlugin* self, QTimerEvent* event);
void QImageIOPlugin_ChildEvent(QImageIOPlugin* self, QChildEvent* event);
void QImageIOPlugin_OnChildEvent(QImageIOPlugin* self, intptr_t slot);
void QImageIOPlugin_QBaseChildEvent(QImageIOPlugin* self, QChildEvent* event);
void QImageIOPlugin_CustomEvent(QImageIOPlugin* self, QEvent* event);
void QImageIOPlugin_OnCustomEvent(QImageIOPlugin* self, intptr_t slot);
void QImageIOPlugin_QBaseCustomEvent(QImageIOPlugin* self, QEvent* event);
void QImageIOPlugin_ConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
void QImageIOPlugin_OnConnectNotify(QImageIOPlugin* self, intptr_t slot);
void QImageIOPlugin_QBaseConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
void QImageIOPlugin_DisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
void QImageIOPlugin_OnDisconnectNotify(QImageIOPlugin* self, intptr_t slot);
void QImageIOPlugin_QBaseDisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
QObject* QImageIOPlugin_Sender(const QImageIOPlugin* self);
void QImageIOPlugin_OnSender(const QImageIOPlugin* self, intptr_t slot);
QObject* QImageIOPlugin_QBaseSender(const QImageIOPlugin* self);
int QImageIOPlugin_SenderSignalIndex(const QImageIOPlugin* self);
void QImageIOPlugin_OnSenderSignalIndex(const QImageIOPlugin* self, intptr_t slot);
int QImageIOPlugin_QBaseSenderSignalIndex(const QImageIOPlugin* self);
int QImageIOPlugin_Receivers(const QImageIOPlugin* self, const char* signal);
void QImageIOPlugin_OnReceivers(const QImageIOPlugin* self, intptr_t slot);
int QImageIOPlugin_QBaseReceivers(const QImageIOPlugin* self, const char* signal);
bool QImageIOPlugin_IsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal);
void QImageIOPlugin_OnIsSignalConnected(const QImageIOPlugin* self, intptr_t slot);
bool QImageIOPlugin_QBaseIsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal);
void QImageIOPlugin_Delete(QImageIOPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
