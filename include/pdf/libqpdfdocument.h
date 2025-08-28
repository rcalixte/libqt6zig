#pragma once
#ifndef SRC_PDFC_LIBQPDFDOCUMENT_H
#define SRC_PDFC_LIBQPDFDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QPdfSelection QPdfSelection;
typedef struct QPointF QPointF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfDocument* QPdfDocument_new();
QPdfDocument* QPdfDocument_new2(QObject* parent);
QMetaObject* QPdfDocument_MetaObject(const QPdfDocument* self);
void* QPdfDocument_Metacast(QPdfDocument* self, const char* param1);
int QPdfDocument_Metacall(QPdfDocument* self, int param1, int param2, void** param3);
libqt_string QPdfDocument_Tr(const char* s);
int QPdfDocument_Load(QPdfDocument* self, const libqt_string fileName);
int QPdfDocument_Status(const QPdfDocument* self);
void QPdfDocument_Load2(QPdfDocument* self, QIODevice* device);
void QPdfDocument_SetPassword(QPdfDocument* self, const libqt_string password);
libqt_string QPdfDocument_Password(const QPdfDocument* self);
QVariant* QPdfDocument_MetaData(const QPdfDocument* self, int field);
int QPdfDocument_Error(const QPdfDocument* self);
void QPdfDocument_Close(QPdfDocument* self);
int QPdfDocument_PageCount(const QPdfDocument* self);
QSizeF* QPdfDocument_PagePointSize(const QPdfDocument* self, int page);
libqt_string QPdfDocument_PageLabel(QPdfDocument* self, int page);
int QPdfDocument_PageIndexForLabel(QPdfDocument* self, const libqt_string label);
QAbstractListModel* QPdfDocument_PageModel(QPdfDocument* self);
QImage* QPdfDocument_Render(QPdfDocument* self, int page, QSize* imageSize);
QPdfSelection* QPdfDocument_GetSelection(QPdfDocument* self, int page, QPointF* start, QPointF* end);
QPdfSelection* QPdfDocument_GetSelectionAtIndex(QPdfDocument* self, int page, int startIndex, int maxLength);
QPdfSelection* QPdfDocument_GetAllText(QPdfDocument* self, int page);
void QPdfDocument_PasswordChanged(QPdfDocument* self);
void QPdfDocument_Connect_PasswordChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_PasswordRequired(QPdfDocument* self);
void QPdfDocument_Connect_PasswordRequired(QPdfDocument* self, intptr_t slot);
void QPdfDocument_StatusChanged(QPdfDocument* self, int status);
void QPdfDocument_Connect_StatusChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_PageCountChanged(QPdfDocument* self, int pageCount);
void QPdfDocument_Connect_PageCountChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_PageModelChanged(QPdfDocument* self);
void QPdfDocument_Connect_PageModelChanged(QPdfDocument* self, intptr_t slot);
libqt_string QPdfDocument_Tr2(const char* s, const char* c);
libqt_string QPdfDocument_Tr3(const char* s, const char* c, int n);
QImage* QPdfDocument_Render3(QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options);
void QPdfDocument_OnMetacall(QPdfDocument* self, intptr_t slot);
int QPdfDocument_QBaseMetacall(QPdfDocument* self, int param1, int param2, void** param3);
bool QPdfDocument_Event(QPdfDocument* self, QEvent* event);
void QPdfDocument_OnEvent(QPdfDocument* self, intptr_t slot);
bool QPdfDocument_QBaseEvent(QPdfDocument* self, QEvent* event);
bool QPdfDocument_EventFilter(QPdfDocument* self, QObject* watched, QEvent* event);
void QPdfDocument_OnEventFilter(QPdfDocument* self, intptr_t slot);
bool QPdfDocument_QBaseEventFilter(QPdfDocument* self, QObject* watched, QEvent* event);
void QPdfDocument_TimerEvent(QPdfDocument* self, QTimerEvent* event);
void QPdfDocument_OnTimerEvent(QPdfDocument* self, intptr_t slot);
void QPdfDocument_QBaseTimerEvent(QPdfDocument* self, QTimerEvent* event);
void QPdfDocument_ChildEvent(QPdfDocument* self, QChildEvent* event);
void QPdfDocument_OnChildEvent(QPdfDocument* self, intptr_t slot);
void QPdfDocument_QBaseChildEvent(QPdfDocument* self, QChildEvent* event);
void QPdfDocument_CustomEvent(QPdfDocument* self, QEvent* event);
void QPdfDocument_OnCustomEvent(QPdfDocument* self, intptr_t slot);
void QPdfDocument_QBaseCustomEvent(QPdfDocument* self, QEvent* event);
void QPdfDocument_ConnectNotify(QPdfDocument* self, const QMetaMethod* signal);
void QPdfDocument_OnConnectNotify(QPdfDocument* self, intptr_t slot);
void QPdfDocument_QBaseConnectNotify(QPdfDocument* self, const QMetaMethod* signal);
void QPdfDocument_DisconnectNotify(QPdfDocument* self, const QMetaMethod* signal);
void QPdfDocument_OnDisconnectNotify(QPdfDocument* self, intptr_t slot);
void QPdfDocument_QBaseDisconnectNotify(QPdfDocument* self, const QMetaMethod* signal);
QObject* QPdfDocument_Sender(const QPdfDocument* self);
void QPdfDocument_OnSender(const QPdfDocument* self, intptr_t slot);
QObject* QPdfDocument_QBaseSender(const QPdfDocument* self);
int QPdfDocument_SenderSignalIndex(const QPdfDocument* self);
void QPdfDocument_OnSenderSignalIndex(const QPdfDocument* self, intptr_t slot);
int QPdfDocument_QBaseSenderSignalIndex(const QPdfDocument* self);
int QPdfDocument_Receivers(const QPdfDocument* self, const char* signal);
void QPdfDocument_OnReceivers(const QPdfDocument* self, intptr_t slot);
int QPdfDocument_QBaseReceivers(const QPdfDocument* self, const char* signal);
bool QPdfDocument_IsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal);
void QPdfDocument_OnIsSignalConnected(const QPdfDocument* self, intptr_t slot);
bool QPdfDocument_QBaseIsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal);
void QPdfDocument_Delete(QPdfDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
