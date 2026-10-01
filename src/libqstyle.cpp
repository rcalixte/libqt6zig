#include <QApplication>
#include <QChildEvent>
#include <QEvent>
#include <QFontMetrics>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QTimerEvent>
#include <QWidget>
#include <qstyle.h>
#include "libqstyle.h"
#include "libqstyle.hxx"

QStyle* QStyle_new() {
    return new VirtualQStyle();
}

QMetaObject* QStyle_MetaObject(const QStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyle_Metacast(QStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyle_Metacall(QStyle* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStyle_Tr(const char* s) {
    auto _ret = QStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStyle_Name(const QStyle* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyle_Polish(QStyle* self, QWidget* widget) {
    self->polish(widget);
}

void QStyle_Unpolish(QStyle* self, QWidget* widget) {
    self->unpolish(widget);
}

void QStyle_Polish2(QStyle* self, QApplication* application) {
    self->polish(application);
}

void QStyle_Unpolish2(QStyle* self, QApplication* application) {
    self->unpolish(application);
}

void QStyle_Polish3(QStyle* self, QPalette* palette) {
    self->polish(*palette);
}

QRect* QStyle_ItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QStyle_ItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

void QStyle_DrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_StandardPalette(const QStyle* self) {
    return new QPalette(self->standardPalette());
}

void QStyle_DrawPrimitive(const QStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QStyle_DrawControl(const QStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QStyle_SubElementRect(const QStyle* self, int subElement, const QStyleOption* option, const QWidget* widget) {
    return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
}

void QStyle_DrawComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) {
    self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
}

int QStyle_HitTestComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* widget) {
    return static_cast<int>(self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
}

QRect* QStyle_SubControlRect(const QStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget) {
    return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

int QStyle_PixelMetric(const QStyle* self, int metric, const QStyleOption* option, const QWidget* widget) {
    return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

QSize* QStyle_SizeFromContents(const QStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* w) {
    return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
}

int QStyle_StyleHint(const QStyle* self, int stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) {
    return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
}

QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget) {
    return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget) {
    return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QRect* QStyle_VisualRect(int direction, const QRect* boundingRect, const QRect* logicalRect) {
    return new QRect(QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect));
}

QPoint* QStyle_VisualPos(int direction, const QRect* boundingRect, const QPoint* logicalPos) {
    return new QPoint(QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
    return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
    return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_VisualAlignment(int direction, int alignment) {
    return static_cast<int>(QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment)));
}

QRect* QStyle_AlignedRect(int direction, int alignment, const QSize* size, const QRect* rectangle) {
    return new QRect(QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle));
}

int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(const QStyle* self) {
    return (QStyle*)self->proxy();
}

libqt_string QStyle_Tr2(const char* s, const char* c) {
    auto _ret = QStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStyle_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStyle::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

// Base class handler implementation
QMetaObject* QStyle_SuperMetaObject(const QStyle* self) {
    return (QMetaObject*)self->QStyle::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnMetaObject(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_metaobject_callback = reinterpret_cast<VirtualQStyle::QStyle_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStyle_SuperMetacast(QStyle* self, const char* param1) {
    return self->QStyle::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnMetacast(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_metacast_callback = reinterpret_cast<VirtualQStyle::QStyle_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStyle_SuperMetacall(QStyle* self, int param1, int param2, void** param3) {
    return self->QStyle::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnMetacall(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_metacall_callback = reinterpret_cast<VirtualQStyle::QStyle_Metacall_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperPolish(QStyle* self, QWidget* widget) {
    self->QStyle::polish(widget);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolish(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_polish_callback = reinterpret_cast<VirtualQStyle::QStyle_Polish_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperUnpolish(QStyle* self, QWidget* widget) {
    self->QStyle::unpolish(widget);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnUnpolish(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_unpolish_callback = reinterpret_cast<VirtualQStyle::QStyle_Unpolish_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperPolish2(QStyle* self, QApplication* application) {
    self->QStyle::polish(application);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolish2(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_polish2_callback = reinterpret_cast<VirtualQStyle::QStyle_Polish2_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperUnpolish2(QStyle* self, QApplication* application) {
    self->QStyle::unpolish(application);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnUnpolish2(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_unpolish2_callback = reinterpret_cast<VirtualQStyle::QStyle_Unpolish2_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperPolish3(QStyle* self, QPalette* palette) {
    self->QStyle::polish(*palette);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolish3(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_polish3_callback = reinterpret_cast<VirtualQStyle::QStyle_Polish3_Callback>(slot);
}

// Base class handler implementation
QRect* QStyle_SuperItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->QStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnItemTextRect(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_itemtextrect_callback = reinterpret_cast<VirtualQStyle::QStyle_ItemTextRect_Callback>(slot);
}

// Base class handler implementation
QRect* QStyle_SuperItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->QStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnItemPixmapRect(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_itempixmaprect_callback = reinterpret_cast<VirtualQStyle::QStyle_ItemPixmapRect_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperDrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawItemText(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_drawitemtext_callback = reinterpret_cast<VirtualQStyle::QStyle_DrawItemText_Callback>(slot);
}

// Base class handler implementation
void QStyle_SuperDrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->QStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawItemPixmap(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_drawitempixmap_callback = reinterpret_cast<VirtualQStyle::QStyle_DrawItemPixmap_Callback>(slot);
}

// Base class handler implementation
QPalette* QStyle_SuperStandardPalette(const QStyle* self) {
    return new QPalette(self->QStyle::standardPalette());
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardPalette(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_standardpalette_callback = reinterpret_cast<VirtualQStyle::QStyle_StandardPalette_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawPrimitive(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_drawprimitive_callback = reinterpret_cast<VirtualQStyle::QStyle_DrawPrimitive_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawControl(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_drawcontrol_callback = reinterpret_cast<VirtualQStyle::QStyle_DrawControl_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSubElementRect(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_subelementrect_callback = reinterpret_cast<VirtualQStyle::QStyle_SubElementRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawComplexControl(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_drawcomplexcontrol_callback = reinterpret_cast<VirtualQStyle::QStyle_DrawComplexControl_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnHitTestComplexControl(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_hittestcomplexcontrol_callback = reinterpret_cast<VirtualQStyle::QStyle_HitTestComplexControl_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSubControlRect(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_subcontrolrect_callback = reinterpret_cast<VirtualQStyle::QStyle_SubControlRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPixelMetric(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_pixelmetric_callback = reinterpret_cast<VirtualQStyle::QStyle_PixelMetric_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSizeFromContents(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_sizefromcontents_callback = reinterpret_cast<VirtualQStyle::QStyle_SizeFromContents_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStyleHint(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_stylehint_callback = reinterpret_cast<VirtualQStyle::QStyle_StyleHint_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardPixmap(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_standardpixmap_callback = reinterpret_cast<VirtualQStyle::QStyle_StandardPixmap_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardIcon(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_standardicon_callback = reinterpret_cast<VirtualQStyle::QStyle_StandardIcon_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnGeneratedIconPixmap(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_generatediconpixmap_callback = reinterpret_cast<VirtualQStyle::QStyle_GeneratedIconPixmap_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnLayoutSpacing(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self)))
        vqstyle->qstyle_layoutspacing_callback = reinterpret_cast<VirtualQStyle::QStyle_LayoutSpacing_Callback>(slot);
}

// Derived class handler implementation
bool QStyle_Event(QStyle* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStyle_SuperEvent(QStyle* self, QEvent* event) {
    return self->QStyle::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_event_callback = reinterpret_cast<VirtualQStyle::QStyle_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStyle_EventFilter(QStyle* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStyle_SuperEventFilter(QStyle* self, QObject* watched, QEvent* event) {
    return self->QStyle::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEventFilter(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_eventfilter_callback = reinterpret_cast<VirtualQStyle::QStyle_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStyle_TimerEvent(QStyle* self, QTimerEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle) {
        vqstyle->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyle::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyle_SuperTimerEvent(QStyle* self, QTimerEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->QStyle::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyle::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnTimerEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_timerevent_callback = reinterpret_cast<VirtualQStyle::QStyle_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyle_ChildEvent(QStyle* self, QChildEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle) {
        vqstyle->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyle::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyle_SuperChildEvent(QStyle* self, QChildEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->QStyle::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyle::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnChildEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_childevent_callback = reinterpret_cast<VirtualQStyle::QStyle_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyle_CustomEvent(QStyle* self, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle) {
        vqstyle->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyle::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyle_SuperCustomEvent(QStyle* self, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->QStyle::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyle::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnCustomEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_customevent_callback = reinterpret_cast<VirtualQStyle::QStyle_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyle_ConnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle) {
        vqstyle->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStyle::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyle_SuperConnectNotify(QStyle* self, const QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->QStyle::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStyle::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnConnectNotify(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_connectnotify_callback = reinterpret_cast<VirtualQStyle::QStyle_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStyle_DisconnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle) {
        vqstyle->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStyle::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyle_SuperDisconnectNotify(QStyle* self, const QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->QStyle::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStyle::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDisconnectNotify(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self))
        vqstyle->qstyle_disconnectnotify_callback = reinterpret_cast<VirtualQStyle::QStyle_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QStyle_Sender(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->VirtualQStyle::sender();
    } else
        qFatal("Error: Protected method QStyle::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStyle_SenderSignalIndex(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->VirtualQStyle::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStyle::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStyle_Receivers(const QStyle* self, const char* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->VirtualQStyle::receivers(signal);
    } else
        qFatal("Error: Protected method QStyle::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStyle_IsSignalConnected(const QStyle* self, const QMetaMethod* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->VirtualQStyle::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStyle::isSignalConnected called without a directly constructed type");
}

void QStyle_Delete(QStyle* self) {
    delete self;
}
