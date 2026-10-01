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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCommandLinkButton_Tr(const char* s) {
    auto _ret = QCommandLinkButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
    auto _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self) {
    return new QSize(self->sizeHint());
}

int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self) {
    return new QSize(self->minimumSizeHint());
}

void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
    self->initStyleOption(option);
}

bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->event(e);
    }
    qFatal("Error: Protected method QCommandLinkButton::event called without a directly constructed type");
}

void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->paintEvent(param1);
    }
}

libqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
    auto _ret = QCommandLinkButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCommandLinkButton_SuperMetaObject(const QCommandLinkButton* self) {
    return (QMetaObject*)self->QCommandLinkButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMetaObject(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_metaobject_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCommandLinkButton_SuperMetacast(QCommandLinkButton* self, const char* param1) {
    return self->QCommandLinkButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMetacast(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_metacast_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCommandLinkButton_SuperMetacall(QCommandLinkButton* self, int param1, int param2, void** param3) {
    return self->QCommandLinkButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMetacall(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_metacall_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QCommandLinkButton_SuperSizeHint(const QCommandLinkButton* self) {
    return new QSize(self->QCommandLinkButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSizeHint(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_sizehint_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
int QCommandLinkButton_SuperHeightForWidth(const QCommandLinkButton* self, int param1) {
    return self->QCommandLinkButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHeightForWidth(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_heightforwidth_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
QSize* QCommandLinkButton_SuperMinimumSizeHint(const QCommandLinkButton* self) {
    return new QSize(self->QCommandLinkButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMinimumSizeHint(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_minimumsizehint_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void QCommandLinkButton_SuperInitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
    self->QCommandLinkButton::initStyleOption(option);
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInitStyleOption(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_initstyleoption_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
bool QCommandLinkButton_SuperEvent(QCommandLinkButton* self, QEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        return vqcommandlinkbutton->QCommandLinkButton::event(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_event_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Event_Callback>(slot);
}

// Base class handler implementation
void QCommandLinkButton_SuperPaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnPaintEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_paintevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_KeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperKeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnKeyPressEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_keypressevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_FocusInEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperFocusInEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusInEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_focusinevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_FocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperFocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusOutEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_focusoutevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_MouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperMouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_mousemoveevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
bool QCommandLinkButton_HitButton(const QCommandLinkButton* self, const QPoint* pos) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCommandLinkButton_SuperHitButton(const QCommandLinkButton* self, const QPoint* pos) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->QCommandLinkButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHitButton(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_hitbutton_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_CheckStateSet(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperCheckStateSet(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCheckStateSet(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_checkstateset_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_NextCheckState(QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperNextCheckState(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnNextCheckState(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_nextcheckstate_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_KeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperKeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnKeyReleaseEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_keyreleaseevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_MousePressEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperMousePressEvent(QCommandLinkButton* self, QMouseEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMousePressEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_mousepressevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_MouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperMouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseReleaseEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_mousereleaseevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ChangeEvent(QCommandLinkButton* self, QEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperChangeEvent(QCommandLinkButton* self, QEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnChangeEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_changeevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_TimerEvent(QCommandLinkButton* self, QTimerEvent* e) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperTimerEvent(QCommandLinkButton* self, QTimerEvent* e) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnTimerEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_timerevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QCommandLinkButton_DevType(const QCommandLinkButton* self) {
    return self->devType();
}

// Base class handler implementation
int QCommandLinkButton_SuperDevType(const QCommandLinkButton* self) {
    return self->QCommandLinkButton::devType();
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDevType(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_devtype_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_SetVisible(QCommandLinkButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QCommandLinkButton_SuperSetVisible(QCommandLinkButton* self, bool visible) {
    self->QCommandLinkButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSetVisible(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_setvisible_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
bool QCommandLinkButton_HasHeightForWidth(const QCommandLinkButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QCommandLinkButton_SuperHasHeightForWidth(const QCommandLinkButton* self) {
    return self->QCommandLinkButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHasHeightForWidth(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_hasheightforwidth_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QCommandLinkButton_PaintEngine(const QCommandLinkButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QCommandLinkButton_SuperPaintEngine(const QCommandLinkButton* self) {
    return self->QCommandLinkButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnPaintEngine(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_paintengine_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_MouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperMouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMouseDoubleClickEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_WheelEvent(QCommandLinkButton* self, QWheelEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperWheelEvent(QCommandLinkButton* self, QWheelEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnWheelEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_wheelevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_EnterEvent(QCommandLinkButton* self, QEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperEnterEvent(QCommandLinkButton* self, QEnterEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEnterEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_enterevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_LeaveEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperLeaveEvent(QCommandLinkButton* self, QEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnLeaveEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_leaveevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_MoveEvent(QCommandLinkButton* self, QMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperMoveEvent(QCommandLinkButton* self, QMoveEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_moveevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ResizeEvent(QCommandLinkButton* self, QResizeEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperResizeEvent(QCommandLinkButton* self, QResizeEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnResizeEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_resizeevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_CloseEvent(QCommandLinkButton* self, QCloseEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperCloseEvent(QCommandLinkButton* self, QCloseEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCloseEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_closeevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnContextMenuEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_contextmenuevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_TabletEvent(QCommandLinkButton* self, QTabletEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperTabletEvent(QCommandLinkButton* self, QTabletEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnTabletEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_tabletevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ActionEvent(QCommandLinkButton* self, QActionEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperActionEvent(QCommandLinkButton* self, QActionEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnActionEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_actionevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_DragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperDragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragEnterEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_dragenterevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_DragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperDragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragMoveEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_dragmoveevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_DragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperDragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDragLeaveEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_dragleaveevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_DropEvent(QCommandLinkButton* self, QDropEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperDropEvent(QCommandLinkButton* self, QDropEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDropEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_dropevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ShowEvent(QCommandLinkButton* self, QShowEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperShowEvent(QCommandLinkButton* self, QShowEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnShowEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_showevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_HideEvent(QCommandLinkButton* self, QHideEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperHideEvent(QCommandLinkButton* self, QHideEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHideEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_hideevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QCommandLinkButton_NativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCommandLinkButton_SuperNativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        return vqcommandlinkbutton->QCommandLinkButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnNativeEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_nativeevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QCommandLinkButton_Metric(const QCommandLinkButton* self, int param1) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QCommandLinkButton_SuperMetric(const QCommandLinkButton* self, int param1) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->QCommandLinkButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMetric(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_metric_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_InitPainter(const QCommandLinkButton* self, QPainter* painter) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperInitPainter(const QCommandLinkButton* self, QPainter* painter) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        vqcommandlinkbutton->QCommandLinkButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInitPainter(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_initpainter_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QCommandLinkButton_Redirected(const QCommandLinkButton* self, QPoint* offset) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QCommandLinkButton_SuperRedirected(const QCommandLinkButton* self, QPoint* offset) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->QCommandLinkButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnRedirected(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_redirected_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QCommandLinkButton_SharedPainter(const QCommandLinkButton* self) {
    auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self));
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QCommandLinkButton_SuperSharedPainter(const QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->QCommandLinkButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSharedPainter(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_sharedpainter_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_InputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperInputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInputMethodEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_inputmethodevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QCommandLinkButton_InputMethodQuery(const QCommandLinkButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QCommandLinkButton_SuperInputMethodQuery(const QCommandLinkButton* self, int param1) {
    return new QVariant(self->QCommandLinkButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInputMethodQuery(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self)))
        vqcommandlinkbutton->qcommandlinkbutton_inputmethodquery_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QCommandLinkButton_FocusNextPrevChild(QCommandLinkButton* self, bool next) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        return vqcommandlinkbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCommandLinkButton_SuperFocusNextPrevChild(QCommandLinkButton* self, bool next) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        return vqcommandlinkbutton->QCommandLinkButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnFocusNextPrevChild(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_focusnextprevchild_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QCommandLinkButton_EventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCommandLinkButton_SuperEventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event) {
    return self->QCommandLinkButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEventFilter(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_eventfilter_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ChildEvent(QCommandLinkButton* self, QChildEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperChildEvent(QCommandLinkButton* self, QChildEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnChildEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_childevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_CustomEvent(QCommandLinkButton* self, QEvent* event) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperCustomEvent(QCommandLinkButton* self, QEvent* event) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnCustomEvent(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_customevent_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_ConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnConnectNotify(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_connectnotify_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCommandLinkButton_DisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
    if (vqcommandlinkbutton) {
        vqcommandlinkbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCommandLinkButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCommandLinkButton_SuperDisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->QCommandLinkButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCommandLinkButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnDisconnectNotify(QCommandLinkButton* self, intptr_t slot) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self))
        vqcommandlinkbutton->qcommandlinkbutton_disconnectnotify_callback = reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QCommandLinkButton_UpdateMicroFocus(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->VirtualQCommandLinkButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method QCommandLinkButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QCommandLinkButton_Create(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->VirtualQCommandLinkButton::create();
    } else
        qFatal("Error: Protected method QCommandLinkButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QCommandLinkButton_Destroy(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        vqcommandlinkbutton->VirtualQCommandLinkButton::destroy();
    } else
        qFatal("Error: Protected method QCommandLinkButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCommandLinkButton_FocusNextChild(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::focusNextChild();
    } else
        qFatal("Error: Protected method QCommandLinkButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCommandLinkButton_FocusPreviousChild(QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self)) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method QCommandLinkButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QCommandLinkButton_Sender(const QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::sender();
    } else
        qFatal("Error: Protected method QCommandLinkButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCommandLinkButton_SenderSignalIndex(const QCommandLinkButton* self) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCommandLinkButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCommandLinkButton_Receivers(const QCommandLinkButton* self, const char* signal) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::receivers(signal);
    } else
        qFatal("Error: Protected method QCommandLinkButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCommandLinkButton_IsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCommandLinkButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QCommandLinkButton_GetDecodedMetricF(const QCommandLinkButton* self, int metricA, int metricB) {
    if (auto* vqcommandlinkbutton = const_cast<VirtualQCommandLinkButton*>(dynamic_cast<const VirtualQCommandLinkButton*>(self))) {
        return vqcommandlinkbutton->VirtualQCommandLinkButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QCommandLinkButton::getDecodedMetricF called without a directly constructed type");
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
    delete self;
}
