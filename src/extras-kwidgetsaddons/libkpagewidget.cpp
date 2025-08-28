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
#include <QByteArray>
#include <cstring>
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
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageWidget_Tr(const char* s) {
    QString _ret = KPageWidget::tr(s);
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
    KPageWidget::connect(self, &KPageWidget::currentPageChanged, [self, slotFunc](KPageWidgetItem* current, KPageWidgetItem* before) {
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
    KPageWidget::connect(self, &KPageWidget::pageToggled, [self, slotFunc](KPageWidgetItem* page, bool checked) {
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
    KPageWidget::connect(self, &KPageWidget::pageRemoved, [self, slotFunc](KPageWidgetItem* page) {
        KPageWidgetItem* sigval1 = page;
        slotFunc(self, sigval1);
    });
}

libqt_string KPageWidget_Tr2(const char* s, const char* c) {
    QString _ret = KPageWidget::tr(s, c);
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
    QString _ret = KPageWidget::tr(s, c, static_cast<int>(n));
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
int KPageWidget_QBaseMetacall(KPageWidget* self, int param1, int param2, void** param3) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Metacall_IsBase(true);
        return vkpagewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPageWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetacall(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Metacall_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemView* KPageWidget_CreateView(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->createView();
    } else {
        return ((VirtualKPageWidget*)self)->createView();
    }
}

// Base class handler implementation
QAbstractItemView* KPageWidget_QBaseCreateView(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CreateView_IsBase(true);
        return vkpagewidget->createView();
    } else {
        return ((VirtualKPageWidget*)self)->createView();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCreateView(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CreateView_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_CreateView_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_ShowPageHeader(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->showPageHeader();
    } else {
        return ((VirtualKPageWidget*)self)->showPageHeader();
    }
}

// Base class handler implementation
bool KPageWidget_QBaseShowPageHeader(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ShowPageHeader_IsBase(true);
        return vkpagewidget->showPageHeader();
    } else {
        return ((VirtualKPageWidget*)self)->showPageHeader();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnShowPageHeader(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ShowPageHeader_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ShowPageHeader_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_ViewPosition(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return static_cast<int>(vkpagewidget->viewPosition());
    } else {
        return static_cast<int>(((VirtualKPageWidget*)self)->viewPosition());
    }
}

// Base class handler implementation
int KPageWidget_QBaseViewPosition(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ViewPosition_IsBase(true);
        return static_cast<int>(vkpagewidget->viewPosition());
    } else {
        return static_cast<int>(((VirtualKPageWidget*)self)->viewPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnViewPosition(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ViewPosition_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ViewPosition_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_DevType(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->devType();
    } else {
        return self->KPageWidget::devType();
    }
}

// Base class handler implementation
int KPageWidget_QBaseDevType(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DevType_IsBase(true);
        return vkpagewidget->devType();
    } else {
        return self->KPageWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDevType(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DevType_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_SetVisible(KPageWidget* self, bool visible) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setVisible(visible);
    } else {
        self->KPageWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KPageWidget_QBaseSetVisible(KPageWidget* self, bool visible) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SetVisible_IsBase(true);
        vkpagewidget->setVisible(visible);
    } else {
        self->KPageWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSetVisible(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SetVisible_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageWidget_SizeHint(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return new QSize(vkpagewidget->sizeHint());
    } else {
        return new QSize(((VirtualKPageWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPageWidget_QBaseSizeHint(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SizeHint_IsBase(true);
        return new QSize(vkpagewidget->sizeHint());
    } else {
        return new QSize(((VirtualKPageWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSizeHint(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SizeHint_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageWidget_MinimumSizeHint(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return new QSize(vkpagewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPageWidget_QBaseMinimumSizeHint(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkpagewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMinimumSizeHint(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_HeightForWidth(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPageWidget_QBaseHeightForWidth(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HeightForWidth_IsBase(true);
        return vkpagewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHeightForWidth(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_HasHeightForWidth(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->hasHeightForWidth();
    } else {
        return self->KPageWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPageWidget_QBaseHasHeightForWidth(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HasHeightForWidth_IsBase(true);
        return vkpagewidget->hasHeightForWidth();
    } else {
        return self->KPageWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHasHeightForWidth(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPageWidget_PaintEngine(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->paintEngine();
    } else {
        return self->KPageWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPageWidget_QBasePaintEngine(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_PaintEngine_IsBase(true);
        return vkpagewidget->paintEngine();
    } else {
        return self->KPageWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnPaintEngine(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_PaintEngine_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_Event(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->event(event);
    } else {
        return ((VirtualKPageWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KPageWidget_QBaseEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Event_IsBase(true);
        return vkpagewidget->event(event);
    } else {
        return ((VirtualKPageWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Event_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_MousePressEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->mousePressEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseMousePressEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MousePressEvent_IsBase(true);
        vkpagewidget->mousePressEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMousePressEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_MouseReleaseEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseMouseReleaseEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseReleaseEvent_IsBase(true);
        vkpagewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseReleaseEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_MouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseMouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseDoubleClickEvent_IsBase(true);
        vkpagewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseDoubleClickEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_MouseMoveEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseMouseMoveEvent(KPageWidget* self, QMouseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseMoveEvent_IsBase(true);
        vkpagewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMouseMoveEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_WheelEvent(KPageWidget* self, QWheelEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->wheelEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseWheelEvent(KPageWidget* self, QWheelEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_WheelEvent_IsBase(true);
        vkpagewidget->wheelEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnWheelEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_WheelEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_KeyPressEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->keyPressEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseKeyPressEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_KeyPressEvent_IsBase(true);
        vkpagewidget->keyPressEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnKeyPressEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_KeyReleaseEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseKeyReleaseEvent(KPageWidget* self, QKeyEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_KeyReleaseEvent_IsBase(true);
        vkpagewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnKeyReleaseEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_FocusInEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->focusInEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseFocusInEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusInEvent_IsBase(true);
        vkpagewidget->focusInEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusInEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_FocusOutEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->focusOutEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseFocusOutEvent(KPageWidget* self, QFocusEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusOutEvent_IsBase(true);
        vkpagewidget->focusOutEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusOutEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_EnterEvent(KPageWidget* self, QEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->enterEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseEnterEvent(KPageWidget* self, QEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_EnterEvent_IsBase(true);
        vkpagewidget->enterEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEnterEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_EnterEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_LeaveEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->leaveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseLeaveEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_LeaveEvent_IsBase(true);
        vkpagewidget->leaveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnLeaveEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_PaintEvent(KPageWidget* self, QPaintEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->paintEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBasePaintEvent(KPageWidget* self, QPaintEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_PaintEvent_IsBase(true);
        vkpagewidget->paintEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnPaintEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_PaintEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_MoveEvent(KPageWidget* self, QMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->moveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseMoveEvent(KPageWidget* self, QMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MoveEvent_IsBase(true);
        vkpagewidget->moveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMoveEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_MoveEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ResizeEvent(KPageWidget* self, QResizeEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->resizeEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseResizeEvent(KPageWidget* self, QResizeEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ResizeEvent_IsBase(true);
        vkpagewidget->resizeEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnResizeEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_CloseEvent(KPageWidget* self, QCloseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->closeEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseCloseEvent(KPageWidget* self, QCloseEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CloseEvent_IsBase(true);
        vkpagewidget->closeEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCloseEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CloseEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ContextMenuEvent(KPageWidget* self, QContextMenuEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->contextMenuEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseContextMenuEvent(KPageWidget* self, QContextMenuEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ContextMenuEvent_IsBase(true);
        vkpagewidget->contextMenuEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnContextMenuEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_TabletEvent(KPageWidget* self, QTabletEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->tabletEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseTabletEvent(KPageWidget* self, QTabletEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_TabletEvent_IsBase(true);
        vkpagewidget->tabletEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnTabletEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_TabletEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ActionEvent(KPageWidget* self, QActionEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->actionEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseActionEvent(KPageWidget* self, QActionEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ActionEvent_IsBase(true);
        vkpagewidget->actionEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnActionEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ActionEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_DragEnterEvent(KPageWidget* self, QDragEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->dragEnterEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseDragEnterEvent(KPageWidget* self, QDragEnterEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragEnterEvent_IsBase(true);
        vkpagewidget->dragEnterEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragEnterEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_DragMoveEvent(KPageWidget* self, QDragMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->dragMoveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseDragMoveEvent(KPageWidget* self, QDragMoveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragMoveEvent_IsBase(true);
        vkpagewidget->dragMoveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragMoveEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_DragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseDragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragLeaveEvent_IsBase(true);
        vkpagewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDragLeaveEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_DropEvent(KPageWidget* self, QDropEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->dropEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseDropEvent(KPageWidget* self, QDropEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DropEvent_IsBase(true);
        vkpagewidget->dropEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDropEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DropEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ShowEvent(KPageWidget* self, QShowEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->showEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseShowEvent(KPageWidget* self, QShowEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ShowEvent_IsBase(true);
        vkpagewidget->showEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnShowEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ShowEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_HideEvent(KPageWidget* self, QHideEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->hideEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseHideEvent(KPageWidget* self, QHideEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HideEvent_IsBase(true);
        vkpagewidget->hideEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnHideEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_HideEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_NativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPageWidget_QBaseNativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_NativeEvent_IsBase(true);
        return vkpagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnNativeEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_NativeEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ChangeEvent(KPageWidget* self, QEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->changeEvent(param1);
    } else {
        ((VirtualKPageWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPageWidget_QBaseChangeEvent(KPageWidget* self, QEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ChangeEvent_IsBase(true);
        vkpagewidget->changeEvent(param1);
    } else {
        ((VirtualKPageWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnChangeEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_Metric(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPageWidget_QBaseMetric(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Metric_IsBase(true);
        return vkpagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnMetric(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Metric_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_InitPainter(const KPageWidget* self, QPainter* painter) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->initPainter(painter);
    } else {
        ((VirtualKPageWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPageWidget_QBaseInitPainter(const KPageWidget* self, QPainter* painter) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InitPainter_IsBase(true);
        vkpagewidget->initPainter(painter);
    } else {
        ((VirtualKPageWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInitPainter(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InitPainter_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPageWidget_Redirected(const KPageWidget* self, QPoint* offset) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->redirected(offset);
    } else {
        return ((VirtualKPageWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPageWidget_QBaseRedirected(const KPageWidget* self, QPoint* offset) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Redirected_IsBase(true);
        return vkpagewidget->redirected(offset);
    } else {
        return ((VirtualKPageWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnRedirected(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Redirected_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPageWidget_SharedPainter(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->sharedPainter();
    } else {
        return ((VirtualKPageWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPageWidget_QBaseSharedPainter(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SharedPainter_IsBase(true);
        return vkpagewidget->sharedPainter();
    } else {
        return ((VirtualKPageWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSharedPainter(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SharedPainter_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_InputMethodEvent(KPageWidget* self, QInputMethodEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPageWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPageWidget_QBaseInputMethodEvent(KPageWidget* self, QInputMethodEvent* param1) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InputMethodEvent_IsBase(true);
        vkpagewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPageWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInputMethodEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageWidget_InputMethodQuery(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return new QVariant(vkpagewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPageWidget_QBaseInputMethodQuery(const KPageWidget* self, int param1) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkpagewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnInputMethodQuery(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_FocusNextPrevChild(KPageWidget* self, bool next) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPageWidget_QBaseFocusNextPrevChild(KPageWidget* self, bool next) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusNextPrevChild_IsBase(true);
        return vkpagewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusNextPrevChild(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_EventFilter(KPageWidget* self, QObject* watched, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->eventFilter(watched, event);
    } else {
        return self->KPageWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPageWidget_QBaseEventFilter(KPageWidget* self, QObject* watched, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_EventFilter_IsBase(true);
        return vkpagewidget->eventFilter(watched, event);
    } else {
        return self->KPageWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnEventFilter(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_EventFilter_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_TimerEvent(KPageWidget* self, QTimerEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->timerEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseTimerEvent(KPageWidget* self, QTimerEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_TimerEvent_IsBase(true);
        vkpagewidget->timerEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnTimerEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_TimerEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ChildEvent(KPageWidget* self, QChildEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->childEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseChildEvent(KPageWidget* self, QChildEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ChildEvent_IsBase(true);
        vkpagewidget->childEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnChildEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ChildEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_CustomEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->customEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageWidget_QBaseCustomEvent(KPageWidget* self, QEvent* event) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CustomEvent_IsBase(true);
        vkpagewidget->customEvent(event);
    } else {
        ((VirtualKPageWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCustomEvent(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_CustomEvent_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_ConnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->connectNotify(*signal);
    } else {
        ((VirtualKPageWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidget_QBaseConnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ConnectNotify_IsBase(true);
        vkpagewidget->connectNotify(*signal);
    } else {
        ((VirtualKPageWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnConnectNotify(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_DisconnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidget_QBaseDisconnectNotify(KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DisconnectNotify_IsBase(true);
        vkpagewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDisconnectNotify(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_UpdateMicroFocus(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->updateMicroFocus();
    } else {
        ((VirtualKPageWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPageWidget_QBaseUpdateMicroFocus(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_UpdateMicroFocus_IsBase(true);
        vkpagewidget->updateMicroFocus();
    } else {
        ((VirtualKPageWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnUpdateMicroFocus(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_Create(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->create();
    } else {
        ((VirtualKPageWidget*)self)->create();
    }
}

// Base class handler implementation
void KPageWidget_QBaseCreate(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Create_IsBase(true);
        vkpagewidget->create();
    } else {
        ((VirtualKPageWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnCreate(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Create_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidget_Destroy(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->destroy();
    } else {
        ((VirtualKPageWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KPageWidget_QBaseDestroy(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Destroy_IsBase(true);
        vkpagewidget->destroy();
    } else {
        ((VirtualKPageWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnDestroy(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Destroy_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_FocusNextChild(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->focusNextChild();
    } else {
        return ((VirtualKPageWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPageWidget_QBaseFocusNextChild(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusNextChild_IsBase(true);
        return vkpagewidget->focusNextChild();
    } else {
        return ((VirtualKPageWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusNextChild(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_FocusPreviousChild(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->focusPreviousChild();
    } else {
        return ((VirtualKPageWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPageWidget_QBaseFocusPreviousChild(KPageWidget* self) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusPreviousChild_IsBase(true);
        return vkpagewidget->focusPreviousChild();
    } else {
        return ((VirtualKPageWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnFocusPreviousChild(KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = dynamic_cast<VirtualKPageWidget*>(self);
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageWidget_Sender(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->sender();
    } else {
        return ((VirtualKPageWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageWidget_QBaseSender(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Sender_IsBase(true);
        return vkpagewidget->sender();
    } else {
        return ((VirtualKPageWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSender(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Sender_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_SenderSignalIndex(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->senderSignalIndex();
    } else {
        return ((VirtualKPageWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageWidget_QBaseSenderSignalIndex(const KPageWidget* self) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SenderSignalIndex_IsBase(true);
        return vkpagewidget->senderSignalIndex();
    } else {
        return ((VirtualKPageWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnSenderSignalIndex(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidget_Receivers(const KPageWidget* self, const char* signal) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->receivers(signal);
    } else {
        return ((VirtualKPageWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageWidget_QBaseReceivers(const KPageWidget* self, const char* signal) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Receivers_IsBase(true);
        return vkpagewidget->receivers(signal);
    } else {
        return ((VirtualKPageWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnReceivers(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_Receivers_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidget_IsSignalConnected(const KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageWidget_QBaseIsSignalConnected(const KPageWidget* self, const QMetaMethod* signal) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_IsSignalConnected_IsBase(true);
        return vkpagewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnIsSignalConnected(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPageWidget_GetDecodedMetricF(const KPageWidget* self, int metricA, int metricB) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        return vkpagewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPageWidget_QBaseGetDecodedMetricF(const KPageWidget* self, int metricA, int metricB) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_GetDecodedMetricF_IsBase(true);
        return vkpagewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidget_OnGetDecodedMetricF(const KPageWidget* self, intptr_t slot) {
    auto* vkpagewidget = const_cast<VirtualKPageWidget*>(dynamic_cast<const VirtualKPageWidget*>(self));
    if (vkpagewidget && vkpagewidget->isVirtualKPageWidget) {
        vkpagewidget->setKPageWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPageWidget::KPageWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KPageWidget_Delete(KPageWidget* self) {
    delete self;
}
