#pragma once
#ifndef SRCC_LIBQSTYLE_H
#define SRCC_LIBQSTYLE_H

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
typedef struct QApplication QApplication;
typedef struct QChildEvent QChildEvent;
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
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QStyle* QStyle_new();
QMetaObject* QStyle_MetaObject(const QStyle* self);
void* QStyle_Metacast(QStyle* self, const char* param1);
int QStyle_Metacall(QStyle* self, int param1, int param2, void** param3);
void QStyle_OnMetacall(QStyle* self, intptr_t slot);
int QStyle_QBaseMetacall(QStyle* self, int param1, int param2, void** param3);
libqt_string QStyle_Tr(const char* s);
libqt_string QStyle_Name(const QStyle* self);
void QStyle_Polish(QStyle* self, QWidget* widget);
void QStyle_OnPolish(QStyle* self, intptr_t slot);
void QStyle_QBasePolish(QStyle* self, QWidget* widget);
void QStyle_Unpolish(QStyle* self, QWidget* widget);
void QStyle_OnUnpolish(QStyle* self, intptr_t slot);
void QStyle_QBaseUnpolish(QStyle* self, QWidget* widget);
void QStyle_PolishWithApplication(QStyle* self, QApplication* application);
void QStyle_OnPolishWithApplication(QStyle* self, intptr_t slot);
void QStyle_QBasePolishWithApplication(QStyle* self, QApplication* application);
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_OnUnpolishWithApplication(QStyle* self, intptr_t slot);
void QStyle_QBaseUnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette);
void QStyle_OnPolishWithPalette(QStyle* self, intptr_t slot);
void QStyle_QBasePolishWithPalette(QStyle* self, QPalette* palette);
QRect* QStyle_ItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
void QStyle_OnItemTextRect(const QStyle* self, intptr_t slot);
QRect* QStyle_QBaseItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
QRect* QStyle_ItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
void QStyle_OnItemPixmapRect(const QStyle* self, intptr_t slot);
QRect* QStyle_QBaseItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
void QStyle_DrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QStyle_OnDrawItemText(const QStyle* self, intptr_t slot);
void QStyle_QBaseDrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
void QStyle_OnDrawItemPixmap(const QStyle* self, intptr_t slot);
void QStyle_QBaseDrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
QPalette* QStyle_StandardPalette(const QStyle* self);
void QStyle_OnStandardPalette(const QStyle* self, intptr_t slot);
QPalette* QStyle_QBaseStandardPalette(const QStyle* self);
void QStyle_DrawPrimitive(const QStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QStyle_OnDrawPrimitive(const QStyle* self, intptr_t slot);
void QStyle_QBaseDrawPrimitive(const QStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QStyle_DrawControl(const QStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QStyle_OnDrawControl(const QStyle* self, intptr_t slot);
void QStyle_QBaseDrawControl(const QStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w);
QRect* QStyle_SubElementRect(const QStyle* self, int subElement, const QStyleOption* option, const QWidget* widget);
void QStyle_OnSubElementRect(const QStyle* self, intptr_t slot);
QRect* QStyle_QBaseSubElementRect(const QStyle* self, int subElement, const QStyleOption* option, const QWidget* widget);
void QStyle_DrawComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget);
void QStyle_OnDrawComplexControl(const QStyle* self, intptr_t slot);
void QStyle_QBaseDrawComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget);
int QStyle_HitTestComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* widget);
void QStyle_OnHitTestComplexControl(const QStyle* self, intptr_t slot);
int QStyle_QBaseHitTestComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* widget);
QRect* QStyle_SubControlRect(const QStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
void QStyle_OnSubControlRect(const QStyle* self, intptr_t slot);
QRect* QStyle_QBaseSubControlRect(const QStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
int QStyle_PixelMetric(const QStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
void QStyle_OnPixelMetric(const QStyle* self, intptr_t slot);
int QStyle_QBasePixelMetric(const QStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
QSize* QStyle_SizeFromContents(const QStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* w);
void QStyle_OnSizeFromContents(const QStyle* self, intptr_t slot);
QSize* QStyle_QBaseSizeFromContents(const QStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* w);
int QStyle_StyleHint(const QStyle* self, int stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData);
void QStyle_OnStyleHint(const QStyle* self, intptr_t slot);
int QStyle_QBaseStyleHint(const QStyle* self, int stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData);
QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
void QStyle_OnStandardPixmap(const QStyle* self, intptr_t slot);
QPixmap* QStyle_QBaseStandardPixmap(const QStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
void QStyle_OnStandardIcon(const QStyle* self, intptr_t slot);
QIcon* QStyle_QBaseStandardIcon(const QStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
void QStyle_OnGeneratedIconPixmap(const QStyle* self, intptr_t slot);
QPixmap* QStyle_QBaseGeneratedIconPixmap(const QStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
QRect* QStyle_VisualRect(int direction, const QRect* boundingRect, const QRect* logicalRect);
QPoint* QStyle_VisualPos(int direction, const QRect* boundingRect, const QPoint* logicalPos);
int QStyle_SliderPositionFromValue(int min, int max, int val, int space);
int QStyle_SliderValueFromPosition(int min, int max, int pos, int space);
int QStyle_VisualAlignment(int direction, int alignment);
QRect* QStyle_AlignedRect(int direction, int alignment, const QSize* size, const QRect* rectangle);
int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
void QStyle_OnLayoutSpacing(const QStyle* self, intptr_t slot);
int QStyle_QBaseLayoutSpacing(const QStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation);
QStyle* QStyle_Proxy(const QStyle* self);
libqt_string QStyle_Tr2(const char* s, const char* c);
libqt_string QStyle_Tr3(const char* s, const char* c, int n);
int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown);
int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown);
int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option);
int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget);
bool QStyle_Event(QStyle* self, QEvent* event);
void QStyle_OnEvent(QStyle* self, intptr_t slot);
bool QStyle_QBaseEvent(QStyle* self, QEvent* event);
bool QStyle_EventFilter(QStyle* self, QObject* watched, QEvent* event);
void QStyle_OnEventFilter(QStyle* self, intptr_t slot);
bool QStyle_QBaseEventFilter(QStyle* self, QObject* watched, QEvent* event);
void QStyle_TimerEvent(QStyle* self, QTimerEvent* event);
void QStyle_OnTimerEvent(QStyle* self, intptr_t slot);
void QStyle_QBaseTimerEvent(QStyle* self, QTimerEvent* event);
void QStyle_ChildEvent(QStyle* self, QChildEvent* event);
void QStyle_OnChildEvent(QStyle* self, intptr_t slot);
void QStyle_QBaseChildEvent(QStyle* self, QChildEvent* event);
void QStyle_CustomEvent(QStyle* self, QEvent* event);
void QStyle_OnCustomEvent(QStyle* self, intptr_t slot);
void QStyle_QBaseCustomEvent(QStyle* self, QEvent* event);
void QStyle_ConnectNotify(QStyle* self, const QMetaMethod* signal);
void QStyle_OnConnectNotify(QStyle* self, intptr_t slot);
void QStyle_QBaseConnectNotify(QStyle* self, const QMetaMethod* signal);
void QStyle_DisconnectNotify(QStyle* self, const QMetaMethod* signal);
void QStyle_OnDisconnectNotify(QStyle* self, intptr_t slot);
void QStyle_QBaseDisconnectNotify(QStyle* self, const QMetaMethod* signal);
QObject* QStyle_Sender(const QStyle* self);
void QStyle_OnSender(const QStyle* self, intptr_t slot);
QObject* QStyle_QBaseSender(const QStyle* self);
int QStyle_SenderSignalIndex(const QStyle* self);
void QStyle_OnSenderSignalIndex(const QStyle* self, intptr_t slot);
int QStyle_QBaseSenderSignalIndex(const QStyle* self);
int QStyle_Receivers(const QStyle* self, const char* signal);
void QStyle_OnReceivers(const QStyle* self, intptr_t slot);
int QStyle_QBaseReceivers(const QStyle* self, const char* signal);
bool QStyle_IsSignalConnected(const QStyle* self, const QMetaMethod* signal);
void QStyle_OnIsSignalConnected(const QStyle* self, intptr_t slot);
bool QStyle_QBaseIsSignalConnected(const QStyle* self, const QMetaMethod* signal);
void QStyle_Delete(QStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
