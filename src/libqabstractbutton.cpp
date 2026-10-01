#include <QAbstractButton>
#include <QActionEvent>
#include <QButtonGroup>
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
#include <QKeySequence>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractbutton.h>
#include "libqabstractbutton.h"
#include "libqabstractbutton.hxx"

QAbstractButton* QAbstractButton_new(QWidget* parent) {
    return new VirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
    return new VirtualQAbstractButton();
}

QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractButton_Metacall(QAbstractButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractButton_Tr(const char* s) {
    auto _ret = QAbstractButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetText(QAbstractButton* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QAbstractButton_Text(const QAbstractButton* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetIcon(QAbstractButton* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(const QAbstractButton* self) {
    return new QIcon(self->icon());
}

QSize* QAbstractButton_IconSize(const QAbstractButton* self) {
    return new QSize(self->iconSize());
}

void QAbstractButton_SetShortcut(QAbstractButton* self, const QKeySequence* key) {
    self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self) {
    return new QKeySequence(self->shortcut());
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(const QAbstractButton* self) {
    return self->isCheckable();
}

bool QAbstractButton_IsChecked(const QAbstractButton* self) {
    return self->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
    self->setDown(down);
}

bool QAbstractButton_IsDown(const QAbstractButton* self) {
    return self->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
    self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(const QAbstractButton* self) {
    return self->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
    self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self) {
    return self->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
    self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self) {
    return self->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
    self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(const QAbstractButton* self) {
    return self->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(const QAbstractButton* self) {
    return self->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, const QSize* size) {
    self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
    self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
    self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
    self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
    self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
    self->pressed();
}

void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self,
                             static_cast<void (QAbstractButton::*)()>(&QAbstractButton::pressed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractButton_Released(QAbstractButton* self) {
    self->released();
}

void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self,
                             static_cast<void (QAbstractButton::*)()>(&QAbstractButton::released),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractButton_Clicked(QAbstractButton* self) {
    self->clicked();
}

void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self,
                             static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
    self->toggled(checked);
}

void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self,
                             static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::toggled),
                             [self, slotFunc](bool checked) {
                                 bool sigval1 = checked;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->paintEvent(e);
    }
}

bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos) {
    auto* vqabstractbutton = dynamic_cast<const VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        return vqabstractbutton->hitButton(*pos);
    }
    qFatal("Error: Protected method QAbstractButton::hitButton called without a directly constructed type");
}

void QAbstractButton_CheckStateSet(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->checkStateSet();
    }
}

void QAbstractButton_NextCheckState(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->nextCheckState();
    }
}

bool QAbstractButton_Event(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        return vqabstractbutton->event(e);
    }
    qFatal("Error: Protected method QAbstractButton::event called without a directly constructed type");
}

void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->keyPressEvent(e);
    }
}

void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->keyReleaseEvent(e);
    }
}

void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->mousePressEvent(e);
    }
}

void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->mouseReleaseEvent(e);
    }
}

void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->mouseMoveEvent(e);
    }
}

void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->focusInEvent(e);
    }
}

void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->focusOutEvent(e);
    }
}

void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->changeEvent(e);
    }
}

void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->timerEvent(e);
    }
}

libqt_string QAbstractButton_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
    self->clicked(checked);
}

void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self,
                             static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked),
                             [self, slotFunc](bool checked) {
                                 bool sigval1 = checked;
                                 slotFunc(self, sigval1);
                             });
}

