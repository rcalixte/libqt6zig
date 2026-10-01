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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSpinBox_Tr(const char* s) {
    auto _ret = QSpinBox::tr(s);
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
    auto _ret = self->prefix();
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
    auto _ret = self->suffix();
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
    auto _ret = self->cleanText();
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

bool QSpinBox_Event(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        return vqspinbox->event(event);
    }
    qFatal("Error: Protected method QSpinBox::event called without a directly constructed type");
}

int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqspinbox = dynamic_cast<const VirtualQSpinBox*>(self);
    if (vqspinbox) {
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
    qFatal("Error: Protected method QSpinBox::validate called without a directly constructed type");
}

int QSpinBox_ValueFromText(const QSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqspinbox = dynamic_cast<const VirtualQSpinBox*>(self);
    if (vqspinbox) {
        return vqspinbox->valueFromText(text_QString);
    }
    qFatal("Error: Protected method QSpinBox::valueFromText called without a directly constructed type");
}

libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val) {
    auto* vqspinbox = dynamic_cast<const VirtualQSpinBox*>(self);
    if (vqspinbox) {
        auto _ret = vqspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QSpinBox::textFromValue called without a directly constructed type");
}

void QSpinBox_Fixup(const QSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto* vqspinbox = dynamic_cast<const VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->fixup(str_QString);
    }
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
    self->setValue(static_cast<int>(val));
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
    self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_Connect_ValueChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, int) = reinterpret_cast<void (*)(QSpinBox*, int)>(slot);
    QSpinBox::connect(self,
                      static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
                      [self, slotFunc](int param1) {
                          int sigval1 = param1;
                          slotFunc(self, sigval1);
                      });
}

void QSpinBox_TextChanged(QSpinBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QSpinBox_Connect_TextChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, const char*) = reinterpret_cast<void (*)(QSpinBox*, const char*)>(slot);
    QSpinBox::connect(self,
                      static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::textChanged),
                      [self, slotFunc](const QString& param1) {
                          const auto param1_ret = param1;
                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                          QByteArray param1_b = param1_ret.toUtf8();
                          auto param1_str_len = param1_b.length();
                          const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                          memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                          ((char*)param1_str)[param1_str_len] = '\0';
                          const char* sigval1 = param1_str;
                          slotFunc(self, sigval1);
                          libqt_free(param1_str);
                      });
}

