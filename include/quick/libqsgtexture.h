#pragma once
#ifndef QUICK_LIBQSGTEXTURE_H
#define QUICK_LIBQSGTEXTURE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QSGDynamicTexture QSGDynamicTexture;
typedef struct QSGTexture QSGTexture;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QSGTexture* QSGTexture_new();
QMetaObject* QSGTexture_MetaObject(const QSGTexture* self);
void* QSGTexture_Metacast(QSGTexture* self, const char* param1);
int QSGTexture_Metacall(QSGTexture* self, int param1, int param2, void** param3);
libqt_string QSGTexture_Tr(const char* s);
long long QSGTexture_ComparisonKey(const QSGTexture* self);
QSize* QSGTexture_TextureSize(const QSGTexture* self);
bool QSGTexture_HasAlphaChannel(const QSGTexture* self);
bool QSGTexture_HasMipmaps(const QSGTexture* self);
QRectF* QSGTexture_NormalizedTextureSubRect(const QSGTexture* self);
bool QSGTexture_IsAtlasTexture(const QSGTexture* self);
void QSGTexture_SetMipmapFiltering(QSGTexture* self, int filter);
int QSGTexture_MipmapFiltering(const QSGTexture* self);
void QSGTexture_SetFiltering(QSGTexture* self, int filter);
int QSGTexture_Filtering(const QSGTexture* self);
void QSGTexture_SetAnisotropyLevel(QSGTexture* self, int level);
int QSGTexture_AnisotropyLevel(const QSGTexture* self);
void QSGTexture_SetHorizontalWrapMode(QSGTexture* self, int hwrap);
int QSGTexture_HorizontalWrapMode(const QSGTexture* self);
void QSGTexture_SetVerticalWrapMode(QSGTexture* self, int vwrap);
int QSGTexture_VerticalWrapMode(const QSGTexture* self);
QRectF* QSGTexture_ConvertToNormalizedSourceRect(const QSGTexture* self, const QRectF* rect);
libqt_string QSGTexture_Tr2(const char* s, const char* c);
libqt_string QSGTexture_Tr3(const char* s, const char* c, int n);
void QSGTexture_OnMetaObject(const QSGTexture* self, intptr_t slot);
QMetaObject* QSGTexture_SuperMetaObject(const QSGTexture* self);
void QSGTexture_OnMetacast(QSGTexture* self, intptr_t slot);
void* QSGTexture_SuperMetacast(QSGTexture* self, const char* param1);
void QSGTexture_OnMetacall(QSGTexture* self, intptr_t slot);
int QSGTexture_SuperMetacall(QSGTexture* self, int param1, int param2, void** param3);
void QSGTexture_OnComparisonKey(const QSGTexture* self, intptr_t slot);
long long QSGTexture_SuperComparisonKey(const QSGTexture* self);
void QSGTexture_OnTextureSize(const QSGTexture* self, intptr_t slot);
QSize* QSGTexture_SuperTextureSize(const QSGTexture* self);
void QSGTexture_OnHasAlphaChannel(const QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperHasAlphaChannel(const QSGTexture* self);
void QSGTexture_OnHasMipmaps(const QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperHasMipmaps(const QSGTexture* self);
void QSGTexture_OnNormalizedTextureSubRect(const QSGTexture* self, intptr_t slot);
QRectF* QSGTexture_SuperNormalizedTextureSubRect(const QSGTexture* self);
void QSGTexture_OnIsAtlasTexture(const QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperIsAtlasTexture(const QSGTexture* self);
bool QSGTexture_Event(QSGTexture* self, QEvent* event);
void QSGTexture_OnEvent(QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperEvent(QSGTexture* self, QEvent* event);
bool QSGTexture_EventFilter(QSGTexture* self, QObject* watched, QEvent* event);
void QSGTexture_OnEventFilter(QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperEventFilter(QSGTexture* self, QObject* watched, QEvent* event);
void QSGTexture_TimerEvent(QSGTexture* self, QTimerEvent* event);
void QSGTexture_OnTimerEvent(QSGTexture* self, intptr_t slot);
void QSGTexture_SuperTimerEvent(QSGTexture* self, QTimerEvent* event);
void QSGTexture_ChildEvent(QSGTexture* self, QChildEvent* event);
void QSGTexture_OnChildEvent(QSGTexture* self, intptr_t slot);
void QSGTexture_SuperChildEvent(QSGTexture* self, QChildEvent* event);
void QSGTexture_CustomEvent(QSGTexture* self, QEvent* event);
void QSGTexture_OnCustomEvent(QSGTexture* self, intptr_t slot);
void QSGTexture_SuperCustomEvent(QSGTexture* self, QEvent* event);
void QSGTexture_ConnectNotify(QSGTexture* self, const QMetaMethod* signal);
void QSGTexture_OnConnectNotify(QSGTexture* self, intptr_t slot);
void QSGTexture_SuperConnectNotify(QSGTexture* self, const QMetaMethod* signal);
void QSGTexture_DisconnectNotify(QSGTexture* self, const QMetaMethod* signal);
void QSGTexture_OnDisconnectNotify(QSGTexture* self, intptr_t slot);
void QSGTexture_SuperDisconnectNotify(QSGTexture* self, const QMetaMethod* signal);
void* QSGTexture_ResolveInterface(const QSGTexture* self, const char* name, int revision);
void QSGTexture_OnResolveInterface(const QSGTexture* self, intptr_t slot);
void* QSGTexture_SuperResolveInterface(const QSGTexture* self, const char* name, int revision);
QObject* QSGTexture_Sender(const QSGTexture* self);
void QSGTexture_OnSender(const QSGTexture* self, intptr_t slot);
QObject* QSGTexture_SuperSender(const QSGTexture* self);
int QSGTexture_SenderSignalIndex(const QSGTexture* self);
void QSGTexture_OnSenderSignalIndex(const QSGTexture* self, intptr_t slot);
int QSGTexture_SuperSenderSignalIndex(const QSGTexture* self);
int QSGTexture_Receivers(const QSGTexture* self, const char* signal);
void QSGTexture_OnReceivers(const QSGTexture* self, intptr_t slot);
int QSGTexture_SuperReceivers(const QSGTexture* self, const char* signal);
bool QSGTexture_IsSignalConnected(const QSGTexture* self, const QMetaMethod* signal);
void QSGTexture_OnIsSignalConnected(const QSGTexture* self, intptr_t slot);
bool QSGTexture_SuperIsSignalConnected(const QSGTexture* self, const QMetaMethod* signal);
void QSGTexture_Delete(QSGTexture* self);

QSGDynamicTexture* QSGDynamicTexture_new();
QMetaObject* QSGDynamicTexture_MetaObject(const QSGDynamicTexture* self);
void* QSGDynamicTexture_Metacast(QSGDynamicTexture* self, const char* param1);
int QSGDynamicTexture_Metacall(QSGDynamicTexture* self, int param1, int param2, void** param3);
libqt_string QSGDynamicTexture_Tr(const char* s);
bool QSGDynamicTexture_UpdateTexture(QSGDynamicTexture* self);
libqt_string QSGDynamicTexture_Tr2(const char* s, const char* c);
libqt_string QSGDynamicTexture_Tr3(const char* s, const char* c, int n);
void QSGDynamicTexture_OnMetaObject(const QSGDynamicTexture* self, intptr_t slot);
QMetaObject* QSGDynamicTexture_SuperMetaObject(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnMetacast(QSGDynamicTexture* self, intptr_t slot);
void* QSGDynamicTexture_SuperMetacast(QSGDynamicTexture* self, const char* param1);
void QSGDynamicTexture_OnMetacall(QSGDynamicTexture* self, intptr_t slot);
int QSGDynamicTexture_SuperMetacall(QSGDynamicTexture* self, int param1, int param2, void** param3);
void QSGDynamicTexture_OnUpdateTexture(QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperUpdateTexture(QSGDynamicTexture* self);
long long QSGDynamicTexture_ComparisonKey(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnComparisonKey(const QSGDynamicTexture* self, intptr_t slot);
long long QSGDynamicTexture_SuperComparisonKey(const QSGDynamicTexture* self);
QSize* QSGDynamicTexture_TextureSize(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnTextureSize(const QSGDynamicTexture* self, intptr_t slot);
QSize* QSGDynamicTexture_SuperTextureSize(const QSGDynamicTexture* self);
bool QSGDynamicTexture_HasAlphaChannel(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnHasAlphaChannel(const QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperHasAlphaChannel(const QSGDynamicTexture* self);
bool QSGDynamicTexture_HasMipmaps(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnHasMipmaps(const QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperHasMipmaps(const QSGDynamicTexture* self);
QRectF* QSGDynamicTexture_NormalizedTextureSubRect(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnNormalizedTextureSubRect(const QSGDynamicTexture* self, intptr_t slot);
QRectF* QSGDynamicTexture_SuperNormalizedTextureSubRect(const QSGDynamicTexture* self);
bool QSGDynamicTexture_IsAtlasTexture(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnIsAtlasTexture(const QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperIsAtlasTexture(const QSGDynamicTexture* self);
bool QSGDynamicTexture_Event(QSGDynamicTexture* self, QEvent* event);
void QSGDynamicTexture_OnEvent(QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperEvent(QSGDynamicTexture* self, QEvent* event);
bool QSGDynamicTexture_EventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event);
void QSGDynamicTexture_OnEventFilter(QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperEventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event);
void QSGDynamicTexture_TimerEvent(QSGDynamicTexture* self, QTimerEvent* event);
void QSGDynamicTexture_OnTimerEvent(QSGDynamicTexture* self, intptr_t slot);
void QSGDynamicTexture_SuperTimerEvent(QSGDynamicTexture* self, QTimerEvent* event);
void QSGDynamicTexture_ChildEvent(QSGDynamicTexture* self, QChildEvent* event);
void QSGDynamicTexture_OnChildEvent(QSGDynamicTexture* self, intptr_t slot);
void QSGDynamicTexture_SuperChildEvent(QSGDynamicTexture* self, QChildEvent* event);
void QSGDynamicTexture_CustomEvent(QSGDynamicTexture* self, QEvent* event);
void QSGDynamicTexture_OnCustomEvent(QSGDynamicTexture* self, intptr_t slot);
void QSGDynamicTexture_SuperCustomEvent(QSGDynamicTexture* self, QEvent* event);
void QSGDynamicTexture_ConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
void QSGDynamicTexture_OnConnectNotify(QSGDynamicTexture* self, intptr_t slot);
void QSGDynamicTexture_SuperConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
void QSGDynamicTexture_DisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
void QSGDynamicTexture_OnDisconnectNotify(QSGDynamicTexture* self, intptr_t slot);
void QSGDynamicTexture_SuperDisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
void* QSGDynamicTexture_ResolveInterface(const QSGDynamicTexture* self, const char* name, int revision);
void QSGDynamicTexture_OnResolveInterface(const QSGDynamicTexture* self, intptr_t slot);
void* QSGDynamicTexture_SuperResolveInterface(const QSGDynamicTexture* self, const char* name, int revision);
QObject* QSGDynamicTexture_Sender(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnSender(const QSGDynamicTexture* self, intptr_t slot);
QObject* QSGDynamicTexture_SuperSender(const QSGDynamicTexture* self);
int QSGDynamicTexture_SenderSignalIndex(const QSGDynamicTexture* self);
void QSGDynamicTexture_OnSenderSignalIndex(const QSGDynamicTexture* self, intptr_t slot);
int QSGDynamicTexture_SuperSenderSignalIndex(const QSGDynamicTexture* self);
int QSGDynamicTexture_Receivers(const QSGDynamicTexture* self, const char* signal);
void QSGDynamicTexture_OnReceivers(const QSGDynamicTexture* self, intptr_t slot);
int QSGDynamicTexture_SuperReceivers(const QSGDynamicTexture* self, const char* signal);
bool QSGDynamicTexture_IsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal);
void QSGDynamicTexture_OnIsSignalConnected(const QSGDynamicTexture* self, intptr_t slot);
bool QSGDynamicTexture_SuperIsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal);
void QSGDynamicTexture_Delete(QSGDynamicTexture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
