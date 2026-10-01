#include <QApplication>
#include <QChildEvent>
#include <QCommonStyle>
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
#include <qcommonstyle.h>
#include "libqcommonstyle.h"
#include "libqcommonstyle.hxx"

QCommonStyle* QCommonStyle_new() {
    return new VirtualQCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(const QCommonStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCommonStyle_Metacast(QCommonStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCommonStyle_Metacall(QCommonStyle* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCommonStyle_Tr(const char* s) {
    auto _ret = QCommonStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QCommonStyle_DrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
    return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
}

void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
    self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
    return static_cast<int>(self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
}

QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
    return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
}

QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
    return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
}

int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
    return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
    return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
    return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
}

QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
    return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
}

QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
    self->polish(*param1);
}

void QCommonStyle_Polish2(QCommonStyle* self, QApplication* app) {
    self->polish(app);
}

void QCommonStyle_Polish3(QCommonStyle* self, QWidget* widget) {
    self->polish(widget);
}

void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
    self->unpolish(widget);
}

void QCommonStyle_Unpolish2(QCommonStyle* self, QApplication* application) {
    self->unpolish(application);
}

libqt_string QCommonStyle_Tr2(const char* s, const char* c) {
    auto _ret = QCommonStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCommonStyle_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCommonStyle::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QCommonStyle_SuperMetaObject(const QCommonStyle* self) {
    return (QMetaObject*)self->QCommonStyle::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnMetaObject(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_metaobject_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCommonStyle_SuperMetacast(QCommonStyle* self, const char* param1) {
    return self->QCommonStyle::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnMetacast(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_metacast_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCommonStyle_SuperMetacall(QCommonStyle* self, int param1, int param2, void** param3) {
    return self->QCommonStyle::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnMetacall(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_metacall_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Metacall_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperDrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->QCommonStyle::drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawPrimitive(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_drawprimitive_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawPrimitive_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperDrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    self->QCommonStyle::drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawControl(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_drawcontrol_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawControl_Callback>(slot);
}

// Base class handler implementation
QRect* QCommonStyle_SuperSubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
    return new QRect(self->QCommonStyle::subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubElementRect(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_subelementrect_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubElementRect_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperDrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
    self->QCommonStyle::drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawComplexControl(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_drawcomplexcontrol_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawComplexControl_Callback>(slot);
}

// Base class handler implementation
int QCommonStyle_SuperHitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
    return static_cast<int>(self->QCommonStyle::hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnHitTestComplexControl(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_hittestcomplexcontrol_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_HitTestComplexControl_Callback>(slot);
}

// Base class handler implementation
QRect* QCommonStyle_SuperSubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
    return new QRect(self->QCommonStyle::subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubControlRect(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_subcontrolrect_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubControlRect_Callback>(slot);
}

// Base class handler implementation
QSize* QCommonStyle_SuperSizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
    return new QSize(self->QCommonStyle::sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSizeFromContents(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_sizefromcontents_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SizeFromContents_Callback>(slot);
}

// Base class handler implementation
int QCommonStyle_SuperPixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
    return self->QCommonStyle::pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPixelMetric(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_pixelmetric_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PixelMetric_Callback>(slot);
}

// Base class handler implementation
int QCommonStyle_SuperStyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
    return self->QCommonStyle::styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStyleHint(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_stylehint_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StyleHint_Callback>(slot);
}

// Base class handler implementation
QIcon* QCommonStyle_SuperStandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
    return new QIcon(self->QCommonStyle::standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardIcon(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_standardicon_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardIcon_Callback>(slot);
}

// Base class handler implementation
QPixmap* QCommonStyle_SuperStandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
    return new QPixmap(self->QCommonStyle::standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPixmap(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_standardpixmap_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPixmap_Callback>(slot);
}

// Base class handler implementation
QPixmap* QCommonStyle_SuperGeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    return new QPixmap(self->QCommonStyle::generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnGeneratedIconPixmap(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_generatediconpixmap_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_GeneratedIconPixmap_Callback>(slot);
}

// Base class handler implementation
int QCommonStyle_SuperLayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    return self->QCommonStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnLayoutSpacing(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_layoutspacing_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_LayoutSpacing_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperPolish(QCommonStyle* self, QPalette* param1) {
    self->QCommonStyle::polish(*param1);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_polish_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperPolish2(QCommonStyle* self, QApplication* app) {
    self->QCommonStyle::polish(app);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish2(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_polish2_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish2_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperPolish3(QCommonStyle* self, QWidget* widget) {
    self->QCommonStyle::polish(widget);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish3(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_polish3_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish3_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperUnpolish(QCommonStyle* self, QWidget* widget) {
    self->QCommonStyle::unpolish(widget);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_unpolish_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish_Callback>(slot);
}

// Base class handler implementation
void QCommonStyle_SuperUnpolish2(QCommonStyle* self, QApplication* application) {
    self->QCommonStyle::unpolish(application);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish2(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_unpolish2_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish2_Callback>(slot);
}

// Derived class handler implementation
QRect* QCommonStyle_ItemTextRect(const QCommonStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

// Base class handler implementation
QRect* QCommonStyle_SuperItemTextRect(const QCommonStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->QCommonStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemTextRect(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_itemtextrect_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemTextRect_Callback>(slot);
}

// Derived class handler implementation
QRect* QCommonStyle_ItemPixmapRect(const QCommonStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

// Base class handler implementation
QRect* QCommonStyle_SuperItemPixmapRect(const QCommonStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->QCommonStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemPixmapRect(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_itempixmaprect_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemPixmapRect_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_DrawItemText(const QCommonStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

// Base class handler implementation
void QCommonStyle_SuperDrawItemText(const QCommonStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QCommonStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemText(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_drawitemtext_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemText_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_DrawItemPixmap(const QCommonStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

// Base class handler implementation
void QCommonStyle_SuperDrawItemPixmap(const QCommonStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->QCommonStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemPixmap(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_drawitempixmap_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemPixmap_Callback>(slot);
}

// Derived class handler implementation
QPalette* QCommonStyle_StandardPalette(const QCommonStyle* self) {
    return new QPalette(self->standardPalette());
}

// Base class handler implementation
QPalette* QCommonStyle_SuperStandardPalette(const QCommonStyle* self) {
    return new QPalette(self->QCommonStyle::standardPalette());
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPalette(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self)))
        vqcommonstyle->qcommonstyle_standardpalette_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPalette_Callback>(slot);
}

// Derived class handler implementation
bool QCommonStyle_Event(QCommonStyle* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCommonStyle_SuperEvent(QCommonStyle* self, QEvent* event) {
    return self->QCommonStyle::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_event_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCommonStyle_EventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCommonStyle_SuperEventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    return self->QCommonStyle::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEventFilter(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_eventfilter_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_TimerEvent(QCommonStyle* self, QTimerEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle) {
        vqcommonstyle->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommonStyle::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommonStyle_SuperTimerEvent(QCommonStyle* self, QTimerEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->QCommonStyle::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommonStyle::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnTimerEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_timerevent_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_ChildEvent(QCommonStyle* self, QChildEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle) {
        vqcommonstyle->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommonStyle::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommonStyle_SuperChildEvent(QCommonStyle* self, QChildEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->QCommonStyle::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommonStyle::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnChildEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_childevent_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_CustomEvent(QCommonStyle* self, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle) {
        vqcommonstyle->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommonStyle::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommonStyle_SuperCustomEvent(QCommonStyle* self, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->QCommonStyle::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommonStyle::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnCustomEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_customevent_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_ConnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle) {
        vqcommonstyle->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCommonStyle::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommonStyle_SuperConnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->QCommonStyle::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCommonStyle::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnConnectNotify(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_connectnotify_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCommonStyle_DisconnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle) {
        vqcommonstyle->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCommonStyle::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommonStyle_SuperDisconnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->QCommonStyle::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCommonStyle::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDisconnectNotify(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self))
        vqcommonstyle->qcommonstyle_disconnectnotify_callback = reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCommonStyle_Sender(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->VirtualQCommonStyle::sender();
    } else
        qFatal("Error: Protected method QCommonStyle::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCommonStyle_SenderSignalIndex(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->VirtualQCommonStyle::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCommonStyle::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCommonStyle_Receivers(const QCommonStyle* self, const char* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->VirtualQCommonStyle::receivers(signal);
    } else
        qFatal("Error: Protected method QCommonStyle::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCommonStyle_IsSignalConnected(const QCommonStyle* self, const QMetaMethod* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->VirtualQCommonStyle::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCommonStyle::isSignalConnected called without a directly constructed type");
}

void QCommonStyle_Delete(QCommonStyle* self) {
    delete self;
}