// Base class handler implementation
QMetaObject* QAbstractButton_SuperMetaObject(const QAbstractButton* self) {
    return (QMetaObject*)self->QAbstractButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetaObject(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_metaobject_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractButton_SuperMetacast(QAbstractButton* self, const char* param1) {
    return self->QAbstractButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetacast(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_metacast_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractButton_SuperMetacall(QAbstractButton* self, int param1, int param2, void** param3) {
    return self->QAbstractButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetacall(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_metacall_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_paintevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool QAbstractButton_SuperHitButton(const QAbstractButton* self, const QPoint* pos) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->QAbstractButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHitButton(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_hitbutton_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HitButton_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperCheckStateSet(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QAbstractButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_checkstateset_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CheckStateSet_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperNextCheckState(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QAbstractButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_nextcheckstate_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NextCheckState_Callback>(slot);
}

// Base class handler implementation
bool QAbstractButton_SuperEvent(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->QAbstractButton::event(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_event_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Event_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperKeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_keypressevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperMousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_mousepressevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperMouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperFocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_focusinevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperFocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_focusoutevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperChangeEvent(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_changeevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractButton_SuperTimerEvent(QAbstractButton* self, QTimerEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_timerevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractButton_DevType(const QAbstractButton* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractButton_SuperDevType(const QAbstractButton* self) {
    return self->QAbstractButton::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDevType(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_devtype_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_SetVisible(QAbstractButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractButton_SuperSetVisible(QAbstractButton* self, bool visible) {
    self->QAbstractButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSetVisible(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_setvisible_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractButton_SizeHint(const QAbstractButton* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QAbstractButton_SuperSizeHint(const QAbstractButton* self) {
    return new QSize(self->QAbstractButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSizeHint(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_sizehint_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractButton_MinimumSizeHint(const QAbstractButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QAbstractButton_SuperMinimumSizeHint(const QAbstractButton* self) {
    return new QSize(self->QAbstractButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMinimumSizeHint(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QAbstractButton_HeightForWidth(const QAbstractButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractButton_SuperHeightForWidth(const QAbstractButton* self, int param1) {
    return self->QAbstractButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHeightForWidth(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_heightforwidth_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractButton_HasHeightForWidth(const QAbstractButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractButton_SuperHasHeightForWidth(const QAbstractButton* self) {
    return self->QAbstractButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHasHeightForWidth(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractButton_PaintEngine(const QAbstractButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractButton_SuperPaintEngine(const QAbstractButton* self) {
    return self->QAbstractButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEngine(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_paintengine_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_MouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseDoubleClickEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_WheelEvent(QAbstractButton* self, QWheelEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperWheelEvent(QAbstractButton* self, QWheelEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnWheelEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_wheelevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_EnterEvent(QAbstractButton* self, QEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperEnterEvent(QAbstractButton* self, QEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEnterEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_enterevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_LeaveEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperLeaveEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnLeaveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_leaveevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_MoveEvent(QAbstractButton* self, QMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperMoveEvent(QAbstractButton* self, QMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_moveevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnResizeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_resizeevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_CloseEvent(QAbstractButton* self, QCloseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperCloseEvent(QAbstractButton* self, QCloseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCloseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_closeevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnContextMenuEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_TabletEvent(QAbstractButton* self, QTabletEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperTabletEvent(QAbstractButton* self, QTabletEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTabletEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_tabletevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ActionEvent(QAbstractButton* self, QActionEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperActionEvent(QAbstractButton* self, QActionEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnActionEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_actionevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_DragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragEnterEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_dragenterevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_DragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_DragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragLeaveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_DropEvent(QAbstractButton* self, QDropEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperDropEvent(QAbstractButton* self, QDropEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDropEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_dropevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ShowEvent(QAbstractButton* self, QShowEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperShowEvent(QAbstractButton* self, QShowEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnShowEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_showevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_HideEvent(QAbstractButton* self, QHideEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperHideEvent(QAbstractButton* self, QHideEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHideEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_hideevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractButton_NativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractButton_SuperNativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->QAbstractButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNativeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_nativeevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractButton_Metric(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton) {
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractButton_SuperMetric(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->QAbstractButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetric(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_metric_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_InitPainter(const QAbstractButton* self, QPainter* painter) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton) {
        vqabstractbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperInitPainter(const QAbstractButton* self, QPainter* painter) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->QAbstractButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInitPainter(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_initpainter_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractButton_Redirected(const QAbstractButton* self, QPoint* offset) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton) {
        return vqabstractbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractButton_SuperRedirected(const QAbstractButton* self, QPoint* offset) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->QAbstractButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnRedirected(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_redirected_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractButton_SharedPainter(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton) {
        return vqabstractbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractButton_SuperSharedPainter(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->QAbstractButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSharedPainter(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_sharedpainter_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_InputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractButton_InputMethodQuery(const QAbstractButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QAbstractButton_SuperInputMethodQuery(const QAbstractButton* self, int param1) {
    return new QVariant(self->QAbstractButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodQuery(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self)))
        vqabstractbutton->qabstractbutton_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractButton_FocusNextPrevChild(QAbstractButton* self, bool next) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        return vqabstractbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractButton_SuperFocusNextPrevChild(QAbstractButton* self, bool next) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->QAbstractButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusNextPrevChild(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractButton_EventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractButton_SuperEventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    return self->QAbstractButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEventFilter(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_eventfilter_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ChildEvent(QAbstractButton* self, QChildEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperChildEvent(QAbstractButton* self, QChildEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChildEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_childevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_CustomEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperCustomEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCustomEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_customevent_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_ConnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperConnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnConnectNotify(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_connectnotify_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractButton_DisconnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton) {
        vqabstractbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractButton_SuperDisconnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->QAbstractButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDisconnectNotify(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self))
        vqabstractbutton->qabstractbutton_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractButton_UpdateMicroFocus(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->VirtualQAbstractButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractButton_Create(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->VirtualQAbstractButton::create();
    } else
        qFatal("Error: Protected method QAbstractButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractButton_Destroy(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->VirtualQAbstractButton::destroy();
    } else
        qFatal("Error: Protected method QAbstractButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractButton_FocusNextChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->VirtualQAbstractButton::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractButton_FocusPreviousChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->VirtualQAbstractButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractButton_Sender(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->VirtualQAbstractButton::sender();
    } else
        qFatal("Error: Protected method QAbstractButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractButton_SenderSignalIndex(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->VirtualQAbstractButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractButton_Receivers(const QAbstractButton* self, const char* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->VirtualQAbstractButton::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractButton_IsSignalConnected(const QAbstractButton* self, const QMetaMethod* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->VirtualQAbstractButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractButton_GetDecodedMetricF(const QAbstractButton* self, int metricA, int metricB) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->VirtualQAbstractButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractButton::getDecodedMetricF called without a directly constructed type");
}

void QAbstractButton_Delete(QAbstractButton* self) {
    delete self;
}
