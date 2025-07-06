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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractspinbox.h>
#include "libqabstractspinbox.h"
#include "libqabstractspinbox.hxx"

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent) {
    return new VirtualQAbstractSpinBox(parent);
}

QAbstractSpinBox* QAbstractSpinBox_new2() {
    return new VirtualQAbstractSpinBox();
}

QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSpinBox_Metacall(QAbstractSpinBox* self, int param1, int param2, void** param3) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSpinBox_OnMetacall(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Metacall_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSpinBox_QBaseMetacall(QAbstractSpinBox* self, int param1, int param2, void** param3) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Metacall_IsBase(true);
        return vqabstractspinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSpinBox_Tr(const char* s) {
    QString _ret = QAbstractSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self) {
    return static_cast<int>(self->buttonSymbols());
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs) {
    self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm) {
    self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self) {
    return static_cast<int>(self->correctionMode());
}

bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self) {
    return self->hasAcceptableInput();
}

libqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
    QString _ret = self->specialValueText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, const libqt_string txt) {
    QString txt_QString = QString::fromUtf8(txt.data, txt.len);
    self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self) {
    return self->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
    self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
    self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self) {
    return self->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
    self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self) {
    return self->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
    self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self) {
    return static_cast<int>(self->alignment());
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
    self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self) {
    return self->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
    self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self) {
    return self->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
    self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self) {
    return self->isGroupSeparatorShown();
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
    self->interpretText();
}

void QAbstractSpinBox_StepUp(QAbstractSpinBox* self) {
    self->stepUp();
}

void QAbstractSpinBox_StepDown(QAbstractSpinBox* self) {
    self->stepDown();
}

void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self) {
    self->selectAll();
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
    self->editingFinished();
}