libqt_string QSpinBox_Tr2(const char* s, const char* c) {
    auto _ret = QSpinBox::tr(s, c);
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
    auto _ret = QSpinBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSpinBox_SuperMetaObject(const QSpinBox* self) {
    return (QMetaObject*)self->QSpinBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetaObject(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_metaobject_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSpinBox_SuperMetacast(QSpinBox* self, const char* param1) {
    return self->QSpinBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetacast(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_metacast_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSpinBox_SuperMetacall(QSpinBox* self, int param1, int param2, void** param3) {
    return self->QSpinBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetacall(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_metacall_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSpinBox_SuperEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->QSpinBox::event(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_event_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Event_Callback>(slot);
}

// Base class handler implementation
int QSpinBox_SuperValidate(const QSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return static_cast<int>(vqspinbox->QSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    } else
        qFatal("Error: Protected virtual method QSpinBox::validate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValidate(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_validate_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Validate_Callback>(slot);
}

// Base class handler implementation
int QSpinBox_SuperValueFromText(const QSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->QSpinBox::valueFromText(text_QString);
    } else
        qFatal("Error: Protected virtual method QSpinBox::valueFromText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValueFromText(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_valuefromtext_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ValueFromText_Callback>(slot);
}

// Base class handler implementation
libqt_string QSpinBox_SuperTextFromValue(const QSpinBox* self, int val) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        auto _ret = vqspinbox->QSpinBox::textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QSpinBox::textFromValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTextFromValue(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_textfromvalue_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_TextFromValue_Callback>(slot);
}

// Base class handler implementation
void QSpinBox_SuperFixup(const QSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->QSpinBox::fixup(str_QString);
    } else
        qFatal("Error: Protected virtual method QSpinBox::fixup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFixup(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_fixup_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Fixup_Callback>(slot);
}

// Derived class handler implementation
QSize* QSpinBox_SizeHint(const QSpinBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QSpinBox_SuperSizeHint(const QSpinBox* self) {
    return new QSize(self->QSpinBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSizeHint(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_sizehint_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QSpinBox_MinimumSizeHint(const QSpinBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QSpinBox_SuperMinimumSizeHint(const QSpinBox* self) {
    return new QSize(self->QSpinBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMinimumSizeHint(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_minimumsizehint_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSpinBox_InputMethodQuery(const QSpinBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSpinBox_SuperInputMethodQuery(const QSpinBox* self, int param1) {
    return new QVariant(self->QSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodQuery(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_inputmethodquery_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_StepBy(QSpinBox* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

// Base class handler implementation
void QSpinBox_SuperStepBy(QSpinBox* self, int steps) {
    self->QSpinBox::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepBy(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_stepby_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_StepBy_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_Clear(QSpinBox* self) {
    self->clear();
}

// Base class handler implementation
void QSpinBox_SuperClear(QSpinBox* self) {
    self->QSpinBox::clear();
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnClear(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_clear_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Clear_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ResizeEvent(QSpinBox* self, QResizeEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperResizeEvent(QSpinBox* self, QResizeEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnResizeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_resizeevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_KeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperKeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyPressEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_keypressevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_KeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperKeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyReleaseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_keyreleaseevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_WheelEvent(QSpinBox* self, QWheelEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperWheelEvent(QSpinBox* self, QWheelEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnWheelEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_wheelevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_FocusInEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperFocusInEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusInEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_focusinevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_FocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperFocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusOutEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_focusoutevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnContextMenuEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_contextmenuevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ChangeEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperChangeEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChangeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_changeevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_CloseEvent(QSpinBox* self, QCloseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperCloseEvent(QSpinBox* self, QCloseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCloseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_closeevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_HideEvent(QSpinBox* self, QHideEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperHideEvent(QSpinBox* self, QHideEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHideEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_hideevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_MousePressEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperMousePressEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMousePressEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_mousepressevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_MouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperMouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseReleaseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_mousereleaseevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_MouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperMouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_mousemoveevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_TimerEvent(QSpinBox* self, QTimerEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperTimerEvent(QSpinBox* self, QTimerEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTimerEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_timerevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_PaintEvent(QSpinBox* self, QPaintEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperPaintEvent(QSpinBox* self, QPaintEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_paintevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ShowEvent(QSpinBox* self, QShowEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperShowEvent(QSpinBox* self, QShowEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnShowEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_showevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_InitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        vqspinbox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperInitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->QSpinBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QSpinBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitStyleOption(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_initstyleoption_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QSpinBox_StepEnabled(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        return static_cast<int>(vqspinbox->stepEnabled());
    } else {
        qFatal("Error: Protected virtual method QSpinBox::stepEnabled called without a directly constructed type");
    }
}

// Base class handler implementation
int QSpinBox_SuperStepEnabled(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return static_cast<int>(vqspinbox->QSpinBox::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QSpinBox::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepEnabled(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_stepenabled_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
int QSpinBox_DevType(const QSpinBox* self) {
    return self->devType();
}

// Base class handler implementation
int QSpinBox_SuperDevType(const QSpinBox* self) {
    return self->QSpinBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDevType(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_devtype_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_SetVisible(QSpinBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSpinBox_SuperSetVisible(QSpinBox* self, bool visible) {
    self->QSpinBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSetVisible(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_setvisible_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QSpinBox_HeightForWidth(const QSpinBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSpinBox_SuperHeightForWidth(const QSpinBox* self, int param1) {
    return self->QSpinBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHeightForWidth(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_heightforwidth_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSpinBox_HasHeightForWidth(const QSpinBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSpinBox_SuperHasHeightForWidth(const QSpinBox* self) {
    return self->QSpinBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHasHeightForWidth(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_hasheightforwidth_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSpinBox_PaintEngine(const QSpinBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSpinBox_SuperPaintEngine(const QSpinBox* self) {
    return self->QSpinBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEngine(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_paintengine_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_MouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperMouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseDoubleClickEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_EnterEvent(QSpinBox* self, QEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperEnterEvent(QSpinBox* self, QEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEnterEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_enterevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_LeaveEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperLeaveEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnLeaveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_leaveevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_MoveEvent(QSpinBox* self, QMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperMoveEvent(QSpinBox* self, QMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_moveevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_TabletEvent(QSpinBox* self, QTabletEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperTabletEvent(QSpinBox* self, QTabletEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTabletEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_tabletevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ActionEvent(QSpinBox* self, QActionEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperActionEvent(QSpinBox* self, QActionEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnActionEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_actionevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_DragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperDragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragEnterEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_dragenterevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_DragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperDragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_dragmoveevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_DragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperDragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragLeaveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_dragleaveevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_DropEvent(QSpinBox* self, QDropEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperDropEvent(QSpinBox* self, QDropEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDropEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_dropevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSpinBox_NativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSpinBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSpinBox_SuperNativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->QSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSpinBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnNativeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_nativeevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSpinBox_Metric(const QSpinBox* self, int param1) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSpinBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSpinBox_SuperMetric(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->QSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSpinBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetric(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_metric_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_InitPainter(const QSpinBox* self, QPainter* painter) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        vqspinbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperInitPainter(const QSpinBox* self, QPainter* painter) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->QSpinBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSpinBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitPainter(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_initpainter_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSpinBox_Redirected(const QSpinBox* self, QPoint* offset) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        return vqspinbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSpinBox_SuperRedirected(const QSpinBox* self, QPoint* offset) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->QSpinBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSpinBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnRedirected(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_redirected_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSpinBox_SharedPainter(const QSpinBox* self) {
    auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self));
    if (vqspinbox) {
        return vqspinbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSpinBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSpinBox_SuperSharedPainter(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->QSpinBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSpinBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSharedPainter(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self)))
        vqspinbox->qspinbox_sharedpainter_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_InputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperInputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSpinBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_inputmethodevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSpinBox_FocusNextPrevChild(QSpinBox* self, bool next) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        return vqspinbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSpinBox_SuperFocusNextPrevChild(QSpinBox* self, bool next) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->QSpinBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSpinBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusNextPrevChild(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_focusnextprevchild_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSpinBox_EventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSpinBox_SuperEventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    return self->QSpinBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEventFilter(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_eventfilter_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ChildEvent(QSpinBox* self, QChildEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperChildEvent(QSpinBox* self, QChildEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChildEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_childevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_CustomEvent(QSpinBox* self, QEvent* event) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperCustomEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpinBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCustomEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_customevent_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_ConnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperConnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSpinBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnConnectNotify(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_connectnotify_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSpinBox_DisconnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self);
    if (vqspinbox) {
        vqspinbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSpinBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpinBox_SuperDisconnectNotify(QSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->QSpinBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSpinBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDisconnectNotify(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self))
        vqspinbox->qspinbox_disconnectnotify_callback = reinterpret_cast<VirtualQSpinBox::QSpinBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QSpinBox_LineEdit(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::lineEdit();
    } else
        qFatal("Error: Protected method QSpinBox::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QSpinBox_SetLineEdit(QSpinBox* self, QLineEdit* edit) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->VirtualQSpinBox::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QSpinBox::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QSpinBox_UpdateMicroFocus(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->VirtualQSpinBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSpinBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSpinBox_Create(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->VirtualQSpinBox::create();
    } else
        qFatal("Error: Protected method QSpinBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSpinBox_Destroy(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->VirtualQSpinBox::destroy();
    } else
        qFatal("Error: Protected method QSpinBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSpinBox_FocusNextChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->VirtualQSpinBox::focusNextChild();
    } else
        qFatal("Error: Protected method QSpinBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSpinBox_FocusPreviousChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->VirtualQSpinBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSpinBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSpinBox_Sender(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::sender();
    } else
        qFatal("Error: Protected method QSpinBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSpinBox_SenderSignalIndex(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSpinBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSpinBox_Receivers(const QSpinBox* self, const char* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::receivers(signal);
    } else
        qFatal("Error: Protected method QSpinBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSpinBox_IsSignalConnected(const QSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSpinBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSpinBox_GetDecodedMetricF(const QSpinBox* self, int metricA, int metricB) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->VirtualQSpinBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSpinBox::getDecodedMetricF called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDoubleSpinBox_Tr(const char* s) {
    auto _ret = QDoubleSpinBox::tr(s);
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
    auto _ret = self->prefix();
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
    auto _ret = self->suffix();
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
    auto _ret = self->cleanText();
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

int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->validate(input_QString, static_cast<int&>(*pos)));
}

double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->valueFromText(text_QString);
}

libqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val) {
    auto _ret = self->textFromValue(static_cast<double>(val));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->fixup(str_QString);
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
    self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
    self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_Connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, double) = reinterpret_cast<void (*)(QDoubleSpinBox*, double)>(slot);
    QDoubleSpinBox::connect(self,
                            static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
                            [self, slotFunc](double param1) {
                                double sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QDoubleSpinBox_Connect_TextChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, const char*) = reinterpret_cast<void (*)(QDoubleSpinBox*, const char*)>(slot);
    QDoubleSpinBox::connect(self,
                            static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::textChanged),
                            [self, slotFunc](const QString& param1) {
                                const auto param1_ret = param1;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray param1_b = param1_ret.toUtf8();
                                auto param1_str_len = param1_b.length();
                                const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                ((char*)param1_str)[param1_str_len] = '\0';
                                const char* sigval1 = param1_str;
                                slotFunc(self, sigval1);
                                libqt_free(param1_str);
                            });
}

libqt_string QDoubleSpinBox_Tr2(const char* s, const char* c) {
    auto _ret = QDoubleSpinBox::tr(s, c);
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
    auto _ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDoubleSpinBox_SuperMetaObject(const QDoubleSpinBox* self) {
    return (QMetaObject*)self->QDoubleSpinBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetaObject(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_metaobject_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDoubleSpinBox_SuperMetacast(QDoubleSpinBox* self, const char* param1) {
    return self->QDoubleSpinBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetacast(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_metacast_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDoubleSpinBox_SuperMetacall(QDoubleSpinBox* self, int param1, int param2, void** param3) {
    return self->QDoubleSpinBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetacall(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_metacall_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metacall_Callback>(slot);
}

// Base class handler implementation
int QDoubleSpinBox_SuperValidate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->QDoubleSpinBox::validate(input_QString, static_cast<int&>(*pos)));
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValidate(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_validate_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Validate_Callback>(slot);
}

// Base class handler implementation
double QDoubleSpinBox_SuperValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->QDoubleSpinBox::valueFromText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValueFromText(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_valuefromtext_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ValueFromText_Callback>(slot);
}

// Base class handler implementation
libqt_string QDoubleSpinBox_SuperTextFromValue(const QDoubleSpinBox* self, double val) {
    auto _ret = self->QDoubleSpinBox::textFromValue(static_cast<double>(val));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTextFromValue(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_textfromvalue_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TextFromValue_Callback>(slot);
}

// Base class handler implementation
void QDoubleSpinBox_SuperFixup(const QDoubleSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->QDoubleSpinBox::fixup(str_QString);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFixup(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_fixup_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Fixup_Callback>(slot);
}

// Derived class handler implementation
QSize* QDoubleSpinBox_SizeHint(const QDoubleSpinBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDoubleSpinBox_SuperSizeHint(const QDoubleSpinBox* self) {
    return new QSize(self->QDoubleSpinBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSizeHint(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_sizehint_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDoubleSpinBox_MinimumSizeHint(const QDoubleSpinBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDoubleSpinBox_SuperMinimumSizeHint(const QDoubleSpinBox* self) {
    return new QSize(self->QDoubleSpinBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMinimumSizeHint(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_minimumsizehint_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleSpinBox_Event(QDoubleSpinBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDoubleSpinBox_SuperEvent(QDoubleSpinBox* self, QEvent* event) {
    return self->QDoubleSpinBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_event_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDoubleSpinBox_InputMethodQuery(const QDoubleSpinBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDoubleSpinBox_SuperInputMethodQuery(const QDoubleSpinBox* self, int param1) {
    return new QVariant(self->QDoubleSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodQuery(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_inputmethodquery_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_StepBy(QDoubleSpinBox* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

// Base class handler implementation
void QDoubleSpinBox_SuperStepBy(QDoubleSpinBox* self, int steps) {
    self->QDoubleSpinBox::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepBy(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_stepby_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepBy_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_Clear(QDoubleSpinBox* self) {
    self->clear();
}

// Base class handler implementation
void QDoubleSpinBox_SuperClear(QDoubleSpinBox* self) {
    self->QDoubleSpinBox::clear();
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnClear(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_clear_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Clear_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnResizeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_resizeevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_KeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperKeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyPressEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_keypressevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_KeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperKeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_keyreleaseevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_WheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperWheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnWheelEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_wheelevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_FocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperFocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusInEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_focusinevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_FocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperFocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusOutEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_focusoutevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnContextMenuEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_contextmenuevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChangeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_changeevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_CloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperCloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCloseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_closeevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_HideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperHideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHideEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_hideevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_MousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperMousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMousePressEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_mousepressevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_MouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperMouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_mousereleaseevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_MouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperMouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_mousemoveevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_TimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperTimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTimerEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_timerevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_PaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperPaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_paintevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnShowEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_showevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_InitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        vqdoublespinbox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperInitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->QDoubleSpinBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitStyleOption(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_initstyleoption_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QDoubleSpinBox_StepEnabled(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::stepEnabled called without a directly constructed type");
    }
}

// Base class handler implementation
int QDoubleSpinBox_SuperStepEnabled(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return static_cast<int>(vqdoublespinbox->QDoubleSpinBox::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepEnabled(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_stepenabled_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
int QDoubleSpinBox_DevType(const QDoubleSpinBox* self) {
    return self->devType();
}

// Base class handler implementation
int QDoubleSpinBox_SuperDevType(const QDoubleSpinBox* self) {
    return self->QDoubleSpinBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDevType(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_devtype_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_SetVisible(QDoubleSpinBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDoubleSpinBox_SuperSetVisible(QDoubleSpinBox* self, bool visible) {
    self->QDoubleSpinBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSetVisible(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_setvisible_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QDoubleSpinBox_HeightForWidth(const QDoubleSpinBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDoubleSpinBox_SuperHeightForWidth(const QDoubleSpinBox* self, int param1) {
    return self->QDoubleSpinBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHeightForWidth(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_heightforwidth_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleSpinBox_HasHeightForWidth(const QDoubleSpinBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDoubleSpinBox_SuperHasHeightForWidth(const QDoubleSpinBox* self) {
    return self->QDoubleSpinBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHasHeightForWidth(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_hasheightforwidth_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDoubleSpinBox_PaintEngine(const QDoubleSpinBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDoubleSpinBox_SuperPaintEngine(const QDoubleSpinBox* self) {
    return self->QDoubleSpinBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEngine(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_paintengine_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_MouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperMouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseDoubleClickEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_EnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperEnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_enterevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_LeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperLeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_leaveevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_MoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperMoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_moveevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_TabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperTabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTabletEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_tabletevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnActionEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_actionevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_DragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperDragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_dragenterevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_DragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperDragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_dragmoveevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_DragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperDragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_dragleaveevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_DropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperDropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDropEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_dropevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleSpinBox_NativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDoubleSpinBox_SuperNativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->QDoubleSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnNativeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_nativeevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDoubleSpinBox_Metric(const QDoubleSpinBox* self, int param1) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDoubleSpinBox_SuperMetric(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->QDoubleSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetric(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_metric_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_InitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        vqdoublespinbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperInitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->QDoubleSpinBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitPainter(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_initpainter_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDoubleSpinBox_Redirected(const QDoubleSpinBox* self, QPoint* offset) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        return vqdoublespinbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDoubleSpinBox_SuperRedirected(const QDoubleSpinBox* self, QPoint* offset) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->QDoubleSpinBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnRedirected(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_redirected_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDoubleSpinBox_SharedPainter(const QDoubleSpinBox* self) {
    auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self));
    if (vqdoublespinbox) {
        return vqdoublespinbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDoubleSpinBox_SuperSharedPainter(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->QDoubleSpinBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSharedPainter(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self)))
        vqdoublespinbox->qdoublespinbox_sharedpainter_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_InputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperInputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_inputmethodevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        return vqdoublespinbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDoubleSpinBox_SuperFocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->QDoubleSpinBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusNextPrevChild(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_focusnextprevchild_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleSpinBox_EventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDoubleSpinBox_SuperEventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    return self->QDoubleSpinBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEventFilter(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_eventfilter_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChildEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_childevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_CustomEvent(QDoubleSpinBox* self, QEvent* event) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperCustomEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCustomEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_customevent_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_ConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnConnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_connectnotify_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDoubleSpinBox_DisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self);
    if (vqdoublespinbox) {
        vqdoublespinbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDoubleSpinBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleSpinBox_SuperDisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->QDoubleSpinBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDoubleSpinBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDisconnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self))
        vqdoublespinbox->qdoublespinbox_disconnectnotify_callback = reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QDoubleSpinBox_LineEdit(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::lineEdit();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDoubleSpinBox_SetLineEdit(QDoubleSpinBox* self, QLineEdit* edit) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->VirtualQDoubleSpinBox::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QDoubleSpinBox::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDoubleSpinBox_UpdateMicroFocus(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->VirtualQDoubleSpinBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDoubleSpinBox_Create(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->VirtualQDoubleSpinBox::create();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDoubleSpinBox_Destroy(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->VirtualQDoubleSpinBox::destroy();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDoubleSpinBox_FocusNextChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::focusNextChild();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDoubleSpinBox_FocusPreviousChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDoubleSpinBox_Sender(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::sender();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDoubleSpinBox_SenderSignalIndex(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDoubleSpinBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDoubleSpinBox_Receivers(const QDoubleSpinBox* self, const char* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::receivers(signal);
    } else
        qFatal("Error: Protected method QDoubleSpinBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDoubleSpinBox_IsSignalConnected(const QDoubleSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDoubleSpinBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDoubleSpinBox_GetDecodedMetricF(const QDoubleSpinBox* self, int metricA, int metricB) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->VirtualQDoubleSpinBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDoubleSpinBox::getDecodedMetricF called without a directly constructed type");
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
    delete self;
}
