#include <KPageView>
#include <KPageWidget>
#include <KPageWidgetItem>
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
#include <kpagewidget.h>
#include "libkpagewidget.h"
#include "libkpagewidget.hxx"

KPageWidget* KPageWidget_new(QWidget* parent) {
    return new VirtualKPageWidget(parent);
}

KPageWidget* KPageWidget_new2() {
    return new VirtualKPageWidget();
}

QMetaObject* KPageWidget_MetaObject(const KPageWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageWidget_Metacast(KPageWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageWidget_Metacall(KPageWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageWidget_Tr(const char* s) {
    auto _ret = KPageWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPageWidgetItem* KPageWidget_AddPage(KPageWidget* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addPage(widget, name_QString);
}

void KPageWidget_AddPage2(KPageWidget* self, KPageWidgetItem* item) {
    self->addPage(item);
}

KPageWidgetItem* KPageWidget_InsertPage(KPageWidget* self, KPageWidgetItem* before, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->insertPage(before, widget, name_QString);
}

void KPageWidget_InsertPage2(KPageWidget* self, KPageWidgetItem* before, KPageWidgetItem* item) {
    self->insertPage(before, item);
}

KPageWidgetItem* KPageWidget_AddSubPage(KPageWidget* self, KPageWidgetItem* parent, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addSubPage(parent, widget, name_QString);
}

void KPageWidget_AddSubPage2(KPageWidget* self, KPageWidgetItem* parent, KPageWidgetItem* item) {
    self->addSubPage(parent, item);
}

void KPageWidget_RemovePage(KPageWidget* self, KPageWidgetItem* item) {
    self->removePage(item);
}

void KPageWidget_SetCurrentPage(KPageWidget* self, KPageWidgetItem* item) {
    self->setCurrentPage(item);
}

KPageWidgetItem* KPageWidget_CurrentPage(const KPageWidget* self) {
    return self->currentPage();
}

void KPageWidget_CurrentPageChanged(KPageWidget* self, KPageWidgetItem* current, KPageWidgetItem* before) {
    self->currentPageChanged(current, before);
}

void KPageWidget_Connect_CurrentPageChanged(KPageWidget* self, intptr_t slot) {
    void (*slotFunc)(KPageWidget*, KPageWidgetItem*, KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidget*, KPageWidgetItem*, KPageWidgetItem*)>(slot);
    KPageWidget::connect(self,
                         static_cast<void (KPageWidget::*)(KPageWidgetItem*, KPageWidgetItem*)>(&KPageWidget::currentPageChanged),
                         [self, slotFunc](KPageWidgetItem* current, KPageWidgetItem* before) {
                             KPageWidgetItem* sigval1 = current;
                             KPageWidgetItem* sigval2 = before;
                             slotFunc(self, sigval1, sigval2);
                         });
}

void KPageWidget_PageToggled(KPageWidget* self, KPageWidgetItem* page, bool checked) {
    self->pageToggled(page, checked);
}

void KPageWidget_Connect_PageToggled(KPageWidget* self, intptr_t slot) {
    void (*slotFunc)(KPageWidget*, KPageWidgetItem*, bool) = reinterpret_cast<void (*)(KPageWidget*, KPageWidgetItem*, bool)>(slot);
    KPageWidget::connect(self,
                         static_cast<void (KPageWidget::*)(KPageWidgetItem*, bool)>(&KPageWidget::pageToggled),
                         [self, slotFunc](KPageWidgetItem* page, bool checked) {
                             KPageWidgetItem* sigval1 = page;
                             bool sigval2 = checked;
                             slotFunc(self, sigval1, sigval2);
                         });
}

void KPageWidget_PageRemoved(KPageWidget* self, KPageWidgetItem* page) {
    self->pageRemoved(page);
}

void KPageWidget_Connect_PageRemoved(KPageWidget* self, intptr_t slot) {
    void (*slotFunc)(KPageWidget*, KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidget*, KPageWidgetItem*)>(slot);
    KPageWidget::connect(self,
                         static_cast<void (KPageWidget::*)(KPageWidgetItem*)>(&KPageWidget::pageRemoved),
                         [self, slotFunc](KPageWidgetItem* page) {
                             KPageWidgetItem* sigval1 = page;
                             slotFunc(self, sigval1);
                         });
}

libqt_string KPageWidget_Tr2(const char* s, const char* c) {
    auto _ret = KPageWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageWidget_SuperMetaObject(const KPageWidget* self) {
    return (QMetaObject*)self->KPageWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetaObject(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_metaobject_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageWidget_SuperMetacast(KPageWidget* self, const char* param1) {
    return self->KPageWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetacast(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_metacast_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageWidget_SuperMetacall(KPageWidget* self, int param1, int param2, void** param3) {
    return self->KPageWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetacall(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_metacall_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemView* KPageWidget_CreateView(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        return vkpagewidget->createView();
    } else {
        qFatal("Error: Protected virtual method KPageWidget::createView called without a directly constructed type");
    }
}

// Base class handler implementation
QAbstractItemView* KPageWidget_SuperCreateView(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->KPageWidget::createView();
    } else
        qFatal("Error: Protected virtual method KPageWidget::createView called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCreateView(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_createview_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_CreateView_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_ShowPageHeader(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        return vkpagewidget->showPageHeader();
    } else {
        qFatal("Error: Protected virtual method KPageWidget::showPageHeader called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageWidget_SuperShowPageHeader(const KPageWidget* self) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->KPageWidget::showPageHeader();
    } else
        qFatal("Error: Protected virtual method KPageWidget::showPageHeader called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnShowPageHeader(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_showpageheader_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ShowPageHeader_Callback>(slot);
}

// Derived class handler implementation
int KPageWidget_ViewPosition(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        return static_cast<int>(vkpagewidget->viewPosition());
    } else {
        qFatal("Error: Protected virtual method KPageWidget::viewPosition called without a directly constructed type");
    }
}

// Base class handler implementation
int KPageWidget_SuperViewPosition(const KPageWidget* self) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return static_cast<int>(vkpagewidget->KPageWidget::viewPosition());
    } else
        qFatal("Error: Protected virtual method KPageWidget::viewPosition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnViewPosition(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_viewposition_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ViewPosition_Callback>(slot);
}

// Derived class handler implementation
int KPageWidget_DevType(const KPageWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KPageWidget_SuperDevType(const KPageWidget* self) {
    return self->KPageWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDevType(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_devtype_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_SetVisible(KPageWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPageWidget_SuperSetVisible(KPageWidget* self, bool visible) {
    self->KPageWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSetVisible(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_setvisible_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageWidget_SizeHint(const KPageWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPageWidget_SuperSizeHint(const KPageWidget* self) {
    return new QSize(self->KPageWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSizeHint(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_sizehint_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageWidget_MinimumSizeHint(const KPageWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPageWidget_SuperMinimumSizeHint(const KPageWidget* self) {
    return new QSize(self->KPageWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMinimumSizeHint(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_minimumsizehint_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPageWidget_HeightForWidth(const KPageWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPageWidget_SuperHeightForWidth(const KPageWidget* self, int param1) {
    return self->KPageWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHeightForWidth(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_heightforwidth_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_HasHeightForWidth(const KPageWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPageWidget_SuperHasHeightForWidth(const KPageWidget* self) {
    return self->KPageWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHasHeightForWidth(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPageWidget_PaintEngine(const KPageWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPageWidget_SuperPaintEngine(const KPageWidget* self) {
    return self->KPageWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnPaintEngine(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_paintengine_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_Event(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        return vkpagewidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageWidget_SuperEvent(KPageWidget* self, QEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->KPageWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_event_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_MousePressEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperMousePressEvent(KPageWidget* self, QMouseEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMousePressEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_mousepressevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_MouseReleaseEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperMouseReleaseEvent(KPageWidget* self, QMouseEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseReleaseEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_MouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperMouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseDoubleClickEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_MouseMoveEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperMouseMoveEvent(KPageWidget* self, QMouseEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseMoveEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_mousemoveevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_WheelEvent(KPageWidget* self, QWheelEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperWheelEvent(KPageWidget* self, QWheelEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnWheelEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_wheelevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_KeyPressEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperKeyPressEvent(KPageWidget* self, QKeyEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnKeyPressEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_keypressevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_KeyReleaseEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperKeyReleaseEvent(KPageWidget* self, QKeyEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnKeyReleaseEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_FocusInEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperFocusInEvent(KPageWidget* self, QFocusEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusInEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_focusinevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_FocusOutEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperFocusOutEvent(KPageWidget* self, QFocusEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusOutEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_focusoutevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_EnterEvent(KPageWidget* self, QEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperEnterEvent(KPageWidget* self, QEnterEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEnterEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_enterevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_LeaveEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperLeaveEvent(KPageWidget* self, QEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnLeaveEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_leaveevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_PaintEvent(KPageWidget* self, QPaintEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperPaintEvent(KPageWidget* self, QPaintEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnPaintEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_paintevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_MoveEvent(KPageWidget* self, QMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperMoveEvent(KPageWidget* self, QMoveEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMoveEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_moveevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ResizeEvent(KPageWidget* self, QResizeEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperResizeEvent(KPageWidget* self, QResizeEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnResizeEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_resizeevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_CloseEvent(KPageWidget* self, QCloseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperCloseEvent(KPageWidget* self, QCloseEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCloseEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_closeevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ContextMenuEvent(KPageWidget* self, QContextMenuEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperContextMenuEvent(KPageWidget* self, QContextMenuEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnContextMenuEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_contextmenuevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_TabletEvent(KPageWidget* self, QTabletEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperTabletEvent(KPageWidget* self, QTabletEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnTabletEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_tabletevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ActionEvent(KPageWidget* self, QActionEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperActionEvent(KPageWidget* self, QActionEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnActionEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_actionevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_DragEnterEvent(KPageWidget* self, QDragEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperDragEnterEvent(KPageWidget* self, QDragEnterEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragEnterEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_dragenterevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_DragMoveEvent(KPageWidget* self, QDragMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperDragMoveEvent(KPageWidget* self, QDragMoveEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragMoveEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_dragmoveevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_DragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperDragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragLeaveEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_dragleaveevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_DropEvent(KPageWidget* self, QDropEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperDropEvent(KPageWidget* self, QDropEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDropEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_dropevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ShowEvent(KPageWidget* self, QShowEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperShowEvent(KPageWidget* self, QShowEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnShowEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_showevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_HideEvent(KPageWidget* self, QHideEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperHideEvent(KPageWidget* self, QHideEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHideEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_hideevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_NativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        return vkpagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPageWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageWidget_SuperNativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->KPageWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPageWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnNativeEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_nativeevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ChangeEvent(KPageWidget* self, QEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperChangeEvent(KPageWidget* self, QEvent* param1) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnChangeEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_changeevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPageWidget_Metric(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        return vkpagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPageWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPageWidget_SuperMetric(const KPageWidget* self, int param1) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->KPageWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPageWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetric(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_metric_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_InitPainter(const KPageWidget* self, QPainter* painter) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        vkpagewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperInitPainter(const KPageWidget* self, QPainter* painter) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        vkpagewidget->KPageWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPageWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInitPainter(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_initpainter_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPageWidget_Redirected(const KPageWidget* self, QPoint* offset) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        return vkpagewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPageWidget_SuperRedirected(const KPageWidget* self, QPoint* offset) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->KPageWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPageWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnRedirected(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_redirected_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPageWidget_SharedPainter(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget) {
        return vkpagewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPageWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPageWidget_SuperSharedPainter(const KPageWidget* self) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->KPageWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPageWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSharedPainter(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_sharedpainter_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_InputMethodEvent(KPageWidget* self, QInputMethodEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperInputMethodEvent(KPageWidget* self, QInputMethodEvent* param1) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInputMethodEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_inputmethodevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageWidget_InputMethodQuery(const KPageWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPageWidget_SuperInputMethodQuery(const KPageWidget* self, int param1) {
    return new QVariant(self->KPageWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInputMethodQuery(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self)))
        vkpagewidget->kpagewidget_inputmethodquery_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_FocusNextPrevChild(KPageWidget* self, bool next) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        return vkpagewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageWidget_SuperFocusNextPrevChild(KPageWidget* self, bool next) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->KPageWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPageWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusNextPrevChild(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidget_EventFilter(KPageWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPageWidget_SuperEventFilter(KPageWidget* self, QObject* watched, QEvent* event) {
    return self->KPageWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEventFilter(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_eventfilter_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_TimerEvent(KPageWidget* self, QTimerEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperTimerEvent(KPageWidget* self, QTimerEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnTimerEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_timerevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ChildEvent(KPageWidget* self, QChildEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperChildEvent(KPageWidget* self, QChildEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnChildEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_childevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_CustomEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperCustomEvent(KPageWidget* self, QEvent* event) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCustomEvent(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_customevent_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_ConnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperConnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnConnectNotify(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_connectnotify_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageWidget_DisconnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget) {
        vkpagewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidget_SuperDisconnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->KPageWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDisconnectNotify(KPageWidget* self, intptr_t slot) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self))
        vkpagewidget->kpagewidget_disconnectnotify_callback = reinterpret_cast<VirtualKPageWidget::KPageWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPageWidget_UpdateMicroFocus(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->VirtualKPageWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPageWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidget_Create(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->VirtualKPageWidget::create();
    } else
        qFatal("Error: Protected method KPageWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidget_Destroy(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        vkpagewidget->VirtualKPageWidget::destroy();
    } else
        qFatal("Error: Protected method KPageWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidget_FocusNextChild(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->VirtualKPageWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KPageWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidget_FocusPreviousChild(KPageWidget* self) {
    if (auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self)) {
        return vkpagewidget->VirtualKPageWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPageWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPageWidget_Sender(const KPageWidget* self) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->VirtualKPageWidget::sender();
    } else
        qFatal("Error: Protected method KPageWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidget_SenderSignalIndex(const KPageWidget* self) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->VirtualKPageWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidget_Receivers(const KPageWidget* self, const char* signal) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->VirtualKPageWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KPageWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidget_IsSignalConnected(const KPageWidget* self, const QMetaMethod* signal) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->VirtualKPageWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPageWidget_GetDecodedMetricF(const KPageWidget* self, int metricA, int metricB) {
    if (auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self))) {
        return vkpagewidget->VirtualKPageWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPageWidget::getDecodedMetricF called without a directly constructed type");
}

void KPageWidget_Delete(KPageWidget* self) {
    delete self;
}
