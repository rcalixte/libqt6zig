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
#include <QByteArray>
#include <cstring>
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
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPluralHandlingSpinBox_Tr(const char* s) {
    QString _ret = KPluralHandlingSpinBox::tr(s);
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
    QString _ret = KPluralHandlingSpinBox::tr(s, c);
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
    QString _ret = KPluralHandlingSpinBox::tr(s, c, static_cast<int>(n));
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
int KPluralHandlingSpinBox_QBaseMetacall(KPluralHandlingSpinBox* self, int param1, int param2, void** param3) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Metacall_IsBase(true);
        return vkpluralhandlingspinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPluralHandlingSpinBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetacall(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Metacall_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_Event(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->event(event);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->event(event);
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Event_IsBase(true);
        return vkpluralhandlingspinbox->event(event);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Event_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_Validate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return static_cast<int>(vkpluralhandlingspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualKPluralHandlingSpinBox*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseValidate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Validate_IsBase(true);
        return static_cast<int>(vkpluralhandlingspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualKPluralHandlingSpinBox*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnValidate(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Validate_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_ValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->valueFromText(text_QString);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->valueFromText(text_QString);
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ValueFromText_IsBase(true);
        return vkpluralhandlingspinbox->valueFromText(text_QString);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->valueFromText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnValueFromText(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ValueFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KPluralHandlingSpinBox_TextFromValue(const KPluralHandlingSpinBox* self, int val) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        QString _ret = vkpluralhandlingspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPluralHandlingSpinBox*)self)->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KPluralHandlingSpinBox_QBaseTextFromValue(const KPluralHandlingSpinBox* self, int val) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TextFromValue_IsBase(true);
        QString _ret = vkpluralhandlingspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPluralHandlingSpinBox*)self)->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTextFromValue(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TextFromValue_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Fixup(const KPluralHandlingSpinBox* self, libqt_string str) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->fixup(str_QString);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->fixup(str_QString);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseFixup(const KPluralHandlingSpinBox* self, libqt_string str) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Fixup_IsBase(true);
        vkpluralhandlingspinbox->fixup(str_QString);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFixup(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Fixup_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPluralHandlingSpinBox_SizeHint(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return new QSize(vkpluralhandlingspinbox->sizeHint());
    } else {
        return new QSize(((VirtualKPluralHandlingSpinBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPluralHandlingSpinBox_QBaseSizeHint(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SizeHint_IsBase(true);
        return new QSize(vkpluralhandlingspinbox->sizeHint());
    } else {
        return new QSize(((VirtualKPluralHandlingSpinBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSizeHint(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SizeHint_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPluralHandlingSpinBox_MinimumSizeHint(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return new QSize(vkpluralhandlingspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPluralHandlingSpinBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPluralHandlingSpinBox_QBaseMinimumSizeHint(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkpluralhandlingspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPluralHandlingSpinBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMinimumSizeHint(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPluralHandlingSpinBox_InputMethodQuery(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return new QVariant(vkpluralhandlingspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPluralHandlingSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPluralHandlingSpinBox_QBaseInputMethodQuery(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkpluralhandlingspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPluralHandlingSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInputMethodQuery(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_StepBy(KPluralHandlingSpinBox* self, int steps) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->KPluralHandlingSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseStepBy(KPluralHandlingSpinBox* self, int steps) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_StepBy_IsBase(true);
        vkpluralhandlingspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->KPluralHandlingSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnStepBy(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_StepBy_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Clear(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->clear();
    } else {
        self->KPluralHandlingSpinBox::clear();
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseClear(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Clear_IsBase(true);
        vkpluralhandlingspinbox->clear();
    } else {
        self->KPluralHandlingSpinBox::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnClear(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Clear_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->resizeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ResizeEvent_IsBase(true);
        vkpluralhandlingspinbox->resizeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnResizeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_KeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->keyPressEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseKeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_KeyPressEvent_IsBase(true);
        vkpluralhandlingspinbox->keyPressEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnKeyPressEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_KeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseKeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_KeyReleaseEvent_IsBase(true);
        vkpluralhandlingspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnKeyReleaseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_WheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->wheelEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseWheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_WheelEvent_IsBase(true);
        vkpluralhandlingspinbox->wheelEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnWheelEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_FocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->focusInEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseFocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusInEvent_IsBase(true);
        vkpluralhandlingspinbox->focusInEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusInEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_FocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->focusOutEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseFocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusOutEvent_IsBase(true);
        vkpluralhandlingspinbox->focusOutEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusOutEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->contextMenuEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ContextMenuEvent_IsBase(true);
        vkpluralhandlingspinbox->contextMenuEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnContextMenuEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ChangeEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->changeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseChangeEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ChangeEvent_IsBase(true);
        vkpluralhandlingspinbox->changeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnChangeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_CloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->closeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseCloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_CloseEvent_IsBase(true);
        vkpluralhandlingspinbox->closeEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnCloseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_HideEvent(KPluralHandlingSpinBox* self, QHideEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->hideEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseHideEvent(KPluralHandlingSpinBox* self, QHideEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HideEvent_IsBase(true);
        vkpluralhandlingspinbox->hideEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHideEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HideEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->mousePressEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseMousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MousePressEvent_IsBase(true);
        vkpluralhandlingspinbox->mousePressEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMousePressEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseMouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseReleaseEvent_IsBase(true);
        vkpluralhandlingspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseReleaseEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseMouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseMoveEvent_IsBase(true);
        vkpluralhandlingspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_TimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->timerEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseTimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TimerEvent_IsBase(true);
        vkpluralhandlingspinbox->timerEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTimerEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_PaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->paintEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBasePaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_PaintEvent_IsBase(true);
        vkpluralhandlingspinbox->paintEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnPaintEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->showEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ShowEvent_IsBase(true);
        vkpluralhandlingspinbox->showEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnShowEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->initStyleOption(option);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseInitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InitStyleOption_IsBase(true);
        vkpluralhandlingspinbox->initStyleOption(option);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInitStyleOption(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_StepEnabled(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return static_cast<int>(vkpluralhandlingspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualKPluralHandlingSpinBox*)self)->stepEnabled());
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseStepEnabled(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vkpluralhandlingspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualKPluralHandlingSpinBox*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnStepEnabled(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_DevType(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->devType();
    } else {
        return self->KPluralHandlingSpinBox::devType();
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseDevType(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DevType_IsBase(true);
        return vkpluralhandlingspinbox->devType();
    } else {
        return self->KPluralHandlingSpinBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDevType(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DevType_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_SetVisible(KPluralHandlingSpinBox* self, bool visible) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setVisible(visible);
    } else {
        self->KPluralHandlingSpinBox::setVisible(visible);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseSetVisible(KPluralHandlingSpinBox* self, bool visible) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SetVisible_IsBase(true);
        vkpluralhandlingspinbox->setVisible(visible);
    } else {
        self->KPluralHandlingSpinBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSetVisible(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SetVisible_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_HeightForWidth(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPluralHandlingSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseHeightForWidth(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HeightForWidth_IsBase(true);
        return vkpluralhandlingspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPluralHandlingSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHeightForWidth(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_HasHeightForWidth(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->hasHeightForWidth();
    } else {
        return self->KPluralHandlingSpinBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseHasHeightForWidth(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HasHeightForWidth_IsBase(true);
        return vkpluralhandlingspinbox->hasHeightForWidth();
    } else {
        return self->KPluralHandlingSpinBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnHasHeightForWidth(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPluralHandlingSpinBox_PaintEngine(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->paintEngine();
    } else {
        return self->KPluralHandlingSpinBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPluralHandlingSpinBox_QBasePaintEngine(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_PaintEngine_IsBase(true);
        return vkpluralhandlingspinbox->paintEngine();
    } else {
        return self->KPluralHandlingSpinBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnPaintEngine(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseMouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseDoubleClickEvent_IsBase(true);
        vkpluralhandlingspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMouseDoubleClickEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_EnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->enterEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseEnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_EnterEvent_IsBase(true);
        vkpluralhandlingspinbox->enterEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEnterEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_LeaveEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->leaveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseLeaveEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_LeaveEvent_IsBase(true);
        vkpluralhandlingspinbox->leaveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnLeaveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_MoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->moveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseMoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MoveEvent_IsBase(true);
        vkpluralhandlingspinbox->moveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_TabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->tabletEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseTabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TabletEvent_IsBase(true);
        vkpluralhandlingspinbox->tabletEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnTabletEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->actionEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ActionEvent_IsBase(true);
        vkpluralhandlingspinbox->actionEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnActionEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->dragEnterEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragEnterEvent_IsBase(true);
        vkpluralhandlingspinbox->dragEnterEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragEnterEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->dragMoveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragMoveEvent_IsBase(true);
        vkpluralhandlingspinbox->dragMoveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragMoveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragLeaveEvent_IsBase(true);
        vkpluralhandlingspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDragLeaveEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DropEvent(KPluralHandlingSpinBox* self, QDropEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->dropEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDropEvent(KPluralHandlingSpinBox* self, QDropEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DropEvent_IsBase(true);
        vkpluralhandlingspinbox->dropEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDropEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DropEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_NativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseNativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_NativeEvent_IsBase(true);
        return vkpluralhandlingspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnNativeEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_Metric(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseMetric(const KPluralHandlingSpinBox* self, int param1) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Metric_IsBase(true);
        return vkpluralhandlingspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnMetric(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Metric_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InitPainter(const KPluralHandlingSpinBox* self, QPainter* painter) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->initPainter(painter);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseInitPainter(const KPluralHandlingSpinBox* self, QPainter* painter) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InitPainter_IsBase(true);
        vkpluralhandlingspinbox->initPainter(painter);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInitPainter(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InitPainter_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPluralHandlingSpinBox_Redirected(const KPluralHandlingSpinBox* self, QPoint* offset) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->redirected(offset);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPluralHandlingSpinBox_QBaseRedirected(const KPluralHandlingSpinBox* self, QPoint* offset) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Redirected_IsBase(true);
        return vkpluralhandlingspinbox->redirected(offset);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnRedirected(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Redirected_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPluralHandlingSpinBox_SharedPainter(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->sharedPainter();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPluralHandlingSpinBox_QBaseSharedPainter(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SharedPainter_IsBase(true);
        return vkpluralhandlingspinbox->sharedPainter();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSharedPainter(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_InputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseInputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InputMethodEvent_IsBase(true);
        vkpluralhandlingspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnInputMethodEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_FocusNextPrevChild(KPluralHandlingSpinBox* self, bool next) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseFocusNextPrevChild(KPluralHandlingSpinBox* self, bool next) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusNextPrevChild_IsBase(true);
        return vkpluralhandlingspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusNextPrevChild(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_EventFilter(KPluralHandlingSpinBox* self, QObject* watched, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->eventFilter(watched, event);
    } else {
        return self->KPluralHandlingSpinBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseEventFilter(KPluralHandlingSpinBox* self, QObject* watched, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_EventFilter_IsBase(true);
        return vkpluralhandlingspinbox->eventFilter(watched, event);
    } else {
        return self->KPluralHandlingSpinBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnEventFilter(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_EventFilter_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->childEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ChildEvent_IsBase(true);
        vkpluralhandlingspinbox->childEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnChildEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_CustomEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->customEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseCustomEvent(KPluralHandlingSpinBox* self, QEvent* event) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_CustomEvent_IsBase(true);
        vkpluralhandlingspinbox->customEvent(event);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnCustomEvent(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_ConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->connectNotify(*signal);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ConnectNotify_IsBase(true);
        vkpluralhandlingspinbox->connectNotify(*signal);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnConnectNotify(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_DisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DisconnectNotify_IsBase(true);
        vkpluralhandlingspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDisconnectNotify(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* KPluralHandlingSpinBox_LineEdit(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->lineEdit();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* KPluralHandlingSpinBox_QBaseLineEdit(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_LineEdit_IsBase(true);
        return vkpluralhandlingspinbox->lineEdit();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnLineEdit(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_LineEdit_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_SetLineEdit(KPluralHandlingSpinBox* self, QLineEdit* edit) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setLineEdit(edit);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseSetLineEdit(KPluralHandlingSpinBox* self, QLineEdit* edit) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SetLineEdit_IsBase(true);
        vkpluralhandlingspinbox->setLineEdit(edit);
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSetLineEdit(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_UpdateMicroFocus(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->updateMicroFocus();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseUpdateMicroFocus(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_UpdateMicroFocus_IsBase(true);
        vkpluralhandlingspinbox->updateMicroFocus();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnUpdateMicroFocus(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Create(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->create();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->create();
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseCreate(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Create_IsBase(true);
        vkpluralhandlingspinbox->create();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnCreate(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Create_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluralHandlingSpinBox_Destroy(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->destroy();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->destroy();
    }
}

// Base class handler implementation
void KPluralHandlingSpinBox_QBaseDestroy(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Destroy_IsBase(true);
        vkpluralhandlingspinbox->destroy();
    } else {
        ((VirtualKPluralHandlingSpinBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnDestroy(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Destroy_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_FocusNextChild(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->focusNextChild();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseFocusNextChild(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusNextChild_IsBase(true);
        return vkpluralhandlingspinbox->focusNextChild();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusNextChild(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_FocusPreviousChild(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->focusPreviousChild();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseFocusPreviousChild(KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusPreviousChild_IsBase(true);
        return vkpluralhandlingspinbox->focusPreviousChild();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnFocusPreviousChild(KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = dynamic_cast<VirtualKPluralHandlingSpinBox*>(self);
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPluralHandlingSpinBox_Sender(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->sender();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPluralHandlingSpinBox_QBaseSender(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Sender_IsBase(true);
        return vkpluralhandlingspinbox->sender();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSender(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Sender_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_SenderSignalIndex(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->senderSignalIndex();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseSenderSignalIndex(const KPluralHandlingSpinBox* self) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SenderSignalIndex_IsBase(true);
        return vkpluralhandlingspinbox->senderSignalIndex();
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnSenderSignalIndex(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluralHandlingSpinBox_Receivers(const KPluralHandlingSpinBox* self, const char* signal) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->receivers(signal);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPluralHandlingSpinBox_QBaseReceivers(const KPluralHandlingSpinBox* self, const char* signal) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Receivers_IsBase(true);
        return vkpluralhandlingspinbox->receivers(signal);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnReceivers(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_Receivers_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluralHandlingSpinBox_IsSignalConnected(const KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPluralHandlingSpinBox_QBaseIsSignalConnected(const KPluralHandlingSpinBox* self, const QMetaMethod* signal) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_IsSignalConnected_IsBase(true);
        return vkpluralhandlingspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnIsSignalConnected(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPluralHandlingSpinBox_GetDecodedMetricF(const KPluralHandlingSpinBox* self, int metricA, int metricB) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        return vkpluralhandlingspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPluralHandlingSpinBox_QBaseGetDecodedMetricF(const KPluralHandlingSpinBox* self, int metricA, int metricB) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_GetDecodedMetricF_IsBase(true);
        return vkpluralhandlingspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPluralHandlingSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPluralHandlingSpinBox_OnGetDecodedMetricF(const KPluralHandlingSpinBox* self, intptr_t slot) {
    auto* vkpluralhandlingspinbox = const_cast<VirtualKPluralHandlingSpinBox*>(dynamic_cast<const VirtualKPluralHandlingSpinBox*>(self));
    if (vkpluralhandlingspinbox && vkpluralhandlingspinbox->isVirtualKPluralHandlingSpinBox) {
        vkpluralhandlingspinbox->setKPluralHandlingSpinBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPluralHandlingSpinBox::KPluralHandlingSpinBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KPluralHandlingSpinBox_Delete(KPluralHandlingSpinBox* self) {
    delete self;
}
