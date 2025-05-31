#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCommandLinkButton>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcommandlinkbutton.h>
#include "libqcommandlinkbutton.h"
#include "libqcommandlinkbutton.hxx"

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent) {
    return new VirtualQCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new2() {
    return new VirtualQCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(const libqt_string text, const libqt_string description) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new VirtualQCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new5(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(const libqt_string text, const libqt_string description, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new VirtualQCommandLinkButton(text_QString, description_QString, parent);
}

QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCommandLinkButton_Metacall(QCommandLinkButton* self, int param1, int param2, void** param3) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCommandLinkButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCommandLinkButton_OnMetacall(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Metacall_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCommandLinkButton_QBaseMetacall(QCommandLinkButton* self, int param1, int param2, void** param3) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Metacall_IsBase(true);
        return vqcommandlinkbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCommandLinkButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCommandLinkButton_Tr(const char* s) {
    QString _ret = QCommandLinkButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
    QString _ret = QCommandLinkButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return new QSize(vqcommandlinkbutton->sizeHint());
    } else {
        return new QSize(((VirtualQCommandLinkButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QCommandLinkButton_QBaseSizeHint(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SizeHint_IsBase(true);
        return new QSize(vqcommandlinkbutton->sizeHint());
    } else {
        return new QSize(((VirtualQCommandLinkButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSizeHint(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SizeHint_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QCommandLinkButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QCommandLinkButton_QBaseHeightForWidth(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HeightForWidth_IsBase(true);
        return vqcommandlinkbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QCommandLinkButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHeightForWidth(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HeightForWidth_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return new QSize(vqcommandlinkbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQCommandLinkButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QCommandLinkButton_QBaseMinimumSizeHint(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqcommandlinkbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQCommandLinkButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMinimumSizeHint(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->initStyleOption(option);
    } else {
        self->QCommandLinkButton::initStyleOption(option);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseInitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InitStyleOption_IsBase(true);
        vqcommandlinkbutton->initStyleOption(option);
    } else {
        self->QCommandLinkButton::initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInitStyleOption(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InitStyleOption_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->event(e);
    } else {
        return ((VirtualQCommandLinkButton*)self)->event(e);
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Event_IsBase(true);
        return vqcommandlinkbutton->event(e);
    } else {
        return ((VirtualQCommandLinkButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Event_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->paintEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_PaintEvent_IsBase(true);
        vqcommandlinkbutton->paintEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnPaintEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_PaintEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_KeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->keyPressEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseKeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_KeyPressEvent_IsBase(true);
        vqcommandlinkbutton->keyPressEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnKeyPressEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_FocusInEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->focusInEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseFocusInEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusInEvent_IsBase(true);
        vqcommandlinkbutton->focusInEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusInEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusInEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_FocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->focusOutEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseFocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusOutEvent_IsBase(true);
        vqcommandlinkbutton->focusOutEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusOutEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_MouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseMouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseMoveEvent_IsBase(true);
        vqcommandlinkbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_HitButton(const QCommandLinkButton* self, const QPoint* pos) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->hitButton(*pos);
    } else {
        return ((VirtualQCommandLinkButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseHitButton(const QCommandLinkButton* self, const QPoint* pos) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HitButton_IsBase(true);
        return vqcommandlinkbutton->hitButton(*pos);
    } else {
        return ((VirtualQCommandLinkButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHitButton(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HitButton_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_CheckStateSet(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->checkStateSet();
    } else {
        ((VirtualQCommandLinkButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseCheckStateSet(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CheckStateSet_IsBase(true);
        vqcommandlinkbutton->checkStateSet();
    } else {
        ((VirtualQCommandLinkButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCheckStateSet(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CheckStateSet_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_NextCheckState(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->nextCheckState();
    } else {
        ((VirtualQCommandLinkButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseNextCheckState(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_NextCheckState_IsBase(true);
        vqcommandlinkbutton->nextCheckState();
    } else {
        ((VirtualQCommandLinkButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnNextCheckState(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_NextCheckState_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_KeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseKeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_KeyReleaseEvent_IsBase(true);
        vqcommandlinkbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnKeyReleaseEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_MousePressEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->mousePressEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseMousePressEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MousePressEvent_IsBase(true);
        vqcommandlinkbutton->mousePressEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMousePressEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MousePressEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_MouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseMouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseReleaseEvent_IsBase(true);
        vqcommandlinkbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseReleaseEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ChangeEvent(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->changeEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseChangeEvent(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ChangeEvent_IsBase(true);
        vqcommandlinkbutton->changeEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnChangeEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ChangeEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_TimerEvent(QCommandLinkButton* self, QTimerEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->timerEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseTimerEvent(QCommandLinkButton* self, QTimerEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_TimerEvent_IsBase(true);
        vqcommandlinkbutton->timerEvent(e);
    } else {
        ((VirtualQCommandLinkButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnTimerEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_TimerEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommandLinkButton_DevType(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->devType();
    } else {
        return self->QCommandLinkButton::devType();
    }
}

// Base class handler implementation
int QCommandLinkButton_QBaseDevType(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DevType_IsBase(true);
        return vqcommandlinkbutton->devType();
    } else {
        return self->QCommandLinkButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDevType(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DevType_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_SetVisible(QCommandLinkButton* self, bool visible) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setVisible(visible);
    } else {
        self->QCommandLinkButton::setVisible(visible);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseSetVisible(QCommandLinkButton* self, bool visible) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SetVisible_IsBase(true);
        vqcommandlinkbutton->setVisible(visible);
    } else {
        self->QCommandLinkButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSetVisible(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SetVisible_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_HasHeightForWidth(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->hasHeightForWidth();
    } else {
        return self->QCommandLinkButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseHasHeightForWidth(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HasHeightForWidth_IsBase(true);
        return vqcommandlinkbutton->hasHeightForWidth();
    } else {
        return self->QCommandLinkButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHasHeightForWidth(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QCommandLinkButton_PaintEngine(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->paintEngine();
    } else {
        return self->QCommandLinkButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QCommandLinkButton_QBasePaintEngine(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_PaintEngine_IsBase(true);
        return vqcommandlinkbutton->paintEngine();
    } else {
        return self->QCommandLinkButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnPaintEngine(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_PaintEngine_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_MouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseMouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseDoubleClickEvent_IsBase(true);
        vqcommandlinkbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseDoubleClickEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_WheelEvent(QCommandLinkButton* self, QWheelEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->wheelEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseWheelEvent(QCommandLinkButton* self, QWheelEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_WheelEvent_IsBase(true);
        vqcommandlinkbutton->wheelEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnWheelEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_WheelEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_EnterEvent(QCommandLinkButton* self, QEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->enterEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseEnterEvent(QCommandLinkButton* self, QEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_EnterEvent_IsBase(true);
        vqcommandlinkbutton->enterEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEnterEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_EnterEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_LeaveEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->leaveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseLeaveEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_LeaveEvent_IsBase(true);
        vqcommandlinkbutton->leaveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnLeaveEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_LeaveEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_MoveEvent(QCommandLinkButton* self, QMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->moveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseMoveEvent(QCommandLinkButton* self, QMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MoveEvent_IsBase(true);
        vqcommandlinkbutton->moveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_MoveEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ResizeEvent(QCommandLinkButton* self, QResizeEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->resizeEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseResizeEvent(QCommandLinkButton* self, QResizeEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ResizeEvent_IsBase(true);
        vqcommandlinkbutton->resizeEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnResizeEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ResizeEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_CloseEvent(QCommandLinkButton* self, QCloseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->closeEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseCloseEvent(QCommandLinkButton* self, QCloseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CloseEvent_IsBase(true);
        vqcommandlinkbutton->closeEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCloseEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CloseEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->contextMenuEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ContextMenuEvent_IsBase(true);
        vqcommandlinkbutton->contextMenuEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnContextMenuEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_TabletEvent(QCommandLinkButton* self, QTabletEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->tabletEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseTabletEvent(QCommandLinkButton* self, QTabletEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_TabletEvent_IsBase(true);
        vqcommandlinkbutton->tabletEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnTabletEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_TabletEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ActionEvent(QCommandLinkButton* self, QActionEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->actionEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseActionEvent(QCommandLinkButton* self, QActionEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ActionEvent_IsBase(true);
        vqcommandlinkbutton->actionEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnActionEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ActionEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_DragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->dragEnterEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragEnterEvent_IsBase(true);
        vqcommandlinkbutton->dragEnterEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragEnterEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_DragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->dragMoveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragMoveEvent_IsBase(true);
        vqcommandlinkbutton->dragMoveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_DragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragLeaveEvent_IsBase(true);
        vqcommandlinkbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragLeaveEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_DropEvent(QCommandLinkButton* self, QDropEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->dropEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDropEvent(QCommandLinkButton* self, QDropEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DropEvent_IsBase(true);
        vqcommandlinkbutton->dropEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDropEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DropEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ShowEvent(QCommandLinkButton* self, QShowEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->showEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseShowEvent(QCommandLinkButton* self, QShowEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ShowEvent_IsBase(true);
        vqcommandlinkbutton->showEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnShowEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ShowEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_HideEvent(QCommandLinkButton* self, QHideEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->hideEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseHideEvent(QCommandLinkButton* self, QHideEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HideEvent_IsBase(true);
        vqcommandlinkbutton->hideEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHideEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_HideEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_NativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQCommandLinkButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseNativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_NativeEvent_IsBase(true);
        return vqcommandlinkbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQCommandLinkButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnNativeEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_NativeEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommandLinkButton_Metric(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQCommandLinkButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QCommandLinkButton_QBaseMetric(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Metric_IsBase(true);
        return vqcommandlinkbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQCommandLinkButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMetric(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Metric_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_InitPainter(const QCommandLinkButton* self, QPainter* painter) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->initPainter(painter);
    } else {
        ((VirtualQCommandLinkButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseInitPainter(const QCommandLinkButton* self, QPainter* painter) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InitPainter_IsBase(true);
        vqcommandlinkbutton->initPainter(painter);
    } else {
        ((VirtualQCommandLinkButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInitPainter(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InitPainter_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QCommandLinkButton_Redirected(const QCommandLinkButton* self, QPoint* offset) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->redirected(offset);
    } else {
        return ((VirtualQCommandLinkButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QCommandLinkButton_QBaseRedirected(const QCommandLinkButton* self, QPoint* offset) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Redirected_IsBase(true);
        return vqcommandlinkbutton->redirected(offset);
    } else {
        return ((VirtualQCommandLinkButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnRedirected(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Redirected_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QCommandLinkButton_SharedPainter(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->sharedPainter();
    } else {
        return ((VirtualQCommandLinkButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QCommandLinkButton_QBaseSharedPainter(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SharedPainter_IsBase(true);
        return vqcommandlinkbutton->sharedPainter();
    } else {
        return ((VirtualQCommandLinkButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSharedPainter(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SharedPainter_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_InputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseInputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InputMethodEvent_IsBase(true);
        vqcommandlinkbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQCommandLinkButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInputMethodEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QCommandLinkButton_InputMethodQuery(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return new QVariant(vqcommandlinkbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQCommandLinkButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QCommandLinkButton_QBaseInputMethodQuery(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqcommandlinkbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQCommandLinkButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInputMethodQuery(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_FocusNextPrevChild(QCommandLinkButton* self, bool next) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseFocusNextPrevChild(QCommandLinkButton* self, bool next) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusNextPrevChild_IsBase(true);
        return vqcommandlinkbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusNextPrevChild(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_EventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->eventFilter(watched, event);
    } else {
        return self->QCommandLinkButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseEventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_EventFilter_IsBase(true);
        return vqcommandlinkbutton->eventFilter(watched, event);
    } else {
        return self->QCommandLinkButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEventFilter(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_EventFilter_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ChildEvent(QCommandLinkButton* self, QChildEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->childEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseChildEvent(QCommandLinkButton* self, QChildEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ChildEvent_IsBase(true);
        vqcommandlinkbutton->childEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnChildEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ChildEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_CustomEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->customEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseCustomEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CustomEvent_IsBase(true);
        vqcommandlinkbutton->customEvent(event);
    } else {
        ((VirtualQCommandLinkButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCustomEvent(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_CustomEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_ConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->connectNotify(*signal);
    } else {
        ((VirtualQCommandLinkButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ConnectNotify_IsBase(true);
        vqcommandlinkbutton->connectNotify(*signal);
    } else {
        ((VirtualQCommandLinkButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnConnectNotify(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_ConnectNotify_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_DisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQCommandLinkButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DisconnectNotify_IsBase(true);
        vqcommandlinkbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQCommandLinkButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDisconnectNotify(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_UpdateMicroFocus(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->updateMicroFocus();
    } else {
        ((VirtualQCommandLinkButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseUpdateMicroFocus(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_UpdateMicroFocus_IsBase(true);
        vqcommandlinkbutton->updateMicroFocus();
    } else {
        ((VirtualQCommandLinkButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnUpdateMicroFocus(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_Create(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->create();
    } else {
        ((VirtualQCommandLinkButton*)self)->create();
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseCreate(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Create_IsBase(true);
        vqcommandlinkbutton->create();
    } else {
        ((VirtualQCommandLinkButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCreate(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Create_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommandLinkButton_Destroy(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->destroy();
    } else {
        ((VirtualQCommandLinkButton*)self)->destroy();
    }
}

// Base class handler implementation
void QCommandLinkButton_QBaseDestroy(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Destroy_IsBase(true);
        vqcommandlinkbutton->destroy();
    } else {
        ((VirtualQCommandLinkButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDestroy(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Destroy_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_FocusNextChild(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->focusNextChild();
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseFocusNextChild(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusNextChild_IsBase(true);
        return vqcommandlinkbutton->focusNextChild();
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusNextChild(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusNextChild_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_FocusPreviousChild(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->focusPreviousChild();
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseFocusPreviousChild(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusPreviousChild_IsBase(true);
        return vqcommandlinkbutton->focusPreviousChild();
    } else {
        return ((VirtualQCommandLinkButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusPreviousChild(QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCommandLinkButton_Sender(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->sender();
    } else {
        return ((VirtualQCommandLinkButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCommandLinkButton_QBaseSender(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Sender_IsBase(true);
        return vqcommandlinkbutton->sender();
    } else {
        return ((VirtualQCommandLinkButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSender(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Sender_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommandLinkButton_SenderSignalIndex(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->senderSignalIndex();
    } else {
        return ((VirtualQCommandLinkButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCommandLinkButton_QBaseSenderSignalIndex(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SenderSignalIndex_IsBase(true);
        return vqcommandlinkbutton->senderSignalIndex();
    } else {
        return ((VirtualQCommandLinkButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSenderSignalIndex(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommandLinkButton_Receivers(const QCommandLinkButton* self, const char* signal) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->receivers(signal);
    } else {
        return ((VirtualQCommandLinkButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCommandLinkButton_QBaseReceivers(const QCommandLinkButton* self, const char* signal) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Receivers_IsBase(true);
        return vqcommandlinkbutton->receivers(signal);
    } else {
        return ((VirtualQCommandLinkButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnReceivers(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_Receivers_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommandLinkButton_IsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        return vqcommandlinkbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQCommandLinkButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCommandLinkButton_QBaseIsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_IsSignalConnected_IsBase(true);
        return vqcommandlinkbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQCommandLinkButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnIsSignalConnected(const QCommandLinkButton* self, intptr_t slot) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
        vqcommandlinkbutton->setQCommandLinkButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_IsSignalConnected_Callback>(slot));
    }
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
    delete self;
}
