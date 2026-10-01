#include <KLocalizedString>
#include <KPluralHandlingSpinBox>
#include <QAbstractSpinBox>
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
#include <QLineEdit>
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
#include <QSpinBox>
#include <QString>
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpluralhandlingspinbox.h>
#include "libkpluralhandlingspinbox.h"
#include "libkpluralhandlingspinbox.hxx"

KPluralHandlingSpinBox* KPluralHandlingSpinBox_new(QWidget* parent) {
    return new VirtualKPluralHandlingSpinBox(parent);
}

KPluralHandlingSpinBox* KPluralHandlingSpinBox_new2() {
    return new VirtualKPluralHandlingSpinBox();
}

QMetaObject* KPluralHandlingSpinBox_MetaObject(const KPluralHandlingSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPluralHandlingSpinBox_Metacast(KPluralHandlingSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPluralHandlingSpinBox_Metacall(KPluralHandlingSpinBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPluralHandlingSpinBox_Tr(const char* s) {
    auto _ret = KPluralHandlingSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPluralHandlingSpinBox_SetSuffix(KPluralHandlingSpinBox* self, const KLocalizedString* suffix) {
    self->setSuffix(*suffix);
}

libqt_string KPluralHandlingSpinBox_Tr2(const char* s, const char* c) {
    auto _ret = KPluralHandlingSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluralHandlingSpinBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPluralHandlingSpinBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPluralHandlingSpinBox_SuperMetaObject(const KPluralHandlingSpinBox* self) {
    return (QMetaObject*)self->KPluralHandlingSpinBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetaObject(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_metaobject_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPluralHandlingSpinBox_SuperMetacast(KPluralHandlingSpinBox* self, const char* param1) {
    return self->KPluralHandlingSpinBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetacast(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_metacast_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperMetacall(KPluralHandlingSpinBox* self, int param1, int param2, void** param3) {
    return self->KPluralHandlingSpinBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetacall(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_metacall_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_Event(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->event(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_SuperEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::event(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_event_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Event_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_Validate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return static_cast<int>(vkpluralhandlingspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::validate called without a directly constructed type");
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperValidate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return static_cast<int>(vkpluralhandlingspinbox->KPluralHandlingSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::validate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnValidate(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_validate_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Validate_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_ValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->valueFromText(text_QString);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::valueFromText called without a directly constructed type");
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::valueFromText(text_QString);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::valueFromText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnValueFromText(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_valuefromtext_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ValueFromText_Callback>(slot);
}

// Derived class handler implementation
libqt_string KPluralHandlingSpinBox_TextFromValue(const KPluralHandlingSpinBox* self, int val) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        auto _ret = vkpluralhandlingspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::textFromValue called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_string KPluralHandlingSpinBox_SuperTextFromValue(const KPluralHandlingSpinBox* self, int val) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        auto _ret = vkpluralhandlingspinbox->KPluralHandlingSpinBox::textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::textFromValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTextFromValue(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_textfromvalue_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TextFromValue_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Fixup(const KPluralHandlingSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->fixup(str_QString);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::fixup called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperFixup(const KPluralHandlingSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::fixup(str_QString);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::fixup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFixup(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_fixup_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Fixup_Callback>(slot);
}

// Derived class handler implementation
QSize* KPluralHandlingSpinBox_SizeHint(const KPluralHandlingSpinBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPluralHandlingSpinBox_SuperSizeHint(const KPluralHandlingSpinBox* self) {
    return new QSize(self->KPluralHandlingSpinBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSizeHint(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_sizehint_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPluralHandlingSpinBox_MinimumSizeHint(const KPluralHandlingSpinBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPluralHandlingSpinBox_SuperMinimumSizeHint(const KPluralHandlingSpinBox* self) {
    return new QSize(self->KPluralHandlingSpinBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMinimumSizeHint(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_minimumsizehint_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPluralHandlingSpinBox_InputMethodQuery(const KPluralHandlingSpinBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPluralHandlingSpinBox_SuperInputMethodQuery(const KPluralHandlingSpinBox* self, int param1) {
    return new QVariant(self->KPluralHandlingSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInputMethodQuery(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_inputmethodquery_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_StepBy(KPluralHandlingSpinBox* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperStepBy(KPluralHandlingSpinBox* self, int steps) {
    self->KPluralHandlingSpinBox::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnStepBy(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_stepby_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_StepBy_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Clear(KPluralHandlingSpinBox* self) {
    self->clear();
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperClear(KPluralHandlingSpinBox* self) {
    self->KPluralHandlingSpinBox::clear();
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnClear(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_clear_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Clear_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnResizeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_resizeevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_KeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperKeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnKeyPressEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_keypressevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_KeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperKeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnKeyReleaseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_keyreleaseevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_WheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperWheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnWheelEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_wheelevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_FocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperFocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusInEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_focusinevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_FocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperFocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusOutEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_focusoutevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnContextMenuEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_contextmenuevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ChangeEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperChangeEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnChangeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_changeevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_CloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperCloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnCloseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_closeevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_HideEvent(KPluralHandlingSpinBox* self, QHideEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperHideEvent(KPluralHandlingSpinBox* self, QHideEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHideEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_hideevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperMousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMousePressEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_mousepressevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperMouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseReleaseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_mousereleaseevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperMouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_mousemoveevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_TimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperTimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTimerEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_timerevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_PaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperPaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnPaintEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_paintevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnShowEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_showevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperInitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInitStyleOption(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_initstyleoption_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_StepEnabled(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return static_cast<int>(vkpluralhandlingspinbox->stepEnabled());
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::stepEnabled called without a directly constructed type");
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperStepEnabled(const KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return static_cast<int>(vkpluralhandlingspinbox->KPluralHandlingSpinBox::stepEnabled());
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnStepEnabled(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_stepenabled_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_DevType(const KPluralHandlingSpinBox* self) {
    return self->devType();
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperDevType(const KPluralHandlingSpinBox* self) {
    return self->KPluralHandlingSpinBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDevType(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_devtype_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_SetVisible(KPluralHandlingSpinBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperSetVisible(KPluralHandlingSpinBox* self, bool visible) {
    self->KPluralHandlingSpinBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSetVisible(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_setvisible_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_HeightForWidth(const KPluralHandlingSpinBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperHeightForWidth(const KPluralHandlingSpinBox* self, int param1) {
    return self->KPluralHandlingSpinBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHeightForWidth(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_heightforwidth_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_HasHeightForWidth(const KPluralHandlingSpinBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPluralHandlingSpinBox_SuperHasHeightForWidth(const KPluralHandlingSpinBox* self) {
    return self->KPluralHandlingSpinBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHasHeightForWidth(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_hasheightforwidth_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPluralHandlingSpinBox_PaintEngine(const KPluralHandlingSpinBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPluralHandlingSpinBox_SuperPaintEngine(const KPluralHandlingSpinBox* self) {
    return self->KPluralHandlingSpinBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnPaintEngine(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_paintengine_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperMouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseDoubleClickEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_EnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperEnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEnterEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_enterevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_LeaveEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperLeaveEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnLeaveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_leaveevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperMoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_moveevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_TabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperTabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTabletEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_tabletevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnActionEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_actionevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperDragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragEnterEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_dragenterevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperDragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_dragmoveevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperDragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragLeaveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_dragleaveevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DropEvent(KPluralHandlingSpinBox* self, QDropEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperDropEvent(KPluralHandlingSpinBox* self, QDropEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDropEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_dropevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_NativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_SuperNativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnNativeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_nativeevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPluralHandlingSpinBox_Metric(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_SuperMetric(const KPluralHandlingSpinBox* self, int param1) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetric(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_metric_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InitPainter(const KPluralHandlingSpinBox* self, QPainter* painter) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperInitPainter(const KPluralHandlingSpinBox* self, QPainter* painter) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInitPainter(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_initpainter_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPluralHandlingSpinBox_Redirected(const KPluralHandlingSpinBox* self, QPoint* offset) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPluralHandlingSpinBox_SuperRedirected(const KPluralHandlingSpinBox* self, QPoint* offset) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnRedirected(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_redirected_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPluralHandlingSpinBox_SharedPainter(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPluralHandlingSpinBox_SuperSharedPainter(const KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSharedPainter(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self)))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_sharedpainter_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperInputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInputMethodEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_inputmethodevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_FocusNextPrevChild(KPluralHandlingSpinBox* self, bool next) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        return vkpluralhandlingspinbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_SuperFocusNextPrevChild(KPluralHandlingSpinBox* self, bool next) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        return vkpluralhandlingspinbox->KPluralHandlingSpinBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusNextPrevChild(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_focusnextprevchild_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_EventFilter(KPluralHandlingSpinBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPluralHandlingSpinBox_SuperEventFilter(KPluralHandlingSpinBox* self, QObject* watched, QEvent* event) {
    return self->KPluralHandlingSpinBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEventFilter(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_eventfilter_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnChildEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_childevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_CustomEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperCustomEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnCustomEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_customevent_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnConnectNotify(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_connectnotify_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox) {
        vkpluralhandlingspinbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_SuperDisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->KPluralHandlingSpinBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPluralHandlingSpinBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDisconnectNotify(KPluralHandlingSpinBox* self, intptr_t slot) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self))
        vkpluralhandlingspinbox->kpluralhandlingspinbox_disconnectnotify_callback = reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* KPluralHandlingSpinBox_LineEdit(const KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::lineEdit();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void KPluralHandlingSpinBox_SetLineEdit(KPluralHandlingSpinBox* self, QLineEdit* edit) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::setLineEdit(edit);
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void KPluralHandlingSpinBox_UpdateMicroFocus(KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPluralHandlingSpinBox_Create(KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::create();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPluralHandlingSpinBox_Destroy(KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::destroy();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPluralHandlingSpinBox_FocusNextChild(KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::focusNextChild();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPluralHandlingSpinBox_FocusPreviousChild(KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self)) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPluralHandlingSpinBox_Sender(const KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::sender();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPluralHandlingSpinBox_SenderSignalIndex(const KPluralHandlingSpinBox* self) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPluralHandlingSpinBox_Receivers(const KPluralHandlingSpinBox* self, const char* signal) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::receivers(signal);
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPluralHandlingSpinBox_IsSignalConnected(const KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPluralHandlingSpinBox_GetDecodedMetricF(const KPluralHandlingSpinBox* self, int metricA, int metricB) {
    if (auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self))) {
        return vkpluralhandlingspinbox->VirtualKPluralHandlingSpinBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPluralHandlingSpinBox::getDecodedMetricF called without a directly constructed type");
}

void KPluralHandlingSpinBox_Delete(KPluralHandlingSpinBox* self) {
    delete self;
}
