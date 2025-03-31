#pragma once
#ifndef SRCC_LIBQPROXYSTYLE_H
#define SRCC_LIBQPROXYSTYLE_H

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
typedef struct QApplication QApplication;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QCommonStyle QCommonStyle;
typedef struct QEvent QEvent;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QProxyStyle QProxyStyle;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(libqt_string key);
QProxyStyle* QProxyStyle_new3(QStyle* style);
QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self);
void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1);
int QProxyStyle_Metacall(QProxyStyle* self, int param1, int param2, void** param3);
void QProxyStyle_OnMetacall(QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseMetacall(QProxyStyle* self, int param1, int param2, void** param3);
libqt_string QProxyStyle_Tr(const char* s);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_OnDrawPrimitive(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_OnDrawControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_OnDrawComplexControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole);
void QProxyStyle_OnDrawItemText(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
void QProxyStyle_OnDrawItemPixmap(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget);
void QProxyStyle_OnSizeFromContents(const QProxyStyle* self, intptr_t slot);
QSize* QProxyStyle_QBaseSizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget);
void QProxyStyle_OnSubElementRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseSubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
void QProxyStyle_OnSubControlRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseSubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text);
void QProxyStyle_OnItemTextRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
void QProxyStyle_OnItemPixmapRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
void QProxyStyle_OnHitTestComplexControl(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseHitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
void QProxyStyle_OnStyleHint(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseStyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget);
void QProxyStyle_OnPixelMetric(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBasePixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
void QProxyStyle_OnLayoutSpacing(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseLayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
void QProxyStyle_OnStandardIcon(const QProxyStyle* self, intptr_t slot);
QIcon* QProxyStyle_QBaseStandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
void QProxyStyle_OnStandardPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_QBaseStandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
void QProxyStyle_OnGeneratedIconPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_QBaseGeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_OnStandardPalette(const QProxyStyle* self, intptr_t slot);
QPalette* QProxyStyle_QBaseStandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnPolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_OnPolishWithPal(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnPolishWithApp(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnUnpolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseUnpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnUnpolishWithApp(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseUnpolishWithApp(QProxyStyle* self, QApplication* app);
bool QProxyStyle_Event(QProxyStyle* self, QEvent* e);
void QProxyStyle_OnEvent(QProxyStyle* self, intptr_t slot);
bool QProxyStyle_QBaseEvent(QProxyStyle* self, QEvent* e);
libqt_string QProxyStyle_Tr2(const char* s, const char* c);
libqt_string QProxyStyle_Tr3(const char* s, const char* c, int n);
bool QProxyStyle_EventFilter(QProxyStyle* self, QObject* watched, QEvent* event);
void QProxyStyle_OnEventFilter(QProxyStyle* self, intptr_t slot);
bool QProxyStyle_QBaseEventFilter(QProxyStyle* self, QObject* watched, QEvent* event);
void QProxyStyle_TimerEvent(QProxyStyle* self, QTimerEvent* event);
void QProxyStyle_OnTimerEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseTimerEvent(QProxyStyle* self, QTimerEvent* event);
void QProxyStyle_ChildEvent(QProxyStyle* self, QChildEvent* event);
void QProxyStyle_OnChildEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseChildEvent(QProxyStyle* self, QChildEvent* event);
void QProxyStyle_CustomEvent(QProxyStyle* self, QEvent* event);
void QProxyStyle_OnCustomEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseCustomEvent(QProxyStyle* self, QEvent* event);
void QProxyStyle_ConnectNotify(QProxyStyle* self, QMetaMethod* signal);
void QProxyStyle_OnConnectNotify(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseConnectNotify(QProxyStyle* self, QMetaMethod* signal);
void QProxyStyle_DisconnectNotify(QProxyStyle* self, QMetaMethod* signal);
void QProxyStyle_OnDisconnectNotify(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDisconnectNotify(QProxyStyle* self, QMetaMethod* signal);
QObject* QProxyStyle_Sender(const QProxyStyle* self);
void QProxyStyle_OnSender(const QProxyStyle* self, intptr_t slot);
QObject* QProxyStyle_QBaseSender(const QProxyStyle* self);
int QProxyStyle_SenderSignalIndex(const QProxyStyle* self);
void QProxyStyle_OnSenderSignalIndex(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseSenderSignalIndex(const QProxyStyle* self);
int QProxyStyle_Receivers(const QProxyStyle* self, const char* signal);
void QProxyStyle_OnReceivers(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseReceivers(const QProxyStyle* self, const char* signal);
bool QProxyStyle_IsSignalConnected(const QProxyStyle* self, QMetaMethod* signal);
void QProxyStyle_OnIsSignalConnected(const QProxyStyle* self, intptr_t slot);
bool QProxyStyle_QBaseIsSignalConnected(const QProxyStyle* self, QMetaMethod* signal);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
