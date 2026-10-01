#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
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
#include <QRadioButton>
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
#include <qradiobutton.h>
#include "libqradiobutton.h"
#include "libqradiobutton.hxx"

QRadioButton* QRadioButton_new(QWidget* parent) {
    return new VirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
    return new VirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString);
}

QRadioButton* QRadioButton_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString, parent);
}

QMetaObject* QRadioButton_MetaObject(const QRadioButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRadioButton_Metacast(QRadioButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRadioButton_Metacall(QRadioButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QRadioButton_Tr(const char* s) {
    auto _ret = QRadioButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QRadioButton_SizeHint(const QRadioButton* self) {
    return new QSize(self->sizeHint());
}

QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
    return new QSize(self->minimumSizeHint());
}

bool QRadioButton_Event(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        return vqradiobutton->event(e);
    }
    qFatal("Error: Protected method QRadioButton::event called without a directly constructed type");
}

bool QRadioButton_HitButton(const QRadioButton* self, const QPoint* param1) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        return vqradiobutton->hitButton(*param1);
    }
    qFatal("Error: Protected method QRadioButton::hitButton called without a directly constructed type");
}

void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->paintEvent(param1);
    }
}

void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->mouseMoveEvent(param1);
    }
}

void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->initStyleOption(button);
    }
}

