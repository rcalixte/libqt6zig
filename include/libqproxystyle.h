#pragma once
#ifndef SRCC_LIBQPROXYSTYLE_H
#define SRCC_LIBQPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QApplication QApplication;
typedef struct QChildEvent QChildEvent;
typedef struct QCommonStyle QCommonStyle;
typedef struct QEvent QEvent;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(const libqt_string key);
QProxyStyle* QProxyStyle_new3(QStyle* style);
QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self);
void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1);
int QProxyStyle_Metacall(QProxyStyle* self, int param1, int param2, void** param3);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget);
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_Polish2(QProxyStyle* self, QPalette* pal);
void QProxyStyle_Polish3(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_Unpolish2(QProxyStyle* self, QApplication* app);
bool QProxyStyle_Event(QProxyStyle* self, QEvent* e);
void QProxyStyle_OnMetaObject(const QProxyStyle* self, intptr_t slot);
QMetaObject* QProxyStyle_SuperMetaObject(const QProxyStyle* self);
void QProxyStyle_OnMetacast(QProxyStyle* self, intptr_t slot);
void* QProxyStyle_SuperMetacast(QProxyStyle* self, const char* param1);
void QProxyStyle_OnMetacall(QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperMetacall(QProxyStyle* self, int param1, int param2, void** param3);
void QProxyStyle_OnDrawPrimitive(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawComplexControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawItemText(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QProxyStyle_OnDrawItemPixmap(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
void QProxyStyle_OnSizeFromContents(const QProxyStyle* self, intptr_t slot);
QSize* QProxyStyle_SuperSizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget);
void QProxyStyle_OnSubElementRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_SuperSubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnSubControlRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_SuperSubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
void QProxyStyle_OnItemTextRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_SuperItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
void QProxyStyle_OnItemPixmapRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_SuperItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
void QProxyStyle_OnHitTestComplexControl(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperHitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget);
void QProxyStyle_OnStyleHint(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperStyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData);
void QProxyStyle_OnPixelMetric(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperPixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnLayoutSpacing(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperLayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnStandardIcon(const QProxyStyle* self, intptr_t slot);
QIcon* QProxyStyle_SuperStandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnStandardPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_SuperStandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
void QProxyStyle_OnGeneratedIconPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_SuperGeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
void QProxyStyle_OnStandardPalette(const QProxyStyle* self, intptr_t slot);
QPalette* QProxyStyle_SuperStandardPalette(const QProxyStyle* self);
void QProxyStyle_OnPolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperPolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnPolish2(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperPolish2(QProxyStyle* self, QPalette* pal);
void QProxyStyle_OnPolish3(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperPolish3(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnUnpolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperUnpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnUnpolish2(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperUnpolish2(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnEvent(QProxyStyle* self, intptr_t slot);
bool QProxyStyle_SuperEvent(QProxyStyle* self, QEvent* e);
bool QProxyStyle_EventFilter(QProxyStyle* self, QObject* watched, QEvent* event);
void QProxyStyle_OnEventFilter(QProxyStyle* self, intptr_t slot);
bool QProxyStyle_SuperEventFilter(QProxyStyle* self, QObject* watched, QEvent* event);
void QProxyStyle_TimerEvent(QProxyStyle* self, QTimerEvent* event);
void QProxyStyle_OnTimerEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperTimerEvent(QProxyStyle* self, QTimerEvent* event);
void QProxyStyle_ChildEvent(QProxyStyle* self, QChildEvent* event);
void QProxyStyle_OnChildEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperChildEvent(QProxyStyle* self, QChildEvent* event);
void QProxyStyle_CustomEvent(QProxyStyle* self, QEvent* event);
void QProxyStyle_OnCustomEvent(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperCustomEvent(QProxyStyle* self, QEvent* event);
void QProxyStyle_ConnectNotify(QProxyStyle* self, const QMetaMethod* signal);
void QProxyStyle_OnConnectNotify(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperConnectNotify(QProxyStyle* self, const QMetaMethod* signal);
void QProxyStyle_DisconnectNotify(QProxyStyle* self, const QMetaMethod* signal);
void QProxyStyle_OnDisconnectNotify(QProxyStyle* self, intptr_t slot);
void QProxyStyle_SuperDisconnectNotify(QProxyStyle* self, const QMetaMethod* signal);
QObject* QProxyStyle_Sender(const QProxyStyle* self);
void QProxyStyle_OnSender(const QProxyStyle* self, intptr_t slot);
QObject* QProxyStyle_SuperSender(const QProxyStyle* self);
int QProxyStyle_SenderSignalIndex(const QProxyStyle* self);
void QProxyStyle_OnSenderSignalIndex(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperSenderSignalIndex(const QProxyStyle* self);
int QProxyStyle_Receivers(const QProxyStyle* self, const char* signal);
void QProxyStyle_OnReceivers(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_SuperReceivers(const QProxyStyle* self, const char* signal);
bool QProxyStyle_IsSignalConnected(const QProxyStyle* self, const QMetaMethod* signal);
void QProxyStyle_OnIsSignalConnected(const QProxyStyle* self, intptr_t slot);
bool QProxyStyle_SuperIsSignalConnected(const QProxyStyle* self, const QMetaMethod* signal);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
