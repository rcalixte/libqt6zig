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
#include <QProxyStyle>
#include <QRect>
#include <QSize>
#include <QString>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QTimerEvent>
#include <QWidget>
#include <qproxystyle.h>
#include "libqproxystyle.h"
#include "libqproxystyle.hxx"

QProxyStyle* QProxyStyle_new() {
    return new VirtualQProxyStyle();
}

QProxyStyle* QProxyStyle_new2(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
    return new VirtualQProxyStyle(style);
}

QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProxyStyle_Metacall(QProxyStyle* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QProxyStyle_Tr(const char* s) {
    auto _ret = QProxyStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self) {
    return self->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
    self->setBaseStyle(style);
}

void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget) {
    self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
}

void QProxyStyle_DrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget) {
    self->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
}

void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) {
    self->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
}

void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget) {
    return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
}

QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget) {
    return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
}

QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget) {
    return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget) {
    return static_cast<int>(self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
}

int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) {
    return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
}

int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget) {
    return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget) {
    return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget) {
    return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self) {
    return new QPalette(self->standardPalette());
}

void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget) {
    self->polish(widget);
}

void QProxyStyle_Polish2(QProxyStyle* self, QPalette* pal) {
    self->polish(*pal);
}

void QProxyStyle_Polish3(QProxyStyle* self, QApplication* app) {
    self->polish(app);
}

void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget) {
    self->unpolish(widget);
}

void QProxyStyle_Unpolish2(QProxyStyle* self, QApplication* app) {
    self->unpolish(app);
}

bool QProxyStyle_Event(QProxyStyle* self, QEvent* e) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        return vqproxystyle->event(e);
    }
    qFatal("Error: Protected method QProxyStyle::event called without a directly constructed type");
}

