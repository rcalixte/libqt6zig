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
#include <QByteArray>
#include <cstring>
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
    auto* vknswidgets__button = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgets__button && vknswidgets__button->isVirtualKNSWidgetsButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSWidgets__Button_Tr(const char* s) {
    QString _ret = KNSWidgets::Button::tr(s);
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
    void (*slotFunc)(KNSWidgets__Button*, KNSCore__Entry**) = reinterpret_cast<void (*)(KNSWidgets__Button*, KNSCore__Entry**)>(slot);
    KNSWidgets::Button::connect(self, &KNSWidgets::Button::dialogFinished, [self, slotFunc](const QList<KNSCore::Entry>& changedEntries) {
        const QList<KNSCore::Entry>& changedEntries_ret = changedEntries;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (changedEntries_ret.size() + 1)));
        for (qsizetype i = 0; i < changedEntries_ret.size(); ++i) {
            changedEntries_arr[i] = new KNSCore::Entry(changedEntries_ret[i]);
        }
        // Append sentinel value to the list
        changedEntries_arr[changedEntries_ret.size()] = nullptr;
        KNSCore__Entry** sigval1 = changedEntries_arr;
        slotFunc(self, sigval1);
        free(changedEntries_arr);
    });
}

libqt_string KNSWidgets__Button_Tr2(const char* s, const char* c) {
    QString _ret = KNSWidgets::Button::tr(s, c);
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
    QString _ret = KNSWidgets::Button::tr(s, c, static_cast<int>(n));
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
int KNSWidgets__Button_QBaseMetacall(KNSWidgets__Button* self, int param1, int param2, void** param3) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Metacall_IsBase(true);
        return vknswidgetsbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSWidgets::Button::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetacall(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Metacall_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSWidgets__Button_SizeHint(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return new QSize(vknswidgetsbutton->sizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KNSWidgets__Button_QBaseSizeHint(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SizeHint_IsBase(true);
        return new QSize(vknswidgetsbutton->sizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSizeHint(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SizeHint_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSWidgets__Button_MinimumSizeHint(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return new QSize(vknswidgetsbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KNSWidgets__Button_QBaseMinimumSizeHint(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MinimumSizeHint_IsBase(true);
        return new QSize(vknswidgetsbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMinimumSizeHint(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MinimumSizeHint_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_Event(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->event(e);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseEvent(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Event_IsBase(true);
        return vknswidgetsbutton->event(e);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Event_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_PaintEvent(KNSWidgets__Button* self, QPaintEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->paintEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBasePaintEvent(KNSWidgets__Button* self, QPaintEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_PaintEvent_IsBase(true);
        vknswidgetsbutton->paintEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnPaintEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_PaintEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_KeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->keyPressEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseKeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_KeyPressEvent_IsBase(true);
        vknswidgetsbutton->keyPressEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnKeyPressEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_KeyPressEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_FocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->focusInEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseFocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusInEvent_IsBase(true);
        vknswidgetsbutton->focusInEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusInEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusInEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_FocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->focusOutEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseFocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusOutEvent_IsBase(true);
        vknswidgetsbutton->focusOutEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusOutEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusOutEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_MouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseMouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseMoveEvent_IsBase(true);
        vknswidgetsbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseMoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_InitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->initStyleOption(option);
    } else {
        ((VirtualKNSWidgetsButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseInitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InitStyleOption_IsBase(true);
        vknswidgetsbutton->initStyleOption(option);
    } else {
        ((VirtualKNSWidgetsButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInitStyleOption(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InitStyleOption_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_HitButton(const KNSWidgets__Button* self, const QPoint* pos) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->hitButton(*pos);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseHitButton(const KNSWidgets__Button* self, const QPoint* pos) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HitButton_IsBase(true);
        return vknswidgetsbutton->hitButton(*pos);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHitButton(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HitButton_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_CheckStateSet(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->checkStateSet();
    } else {
        ((VirtualKNSWidgetsButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseCheckStateSet(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CheckStateSet_IsBase(true);
        vknswidgetsbutton->checkStateSet();
    } else {
        ((VirtualKNSWidgetsButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCheckStateSet(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CheckStateSet_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_NextCheckState(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->nextCheckState();
    } else {
        ((VirtualKNSWidgetsButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseNextCheckState(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_NextCheckState_IsBase(true);
        vknswidgetsbutton->nextCheckState();
    } else {
        ((VirtualKNSWidgetsButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnNextCheckState(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_NextCheckState_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_KeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseKeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_KeyReleaseEvent_IsBase(true);
        vknswidgetsbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnKeyReleaseEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_MousePressEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->mousePressEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseMousePressEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MousePressEvent_IsBase(true);
        vknswidgetsbutton->mousePressEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMousePressEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MousePressEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_MouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseMouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseReleaseEvent_IsBase(true);
        vknswidgetsbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseReleaseEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ChangeEvent(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->changeEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseChangeEvent(KNSWidgets__Button* self, QEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ChangeEvent_IsBase(true);
        vknswidgetsbutton->changeEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnChangeEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ChangeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_TimerEvent(KNSWidgets__Button* self, QTimerEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->timerEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseTimerEvent(KNSWidgets__Button* self, QTimerEvent* e) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_TimerEvent_IsBase(true);
        vknswidgetsbutton->timerEvent(e);
    } else {
        ((VirtualKNSWidgetsButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnTimerEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_TimerEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Button_DevType(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->devType();
    } else {
        return self->KNSWidgets::Button::devType();
    }
}

// Base class handler implementation
int KNSWidgets__Button_QBaseDevType(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DevType_IsBase(true);
        return vknswidgetsbutton->devType();
    } else {
        return self->KNSWidgets::Button::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDevType(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DevType_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_SetVisible(KNSWidgets__Button* self, bool visible) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setVisible(visible);
    } else {
        self->KNSWidgets::Button::setVisible(visible);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseSetVisible(KNSWidgets__Button* self, bool visible) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SetVisible_IsBase(true);
        vknswidgetsbutton->setVisible(visible);
    } else {
        self->KNSWidgets::Button::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSetVisible(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SetVisible_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Button_HeightForWidth(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNSWidgets::Button::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KNSWidgets__Button_QBaseHeightForWidth(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HeightForWidth_IsBase(true);
        return vknswidgetsbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNSWidgets::Button::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHeightForWidth(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HeightForWidth_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_HasHeightForWidth(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->hasHeightForWidth();
    } else {
        return self->KNSWidgets::Button::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseHasHeightForWidth(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HasHeightForWidth_IsBase(true);
        return vknswidgetsbutton->hasHeightForWidth();
    } else {
        return self->KNSWidgets::Button::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHasHeightForWidth(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HasHeightForWidth_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KNSWidgets__Button_PaintEngine(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->paintEngine();
    } else {
        return self->KNSWidgets::Button::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KNSWidgets__Button_QBasePaintEngine(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_PaintEngine_IsBase(true);
        return vknswidgetsbutton->paintEngine();
    } else {
        return self->KNSWidgets::Button::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnPaintEngine(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_PaintEngine_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_MouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseMouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseDoubleClickEvent_IsBase(true);
        vknswidgetsbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMouseDoubleClickEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_WheelEvent(KNSWidgets__Button* self, QWheelEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->wheelEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseWheelEvent(KNSWidgets__Button* self, QWheelEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_WheelEvent_IsBase(true);
        vknswidgetsbutton->wheelEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnWheelEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_WheelEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_EnterEvent(KNSWidgets__Button* self, QEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->enterEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseEnterEvent(KNSWidgets__Button* self, QEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_EnterEvent_IsBase(true);
        vknswidgetsbutton->enterEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEnterEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_EnterEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_LeaveEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->leaveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseLeaveEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_LeaveEvent_IsBase(true);
        vknswidgetsbutton->leaveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnLeaveEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_LeaveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_MoveEvent(KNSWidgets__Button* self, QMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->moveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseMoveEvent(KNSWidgets__Button* self, QMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MoveEvent_IsBase(true);
        vknswidgetsbutton->moveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_MoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ResizeEvent(KNSWidgets__Button* self, QResizeEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->resizeEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseResizeEvent(KNSWidgets__Button* self, QResizeEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ResizeEvent_IsBase(true);
        vknswidgetsbutton->resizeEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnResizeEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ResizeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_CloseEvent(KNSWidgets__Button* self, QCloseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->closeEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseCloseEvent(KNSWidgets__Button* self, QCloseEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CloseEvent_IsBase(true);
        vknswidgetsbutton->closeEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCloseEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CloseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->contextMenuEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ContextMenuEvent_IsBase(true);
        vknswidgetsbutton->contextMenuEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnContextMenuEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ContextMenuEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_TabletEvent(KNSWidgets__Button* self, QTabletEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->tabletEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseTabletEvent(KNSWidgets__Button* self, QTabletEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_TabletEvent_IsBase(true);
        vknswidgetsbutton->tabletEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnTabletEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_TabletEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ActionEvent(KNSWidgets__Button* self, QActionEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->actionEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseActionEvent(KNSWidgets__Button* self, QActionEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ActionEvent_IsBase(true);
        vknswidgetsbutton->actionEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnActionEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ActionEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_DragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->dragEnterEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragEnterEvent_IsBase(true);
        vknswidgetsbutton->dragEnterEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragEnterEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragEnterEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_DragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->dragMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragMoveEvent_IsBase(true);
        vknswidgetsbutton->dragMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragMoveEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragMoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_DragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragLeaveEvent_IsBase(true);
        vknswidgetsbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDragLeaveEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DragLeaveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_DropEvent(KNSWidgets__Button* self, QDropEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->dropEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDropEvent(KNSWidgets__Button* self, QDropEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DropEvent_IsBase(true);
        vknswidgetsbutton->dropEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDropEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DropEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ShowEvent(KNSWidgets__Button* self, QShowEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->showEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseShowEvent(KNSWidgets__Button* self, QShowEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ShowEvent_IsBase(true);
        vknswidgetsbutton->showEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnShowEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ShowEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_HideEvent(KNSWidgets__Button* self, QHideEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->hideEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseHideEvent(KNSWidgets__Button* self, QHideEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HideEvent_IsBase(true);
        vknswidgetsbutton->hideEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnHideEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_HideEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_NativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseNativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_NativeEvent_IsBase(true);
        return vknswidgetsbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnNativeEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_NativeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Button_Metric(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KNSWidgets__Button_QBaseMetric(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Metric_IsBase(true);
        return vknswidgetsbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnMetric(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Metric_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_InitPainter(const KNSWidgets__Button* self, QPainter* painter) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->initPainter(painter);
    } else {
        ((VirtualKNSWidgetsButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseInitPainter(const KNSWidgets__Button* self, QPainter* painter) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InitPainter_IsBase(true);
        vknswidgetsbutton->initPainter(painter);
    } else {
        ((VirtualKNSWidgetsButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInitPainter(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InitPainter_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KNSWidgets__Button_Redirected(const KNSWidgets__Button* self, QPoint* offset) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->redirected(offset);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KNSWidgets__Button_QBaseRedirected(const KNSWidgets__Button* self, QPoint* offset) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Redirected_IsBase(true);
        return vknswidgetsbutton->redirected(offset);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnRedirected(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Redirected_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KNSWidgets__Button_SharedPainter(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->sharedPainter();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KNSWidgets__Button_QBaseSharedPainter(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SharedPainter_IsBase(true);
        return vknswidgetsbutton->sharedPainter();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSharedPainter(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SharedPainter_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_InputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseInputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InputMethodEvent_IsBase(true);
        vknswidgetsbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKNSWidgetsButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInputMethodEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InputMethodEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNSWidgets__Button_InputMethodQuery(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return new QVariant(vknswidgetsbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNSWidgetsButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KNSWidgets__Button_QBaseInputMethodQuery(const KNSWidgets__Button* self, int param1) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InputMethodQuery_IsBase(true);
        return new QVariant(vknswidgetsbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNSWidgetsButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnInputMethodQuery(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_InputMethodQuery_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_FocusNextPrevChild(KNSWidgets__Button* self, bool next) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseFocusNextPrevChild(KNSWidgets__Button* self, bool next) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusNextPrevChild_IsBase(true);
        return vknswidgetsbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusNextPrevChild(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_EventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->eventFilter(watched, event);
    } else {
        return self->KNSWidgets::Button::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseEventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_EventFilter_IsBase(true);
        return vknswidgetsbutton->eventFilter(watched, event);
    } else {
        return self->KNSWidgets::Button::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnEventFilter(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_EventFilter_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ChildEvent(KNSWidgets__Button* self, QChildEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->childEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseChildEvent(KNSWidgets__Button* self, QChildEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ChildEvent_IsBase(true);
        vknswidgetsbutton->childEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnChildEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ChildEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_CustomEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->customEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseCustomEvent(KNSWidgets__Button* self, QEvent* event) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CustomEvent_IsBase(true);
        vknswidgetsbutton->customEvent(event);
    } else {
        ((VirtualKNSWidgetsButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCustomEvent(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_CustomEvent_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_ConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ConnectNotify_IsBase(true);
        vknswidgetsbutton->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnConnectNotify(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_ConnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_DisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DisconnectNotify_IsBase(true);
        vknswidgetsbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDisconnectNotify(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_UpdateMicroFocus(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->updateMicroFocus();
    } else {
        ((VirtualKNSWidgetsButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseUpdateMicroFocus(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_UpdateMicroFocus_IsBase(true);
        vknswidgetsbutton->updateMicroFocus();
    } else {
        ((VirtualKNSWidgetsButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnUpdateMicroFocus(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_Create(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->create();
    } else {
        ((VirtualKNSWidgetsButton*)self)->create();
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseCreate(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Create_IsBase(true);
        vknswidgetsbutton->create();
    } else {
        ((VirtualKNSWidgetsButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnCreate(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Create_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Button_Destroy(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->destroy();
    } else {
        ((VirtualKNSWidgetsButton*)self)->destroy();
    }
}

// Base class handler implementation
void KNSWidgets__Button_QBaseDestroy(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Destroy_IsBase(true);
        vknswidgetsbutton->destroy();
    } else {
        ((VirtualKNSWidgetsButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnDestroy(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Destroy_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_FocusNextChild(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->focusNextChild();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseFocusNextChild(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusNextChild_IsBase(true);
        return vknswidgetsbutton->focusNextChild();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusNextChild(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusNextChild_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_FocusPreviousChild(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->focusPreviousChild();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseFocusPreviousChild(KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusPreviousChild_IsBase(true);
        return vknswidgetsbutton->focusPreviousChild();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnFocusPreviousChild(KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = dynamic_cast<VirtualKNSWidgetsButton*>(self);
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_FocusPreviousChild_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSWidgets__Button_Sender(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->sender();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSWidgets__Button_QBaseSender(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Sender_IsBase(true);
        return vknswidgetsbutton->sender();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSender(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Sender_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Button_SenderSignalIndex(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSWidgets__Button_QBaseSenderSignalIndex(const KNSWidgets__Button* self) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SenderSignalIndex_IsBase(true);
        return vknswidgetsbutton->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnSenderSignalIndex(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Button_Receivers(const KNSWidgets__Button* self, const char* signal) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSWidgets__Button_QBaseReceivers(const KNSWidgets__Button* self, const char* signal) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Receivers_IsBase(true);
        return vknswidgetsbutton->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnReceivers(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_Receivers_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Button_IsSignalConnected(const KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSWidgets__Button_QBaseIsSignalConnected(const KNSWidgets__Button* self, const QMetaMethod* signal) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_IsSignalConnected_IsBase(true);
        return vknswidgetsbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnIsSignalConnected(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KNSWidgets__Button_GetDecodedMetricF(const KNSWidgets__Button* self, int metricA, int metricB) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        return vknswidgetsbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KNSWidgets__Button_QBaseGetDecodedMetricF(const KNSWidgets__Button* self, int metricA, int metricB) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_GetDecodedMetricF_IsBase(true);
        return vknswidgetsbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNSWidgetsButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Button_OnGetDecodedMetricF(const KNSWidgets__Button* self, intptr_t slot) {
    auto* vknswidgetsbutton = const_cast<VirtualKNSWidgetsButton*>(dynamic_cast<const VirtualKNSWidgetsButton*>(self));
    if (vknswidgetsbutton && vknswidgetsbutton->isVirtualKNSWidgetsButton) {
        vknswidgetsbutton->setKNSWidgets__Button_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKNSWidgetsButton::KNSWidgets__Button_GetDecodedMetricF_Callback>(slot));
    }
}

void KNSWidgets__Button_Delete(KNSWidgets__Button* self) {
    delete self;
}
