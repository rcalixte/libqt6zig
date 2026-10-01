#include <KPixmapRegionSelectorWidget>
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
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpixmapregionselectorwidget.h>
#include "libkpixmapregionselectorwidget.h"
#include "libkpixmapregionselectorwidget.hxx"

KPixmapRegionSelectorWidget* KPixmapRegionSelectorWidget_new(QWidget* parent) {
    return new VirtualKPixmapRegionSelectorWidget(parent);
}

KPixmapRegionSelectorWidget* KPixmapRegionSelectorWidget_new2() {
    return new VirtualKPixmapRegionSelectorWidget();
}

QMetaObject* KPixmapRegionSelectorWidget_MetaObject(const KPixmapRegionSelectorWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPixmapRegionSelectorWidget_Metacast(KPixmapRegionSelectorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPixmapRegionSelectorWidget_Metacall(KPixmapRegionSelectorWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPixmapRegionSelectorWidget_Tr(const char* s) {
    auto _ret = KPixmapRegionSelectorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPixmapRegionSelectorWidget_SetPixmap(KPixmapRegionSelectorWidget* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

QPixmap* KPixmapRegionSelectorWidget_Pixmap(const KPixmapRegionSelectorWidget* self) {
    return new QPixmap(self->pixmap());
}

void KPixmapRegionSelectorWidget_SetSelectedRegion(KPixmapRegionSelectorWidget* self, const QRect* rect) {
    self->setSelectedRegion(*rect);
}

QRect* KPixmapRegionSelectorWidget_SelectedRegion(const KPixmapRegionSelectorWidget* self) {
    return new QRect(self->selectedRegion());
}

QRect* KPixmapRegionSelectorWidget_UnzoomedSelectedRegion(const KPixmapRegionSelectorWidget* self) {
    return new QRect(self->unzoomedSelectedRegion());
}

void KPixmapRegionSelectorWidget_ResetSelection(KPixmapRegionSelectorWidget* self) {
    self->resetSelection();
}

QImage* KPixmapRegionSelectorWidget_SelectedImage(const KPixmapRegionSelectorWidget* self) {
    return new QImage(self->selectedImage());
}

void KPixmapRegionSelectorWidget_SetSelectionAspectRatio(KPixmapRegionSelectorWidget* self, int width, int height) {
    self->setSelectionAspectRatio(static_cast<int>(width), static_cast<int>(height));
}

void KPixmapRegionSelectorWidget_SetFreeSelectionAspectRatio(KPixmapRegionSelectorWidget* self) {
    self->setFreeSelectionAspectRatio();
}

void KPixmapRegionSelectorWidget_SetMaximumWidgetSize(KPixmapRegionSelectorWidget* self, int width, int height) {
    self->setMaximumWidgetSize(static_cast<int>(width), static_cast<int>(height));
}

void KPixmapRegionSelectorWidget_Rotate(KPixmapRegionSelectorWidget* self, int direction) {
    self->rotate(static_cast<KPixmapRegionSelectorWidget::RotateDirection>(direction));
}

void KPixmapRegionSelectorWidget_RotateClockwise(KPixmapRegionSelectorWidget* self) {
    self->rotateClockwise();
}

void KPixmapRegionSelectorWidget_RotateCounterclockwise(KPixmapRegionSelectorWidget* self) {
    self->rotateCounterclockwise();
}

void KPixmapRegionSelectorWidget_PixmapRotated(KPixmapRegionSelectorWidget* self) {
    self->pixmapRotated();
}

void KPixmapRegionSelectorWidget_Connect_PixmapRotated(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    void (*slotFunc)(KPixmapRegionSelectorWidget*) = reinterpret_cast<void (*)(KPixmapRegionSelectorWidget*)>(slot);
    KPixmapRegionSelectorWidget::connect(self,
                                         static_cast<void (KPixmapRegionSelectorWidget::*)()>(&KPixmapRegionSelectorWidget::pixmapRotated),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

QMenu* KPixmapRegionSelectorWidget_CreatePopupMenu(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->createPopupMenu();
    }
    qFatal("Error: Protected method KPixmapRegionSelectorWidget::createPopupMenu called without a directly constructed type");
}

bool KPixmapRegionSelectorWidget_EventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->eventFilter(obj, ev);
    }
    qFatal("Error: Protected method KPixmapRegionSelectorWidget::eventFilter called without a directly constructed type");
}

libqt_string KPixmapRegionSelectorWidget_Tr2(const char* s, const char* c) {
    auto _ret = KPixmapRegionSelectorWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPixmapRegionSelectorWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPixmapRegionSelectorWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPixmapRegionSelectorWidget_SuperMetaObject(const KPixmapRegionSelectorWidget* self) {
    return (QMetaObject*)self->KPixmapRegionSelectorWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetaObject(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_metaobject_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPixmapRegionSelectorWidget_SuperMetacast(KPixmapRegionSelectorWidget* self, const char* param1) {
    return self->KPixmapRegionSelectorWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetacast(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_metacast_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_SuperMetacall(KPixmapRegionSelectorWidget* self, int param1, int param2, void** param3) {
    return self->KPixmapRegionSelectorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetacall(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_metacall_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QMenu* KPixmapRegionSelectorWidget_SuperCreatePopupMenu(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::createPopupMenu();
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::createPopupMenu called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCreatePopupMenu(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_createpopupmenu_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CreatePopupMenu_Callback>(slot);
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_SuperEventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::eventFilter(obj, ev);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEventFilter(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_eventfilter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_DevType(const KPixmapRegionSelectorWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_SuperDevType(const KPixmapRegionSelectorWidget* self) {
    return self->KPixmapRegionSelectorWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDevType(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_devtype_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_SetVisible(KPixmapRegionSelectorWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperSetVisible(KPixmapRegionSelectorWidget* self, bool visible) {
    self->KPixmapRegionSelectorWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSetVisible(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_setvisible_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorWidget_SizeHint(const KPixmapRegionSelectorWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPixmapRegionSelectorWidget_SuperSizeHint(const KPixmapRegionSelectorWidget* self) {
    return new QSize(self->KPixmapRegionSelectorWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSizeHint(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_sizehint_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorWidget_MinimumSizeHint(const KPixmapRegionSelectorWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPixmapRegionSelectorWidget_SuperMinimumSizeHint(const KPixmapRegionSelectorWidget* self) {
    return new QSize(self->KPixmapRegionSelectorWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMinimumSizeHint(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_minimumsizehint_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_HeightForWidth(const KPixmapRegionSelectorWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_SuperHeightForWidth(const KPixmapRegionSelectorWidget* self, int param1) {
    return self->KPixmapRegionSelectorWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHeightForWidth(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_heightforwidth_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_HasHeightForWidth(const KPixmapRegionSelectorWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_SuperHasHeightForWidth(const KPixmapRegionSelectorWidget* self) {
    return self->KPixmapRegionSelectorWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHasHeightForWidth(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPixmapRegionSelectorWidget_PaintEngine(const KPixmapRegionSelectorWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPixmapRegionSelectorWidget_SuperPaintEngine(const KPixmapRegionSelectorWidget* self) {
    return self->KPixmapRegionSelectorWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnPaintEngine(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_paintengine_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_Event(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_SuperEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_event_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperMousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMousePressEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_mousepressevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperMouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseReleaseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperMouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_mousemoveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_WheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperWheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnWheelEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_wheelevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_KeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperKeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnKeyPressEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_keypressevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_KeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperKeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnKeyReleaseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_FocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperFocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusInEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_focusinevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_FocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperFocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusOutEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_focusoutevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_EnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperEnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEnterEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_enterevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_LeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperLeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnLeaveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_leaveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_PaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperPaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnPaintEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_paintevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperMoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_moveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnResizeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_resizeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_CloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperCloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCloseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_closeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnContextMenuEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_contextmenuevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_TabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperTabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnTabletEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_tabletevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnActionEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_actionevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperDragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragEnterEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_dragenterevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperDragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_dragmoveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperDragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragLeaveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_dragleaveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperDropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDropEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_dropevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnShowEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_showevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_HideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperHideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHideEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_hideevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_NativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_SuperNativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnNativeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_nativeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnChangeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_changeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_Metric(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_SuperMetric(const KPixmapRegionSelectorWidget* self, int param1) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetric(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_metric_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_InitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperInitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInitPainter(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_initpainter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPixmapRegionSelectorWidget_Redirected(const KPixmapRegionSelectorWidget* self, QPoint* offset) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPixmapRegionSelectorWidget_SuperRedirected(const KPixmapRegionSelectorWidget* self, QPoint* offset) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnRedirected(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_redirected_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPixmapRegionSelectorWidget_SharedPainter(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPixmapRegionSelectorWidget_SuperSharedPainter(const KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSharedPainter(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_sharedpainter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_InputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperInputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInputMethodEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_inputmethodevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPixmapRegionSelectorWidget_InputMethodQuery(const KPixmapRegionSelectorWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPixmapRegionSelectorWidget_SuperInputMethodQuery(const KPixmapRegionSelectorWidget* self, int param1) {
    return new QVariant(self->KPixmapRegionSelectorWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInputMethodQuery(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self)))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_inputmethodquery_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_FocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        return vkpixmapregionselectorwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_SuperFocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusNextPrevChild(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_TimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperTimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnTimerEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_timerevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnChildEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_childevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_CustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperCustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCustomEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_customevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnConnectNotify(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_connectnotify_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget) {
        vkpixmapregionselectorwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_SuperDisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->KPixmapRegionSelectorWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDisconnectNotify(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self))
        vkpixmapregionselectorwidget->kpixmapregionselectorwidget_disconnectnotify_callback = reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPixmapRegionSelectorWidget_UpdateMicroFocus(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapRegionSelectorWidget_Create(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::create();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapRegionSelectorWidget_Destroy(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::destroy();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorWidget_FocusNextChild(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorWidget_FocusPreviousChild(KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self)) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPixmapRegionSelectorWidget_Sender(const KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::sender();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapRegionSelectorWidget_SenderSignalIndex(const KPixmapRegionSelectorWidget* self) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapRegionSelectorWidget_Receivers(const KPixmapRegionSelectorWidget* self, const char* signal) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorWidget_IsSignalConnected(const KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPixmapRegionSelectorWidget_GetDecodedMetricF(const KPixmapRegionSelectorWidget* self, int metricA, int metricB) {
    if (auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self))) {
        return vkpixmapregionselectorwidget->VirtualKPixmapRegionSelectorWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorWidget::getDecodedMetricF called without a directly constructed type");
}

void KPixmapRegionSelectorWidget_Delete(KPixmapRegionSelectorWidget* self) {
    delete self;
}
