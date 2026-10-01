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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCollapsibleGroupBox_Tr(const char* s) {
    auto _ret = KCollapsibleGroupBox::tr(s);
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
    auto _ret = self->title();
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
    return new QSize(self->sizeHint());
}

QSize* KCollapsibleGroupBox_MinimumSizeHint(const KCollapsibleGroupBox* self) {
    return new QSize(self->minimumSizeHint());
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
    KCollapsibleGroupBox::connect(self,
                                  static_cast<void (KCollapsibleGroupBox::*)()>(&KCollapsibleGroupBox::titleChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KCollapsibleGroupBox_ExpandedChanged(KCollapsibleGroupBox* self) {
    self->expandedChanged();
}

void KCollapsibleGroupBox_Connect_ExpandedChanged(KCollapsibleGroupBox* self, intptr_t slot) {
    void (*slotFunc)(KCollapsibleGroupBox*) = reinterpret_cast<void (*)(KCollapsibleGroupBox*)>(slot);
    KCollapsibleGroupBox::connect(self,
                                  static_cast<void (KCollapsibleGroupBox::*)()>(&KCollapsibleGroupBox::expandedChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KCollapsibleGroupBox_PaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->paintEvent(param1);
    }
}

bool KCollapsibleGroupBox_Event(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->event(param1);
    }
    qFatal("Error: Protected method KCollapsibleGroupBox::event called without a directly constructed type");
}

void KCollapsibleGroupBox_MousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->mousePressEvent(param1);
    }
}

void KCollapsibleGroupBox_MouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->mouseMoveEvent(param1);
    }
}

void KCollapsibleGroupBox_LeaveEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->leaveEvent(param1);
    }
}

void KCollapsibleGroupBox_KeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->keyPressEvent(param1);
    }
}

void KCollapsibleGroupBox_ResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->resizeEvent(param1);
    }
}

