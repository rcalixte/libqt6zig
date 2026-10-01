#include <KPageView>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
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
#include <QModelIndex>
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
#include <kpageview.h>
#include "libkpageview.h"
#include "libkpageview.hxx"

KPageView* KPageView_new(QWidget* parent) {
    return new VirtualKPageView(parent);
}

KPageView* KPageView_new2() {
    return new VirtualKPageView();
}

QMetaObject* KPageView_MetaObject(const KPageView* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageView_Metacast(KPageView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageView_Metacall(KPageView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageView_Tr(const char* s) {
    auto _ret = KPageView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageView_SetModel(KPageView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* KPageView_Model(const KPageView* self) {
    return self->model();
}

void KPageView_SetFaceType(KPageView* self, int faceType) {
    self->setFaceType(static_cast<KPageView::FaceType>(faceType));
}

int KPageView_FaceType(const KPageView* self) {
    return static_cast<int>(self->faceType());
}

void KPageView_SetCurrentPage(KPageView* self, const QModelIndex* index) {
    self->setCurrentPage(*index);
}

QModelIndex* KPageView_CurrentPage(const KPageView* self) {
    return new QModelIndex(self->currentPage());
}

void KPageView_SetItemDelegate(KPageView* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* KPageView_ItemDelegate(const KPageView* self) {
    return self->itemDelegate();
}

void KPageView_SetDefaultWidget(KPageView* self, QWidget* widget) {
    self->setDefaultWidget(widget);
}

void KPageView_SetPageHeader(KPageView* self, QWidget* header) {
    self->setPageHeader(header);
}

QWidget* KPageView_PageHeader(const KPageView* self) {
    return self->pageHeader();
}

void KPageView_SetPageFooter(KPageView* self, QWidget* footer) {
    self->setPageFooter(footer);
}

QWidget* KPageView_PageFooter(const KPageView* self) {
    return self->pageFooter();
}

void KPageView_CurrentPageChanged(KPageView* self, const QModelIndex* current, const QModelIndex* previous) {
    self->currentPageChanged(*current, *previous);
}

void KPageView_Connect_CurrentPageChanged(KPageView* self, intptr_t slot) {
    void (*slotFunc)(KPageView*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(KPageView*, QModelIndex*, QModelIndex*)>(slot);
    KPageView::connect(self,
                       static_cast<void (KPageView::*)(const QModelIndex&, const QModelIndex&)>(&KPageView::currentPageChanged),
                       [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
                           const QModelIndex& current_ret = current;
                           // Cast returned reference into pointer
                           QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
                           const QModelIndex& previous_ret = previous;
                           // Cast returned reference into pointer
                           QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
                           slotFunc(self, sigval1, sigval2);
                       });
}

QAbstractItemView* KPageView_CreateView(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        return vkpageview->createView();
    }
    qFatal("Error: Protected method KPageView::createView called without a directly constructed type");
}

bool KPageView_ShowPageHeader(const KPageView* self) {
    auto* vkpageview = dynamic_cast<const VirtualKPageView*>(self);
    if (vkpageview) {
        return vkpageview->showPageHeader();
    }
    qFatal("Error: Protected method KPageView::showPageHeader called without a directly constructed type");
}

int KPageView_ViewPosition(const KPageView* self) {
    auto* vkpageview = dynamic_cast<const VirtualKPageView*>(self);
    if (vkpageview) {
        return static_cast<int>(vkpageview->viewPosition());
    }
    qFatal("Error: Protected method KPageView::viewPosition called without a directly constructed type");
}

libqt_string KPageView_Tr2(const char* s, const char* c) {
    auto _ret = KPageView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageView_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageView::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageView_SuperMetaObject(const KPageView* self) {
    return (QMetaObject*)self->KPageView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetaObject(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_metaobject_callback = reinterpret_cast<VirtualKPageView::KPageView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageView_SuperMetacast(KPageView* self, const char* param1) {
    return self->KPageView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetacast(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_metacast_callback = reinterpret_cast<VirtualKPageView::KPageView_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageView_SuperMetacall(KPageView* self, int param1, int param2, void** param3) {
    return self->KPageView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetacall(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_metacall_callback = reinterpret_cast<VirtualKPageView::KPageView_Metacall_Callback>(slot);
}

// Base class handler implementation
QAbstractItemView* KPageView_SuperCreateView(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->KPageView::createView();
    } else
        qFatal("Error: Protected virtual method KPageView::createView called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCreateView(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_createview_callback = reinterpret_cast<VirtualKPageView::KPageView_CreateView_Callback>(slot);
}

// Base class handler implementation
bool KPageView_SuperShowPageHeader(const KPageView* self) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->KPageView::showPageHeader();
    } else
        qFatal("Error: Protected virtual method KPageView::showPageHeader called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnShowPageHeader(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_showpageheader_callback = reinterpret_cast<VirtualKPageView::KPageView_ShowPageHeader_Callback>(slot);
}

// Base class handler implementation
int KPageView_SuperViewPosition(const KPageView* self) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return static_cast<int>(vkpageview->KPageView::viewPosition());
    } else
        qFatal("Error: Protected virtual method KPageView::viewPosition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnViewPosition(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_viewposition_callback = reinterpret_cast<VirtualKPageView::KPageView_ViewPosition_Callback>(slot);
}

// Derived class handler implementation
int KPageView_DevType(const KPageView* self) {
    return self->devType();
}

// Base class handler implementation
int KPageView_SuperDevType(const KPageView* self) {
    return self->KPageView::devType();
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDevType(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_devtype_callback = reinterpret_cast<VirtualKPageView::KPageView_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPageView_SetVisible(KPageView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPageView_SuperSetVisible(KPageView* self, bool visible) {
    self->KPageView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSetVisible(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_setvisible_callback = reinterpret_cast<VirtualKPageView::KPageView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageView_SizeHint(const KPageView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPageView_SuperSizeHint(const KPageView* self) {
    return new QSize(self->KPageView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSizeHint(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_sizehint_callback = reinterpret_cast<VirtualKPageView::KPageView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageView_MinimumSizeHint(const KPageView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPageView_SuperMinimumSizeHint(const KPageView* self) {
    return new QSize(self->KPageView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMinimumSizeHint(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_minimumsizehint_callback = reinterpret_cast<VirtualKPageView::KPageView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPageView_HeightForWidth(const KPageView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPageView_SuperHeightForWidth(const KPageView* self, int param1) {
    return self->KPageView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHeightForWidth(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_heightforwidth_callback = reinterpret_cast<VirtualKPageView::KPageView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPageView_HasHeightForWidth(const KPageView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPageView_SuperHasHeightForWidth(const KPageView* self) {
    return self->KPageView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHasHeightForWidth(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_hasheightforwidth_callback = reinterpret_cast<VirtualKPageView::KPageView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPageView_PaintEngine(const KPageView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPageView_SuperPaintEngine(const KPageView* self) {
    return self->KPageView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnPaintEngine(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_paintengine_callback = reinterpret_cast<VirtualKPageView::KPageView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPageView_Event(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        return vkpageview->event(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageView_SuperEvent(KPageView* self, QEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->KPageView::event(event);
    } else
        qFatal("Error: Protected virtual method KPageView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_event_callback = reinterpret_cast<VirtualKPageView::KPageView_Event_Callback>(slot);
}

// Derived class handler implementation
void KPageView_MousePressEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperMousePressEvent(KPageView* self, QMouseEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMousePressEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_mousepressevent_callback = reinterpret_cast<VirtualKPageView::KPageView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_MouseReleaseEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperMouseReleaseEvent(KPageView* self, QMouseEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseReleaseEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_mousereleaseevent_callback = reinterpret_cast<VirtualKPageView::KPageView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_MouseDoubleClickEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperMouseDoubleClickEvent(KPageView* self, QMouseEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseDoubleClickEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPageView::KPageView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_MouseMoveEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperMouseMoveEvent(KPageView* self, QMouseEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseMoveEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_mousemoveevent_callback = reinterpret_cast<VirtualKPageView::KPageView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_WheelEvent(KPageView* self, QWheelEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperWheelEvent(KPageView* self, QWheelEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnWheelEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_wheelevent_callback = reinterpret_cast<VirtualKPageView::KPageView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_KeyPressEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperKeyPressEvent(KPageView* self, QKeyEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnKeyPressEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_keypressevent_callback = reinterpret_cast<VirtualKPageView::KPageView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_KeyReleaseEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperKeyReleaseEvent(KPageView* self, QKeyEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnKeyReleaseEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_keyreleaseevent_callback = reinterpret_cast<VirtualKPageView::KPageView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_FocusInEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperFocusInEvent(KPageView* self, QFocusEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusInEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_focusinevent_callback = reinterpret_cast<VirtualKPageView::KPageView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_FocusOutEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperFocusOutEvent(KPageView* self, QFocusEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusOutEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_focusoutevent_callback = reinterpret_cast<VirtualKPageView::KPageView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_EnterEvent(KPageView* self, QEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperEnterEvent(KPageView* self, QEnterEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEnterEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_enterevent_callback = reinterpret_cast<VirtualKPageView::KPageView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_LeaveEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperLeaveEvent(KPageView* self, QEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnLeaveEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_leaveevent_callback = reinterpret_cast<VirtualKPageView::KPageView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_PaintEvent(KPageView* self, QPaintEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperPaintEvent(KPageView* self, QPaintEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnPaintEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_paintevent_callback = reinterpret_cast<VirtualKPageView::KPageView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_MoveEvent(KPageView* self, QMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperMoveEvent(KPageView* self, QMoveEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMoveEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_moveevent_callback = reinterpret_cast<VirtualKPageView::KPageView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ResizeEvent(KPageView* self, QResizeEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperResizeEvent(KPageView* self, QResizeEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnResizeEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_resizeevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_CloseEvent(KPageView* self, QCloseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperCloseEvent(KPageView* self, QCloseEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCloseEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_closeevent_callback = reinterpret_cast<VirtualKPageView::KPageView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ContextMenuEvent(KPageView* self, QContextMenuEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperContextMenuEvent(KPageView* self, QContextMenuEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnContextMenuEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_contextmenuevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_TabletEvent(KPageView* self, QTabletEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperTabletEvent(KPageView* self, QTabletEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnTabletEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_tabletevent_callback = reinterpret_cast<VirtualKPageView::KPageView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ActionEvent(KPageView* self, QActionEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperActionEvent(KPageView* self, QActionEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnActionEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_actionevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_DragEnterEvent(KPageView* self, QDragEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperDragEnterEvent(KPageView* self, QDragEnterEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragEnterEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_dragenterevent_callback = reinterpret_cast<VirtualKPageView::KPageView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_DragMoveEvent(KPageView* self, QDragMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperDragMoveEvent(KPageView* self, QDragMoveEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragMoveEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_dragmoveevent_callback = reinterpret_cast<VirtualKPageView::KPageView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_DragLeaveEvent(KPageView* self, QDragLeaveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperDragLeaveEvent(KPageView* self, QDragLeaveEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragLeaveEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_dragleaveevent_callback = reinterpret_cast<VirtualKPageView::KPageView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_DropEvent(KPageView* self, QDropEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperDropEvent(KPageView* self, QDropEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDropEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_dropevent_callback = reinterpret_cast<VirtualKPageView::KPageView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ShowEvent(KPageView* self, QShowEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperShowEvent(KPageView* self, QShowEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnShowEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_showevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_HideEvent(KPageView* self, QHideEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperHideEvent(KPageView* self, QHideEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHideEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_hideevent_callback = reinterpret_cast<VirtualKPageView::KPageView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPageView_NativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        return vkpageview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPageView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageView_SuperNativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->KPageView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPageView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnNativeEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_nativeevent_callback = reinterpret_cast<VirtualKPageView::KPageView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ChangeEvent(KPageView* self, QEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperChangeEvent(KPageView* self, QEvent* param1) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnChangeEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_changeevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPageView_Metric(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview) {
        return vkpageview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPageView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPageView_SuperMetric(const KPageView* self, int param1) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->KPageView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPageView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetric(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_metric_callback = reinterpret_cast<VirtualKPageView::KPageView_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPageView_InitPainter(const KPageView* self, QPainter* painter) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview) {
        vkpageview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPageView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperInitPainter(const KPageView* self, QPainter* painter) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        vkpageview->KPageView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPageView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInitPainter(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_initpainter_callback = reinterpret_cast<VirtualKPageView::KPageView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPageView_Redirected(const KPageView* self, QPoint* offset) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview) {
        return vkpageview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPageView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPageView_SuperRedirected(const KPageView* self, QPoint* offset) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->KPageView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPageView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnRedirected(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_redirected_callback = reinterpret_cast<VirtualKPageView::KPageView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPageView_SharedPainter(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview) {
        return vkpageview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPageView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPageView_SuperSharedPainter(const KPageView* self) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->KPageView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPageView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSharedPainter(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_sharedpainter_callback = reinterpret_cast<VirtualKPageView::KPageView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPageView_InputMethodEvent(KPageView* self, QInputMethodEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperInputMethodEvent(KPageView* self, QInputMethodEvent* param1) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInputMethodEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_inputmethodevent_callback = reinterpret_cast<VirtualKPageView::KPageView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageView_InputMethodQuery(const KPageView* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPageView_SuperInputMethodQuery(const KPageView* self, int param1) {
    return new QVariant(self->KPageView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInputMethodQuery(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self)))
        vkpageview->kpageview_inputmethodquery_callback = reinterpret_cast<VirtualKPageView::KPageView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPageView_FocusNextPrevChild(KPageView* self, bool next) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        return vkpageview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPageView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageView_SuperFocusNextPrevChild(KPageView* self, bool next) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->KPageView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPageView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusNextPrevChild(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_focusnextprevchild_callback = reinterpret_cast<VirtualKPageView::KPageView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPageView_EventFilter(KPageView* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPageView_SuperEventFilter(KPageView* self, QObject* watched, QEvent* event) {
    return self->KPageView::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEventFilter(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_eventfilter_callback = reinterpret_cast<VirtualKPageView::KPageView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPageView_TimerEvent(KPageView* self, QTimerEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperTimerEvent(KPageView* self, QTimerEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnTimerEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_timerevent_callback = reinterpret_cast<VirtualKPageView::KPageView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ChildEvent(KPageView* self, QChildEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperChildEvent(KPageView* self, QChildEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnChildEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_childevent_callback = reinterpret_cast<VirtualKPageView::KPageView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_CustomEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperCustomEvent(KPageView* self, QEvent* event) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCustomEvent(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_customevent_callback = reinterpret_cast<VirtualKPageView::KPageView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageView_ConnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperConnectNotify(KPageView* self, const QMetaMethod* signal) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnConnectNotify(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_connectnotify_callback = reinterpret_cast<VirtualKPageView::KPageView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageView_DisconnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview) {
        vkpageview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageView_SuperDisconnectNotify(KPageView* self, const QMetaMethod* signal) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->KPageView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDisconnectNotify(KPageView* self, intptr_t slot) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self))
        vkpageview->kpageview_disconnectnotify_callback = reinterpret_cast<VirtualKPageView::KPageView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPageView_UpdateMicroFocus(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->VirtualKPageView::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPageView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageView_Create(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->VirtualKPageView::create();
    } else
        qFatal("Error: Protected method KPageView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageView_Destroy(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        vkpageview->VirtualKPageView::destroy();
    } else
        qFatal("Error: Protected method KPageView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageView_FocusNextChild(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->VirtualKPageView::focusNextChild();
    } else
        qFatal("Error: Protected method KPageView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageView_FocusPreviousChild(KPageView* self) {
    if (auto* vkpageview = dynamic_cast<VirtualKPageView*>(self)) {
        return vkpageview->VirtualKPageView::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPageView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPageView_Sender(const KPageView* self) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->VirtualKPageView::sender();
    } else
        qFatal("Error: Protected method KPageView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageView_SenderSignalIndex(const KPageView* self) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->VirtualKPageView::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageView_Receivers(const KPageView* self, const char* signal) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->VirtualKPageView::receivers(signal);
    } else
        qFatal("Error: Protected method KPageView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageView_IsSignalConnected(const KPageView* self, const QMetaMethod* signal) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->VirtualKPageView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPageView_GetDecodedMetricF(const KPageView* self, int metricA, int metricB) {
    if (auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self))) {
        return vkpageview->VirtualKPageView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPageView::getDecodedMetricF called without a directly constructed type");
}

void KPageView_Delete(KPageView* self) {
    delete self;
}
