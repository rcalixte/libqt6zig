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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
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
#include <qpushbutton.h>
#include "libqpushbutton.h"
#include "libqpushbutton.hxx"

QPushButton* QPushButton_new(QWidget* parent) {
    return new VirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
    return new VirtualQPushButton();
}

QPushButton* QPushButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(const QIcon* icon, const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString, parent);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPushButton_Metacall(QPushButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPushButton_Tr(const char* s) {
    auto _ret = QPushButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
    return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
    return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
    return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
    self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
    return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
    self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
    self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
    return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
    self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
    return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
    self->showMenu();
}

bool QPushButton_Event(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        return vqpushbutton->event(e);
    }
    qFatal("Error: Protected method QPushButton::event called without a directly constructed type");
}

void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->paintEvent(param1);
    }
}

void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->keyPressEvent(param1);
    }
}

void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->focusInEvent(param1);
    }
}

void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->focusOutEvent(param1);
    }
}

void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->mouseMoveEvent(param1);
    }
}

void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->initStyleOption(option);
    }
}

bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton) {
        return vqpushbutton->hitButton(*pos);
    }
    qFatal("Error: Protected method QPushButton::hitButton called without a directly constructed type");
}

libqt_string QPushButton_Tr2(const char* s, const char* c) {
    auto _ret = QPushButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPushButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPushButton_SuperMetaObject(const QPushButton* self) {
    return (QMetaObject*)self->QPushButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetaObject(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_metaobject_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPushButton_SuperMetacast(QPushButton* self, const char* param1) {
    return self->QPushButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetacast(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_metacast_callback = reinterpret_cast<VirtualQPushButton::QPushButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPushButton_SuperMetacall(QPushButton* self, int param1, int param2, void** param3) {
    return self->QPushButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetacall(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_metacall_callback = reinterpret_cast<VirtualQPushButton::QPushButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QPushButton_SuperSizeHint(const QPushButton* self) {
    return new QSize(self->QPushButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSizeHint(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_sizehint_callback = reinterpret_cast<VirtualQPushButton::QPushButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QPushButton_SuperMinimumSizeHint(const QPushButton* self) {
    return new QSize(self->QPushButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMinimumSizeHint(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_minimumsizehint_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QPushButton_SuperEvent(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->QPushButton::event(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_event_callback = reinterpret_cast<VirtualQPushButton::QPushButton_Event_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperPaintEvent(QPushButton* self, QPaintEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_paintevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperKeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_keypressevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperFocusInEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_focusinevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperFocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_focusoutevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperMouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_mousemoveevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QPushButton_SuperInitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->QPushButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QPushButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitStyleOption(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_initstyleoption_callback = reinterpret_cast<VirtualQPushButton::QPushButton_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
bool QPushButton_SuperHitButton(const QPushButton* self, const QPoint* pos) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->QPushButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method QPushButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHitButton(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_hitbutton_callback = reinterpret_cast<VirtualQPushButton::QPushButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_CheckStateSet(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method QPushButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperCheckStateSet(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QPushButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCheckStateSet(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_checkstateset_callback = reinterpret_cast<VirtualQPushButton::QPushButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_NextCheckState(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method QPushButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperNextCheckState(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QPushButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNextCheckState(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_nextcheckstate_callback = reinterpret_cast<VirtualQPushButton::QPushButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPushButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperKeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyReleaseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_keyreleaseevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPushButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperMousePressEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMousePressEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_mousepressevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPushButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperMouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseReleaseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_mousereleaseevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ChangeEvent(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPushButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperChangeEvent(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChangeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_changeevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPushButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperTimerEvent(QPushButton* self, QTimerEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QPushButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTimerEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_timerevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QPushButton_DevType(const QPushButton* self) {
    return self->devType();
}

// Base class handler implementation
int QPushButton_SuperDevType(const QPushButton* self) {
    return self->QPushButton::devType();
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDevType(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_devtype_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_SetVisible(QPushButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QPushButton_SuperSetVisible(QPushButton* self, bool visible) {
    self->QPushButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSetVisible(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_setvisible_callback = reinterpret_cast<VirtualQPushButton::QPushButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QPushButton_HeightForWidth(const QPushButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPushButton_SuperHeightForWidth(const QPushButton* self, int param1) {
    return self->QPushButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHeightForWidth(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_heightforwidth_callback = reinterpret_cast<VirtualQPushButton::QPushButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPushButton_HasHeightForWidth(const QPushButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPushButton_SuperHasHeightForWidth(const QPushButton* self) {
    return self->QPushButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHasHeightForWidth(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_hasheightforwidth_callback = reinterpret_cast<VirtualQPushButton::QPushButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPushButton_PaintEngine(const QPushButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPushButton_SuperPaintEngine(const QPushButton* self) {
    return self->QPushButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEngine(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_paintengine_callback = reinterpret_cast<VirtualQPushButton::QPushButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseDoubleClickEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperWheelEvent(QPushButton* self, QWheelEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnWheelEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_wheelevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperEnterEvent(QPushButton* self, QEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEnterEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_enterevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_LeaveEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperLeaveEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnLeaveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_leaveevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperMoveEvent(QPushButton* self, QMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_moveevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperResizeEvent(QPushButton* self, QResizeEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnResizeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_resizeevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperCloseEvent(QPushButton* self, QCloseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCloseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_closeevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnContextMenuEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_contextmenuevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperTabletEvent(QPushButton* self, QTabletEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTabletEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_tabletevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperActionEvent(QPushButton* self, QActionEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnActionEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_actionevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperDragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragEnterEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_dragenterevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperDragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_dragmoveevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragLeaveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_dragleaveevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_DropEvent(QPushButton* self, QDropEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperDropEvent(QPushButton* self, QDropEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDropEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_dropevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperShowEvent(QPushButton* self, QShowEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnShowEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_showevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_HideEvent(QPushButton* self, QHideEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperHideEvent(QPushButton* self, QHideEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHideEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_hideevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPushButton_NativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPushButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPushButton_SuperNativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->QPushButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPushButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNativeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_nativeevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPushButton_Metric(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton) {
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPushButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPushButton_SuperMetric(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->QPushButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPushButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetric(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_metric_callback = reinterpret_cast<VirtualQPushButton::QPushButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_InitPainter(const QPushButton* self, QPainter* painter) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton) {
        vqpushbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPushButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperInitPainter(const QPushButton* self, QPainter* painter) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->QPushButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPushButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitPainter(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_initpainter_callback = reinterpret_cast<VirtualQPushButton::QPushButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton) {
        return vqpushbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPushButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPushButton_SuperRedirected(const QPushButton* self, QPoint* offset) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->QPushButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPushButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnRedirected(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_redirected_callback = reinterpret_cast<VirtualQPushButton::QPushButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPushButton_SharedPainter(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton) {
        return vqpushbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPushButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPushButton_SuperSharedPainter(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->QPushButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPushButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSharedPainter(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_sharedpainter_callback = reinterpret_cast<VirtualQPushButton::QPushButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPushButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperInputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPushButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_inputmethodevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPushButton_InputMethodQuery(const QPushButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPushButton_SuperInputMethodQuery(const QPushButton* self, int param1) {
    return new QVariant(self->QPushButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodQuery(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self)))
        vqpushbutton->qpushbutton_inputmethodquery_callback = reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        return vqpushbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPushButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPushButton_SuperFocusNextPrevChild(QPushButton* self, bool next) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->QPushButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPushButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusNextPrevChild(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_focusnextprevchild_callback = reinterpret_cast<VirtualQPushButton::QPushButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QPushButton_EventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPushButton_SuperEventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    return self->QPushButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEventFilter(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_eventfilter_callback = reinterpret_cast<VirtualQPushButton::QPushButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperChildEvent(QPushButton* self, QChildEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChildEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_childevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_CustomEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPushButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperCustomEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPushButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCustomEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_customevent_callback = reinterpret_cast<VirtualQPushButton::QPushButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_ConnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPushButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperConnectNotify(QPushButton* self, const QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPushButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnConnectNotify(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_connectnotify_callback = reinterpret_cast<VirtualQPushButton::QPushButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPushButton_DisconnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton) {
        vqpushbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPushButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPushButton_SuperDisconnectNotify(QPushButton* self, const QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->QPushButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPushButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDisconnectNotify(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self))
        vqpushbutton->qpushbutton_disconnectnotify_callback = reinterpret_cast<VirtualQPushButton::QPushButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPushButton_UpdateMicroFocus(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->VirtualQPushButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPushButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPushButton_Create(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->VirtualQPushButton::create();
    } else
        qFatal("Error: Protected method QPushButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPushButton_Destroy(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->VirtualQPushButton::destroy();
    } else
        qFatal("Error: Protected method QPushButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPushButton_FocusNextChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->VirtualQPushButton::focusNextChild();
    } else
        qFatal("Error: Protected method QPushButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPushButton_FocusPreviousChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->VirtualQPushButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPushButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPushButton_Sender(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->VirtualQPushButton::sender();
    } else
        qFatal("Error: Protected method QPushButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPushButton_SenderSignalIndex(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->VirtualQPushButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPushButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPushButton_Receivers(const QPushButton* self, const char* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->VirtualQPushButton::receivers(signal);
    } else
        qFatal("Error: Protected method QPushButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPushButton_IsSignalConnected(const QPushButton* self, const QMetaMethod* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->VirtualQPushButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPushButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPushButton_GetDecodedMetricF(const QPushButton* self, int metricA, int metricB) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->VirtualQPushButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPushButton::getDecodedMetricF called without a directly constructed type");
}

void QPushButton_Delete(QPushButton* self) {
    delete self;
}
