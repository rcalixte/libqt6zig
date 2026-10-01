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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSqueezedTextLabel_Tr(const char* s) {
    auto _ret = KSqueezedTextLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KSqueezedTextLabel_MinimumSizeHint(const KSqueezedTextLabel* self) {
    return new QSize(self->minimumSizeHint());
}

QSize* KSqueezedTextLabel_SizeHint(const KSqueezedTextLabel* self) {
    return new QSize(self->sizeHint());
}

void KSqueezedTextLabel_SetIndent(KSqueezedTextLabel* self, int indent) {
    self->setIndent(static_cast<int>(indent));
}

void KSqueezedTextLabel_SetMargin(KSqueezedTextLabel* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

void KSqueezedTextLabel_SetAlignment(KSqueezedTextLabel* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int KSqueezedTextLabel_TextElideMode(const KSqueezedTextLabel* self) {
    return static_cast<int>(self->textElideMode());
}

void KSqueezedTextLabel_SetTextElideMode(KSqueezedTextLabel* self, int mode) {
    self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

libqt_string KSqueezedTextLabel_FullText(const KSqueezedTextLabel* self) {
    auto _ret = self->fullText();
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

void KSqueezedTextLabel_MouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->mouseReleaseEvent(param1);
    }
}

void KSqueezedTextLabel_ResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->resizeEvent(param1);
    }
}

void KSqueezedTextLabel_ContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->contextMenuEvent(param1);
    }
}

