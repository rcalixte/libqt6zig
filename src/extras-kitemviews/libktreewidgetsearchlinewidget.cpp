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
#include <QByteArray>
#include <cstring>
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
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTreeWidgetSearchLineWidget_Tr(const char* s) {
    QString _ret = KTreeWidgetSearchLineWidget::tr(s);
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
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->createWidgets();
    }
}

KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_CreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->createSearchLine(treeWidget);
    }
    return {};
}

libqt_string KTreeWidgetSearchLineWidget_Tr2(const char* s, const char* c) {
    QString _ret = KTreeWidgetSearchLineWidget::tr(s, c);
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
    QString _ret = KTreeWidgetSearchLineWidget::tr(s, c, static_cast<int>(n));
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
int KTreeWidgetSearchLineWidget_QBaseMetacall(KTreeWidgetSearchLineWidget* self, int param1, int param2, void** param3) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Metacall_IsBase(true);
        return vktreewidgetsearchlinewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTreeWidgetSearchLineWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetacall(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Metacall_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseCreateWidgets(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CreateWidgets_IsBase(true);
        vktreewidgetsearchlinewidget->createWidgets();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->createWidgets();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCreateWidgets(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CreateWidgets_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CreateWidgets_Callback>(slot));
    }
}

// Base class handler implementation
KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_QBaseCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CreateSearchLine_IsBase(true);
        return vktreewidgetsearchlinewidget->createSearchLine(treeWidget);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->createSearchLine(treeWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCreateSearchLine(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CreateSearchLine_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CreateSearchLine_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_DevType(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->devType();
    } else {
        return self->KTreeWidgetSearchLineWidget::devType();
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_QBaseDevType(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DevType_IsBase(true);
        return vktreewidgetsearchlinewidget->devType();
    } else {
        return self->KTreeWidgetSearchLineWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDevType(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DevType_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_SetVisible(KTreeWidgetSearchLineWidget* self, bool visible) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setVisible(visible);
    } else {
        self->KTreeWidgetSearchLineWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseSetVisible(KTreeWidgetSearchLineWidget* self, bool visible) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SetVisible_IsBase(true);
        vktreewidgetsearchlinewidget->setVisible(visible);
    } else {
        self->KTreeWidgetSearchLineWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSetVisible(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SetVisible_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLineWidget_SizeHint(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return new QSize(vktreewidgetsearchlinewidget->sizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLineWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTreeWidgetSearchLineWidget_QBaseSizeHint(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SizeHint_IsBase(true);
        return new QSize(vktreewidgetsearchlinewidget->sizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLineWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSizeHint(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SizeHint_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLineWidget_MinimumSizeHint(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return new QSize(vktreewidgetsearchlinewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLineWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTreeWidgetSearchLineWidget_QBaseMinimumSizeHint(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vktreewidgetsearchlinewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLineWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMinimumSizeHint(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_HeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTreeWidgetSearchLineWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_QBaseHeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HeightForWidth_IsBase(true);
        return vktreewidgetsearchlinewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTreeWidgetSearchLineWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHeightForWidth(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_HasHeightForWidth(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->hasHeightForWidth();
    } else {
        return self->KTreeWidgetSearchLineWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseHasHeightForWidth(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HasHeightForWidth_IsBase(true);
        return vktreewidgetsearchlinewidget->hasHeightForWidth();
    } else {
        return self->KTreeWidgetSearchLineWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHasHeightForWidth(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTreeWidgetSearchLineWidget_PaintEngine(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->paintEngine();
    } else {
        return self->KTreeWidgetSearchLineWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTreeWidgetSearchLineWidget_QBasePaintEngine(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_PaintEngine_IsBase(true);
        return vktreewidgetsearchlinewidget->paintEngine();
    } else {
        return self->KTreeWidgetSearchLineWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnPaintEngine(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_PaintEngine_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_Event(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->event(event);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Event_IsBase(true);
        return vktreewidgetsearchlinewidget->event(event);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Event_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->mousePressEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MousePressEvent_IsBase(true);
        vktreewidgetsearchlinewidget->mousePressEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMousePressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseReleaseEvent_IsBase(true);
        vktreewidgetsearchlinewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseDoubleClickEvent_IsBase(true);
        vktreewidgetsearchlinewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseMoveEvent_IsBase(true);
        vktreewidgetsearchlinewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMouseMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_WheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->wheelEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_WheelEvent_IsBase(true);
        vktreewidgetsearchlinewidget->wheelEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnWheelEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_WheelEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_KeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->keyPressEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_KeyPressEvent_IsBase(true);
        vktreewidgetsearchlinewidget->keyPressEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnKeyPressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_KeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_KeyReleaseEvent_IsBase(true);
        vktreewidgetsearchlinewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_FocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->focusInEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusInEvent_IsBase(true);
        vktreewidgetsearchlinewidget->focusInEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusInEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_FocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->focusOutEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusOutEvent_IsBase(true);
        vktreewidgetsearchlinewidget->focusOutEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusOutEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_EnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->enterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_EnterEvent_IsBase(true);
        vktreewidgetsearchlinewidget->enterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_EnterEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_LeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->leaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_LeaveEvent_IsBase(true);
        vktreewidgetsearchlinewidget->leaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_PaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->paintEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBasePaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_PaintEvent_IsBase(true);
        vktreewidgetsearchlinewidget->paintEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnPaintEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_PaintEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_MoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->moveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MoveEvent_IsBase(true);
        vktreewidgetsearchlinewidget->moveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_MoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->resizeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ResizeEvent_IsBase(true);
        vktreewidgetsearchlinewidget->resizeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnResizeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_CloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->closeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CloseEvent_IsBase(true);
        vktreewidgetsearchlinewidget->closeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCloseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CloseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->contextMenuEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ContextMenuEvent_IsBase(true);
        vktreewidgetsearchlinewidget->contextMenuEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnContextMenuEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_TabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->tabletEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_TabletEvent_IsBase(true);
        vktreewidgetsearchlinewidget->tabletEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnTabletEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_TabletEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->actionEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ActionEvent_IsBase(true);
        vktreewidgetsearchlinewidget->actionEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnActionEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ActionEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->dragEnterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragEnterEvent_IsBase(true);
        vktreewidgetsearchlinewidget->dragEnterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->dragMoveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragMoveEvent_IsBase(true);
        vktreewidgetsearchlinewidget->dragMoveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragLeaveEvent_IsBase(true);
        vktreewidgetsearchlinewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDragLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->dropEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DropEvent_IsBase(true);
        vktreewidgetsearchlinewidget->dropEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDropEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DropEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->showEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ShowEvent_IsBase(true);
        vktreewidgetsearchlinewidget->showEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnShowEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ShowEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_HideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->hideEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HideEvent_IsBase(true);
        vktreewidgetsearchlinewidget->hideEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnHideEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_HideEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_NativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_NativeEvent_IsBase(true);
        return vktreewidgetsearchlinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnNativeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_NativeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->changeEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ChangeEvent_IsBase(true);
        vktreewidgetsearchlinewidget->changeEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnChangeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_Metric(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_QBaseMetric(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Metric_IsBase(true);
        return vktreewidgetsearchlinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnMetric(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Metric_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_InitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->initPainter(painter);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InitPainter_IsBase(true);
        vktreewidgetsearchlinewidget->initPainter(painter);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInitPainter(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InitPainter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTreeWidgetSearchLineWidget_Redirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->redirected(offset);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTreeWidgetSearchLineWidget_QBaseRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Redirected_IsBase(true);
        return vktreewidgetsearchlinewidget->redirected(offset);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnRedirected(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Redirected_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTreeWidgetSearchLineWidget_SharedPainter(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->sharedPainter();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTreeWidgetSearchLineWidget_QBaseSharedPainter(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SharedPainter_IsBase(true);
        return vktreewidgetsearchlinewidget->sharedPainter();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSharedPainter(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SharedPainter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_InputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InputMethodEvent_IsBase(true);
        vktreewidgetsearchlinewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInputMethodEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTreeWidgetSearchLineWidget_InputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return new QVariant(vktreewidgetsearchlinewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTreeWidgetSearchLineWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KTreeWidgetSearchLineWidget_QBaseInputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vktreewidgetsearchlinewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTreeWidgetSearchLineWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnInputMethodQuery(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_FocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusNextPrevChild_IsBase(true);
        return vktreewidgetsearchlinewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_EventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->eventFilter(watched, event);
    } else {
        return self->KTreeWidgetSearchLineWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseEventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_EventFilter_IsBase(true);
        return vktreewidgetsearchlinewidget->eventFilter(watched, event);
    } else {
        return self->KTreeWidgetSearchLineWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnEventFilter(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_EventFilter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_TimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->timerEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_TimerEvent_IsBase(true);
        vktreewidgetsearchlinewidget->timerEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnTimerEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_TimerEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->childEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ChildEvent_IsBase(true);
        vktreewidgetsearchlinewidget->childEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnChildEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ChildEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_CustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->customEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CustomEvent_IsBase(true);
        vktreewidgetsearchlinewidget->customEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCustomEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_CustomEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_ConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->connectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ConnectNotify_IsBase(true);
        vktreewidgetsearchlinewidget->connectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnConnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_DisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DisconnectNotify_IsBase(true);
        vktreewidgetsearchlinewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDisconnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_UpdateMicroFocus(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->updateMicroFocus();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseUpdateMicroFocus(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_UpdateMicroFocus_IsBase(true);
        vktreewidgetsearchlinewidget->updateMicroFocus();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnUpdateMicroFocus(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_Create(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->create();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->create();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseCreate(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Create_IsBase(true);
        vktreewidgetsearchlinewidget->create();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnCreate(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Create_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLineWidget_Destroy(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->destroy();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLineWidget_QBaseDestroy(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Destroy_IsBase(true);
        vktreewidgetsearchlinewidget->destroy();
    } else {
        ((VirtualKTreeWidgetSearchLineWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnDestroy(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Destroy_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_FocusNextChild(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->focusNextChild();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseFocusNextChild(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusNextChild_IsBase(true);
        return vktreewidgetsearchlinewidget->focusNextChild();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusNextChild(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_FocusPreviousChild(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->focusPreviousChild();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseFocusPreviousChild(KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusPreviousChild_IsBase(true);
        return vktreewidgetsearchlinewidget->focusPreviousChild();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnFocusPreviousChild(KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = dynamic_cast<VirtualKTreeWidgetSearchLineWidget*>(self);
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTreeWidgetSearchLineWidget_Sender(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->sender();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTreeWidgetSearchLineWidget_QBaseSender(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Sender_IsBase(true);
        return vktreewidgetsearchlinewidget->sender();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSender(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Sender_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_SenderSignalIndex(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->senderSignalIndex();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_QBaseSenderSignalIndex(const KTreeWidgetSearchLineWidget* self) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SenderSignalIndex_IsBase(true);
        return vktreewidgetsearchlinewidget->senderSignalIndex();
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnSenderSignalIndex(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLineWidget_Receivers(const KTreeWidgetSearchLineWidget* self, const char* signal) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->receivers(signal);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTreeWidgetSearchLineWidget_QBaseReceivers(const KTreeWidgetSearchLineWidget* self, const char* signal) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Receivers_IsBase(true);
        return vktreewidgetsearchlinewidget->receivers(signal);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnReceivers(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_Receivers_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLineWidget_IsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLineWidget_QBaseIsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_IsSignalConnected_IsBase(true);
        return vktreewidgetsearchlinewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnIsSignalConnected(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTreeWidgetSearchLineWidget_GetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        return vktreewidgetsearchlinewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTreeWidgetSearchLineWidget_QBaseGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_GetDecodedMetricF_IsBase(true);
        return vktreewidgetsearchlinewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTreeWidgetSearchLineWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLineWidget_OnGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, intptr_t slot) {
    auto* vktreewidgetsearchlinewidget = const_cast<VirtualKTreeWidgetSearchLineWidget*>(dynamic_cast<const VirtualKTreeWidgetSearchLineWidget*>(self));
    if (vktreewidgetsearchlinewidget && vktreewidgetsearchlinewidget->isVirtualKTreeWidgetSearchLineWidget) {
        vktreewidgetsearchlinewidget->setKTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLineWidget::KTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KTreeWidgetSearchLineWidget_Delete(KTreeWidgetSearchLineWidget* self) {
    delete self;
}
