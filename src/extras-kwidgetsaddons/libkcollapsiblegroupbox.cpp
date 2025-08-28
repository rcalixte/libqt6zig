#include <KCollapsibleGroupBox>
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
#include <kcollapsiblegroupbox.h>
#include "libkcollapsiblegroupbox.h"
#include "libkcollapsiblegroupbox.hxx"

KCollapsibleGroupBox* KCollapsibleGroupBox_new(QWidget* parent) {
    return new VirtualKCollapsibleGroupBox(parent);
}

KCollapsibleGroupBox* KCollapsibleGroupBox_new2() {
    return new VirtualKCollapsibleGroupBox();
}

QMetaObject* KCollapsibleGroupBox_MetaObject(const KCollapsibleGroupBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCollapsibleGroupBox_Metacast(KCollapsibleGroupBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCollapsibleGroupBox_Metacall(KCollapsibleGroupBox* self, int param1, int param2, void** param3) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCollapsibleGroupBox_Tr(const char* s) {
    QString _ret = KCollapsibleGroupBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCollapsibleGroupBox_SetTitle(KCollapsibleGroupBox* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string KCollapsibleGroupBox_Title(const KCollapsibleGroupBox* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCollapsibleGroupBox_SetExpanded(KCollapsibleGroupBox* self, bool expanded) {
    self->setExpanded(expanded);
}

bool KCollapsibleGroupBox_IsExpanded(const KCollapsibleGroupBox* self) {
    return self->isExpanded();
}

QSize* KCollapsibleGroupBox_SizeHint(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<const VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKCollapsibleGroupBox*)self)->sizeHint());
    }
}

QSize* KCollapsibleGroupBox_MinimumSizeHint(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<const VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCollapsibleGroupBox*)self)->minimumSizeHint());
    }
}

void KCollapsibleGroupBox_Toggle(KCollapsibleGroupBox* self) {
    self->toggle();
}

void KCollapsibleGroupBox_Expand(KCollapsibleGroupBox* self) {
    self->expand();
}

void KCollapsibleGroupBox_Collapse(KCollapsibleGroupBox* self) {
    self->collapse();
}

void KCollapsibleGroupBox_TitleChanged(KCollapsibleGroupBox* self) {
    self->titleChanged();
}

void KCollapsibleGroupBox_Connect_TitleChanged(KCollapsibleGroupBox* self, intptr_t slot) {
    void (*slotFunc)(KCollapsibleGroupBox*) = reinterpret_cast<void (*)(KCollapsibleGroupBox*)>(slot);
    KCollapsibleGroupBox::connect(self, &KCollapsibleGroupBox::titleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCollapsibleGroupBox_ExpandedChanged(KCollapsibleGroupBox* self) {
    self->expandedChanged();
}

void KCollapsibleGroupBox_Connect_ExpandedChanged(KCollapsibleGroupBox* self, intptr_t slot) {
    void (*slotFunc)(KCollapsibleGroupBox*) = reinterpret_cast<void (*)(KCollapsibleGroupBox*)>(slot);
    KCollapsibleGroupBox::connect(self, &KCollapsibleGroupBox::expandedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCollapsibleGroupBox_PaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->paintEvent(param1);
    }
}

bool KCollapsibleGroupBox_Event(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->event(param1);
    }
    return {};
}

void KCollapsibleGroupBox_MousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->mousePressEvent(param1);
    }
}

void KCollapsibleGroupBox_MouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->mouseMoveEvent(param1);
    }
}

void KCollapsibleGroupBox_LeaveEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->leaveEvent(param1);
    }
}

void KCollapsibleGroupBox_KeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->keyPressEvent(param1);
    }
}

void KCollapsibleGroupBox_ResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->resizeEvent(param1);
    }
}

