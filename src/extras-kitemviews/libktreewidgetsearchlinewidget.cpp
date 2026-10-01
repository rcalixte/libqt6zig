#include <KTreeWidgetSearchLine>
#include <KTreeWidgetSearchLineWidget>
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
#include <QTreeWidget>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ktreewidgetsearchlinewidget.h>
#include "libktreewidgetsearchlinewidget.h"
#include "libktreewidgetsearchlinewidget.hxx"

KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new(QWidget* parent) {
    return new VirtualKTreeWidgetSearchLineWidget(parent);
}

KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new2() {
    return new VirtualKTreeWidgetSearchLineWidget();
}

KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new3(QWidget* parent, QTreeWidget* treeWidget) {
    return new VirtualKTreeWidgetSearchLineWidget(parent, treeWidget);
}

QMetaObject* KTreeWidgetSearchLineWidget_MetaObject(const KTreeWidgetSearchLineWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTreeWidgetSearchLineWidget_Metacast(KTreeWidgetSearchLineWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTreeWidgetSearchLineWidget_Metacall(KTreeWidgetSearchLineWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTreeWidgetSearchLineWidget_Tr(const char* s) {
    auto _ret = KTreeWidgetSearchLineWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_SearchLine(const KTreeWidgetSearchLineWidget* self) {
    return self->searchLine();
}

void KTreeWidgetSearchLineWidget_CreateWidgets(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->createWidgets();
    }
}

KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_CreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->createSearchLine(treeWidget);
    }
    qFatal("Error: Protected method KTreeWidgetSearchLineWidget::createSearchLine called without a directly constructed type");
}

libqt_string KTreeWidgetSearchLineWidget_Tr2(const char* s, const char* c) {
    auto _ret = KTreeWidgetSearchLineWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTreeWidgetSearchLineWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTreeWidgetSearchLineWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTreeWidgetSearchLineWidget_SuperMetaObject(const KTreeWidgetSearchLineWidget* self) {
    return (QMetaObject*)self->KTreeWidgetSearchLineWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetaObject(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_metaobject_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTreeWidgetSearchLineWidget_SuperMetacast(KTreeWidgetSearchLineWidget* self, const char* param1) {
    return self->KTreeWidgetSearchLineWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetacast(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_metacast_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_SuperMetacall(KTreeWidgetSearchLineWidget* self, int param1, int param2, void** param3) {
    return self->KTreeWidgetSearchLineWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetacall(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_metacall_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperCreateWidgets(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::createWidgets();
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::createWidgets called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCreateWidgets(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_createwidgets_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CreateWidgets_Callback>(slot);
}

// Base class handler implementation
KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_SuperCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::createSearchLine called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCreateSearchLine(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_createsearchline_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CreateSearchLine_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_DevType(const KTreeWidgetSearchLineWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_SuperDevType(const KTreeWidgetSearchLineWidget* self) {
    return self->KTreeWidgetSearchLineWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDevType(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_devtype_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_SetVisible(KTreeWidgetSearchLineWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperSetVisible(KTreeWidgetSearchLineWidget* self, bool visible) {
    self->KTreeWidgetSearchLineWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSetVisible(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_setvisible_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLineWidget_SizeHint(const KTreeWidgetSearchLineWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTreeWidgetSearchLineWidget_SuperSizeHint(const KTreeWidgetSearchLineWidget* self) {
    return new QSize(self->KTreeWidgetSearchLineWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSizeHint(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_sizehint_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLineWidget_MinimumSizeHint(const KTreeWidgetSearchLineWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTreeWidgetSearchLineWidget_SuperMinimumSizeHint(const KTreeWidgetSearchLineWidget* self) {
    return new QSize(self->KTreeWidgetSearchLineWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMinimumSizeHint(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_minimumsizehint_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_HeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_SuperHeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1) {
    return self->KTreeWidgetSearchLineWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHeightForWidth(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_heightforwidth_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_HasHeightForWidth(const KTreeWidgetSearchLineWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_SuperHasHeightForWidth(const KTreeWidgetSearchLineWidget* self) {
    return self->KTreeWidgetSearchLineWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHasHeightForWidth(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTreeWidgetSearchLineWidget_PaintEngine(const KTreeWidgetSearchLineWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTreeWidgetSearchLineWidget_SuperPaintEngine(const KTreeWidgetSearchLineWidget* self) {
    return self->KTreeWidgetSearchLineWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnPaintEngine(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_paintengine_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_Event(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_SuperEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_event_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMousePressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_mousepressevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_mousemoveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_WheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnWheelEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_wheelevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_KeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnKeyPressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_keypressevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_KeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_FocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusInEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_focusinevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_FocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusOutEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_focusoutevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_EnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_enterevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_LeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_leaveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_PaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperPaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnPaintEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_paintevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_moveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnResizeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_resizeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_CloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCloseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_closeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnContextMenuEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_contextmenuevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_TabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnTabletEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_tabletevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnActionEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_actionevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_dragenterevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_dragmoveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_dragleaveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDropEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_dropevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnShowEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_showevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_HideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHideEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_hideevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_NativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_SuperNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnNativeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_nativeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnChangeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_changeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_Metric(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_SuperMetric(const KTreeWidgetSearchLineWidget* self, int param1) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetric(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_metric_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_InitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInitPainter(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_initpainter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTreeWidgetSearchLineWidget_Redirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTreeWidgetSearchLineWidget_SuperRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnRedirected(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_redirected_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTreeWidgetSearchLineWidget_SharedPainter(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTreeWidgetSearchLineWidget_SuperSharedPainter(const KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSharedPainter(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_sharedpainter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_InputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInputMethodEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_inputmethodevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTreeWidgetSearchLineWidget_InputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KTreeWidgetSearchLineWidget_SuperInputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1) {
    return new QVariant(self->KTreeWidgetSearchLineWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInputMethodQuery(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self)))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_inputmethodquery_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_FocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        return vktreewidgetsearchlinewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_SuperFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        return vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_EventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_SuperEventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event) {
    return self->KTreeWidgetSearchLineWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEventFilter(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_eventfilter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_TimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnTimerEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_timerevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnChildEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_childevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_CustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCustomEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_customevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnConnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_connectnotify_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget) {
        vktreewidgetsearchlinewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_SuperDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->KTreeWidgetSearchLineWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLineWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDisconnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self))
        vktreewidgetsearchlinewidget->ktreewidgetsearchlinewidget_disconnectnotify_callback = reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTreeWidgetSearchLineWidget_UpdateMicroFocus(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTreeWidgetSearchLineWidget_Create(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::create();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTreeWidgetSearchLineWidget_Destroy(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::destroy();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLineWidget_FocusNextChild(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLineWidget_FocusPreviousChild(KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self)) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTreeWidgetSearchLineWidget_Sender(const KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::sender();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTreeWidgetSearchLineWidget_SenderSignalIndex(const KTreeWidgetSearchLineWidget* self) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTreeWidgetSearchLineWidget_Receivers(const KTreeWidgetSearchLineWidget* self, const char* signal) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLineWidget_IsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTreeWidgetSearchLineWidget_GetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB) {
    if (auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self))) {
        return vktreewidgetsearchlinewidget->VirtualKTreeWidgetSearchLineWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLineWidget::getDecodedMetricF called without a directly constructed type");
}

void KTreeWidgetSearchLineWidget_Delete(KTreeWidgetSearchLineWidget* self) {
    delete self;
}