libqt_string QProxyStyle_Tr2(const char* s, const char* c) {
    auto _ret = QProxyStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QProxyStyle_Tr3(const char* s, const char* c, int n) {
    auto _ret = QProxyStyle::tr(s, c, static_cast<int>(n));
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
QMetaObject* QProxyStyle_SuperMetaObject(const QProxyStyle* self) {
    return (QMetaObject*)self->QProxyStyle::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnMetaObject(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_metaobject_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QProxyStyle_SuperMetacast(QProxyStyle* self, const char* param1) {
    return self->QProxyStyle::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnMetacast(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_metacast_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Metacast_Callback>(slot);
}

// Base class handler implementation
int QProxyStyle_SuperMetacall(QProxyStyle* self, int param1, int param2, void** param3) {
    return self->QProxyStyle::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnMetacall(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_metacall_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Metacall_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperDrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget) {
    self->QProxyStyle::drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawPrimitive(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_drawprimitive_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawPrimitive_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperDrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget) {
    self->QProxyStyle::drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawControl(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_drawcontrol_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawControl_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperDrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) {
    self->QProxyStyle::drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawComplexControl(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_drawcomplexcontrol_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawComplexControl_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperDrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QProxyStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawItemText(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_drawitemtext_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawItemText_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperDrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    self->QProxyStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawItemPixmap(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_drawitempixmap_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawItemPixmap_Callback>(slot);
}

// Base class handler implementation
QSize* QProxyStyle_SuperSizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget) {
    return new QSize(self->QProxyStyle::sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSizeFromContents(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_sizefromcontents_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SizeFromContents_Callback>(slot);
}

// Base class handler implementation
QRect* QProxyStyle_SuperSubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget) {
    return new QRect(self->QProxyStyle::subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSubElementRect(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_subelementrect_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SubElementRect_Callback>(slot);
}

// Base class handler implementation
QRect* QProxyStyle_SuperSubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget) {
    return new QRect(self->QProxyStyle::subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSubControlRect(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_subcontrolrect_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SubControlRect_Callback>(slot);
}

// Base class handler implementation
QRect* QProxyStyle_SuperItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->QProxyStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnItemTextRect(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_itemtextrect_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ItemTextRect_Callback>(slot);
}

// Base class handler implementation
QRect* QProxyStyle_SuperItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    return new QRect(self->QProxyStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnItemPixmapRect(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_itempixmaprect_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ItemPixmapRect_Callback>(slot);
}

// Base class handler implementation
int QProxyStyle_SuperHitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget) {
    return static_cast<int>(self->QProxyStyle::hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnHitTestComplexControl(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_hittestcomplexcontrol_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_HitTestComplexControl_Callback>(slot);
}

// Base class handler implementation
int QProxyStyle_SuperStyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) {
    return self->QProxyStyle::styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStyleHint(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_stylehint_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StyleHint_Callback>(slot);
}

// Base class handler implementation
int QProxyStyle_SuperPixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget) {
    return self->QProxyStyle::pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPixelMetric(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_pixelmetric_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_PixelMetric_Callback>(slot);
}

// Base class handler implementation
int QProxyStyle_SuperLayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    return self->QProxyStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnLayoutSpacing(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_layoutspacing_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_LayoutSpacing_Callback>(slot);
}

// Base class handler implementation
QIcon* QProxyStyle_SuperStandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget) {
    return new QIcon(self->QProxyStyle::standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardIcon(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_standardicon_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardIcon_Callback>(slot);
}

// Base class handler implementation
QPixmap* QProxyStyle_SuperStandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget) {
    return new QPixmap(self->QProxyStyle::standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardPixmap(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_standardpixmap_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardPixmap_Callback>(slot);
}

// Base class handler implementation
QPixmap* QProxyStyle_SuperGeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    return new QPixmap(self->QProxyStyle::generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnGeneratedIconPixmap(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_generatediconpixmap_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_GeneratedIconPixmap_Callback>(slot);
}

// Base class handler implementation
QPalette* QProxyStyle_SuperStandardPalette(const QProxyStyle* self) {
    return new QPalette(self->QProxyStyle::standardPalette());
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardPalette(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self)))
        vqproxystyle->qproxystyle_standardpalette_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardPalette_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperPolish(QProxyStyle* self, QWidget* widget) {
    self->QProxyStyle::polish(widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolish(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_polish_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Polish_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperPolish2(QProxyStyle* self, QPalette* pal) {
    self->QProxyStyle::polish(*pal);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolish2(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_polish2_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Polish2_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperPolish3(QProxyStyle* self, QApplication* app) {
    self->QProxyStyle::polish(app);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolish3(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_polish3_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Polish3_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperUnpolish(QProxyStyle* self, QWidget* widget) {
    self->QProxyStyle::unpolish(widget);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnUnpolish(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_unpolish_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Unpolish_Callback>(slot);
}

// Base class handler implementation
void QProxyStyle_SuperUnpolish2(QProxyStyle* self, QApplication* app) {
    self->QProxyStyle::unpolish(app);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnUnpolish2(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_unpolish2_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Unpolish2_Callback>(slot);
}

// Base class handler implementation
bool QProxyStyle_SuperEvent(QProxyStyle* self, QEvent* e) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        return vqproxystyle->QProxyStyle::event(e);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_event_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Event_Callback>(slot);
}

// Derived class handler implementation
bool QProxyStyle_EventFilter(QProxyStyle* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QProxyStyle_SuperEventFilter(QProxyStyle* self, QObject* watched, QEvent* event) {
    return self->QProxyStyle::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnEventFilter(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_eventfilter_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QProxyStyle_TimerEvent(QProxyStyle* self, QTimerEvent* event) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        vqproxystyle->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProxyStyle::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProxyStyle_SuperTimerEvent(QProxyStyle* self, QTimerEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->QProxyStyle::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnTimerEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_timerevent_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QProxyStyle_ChildEvent(QProxyStyle* self, QChildEvent* event) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        vqproxystyle->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProxyStyle::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProxyStyle_SuperChildEvent(QProxyStyle* self, QChildEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->QProxyStyle::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnChildEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_childevent_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QProxyStyle_CustomEvent(QProxyStyle* self, QEvent* event) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        vqproxystyle->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProxyStyle::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProxyStyle_SuperCustomEvent(QProxyStyle* self, QEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->QProxyStyle::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnCustomEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_customevent_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QProxyStyle_ConnectNotify(QProxyStyle* self, const QMetaMethod* signal) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        vqproxystyle->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProxyStyle::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProxyStyle_SuperConnectNotify(QProxyStyle* self, const QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->QProxyStyle::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnConnectNotify(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_connectnotify_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QProxyStyle_DisconnectNotify(QProxyStyle* self, const QMetaMethod* signal) {
    auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self);
    if (vqproxystyle) {
        vqproxystyle->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProxyStyle::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProxyStyle_SuperDisconnectNotify(QProxyStyle* self, const QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->QProxyStyle::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProxyStyle::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDisconnectNotify(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self))
        vqproxystyle->qproxystyle_disconnectnotify_callback = reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QProxyStyle_Sender(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->VirtualQProxyStyle::sender();
    } else
        qFatal("Error: Protected method QProxyStyle::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QProxyStyle_SenderSignalIndex(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->VirtualQProxyStyle::senderSignalIndex();
    } else
        qFatal("Error: Protected method QProxyStyle::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QProxyStyle_Receivers(const QProxyStyle* self, const char* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->VirtualQProxyStyle::receivers(signal);
    } else
        qFatal("Error: Protected method QProxyStyle::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProxyStyle_IsSignalConnected(const QProxyStyle* self, const QMetaMethod* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->VirtualQProxyStyle::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QProxyStyle::isSignalConnected called without a directly constructed type");
}

void QProxyStyle_Delete(QProxyStyle* self) {
    delete self;
}