libqt_string KCollapsibleGroupBox_Tr2(const char* s, const char* c) {
    QString _ret = KCollapsibleGroupBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCollapsibleGroupBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCollapsibleGroupBox::tr(s, c, static_cast<int>(n));
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
int KCollapsibleGroupBox_QBaseMetacall(KCollapsibleGroupBox* self, int param1, int param2, void** param3) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Metacall_IsBase(true);
        return vkcollapsiblegroupbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCollapsibleGroupBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetacall(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Metacall_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KCollapsibleGroupBox_QBaseSizeHint(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SizeHint_IsBase(true);
        return new QSize(vkcollapsiblegroupbox->sizeHint());
    } else {
        return new QSize(((VirtualKCollapsibleGroupBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSizeHint(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SizeHint_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KCollapsibleGroupBox_QBaseMinimumSizeHint(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkcollapsiblegroupbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCollapsibleGroupBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMinimumSizeHint(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBasePaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_PaintEvent_IsBase(true);
        vkcollapsiblegroupbox->paintEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnPaintEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_PaintEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Event_IsBase(true);
        return vkcollapsiblegroupbox->event(param1);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Event_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseMousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MousePressEvent_IsBase(true);
        vkcollapsiblegroupbox->mousePressEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMousePressEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MousePressEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseMouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseMoveEvent_IsBase(true);
        vkcollapsiblegroupbox->mouseMoveEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseLeaveEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_LeaveEvent_IsBase(true);
        vkcollapsiblegroupbox->leaveEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_LeaveEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_LeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseKeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_KeyPressEvent_IsBase(true);
        vkcollapsiblegroupbox->keyPressEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnKeyPressEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ResizeEvent_IsBase(true);
        vkcollapsiblegroupbox->resizeEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnResizeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ResizeEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCollapsibleGroupBox_DevType(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->devType();
    } else {
        return self->KCollapsibleGroupBox::devType();
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_QBaseDevType(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DevType_IsBase(true);
        return vkcollapsiblegroupbox->devType();
    } else {
        return self->KCollapsibleGroupBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDevType(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DevType_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_SetVisible(KCollapsibleGroupBox* self, bool visible) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setVisible(visible);
    } else {
        self->KCollapsibleGroupBox::setVisible(visible);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseSetVisible(KCollapsibleGroupBox* self, bool visible) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SetVisible_IsBase(true);
        vkcollapsiblegroupbox->setVisible(visible);
    } else {
        self->KCollapsibleGroupBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSetVisible(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SetVisible_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KCollapsibleGroupBox_HeightForWidth(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCollapsibleGroupBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_QBaseHeightForWidth(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HeightForWidth_IsBase(true);
        return vkcollapsiblegroupbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCollapsibleGroupBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHeightForWidth(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HeightForWidth_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_HasHeightForWidth(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->hasHeightForWidth();
    } else {
        return self->KCollapsibleGroupBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseHasHeightForWidth(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HasHeightForWidth_IsBase(true);
        return vkcollapsiblegroupbox->hasHeightForWidth();
    } else {
        return self->KCollapsibleGroupBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHasHeightForWidth(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCollapsibleGroupBox_PaintEngine(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->paintEngine();
    } else {
        return self->KCollapsibleGroupBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCollapsibleGroupBox_QBasePaintEngine(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_PaintEngine_IsBase(true);
        return vkcollapsiblegroupbox->paintEngine();
    } else {
        return self->KCollapsibleGroupBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnPaintEngine(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_PaintEngine_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_MouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->mouseReleaseEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseMouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseReleaseEvent_IsBase(true);
        vkcollapsiblegroupbox->mouseReleaseEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_MouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseMouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseDoubleClickEvent_IsBase(true);
        vkcollapsiblegroupbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseDoubleClickEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_WheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->wheelEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseWheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_WheelEvent_IsBase(true);
        vkcollapsiblegroupbox->wheelEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnWheelEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_WheelEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_KeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->keyReleaseEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseKeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_KeyReleaseEvent_IsBase(true);
        vkcollapsiblegroupbox->keyReleaseEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnKeyReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_FocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->focusInEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseFocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusInEvent_IsBase(true);
        vkcollapsiblegroupbox->focusInEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusInEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusInEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_FocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->focusOutEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseFocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusOutEvent_IsBase(true);
        vkcollapsiblegroupbox->focusOutEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusOutEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_EnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->enterEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseEnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_EnterEvent_IsBase(true);
        vkcollapsiblegroupbox->enterEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEnterEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_EnterEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_MoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->moveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseMoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MoveEvent_IsBase(true);
        vkcollapsiblegroupbox->moveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_MoveEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_CloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->closeEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseCloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_CloseEvent_IsBase(true);
        vkcollapsiblegroupbox->closeEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnCloseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_CloseEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->contextMenuEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ContextMenuEvent_IsBase(true);
        vkcollapsiblegroupbox->contextMenuEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnContextMenuEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_TabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->tabletEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseTabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_TabletEvent_IsBase(true);
        vkcollapsiblegroupbox->tabletEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnTabletEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_TabletEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ActionEvent(KCollapsibleGroupBox* self, QActionEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->actionEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseActionEvent(KCollapsibleGroupBox* self, QActionEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ActionEvent_IsBase(true);
        vkcollapsiblegroupbox->actionEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnActionEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ActionEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->dragEnterEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragEnterEvent_IsBase(true);
        vkcollapsiblegroupbox->dragEnterEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragEnterEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->dragMoveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragMoveEvent_IsBase(true);
        vkcollapsiblegroupbox->dragMoveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->dragLeaveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragLeaveEvent_IsBase(true);
        vkcollapsiblegroupbox->dragLeaveEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_DropEvent(KCollapsibleGroupBox* self, QDropEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->dropEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDropEvent(KCollapsibleGroupBox* self, QDropEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DropEvent_IsBase(true);
        vkcollapsiblegroupbox->dropEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDropEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DropEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ShowEvent(KCollapsibleGroupBox* self, QShowEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->showEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseShowEvent(KCollapsibleGroupBox* self, QShowEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ShowEvent_IsBase(true);
        vkcollapsiblegroupbox->showEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnShowEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ShowEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_HideEvent(KCollapsibleGroupBox* self, QHideEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->hideEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseHideEvent(KCollapsibleGroupBox* self, QHideEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HideEvent_IsBase(true);
        vkcollapsiblegroupbox->hideEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHideEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_HideEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_NativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseNativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_NativeEvent_IsBase(true);
        return vkcollapsiblegroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnNativeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_NativeEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ChangeEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->changeEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseChangeEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ChangeEvent_IsBase(true);
        vkcollapsiblegroupbox->changeEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnChangeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ChangeEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCollapsibleGroupBox_Metric(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_QBaseMetric(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Metric_IsBase(true);
        return vkcollapsiblegroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetric(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Metric_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_InitPainter(const KCollapsibleGroupBox* self, QPainter* painter) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->initPainter(painter);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseInitPainter(const KCollapsibleGroupBox* self, QPainter* painter) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InitPainter_IsBase(true);
        vkcollapsiblegroupbox->initPainter(painter);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInitPainter(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InitPainter_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCollapsibleGroupBox_Redirected(const KCollapsibleGroupBox* self, QPoint* offset) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->redirected(offset);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCollapsibleGroupBox_QBaseRedirected(const KCollapsibleGroupBox* self, QPoint* offset) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Redirected_IsBase(true);
        return vkcollapsiblegroupbox->redirected(offset);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnRedirected(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Redirected_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCollapsibleGroupBox_SharedPainter(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->sharedPainter();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCollapsibleGroupBox_QBaseSharedPainter(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SharedPainter_IsBase(true);
        return vkcollapsiblegroupbox->sharedPainter();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSharedPainter(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SharedPainter_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_InputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->inputMethodEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseInputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InputMethodEvent_IsBase(true);
        vkcollapsiblegroupbox->inputMethodEvent(param1);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInputMethodEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCollapsibleGroupBox_InputMethodQuery(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return new QVariant(vkcollapsiblegroupbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCollapsibleGroupBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KCollapsibleGroupBox_QBaseInputMethodQuery(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkcollapsiblegroupbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCollapsibleGroupBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInputMethodQuery(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_FocusNextPrevChild(KCollapsibleGroupBox* self, bool next) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseFocusNextPrevChild(KCollapsibleGroupBox* self, bool next) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusNextPrevChild_IsBase(true);
        return vkcollapsiblegroupbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusNextPrevChild(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_EventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->eventFilter(watched, event);
    } else {
        return self->KCollapsibleGroupBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseEventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_EventFilter_IsBase(true);
        return vkcollapsiblegroupbox->eventFilter(watched, event);
    } else {
        return self->KCollapsibleGroupBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEventFilter(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_EventFilter_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_TimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->timerEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseTimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_TimerEvent_IsBase(true);
        vkcollapsiblegroupbox->timerEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnTimerEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_TimerEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ChildEvent(KCollapsibleGroupBox* self, QChildEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->childEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseChildEvent(KCollapsibleGroupBox* self, QChildEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ChildEvent_IsBase(true);
        vkcollapsiblegroupbox->childEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnChildEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ChildEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_CustomEvent(KCollapsibleGroupBox* self, QEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->customEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseCustomEvent(KCollapsibleGroupBox* self, QEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_CustomEvent_IsBase(true);
        vkcollapsiblegroupbox->customEvent(event);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnCustomEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_CustomEvent_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_ConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->connectNotify(*signal);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ConnectNotify_IsBase(true);
        vkcollapsiblegroupbox->connectNotify(*signal);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnConnectNotify(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_ConnectNotify_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_DisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->disconnectNotify(*signal);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DisconnectNotify_IsBase(true);
        vkcollapsiblegroupbox->disconnectNotify(*signal);
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDisconnectNotify(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_UpdateMicroFocus(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->updateMicroFocus();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseUpdateMicroFocus(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_UpdateMicroFocus_IsBase(true);
        vkcollapsiblegroupbox->updateMicroFocus();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnUpdateMicroFocus(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_Create(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->create();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->create();
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseCreate(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Create_IsBase(true);
        vkcollapsiblegroupbox->create();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnCreate(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Create_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCollapsibleGroupBox_Destroy(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->destroy();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->destroy();
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_QBaseDestroy(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Destroy_IsBase(true);
        vkcollapsiblegroupbox->destroy();
    } else {
        ((VirtualKCollapsibleGroupBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDestroy(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Destroy_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_FocusNextChild(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->focusNextChild();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseFocusNextChild(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusNextChild_IsBase(true);
        return vkcollapsiblegroupbox->focusNextChild();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusNextChild(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusNextChild_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_FocusPreviousChild(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->focusPreviousChild();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseFocusPreviousChild(KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusPreviousChild_IsBase(true);
        return vkcollapsiblegroupbox->focusPreviousChild();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusPreviousChild(KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCollapsibleGroupBox_Sender(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->sender();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCollapsibleGroupBox_QBaseSender(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Sender_IsBase(true);
        return vkcollapsiblegroupbox->sender();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSender(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Sender_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCollapsibleGroupBox_SenderSignalIndex(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->senderSignalIndex();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_QBaseSenderSignalIndex(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SenderSignalIndex_IsBase(true);
        return vkcollapsiblegroupbox->senderSignalIndex();
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSenderSignalIndex(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCollapsibleGroupBox_Receivers(const KCollapsibleGroupBox* self, const char* signal) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->receivers(signal);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_QBaseReceivers(const KCollapsibleGroupBox* self, const char* signal) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Receivers_IsBase(true);
        return vkcollapsiblegroupbox->receivers(signal);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnReceivers(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_Receivers_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCollapsibleGroupBox_IsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_QBaseIsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_IsSignalConnected_IsBase(true);
        return vkcollapsiblegroupbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnIsSignalConnected(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCollapsibleGroupBox_GetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        return vkcollapsiblegroupbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCollapsibleGroupBox_QBaseGetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_GetDecodedMetricF_IsBase(true);
        return vkcollapsiblegroupbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCollapsibleGroupBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnGetDecodedMetricF(const KCollapsibleGroupBox* self, intptr_t slot) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox && vkcollapsiblegroupbox->isVirtualKCollapsibleGroupBox) {
        vkcollapsiblegroupbox->setKCollapsibleGroupBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KCollapsibleGroupBox_Delete(KCollapsibleGroupBox* self) {
    delete self;
}
