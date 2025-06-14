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
#include <QKeySequence>
#include <QKeySequenceEdit>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qkeysequenceedit.h>
#include "libqkeysequenceedit.h"
#include "libqkeysequenceedit.hxx"

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
    return new VirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
    return new VirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(const QKeySequence* keySequence) {
    return new VirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(const QKeySequence* keySequence, QWidget* parent) {
    return new VirtualQKeySequenceEdit(*keySequence, parent);
}

QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeySequenceEdit_Metacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QKeySequenceEdit_OnMetacall(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Metacall_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QKeySequenceEdit_QBaseMetacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Metacall_IsBase(true);
        return vqkeysequenceedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QKeySequenceEdit_Tr(const char* s) {
    QString _ret = QKeySequenceEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
    return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable) {
    self->setClearButtonEnabled(enable);
}

bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self) {
    return self->isClearButtonEnabled();
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, const QKeySequence* keySequence) {
    self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
    self->clear();
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
    self->editingFinished();
}

void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*) = reinterpret_cast<void (*)(QKeySequenceEdit*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::editingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, const QKeySequence* keySequence) {
    self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*, QKeySequence*) = reinterpret_cast<void (*)(QKeySequenceEdit*, QKeySequence*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::keySequenceChanged, [self, slotFunc](const QKeySequence& keySequence) {
        const QKeySequence& keySequence_ret = keySequence;
        // Cast returned reference into pointer
        QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
    QString _ret = QKeySequenceEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
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
bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->event(param1);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->event(param1);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Event_IsBase(true);
        return vqkeysequenceedit->event(param1);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Event_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->keyPressEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyPressEvent_IsBase(true);
        vqkeysequenceedit->keyPressEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyPressEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->keyReleaseEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyReleaseEvent_IsBase(true);
        vqkeysequenceedit->keyReleaseEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->timerEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_TimerEvent_IsBase(true);
        vqkeysequenceedit->timerEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTimerEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_TimerEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->focusOutEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusOutEvent_IsBase(true);
        vqkeysequenceedit->focusOutEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusOutEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_DevType(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->devType();
    } else {
        return self->QKeySequenceEdit::devType();
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseDevType(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DevType_IsBase(true);
        return vqkeysequenceedit->devType();
    } else {
        return self->QKeySequenceEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDevType(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DevType_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_SetVisible(QKeySequenceEdit* self, bool visible) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setVisible(visible);
    } else {
        self->QKeySequenceEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseSetVisible(QKeySequenceEdit* self, bool visible) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SetVisible_IsBase(true);
        vqkeysequenceedit->setVisible(visible);
    } else {
        self->QKeySequenceEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSetVisible(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SetVisible_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QKeySequenceEdit_SizeHint(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return new QSize(vqkeysequenceedit->sizeHint());
    } else {
        return new QSize(((VirtualQKeySequenceEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QKeySequenceEdit_QBaseSizeHint(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SizeHint_IsBase(true);
        return new QSize(vqkeysequenceedit->sizeHint());
    } else {
        return new QSize(((VirtualQKeySequenceEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSizeHint(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SizeHint_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QKeySequenceEdit_MinimumSizeHint(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return new QSize(vqkeysequenceedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQKeySequenceEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QKeySequenceEdit_QBaseMinimumSizeHint(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqkeysequenceedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQKeySequenceEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMinimumSizeHint(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_HeightForWidth(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QKeySequenceEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseHeightForWidth(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HeightForWidth_IsBase(true);
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QKeySequenceEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHeightForWidth(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_HasHeightForWidth(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->hasHeightForWidth();
    } else {
        return self->QKeySequenceEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseHasHeightForWidth(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HasHeightForWidth_IsBase(true);
        return vqkeysequenceedit->hasHeightForWidth();
    } else {
        return self->QKeySequenceEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHasHeightForWidth(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QKeySequenceEdit_PaintEngine(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->paintEngine();
    } else {
        return self->QKeySequenceEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QKeySequenceEdit_QBasePaintEngine(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEngine_IsBase(true);
        return vqkeysequenceedit->paintEngine();
    } else {
        return self->QKeySequenceEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEngine(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEngine_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->mousePressEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MousePressEvent_IsBase(true);
        vqkeysequenceedit->mousePressEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMousePressEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseReleaseEvent_IsBase(true);
        vqkeysequenceedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseDoubleClickEvent_IsBase(true);
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseDoubleClickEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->mouseMoveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseMoveEvent_IsBase(true);
        vqkeysequenceedit->mouseMoveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->wheelEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseWheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_WheelEvent_IsBase(true);
        vqkeysequenceedit->wheelEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnWheelEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_WheelEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->focusInEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusInEvent_IsBase(true);
        vqkeysequenceedit->focusInEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusInEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->enterEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseEnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_EnterEvent_IsBase(true);
        vqkeysequenceedit->enterEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_EnterEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->leaveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseLeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_LeaveEvent_IsBase(true);
        vqkeysequenceedit->leaveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->paintEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBasePaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEvent_IsBase(true);
        vqkeysequenceedit->paintEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->moveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MoveEvent_IsBase(true);
        vqkeysequenceedit->moveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_MoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->resizeEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ResizeEvent_IsBase(true);
        vqkeysequenceedit->resizeEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnResizeEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->closeEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_CloseEvent_IsBase(true);
        vqkeysequenceedit->closeEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCloseEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_CloseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->contextMenuEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ContextMenuEvent_IsBase(true);
        vqkeysequenceedit->contextMenuEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnContextMenuEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->tabletEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseTabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_TabletEvent_IsBase(true);
        vqkeysequenceedit->tabletEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTabletEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_TabletEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->actionEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ActionEvent_IsBase(true);
        vqkeysequenceedit->actionEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnActionEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ActionEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->dragEnterEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragEnterEvent_IsBase(true);
        vqkeysequenceedit->dragEnterEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->dragMoveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragMoveEvent_IsBase(true);
        vqkeysequenceedit->dragMoveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->dragLeaveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragLeaveEvent_IsBase(true);
        vqkeysequenceedit->dragLeaveEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->dropEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DropEvent_IsBase(true);
        vqkeysequenceedit->dropEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDropEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DropEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->showEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ShowEvent_IsBase(true);
        vqkeysequenceedit->showEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnShowEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ShowEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->hideEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseHideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HideEvent_IsBase(true);
        vqkeysequenceedit->hideEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHideEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_HideEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQKeySequenceEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_NativeEvent_IsBase(true);
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQKeySequenceEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnNativeEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_NativeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->changeEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ChangeEvent_IsBase(true);
        vqkeysequenceedit->changeEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChangeEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQKeySequenceEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseMetric(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Metric_IsBase(true);
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQKeySequenceEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetric(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Metric_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->initPainter(painter);
    } else {
        ((VirtualQKeySequenceEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseInitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InitPainter_IsBase(true);
        vqkeysequenceedit->initPainter(painter);
    } else {
        ((VirtualQKeySequenceEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInitPainter(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InitPainter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->redirected(offset);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QKeySequenceEdit_QBaseRedirected(const QKeySequenceEdit* self, QPoint* offset) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Redirected_IsBase(true);
        return vqkeysequenceedit->redirected(offset);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnRedirected(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Redirected_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->sharedPainter();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QKeySequenceEdit_QBaseSharedPainter(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SharedPainter_IsBase(true);
        return vqkeysequenceedit->sharedPainter();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSharedPainter(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SharedPainter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->inputMethodEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodEvent_IsBase(true);
        vqkeysequenceedit->inputMethodEvent(param1);
    } else {
        ((VirtualQKeySequenceEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QKeySequenceEdit_InputMethodQuery(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return new QVariant(vqkeysequenceedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQKeySequenceEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QKeySequenceEdit_QBaseInputMethodQuery(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqkeysequenceedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQKeySequenceEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodQuery(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextPrevChild_IsBase(true);
        return vqkeysequenceedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusNextPrevChild(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_EventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->eventFilter(watched, event);
    } else {
        return self->QKeySequenceEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseEventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_EventFilter_IsBase(true);
        return vqkeysequenceedit->eventFilter(watched, event);
    } else {
        return self->QKeySequenceEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEventFilter(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_EventFilter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->childEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ChildEvent_IsBase(true);
        vqkeysequenceedit->childEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChildEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ChildEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->customEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCustomEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_CustomEvent_IsBase(true);
        vqkeysequenceedit->customEvent(event);
    } else {
        ((VirtualQKeySequenceEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCustomEvent(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_CustomEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->connectNotify(*signal);
    } else {
        ((VirtualQKeySequenceEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ConnectNotify_IsBase(true);
        vqkeysequenceedit->connectNotify(*signal);
    } else {
        ((VirtualQKeySequenceEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnConnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->disconnectNotify(*signal);
    } else {
        ((VirtualQKeySequenceEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DisconnectNotify_IsBase(true);
        vqkeysequenceedit->disconnectNotify(*signal);
    } else {
        ((VirtualQKeySequenceEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDisconnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->updateMicroFocus();
    } else {
        ((VirtualQKeySequenceEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseUpdateMicroFocus(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_UpdateMicroFocus_IsBase(true);
        vqkeysequenceedit->updateMicroFocus();
    } else {
        ((VirtualQKeySequenceEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnUpdateMicroFocus(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_Create(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->create();
    } else {
        ((VirtualQKeySequenceEdit*)self)->create();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCreate(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Create_IsBase(true);
        vqkeysequenceedit->create();
    } else {
        ((VirtualQKeySequenceEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCreate(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Create_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_Destroy(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->destroy();
    } else {
        ((VirtualQKeySequenceEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDestroy(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Destroy_IsBase(true);
        vqkeysequenceedit->destroy();
    } else {
        ((VirtualQKeySequenceEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDestroy(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Destroy_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->focusNextChild();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusNextChild(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextChild_IsBase(true);
        return vqkeysequenceedit->focusNextChild();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusNextChild(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->focusPreviousChild();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusPreviousChild(QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusPreviousChild_IsBase(true);
        return vqkeysequenceedit->focusPreviousChild();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusPreviousChild(QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->sender();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QKeySequenceEdit_QBaseSender(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Sender_IsBase(true);
        return vqkeysequenceedit->sender();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSender(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Sender_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->senderSignalIndex();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseSenderSignalIndex(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SenderSignalIndex_IsBase(true);
        return vqkeysequenceedit->senderSignalIndex();
    } else {
        return ((VirtualQKeySequenceEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSenderSignalIndex(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->receivers(signal);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseReceivers(const QKeySequenceEdit* self, const char* signal) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Receivers_IsBase(true);
        return vqkeysequenceedit->receivers(signal);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnReceivers(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_Receivers_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        return vqkeysequenceedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseIsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_IsSignalConnected_IsBase(true);
        return vqkeysequenceedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeySequenceEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnIsSignalConnected(const QKeySequenceEdit* self, intptr_t slot) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit && vqkeysequenceedit->isVirtualQKeySequenceEdit) {
        vqkeysequenceedit->setQKeySequenceEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_IsSignalConnected_Callback>(slot));
    }
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
    delete self;
}