libqt_string KSqueezedTextLabel_Tr2(const char* s, const char* c) {
    auto _ret = KSqueezedTextLabel::tr(s, c);
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
    auto _ret = KSqueezedTextLabel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSqueezedTextLabel_SuperMetaObject(const KSqueezedTextLabel* self) {
    return (QMetaObject*)self->KSqueezedTextLabel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMetaObject(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_metaobject_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSqueezedTextLabel_SuperMetacast(KSqueezedTextLabel* self, const char* param1) {
    return self->KSqueezedTextLabel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMetacast(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_metacast_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSqueezedTextLabel_SuperMetacall(KSqueezedTextLabel* self, int param1, int param2, void** param3) {
    return self->KSqueezedTextLabel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMetacall(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_metacall_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KSqueezedTextLabel_SuperMinimumSizeHint(const KSqueezedTextLabel* self) {
    return new QSize(self->KSqueezedTextLabel::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMinimumSizeHint(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_minimumsizehint_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KSqueezedTextLabel_SuperSizeHint(const KSqueezedTextLabel* self) {
    return new QSize(self->KSqueezedTextLabel::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSizeHint(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_sizehint_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KSqueezedTextLabel_SuperSetAlignment(KSqueezedTextLabel* self, int alignment) {
    self->KSqueezedTextLabel::setAlignment(static_cast<Qt::Alignment>(alignment));
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSetAlignment(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_setalignment_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SetAlignment_Callback>(slot);
}

// Base class handler implementation
void KSqueezedTextLabel_SuperMouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseReleaseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_mousereleaseevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KSqueezedTextLabel_SuperResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnResizeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_resizeevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KSqueezedTextLabel_SuperContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnContextMenuEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_contextmenuevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int KSqueezedTextLabel_HeightForWidth(const KSqueezedTextLabel* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSqueezedTextLabel_SuperHeightForWidth(const KSqueezedTextLabel* self, int param1) {
    return self->KSqueezedTextLabel::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHeightForWidth(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_heightforwidth_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSqueezedTextLabel_Event(KSqueezedTextLabel* self, QEvent* e) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->event(e);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_SuperEvent(KSqueezedTextLabel* self, QEvent* e) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        return vksqueezedtextlabel->KSqueezedTextLabel::event(e);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_event_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Event_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_KeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperKeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnKeyPressEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_keypressevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_PaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperPaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnPaintEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_paintevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_ChangeEvent(KSqueezedTextLabel* self, QEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperChangeEvent(KSqueezedTextLabel* self, QEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnChangeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_changeevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_MousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->mousePressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperMousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMousePressEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_mousepressevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_MouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->mouseMoveEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperMouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_mousemoveevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_FocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->focusInEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperFocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::focusInEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusInEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_focusinevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_FocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->focusOutEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperFocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::focusOutEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusOutEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_focusoutevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSqueezedTextLabel_FocusNextPrevChild(KSqueezedTextLabel* self, bool next) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_SuperFocusNextPrevChild(KSqueezedTextLabel* self, bool next) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        return vksqueezedtextlabel->KSqueezedTextLabel::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnFocusNextPrevChild(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_focusnextprevchild_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_InitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperInitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        vksqueezedtextlabel->KSqueezedTextLabel::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInitStyleOption(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_initstyleoption_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KSqueezedTextLabel_DevType(const KSqueezedTextLabel* self) {
    return self->devType();
}

// Base class handler implementation
int KSqueezedTextLabel_SuperDevType(const KSqueezedTextLabel* self) {
    return self->KSqueezedTextLabel::devType();
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDevType(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_devtype_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DevType_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_SetVisible(KSqueezedTextLabel* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSqueezedTextLabel_SuperSetVisible(KSqueezedTextLabel* self, bool visible) {
    self->KSqueezedTextLabel::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSetVisible(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_setvisible_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SetVisible_Callback>(slot);
}

// Derived class handler implementation
bool KSqueezedTextLabel_HasHeightForWidth(const KSqueezedTextLabel* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSqueezedTextLabel_SuperHasHeightForWidth(const KSqueezedTextLabel* self) {
    return self->KSqueezedTextLabel::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHasHeightForWidth(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_hasheightforwidth_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSqueezedTextLabel_PaintEngine(const KSqueezedTextLabel* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSqueezedTextLabel_SuperPaintEngine(const KSqueezedTextLabel* self) {
    return self->KSqueezedTextLabel::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnPaintEngine(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_paintengine_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_MouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperMouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMouseDoubleClickEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_WheelEvent(KSqueezedTextLabel* self, QWheelEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperWheelEvent(KSqueezedTextLabel* self, QWheelEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnWheelEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_wheelevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_KeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperKeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnKeyReleaseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_keyreleaseevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_EnterEvent(KSqueezedTextLabel* self, QEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperEnterEvent(KSqueezedTextLabel* self, QEnterEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEnterEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_enterevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_LeaveEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperLeaveEvent(KSqueezedTextLabel* self, QEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnLeaveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_leaveevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_MoveEvent(KSqueezedTextLabel* self, QMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperMoveEvent(KSqueezedTextLabel* self, QMoveEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_moveevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_CloseEvent(KSqueezedTextLabel* self, QCloseEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperCloseEvent(KSqueezedTextLabel* self, QCloseEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnCloseEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_closeevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_TabletEvent(KSqueezedTextLabel* self, QTabletEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperTabletEvent(KSqueezedTextLabel* self, QTabletEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnTabletEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_tabletevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_ActionEvent(KSqueezedTextLabel* self, QActionEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperActionEvent(KSqueezedTextLabel* self, QActionEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnActionEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_actionevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_DragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperDragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragEnterEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_dragenterevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_DragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperDragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragMoveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_dragmoveevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_DragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperDragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDragLeaveEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_dragleaveevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_DropEvent(KSqueezedTextLabel* self, QDropEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperDropEvent(KSqueezedTextLabel* self, QDropEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDropEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_dropevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_ShowEvent(KSqueezedTextLabel* self, QShowEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperShowEvent(KSqueezedTextLabel* self, QShowEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnShowEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_showevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_HideEvent(KSqueezedTextLabel* self, QHideEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperHideEvent(KSqueezedTextLabel* self, QHideEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnHideEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_hideevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSqueezedTextLabel_NativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSqueezedTextLabel_SuperNativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        return vksqueezedtextlabel->KSqueezedTextLabel::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnNativeEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_nativeevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSqueezedTextLabel_Metric(const KSqueezedTextLabel* self, int param1) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSqueezedTextLabel_SuperMetric(const KSqueezedTextLabel* self, int param1) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->KSqueezedTextLabel::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnMetric(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_metric_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_InitPainter(const KSqueezedTextLabel* self, QPainter* painter) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperInitPainter(const KSqueezedTextLabel* self, QPainter* painter) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        vksqueezedtextlabel->KSqueezedTextLabel::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInitPainter(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_initpainter_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSqueezedTextLabel_Redirected(const KSqueezedTextLabel* self, QPoint* offset) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSqueezedTextLabel_SuperRedirected(const KSqueezedTextLabel* self, QPoint* offset) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->KSqueezedTextLabel::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnRedirected(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_redirected_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSqueezedTextLabel_SharedPainter(const KSqueezedTextLabel* self) {
    auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self));
    if (vksqueezedtextlabel) {
        return vksqueezedtextlabel->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSqueezedTextLabel_SuperSharedPainter(const KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->KSqueezedTextLabel::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnSharedPainter(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_sharedpainter_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_InputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperInputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInputMethodEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_inputmethodevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSqueezedTextLabel_InputMethodQuery(const KSqueezedTextLabel* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSqueezedTextLabel_SuperInputMethodQuery(const KSqueezedTextLabel* self, int param1) {
    return new QVariant(self->KSqueezedTextLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnInputMethodQuery(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self)))
        vksqueezedtextlabel->ksqueezedtextlabel_inputmethodquery_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSqueezedTextLabel_EventFilter(KSqueezedTextLabel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSqueezedTextLabel_SuperEventFilter(KSqueezedTextLabel* self, QObject* watched, QEvent* event) {
    return self->KSqueezedTextLabel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnEventFilter(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_eventfilter_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_TimerEvent(KSqueezedTextLabel* self, QTimerEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperTimerEvent(KSqueezedTextLabel* self, QTimerEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnTimerEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_timerevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_ChildEvent(KSqueezedTextLabel* self, QChildEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperChildEvent(KSqueezedTextLabel* self, QChildEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnChildEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_childevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_CustomEvent(KSqueezedTextLabel* self, QEvent* event) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperCustomEvent(KSqueezedTextLabel* self, QEvent* event) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnCustomEvent(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_customevent_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_ConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnConnectNotify(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_connectnotify_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSqueezedTextLabel_DisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self);
    if (vksqueezedtextlabel) {
        vksqueezedtextlabel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSqueezedTextLabel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSqueezedTextLabel_SuperDisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->KSqueezedTextLabel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSqueezedTextLabel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSqueezedTextLabel_OnDisconnectNotify(KSqueezedTextLabel* self, intptr_t slot) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self))
        vksqueezedtextlabel->ksqueezedtextlabel_disconnectnotify_callback = reinterpret_cast<VirtualKSqueezedTextLabel::KSqueezedTextLabel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSqueezedTextLabel_SqueezeTextToLabel(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->VirtualKSqueezedTextLabel::squeezeTextToLabel();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::squeezeTextToLabel called without a directly constructed type");
}

// Derived class protected handler implementation
void KSqueezedTextLabel_DrawFrame(KSqueezedTextLabel* self, QPainter* param1) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->VirtualKSqueezedTextLabel::drawFrame(param1);
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KSqueezedTextLabel_UpdateMicroFocus(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->VirtualKSqueezedTextLabel::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSqueezedTextLabel_Create(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->VirtualKSqueezedTextLabel::create();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSqueezedTextLabel_Destroy(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        vksqueezedtextlabel->VirtualKSqueezedTextLabel::destroy();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSqueezedTextLabel_FocusNextChild(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::focusNextChild();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSqueezedTextLabel_FocusPreviousChild(KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = dynamic_cast<VirtualKSqueezedTextLabel*>(self)) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSqueezedTextLabel_Sender(const KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::sender();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSqueezedTextLabel_SenderSignalIndex(const KSqueezedTextLabel* self) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSqueezedTextLabel_Receivers(const KSqueezedTextLabel* self, const char* signal) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::receivers(signal);
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSqueezedTextLabel_IsSignalConnected(const KSqueezedTextLabel* self, const QMetaMethod* signal) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSqueezedTextLabel_GetDecodedMetricF(const KSqueezedTextLabel* self, int metricA, int metricB) {
    if (auto* vksqueezedtextlabel = const_cast<VirtualKSqueezedTextLabel*>(dynamic_cast<const VirtualKSqueezedTextLabel*>(self))) {
        return vksqueezedtextlabel->VirtualKSqueezedTextLabel::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSqueezedTextLabel::getDecodedMetricF called without a directly constructed type");
}

void KSqueezedTextLabel_Delete(KSqueezedTextLabel* self) {
    delete self;
}
