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
#include <QByteArray>
#include <cstring>
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
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStyle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnMetacall(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Metacall_Callback(reinterpret_cast<VirtualQStyle::QStyle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBaseMetacall(QStyle* self, int param1, int param2, void** param3) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Metacall_IsBase(true);
        return vqstyle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStyle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStyle_Tr(const char* s) {
    QString _ret = QStyle::tr(s);
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
    QString _ret = self->name();
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
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->polish(widget);
    } else {
        ((VirtualQStyle*)self)->polish(widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnPolish(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish_Callback(reinterpret_cast<VirtualQStyle::QStyle_Polish_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBasePolish(QStyle* self, QWidget* widget) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish_IsBase(true);
        vqstyle->polish(widget);
    } else {
        ((VirtualQStyle*)self)->polish(widget);
    }
}

void QStyle_Unpolish(QStyle* self, QWidget* widget) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->unpolish(widget);
    } else {
        ((VirtualQStyle*)self)->unpolish(widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnUnpolish(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Unpolish_Callback(reinterpret_cast<VirtualQStyle::QStyle_Unpolish_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseUnpolish(QStyle* self, QWidget* widget) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Unpolish_IsBase(true);
        vqstyle->unpolish(widget);
    } else {
        ((VirtualQStyle*)self)->unpolish(widget);
    }
}

void QStyle_Polish2(QStyle* self, QApplication* application) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->polish(application);
    } else {
        ((VirtualQStyle*)self)->polish(application);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnPolish2(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish2_Callback(reinterpret_cast<VirtualQStyle::QStyle_Polish2_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBasePolish2(QStyle* self, QApplication* application) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish2_IsBase(true);
        vqstyle->polish(application);
    } else {
        ((VirtualQStyle*)self)->polish(application);
    }
}

void QStyle_Unpolish2(QStyle* self, QApplication* application) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->unpolish(application);
    } else {
        ((VirtualQStyle*)self)->unpolish(application);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnUnpolish2(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Unpolish2_Callback(reinterpret_cast<VirtualQStyle::QStyle_Unpolish2_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseUnpolish2(QStyle* self, QApplication* application) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Unpolish2_IsBase(true);
        vqstyle->unpolish(application);
    } else {
        ((VirtualQStyle*)self)->unpolish(application);
    }
}

void QStyle_Polish3(QStyle* self, QPalette* palette) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->polish(*palette);
    } else {
        ((VirtualQStyle*)self)->polish(*palette);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnPolish3(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish3_Callback(reinterpret_cast<VirtualQStyle::QStyle_Polish3_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBasePolish3(QStyle* self, QPalette* palette) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Polish3_IsBase(true);
        vqstyle->polish(*palette);
    } else {
        ((VirtualQStyle*)self)->polish(*palette);
    }
}

QRect* QStyle_ItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(((VirtualQStyle*)self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnItemTextRect(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ItemTextRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_ItemTextRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QStyle_QBaseItemTextRect(const QStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ItemTextRect_IsBase(true);
        return new QRect(vqstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(((VirtualQStyle*)self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

QRect* QStyle_ItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(((VirtualQStyle*)self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnItemPixmapRect(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ItemPixmapRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_ItemPixmapRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QStyle_QBaseItemPixmapRect(const QStyle* self, const QRect* r, int flags, const QPixmap* pixmap) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ItemPixmapRect_IsBase(true);
        return new QRect(vqstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(((VirtualQStyle*)self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

void QStyle_DrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        ((VirtualQStyle*)self)->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnDrawItemText(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawItemText_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawItemText_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseDrawItemText(const QStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawItemText_IsBase(true);
        vqstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        ((VirtualQStyle*)self)->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        ((VirtualQStyle*)self)->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnDrawItemPixmap(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawItemPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawItemPixmap_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseDrawItemPixmap(const QStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawItemPixmap_IsBase(true);
        vqstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        ((VirtualQStyle*)self)->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

QPalette* QStyle_StandardPalette(const QStyle* self) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QPalette(self->standardPalette());
    } else {
        return new QPalette(((VirtualQStyle*)self)->standardPalette());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnStandardPalette(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardPalette_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardPalette_Callback>(slot));
    }
}

// Virtual base class handler implementation
QPalette* QStyle_QBaseStandardPalette(const QStyle* self) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardPalette_IsBase(true);
        return new QPalette(vqstyle->standardPalette());
    } else {
        return new QPalette(((VirtualQStyle*)self)->standardPalette());
    }
}

void QStyle_DrawPrimitive(const QStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        ((VirtualQStyle*)self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnDrawPrimitive(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawPrimitive_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseDrawPrimitive(const QStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawPrimitive_IsBase(true);
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        ((VirtualQStyle*)self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

void QStyle_DrawControl(const QStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        ((VirtualQStyle*)self)->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnDrawControl(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawControl_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseDrawControl(const QStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawControl_IsBase(true);
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        ((VirtualQStyle*)self)->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

QRect* QStyle_SubElementRect(const QStyle* self, int subElement, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QRect(vqstyle->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    } else {
        return new QRect(((VirtualQStyle*)self)->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnSubElementRect(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SubElementRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_SubElementRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QStyle_QBaseSubElementRect(const QStyle* self, int subElement, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SubElementRect_IsBase(true);
        return new QRect(vqstyle->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    } else {
        return new QRect(((VirtualQStyle*)self)->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    }
}

void QStyle_DrawComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    } else {
        ((VirtualQStyle*)self)->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnDrawComplexControl(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawComplexControl_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyle_QBaseDrawComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DrawComplexControl_IsBase(true);
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    } else {
        ((VirtualQStyle*)self)->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    }
}

int QStyle_HitTestComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    } else {
        return static_cast<int>(((VirtualQStyle*)self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnHitTestComplexControl(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_HitTestComplexControl_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBaseHitTestComplexControl(const QStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_HitTestComplexControl_IsBase(true);
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    } else {
        return static_cast<int>(((VirtualQStyle*)self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    }
}

QRect* QStyle_SubControlRect(const QStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QRect(vqstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(((VirtualQStyle*)self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnSubControlRect(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SubControlRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_SubControlRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QStyle_QBaseSubControlRect(const QStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SubControlRect_IsBase(true);
        return new QRect(vqstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(((VirtualQStyle*)self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

int QStyle_PixelMetric(const QStyle* self, int metric, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return ((VirtualQStyle*)self)->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnPixelMetric(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_PixelMetric_Callback(reinterpret_cast<VirtualQStyle::QStyle_PixelMetric_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBasePixelMetric(const QStyle* self, int metric, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_PixelMetric_IsBase(true);
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return ((VirtualQStyle*)self)->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

QSize* QStyle_SizeFromContents(const QStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QSize(vqstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    } else {
        return new QSize(((VirtualQStyle*)self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnSizeFromContents(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQStyle::QStyle_SizeFromContents_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QStyle_QBaseSizeFromContents(const QStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* w) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SizeFromContents_IsBase(true);
        return new QSize(vqstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    } else {
        return new QSize(((VirtualQStyle*)self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    }
}

int QStyle_StyleHint(const QStyle* self, int stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    } else {
        return ((VirtualQStyle*)self)->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnStyleHint(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StyleHint_Callback(reinterpret_cast<VirtualQStyle::QStyle_StyleHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBaseStyleHint(const QStyle* self, int stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StyleHint_IsBase(true);
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    } else {
        return ((VirtualQStyle*)self)->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    }
}

QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QPixmap(vqstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(((VirtualQStyle*)self)->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnStandardPixmap(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardPixmap_Callback>(slot));
    }
}

// Virtual base class handler implementation
QPixmap* QStyle_QBaseStandardPixmap(const QStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardPixmap_IsBase(true);
        return new QPixmap(vqstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(((VirtualQStyle*)self)->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QIcon(vqstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(((VirtualQStyle*)self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnStandardIcon(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardIcon_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardIcon_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIcon* QStyle_QBaseStandardIcon(const QStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_StandardIcon_IsBase(true);
        return new QIcon(vqstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(((VirtualQStyle*)self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return new QPixmap(vqstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(((VirtualQStyle*)self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnGeneratedIconPixmap(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_GeneratedIconPixmap_Callback>(slot));
    }
}

// Virtual base class handler implementation
QPixmap* QStyle_QBaseGeneratedIconPixmap(const QStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_GeneratedIconPixmap_IsBase(true);
        return new QPixmap(vqstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(((VirtualQStyle*)self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
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
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return ((VirtualQStyle*)self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnLayoutSpacing(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQStyle::QStyle_LayoutSpacing_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBaseLayoutSpacing(const QStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
    auto* vqstyle = dynamic_cast<const VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_LayoutSpacing_IsBase(true);
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return ((VirtualQStyle*)self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(const QStyle* self) {
    return (QStyle*)self->proxy();
}

libqt_string QStyle_Tr2(const char* s, const char* c) {
    QString _ret = QStyle::tr(s, c);
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
    QString _ret = QStyle::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
bool QStyle_Event(QStyle* self, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->event(event);
    } else {
        return self->QStyle::event(event);
    }
}

// Base class handler implementation
bool QStyle_QBaseEvent(QStyle* self, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Event_IsBase(true);
        return vqstyle->event(event);
    } else {
        return self->QStyle::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEvent(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Event_Callback(reinterpret_cast<VirtualQStyle::QStyle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyle_EventFilter(QStyle* self, QObject* watched, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->eventFilter(watched, event);
    } else {
        return self->QStyle::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStyle_QBaseEventFilter(QStyle* self, QObject* watched, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_EventFilter_IsBase(true);
        return vqstyle->eventFilter(watched, event);
    } else {
        return self->QStyle::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEventFilter(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_EventFilter_Callback(reinterpret_cast<VirtualQStyle::QStyle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_TimerEvent(QStyle* self, QTimerEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->timerEvent(event);
    } else {
        ((VirtualQStyle*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseTimerEvent(QStyle* self, QTimerEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_TimerEvent_IsBase(true);
        vqstyle->timerEvent(event);
    } else {
        ((VirtualQStyle*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnTimerEvent(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_TimerEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_ChildEvent(QStyle* self, QChildEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->childEvent(event);
    } else {
        ((VirtualQStyle*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseChildEvent(QStyle* self, QChildEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ChildEvent_IsBase(true);
        vqstyle->childEvent(event);
    } else {
        ((VirtualQStyle*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnChildEvent(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ChildEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_CustomEvent(QStyle* self, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->customEvent(event);
    } else {
        ((VirtualQStyle*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseCustomEvent(QStyle* self, QEvent* event) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_CustomEvent_IsBase(true);
        vqstyle->customEvent(event);
    } else {
        ((VirtualQStyle*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnCustomEvent(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_CustomEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_ConnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->connectNotify(*signal);
    } else {
        ((VirtualQStyle*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStyle_QBaseConnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ConnectNotify_IsBase(true);
        vqstyle->connectNotify(*signal);
    } else {
        ((VirtualQStyle*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnConnectNotify(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_ConnectNotify_Callback(reinterpret_cast<VirtualQStyle::QStyle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DisconnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->disconnectNotify(*signal);
    } else {
        ((VirtualQStyle*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStyle_QBaseDisconnectNotify(QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DisconnectNotify_IsBase(true);
        vqstyle->disconnectNotify(*signal);
    } else {
        ((VirtualQStyle*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDisconnectNotify(QStyle* self, intptr_t slot) {
    auto* vqstyle = dynamic_cast<VirtualQStyle*>(self);
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_DisconnectNotify_Callback(reinterpret_cast<VirtualQStyle::QStyle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStyle_Sender(const QStyle* self) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->sender();
    } else {
        return ((VirtualQStyle*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStyle_QBaseSender(const QStyle* self) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Sender_IsBase(true);
        return vqstyle->sender();
    } else {
        return ((VirtualQStyle*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSender(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Sender_Callback(reinterpret_cast<VirtualQStyle::QStyle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_SenderSignalIndex(const QStyle* self) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->senderSignalIndex();
    } else {
        return ((VirtualQStyle*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStyle_QBaseSenderSignalIndex(const QStyle* self) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SenderSignalIndex_IsBase(true);
        return vqstyle->senderSignalIndex();
    } else {
        return ((VirtualQStyle*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSenderSignalIndex(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStyle::QStyle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_Receivers(const QStyle* self, const char* signal) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->receivers(signal);
    } else {
        return ((VirtualQStyle*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStyle_QBaseReceivers(const QStyle* self, const char* signal) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Receivers_IsBase(true);
        return vqstyle->receivers(signal);
    } else {
        return ((VirtualQStyle*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnReceivers(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_Receivers_Callback(reinterpret_cast<VirtualQStyle::QStyle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyle_IsSignalConnected(const QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        return vqstyle->isSignalConnected(*signal);
    } else {
        return ((VirtualQStyle*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStyle_QBaseIsSignalConnected(const QStyle* self, const QMetaMethod* signal) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_IsSignalConnected_IsBase(true);
        return vqstyle->isSignalConnected(*signal);
    } else {
        return ((VirtualQStyle*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnIsSignalConnected(const QStyle* self, intptr_t slot) {
    auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self));
    if (vqstyle && vqstyle->isVirtualQStyle) {
        vqstyle->setQStyle_IsSignalConnected_Callback(reinterpret_cast<VirtualQStyle::QStyle_IsSignalConnected_Callback>(slot));
    }
}

void QStyle_Delete(QStyle* self) {
    delete self;
}
