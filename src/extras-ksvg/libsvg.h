#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBSVG_H
#define SRC_EXTRAS_KSVGC_LIBSVG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSvg__ImageSet)
typedef KSvg::ImageSet KSvg__ImageSet;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSvg__Svg)
typedef KSvg::Svg KSvg__Svg;
#endif
#else
typedef struct KSvg__ImageSet KSvg__ImageSet;
typedef struct KSvg__Svg KSvg__Svg;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
#endif

KSvg__Svg* KSvg__Svg_new();
KSvg__Svg* KSvg__Svg_new2(QObject* parent);
QMetaObject* KSvg__Svg_MetaObject(const KSvg__Svg* self);
void* KSvg__Svg_Metacast(KSvg__Svg* self, const char* param1);
int KSvg__Svg_Metacall(KSvg__Svg* self, int param1, int param2, void** param3);
libqt_string KSvg__Svg_Tr(const char* s);
void KSvg__Svg_SetDevicePixelRatio(KSvg__Svg* self, double factor);
double KSvg__Svg_DevicePixelRatio(const KSvg__Svg* self);
QPixmap* KSvg__Svg_Pixmap(KSvg__Svg* self);
QImage* KSvg__Svg_Image(KSvg__Svg* self, const QSize* size);
void KSvg__Svg_Paint(KSvg__Svg* self, QPainter* painter, const QPointF* point);
void KSvg__Svg_Paint2(KSvg__Svg* self, QPainter* painter, int x, int y);
void KSvg__Svg_Paint3(KSvg__Svg* self, QPainter* painter, const QRectF* rect);
void KSvg__Svg_Paint4(KSvg__Svg* self, QPainter* painter, int x, int y, int width, int height);
QSizeF* KSvg__Svg_Size(const KSvg__Svg* self);
void KSvg__Svg_Resize(KSvg__Svg* self, double width, double height);
void KSvg__Svg_Resize2(KSvg__Svg* self, const QSizeF* size);
void KSvg__Svg_Resize3(KSvg__Svg* self);
QSizeF* KSvg__Svg_ElementSize(const KSvg__Svg* self, const libqt_string elementId);
QRectF* KSvg__Svg_ElementRect(const KSvg__Svg* self, const libqt_string elementId);
bool KSvg__Svg_HasElement(const KSvg__Svg* self, const libqt_string elementId);
bool KSvg__Svg_IsValid(const KSvg__Svg* self);
void KSvg__Svg_SetContainsMultipleImages(KSvg__Svg* self, bool multiple);
bool KSvg__Svg_ContainsMultipleImages(const KSvg__Svg* self);
void KSvg__Svg_SetImagePath(KSvg__Svg* self, const libqt_string svgFilePath);
libqt_string KSvg__Svg_ImagePath(const KSvg__Svg* self);
void KSvg__Svg_SetUsingRenderingCache(KSvg__Svg* self, bool useCache);
bool KSvg__Svg_IsUsingRenderingCache(const KSvg__Svg* self);
bool KSvg__Svg_FromCurrentImageSet(const KSvg__Svg* self);
void KSvg__Svg_SetImageSet(KSvg__Svg* self, KSvg__ImageSet* theme);
KSvg__ImageSet* KSvg__Svg_ImageSet(const KSvg__Svg* self);
void KSvg__Svg_SetStatus(KSvg__Svg* self, int status);
int KSvg__Svg_Status(const KSvg__Svg* self);
void KSvg__Svg_SetColorSet(KSvg__Svg* self, int colorSet);
int KSvg__Svg_ColorSet(const KSvg__Svg* self);
QColor* KSvg__Svg_Color(const KSvg__Svg* self, int colorName);
void KSvg__Svg_SetColor(KSvg__Svg* self, int colorName, const QColor* color);
void KSvg__Svg_ClearColorOverrides(KSvg__Svg* self);
void KSvg__Svg_RepaintNeeded(KSvg__Svg* self);
void KSvg__Svg_Connect_RepaintNeeded(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_SizeChanged(KSvg__Svg* self);
void KSvg__Svg_Connect_SizeChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_ImagePathChanged(KSvg__Svg* self);
void KSvg__Svg_Connect_ImagePathChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_ColorHintChanged(KSvg__Svg* self);
void KSvg__Svg_Connect_ColorHintChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_FromCurrentImageSetChanged(KSvg__Svg* self, bool fromCurrentImageSet);
void KSvg__Svg_Connect_FromCurrentImageSetChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_StatusChanged(KSvg__Svg* self, int status);
void KSvg__Svg_Connect_StatusChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_ColorSetChanged(KSvg__Svg* self, int colorSet);
void KSvg__Svg_Connect_ColorSetChanged(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_ImageSetChanged(KSvg__Svg* self, KSvg__ImageSet* imageSet);
void KSvg__Svg_Connect_ImageSetChanged(KSvg__Svg* self, intptr_t slot);
libqt_string KSvg__Svg_Tr2(const char* s, const char* c);
libqt_string KSvg__Svg_Tr3(const char* s, const char* c, int n);
QPixmap* KSvg__Svg_Pixmap1(KSvg__Svg* self, const libqt_string elementID);
QImage* KSvg__Svg_Image2(KSvg__Svg* self, const QSize* size, const libqt_string elementID);
void KSvg__Svg_Paint32(KSvg__Svg* self, QPainter* painter, const QPointF* point, const libqt_string elementID);
void KSvg__Svg_Paint42(KSvg__Svg* self, QPainter* painter, int x, int y, const libqt_string elementID);
void KSvg__Svg_Paint33(KSvg__Svg* self, QPainter* painter, const QRectF* rect, const libqt_string elementID);
void KSvg__Svg_Paint6(KSvg__Svg* self, QPainter* painter, int x, int y, int width, int height, const libqt_string elementID);
void KSvg__Svg_OnMetacall(KSvg__Svg* self, intptr_t slot);
int KSvg__Svg_QBaseMetacall(KSvg__Svg* self, int param1, int param2, void** param3);
void KSvg__Svg_OnSetImagePath(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseSetImagePath(KSvg__Svg* self, const libqt_string svgFilePath);
bool KSvg__Svg_Event(KSvg__Svg* self, QEvent* event);
void KSvg__Svg_OnEvent(KSvg__Svg* self, intptr_t slot);
bool KSvg__Svg_QBaseEvent(KSvg__Svg* self, QEvent* event);
void KSvg__Svg_TimerEvent(KSvg__Svg* self, QTimerEvent* event);
void KSvg__Svg_OnTimerEvent(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseTimerEvent(KSvg__Svg* self, QTimerEvent* event);
void KSvg__Svg_ChildEvent(KSvg__Svg* self, QChildEvent* event);
void KSvg__Svg_OnChildEvent(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseChildEvent(KSvg__Svg* self, QChildEvent* event);
void KSvg__Svg_CustomEvent(KSvg__Svg* self, QEvent* event);
void KSvg__Svg_OnCustomEvent(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseCustomEvent(KSvg__Svg* self, QEvent* event);
void KSvg__Svg_ConnectNotify(KSvg__Svg* self, const QMetaMethod* signal);
void KSvg__Svg_OnConnectNotify(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseConnectNotify(KSvg__Svg* self, const QMetaMethod* signal);
void KSvg__Svg_DisconnectNotify(KSvg__Svg* self, const QMetaMethod* signal);
void KSvg__Svg_OnDisconnectNotify(KSvg__Svg* self, intptr_t slot);
void KSvg__Svg_QBaseDisconnectNotify(KSvg__Svg* self, const QMetaMethod* signal);
QObject* KSvg__Svg_Sender(const KSvg__Svg* self);
void KSvg__Svg_OnSender(const KSvg__Svg* self, intptr_t slot);
QObject* KSvg__Svg_QBaseSender(const KSvg__Svg* self);
int KSvg__Svg_SenderSignalIndex(const KSvg__Svg* self);
void KSvg__Svg_OnSenderSignalIndex(const KSvg__Svg* self, intptr_t slot);
int KSvg__Svg_QBaseSenderSignalIndex(const KSvg__Svg* self);
int KSvg__Svg_Receivers(const KSvg__Svg* self, const char* signal);
void KSvg__Svg_OnReceivers(const KSvg__Svg* self, intptr_t slot);
int KSvg__Svg_QBaseReceivers(const KSvg__Svg* self, const char* signal);
bool KSvg__Svg_IsSignalConnected(const KSvg__Svg* self, const QMetaMethod* signal);
void KSvg__Svg_OnIsSignalConnected(const KSvg__Svg* self, intptr_t slot);
bool KSvg__Svg_QBaseIsSignalConnected(const KSvg__Svg* self, const QMetaMethod* signal);
void KSvg__Svg_Delete(KSvg__Svg* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
