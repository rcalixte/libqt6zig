#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBTHUMBNAILCREATOR_H
#define SRC_EXTRAS_KIOC_LIBTHUMBNAILCREATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailCreator)
typedef KIO::ThumbnailCreator KIO__ThumbnailCreator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailRequest)
typedef KIO::ThumbnailRequest KIO__ThumbnailRequest;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailResult)
typedef KIO::ThumbnailResult KIO__ThumbnailResult;
#endif
#else
typedef struct KIO__ThumbnailCreator KIO__ThumbnailCreator;
typedef struct KIO__ThumbnailRequest KIO__ThumbnailRequest;
typedef struct KIO__ThumbnailResult KIO__ThumbnailResult;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KIO__ThumbnailRequest* KIO__ThumbnailRequest_new(const QUrl* url, const QSize* targetSize, const libqt_string mimeType, double dpr, float sequenceIndex);
KIO__ThumbnailRequest* KIO__ThumbnailRequest_new2(const KIO__ThumbnailRequest* param1);
void KIO__ThumbnailRequest_OperatorAssign(KIO__ThumbnailRequest* self, const KIO__ThumbnailRequest* param1);
QUrl* KIO__ThumbnailRequest_Url(const KIO__ThumbnailRequest* self);
QSize* KIO__ThumbnailRequest_TargetSize(const KIO__ThumbnailRequest* self);
libqt_string KIO__ThumbnailRequest_MimeType(const KIO__ThumbnailRequest* self);
double KIO__ThumbnailRequest_DevicePixelRatio(const KIO__ThumbnailRequest* self);
float KIO__ThumbnailRequest_SequenceIndex(const KIO__ThumbnailRequest* self);
void KIO__ThumbnailRequest_Delete(KIO__ThumbnailRequest* self);

KIO__ThumbnailResult* KIO__ThumbnailResult_new(const KIO__ThumbnailResult* param1);
void KIO__ThumbnailResult_OperatorAssign(KIO__ThumbnailResult* self, const KIO__ThumbnailResult* param1);
QImage* KIO__ThumbnailResult_Image(const KIO__ThumbnailResult* self);
bool KIO__ThumbnailResult_IsValid(const KIO__ThumbnailResult* self);
float KIO__ThumbnailResult_SequenceIndexWraparoundPoint(const KIO__ThumbnailResult* self);
void KIO__ThumbnailResult_SetSequenceIndexWraparoundPoint(KIO__ThumbnailResult* self, float wraparoundPoint);
KIO__ThumbnailResult* KIO__ThumbnailResult_Pass(const QImage* image);
KIO__ThumbnailResult* KIO__ThumbnailResult_Fail();
void KIO__ThumbnailResult_Delete(KIO__ThumbnailResult* self);

