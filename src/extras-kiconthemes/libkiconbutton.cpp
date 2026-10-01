#include <KIconButton>
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
#include <kiconbutton.h>
#include "libkiconbutton.h"
#include "libkiconbutton.hxx"

KIconButton* KIconButton_new(QWidget* parent) {
    return new VirtualKIconButton(parent);
}

KIconButton* KIconButton_new2() {
    return new VirtualKIconButton();
}

QMetaObject* KIconButton_MetaObject(const KIconButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIconButton_Metacast(KIconButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIconButton_Metacall(KIconButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIconButton_Tr(const char* s) {
    auto _ret = KIconButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconButton_SetStrictIconSize(KIconButton* self, bool b) {
    self->setStrictIconSize(b);
}

bool KIconButton_StrictIconSize(const KIconButton* self) {
    return self->strictIconSize();
}

void KIconButton_SetIconType(KIconButton* self, int group, int context) {
    self->setIconType(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context));
}

void KIconButton_SetIcon(KIconButton* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setIcon(icon_QString);
}

void KIconButton_SetIcon2(KIconButton* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KIconButton_ResetIcon(KIconButton* self) {
    self->resetIcon();
}

libqt_string KIconButton_Icon(const KIconButton* self) {
    const auto _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconButton_SetIconSize(KIconButton* self, int size) {
    self->setIconSize(static_cast<int>(size));
}

int KIconButton_IconSize(const KIconButton* self) {
    return self->iconSize();
}

void KIconButton_SetButtonIconSize(KIconButton* self, int size) {
    self->setButtonIconSize(static_cast<int>(size));
}

int KIconButton_ButtonIconSize(const KIconButton* self) {
    return self->buttonIconSize();
}

void KIconButton_IconChanged(KIconButton* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->iconChanged(icon_QString);
}

void KIconButton_Connect_IconChanged(KIconButton* self, intptr_t slot) {
    void (*slotFunc)(KIconButton*, const char*) = reinterpret_cast<void (*)(KIconButton*, const char*)>(slot);
    KIconButton::connect(self,
                         static_cast<void (KIconButton::*)(const QString&)>(&KIconButton::iconChanged),
                         [self, slotFunc](const QString& icon) {
                             const auto icon_ret = icon;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray icon_b = icon_ret.toUtf8();
                             auto icon_str_len = icon_b.length();
                             const char* icon_str = static_cast<const char*>(malloc(icon_str_len + 1));
                             memcpy((void*)icon_str, icon_b.data(), icon_str_len);
                             ((char*)icon_str)[icon_str_len] = '\0';
                             const char* sigval1 = icon_str;
                             slotFunc(self, sigval1);
                             libqt_free(icon_str);
                         });
}

libqt_string KIconButton_Tr2(const char* s, const char* c) {
    auto _ret = KIconButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIconButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconButton_SetIconType3(KIconButton* self, int group, int context, bool user) {
    self->setIconType(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), user);
}

// Base class handler implementation
QMetaObject* KIconButton_SuperMetaObject(const KIconButton* self) {
    return (QMetaObject*)self->KIconButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetaObject(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_metaobject_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIconButton_SuperMetacast(KIconButton* self, const char* param1) {
    return self->KIconButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetacast(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_metacast_callback = reinterpret_cast<VirtualKIconButton::KIconButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIconButton_SuperMetacall(KIconButton* self, int param1, int param2, void** param3) {
    return self->KIconButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetacall(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_metacall_callback = reinterpret_cast<VirtualKIconButton::KIconButton_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KIconButton_SizeHint(const KIconButton* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KIconButton_SuperSizeHint(const KIconButton* self) {
    return new QSize(self->KIconButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSizeHint(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_sizehint_callback = reinterpret_cast<VirtualKIconButton::KIconButton_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KIconButton_MinimumSizeHint(const KIconButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KIconButton_SuperMinimumSizeHint(const KIconButton* self) {
    return new QSize(self->KIconButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMinimumSizeHint(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_minimumsizehint_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_Event(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        return vkiconbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconButton_SuperEvent(KIconButton* self, QEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        return vkiconbutton->KIconButton::event(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_event_callback = reinterpret_cast<VirtualKIconButton::KIconButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_PaintEvent(KIconButton* self, QPaintEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperPaintEvent(KIconButton* self, QPaintEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnPaintEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_paintevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_KeyPressEvent(KIconButton* self, QKeyEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperKeyPressEvent(KIconButton* self, QKeyEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnKeyPressEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_keypressevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_FocusInEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperFocusInEvent(KIconButton* self, QFocusEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusInEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_focusinevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_FocusOutEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperFocusOutEvent(KIconButton* self, QFocusEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusOutEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_focusoutevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_MouseMoveEvent(KIconButton* self, QMouseEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperMouseMoveEvent(KIconButton* self, QMouseEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseMoveEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_mousemoveevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_InitStyleOption(const KIconButton* self, QStyleOptionButton* option) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        vkiconbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KIconButton::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperInitStyleOption(const KIconButton* self, QStyleOptionButton* option) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        vkiconbutton->KIconButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KIconButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInitStyleOption(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_initstyleoption_callback = reinterpret_cast<VirtualKIconButton::KIconButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_HitButton(const KIconButton* self, const QPoint* pos) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        return vkiconbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KIconButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconButton_SuperHitButton(const KIconButton* self, const QPoint* pos) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->KIconButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KIconButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHitButton(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_hitbutton_callback = reinterpret_cast<VirtualKIconButton::KIconButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_CheckStateSet(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KIconButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperCheckStateSet(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KIconButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCheckStateSet(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_checkstateset_callback = reinterpret_cast<VirtualKIconButton::KIconButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_NextCheckState(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KIconButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperNextCheckState(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KIconButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnNextCheckState(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_nextcheckstate_callback = reinterpret_cast<VirtualKIconButton::KIconButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_KeyReleaseEvent(KIconButton* self, QKeyEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperKeyReleaseEvent(KIconButton* self, QKeyEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnKeyReleaseEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_keyreleaseevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_MousePressEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperMousePressEvent(KIconButton* self, QMouseEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMousePressEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_mousepressevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_MouseReleaseEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperMouseReleaseEvent(KIconButton* self, QMouseEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseReleaseEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_mousereleaseevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ChangeEvent(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperChangeEvent(KIconButton* self, QEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnChangeEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_changeevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_TimerEvent(KIconButton* self, QTimerEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KIconButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperTimerEvent(KIconButton* self, QTimerEvent* e) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KIconButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnTimerEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_timerevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KIconButton_DevType(const KIconButton* self) {
    return self->devType();
}

// Base class handler implementation
int KIconButton_SuperDevType(const KIconButton* self) {
    return self->KIconButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDevType(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_devtype_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_SetVisible(KIconButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KIconButton_SuperSetVisible(KIconButton* self, bool visible) {
    self->KIconButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSetVisible(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_setvisible_callback = reinterpret_cast<VirtualKIconButton::KIconButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KIconButton_HeightForWidth(const KIconButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KIconButton_SuperHeightForWidth(const KIconButton* self, int param1) {
    return self->KIconButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHeightForWidth(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_heightforwidth_callback = reinterpret_cast<VirtualKIconButton::KIconButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_HasHeightForWidth(const KIconButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KIconButton_SuperHasHeightForWidth(const KIconButton* self) {
    return self->KIconButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHasHeightForWidth(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_hasheightforwidth_callback = reinterpret_cast<VirtualKIconButton::KIconButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KIconButton_PaintEngine(const KIconButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KIconButton_SuperPaintEngine(const KIconButton* self) {
    return self->KIconButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnPaintEngine(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_paintengine_callback = reinterpret_cast<VirtualKIconButton::KIconButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_MouseDoubleClickEvent(KIconButton* self, QMouseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperMouseDoubleClickEvent(KIconButton* self, QMouseEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseDoubleClickEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_WheelEvent(KIconButton* self, QWheelEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperWheelEvent(KIconButton* self, QWheelEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnWheelEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_wheelevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_EnterEvent(KIconButton* self, QEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperEnterEvent(KIconButton* self, QEnterEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEnterEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_enterevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_LeaveEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperLeaveEvent(KIconButton* self, QEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnLeaveEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_leaveevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_MoveEvent(KIconButton* self, QMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperMoveEvent(KIconButton* self, QMoveEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMoveEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_moveevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ResizeEvent(KIconButton* self, QResizeEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperResizeEvent(KIconButton* self, QResizeEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnResizeEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_resizeevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_CloseEvent(KIconButton* self, QCloseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperCloseEvent(KIconButton* self, QCloseEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCloseEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_closeevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ContextMenuEvent(KIconButton* self, QContextMenuEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperContextMenuEvent(KIconButton* self, QContextMenuEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnContextMenuEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_contextmenuevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_TabletEvent(KIconButton* self, QTabletEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperTabletEvent(KIconButton* self, QTabletEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnTabletEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_tabletevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ActionEvent(KIconButton* self, QActionEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperActionEvent(KIconButton* self, QActionEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnActionEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_actionevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_DragEnterEvent(KIconButton* self, QDragEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperDragEnterEvent(KIconButton* self, QDragEnterEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragEnterEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_dragenterevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_DragMoveEvent(KIconButton* self, QDragMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperDragMoveEvent(KIconButton* self, QDragMoveEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragMoveEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_dragmoveevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_DragLeaveEvent(KIconButton* self, QDragLeaveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperDragLeaveEvent(KIconButton* self, QDragLeaveEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragLeaveEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_dragleaveevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_DropEvent(KIconButton* self, QDropEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperDropEvent(KIconButton* self, QDropEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDropEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_dropevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ShowEvent(KIconButton* self, QShowEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperShowEvent(KIconButton* self, QShowEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnShowEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_showevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_HideEvent(KIconButton* self, QHideEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperHideEvent(KIconButton* self, QHideEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHideEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_hideevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_NativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        return vkiconbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KIconButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconButton_SuperNativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        return vkiconbutton->KIconButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KIconButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnNativeEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_nativeevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KIconButton_Metric(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        return vkiconbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KIconButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KIconButton_SuperMetric(const KIconButton* self, int param1) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->KIconButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KIconButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetric(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_metric_callback = reinterpret_cast<VirtualKIconButton::KIconButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_InitPainter(const KIconButton* self, QPainter* painter) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        vkiconbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KIconButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperInitPainter(const KIconButton* self, QPainter* painter) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        vkiconbutton->KIconButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KIconButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInitPainter(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_initpainter_callback = reinterpret_cast<VirtualKIconButton::KIconButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KIconButton_Redirected(const KIconButton* self, QPoint* offset) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        return vkiconbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KIconButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KIconButton_SuperRedirected(const KIconButton* self, QPoint* offset) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->KIconButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KIconButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnRedirected(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_redirected_callback = reinterpret_cast<VirtualKIconButton::KIconButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KIconButton_SharedPainter(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton) {
        return vkiconbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KIconButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KIconButton_SuperSharedPainter(const KIconButton* self) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->KIconButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KIconButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSharedPainter(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_sharedpainter_callback = reinterpret_cast<VirtualKIconButton::KIconButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_InputMethodEvent(KIconButton* self, QInputMethodEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperInputMethodEvent(KIconButton* self, QInputMethodEvent* param1) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInputMethodEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_inputmethodevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KIconButton_InputMethodQuery(const KIconButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KIconButton_SuperInputMethodQuery(const KIconButton* self, int param1) {
    return new QVariant(self->KIconButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInputMethodQuery(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self)))
        vkiconbutton->kiconbutton_inputmethodquery_callback = reinterpret_cast<VirtualKIconButton::KIconButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_FocusNextPrevChild(KIconButton* self, bool next) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        return vkiconbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KIconButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconButton_SuperFocusNextPrevChild(KIconButton* self, bool next) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        return vkiconbutton->KIconButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KIconButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusNextPrevChild(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_focusnextprevchild_callback = reinterpret_cast<VirtualKIconButton::KIconButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KIconButton_EventFilter(KIconButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIconButton_SuperEventFilter(KIconButton* self, QObject* watched, QEvent* event) {
    return self->KIconButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEventFilter(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_eventfilter_callback = reinterpret_cast<VirtualKIconButton::KIconButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ChildEvent(KIconButton* self, QChildEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperChildEvent(KIconButton* self, QChildEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnChildEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_childevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_CustomEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperCustomEvent(KIconButton* self, QEvent* event) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCustomEvent(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_customevent_callback = reinterpret_cast<VirtualKIconButton::KIconButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_ConnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIconButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperConnectNotify(KIconButton* self, const QMetaMethod* signal) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIconButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnConnectNotify(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_connectnotify_callback = reinterpret_cast<VirtualKIconButton::KIconButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIconButton_DisconnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton) {
        vkiconbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIconButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconButton_SuperDisconnectNotify(KIconButton* self, const QMetaMethod* signal) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->KIconButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIconButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDisconnectNotify(KIconButton* self, intptr_t slot) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self))
        vkiconbutton->kiconbutton_disconnectnotify_callback = reinterpret_cast<VirtualKIconButton::KIconButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIconButton_UpdateMicroFocus(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->VirtualKIconButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KIconButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconButton_Create(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->VirtualKIconButton::create();
    } else
        qFatal("Error: Protected method KIconButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconButton_Destroy(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        vkiconbutton->VirtualKIconButton::destroy();
    } else
        qFatal("Error: Protected method KIconButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconButton_FocusNextChild(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        return vkiconbutton->VirtualKIconButton::focusNextChild();
    } else
        qFatal("Error: Protected method KIconButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconButton_FocusPreviousChild(KIconButton* self) {
    if (auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self)) {
        return vkiconbutton->VirtualKIconButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KIconButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIconButton_Sender(const KIconButton* self) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->VirtualKIconButton::sender();
    } else
        qFatal("Error: Protected method KIconButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIconButton_SenderSignalIndex(const KIconButton* self) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->VirtualKIconButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIconButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIconButton_Receivers(const KIconButton* self, const char* signal) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->VirtualKIconButton::receivers(signal);
    } else
        qFatal("Error: Protected method KIconButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconButton_IsSignalConnected(const KIconButton* self, const QMetaMethod* signal) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->VirtualKIconButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIconButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KIconButton_GetDecodedMetricF(const KIconButton* self, int metricA, int metricB) {
    if (auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self))) {
        return vkiconbutton->VirtualKIconButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KIconButton::getDecodedMetricF called without a directly constructed type");
}

void KIconButton_Delete(KIconButton* self) {
    delete self;
}