libqt_string QRadioButton_Tr2(const char* s, const char* c) {
    auto _ret = QRadioButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRadioButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = QRadioButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* QRadioButton_SuperMetaObject(const QRadioButton* self) {
    return (QMetaObject*)self->QRadioButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetaObject(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_metaobject_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QRadioButton_SuperMetacast(QRadioButton* self, const char* param1) {
    return self->QRadioButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetacast(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_metacast_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int QRadioButton_SuperMetacall(QRadioButton* self, int param1, int param2, void** param3) {
    return self->QRadioButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetacall(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_metacall_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QRadioButton_SuperSizeHint(const QRadioButton* self) {
    return new QSize(self->QRadioButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSizeHint(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_sizehint_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QRadioButton_SuperMinimumSizeHint(const QRadioButton* self) {
    return new QSize(self->QRadioButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMinimumSizeHint(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_minimumsizehint_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QRadioButton_SuperEvent(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->QRadioButton::event(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_event_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_Event_Callback>(slot);
}

// Base class handler implementation
bool QRadioButton_SuperHitButton(const QRadioButton* self, const QPoint* param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->QRadioButton::hitButton(*param1);
    } else
        qFatal("Error: Protected virtual method QRadioButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHitButton(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_hitbutton_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_HitButton_Callback>(slot);
}

// Base class handler implementation
void QRadioButton_SuperPaintEvent(QRadioButton* self, QPaintEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRadioButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnPaintEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_paintevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QRadioButton_SuperMouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRadioButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_mousemoveevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QRadioButton_SuperInitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->QRadioButton::initStyleOption(button);
    } else
        qFatal("Error: Protected virtual method QRadioButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInitStyleOption(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_initstyleoption_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_CheckStateSet(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method QRadioButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperCheckStateSet(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QRadioButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCheckStateSet(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_checkstateset_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_NextCheckState(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method QRadioButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperNextCheckState(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QRadioButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNextCheckState(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_nextcheckstate_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_KeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperKeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyPressEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_keypressevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_KeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperKeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyReleaseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_keyreleaseevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_MousePressEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperMousePressEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMousePressEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_mousepressevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_MouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperMouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseReleaseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_mousereleaseevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_FocusInEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperFocusInEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusInEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_focusinevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_FocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperFocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusOutEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_focusoutevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ChangeEvent(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperChangeEvent(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChangeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_changeevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_TimerEvent(QRadioButton* self, QTimerEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperTimerEvent(QRadioButton* self, QTimerEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QRadioButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTimerEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_timerevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QRadioButton_DevType(const QRadioButton* self) {
    return self->devType();
}

// Base class handler implementation
int QRadioButton_SuperDevType(const QRadioButton* self) {
    return self->QRadioButton::devType();
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDevType(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_devtype_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_SetVisible(QRadioButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QRadioButton_SuperSetVisible(QRadioButton* self, bool visible) {
    self->QRadioButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSetVisible(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_setvisible_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QRadioButton_HeightForWidth(const QRadioButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QRadioButton_SuperHeightForWidth(const QRadioButton* self, int param1) {
    return self->QRadioButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHeightForWidth(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_heightforwidth_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QRadioButton_HasHeightForWidth(const QRadioButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QRadioButton_SuperHasHeightForWidth(const QRadioButton* self) {
    return self->QRadioButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHasHeightForWidth(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_hasheightforwidth_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QRadioButton_PaintEngine(const QRadioButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QRadioButton_SuperPaintEngine(const QRadioButton* self) {
    return self->QRadioButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnPaintEngine(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_paintengine_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_MouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperMouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseDoubleClickEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_WheelEvent(QRadioButton* self, QWheelEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperWheelEvent(QRadioButton* self, QWheelEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnWheelEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_wheelevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_EnterEvent(QRadioButton* self, QEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperEnterEvent(QRadioButton* self, QEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEnterEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_enterevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_LeaveEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperLeaveEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnLeaveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_leaveevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_MoveEvent(QRadioButton* self, QMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperMoveEvent(QRadioButton* self, QMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_moveevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ResizeEvent(QRadioButton* self, QResizeEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperResizeEvent(QRadioButton* self, QResizeEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnResizeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_resizeevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_CloseEvent(QRadioButton* self, QCloseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperCloseEvent(QRadioButton* self, QCloseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCloseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_closeevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnContextMenuEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_contextmenuevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_TabletEvent(QRadioButton* self, QTabletEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperTabletEvent(QRadioButton* self, QTabletEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTabletEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_tabletevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ActionEvent(QRadioButton* self, QActionEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperActionEvent(QRadioButton* self, QActionEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnActionEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_actionevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_DragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperDragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragEnterEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_dragenterevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_DragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperDragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_dragmoveevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_DragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperDragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragLeaveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_dragleaveevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_DropEvent(QRadioButton* self, QDropEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperDropEvent(QRadioButton* self, QDropEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDropEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_dropevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ShowEvent(QRadioButton* self, QShowEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperShowEvent(QRadioButton* self, QShowEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnShowEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_showevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_HideEvent(QRadioButton* self, QHideEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperHideEvent(QRadioButton* self, QHideEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHideEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_hideevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QRadioButton_NativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QRadioButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRadioButton_SuperNativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->QRadioButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QRadioButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNativeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_nativeevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QRadioButton_Metric(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton) {
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QRadioButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QRadioButton_SuperMetric(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->QRadioButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QRadioButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetric(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_metric_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_InitPainter(const QRadioButton* self, QPainter* painter) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton) {
        vqradiobutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperInitPainter(const QRadioButton* self, QPainter* painter) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->QRadioButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QRadioButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInitPainter(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_initpainter_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QRadioButton_Redirected(const QRadioButton* self, QPoint* offset) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton) {
        return vqradiobutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QRadioButton_SuperRedirected(const QRadioButton* self, QPoint* offset) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->QRadioButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QRadioButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnRedirected(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_redirected_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QRadioButton_SharedPainter(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton) {
        return vqradiobutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QRadioButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QRadioButton_SuperSharedPainter(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->QRadioButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QRadioButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSharedPainter(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_sharedpainter_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_InputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperInputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRadioButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_inputmethodevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QRadioButton_InputMethodQuery(const QRadioButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QRadioButton_SuperInputMethodQuery(const QRadioButton* self, int param1) {
    return new QVariant(self->QRadioButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodQuery(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self)))
        vqradiobutton->qradiobutton_inputmethodquery_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QRadioButton_FocusNextPrevChild(QRadioButton* self, bool next) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        return vqradiobutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRadioButton_SuperFocusNextPrevChild(QRadioButton* self, bool next) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->QRadioButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QRadioButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusNextPrevChild(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_focusnextprevchild_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QRadioButton_EventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QRadioButton_SuperEventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    return self->QRadioButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEventFilter(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_eventfilter_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ChildEvent(QRadioButton* self, QChildEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperChildEvent(QRadioButton* self, QChildEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChildEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_childevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_CustomEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperCustomEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QRadioButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCustomEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_customevent_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_ConnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperConnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRadioButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnConnectNotify(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_connectnotify_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QRadioButton_DisconnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton) {
        vqradiobutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRadioButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRadioButton_SuperDisconnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->QRadioButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRadioButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDisconnectNotify(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self))
        vqradiobutton->qradiobutton_disconnectnotify_callback = reinterpret_cast<VirtualQRadioButton::QRadioButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QRadioButton_UpdateMicroFocus(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->VirtualQRadioButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method QRadioButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QRadioButton_Create(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->VirtualQRadioButton::create();
    } else
        qFatal("Error: Protected method QRadioButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QRadioButton_Destroy(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->VirtualQRadioButton::destroy();
    } else
        qFatal("Error: Protected method QRadioButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRadioButton_FocusNextChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->VirtualQRadioButton::focusNextChild();
    } else
        qFatal("Error: Protected method QRadioButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRadioButton_FocusPreviousChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->VirtualQRadioButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method QRadioButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QRadioButton_Sender(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->VirtualQRadioButton::sender();
    } else
        qFatal("Error: Protected method QRadioButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QRadioButton_SenderSignalIndex(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->VirtualQRadioButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method QRadioButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QRadioButton_Receivers(const QRadioButton* self, const char* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->VirtualQRadioButton::receivers(signal);
    } else
        qFatal("Error: Protected method QRadioButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRadioButton_IsSignalConnected(const QRadioButton* self, const QMetaMethod* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->VirtualQRadioButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QRadioButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QRadioButton_GetDecodedMetricF(const QRadioButton* self, int metricA, int metricB) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->VirtualQRadioButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QRadioButton::getDecodedMetricF called without a directly constructed type");
}

void QRadioButton_Delete(QRadioButton* self) {
    delete self;
}
