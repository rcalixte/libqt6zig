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
#include <QByteArray>
#include <cstring>
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
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCommonStyle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCommonStyle_OnMetacall(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Metacall_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCommonStyle_QBaseMetacall(QCommonStyle* self, int param1, int param2, void** param3) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Metacall_IsBase(true);
        return vqcommonstyle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCommonStyle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCommonStyle_Tr(const char* s) {
    QString _ret = QCommonStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCommonStyle_Tr2(const char* s, const char* c) {
    QString _ret = QCommonStyle::tr(s, c);
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
    QString _ret = QCommonStyle::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        self->QCommonStyle::drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawPrimitive_IsBase(true);
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        self->QCommonStyle::drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawPrimitive(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawPrimitive_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        self->QCommonStyle::drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawControl_IsBase(true);
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        self->QCommonStyle::drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawControl(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QRect(vqcommonstyle->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SubElementRect_IsBase(true);
        return new QRect(vqcommonstyle->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubElementRect(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SubElementRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubElementRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    } else {
        self->QCommonStyle::drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawComplexControl_IsBase(true);
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    } else {
        self->QCommonStyle::drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawComplexControl(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    } else {
        return static_cast<int>(self->QCommonStyle::hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    }
}

// Base class handler implementation
int QCommonStyle_QBaseHitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_HitTestComplexControl_IsBase(true);
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    } else {
        return static_cast<int>(self->QCommonStyle::hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnHitTestComplexControl(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_HitTestComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QRect(vqcommonstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SubControlRect_IsBase(true);
        return new QRect(vqcommonstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubControlRect(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SubControlRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubControlRect_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QSize(vqcommonstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    } else {
        return new QSize(((VirtualQCommonStyle*)self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    }
}

// Base class handler implementation
QSize* QCommonStyle_QBaseSizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SizeFromContents_IsBase(true);
        return new QSize(vqcommonstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    } else {
        return new QSize(((VirtualQCommonStyle*)self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSizeFromContents(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SizeFromContents_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    } else {
        return self->QCommonStyle::pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    }
}

// Base class handler implementation
int QCommonStyle_QBasePixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_PixelMetric_IsBase(true);
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    } else {
        return self->QCommonStyle::pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPixelMetric(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_PixelMetric_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PixelMetric_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    } else {
        return self->QCommonStyle::styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseStyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StyleHint_IsBase(true);
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    } else {
        return self->QCommonStyle::styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStyleHint(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StyleHint_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StyleHint_Callback>(slot));
    }
}

// Derived class handler implementation
QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QIcon(vqcommonstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    } else {
        return new QIcon(((VirtualQCommonStyle*)self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    }
}

// Base class handler implementation
QIcon* QCommonStyle_QBaseStandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardIcon_IsBase(true);
        return new QIcon(vqcommonstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    } else {
        return new QIcon(((VirtualQCommonStyle*)self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardIcon(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardIcon_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardIcon_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QPixmap(vqcommonstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    } else {
        return new QPixmap(((VirtualQCommonStyle*)self)->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    }
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseStandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardPixmap_IsBase(true);
        return new QPixmap(vqcommonstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    } else {
        return new QPixmap(((VirtualQCommonStyle*)self)->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPixmap(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QPixmap(vqcommonstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(((VirtualQCommonStyle*)self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseGeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_IsBase(true);
        return new QPixmap(vqcommonstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(((VirtualQCommonStyle*)self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnGeneratedIconPixmap(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_GeneratedIconPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return self->QCommonStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseLayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_LayoutSpacing_IsBase(true);
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return self->QCommonStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnLayoutSpacing(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_LayoutSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->polish(*param1);
    } else {
        self->QCommonStyle::polish(*param1);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolish(QCommonStyle* self, QPalette* param1) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish_IsBase(true);
        vqcommonstyle->polish(*param1);
    } else {
        self->QCommonStyle::polish(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Polish2(QCommonStyle* self, QApplication* app) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->polish(app);
    } else {
        self->QCommonStyle::polish(app);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolish2(QCommonStyle* self, QApplication* app) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish2_IsBase(true);
        vqcommonstyle->polish(app);
    } else {
        self->QCommonStyle::polish(app);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish2(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish2_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish2_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Polish3(QCommonStyle* self, QWidget* widget) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->polish(widget);
    } else {
        self->QCommonStyle::polish(widget);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolish3(QCommonStyle* self, QWidget* widget) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish3_IsBase(true);
        vqcommonstyle->polish(widget);
    } else {
        self->QCommonStyle::polish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish3(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Polish3_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish3_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->unpolish(widget);
    } else {
        self->QCommonStyle::unpolish(widget);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolish(QCommonStyle* self, QWidget* widget) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Unpolish_IsBase(true);
        vqcommonstyle->unpolish(widget);
    } else {
        self->QCommonStyle::unpolish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Unpolish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Unpolish2(QCommonStyle* self, QApplication* application) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->unpolish(application);
    } else {
        self->QCommonStyle::unpolish(application);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolish2(QCommonStyle* self, QApplication* application) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Unpolish2_IsBase(true);
        vqcommonstyle->unpolish(application);
    } else {
        self->QCommonStyle::unpolish(application);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish2(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Unpolish2_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish2_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_ItemTextRect(const QCommonStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QRect(vqcommonstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseItemTextRect(const QCommonStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ItemTextRect_IsBase(true);
        return new QRect(vqcommonstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemTextRect(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ItemTextRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemTextRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_ItemPixmapRect(const QCommonStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QRect(vqcommonstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseItemPixmapRect(const QCommonStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ItemPixmapRect_IsBase(true);
        return new QRect(vqcommonstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(((VirtualQCommonStyle*)self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemPixmapRect(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ItemPixmapRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemPixmapRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawItemText(const QCommonStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        self->QCommonStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawItemText(const QCommonStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawItemText_IsBase(true);
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        self->QCommonStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemText(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawItemText_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemText_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawItemPixmap(const QCommonStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        self->QCommonStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawItemPixmap(const QCommonStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawItemPixmap_IsBase(true);
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        self->QCommonStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemPixmap(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DrawItemPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPalette* QCommonStyle_StandardPalette(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return new QPalette(vqcommonstyle->standardPalette());
    } else {
        return new QPalette(((VirtualQCommonStyle*)self)->standardPalette());
    }
}

// Base class handler implementation
QPalette* QCommonStyle_QBaseStandardPalette(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardPalette_IsBase(true);
        return new QPalette(vqcommonstyle->standardPalette());
    } else {
        return new QPalette(((VirtualQCommonStyle*)self)->standardPalette());
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPalette(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_StandardPalette_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPalette_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_Event(QCommonStyle* self, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->event(event);
    } else {
        return self->QCommonStyle::event(event);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseEvent(QCommonStyle* self, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Event_IsBase(true);
        return vqcommonstyle->event(event);
    } else {
        return self->QCommonStyle::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEvent(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Event_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_EventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->eventFilter(watched, event);
    } else {
        return self->QCommonStyle::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseEventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_EventFilter_IsBase(true);
        return vqcommonstyle->eventFilter(watched, event);
    } else {
        return self->QCommonStyle::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEventFilter(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_EventFilter_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_TimerEvent(QCommonStyle* self, QTimerEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->timerEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseTimerEvent(QCommonStyle* self, QTimerEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_TimerEvent_IsBase(true);
        vqcommonstyle->timerEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnTimerEvent(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_TimerEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_ChildEvent(QCommonStyle* self, QChildEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->childEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseChildEvent(QCommonStyle* self, QChildEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ChildEvent_IsBase(true);
        vqcommonstyle->childEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnChildEvent(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ChildEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_CustomEvent(QCommonStyle* self, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->customEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseCustomEvent(QCommonStyle* self, QEvent* event) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_CustomEvent_IsBase(true);
        vqcommonstyle->customEvent(event);
    } else {
        ((VirtualQCommonStyle*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnCustomEvent(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_CustomEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_ConnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->connectNotify(*signal);
    } else {
        ((VirtualQCommonStyle*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseConnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ConnectNotify_IsBase(true);
        vqcommonstyle->connectNotify(*signal);
    } else {
        ((VirtualQCommonStyle*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnConnectNotify(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_ConnectNotify_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DisconnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->disconnectNotify(*signal);
    } else {
        ((VirtualQCommonStyle*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDisconnectNotify(QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DisconnectNotify_IsBase(true);
        vqcommonstyle->disconnectNotify(*signal);
    } else {
        ((VirtualQCommonStyle*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDisconnectNotify(QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_DisconnectNotify_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCommonStyle_Sender(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->sender();
    } else {
        return ((VirtualQCommonStyle*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCommonStyle_QBaseSender(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Sender_IsBase(true);
        return vqcommonstyle->sender();
    } else {
        return ((VirtualQCommonStyle*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSender(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Sender_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_SenderSignalIndex(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->senderSignalIndex();
    } else {
        return ((VirtualQCommonStyle*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCommonStyle_QBaseSenderSignalIndex(const QCommonStyle* self) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SenderSignalIndex_IsBase(true);
        return vqcommonstyle->senderSignalIndex();
    } else {
        return ((VirtualQCommonStyle*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSenderSignalIndex(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_Receivers(const QCommonStyle* self, const char* signal) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->receivers(signal);
    } else {
        return ((VirtualQCommonStyle*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseReceivers(const QCommonStyle* self, const char* signal) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Receivers_IsBase(true);
        return vqcommonstyle->receivers(signal);
    } else {
        return ((VirtualQCommonStyle*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnReceivers(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_Receivers_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_IsSignalConnected(const QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        return vqcommonstyle->isSignalConnected(*signal);
    } else {
        return ((VirtualQCommonStyle*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseIsSignalConnected(const QCommonStyle* self, const QMetaMethod* signal) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_IsSignalConnected_IsBase(true);
        return vqcommonstyle->isSignalConnected(*signal);
    } else {
        return ((VirtualQCommonStyle*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnIsSignalConnected(const QCommonStyle* self, intptr_t slot) {
    auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self));
    if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
        vqcommonstyle->setQCommonStyle_IsSignalConnected_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_IsSignalConnected_Callback>(slot));
    }
}

void QCommonStyle_Delete(QCommonStyle* self) {
    delete self;
}
