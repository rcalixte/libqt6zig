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
#include <QByteArray>
#include <cstring>
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
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIconButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIconButton_Tr(const char* s) {
    QString _ret = KIconButton::tr(s);
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
    const QString _ret = self->icon();
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
    KIconButton::connect(self, &KIconButton::iconChanged, [self, slotFunc](const QString& icon) {
        const QString icon_ret = icon;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray icon_b = icon_ret.toUtf8();
        const char* icon_str = static_cast<const char*>(malloc(icon_b.length() + 1));
        memcpy((void*)icon_str, icon_b.data(), icon_b.length());
        ((char*)icon_str)[icon_b.length()] = '\0';
        const char* sigval1 = icon_str;
        slotFunc(self, sigval1);
        libqt_free(icon_str);
    });
}

libqt_string KIconButton_Tr2(const char* s, const char* c) {
    QString _ret = KIconButton::tr(s, c);
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
    QString _ret = KIconButton::tr(s, c, static_cast<int>(n));
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
int KIconButton_QBaseMetacall(KIconButton* self, int param1, int param2, void** param3) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Metacall_IsBase(true);
        return vkiconbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIconButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetacall(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Metacall_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIconButton_SizeHint(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return new QSize(vkiconbutton->sizeHint());
    } else {
        return new QSize(((VirtualKIconButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KIconButton_QBaseSizeHint(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SizeHint_IsBase(true);
        return new QSize(vkiconbutton->sizeHint());
    } else {
        return new QSize(((VirtualKIconButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSizeHint(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SizeHint_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIconButton_MinimumSizeHint(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return new QSize(vkiconbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIconButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KIconButton_QBaseMinimumSizeHint(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MinimumSizeHint_IsBase(true);
        return new QSize(vkiconbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIconButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMinimumSizeHint(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_Event(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->event(e);
    } else {
        return ((VirtualKIconButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KIconButton_QBaseEvent(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Event_IsBase(true);
        return vkiconbutton->event(e);
    } else {
        return ((VirtualKIconButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Event_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_PaintEvent(KIconButton* self, QPaintEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->paintEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBasePaintEvent(KIconButton* self, QPaintEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_PaintEvent_IsBase(true);
        vkiconbutton->paintEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnPaintEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_PaintEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_KeyPressEvent(KIconButton* self, QKeyEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->keyPressEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBaseKeyPressEvent(KIconButton* self, QKeyEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_KeyPressEvent_IsBase(true);
        vkiconbutton->keyPressEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnKeyPressEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_FocusInEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->focusInEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBaseFocusInEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusInEvent_IsBase(true);
        vkiconbutton->focusInEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusInEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusInEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_FocusOutEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->focusOutEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBaseFocusOutEvent(KIconButton* self, QFocusEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusOutEvent_IsBase(true);
        vkiconbutton->focusOutEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusOutEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_MouseMoveEvent(KIconButton* self, QMouseEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBaseMouseMoveEvent(KIconButton* self, QMouseEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseMoveEvent_IsBase(true);
        vkiconbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseMoveEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_InitStyleOption(const KIconButton* self, QStyleOptionButton* option) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->initStyleOption(option);
    } else {
        ((VirtualKIconButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KIconButton_QBaseInitStyleOption(const KIconButton* self, QStyleOptionButton* option) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InitStyleOption_IsBase(true);
        vkiconbutton->initStyleOption(option);
    } else {
        ((VirtualKIconButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInitStyleOption(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InitStyleOption_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_HitButton(const KIconButton* self, const QPoint* pos) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->hitButton(*pos);
    } else {
        return ((VirtualKIconButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KIconButton_QBaseHitButton(const KIconButton* self, const QPoint* pos) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HitButton_IsBase(true);
        return vkiconbutton->hitButton(*pos);
    } else {
        return ((VirtualKIconButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHitButton(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HitButton_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_CheckStateSet(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->checkStateSet();
    } else {
        ((VirtualKIconButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KIconButton_QBaseCheckStateSet(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CheckStateSet_IsBase(true);
        vkiconbutton->checkStateSet();
    } else {
        ((VirtualKIconButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCheckStateSet(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CheckStateSet_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_NextCheckState(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->nextCheckState();
    } else {
        ((VirtualKIconButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KIconButton_QBaseNextCheckState(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_NextCheckState_IsBase(true);
        vkiconbutton->nextCheckState();
    } else {
        ((VirtualKIconButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnNextCheckState(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_NextCheckState_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_KeyReleaseEvent(KIconButton* self, QKeyEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKIconButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KIconButton_QBaseKeyReleaseEvent(KIconButton* self, QKeyEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_KeyReleaseEvent_IsBase(true);
        vkiconbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKIconButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnKeyReleaseEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_MousePressEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->mousePressEvent(e);
    } else {
        ((VirtualKIconButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KIconButton_QBaseMousePressEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MousePressEvent_IsBase(true);
        vkiconbutton->mousePressEvent(e);
    } else {
        ((VirtualKIconButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMousePressEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MousePressEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_MouseReleaseEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKIconButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KIconButton_QBaseMouseReleaseEvent(KIconButton* self, QMouseEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseReleaseEvent_IsBase(true);
        vkiconbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKIconButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseReleaseEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ChangeEvent(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->changeEvent(e);
    } else {
        ((VirtualKIconButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KIconButton_QBaseChangeEvent(KIconButton* self, QEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ChangeEvent_IsBase(true);
        vkiconbutton->changeEvent(e);
    } else {
        ((VirtualKIconButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnChangeEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ChangeEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_TimerEvent(KIconButton* self, QTimerEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->timerEvent(e);
    } else {
        ((VirtualKIconButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KIconButton_QBaseTimerEvent(KIconButton* self, QTimerEvent* e) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_TimerEvent_IsBase(true);
        vkiconbutton->timerEvent(e);
    } else {
        ((VirtualKIconButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnTimerEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_TimerEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconButton_DevType(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->devType();
    } else {
        return self->KIconButton::devType();
    }
}

// Base class handler implementation
int KIconButton_QBaseDevType(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DevType_IsBase(true);
        return vkiconbutton->devType();
    } else {
        return self->KIconButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDevType(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DevType_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_SetVisible(KIconButton* self, bool visible) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setVisible(visible);
    } else {
        self->KIconButton::setVisible(visible);
    }
}

// Base class handler implementation
void KIconButton_QBaseSetVisible(KIconButton* self, bool visible) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SetVisible_IsBase(true);
        vkiconbutton->setVisible(visible);
    } else {
        self->KIconButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSetVisible(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SetVisible_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconButton_HeightForWidth(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIconButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KIconButton_QBaseHeightForWidth(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HeightForWidth_IsBase(true);
        return vkiconbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIconButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHeightForWidth(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HeightForWidth_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_HasHeightForWidth(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->hasHeightForWidth();
    } else {
        return self->KIconButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KIconButton_QBaseHasHeightForWidth(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HasHeightForWidth_IsBase(true);
        return vkiconbutton->hasHeightForWidth();
    } else {
        return self->KIconButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHasHeightForWidth(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KIconButton_PaintEngine(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->paintEngine();
    } else {
        return self->KIconButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KIconButton_QBasePaintEngine(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_PaintEngine_IsBase(true);
        return vkiconbutton->paintEngine();
    } else {
        return self->KIconButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnPaintEngine(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_PaintEngine_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_MouseDoubleClickEvent(KIconButton* self, QMouseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIconButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseMouseDoubleClickEvent(KIconButton* self, QMouseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseDoubleClickEvent_IsBase(true);
        vkiconbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIconButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMouseDoubleClickEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_WheelEvent(KIconButton* self, QWheelEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->wheelEvent(event);
    } else {
        ((VirtualKIconButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseWheelEvent(KIconButton* self, QWheelEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_WheelEvent_IsBase(true);
        vkiconbutton->wheelEvent(event);
    } else {
        ((VirtualKIconButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnWheelEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_WheelEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_EnterEvent(KIconButton* self, QEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->enterEvent(event);
    } else {
        ((VirtualKIconButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseEnterEvent(KIconButton* self, QEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_EnterEvent_IsBase(true);
        vkiconbutton->enterEvent(event);
    } else {
        ((VirtualKIconButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEnterEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_EnterEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_LeaveEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->leaveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseLeaveEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_LeaveEvent_IsBase(true);
        vkiconbutton->leaveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnLeaveEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_LeaveEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_MoveEvent(KIconButton* self, QMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->moveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseMoveEvent(KIconButton* self, QMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MoveEvent_IsBase(true);
        vkiconbutton->moveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMoveEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_MoveEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ResizeEvent(KIconButton* self, QResizeEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->resizeEvent(event);
    } else {
        ((VirtualKIconButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseResizeEvent(KIconButton* self, QResizeEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ResizeEvent_IsBase(true);
        vkiconbutton->resizeEvent(event);
    } else {
        ((VirtualKIconButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnResizeEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ResizeEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_CloseEvent(KIconButton* self, QCloseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->closeEvent(event);
    } else {
        ((VirtualKIconButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseCloseEvent(KIconButton* self, QCloseEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CloseEvent_IsBase(true);
        vkiconbutton->closeEvent(event);
    } else {
        ((VirtualKIconButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCloseEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CloseEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ContextMenuEvent(KIconButton* self, QContextMenuEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->contextMenuEvent(event);
    } else {
        ((VirtualKIconButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseContextMenuEvent(KIconButton* self, QContextMenuEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ContextMenuEvent_IsBase(true);
        vkiconbutton->contextMenuEvent(event);
    } else {
        ((VirtualKIconButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnContextMenuEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_TabletEvent(KIconButton* self, QTabletEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->tabletEvent(event);
    } else {
        ((VirtualKIconButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseTabletEvent(KIconButton* self, QTabletEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_TabletEvent_IsBase(true);
        vkiconbutton->tabletEvent(event);
    } else {
        ((VirtualKIconButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnTabletEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_TabletEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ActionEvent(KIconButton* self, QActionEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->actionEvent(event);
    } else {
        ((VirtualKIconButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseActionEvent(KIconButton* self, QActionEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ActionEvent_IsBase(true);
        vkiconbutton->actionEvent(event);
    } else {
        ((VirtualKIconButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnActionEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ActionEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_DragEnterEvent(KIconButton* self, QDragEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->dragEnterEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseDragEnterEvent(KIconButton* self, QDragEnterEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragEnterEvent_IsBase(true);
        vkiconbutton->dragEnterEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragEnterEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_DragMoveEvent(KIconButton* self, QDragMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->dragMoveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseDragMoveEvent(KIconButton* self, QDragMoveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragMoveEvent_IsBase(true);
        vkiconbutton->dragMoveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragMoveEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_DragLeaveEvent(KIconButton* self, QDragLeaveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseDragLeaveEvent(KIconButton* self, QDragLeaveEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragLeaveEvent_IsBase(true);
        vkiconbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDragLeaveEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_DropEvent(KIconButton* self, QDropEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->dropEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseDropEvent(KIconButton* self, QDropEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DropEvent_IsBase(true);
        vkiconbutton->dropEvent(event);
    } else {
        ((VirtualKIconButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDropEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DropEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ShowEvent(KIconButton* self, QShowEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->showEvent(event);
    } else {
        ((VirtualKIconButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseShowEvent(KIconButton* self, QShowEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ShowEvent_IsBase(true);
        vkiconbutton->showEvent(event);
    } else {
        ((VirtualKIconButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnShowEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ShowEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_HideEvent(KIconButton* self, QHideEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->hideEvent(event);
    } else {
        ((VirtualKIconButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseHideEvent(KIconButton* self, QHideEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HideEvent_IsBase(true);
        vkiconbutton->hideEvent(event);
    } else {
        ((VirtualKIconButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnHideEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_HideEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_NativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIconButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KIconButton_QBaseNativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_NativeEvent_IsBase(true);
        return vkiconbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIconButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnNativeEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_NativeEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconButton_Metric(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIconButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KIconButton_QBaseMetric(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Metric_IsBase(true);
        return vkiconbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIconButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnMetric(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Metric_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_InitPainter(const KIconButton* self, QPainter* painter) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->initPainter(painter);
    } else {
        ((VirtualKIconButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KIconButton_QBaseInitPainter(const KIconButton* self, QPainter* painter) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InitPainter_IsBase(true);
        vkiconbutton->initPainter(painter);
    } else {
        ((VirtualKIconButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInitPainter(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InitPainter_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KIconButton_Redirected(const KIconButton* self, QPoint* offset) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->redirected(offset);
    } else {
        return ((VirtualKIconButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KIconButton_QBaseRedirected(const KIconButton* self, QPoint* offset) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Redirected_IsBase(true);
        return vkiconbutton->redirected(offset);
    } else {
        return ((VirtualKIconButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnRedirected(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Redirected_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KIconButton_SharedPainter(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->sharedPainter();
    } else {
        return ((VirtualKIconButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KIconButton_QBaseSharedPainter(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SharedPainter_IsBase(true);
        return vkiconbutton->sharedPainter();
    } else {
        return ((VirtualKIconButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSharedPainter(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SharedPainter_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_InputMethodEvent(KIconButton* self, QInputMethodEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KIconButton_QBaseInputMethodEvent(KIconButton* self, QInputMethodEvent* param1) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InputMethodEvent_IsBase(true);
        vkiconbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKIconButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInputMethodEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KIconButton_InputMethodQuery(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return new QVariant(vkiconbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIconButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KIconButton_QBaseInputMethodQuery(const KIconButton* self, int param1) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InputMethodQuery_IsBase(true);
        return new QVariant(vkiconbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIconButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnInputMethodQuery(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_FocusNextPrevChild(KIconButton* self, bool next) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKIconButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KIconButton_QBaseFocusNextPrevChild(KIconButton* self, bool next) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusNextPrevChild_IsBase(true);
        return vkiconbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKIconButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusNextPrevChild(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_EventFilter(KIconButton* self, QObject* watched, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->eventFilter(watched, event);
    } else {
        return self->KIconButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIconButton_QBaseEventFilter(KIconButton* self, QObject* watched, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_EventFilter_IsBase(true);
        return vkiconbutton->eventFilter(watched, event);
    } else {
        return self->KIconButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnEventFilter(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_EventFilter_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ChildEvent(KIconButton* self, QChildEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->childEvent(event);
    } else {
        ((VirtualKIconButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseChildEvent(KIconButton* self, QChildEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ChildEvent_IsBase(true);
        vkiconbutton->childEvent(event);
    } else {
        ((VirtualKIconButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnChildEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ChildEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_CustomEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->customEvent(event);
    } else {
        ((VirtualKIconButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIconButton_QBaseCustomEvent(KIconButton* self, QEvent* event) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CustomEvent_IsBase(true);
        vkiconbutton->customEvent(event);
    } else {
        ((VirtualKIconButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCustomEvent(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_CustomEvent_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_ConnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->connectNotify(*signal);
    } else {
        ((VirtualKIconButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIconButton_QBaseConnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ConnectNotify_IsBase(true);
        vkiconbutton->connectNotify(*signal);
    } else {
        ((VirtualKIconButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnConnectNotify(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_ConnectNotify_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_DisconnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKIconButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIconButton_QBaseDisconnectNotify(KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DisconnectNotify_IsBase(true);
        vkiconbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKIconButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDisconnectNotify(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_UpdateMicroFocus(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->updateMicroFocus();
    } else {
        ((VirtualKIconButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KIconButton_QBaseUpdateMicroFocus(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_UpdateMicroFocus_IsBase(true);
        vkiconbutton->updateMicroFocus();
    } else {
        ((VirtualKIconButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnUpdateMicroFocus(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_Create(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->create();
    } else {
        ((VirtualKIconButton*)self)->create();
    }
}

// Base class handler implementation
void KIconButton_QBaseCreate(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Create_IsBase(true);
        vkiconbutton->create();
    } else {
        ((VirtualKIconButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnCreate(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Create_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconButton_Destroy(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->destroy();
    } else {
        ((VirtualKIconButton*)self)->destroy();
    }
}

// Base class handler implementation
void KIconButton_QBaseDestroy(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Destroy_IsBase(true);
        vkiconbutton->destroy();
    } else {
        ((VirtualKIconButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnDestroy(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Destroy_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_FocusNextChild(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->focusNextChild();
    } else {
        return ((VirtualKIconButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KIconButton_QBaseFocusNextChild(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusNextChild_IsBase(true);
        return vkiconbutton->focusNextChild();
    } else {
        return ((VirtualKIconButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusNextChild(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusNextChild_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_FocusPreviousChild(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->focusPreviousChild();
    } else {
        return ((VirtualKIconButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KIconButton_QBaseFocusPreviousChild(KIconButton* self) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusPreviousChild_IsBase(true);
        return vkiconbutton->focusPreviousChild();
    } else {
        return ((VirtualKIconButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnFocusPreviousChild(KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = dynamic_cast<VirtualKIconButton*>(self);
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIconButton_Sender(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->sender();
    } else {
        return ((VirtualKIconButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIconButton_QBaseSender(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Sender_IsBase(true);
        return vkiconbutton->sender();
    } else {
        return ((VirtualKIconButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSender(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Sender_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconButton_SenderSignalIndex(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->senderSignalIndex();
    } else {
        return ((VirtualKIconButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIconButton_QBaseSenderSignalIndex(const KIconButton* self) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SenderSignalIndex_IsBase(true);
        return vkiconbutton->senderSignalIndex();
    } else {
        return ((VirtualKIconButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnSenderSignalIndex(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconButton_Receivers(const KIconButton* self, const char* signal) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->receivers(signal);
    } else {
        return ((VirtualKIconButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIconButton_QBaseReceivers(const KIconButton* self, const char* signal) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Receivers_IsBase(true);
        return vkiconbutton->receivers(signal);
    } else {
        return ((VirtualKIconButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnReceivers(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_Receivers_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconButton_IsSignalConnected(const KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIconButton_QBaseIsSignalConnected(const KIconButton* self, const QMetaMethod* signal) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_IsSignalConnected_IsBase(true);
        return vkiconbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnIsSignalConnected(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KIconButton_GetDecodedMetricF(const KIconButton* self, int metricA, int metricB) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        return vkiconbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIconButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KIconButton_QBaseGetDecodedMetricF(const KIconButton* self, int metricA, int metricB) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_GetDecodedMetricF_IsBase(true);
        return vkiconbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIconButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconButton_OnGetDecodedMetricF(const KIconButton* self, intptr_t slot) {
    auto* vkiconbutton = const_cast<VirtualKIconButton*>(dynamic_cast<const VirtualKIconButton*>(self));
    if (vkiconbutton && vkiconbutton->isVirtualKIconButton) {
        vkiconbutton->setKIconButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKIconButton::KIconButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KIconButton_Delete(KIconButton* self) {
    delete self;
}
