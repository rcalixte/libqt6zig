#include <QAbstractSpinBox>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDoubleSpinBox>
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
#include <qspinbox.h>
#include "libqspinbox.h"
#include "libqspinbox.hxx"

QSpinBox* QSpinBox_new(QWidget* parent) {
    return new VirtualQSpinBox(parent);
}

QSpinBox* QSpinBox_new2() {
    return new VirtualQSpinBox();
}

QMetaObject* QSpinBox_MetaObject(const QSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSpinBox_Metacast(QSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSpinBox_Metacall(QSpinBox* self, int param1, int param2, void** param3) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSpinBox_OnMetacall(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Metacall_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSpinBox_QBaseMetacall(QSpinBox* self, int param1, int param2, void** param3) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Metacall_IsBase(true);
        return vqspinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSpinBox_Tr(const char* s) {
    QString _ret = QSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSpinBox_Value(const QSpinBox* self) {
    return self->value();
}

libqt_string QSpinBox_Prefix(const QSpinBox* self) {
    QString _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSpinBox_SetPrefix(QSpinBox* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setPrefix(prefix_QString);
}

libqt_string QSpinBox_Suffix(const QSpinBox* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSpinBox_SetSuffix(QSpinBox* self, const libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setSuffix(suffix_QString);
}

libqt_string QSpinBox_CleanText(const QSpinBox* self) {
    QString _ret = self->cleanText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSpinBox_SingleStep(const QSpinBox* self) {
    return self->singleStep();
}

void QSpinBox_SetSingleStep(QSpinBox* self, int val) {
    self->setSingleStep(static_cast<int>(val));
}

int QSpinBox_Minimum(const QSpinBox* self) {
    return self->minimum();
}

void QSpinBox_SetMinimum(QSpinBox* self, int min) {
    self->setMinimum(static_cast<int>(min));
}

int QSpinBox_Maximum(const QSpinBox* self) {
    return self->maximum();
}

void QSpinBox_SetMaximum(QSpinBox* self, int max) {
    self->setMaximum(static_cast<int>(max));
}

void QSpinBox_SetRange(QSpinBox* self, int min, int max) {
    self->setRange(static_cast<int>(min), static_cast<int>(max));
}

int QSpinBox_StepType(const QSpinBox* self) {
    return static_cast<int>(self->stepType());
}

void QSpinBox_SetStepType(QSpinBox* self, int stepType) {
    self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_DisplayIntegerBase(const QSpinBox* self) {
    return self->displayIntegerBase();
}

void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base) {
    self->setDisplayIntegerBase(static_cast<int>(base));
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
    self->setValue(static_cast<int>(val));
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
    self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_Connect_ValueChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, int) = reinterpret_cast<void (*)(QSpinBox*, int)>(slot);
    QSpinBox::connect(self, &QSpinBox::valueChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QSpinBox_TextChanged(QSpinBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QSpinBox_Connect_TextChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, libqt_string) = reinterpret_cast<void (*)(QSpinBox*, libqt_string)>(slot);
    QSpinBox::connect(self, &QSpinBox::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
        memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
        ((char*)param1_str.data)[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSpinBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QSpinBox_Event(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->event(event);
    } else {
        return ((VirtualQSpinBox*)self)->event(event);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Event_IsBase(true);
        return vqspinbox->event(event);
    } else {
        return ((VirtualQSpinBox*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Event_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQSpinBox*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QSpinBox_QBaseValidate(const QSpinBox* self, libqt_string input, int* pos) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQSpinBox*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValidate(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Validate_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_ValueFromText(const QSpinBox* self, const libqt_string text) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->valueFromText(text_QString);
    } else {
        return ((VirtualQSpinBox*)self)->valueFromText(text_QString);
    }
}

// Base class handler implementation
int QSpinBox_QBaseValueFromText(const QSpinBox* self, const libqt_string text) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ValueFromText_IsBase(true);
        return vqspinbox->valueFromText(text_QString);
    } else {
        return ((VirtualQSpinBox*)self)->valueFromText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValueFromText(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ValueFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSpinBox*)self)->textFromValue(static_cast<int>(val));
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
libqt_string QSpinBox_QBaseTextFromValue(const QSpinBox* self, int val) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TextFromValue_IsBase(true);
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSpinBox*)self)->textFromValue(static_cast<int>(val));
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
void QSpinBox_OnTextFromValue(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TextFromValue_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Fixup(const QSpinBox* self, libqt_string str) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->fixup(str_QString);
    } else {
        ((VirtualQSpinBox*)self)->fixup(str_QString);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFixup(const QSpinBox* self, libqt_string str) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Fixup_IsBase(true);
        vqspinbox->fixup(str_QString);
    } else {
        ((VirtualQSpinBox*)self)->fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFixup(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Fixup_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpinBox_SizeHint(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return new QSize(vqspinbox->sizeHint());
    } else {
        return new QSize(((VirtualQSpinBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QSpinBox_QBaseSizeHint(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SizeHint_IsBase(true);
        return new QSize(vqspinbox->sizeHint());
    } else {
        return new QSize(((VirtualQSpinBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSizeHint(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpinBox_MinimumSizeHint(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return new QSize(vqspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSpinBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSpinBox_QBaseMinimumSizeHint(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSpinBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMinimumSizeHint(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSpinBox_InputMethodQuery(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return new QVariant(vqspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSpinBox_QBaseInputMethodQuery(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodQuery(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_StepBy(QSpinBox* self, int steps) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QSpinBox_QBaseStepBy(QSpinBox* self, int steps) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_StepBy_IsBase(true);
        vqspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepBy(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_StepBy_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Clear(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->clear();
    } else {
        self->QSpinBox::clear();
    }
}

// Base class handler implementation
void QSpinBox_QBaseClear(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Clear_IsBase(true);
        vqspinbox->clear();
    } else {
        self->QSpinBox::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnClear(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Clear_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ResizeEvent(QSpinBox* self, QResizeEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->resizeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseResizeEvent(QSpinBox* self, QResizeEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ResizeEvent_IsBase(true);
        vqspinbox->resizeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnResizeEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_KeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->keyPressEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseKeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_KeyPressEvent_IsBase(true);
        vqspinbox->keyPressEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyPressEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_KeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseKeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_KeyReleaseEvent_IsBase(true);
        vqspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyReleaseEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_WheelEvent(QSpinBox* self, QWheelEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->wheelEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseWheelEvent(QSpinBox* self, QWheelEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_WheelEvent_IsBase(true);
        vqspinbox->wheelEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnWheelEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_FocusInEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->focusInEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFocusInEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusInEvent_IsBase(true);
        vqspinbox->focusInEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusInEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_FocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->focusOutEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusOutEvent_IsBase(true);
        vqspinbox->focusOutEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusOutEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->contextMenuEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ContextMenuEvent_IsBase(true);
        vqspinbox->contextMenuEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnContextMenuEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ChangeEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->changeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseChangeEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ChangeEvent_IsBase(true);
        vqspinbox->changeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChangeEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_CloseEvent(QSpinBox* self, QCloseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->closeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseCloseEvent(QSpinBox* self, QCloseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_CloseEvent_IsBase(true);
        vqspinbox->closeEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCloseEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_HideEvent(QSpinBox* self, QHideEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->hideEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseHideEvent(QSpinBox* self, QHideEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HideEvent_IsBase(true);
        vqspinbox->hideEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHideEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MousePressEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->mousePressEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMousePressEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MousePressEvent_IsBase(true);
        vqspinbox->mousePressEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMousePressEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseReleaseEvent_IsBase(true);
        vqspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseReleaseEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseMoveEvent_IsBase(true);
        vqspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseMoveEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_TimerEvent(QSpinBox* self, QTimerEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->timerEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseTimerEvent(QSpinBox* self, QTimerEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TimerEvent_IsBase(true);
        vqspinbox->timerEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTimerEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_PaintEvent(QSpinBox* self, QPaintEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->paintEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBasePaintEvent(QSpinBox* self, QPaintEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_PaintEvent_IsBase(true);
        vqspinbox->paintEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ShowEvent(QSpinBox* self, QShowEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->showEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseShowEvent(QSpinBox* self, QShowEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ShowEvent_IsBase(true);
        vqspinbox->showEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnShowEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->initStyleOption(option);
    } else {
        ((VirtualQSpinBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InitStyleOption_IsBase(true);
        vqspinbox->initStyleOption(option);
    } else {
        ((VirtualQSpinBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitStyleOption(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_StepEnabled(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return static_cast<int>(vqspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQSpinBox*)self)->stepEnabled());
    }
}

// Base class handler implementation
int QSpinBox_QBaseStepEnabled(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQSpinBox*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepEnabled(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_DevType(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->devType();
    } else {
        return self->QSpinBox::devType();
    }
}

// Base class handler implementation
int QSpinBox_QBaseDevType(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DevType_IsBase(true);
        return vqspinbox->devType();
    } else {
        return self->QSpinBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDevType(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DevType_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_SetVisible(QSpinBox* self, bool visible) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setVisible(visible);
    } else {
        self->QSpinBox::setVisible(visible);
    }
}

// Base class handler implementation
void QSpinBox_QBaseSetVisible(QSpinBox* self, bool visible) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SetVisible_IsBase(true);
        vqspinbox->setVisible(visible);
    } else {
        self->QSpinBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSetVisible(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_HeightForWidth(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSpinBox_QBaseHeightForWidth(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HeightForWidth_IsBase(true);
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHeightForWidth(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_HasHeightForWidth(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->hasHeightForWidth();
    } else {
        return self->QSpinBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseHasHeightForWidth(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HasHeightForWidth_IsBase(true);
        return vqspinbox->hasHeightForWidth();
    } else {
        return self->QSpinBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHasHeightForWidth(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSpinBox_PaintEngine(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->paintEngine();
    } else {
        return self->QSpinBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSpinBox_QBasePaintEngine(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_PaintEngine_IsBase(true);
        return vqspinbox->paintEngine();
    } else {
        return self->QSpinBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEngine(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseDoubleClickEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_EnterEvent(QSpinBox* self, QEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->enterEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseEnterEvent(QSpinBox* self, QEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_EnterEvent_IsBase(true);
        vqspinbox->enterEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEnterEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_LeaveEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->leaveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseLeaveEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_LeaveEvent_IsBase(true);
        vqspinbox->leaveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnLeaveEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MoveEvent(QSpinBox* self, QMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->moveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMoveEvent(QSpinBox* self, QMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MoveEvent_IsBase(true);
        vqspinbox->moveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMoveEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_TabletEvent(QSpinBox* self, QTabletEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->tabletEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseTabletEvent(QSpinBox* self, QTabletEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TabletEvent_IsBase(true);
        vqspinbox->tabletEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTabletEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ActionEvent(QSpinBox* self, QActionEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->actionEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseActionEvent(QSpinBox* self, QActionEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ActionEvent_IsBase(true);
        vqspinbox->actionEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnActionEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->dragEnterEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragEnterEvent_IsBase(true);
        vqspinbox->dragEnterEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragEnterEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->dragMoveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragMoveEvent_IsBase(true);
        vqspinbox->dragMoveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragMoveEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragLeaveEvent_IsBase(true);
        vqspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragLeaveEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DropEvent(QSpinBox* self, QDropEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->dropEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDropEvent(QSpinBox* self, QDropEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DropEvent_IsBase(true);
        vqspinbox->dropEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDropEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_NativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSpinBox_QBaseNativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_NativeEvent_IsBase(true);
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnNativeEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Metric(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSpinBox_QBaseMetric(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Metric_IsBase(true);
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetric(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Metric_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InitPainter(const QSpinBox* self, QPainter* painter) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->initPainter(painter);
    } else {
        ((VirtualQSpinBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInitPainter(const QSpinBox* self, QPainter* painter) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InitPainter_IsBase(true);
        vqspinbox->initPainter(painter);
    } else {
        ((VirtualQSpinBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitPainter(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSpinBox_Redirected(const QSpinBox* self, QPoint* offset) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->redirected(offset);
    } else {
        return ((VirtualQSpinBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSpinBox_QBaseRedirected(const QSpinBox* self, QPoint* offset) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Redirected_IsBase(true);
        return vqspinbox->redirected(offset);
    } else {
        return ((VirtualQSpinBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnRedirected(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Redirected_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSpinBox_SharedPainter(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->sharedPainter();
    } else {
        return ((VirtualQSpinBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSpinBox_QBaseSharedPainter(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SharedPainter_IsBase(true);
        return vqspinbox->sharedPainter();
    } else {
        return ((VirtualQSpinBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSharedPainter(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InputMethodEvent_IsBase(true);
        vqspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusNextPrevChild(QSpinBox* self, bool next) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusNextPrevChild(QSpinBox* self, bool next) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusNextPrevChild_IsBase(true);
        return vqspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusNextPrevChild(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_EventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->eventFilter(watched, event);
    } else {
        return self->QSpinBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseEventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_EventFilter_IsBase(true);
        return vqspinbox->eventFilter(watched, event);
    } else {
        return self->QSpinBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEventFilter(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ChildEvent(QSpinBox* self, QChildEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->childEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseChildEvent(QSpinBox* self, QChildEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ChildEvent_IsBase(true);
        vqspinbox->childEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChildEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_CustomEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->customEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseCustomEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_CustomEvent_IsBase(true);
        vqspinbox->customEvent(event);
    } else {
        ((VirtualQSpinBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCustomEvent(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ConnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->connectNotify(*signal);
    } else {
        ((VirtualQSpinBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSpinBox_QBaseConnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ConnectNotify_IsBase(true);
        vqspinbox->connectNotify(*signal);
    } else {
        ((VirtualQSpinBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnConnectNotify(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DisconnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDisconnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DisconnectNotify_IsBase(true);
        vqspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDisconnectNotify(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QSpinBox_LineEdit(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->lineEdit();
    } else {
        return ((VirtualQSpinBox*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QSpinBox_QBaseLineEdit(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_LineEdit_IsBase(true);
        return vqspinbox->lineEdit();
    } else {
        return ((VirtualQSpinBox*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnLineEdit(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_SetLineEdit(QSpinBox* self, QLineEdit* edit) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setLineEdit(edit);
    } else {
        ((VirtualQSpinBox*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QSpinBox_QBaseSetLineEdit(QSpinBox* self, QLineEdit* edit) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SetLineEdit_IsBase(true);
        vqspinbox->setLineEdit(edit);
    } else {
        ((VirtualQSpinBox*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSetLineEdit(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_UpdateMicroFocus(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->updateMicroFocus();
    } else {
        ((VirtualQSpinBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSpinBox_QBaseUpdateMicroFocus(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_UpdateMicroFocus_IsBase(true);
        vqspinbox->updateMicroFocus();
    } else {
        ((VirtualQSpinBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnUpdateMicroFocus(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Create(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->create();
    } else {
        ((VirtualQSpinBox*)self)->create();
    }
}

// Base class handler implementation
void QSpinBox_QBaseCreate(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Create_IsBase(true);
        vqspinbox->create();
    } else {
        ((VirtualQSpinBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCreate(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Create_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Destroy(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->destroy();
    } else {
        ((VirtualQSpinBox*)self)->destroy();
    }
}

// Base class handler implementation
void QSpinBox_QBaseDestroy(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Destroy_IsBase(true);
        vqspinbox->destroy();
    } else {
        ((VirtualQSpinBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDestroy(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Destroy_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusNextChild(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->focusNextChild();
    } else {
        return ((VirtualQSpinBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusNextChild(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusNextChild_IsBase(true);
        return vqspinbox->focusNextChild();
    } else {
        return ((VirtualQSpinBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusNextChild(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusPreviousChild(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->focusPreviousChild();
    } else {
        return ((VirtualQSpinBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusPreviousChild(QSpinBox* self) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusPreviousChild_IsBase(true);
        return vqspinbox->focusPreviousChild();
    } else {
        return ((VirtualQSpinBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusPreviousChild(QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSpinBox_Sender(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->sender();
    } else {
        return ((VirtualQSpinBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSpinBox_QBaseSender(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Sender_IsBase(true);
        return vqspinbox->sender();
    } else {
        return ((VirtualQSpinBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSender(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Sender_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_SenderSignalIndex(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->senderSignalIndex();
    } else {
        return ((VirtualQSpinBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSpinBox_QBaseSenderSignalIndex(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SenderSignalIndex_IsBase(true);
        return vqspinbox->senderSignalIndex();
    } else {
        return ((VirtualQSpinBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSenderSignalIndex(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Receivers(const QSpinBox* self, const char* signal) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->receivers(signal);
    } else {
        return ((VirtualQSpinBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSpinBox_QBaseReceivers(const QSpinBox* self, const char* signal) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Receivers_IsBase(true);
        return vqspinbox->receivers(signal);
    } else {
        return ((VirtualQSpinBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnReceivers(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_Receivers_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_IsSignalConnected(const QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseIsSignalConnected(const QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_IsSignalConnected_IsBase(true);
        return vqspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnIsSignalConnected(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSpinBox_GetDecodedMetricF(const QSpinBox* self, int metricA, int metricB) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        return vqspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSpinBox_QBaseGetDecodedMetricF(const QSpinBox* self, int metricA, int metricB) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_GetDecodedMetricF_IsBase(true);
        return vqspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnGetDecodedMetricF(const QSpinBox* self, intptr_t slot) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox && vqspinbox->isVirtualQSpinBox) {
        vqspinbox->setQSpinBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_GetDecodedMetricF_Callback>(slot));
    }
}

void QSpinBox_Delete(QSpinBox* self) {
    delete self;
}

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent) {
    return new VirtualQDoubleSpinBox(parent);
}

QDoubleSpinBox* QDoubleSpinBox_new2() {
    return new VirtualQDoubleSpinBox();
}

QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDoubleSpinBox_Metacast(QDoubleSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDoubleSpinBox_Metacall(QDoubleSpinBox* self, int param1, int param2, void** param3) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDoubleSpinBox_OnMetacall(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Metacall_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDoubleSpinBox_QBaseMetacall(QDoubleSpinBox* self, int param1, int param2, void** param3) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Metacall_IsBase(true);
        return vqdoublespinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDoubleSpinBox_Tr(const char* s) {
    QString _ret = QDoubleSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QDoubleSpinBox_Value(const QDoubleSpinBox* self) {
    return self->value();
}

libqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self) {
    QString _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setPrefix(prefix_QString);
}

libqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, const libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setSuffix(suffix_QString);
}

libqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self) {
    QString _ret = self->cleanText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self) {
    return self->singleStep();
}

void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val) {
    self->setSingleStep(static_cast<double>(val));
}

double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self) {
    return self->minimum();
}

void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min) {
    self->setMinimum(static_cast<double>(min));
}

double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self) {
    return self->maximum();
}

void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max) {
    self->setMaximum(static_cast<double>(max));
}

void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max) {
    self->setRange(static_cast<double>(min), static_cast<double>(max));
}

int QDoubleSpinBox_StepType(const QDoubleSpinBox* self) {
    return static_cast<int>(self->stepType());
}

void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType) {
    self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self) {
    return self->decimals();
}

void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec) {
    self->setDecimals(static_cast<int>(prec));
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
    self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
    self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_Connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, double) = reinterpret_cast<void (*)(QDoubleSpinBox*, double)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::valueChanged, [self, slotFunc](double param1) {
        double sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QDoubleSpinBox_Connect_TextChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, libqt_string) = reinterpret_cast<void (*)(QDoubleSpinBox*, libqt_string)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
        memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
        ((char*)param1_str.data)[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QDoubleSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QDoubleSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QDoubleSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseValidate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QDoubleSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValidate(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Validate_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->valueFromText(text_QString);
    } else {
        return self->QDoubleSpinBox::valueFromText(text_QString);
    }
}

// Base class handler implementation
double QDoubleSpinBox_QBaseValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ValueFromText_IsBase(true);
        return vqdoublespinbox->valueFromText(text_QString);
    } else {
        return self->QDoubleSpinBox::valueFromText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValueFromText(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ValueFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QDoubleSpinBox::textFromValue(static_cast<double>(val));
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
libqt_string QDoubleSpinBox_QBaseTextFromValue(const QDoubleSpinBox* self, double val) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TextFromValue_IsBase(true);
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QDoubleSpinBox::textFromValue(static_cast<double>(val));
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
void QDoubleSpinBox_OnTextFromValue(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TextFromValue_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, libqt_string str) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->fixup(str_QString);
    } else {
        self->QDoubleSpinBox::fixup(str_QString);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFixup(const QDoubleSpinBox* self, libqt_string str) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Fixup_IsBase(true);
        vqdoublespinbox->fixup(str_QString);
    } else {
        self->QDoubleSpinBox::fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFixup(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Fixup_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDoubleSpinBox_SizeHint(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return new QSize(vqdoublespinbox->sizeHint());
    } else {
        return new QSize(((VirtualQDoubleSpinBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDoubleSpinBox_QBaseSizeHint(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SizeHint_IsBase(true);
        return new QSize(vqdoublespinbox->sizeHint());
    } else {
        return new QSize(((VirtualQDoubleSpinBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSizeHint(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDoubleSpinBox_MinimumSizeHint(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return new QSize(vqdoublespinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDoubleSpinBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDoubleSpinBox_QBaseMinimumSizeHint(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqdoublespinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDoubleSpinBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMinimumSizeHint(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_Event(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->event(event);
    } else {
        return self->QDoubleSpinBox::event(event);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Event_IsBase(true);
        return vqdoublespinbox->event(event);
    } else {
        return self->QDoubleSpinBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Event_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDoubleSpinBox_InputMethodQuery(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return new QVariant(vqdoublespinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDoubleSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDoubleSpinBox_QBaseInputMethodQuery(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqdoublespinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDoubleSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodQuery(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_StepBy(QDoubleSpinBox* self, int steps) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QDoubleSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseStepBy(QDoubleSpinBox* self, int steps) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_StepBy_IsBase(true);
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QDoubleSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepBy(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_StepBy_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Clear(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->clear();
    } else {
        self->QDoubleSpinBox::clear();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseClear(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Clear_IsBase(true);
        vqdoublespinbox->clear();
    } else {
        self->QDoubleSpinBox::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnClear(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Clear_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->resizeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ResizeEvent_IsBase(true);
        vqdoublespinbox->resizeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnResizeEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_KeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->keyPressEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseKeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_KeyPressEvent_IsBase(true);
        vqdoublespinbox->keyPressEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyPressEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_KeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseKeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_KeyReleaseEvent_IsBase(true);
        vqdoublespinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_WheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->wheelEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseWheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_WheelEvent_IsBase(true);
        vqdoublespinbox->wheelEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnWheelEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_FocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->focusInEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusInEvent_IsBase(true);
        vqdoublespinbox->focusInEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusInEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_FocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->focusOutEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusOutEvent_IsBase(true);
        vqdoublespinbox->focusOutEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusOutEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->contextMenuEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ContextMenuEvent_IsBase(true);
        vqdoublespinbox->contextMenuEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnContextMenuEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->changeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ChangeEvent_IsBase(true);
        vqdoublespinbox->changeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChangeEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_CloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->closeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_CloseEvent_IsBase(true);
        vqdoublespinbox->closeEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCloseEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_HideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->hideEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseHideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HideEvent_IsBase(true);
        vqdoublespinbox->hideEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHideEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->mousePressEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MousePressEvent_IsBase(true);
        vqdoublespinbox->mousePressEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMousePressEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseReleaseEvent_IsBase(true);
        vqdoublespinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseMoveEvent_IsBase(true);
        vqdoublespinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_TimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->timerEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseTimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TimerEvent_IsBase(true);
        vqdoublespinbox->timerEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTimerEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_PaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->paintEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBasePaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEvent_IsBase(true);
        vqdoublespinbox->paintEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->showEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ShowEvent_IsBase(true);
        vqdoublespinbox->showEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnShowEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->initStyleOption(option);
    } else {
        ((VirtualQDoubleSpinBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InitStyleOption_IsBase(true);
        vqdoublespinbox->initStyleOption(option);
    } else {
        ((VirtualQDoubleSpinBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitStyleOption(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_StepEnabled(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQDoubleSpinBox*)self)->stepEnabled());
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseStepEnabled(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQDoubleSpinBox*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepEnabled(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_DevType(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->devType();
    } else {
        return self->QDoubleSpinBox::devType();
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseDevType(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DevType_IsBase(true);
        return vqdoublespinbox->devType();
    } else {
        return self->QDoubleSpinBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDevType(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DevType_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_SetVisible(QDoubleSpinBox* self, bool visible) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setVisible(visible);
    } else {
        self->QDoubleSpinBox::setVisible(visible);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseSetVisible(QDoubleSpinBox* self, bool visible) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SetVisible_IsBase(true);
        vqdoublespinbox->setVisible(visible);
    } else {
        self->QDoubleSpinBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSetVisible(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_HeightForWidth(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDoubleSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseHeightForWidth(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HeightForWidth_IsBase(true);
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDoubleSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHeightForWidth(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_HasHeightForWidth(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->hasHeightForWidth();
    } else {
        return self->QDoubleSpinBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseHasHeightForWidth(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HasHeightForWidth_IsBase(true);
        return vqdoublespinbox->hasHeightForWidth();
    } else {
        return self->QDoubleSpinBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHasHeightForWidth(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDoubleSpinBox_PaintEngine(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->paintEngine();
    } else {
        return self->QDoubleSpinBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDoubleSpinBox_QBasePaintEngine(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEngine_IsBase(true);
        return vqdoublespinbox->paintEngine();
    } else {
        return self->QDoubleSpinBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEngine(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqdoublespinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseDoubleClickEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_EnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->enterEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseEnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_EnterEvent_IsBase(true);
        vqdoublespinbox->enterEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_LeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->leaveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseLeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_LeaveEvent_IsBase(true);
        vqdoublespinbox->leaveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->moveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MoveEvent_IsBase(true);
        vqdoublespinbox->moveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_TabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->tabletEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseTabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TabletEvent_IsBase(true);
        vqdoublespinbox->tabletEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTabletEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->actionEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ActionEvent_IsBase(true);
        vqdoublespinbox->actionEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnActionEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->dragEnterEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragEnterEvent_IsBase(true);
        vqdoublespinbox->dragEnterEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->dragMoveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragMoveEvent_IsBase(true);
        vqdoublespinbox->dragMoveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragLeaveEvent_IsBase(true);
        vqdoublespinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->dropEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DropEvent_IsBase(true);
        vqdoublespinbox->dropEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDropEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_NativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseNativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_NativeEvent_IsBase(true);
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnNativeEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_Metric(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseMetric(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Metric_IsBase(true);
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetric(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Metric_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->initPainter(painter);
    } else {
        ((VirtualQDoubleSpinBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InitPainter_IsBase(true);
        vqdoublespinbox->initPainter(painter);
    } else {
        ((VirtualQDoubleSpinBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitPainter(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDoubleSpinBox_Redirected(const QDoubleSpinBox* self, QPoint* offset) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->redirected(offset);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDoubleSpinBox_QBaseRedirected(const QDoubleSpinBox* self, QPoint* offset) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Redirected_IsBase(true);
        return vqdoublespinbox->redirected(offset);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnRedirected(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Redirected_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDoubleSpinBox_SharedPainter(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->sharedPainter();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDoubleSpinBox_QBaseSharedPainter(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SharedPainter_IsBase(true);
        return vqdoublespinbox->sharedPainter();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSharedPainter(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQDoubleSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodEvent_IsBase(true);
        vqdoublespinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQDoubleSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextPrevChild_IsBase(true);
        return vqdoublespinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusNextPrevChild(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_EventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->eventFilter(watched, event);
    } else {
        return self->QDoubleSpinBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseEventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_EventFilter_IsBase(true);
        return vqdoublespinbox->eventFilter(watched, event);
    } else {
        return self->QDoubleSpinBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEventFilter(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->childEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ChildEvent_IsBase(true);
        vqdoublespinbox->childEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChildEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_CustomEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->customEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCustomEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_CustomEvent_IsBase(true);
        vqdoublespinbox->customEvent(event);
    } else {
        ((VirtualQDoubleSpinBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCustomEvent(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->connectNotify(*signal);
    } else {
        ((VirtualQDoubleSpinBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ConnectNotify_IsBase(true);
        vqdoublespinbox->connectNotify(*signal);
    } else {
        ((VirtualQDoubleSpinBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnConnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQDoubleSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DisconnectNotify_IsBase(true);
        vqdoublespinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQDoubleSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDisconnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDoubleSpinBox_LineEdit(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->lineEdit();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDoubleSpinBox_QBaseLineEdit(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_LineEdit_IsBase(true);
        return vqdoublespinbox->lineEdit();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnLineEdit(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_SetLineEdit(QDoubleSpinBox* self, QLineEdit* edit) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setLineEdit(edit);
    } else {
        ((VirtualQDoubleSpinBox*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseSetLineEdit(QDoubleSpinBox* self, QLineEdit* edit) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SetLineEdit_IsBase(true);
        vqdoublespinbox->setLineEdit(edit);
    } else {
        ((VirtualQDoubleSpinBox*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSetLineEdit(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_UpdateMicroFocus(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->updateMicroFocus();
    } else {
        ((VirtualQDoubleSpinBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseUpdateMicroFocus(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_UpdateMicroFocus_IsBase(true);
        vqdoublespinbox->updateMicroFocus();
    } else {
        ((VirtualQDoubleSpinBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnUpdateMicroFocus(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Create(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->create();
    } else {
        ((VirtualQDoubleSpinBox*)self)->create();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCreate(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Create_IsBase(true);
        vqdoublespinbox->create();
    } else {
        ((VirtualQDoubleSpinBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCreate(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Create_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Destroy(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->destroy();
    } else {
        ((VirtualQDoubleSpinBox*)self)->destroy();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDestroy(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Destroy_IsBase(true);
        vqdoublespinbox->destroy();
    } else {
        ((VirtualQDoubleSpinBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDestroy(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Destroy_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusNextChild(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->focusNextChild();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusNextChild(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextChild_IsBase(true);
        return vqdoublespinbox->focusNextChild();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusNextChild(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusPreviousChild(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->focusPreviousChild();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusPreviousChild(QDoubleSpinBox* self) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusPreviousChild_IsBase(true);
        return vqdoublespinbox->focusPreviousChild();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusPreviousChild(QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDoubleSpinBox_Sender(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->sender();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDoubleSpinBox_QBaseSender(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Sender_IsBase(true);
        return vqdoublespinbox->sender();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSender(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Sender_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_SenderSignalIndex(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->senderSignalIndex();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseSenderSignalIndex(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SenderSignalIndex_IsBase(true);
        return vqdoublespinbox->senderSignalIndex();
    } else {
        return ((VirtualQDoubleSpinBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSenderSignalIndex(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_Receivers(const QDoubleSpinBox* self, const char* signal) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->receivers(signal);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseReceivers(const QDoubleSpinBox* self, const char* signal) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Receivers_IsBase(true);
        return vqdoublespinbox->receivers(signal);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnReceivers(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_Receivers_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_IsSignalConnected(const QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseIsSignalConnected(const QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_IsSignalConnected_IsBase(true);
        return vqdoublespinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQDoubleSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnIsSignalConnected(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDoubleSpinBox_GetDecodedMetricF(const QDoubleSpinBox* self, int metricA, int metricB) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        return vqdoublespinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDoubleSpinBox_QBaseGetDecodedMetricF(const QDoubleSpinBox* self, int metricA, int metricB) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_GetDecodedMetricF_IsBase(true);
        return vqdoublespinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDoubleSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnGetDecodedMetricF(const QDoubleSpinBox* self, intptr_t slot) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
        vqdoublespinbox->setQDoubleSpinBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_GetDecodedMetricF_Callback>(slot));
    }
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
    delete self;
}
