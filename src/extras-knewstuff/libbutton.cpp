#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Button
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
#include <QList>
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
#include <button.h>
#include "libbutton.h"
#include "libbutton.hxx"

KNSWidgets__Button* KNSWidgets__Button_new(QWidget* parent) {
    return new VirtualKNSWidgetsButton(parent);
}

KNSWidgets__Button* KNSWidgets__Button_new2(const libqt_string text, const libqt_string configFile, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsButton(text_QString, configFile_QString, parent);
}

QMetaObject* KNSWidgets__Button_MetaObject(const KNSWidgets__Button* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSWidgets__Button_Metacast(KNSWidgets__Button* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSWidgets__Button_Metacall(KNSWidgets__Button* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSWidgets__Button_Tr(const char* s) {
    auto _ret = KNSWidgets::Button::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSWidgets__Button_SetConfigFile(KNSWidgets__Button* self, const libqt_string configFile) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    self->setConfigFile(configFile_QString);
}

void KNSWidgets__Button_DialogFinished(KNSWidgets__Button* self, const libqt_list /* of KNSCore__Entry* */ changedEntries) {
    QList<KNSCore::Entry> changedEntries_QList;
    changedEntries_QList.reserve(changedEntries.len);
    KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(changedEntries.data);
    for (size_t i = 0; i < changedEntries.len; ++i) {
        changedEntries_QList.push_back(*(changedEntries_arr[i]));
    }
    self->dialogFinished(changedEntries_QList);
}

void KNSWidgets__Button_Connect_DialogFinished(KNSWidgets__Button* self, intptr_t slot) {
    void (*slotFunc)(KNSWidgets__Button*, libqt_list /* of KNSCore__Entry* */) = reinterpret_cast<void (*)(KNSWidgets__Button*, libqt_list /* of KNSCore__Entry* */)>(slot);
    KNSWidgets::Button::connect(self,
                                static_cast<void (KNSWidgets::Button::*)(const QList<KNSCore::Entry>&)>(&KNSWidgets::Button::dialogFinished),
                                [self, slotFunc](const QList<KNSCore::Entry>& changedEntries) {
                                    const QList<KNSCore::Entry>& changedEntries_ret = changedEntries;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (changedEntries_ret.size())));
                                    for (qsizetype i = 0; i < changedEntries_ret.size(); ++i) {
                                        changedEntries_arr[i] = new KNSCore::Entry(changedEntries_ret[i]);
                                    }
                                    libqt_list changedEntries_out;
                                    changedEntries_out.len = changedEntries_ret.size();
                                    changedEntries_out.data = static_cast<void*>(changedEntries_arr);
                                    libqt_list /* of KNSCore__Entry* */ sigval1 = changedEntries_out;
                                    slotFunc(self, sigval1);
                                    free(changedEntries_arr);
                                });
}

libqt_string KNSWidgets__Button_Tr2(const char* s, const char* c) {
    auto _ret = KNSWidgets::Button::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSWidgets__Button_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNSWidgets::Button::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSWidgets__Button_SuperMetaObject(const KNSWidgets__Button* self) {
    return (QMetaObject*)self->KNSWidgets::Button::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetaObject(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_metaobject_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSWidgets__Button_SuperMetacast(KNSWidgets__Button* self, const char* param1) {
    return self->KNSWidgets::Button::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetacast(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_metacast_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSWidgets__Button_SuperMetacall(KNSWidgets__Button* self, int param1, int param2, void** param3) {
    return self->KNSWidgets::Button::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetacall(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_metacall_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSWidgets__Button_SizeHint(const KNSWidgets__Button* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KNSWidgets__Button_SuperSizeHint(const KNSWidgets__Button* self) {
    return new QSize(self->KNSWidgets::Button::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSizeHint(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_sizehint_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSWidgets__Button_MinimumSizeHint(const KNSWidgets__Button* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KNSWidgets__Button_SuperMinimumSizeHint(const KNSWidgets__Button* self) {
    return new QSize(self->KNSWidgets::Button::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMinimumSizeHint(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_minimumsizehint_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_Event(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Button_SuperEvent(KNSWidgets__Button* self, QEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        return vknswidgetsbutton->KNSWidgets::Button::event(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_event_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Event_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_PaintEvent(KNSWidgets__Button* self, QPaintEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperPaintEvent(KNSWidgets__Button* self, QPaintEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnPaintEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_paintevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_KeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperKeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnKeyPressEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_keypressevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_FocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperFocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusInEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_focusinevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_FocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperFocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusOutEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_focusoutevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_MouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperMouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_mousemoveevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_InitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        vknswidgetsbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperInitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        vknswidgetsbutton->KNSWidgets::Button::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInitStyleOption(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_initstyleoption_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_HitButton(const KNSWidgets__Button* self, const QPoint* pos) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Button_SuperHitButton(const KNSWidgets__Button* self, const QPoint* pos) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->KNSWidgets::Button::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHitButton(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_hitbutton_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_CheckStateSet(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperCheckStateSet(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCheckStateSet(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_checkstateset_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_NextCheckState(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperNextCheckState(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnNextCheckState(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_nextcheckstate_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_KeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperKeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnKeyReleaseEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_keyreleaseevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_MousePressEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperMousePressEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMousePressEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_mousepressevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_MouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperMouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseReleaseEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_mousereleaseevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ChangeEvent(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperChangeEvent(KNSWidgets__Button* self, QEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnChangeEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_changeevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_TimerEvent(KNSWidgets__Button* self, QTimerEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperTimerEvent(KNSWidgets__Button* self, QTimerEvent* e) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnTimerEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_timerevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Button_DevType(const KNSWidgets__Button* self) {
    return self->devType();
}

// Base class handler implementation
int KNSWidgets__Button_SuperDevType(const KNSWidgets__Button* self) {
    return self->KNSWidgets::Button::devType();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDevType(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_devtype_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DevType_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_SetVisible(KNSWidgets__Button* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KNSWidgets__Button_SuperSetVisible(KNSWidgets__Button* self, bool visible) {
    self->KNSWidgets::Button::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSetVisible(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_setvisible_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Button_HeightForWidth(const KNSWidgets__Button* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KNSWidgets__Button_SuperHeightForWidth(const KNSWidgets__Button* self, int param1) {
    return self->KNSWidgets::Button::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHeightForWidth(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_heightforwidth_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_HasHeightForWidth(const KNSWidgets__Button* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KNSWidgets__Button_SuperHasHeightForWidth(const KNSWidgets__Button* self) {
    return self->KNSWidgets::Button::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHasHeightForWidth(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_hasheightforwidth_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KNSWidgets__Button_PaintEngine(const KNSWidgets__Button* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KNSWidgets__Button_SuperPaintEngine(const KNSWidgets__Button* self) {
    return self->KNSWidgets::Button::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnPaintEngine(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_paintengine_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_MouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperMouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseDoubleClickEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_mousedoubleclickevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_WheelEvent(KNSWidgets__Button* self, QWheelEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperWheelEvent(KNSWidgets__Button* self, QWheelEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnWheelEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_wheelevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_EnterEvent(KNSWidgets__Button* self, QEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperEnterEvent(KNSWidgets__Button* self, QEnterEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEnterEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_enterevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_LeaveEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperLeaveEvent(KNSWidgets__Button* self, QEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnLeaveEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_leaveevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_MoveEvent(KNSWidgets__Button* self, QMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperMoveEvent(KNSWidgets__Button* self, QMoveEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_moveevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ResizeEvent(KNSWidgets__Button* self, QResizeEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperResizeEvent(KNSWidgets__Button* self, QResizeEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnResizeEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_resizeevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_CloseEvent(KNSWidgets__Button* self, QCloseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperCloseEvent(KNSWidgets__Button* self, QCloseEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCloseEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_closeevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnContextMenuEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_contextmenuevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_TabletEvent(KNSWidgets__Button* self, QTabletEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperTabletEvent(KNSWidgets__Button* self, QTabletEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnTabletEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_tabletevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ActionEvent(KNSWidgets__Button* self, QActionEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperActionEvent(KNSWidgets__Button* self, QActionEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnActionEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_actionevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_DragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperDragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragEnterEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_dragenterevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_DragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperDragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_dragmoveevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_DragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperDragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragLeaveEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_dragleaveevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_DropEvent(KNSWidgets__Button* self, QDropEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperDropEvent(KNSWidgets__Button* self, QDropEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDropEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_dropevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ShowEvent(KNSWidgets__Button* self, QShowEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperShowEvent(KNSWidgets__Button* self, QShowEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnShowEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_showevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_HideEvent(KNSWidgets__Button* self, QHideEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperHideEvent(KNSWidgets__Button* self, QHideEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHideEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_hideevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_NativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Button_SuperNativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        return vknswidgetsbutton->KNSWidgets::Button::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnNativeEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_nativeevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Button_Metric(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KNSWidgets__Button_SuperMetric(const KNSWidgets__Button* self, int param1) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->KNSWidgets::Button::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetric(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_metric_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Metric_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_InitPainter(const KNSWidgets__Button* self, QPainter* painter) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        vknswidgetsbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperInitPainter(const KNSWidgets__Button* self, QPainter* painter) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        vknswidgetsbutton->KNSWidgets::Button::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInitPainter(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_initpainter_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KNSWidgets__Button_Redirected(const KNSWidgets__Button* self, QPoint* offset) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KNSWidgets__Button_SuperRedirected(const KNSWidgets__Button* self, QPoint* offset) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->KNSWidgets::Button::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnRedirected(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_redirected_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KNSWidgets__Button_SharedPainter(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KNSWidgets__Button_SuperSharedPainter(const KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->KNSWidgets::Button::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSharedPainter(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_sharedpainter_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_InputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperInputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInputMethodEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_inputmethodevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNSWidgets__Button_InputMethodQuery(const KNSWidgets__Button* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KNSWidgets__Button_SuperInputMethodQuery(const KNSWidgets__Button* self, int param1) {
    return new QVariant(self->KNSWidgets::Button::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInputMethodQuery(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self)))
        vknswidgetsbutton->knswidgets__button_inputmethodquery_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_FocusNextPrevChild(KNSWidgets__Button* self, bool next) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        return vknswidgetsbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Button_SuperFocusNextPrevChild(KNSWidgets__Button* self, bool next) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        return vknswidgetsbutton->KNSWidgets::Button::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusNextPrevChild(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_focusnextprevchild_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Button_EventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNSWidgets__Button_SuperEventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event) {
    return self->KNSWidgets::Button::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEventFilter(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_eventfilter_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ChildEvent(KNSWidgets__Button* self, QChildEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperChildEvent(KNSWidgets__Button* self, QChildEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnChildEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_childevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_CustomEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperCustomEvent(KNSWidgets__Button* self, QEvent* event) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCustomEvent(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_customevent_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_ConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnConnectNotify(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_connectnotify_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Button_DisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton) {
        vknswidgetsbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Button::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Button_SuperDisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->KNSWidgets::Button::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Button::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDisconnectNotify(KNSWidgets__Button* self, intptr_t slot) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self))
        vknswidgetsbutton->knswidgets__button_disconnectnotify_callback = reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KNSWidgets__Button_UpdateMicroFocus(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->VirtualKNSWidgetsButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSWidgets__Button_Create(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->VirtualKNSWidgetsButton::create();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSWidgets__Button_Destroy(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        vknswidgetsbutton->VirtualKNSWidgetsButton::destroy();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Button_FocusNextChild(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::focusNextChild();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Button_FocusPreviousChild(KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self)) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNSWidgets__Button_Sender(const KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::sender();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Button_SenderSignalIndex(const KNSWidgets__Button* self) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSWidgets::Button::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Button_Receivers(const KNSWidgets__Button* self, const char* signal) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::receivers(signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Button::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Button_IsSignalConnected(const KNSWidgets__Button* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Button::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KNSWidgets__Button_GetDecodedMetricF(const KNSWidgets__Button* self, int metricA, int metricB) {
    if (auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self))) {
        return vknswidgetsbutton->VirtualKNSWidgetsButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KNSWidgets::Button::getDecodedMetricF called without a directly constructed type");
}

void KNSWidgets__Button_Delete(KNSWidgets__Button* self) {
    delete self;
}