libqt_string KCollapsibleGroupBox_Tr2(const char* s, const char* c) {
    auto _ret = KCollapsibleGroupBox::tr(s, c);
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
    auto _ret = KCollapsibleGroupBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCollapsibleGroupBox_SuperMetaObject(const KCollapsibleGroupBox* self) {
    return (QMetaObject*)self->KCollapsibleGroupBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetaObject(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_metaobject_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCollapsibleGroupBox_SuperMetacast(KCollapsibleGroupBox* self, const char* param1) {
    return self->KCollapsibleGroupBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetacast(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_metacast_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCollapsibleGroupBox_SuperMetacall(KCollapsibleGroupBox* self, int param1, int param2, void** param3) {
    return self->KCollapsibleGroupBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetacall(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_metacall_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KCollapsibleGroupBox_SuperSizeHint(const KCollapsibleGroupBox* self) {
    return new QSize(self->KCollapsibleGroupBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSizeHint(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_sizehint_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KCollapsibleGroupBox_SuperMinimumSizeHint(const KCollapsibleGroupBox* self) {
    return new QSize(self->KCollapsibleGroupBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMinimumSizeHint(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_minimumsizehint_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperPaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnPaintEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_paintevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool KCollapsibleGroupBox_SuperEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::event(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_event_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Event_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperMousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMousePressEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_mousepressevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperMouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_mousemoveevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperLeaveEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_leaveevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperKeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnKeyPressEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_keypressevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnResizeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_resizeevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCollapsibleGroupBox_DevType(const KCollapsibleGroupBox* self) {
    return self->devType();
}

// Base class handler implementation
int KCollapsibleGroupBox_SuperDevType(const KCollapsibleGroupBox* self) {
    return self->KCollapsibleGroupBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDevType(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_devtype_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_SetVisible(KCollapsibleGroupBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperSetVisible(KCollapsibleGroupBox* self, bool visible) {
    self->KCollapsibleGroupBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSetVisible(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_setvisible_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KCollapsibleGroupBox_HeightForWidth(const KCollapsibleGroupBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCollapsibleGroupBox_SuperHeightForWidth(const KCollapsibleGroupBox* self, int param1) {
    return self->KCollapsibleGroupBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHeightForWidth(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_heightforwidth_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCollapsibleGroupBox_HasHeightForWidth(const KCollapsibleGroupBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCollapsibleGroupBox_SuperHasHeightForWidth(const KCollapsibleGroupBox* self) {
    return self->KCollapsibleGroupBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHasHeightForWidth(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_hasheightforwidth_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCollapsibleGroupBox_PaintEngine(const KCollapsibleGroupBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCollapsibleGroupBox_SuperPaintEngine(const KCollapsibleGroupBox* self) {
    return self->KCollapsibleGroupBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnPaintEngine(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_paintengine_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_MouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperMouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_mousereleaseevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_MouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperMouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMouseDoubleClickEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_WheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperWheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnWheelEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_wheelevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_KeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperKeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnKeyReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_keyreleaseevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_FocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperFocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusInEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_focusinevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_FocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperFocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusOutEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_focusoutevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_EnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperEnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEnterEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_enterevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_MoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperMoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_moveevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_CloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperCloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnCloseEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_closeevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnContextMenuEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_contextmenuevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_TabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperTabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnTabletEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_tabletevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ActionEvent(KCollapsibleGroupBox* self, QActionEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperActionEvent(KCollapsibleGroupBox* self, QActionEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnActionEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_actionevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperDragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragEnterEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_dragenterevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperDragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragMoveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_dragmoveevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_DragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperDragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDragLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_dragleaveevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_DropEvent(KCollapsibleGroupBox* self, QDropEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperDropEvent(KCollapsibleGroupBox* self, QDropEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDropEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_dropevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ShowEvent(KCollapsibleGroupBox* self, QShowEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperShowEvent(KCollapsibleGroupBox* self, QShowEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnShowEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_showevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_HideEvent(KCollapsibleGroupBox* self, QHideEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperHideEvent(KCollapsibleGroupBox* self, QHideEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnHideEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_hideevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCollapsibleGroupBox_NativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_SuperNativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnNativeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_nativeevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ChangeEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperChangeEvent(KCollapsibleGroupBox* self, QEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnChangeEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_changeevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCollapsibleGroupBox_Metric(const KCollapsibleGroupBox* self, int param1) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCollapsibleGroupBox_SuperMetric(const KCollapsibleGroupBox* self, int param1) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnMetric(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_metric_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_InitPainter(const KCollapsibleGroupBox* self, QPainter* painter) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperInitPainter(const KCollapsibleGroupBox* self, QPainter* painter) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInitPainter(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_initpainter_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCollapsibleGroupBox_Redirected(const KCollapsibleGroupBox* self, QPoint* offset) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCollapsibleGroupBox_SuperRedirected(const KCollapsibleGroupBox* self, QPoint* offset) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnRedirected(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_redirected_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCollapsibleGroupBox_SharedPainter(const KCollapsibleGroupBox* self) {
    auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self));
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCollapsibleGroupBox_SuperSharedPainter(const KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnSharedPainter(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_sharedpainter_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_InputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperInputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInputMethodEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_inputmethodevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCollapsibleGroupBox_InputMethodQuery(const KCollapsibleGroupBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KCollapsibleGroupBox_SuperInputMethodQuery(const KCollapsibleGroupBox* self, int param1) {
    return new QVariant(self->KCollapsibleGroupBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnInputMethodQuery(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self)))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_inputmethodquery_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KCollapsibleGroupBox_FocusNextPrevChild(KCollapsibleGroupBox* self, bool next) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        return vkcollapsiblegroupbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCollapsibleGroupBox_SuperFocusNextPrevChild(KCollapsibleGroupBox* self, bool next) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        return vkcollapsiblegroupbox->KCollapsibleGroupBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnFocusNextPrevChild(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_focusnextprevchild_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KCollapsibleGroupBox_EventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCollapsibleGroupBox_SuperEventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event) {
    return self->KCollapsibleGroupBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnEventFilter(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_eventfilter_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_TimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperTimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnTimerEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_timerevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ChildEvent(KCollapsibleGroupBox* self, QChildEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperChildEvent(KCollapsibleGroupBox* self, QChildEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnChildEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_childevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_CustomEvent(KCollapsibleGroupBox* self, QEvent* event) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperCustomEvent(KCollapsibleGroupBox* self, QEvent* event) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnCustomEvent(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_customevent_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_ConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnConnectNotify(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_connectnotify_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCollapsibleGroupBox_DisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self);
    if (vkcollapsiblegroupbox) {
        vkcollapsiblegroupbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCollapsibleGroupBox_SuperDisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->KCollapsibleGroupBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCollapsibleGroupBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCollapsibleGroupBox_OnDisconnectNotify(KCollapsibleGroupBox* self, intptr_t slot) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self))
        vkcollapsiblegroupbox->kcollapsiblegroupbox_disconnectnotify_callback = reinterpret_cast<VirtualKCollapsibleGroupBox::KCollapsibleGroupBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCollapsibleGroupBox_UpdateMicroFocus(KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCollapsibleGroupBox_Create(KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::create();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCollapsibleGroupBox_Destroy(KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::destroy();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCollapsibleGroupBox_FocusNextChild(KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::focusNextChild();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCollapsibleGroupBox_FocusPreviousChild(KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = dynamic_cast<VirtualKCollapsibleGroupBox*>(self)) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCollapsibleGroupBox_Sender(const KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::sender();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCollapsibleGroupBox_SenderSignalIndex(const KCollapsibleGroupBox* self) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCollapsibleGroupBox_Receivers(const KCollapsibleGroupBox* self, const char* signal) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::receivers(signal);
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCollapsibleGroupBox_IsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCollapsibleGroupBox_GetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB) {
    if (auto* vkcollapsiblegroupbox = const_cast<VirtualKCollapsibleGroupBox*>(dynamic_cast<const VirtualKCollapsibleGroupBox*>(self))) {
        return vkcollapsiblegroupbox->VirtualKCollapsibleGroupBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCollapsibleGroupBox::getDecodedMetricF called without a directly constructed type");
}

void KCollapsibleGroupBox_Delete(KCollapsibleGroupBox* self) {
    delete self;
}
