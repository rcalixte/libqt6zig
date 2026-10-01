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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractSpinBox_Tr(const char* s) {
    auto _ret = QAbstractSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
    auto _ret = self->specialValueText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
    return new QSize(self->sizeHint());
}

QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
    return new QSize(self->minimumSizeHint());
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
    self->interpretText();
}

bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
    return self->event(event);
}

QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->validate(input_QString, static_cast<int&>(*pos)));
}

void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->fixup(input_QString);
}

void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
    self->stepBy(static_cast<int>(steps));
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

void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
    self->clear();
}

void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->resizeEvent(event);
    }
}

void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->keyPressEvent(event);
    }
}

void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->keyReleaseEvent(event);
    }
}

void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->wheelEvent(event);
    }
}

void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->focusInEvent(event);
    }
}

void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->focusOutEvent(event);
    }
}

void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->contextMenuEvent(event);
    }
}

void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->changeEvent(event);
    }
}

void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->closeEvent(event);
    }
}

void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->hideEvent(event);
    }
}

void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->mousePressEvent(event);
    }
}

void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->mouseReleaseEvent(event);
    }
}

void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->mouseMoveEvent(event);
    }
}

void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->timerEvent(event);
    }
}

void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->paintEvent(event);
    }
}

void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->showEvent(event);
    }
}

void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->initStyleOption(option);
    }
}

int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    }
    qFatal("Error: Protected method QAbstractSpinBox::stepEnabled called without a directly constructed type");
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
    self->editingFinished();
}

void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSpinBox*) = reinterpret_cast<void (*)(QAbstractSpinBox*)>(slot);
    QAbstractSpinBox::connect(self,
                              static_cast<void (QAbstractSpinBox::*)()>(&QAbstractSpinBox::editingFinished),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractSpinBox_SuperMetaObject(const QAbstractSpinBox* self) {
    return (QMetaObject*)self->QAbstractSpinBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetaObject(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_metaobject_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractSpinBox_SuperMetacast(QAbstractSpinBox* self, const char* param1) {
    return self->QAbstractSpinBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetacast(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_metacast_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractSpinBox_SuperMetacall(QAbstractSpinBox* self, int param1, int param2, void** param3) {
    return self->QAbstractSpinBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetacall(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_metacall_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractSpinBox_SuperSizeHint(const QAbstractSpinBox* self) {
    return new QSize(self->QAbstractSpinBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSizeHint(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_sizehint_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractSpinBox_SuperMinimumSizeHint(const QAbstractSpinBox* self) {
    return new QSize(self->QAbstractSpinBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMinimumSizeHint(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSpinBox_SuperEvent(QAbstractSpinBox* self, QEvent* event) {
    return self->QAbstractSpinBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_event_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Event_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractSpinBox_SuperInputMethodQuery(const QAbstractSpinBox* self, int param1) {
    return new QVariant(self->QAbstractSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodQuery(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
int QAbstractSpinBox_SuperValidate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->QAbstractSpinBox::validate(input_QString, static_cast<int&>(*pos)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnValidate(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_validate_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Validate_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperFixup(const QAbstractSpinBox* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->QAbstractSpinBox::fixup(input_QString);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFixup(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_fixup_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Fixup_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperStepBy(QAbstractSpinBox* self, int steps) {
    self->QAbstractSpinBox::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_stepby_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepBy_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperClear(QAbstractSpinBox* self) {
    self->QAbstractSpinBox::clear();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_clear_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Clear_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_resizeevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_keypressevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperWheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_wheelevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_focusinevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_focusoutevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_changeevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperCloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_closeevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperHideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_hideevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_mousepressevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperTimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_timerevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperPaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_paintevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_showevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSpinBox_SuperInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->QAbstractSpinBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitStyleOption(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_initstyleoption_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
int QAbstractSpinBox_SuperStepEnabled(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return static_cast<int>(vqabstractspinbox->QAbstractSpinBox::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepEnabled(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_stepenabled_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSpinBox_DevType(const QAbstractSpinBox* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractSpinBox_SuperDevType(const QAbstractSpinBox* self) {
    return self->QAbstractSpinBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDevType(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_devtype_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_SetVisible(QAbstractSpinBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractSpinBox_SuperSetVisible(QAbstractSpinBox* self, bool visible) {
    self->QAbstractSpinBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetVisible(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_setvisible_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSpinBox_HeightForWidth(const QAbstractSpinBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractSpinBox_SuperHeightForWidth(const QAbstractSpinBox* self, int param1) {
    return self->QAbstractSpinBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHeightForWidth(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_heightforwidth_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSpinBox_HasHeightForWidth(const QAbstractSpinBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractSpinBox_SuperHasHeightForWidth(const QAbstractSpinBox* self) {
    return self->QAbstractSpinBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHasHeightForWidth(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractSpinBox_PaintEngine(const QAbstractSpinBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractSpinBox_SuperPaintEngine(const QAbstractSpinBox* self) {
    return self->QAbstractSpinBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEngine(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_paintengine_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseDoubleClickEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperEnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_enterevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperLeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_leaveevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperMoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_moveevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperTabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTabletEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_tabletevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnActionEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_actionevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_dragenterevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperDropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDropEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_dropevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractSpinBox_SuperNativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->QAbstractSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnNativeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_nativeevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox) {
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractSpinBox_SuperMetric(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->QAbstractSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetric(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_metric_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox) {
        vqabstractspinbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperInitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->QAbstractSpinBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitPainter(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_initpainter_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox) {
        return vqabstractspinbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSpinBox_SuperRedirected(const QAbstractSpinBox* self, QPoint* offset) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->QAbstractSpinBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnRedirected(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_redirected_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self) {
    auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self));
    if (vqabstractspinbox) {
        return vqabstractspinbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractSpinBox_SuperSharedPainter(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->QAbstractSpinBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSharedPainter(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self)))
        vqabstractspinbox->qabstractspinbox_sharedpainter_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        return vqabstractspinbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractSpinBox_SuperFocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->QAbstractSpinBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusNextPrevChild(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSpinBox_EventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractSpinBox_SuperEventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    return self->QAbstractSpinBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEventFilter(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_eventfilter_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChildEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_childevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperCustomEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCustomEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_customevent_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnConnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_connectnotify_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
    if (vqabstractspinbox) {
        vqabstractspinbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSpinBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSpinBox_SuperDisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->QAbstractSpinBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSpinBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDisconnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self))
        vqabstractspinbox->qabstractspinbox_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::lineEdit();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->VirtualQAbstractSpinBox::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QAbstractSpinBox::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->VirtualQAbstractSpinBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSpinBox_Create(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->VirtualQAbstractSpinBox::create();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSpinBox_Destroy(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->VirtualQAbstractSpinBox::destroy();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::sender();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractSpinBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractSpinBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractSpinBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractSpinBox_GetDecodedMetricF(const QAbstractSpinBox* self, int metricA, int metricB) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->VirtualQAbstractSpinBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractSpinBox::getDecodedMetricF called without a directly constructed type");
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
    delete self;
}
