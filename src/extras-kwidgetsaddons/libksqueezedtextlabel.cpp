#include <KSqueezedTextLabel>
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLabel>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ksqueezedtextlabel.h>
#include "libksqueezedtextlabel.h"
#include "libksqueezedtextlabel.hxx"

KSqueezedTextLabel* KSqueezedTextLabel_new(QWidget* parent) {
    return new VirtualKSqueezedTextLabel(parent);
}

KSqueezedTextLabel* KSqueezedTextLabel_new2() {
    return new VirtualKSqueezedTextLabel();
}

KSqueezedTextLabel* KSqueezedTextLabel_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKSqueezedTextLabel(text_QString);
}

KSqueezedTextLabel* KSqueezedTextLabel_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKSqueezedTextLabel(text_QString, parent);
}

QMetaObject* KSqueezedTextLabel_MetaObject(const KSqueezedTextLabel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSqueezedTextLabel_Metacast(KSqueezedTextLabel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSqueezedTextLabel_Metacall(KSqueezedTextLabel* self, int param1, int param2, void** param3) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSqueezedTextLabel_OnMetacall(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Metacall_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KSqueezedTextLabel_QBaseMetacall(KSqueezedTextLabel* self, int param1, int param2, void** param3) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Metacall_IsBase(true);
        return vksqueezedtextlabel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSqueezedTextLabel_Tr(const char* s) {
    QString _ret = KSqueezedTextLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSqueezedTextLabel_SetIndent(KSqueezedTextLabel* self, int indent) {
    self->setIndent(static_cast<int>(indent));
}

void KSqueezedTextLabel_SetMargin(KSqueezedTextLabel* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

int KSqueezedTextLabel_TextElideMode(const KSqueezedTextLabel* self) {
    return static_cast<int>(self->textElideMode());
}

void KSqueezedTextLabel_SetTextElideMode(KSqueezedTextLabel* self, int mode) {
    self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

libqt_string KSqueezedTextLabel_FullText(const KSqueezedTextLabel* self) {
    QString _ret = self->fullText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSqueezedTextLabel_IsSqueezed(const KSqueezedTextLabel* self) {
    return self->isSqueezed();
}

QRect* KSqueezedTextLabel_ContentsRect(const KSqueezedTextLabel* self) {
    return new QRect(self->contentsRect());
}

void KSqueezedTextLabel_SetText(KSqueezedTextLabel* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KSqueezedTextLabel_Clear(KSqueezedTextLabel* self) {
    self->clear();
}

libqt_string KSqueezedTextLabel_Tr2(const char* s, const char* c) {
    QString _ret = KSqueezedTextLabel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSqueezedTextLabel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSqueezedTextLabel::tr(s, c, static_cast<int>(n));
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
QSize* KSqueezedTextLabel_MinimumSizeHint(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return new QSize(vksqueezedtextlabel->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSqueezedTextLabel*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSqueezedTextLabel_QBaseMinimumSizeHint(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MinimumSizeHint_IsBase(true);
        return new QSize(vksqueezedtextlabel->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSqueezedTextLabel*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMinimumSizeHint(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSqueezedTextLabel_SizeHint(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return new QSize(vksqueezedtextlabel->sizeHint());
    } else {
        return new QSize(((VirtualKSqueezedTextLabel*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KSqueezedTextLabel_QBaseSizeHint(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SizeHint_IsBase(true);
        return new QSize(vksqueezedtextlabel->sizeHint());
    } else {
        return new QSize(((VirtualKSqueezedTextLabel*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSizeHint(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SizeHint_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_SetAlignment(KSqueezedTextLabel* self, int alignment) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
    } else {
        self->KSqueezedTextLabel::setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseSetAlignment(KSqueezedTextLabel* self, int alignment) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SetAlignment_IsBase(true);
        vksqueezedtextlabel->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
    } else {
        self->KSqueezedTextLabel::setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSetAlignment(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SetAlignment_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SetAlignment_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_MouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->mouseReleaseEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseMouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseReleaseEvent_IsBase(true);
        vksqueezedtextlabel->mouseReleaseEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseReleaseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->resizeEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ResizeEvent_IsBase(true);
        vksqueezedtextlabel->resizeEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnResizeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ResizeEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->contextMenuEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ContextMenuEvent_IsBase(true);
        vksqueezedtextlabel->contextMenuEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnContextMenuEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSqueezedTextLabel_HeightForWidth(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSqueezedTextLabel::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSqueezedTextLabel_QBaseHeightForWidth(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HeightForWidth_IsBase(true);
        return vksqueezedtextlabel->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSqueezedTextLabel::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHeightForWidth(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HeightForWidth_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_Event(KSqueezedTextLabel* self, QEvent* e) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->event(e);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->event(e);
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseEvent(KSqueezedTextLabel* self, QEvent* e) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Event_IsBase(true);
        return vksqueezedtextlabel->event(e);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Event_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_KeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->keyPressEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseKeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_KeyPressEvent_IsBase(true);
        vksqueezedtextlabel->keyPressEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnKeyPressEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_KeyPressEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_PaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->paintEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBasePaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_PaintEvent_IsBase(true);
        vksqueezedtextlabel->paintEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnPaintEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_PaintEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ChangeEvent(KSqueezedTextLabel* self, QEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->changeEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseChangeEvent(KSqueezedTextLabel* self, QEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ChangeEvent_IsBase(true);
        vksqueezedtextlabel->changeEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnChangeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ChangeEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_MousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->mousePressEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mousePressEvent(ev);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseMousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MousePressEvent_IsBase(true);
        vksqueezedtextlabel->mousePressEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMousePressEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MousePressEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_MouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->mouseMoveEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseMouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseMoveEvent_IsBase(true);
        vksqueezedtextlabel->mouseMoveEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_FocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->focusInEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->focusInEvent(ev);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseFocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusInEvent_IsBase(true);
        vksqueezedtextlabel->focusInEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->focusInEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusInEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusInEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_FocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->focusOutEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->focusOutEvent(ev);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseFocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusOutEvent_IsBase(true);
        vksqueezedtextlabel->focusOutEvent(ev);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusOutEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusOutEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_FocusNextPrevChild(KSqueezedTextLabel* self, bool next) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->focusNextPrevChild(next);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseFocusNextPrevChild(KSqueezedTextLabel* self, bool next) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusNextPrevChild_IsBase(true);
        return vksqueezedtextlabel->focusNextPrevChild(next);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusNextPrevChild(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_InitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->initStyleOption(option);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseInitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InitStyleOption_IsBase(true);
        vksqueezedtextlabel->initStyleOption(option);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInitStyleOption(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InitStyleOption_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KSqueezedTextLabel_DevType(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->devType();
    } else {
        return self->KSqueezedTextLabel::devType();
    }
}

// Base class handler implementation
int KSqueezedTextLabel_QBaseDevType(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DevType_IsBase(true);
        return vksqueezedtextlabel->devType();
    } else {
        return self->KSqueezedTextLabel::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDevType(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DevType_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_SetVisible(KSqueezedTextLabel* self, bool visible) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setVisible(visible);
    } else {
        self->KSqueezedTextLabel::setVisible(visible);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseSetVisible(KSqueezedTextLabel* self, bool visible) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SetVisible_IsBase(true);
        vksqueezedtextlabel->setVisible(visible);
    } else {
        self->KSqueezedTextLabel::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSetVisible(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SetVisible_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_HasHeightForWidth(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->hasHeightForWidth();
    } else {
        return self->KSqueezedTextLabel::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseHasHeightForWidth(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HasHeightForWidth_IsBase(true);
        return vksqueezedtextlabel->hasHeightForWidth();
    } else {
        return self->KSqueezedTextLabel::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHasHeightForWidth(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSqueezedTextLabel_PaintEngine(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->paintEngine();
    } else {
        return self->KSqueezedTextLabel::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSqueezedTextLabel_QBasePaintEngine(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_PaintEngine_IsBase(true);
        return vksqueezedtextlabel->paintEngine();
    } else {
        return self->KSqueezedTextLabel::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnPaintEngine(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_PaintEngine_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_MouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseMouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseDoubleClickEvent_IsBase(true);
        vksqueezedtextlabel->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseDoubleClickEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_WheelEvent(KSqueezedTextLabel* self, QWheelEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->wheelEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseWheelEvent(KSqueezedTextLabel* self, QWheelEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_WheelEvent_IsBase(true);
        vksqueezedtextlabel->wheelEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnWheelEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_WheelEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_KeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->keyReleaseEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseKeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_KeyReleaseEvent_IsBase(true);
        vksqueezedtextlabel->keyReleaseEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnKeyReleaseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_EnterEvent(KSqueezedTextLabel* self, QEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->enterEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseEnterEvent(KSqueezedTextLabel* self, QEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_EnterEvent_IsBase(true);
        vksqueezedtextlabel->enterEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEnterEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_EnterEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_LeaveEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->leaveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseLeaveEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_LeaveEvent_IsBase(true);
        vksqueezedtextlabel->leaveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnLeaveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_LeaveEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_MoveEvent(KSqueezedTextLabel* self, QMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->moveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseMoveEvent(KSqueezedTextLabel* self, QMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MoveEvent_IsBase(true);
        vksqueezedtextlabel->moveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_MoveEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_CloseEvent(KSqueezedTextLabel* self, QCloseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->closeEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseCloseEvent(KSqueezedTextLabel* self, QCloseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_CloseEvent_IsBase(true);
        vksqueezedtextlabel->closeEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnCloseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_CloseEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_TabletEvent(KSqueezedTextLabel* self, QTabletEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->tabletEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseTabletEvent(KSqueezedTextLabel* self, QTabletEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_TabletEvent_IsBase(true);
        vksqueezedtextlabel->tabletEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnTabletEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_TabletEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ActionEvent(KSqueezedTextLabel* self, QActionEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->actionEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseActionEvent(KSqueezedTextLabel* self, QActionEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ActionEvent_IsBase(true);
        vksqueezedtextlabel->actionEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnActionEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ActionEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->dragEnterEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragEnterEvent_IsBase(true);
        vksqueezedtextlabel->dragEnterEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragEnterEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragEnterEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->dragMoveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragMoveEvent_IsBase(true);
        vksqueezedtextlabel->dragMoveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragMoveEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->dragLeaveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragLeaveEvent_IsBase(true);
        vksqueezedtextlabel->dragLeaveEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragLeaveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DropEvent(KSqueezedTextLabel* self, QDropEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->dropEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDropEvent(KSqueezedTextLabel* self, QDropEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DropEvent_IsBase(true);
        vksqueezedtextlabel->dropEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDropEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DropEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ShowEvent(KSqueezedTextLabel* self, QShowEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->showEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseShowEvent(KSqueezedTextLabel* self, QShowEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ShowEvent_IsBase(true);
        vksqueezedtextlabel->showEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnShowEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ShowEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_HideEvent(KSqueezedTextLabel* self, QHideEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->hideEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseHideEvent(KSqueezedTextLabel* self, QHideEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HideEvent_IsBase(true);
        vksqueezedtextlabel->hideEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHideEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_HideEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_NativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseNativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_NativeEvent_IsBase(true);
        return vksqueezedtextlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnNativeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_NativeEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSqueezedTextLabel_Metric(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSqueezedTextLabel_QBaseMetric(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Metric_IsBase(true);
        return vksqueezedtextlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMetric(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Metric_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_InitPainter(const KSqueezedTextLabel* self, QPainter* painter) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->initPainter(painter);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseInitPainter(const KSqueezedTextLabel* self, QPainter* painter) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InitPainter_IsBase(true);
        vksqueezedtextlabel->initPainter(painter);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInitPainter(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InitPainter_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSqueezedTextLabel_Redirected(const KSqueezedTextLabel* self, QPoint* offset) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->redirected(offset);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSqueezedTextLabel_QBaseRedirected(const KSqueezedTextLabel* self, QPoint* offset) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Redirected_IsBase(true);
        return vksqueezedtextlabel->redirected(offset);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnRedirected(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Redirected_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSqueezedTextLabel_SharedPainter(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->sharedPainter();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSqueezedTextLabel_QBaseSharedPainter(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SharedPainter_IsBase(true);
        return vksqueezedtextlabel->sharedPainter();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSharedPainter(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SharedPainter_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_InputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->inputMethodEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseInputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InputMethodEvent_IsBase(true);
        vksqueezedtextlabel->inputMethodEvent(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInputMethodEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InputMethodEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSqueezedTextLabel_InputMethodQuery(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return new QVariant(vksqueezedtextlabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSqueezedTextLabel*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSqueezedTextLabel_QBaseInputMethodQuery(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InputMethodQuery_IsBase(true);
        return new QVariant(vksqueezedtextlabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSqueezedTextLabel*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInputMethodQuery(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_InputMethodQuery_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_EventFilter(KSqueezedTextLabel* self, QObject* watched, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->eventFilter(watched, event);
    } else {
        return self->KSqueezedTextLabel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseEventFilter(KSqueezedTextLabel* self, QObject* watched, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_EventFilter_IsBase(true);
        return vksqueezedtextlabel->eventFilter(watched, event);
    } else {
        return self->KSqueezedTextLabel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEventFilter(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_EventFilter_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_TimerEvent(KSqueezedTextLabel* self, QTimerEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->timerEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseTimerEvent(KSqueezedTextLabel* self, QTimerEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_TimerEvent_IsBase(true);
        vksqueezedtextlabel->timerEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnTimerEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_TimerEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ChildEvent(KSqueezedTextLabel* self, QChildEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->childEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseChildEvent(KSqueezedTextLabel* self, QChildEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ChildEvent_IsBase(true);
        vksqueezedtextlabel->childEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnChildEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ChildEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_CustomEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->customEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseCustomEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_CustomEvent_IsBase(true);
        vksqueezedtextlabel->customEvent(event);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnCustomEvent(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_CustomEvent_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_ConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->connectNotify(*signal);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ConnectNotify_IsBase(true);
        vksqueezedtextlabel->connectNotify(*signal);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnConnectNotify(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_ConnectNotify_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->disconnectNotify(*signal);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DisconnectNotify_IsBase(true);
        vksqueezedtextlabel->disconnectNotify(*signal);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDisconnectNotify(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DisconnectNotify_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_SqueezeTextToLabel(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->squeezeTextToLabel();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->squeezeTextToLabel();
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseSqueezeTextToLabel(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SqueezeTextToLabel_IsBase(true);
        vksqueezedtextlabel->squeezeTextToLabel();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->squeezeTextToLabel();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSqueezeTextToLabel(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SqueezeTextToLabel_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SqueezeTextToLabel_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_DrawFrame(KSqueezedTextLabel* self, QPainter* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->drawFrame(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDrawFrame(KSqueezedTextLabel* self, QPainter* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DrawFrame_IsBase(true);
        vksqueezedtextlabel->drawFrame(param1);
    } else {
        ((VirtualKSqueezedTextLabel*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDrawFrame(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_DrawFrame_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_UpdateMicroFocus(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->updateMicroFocus();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseUpdateMicroFocus(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_UpdateMicroFocus_IsBase(true);
        vksqueezedtextlabel->updateMicroFocus();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnUpdateMicroFocus(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_Create(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->create();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->create();
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseCreate(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Create_IsBase(true);
        vksqueezedtextlabel->create();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnCreate(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Create_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSqueezedTextLabel_Destroy(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->destroy();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->destroy();
    }
}

// Base class handler implementation
void KSqueezedTextLabel_QBaseDestroy(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Destroy_IsBase(true);
        vksqueezedtextlabel->destroy();
    } else {
        ((VirtualKSqueezedTextLabel*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDestroy(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Destroy_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_FocusNextChild(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->focusNextChild();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseFocusNextChild(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusNextChild_IsBase(true);
        return vksqueezedtextlabel->focusNextChild();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusNextChild(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusNextChild_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_FocusPreviousChild(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->focusPreviousChild();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseFocusPreviousChild(KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusPreviousChild_IsBase(true);
        return vksqueezedtextlabel->focusPreviousChild();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusPreviousChild(KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSqueezedTextLabel_Sender(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->sender();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSqueezedTextLabel_QBaseSender(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Sender_IsBase(true);
        return vksqueezedtextlabel->sender();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSender(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Sender_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSqueezedTextLabel_SenderSignalIndex(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->senderSignalIndex();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSqueezedTextLabel_QBaseSenderSignalIndex(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SenderSignalIndex_IsBase(true);
        return vksqueezedtextlabel->senderSignalIndex();
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSenderSignalIndex(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSqueezedTextLabel_Receivers(const KSqueezedTextLabel* self, const char* signal) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->receivers(signal);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSqueezedTextLabel_QBaseReceivers(const KSqueezedTextLabel* self, const char* signal) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Receivers_IsBase(true);
        return vksqueezedtextlabel->receivers(signal);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnReceivers(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_Receivers_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSqueezedTextLabel_IsSignalConnected(const KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->isSignalConnected(*signal);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_QBaseIsSignalConnected(const KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_IsSignalConnected_IsBase(true);
        return vksqueezedtextlabel->isSignalConnected(*signal);
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnIsSignalConnected(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_IsSignalConnected_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSqueezedTextLabel_GetDecodedMetricF(const KSqueezedTextLabel* self, int metricA, int metricB) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        return vksqueezedtextlabel->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSqueezedTextLabel_QBaseGetDecodedMetricF(const KSqueezedTextLabel* self, int metricA, int metricB) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_GetDecodedMetricF_IsBase(true);
        return vksqueezedtextlabel->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSqueezedTextLabel*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnGetDecodedMetricF(const KSqueezedTextLabel* self, intptr_t slot) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel && vksqueezedtextlabel->isVirtualKSqueezedTextLabel) {
        vksqueezedtextlabel->setKSqueezedTextLabel_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_GetDecodedMetricF_Callback>(slot));
    }
}

void KSqueezedTextLabel_Delete(KSqueezedTextLabel* self) {
    delete self;
}