KIO__ThumbnailCreator* KIO__ThumbnailCreator_new(QObject* parent, const libqt_list /* of QVariant* */ args);
QMetaObject* KIO__ThumbnailCreator_MetaObject(const KIO__ThumbnailCreator* self);
void* KIO__ThumbnailCreator_Metacast(KIO__ThumbnailCreator* self, const char* param1);
int KIO__ThumbnailCreator_Metacall(KIO__ThumbnailCreator* self, int param1, int param2, void** param3);
libqt_string KIO__ThumbnailCreator_Tr(const char* s);
KIO__ThumbnailResult* KIO__ThumbnailCreator_Create(KIO__ThumbnailCreator* self, const KIO__ThumbnailRequest* request);
libqt_string KIO__ThumbnailCreator_Tr2(const char* s, const char* c);
libqt_string KIO__ThumbnailCreator_Tr3(const char* s, const char* c, int n);
void KIO__ThumbnailCreator_OnMetacall(KIO__ThumbnailCreator* self, intptr_t slot);
int KIO__ThumbnailCreator_QBaseMetacall(KIO__ThumbnailCreator* self, int param1, int param2, void** param3);
void KIO__ThumbnailCreator_OnCreate(KIO__ThumbnailCreator* self, intptr_t slot);
KIO__ThumbnailResult* KIO__ThumbnailCreator_QBaseCreate(KIO__ThumbnailCreator* self, const KIO__ThumbnailRequest* request);
bool KIO__ThumbnailCreator_Event(KIO__ThumbnailCreator* self, QEvent* event);
void KIO__ThumbnailCreator_OnEvent(KIO__ThumbnailCreator* self, intptr_t slot);
bool KIO__ThumbnailCreator_QBaseEvent(KIO__ThumbnailCreator* self, QEvent* event);
bool KIO__ThumbnailCreator_EventFilter(KIO__ThumbnailCreator* self, QObject* watched, QEvent* event);
void KIO__ThumbnailCreator_OnEventFilter(KIO__ThumbnailCreator* self, intptr_t slot);
bool KIO__ThumbnailCreator_QBaseEventFilter(KIO__ThumbnailCreator* self, QObject* watched, QEvent* event);
void KIO__ThumbnailCreator_TimerEvent(KIO__ThumbnailCreator* self, QTimerEvent* event);
void KIO__ThumbnailCreator_OnTimerEvent(KIO__ThumbnailCreator* self, intptr_t slot);
void KIO__ThumbnailCreator_QBaseTimerEvent(KIO__ThumbnailCreator* self, QTimerEvent* event);
void KIO__ThumbnailCreator_ChildEvent(KIO__ThumbnailCreator* self, QChildEvent* event);
void KIO__ThumbnailCreator_OnChildEvent(KIO__ThumbnailCreator* self, intptr_t slot);
void KIO__ThumbnailCreator_QBaseChildEvent(KIO__ThumbnailCreator* self, QChildEvent* event);
void KIO__ThumbnailCreator_CustomEvent(KIO__ThumbnailCreator* self, QEvent* event);
void KIO__ThumbnailCreator_OnCustomEvent(KIO__ThumbnailCreator* self, intptr_t slot);
void KIO__ThumbnailCreator_QBaseCustomEvent(KIO__ThumbnailCreator* self, QEvent* event);
void KIO__ThumbnailCreator_ConnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal);
void KIO__ThumbnailCreator_OnConnectNotify(KIO__ThumbnailCreator* self, intptr_t slot);
void KIO__ThumbnailCreator_QBaseConnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal);
void KIO__ThumbnailCreator_DisconnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal);
void KIO__ThumbnailCreator_OnDisconnectNotify(KIO__ThumbnailCreator* self, intptr_t slot);
void KIO__ThumbnailCreator_QBaseDisconnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal);
QObject* KIO__ThumbnailCreator_Sender(const KIO__ThumbnailCreator* self);
void KIO__ThumbnailCreator_OnSender(const KIO__ThumbnailCreator* self, intptr_t slot);
QObject* KIO__ThumbnailCreator_QBaseSender(const KIO__ThumbnailCreator* self);
int KIO__ThumbnailCreator_SenderSignalIndex(const KIO__ThumbnailCreator* self);
void KIO__ThumbnailCreator_OnSenderSignalIndex(const KIO__ThumbnailCreator* self, intptr_t slot);
int KIO__ThumbnailCreator_QBaseSenderSignalIndex(const KIO__ThumbnailCreator* self);
int KIO__ThumbnailCreator_Receivers(const KIO__ThumbnailCreator* self, const char* signal);
void KIO__ThumbnailCreator_OnReceivers(const KIO__ThumbnailCreator* self, intptr_t slot);
int KIO__ThumbnailCreator_QBaseReceivers(const KIO__ThumbnailCreator* self, const char* signal);
bool KIO__ThumbnailCreator_IsSignalConnected(const KIO__ThumbnailCreator* self, const QMetaMethod* signal);
void KIO__ThumbnailCreator_OnIsSignalConnected(const KIO__ThumbnailCreator* self, intptr_t slot);
bool KIO__ThumbnailCreator_QBaseIsSignalConnected(const KIO__ThumbnailCreator* self, const QMetaMethod* signal);
void KIO__ThumbnailCreator_Delete(KIO__ThumbnailCreator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