void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSpinBox*) = reinterpret_cast<void (*)(QAbstractSpinBox*)>(slot);
    QAbstractSpinBox::connect(self, &QAbstractSpinBox::editingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return new QSize(vqabstractspinbox->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractSpinBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseSizeHint(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SizeHint_IsBase(true);
        return new QSize(vqabstractspinbox->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractSpinBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return new QSize(vqabstractspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractSpinBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseMinimumSizeHint(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractspinbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractSpinBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMinimumSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->event(event);
    } else {
        return self->QAbstractSpinBox::event(event);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Event_IsBase(true);
        return vqabstractspinbox->event(event);
    } else {
        return self->QAbstractSpinBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Event_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return new QVariant(vqabstractspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractSpinBox_QBaseInputMethodQuery(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractSpinBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodQuery(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QAbstractSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseValidate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QAbstractSpinBox::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnValidate(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Validate_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->fixup(input_QString);
    } else {
        self->QAbstractSpinBox::fixup(input_QString);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFixup(const QAbstractSpinBox* self, libqt_string input) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Fixup_IsBase(true);
        vqabstractspinbox->fixup(input_QString);
    } else {
        self->QAbstractSpinBox::fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFixup(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Fixup_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QAbstractSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseStepBy(QAbstractSpinBox* self, int steps) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_StepBy_IsBase(true);
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    } else {
        self->QAbstractSpinBox::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_StepBy_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->clear();
    } else {
        self->QAbstractSpinBox::clear();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseClear(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Clear_IsBase(true);
        vqabstractspinbox->clear();
    } else {
        self->QAbstractSpinBox::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Clear_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->resizeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_IsBase(true);
        vqabstractspinbox->resizeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->keyPressEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_IsBase(true);
        vqabstractspinbox->keyPressEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_IsBase(true);
        vqabstractspinbox->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->wheelEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_WheelEvent_IsBase(true);
        vqabstractspinbox->wheelEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->focusInEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_IsBase(true);
        vqabstractspinbox->focusInEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->focusOutEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_IsBase(true);
        vqabstractspinbox->focusOutEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_IsBase(true);
        vqabstractspinbox->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->changeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_IsBase(true);
        vqabstractspinbox->changeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->closeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_CloseEvent_IsBase(true);
        vqabstractspinbox->closeEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->hideEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HideEvent_IsBase(true);
        vqabstractspinbox->hideEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->mousePressEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_IsBase(true);
        vqabstractspinbox->mousePressEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_IsBase(true);
        vqabstractspinbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_IsBase(true);
        vqabstractspinbox->mouseMoveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->timerEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_TimerEvent_IsBase(true);
        vqabstractspinbox->timerEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->paintEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEvent_IsBase(true);
        vqabstractspinbox->paintEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->showEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ShowEvent_IsBase(true);
        vqabstractspinbox->showEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->initStyleOption(option);
    } else {
        ((VirtualQAbstractSpinBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_IsBase(true);
        vqabstractspinbox->initStyleOption(option);
    } else {
        ((VirtualQAbstractSpinBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitStyleOption(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQAbstractSpinBox*)self)->stepEnabled());
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQAbstractSpinBox*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepEnabled(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_DevType(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->devType();
    } else {
        return self->QAbstractSpinBox::devType();
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseDevType(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DevType_IsBase(true);
        return vqabstractspinbox->devType();
    } else {
        return self->QAbstractSpinBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDevType(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DevType_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_SetVisible(QAbstractSpinBox* self, bool visible) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setVisible(visible);
    } else {
        self->QAbstractSpinBox::setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseSetVisible(QAbstractSpinBox* self, bool visible) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SetVisible_IsBase(true);
        vqabstractspinbox->setVisible(visible);
    } else {
        self->QAbstractSpinBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetVisible(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_HeightForWidth(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseHeightForWidth(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HeightForWidth_IsBase(true);
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractSpinBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHeightForWidth(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_HasHeightForWidth(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->hasHeightForWidth();
    } else {
        return self->QAbstractSpinBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseHasHeightForWidth(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HasHeightForWidth_IsBase(true);
        return vqabstractspinbox->hasHeightForWidth();
    } else {
        return self->QAbstractSpinBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHasHeightForWidth(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractSpinBox_PaintEngine(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->paintEngine();
    } else {
        return self->QAbstractSpinBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractSpinBox_QBasePaintEngine(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEngine_IsBase(true);
        return vqabstractspinbox->paintEngine();
    } else {
        return self->QAbstractSpinBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEngine(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqabstractspinbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseDoubleClickEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->enterEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseEnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_EnterEvent_IsBase(true);
        vqabstractspinbox->enterEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->leaveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseLeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_LeaveEvent_IsBase(true);
        vqabstractspinbox->leaveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->moveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MoveEvent_IsBase(true);
        vqabstractspinbox->moveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->tabletEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseTabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_TabletEvent_IsBase(true);
        vqabstractspinbox->tabletEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTabletEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->actionEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ActionEvent_IsBase(true);
        vqabstractspinbox->actionEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnActionEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragEnterEvent_IsBase(true);
        vqabstractspinbox->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragMoveEvent_IsBase(true);
        vqabstractspinbox->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragLeaveEvent_IsBase(true);
        vqabstractspinbox->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->dropEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DropEvent_IsBase(true);
        vqabstractspinbox->dropEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDropEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseNativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_NativeEvent_IsBase(true);
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnNativeEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseMetric(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Metric_IsBase(true);
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetric(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Metric_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->initPainter(painter);
    } else {
        ((VirtualQAbstractSpinBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InitPainter_IsBase(true);
        vqabstractspinbox->initPainter(painter);
    } else {
        ((VirtualQAbstractSpinBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitPainter(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->redirected(offset);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSpinBox_QBaseRedirected(const QAbstractSpinBox* self, QPoint* offset) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Redirected_IsBase(true);
        return vqabstractspinbox->redirected(offset);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnRedirected(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Redirected_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->sharedPainter();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractSpinBox_QBaseSharedPainter(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SharedPainter_IsBase(true);
        return vqabstractspinbox->sharedPainter();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSharedPainter(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodEvent_IsBase(true);
        vqabstractspinbox->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractSpinBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextPrevChild_IsBase(true);
        return vqabstractspinbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusNextPrevChild(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_EventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->eventFilter(watched, event);
    } else {
        return self->QAbstractSpinBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseEventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_EventFilter_IsBase(true);
        return vqabstractspinbox->eventFilter(watched, event);
    } else {
        return self->QAbstractSpinBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEventFilter(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->childEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ChildEvent_IsBase(true);
        vqabstractspinbox->childEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChildEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->customEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCustomEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_CustomEvent_IsBase(true);
        vqabstractspinbox->customEvent(event);
    } else {
        ((VirtualQAbstractSpinBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCustomEvent(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSpinBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ConnectNotify_IsBase(true);
        vqabstractspinbox->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSpinBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnConnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DisconnectNotify_IsBase(true);
        vqabstractspinbox->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSpinBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDisconnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->lineEdit();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_LineEdit_IsBase(true);
        return vqabstractspinbox->lineEdit();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLineEdit(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setLineEdit(edit);
    } else {
        ((VirtualQAbstractSpinBox*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_IsBase(true);
        vqabstractspinbox->setLineEdit(edit);
    } else {
        ((VirtualQAbstractSpinBox*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetLineEdit(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->updateMicroFocus();
    } else {
        ((VirtualQAbstractSpinBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseUpdateMicroFocus(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_UpdateMicroFocus_IsBase(true);
        vqabstractspinbox->updateMicroFocus();
    } else {
        ((VirtualQAbstractSpinBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnUpdateMicroFocus(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Create(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->create();
    } else {
        ((VirtualQAbstractSpinBox*)self)->create();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCreate(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Create_IsBase(true);
        vqabstractspinbox->create();
    } else {
        ((VirtualQAbstractSpinBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCreate(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Create_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Destroy(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->destroy();
    } else {
        ((VirtualQAbstractSpinBox*)self)->destroy();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDestroy(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Destroy_IsBase(true);
        vqabstractspinbox->destroy();
    } else {
        ((VirtualQAbstractSpinBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDestroy(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Destroy_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->focusNextChild();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusNextChild(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextChild_IsBase(true);
        return vqabstractspinbox->focusNextChild();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusNextChild(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->focusPreviousChild();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusPreviousChild(QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusPreviousChild_IsBase(true);
        return vqabstractspinbox->focusPreviousChild();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusPreviousChild(QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->sender();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSpinBox_QBaseSender(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Sender_IsBase(true);
        return vqabstractspinbox->sender();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSender(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Sender_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseSenderSignalIndex(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SenderSignalIndex_IsBase(true);
        return vqabstractspinbox->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSpinBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSenderSignalIndex(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->receivers(signal);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseReceivers(const QAbstractSpinBox* self, const char* signal) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Receivers_IsBase(true);
        return vqabstractspinbox->receivers(signal);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnReceivers(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_Receivers_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseIsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_IsSignalConnected_IsBase(true);
        return vqabstractspinbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSpinBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnIsSignalConnected(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QAbstractSpinBox_GetDecodedMetricF(const QAbstractSpinBox* self, int metricA, int metricB) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        return vqabstractspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QAbstractSpinBox_QBaseGetDecodedMetricF(const QAbstractSpinBox* self, int metricA, int metricB) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_GetDecodedMetricF_IsBase(true);
        return vqabstractspinbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractSpinBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnGetDecodedMetricF(const QAbstractSpinBox* self, intptr_t slot) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
        vqabstractspinbox->setQAbstractSpinBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_GetDecodedMetricF_Callback>(slot));
    }
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
    delete self;
}
