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
#include <QByteArray>
#include <cstring>
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
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPixmapRegionSelectorWidget_Tr(const char* s) {
    QString _ret = KPixmapRegionSelectorWidget::tr(s);
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
    KPixmapRegionSelectorWidget::connect(self, &KPixmapRegionSelectorWidget::pixmapRotated, [self, slotFunc]() {
        slotFunc(self);
    });
}

QMenu* KPixmapRegionSelectorWidget_CreatePopupMenu(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->createPopupMenu();
    }
    return {};
}

bool KPixmapRegionSelectorWidget_EventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->eventFilter(obj, ev);
    }
    return {};
}

libqt_string KPixmapRegionSelectorWidget_Tr2(const char* s, const char* c) {
    QString _ret = KPixmapRegionSelectorWidget::tr(s, c);
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
    QString _ret = KPixmapRegionSelectorWidget::tr(s, c, static_cast<int>(n));
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
int KPixmapRegionSelectorWidget_QBaseMetacall(KPixmapRegionSelectorWidget* self, int param1, int param2, void** param3) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Metacall_IsBase(true);
        return vkpixmapregionselectorwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPixmapRegionSelectorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetacall(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Metacall_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QMenu* KPixmapRegionSelectorWidget_QBaseCreatePopupMenu(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CreatePopupMenu_IsBase(true);
        return vkpixmapregionselectorwidget->createPopupMenu();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->createPopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCreatePopupMenu(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CreatePopupMenu_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CreatePopupMenu_Callback>(slot));
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseEventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_EventFilter_IsBase(true);
        return vkpixmapregionselectorwidget->eventFilter(obj, ev);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->eventFilter(obj, ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEventFilter(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_EventFilter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_DevType(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->devType();
    } else {
        return self->KPixmapRegionSelectorWidget::devType();
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_QBaseDevType(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DevType_IsBase(true);
        return vkpixmapregionselectorwidget->devType();
    } else {
        return self->KPixmapRegionSelectorWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDevType(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DevType_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_SetVisible(KPixmapRegionSelectorWidget* self, bool visible) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setVisible(visible);
    } else {
        self->KPixmapRegionSelectorWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseSetVisible(KPixmapRegionSelectorWidget* self, bool visible) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SetVisible_IsBase(true);
        vkpixmapregionselectorwidget->setVisible(visible);
    } else {
        self->KPixmapRegionSelectorWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSetVisible(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SetVisible_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorWidget_SizeHint(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return new QSize(vkpixmapregionselectorwidget->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPixmapRegionSelectorWidget_QBaseSizeHint(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SizeHint_IsBase(true);
        return new QSize(vkpixmapregionselectorwidget->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSizeHint(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SizeHint_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorWidget_MinimumSizeHint(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return new QSize(vkpixmapregionselectorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPixmapRegionSelectorWidget_QBaseMinimumSizeHint(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkpixmapregionselectorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMinimumSizeHint(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_HeightForWidth(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapRegionSelectorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_QBaseHeightForWidth(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HeightForWidth_IsBase(true);
        return vkpixmapregionselectorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapRegionSelectorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHeightForWidth(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_HasHeightForWidth(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->hasHeightForWidth();
    } else {
        return self->KPixmapRegionSelectorWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseHasHeightForWidth(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HasHeightForWidth_IsBase(true);
        return vkpixmapregionselectorwidget->hasHeightForWidth();
    } else {
        return self->KPixmapRegionSelectorWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHasHeightForWidth(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPixmapRegionSelectorWidget_PaintEngine(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->paintEngine();
    } else {
        return self->KPixmapRegionSelectorWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPixmapRegionSelectorWidget_QBasePaintEngine(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_PaintEngine_IsBase(true);
        return vkpixmapregionselectorwidget->paintEngine();
    } else {
        return self->KPixmapRegionSelectorWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnPaintEngine(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_PaintEngine_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_Event(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->event(event);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Event_IsBase(true);
        return vkpixmapregionselectorwidget->event(event);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Event_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->mousePressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseMousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MousePressEvent_IsBase(true);
        vkpixmapregionselectorwidget->mousePressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMousePressEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseMouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseReleaseEvent_IsBase(true);
        vkpixmapregionselectorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseReleaseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseDoubleClickEvent_IsBase(true);
        vkpixmapregionselectorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseMouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseMoveEvent_IsBase(true);
        vkpixmapregionselectorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMouseMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_WheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->wheelEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseWheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_WheelEvent_IsBase(true);
        vkpixmapregionselectorwidget->wheelEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnWheelEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_WheelEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_KeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->keyPressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseKeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_KeyPressEvent_IsBase(true);
        vkpixmapregionselectorwidget->keyPressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnKeyPressEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_KeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseKeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_KeyReleaseEvent_IsBase(true);
        vkpixmapregionselectorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnKeyReleaseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_FocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->focusInEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseFocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusInEvent_IsBase(true);
        vkpixmapregionselectorwidget->focusInEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusInEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_FocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->focusOutEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseFocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusOutEvent_IsBase(true);
        vkpixmapregionselectorwidget->focusOutEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusOutEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_EnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->enterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseEnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_EnterEvent_IsBase(true);
        vkpixmapregionselectorwidget->enterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnEnterEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_EnterEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_LeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->leaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseLeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_LeaveEvent_IsBase(true);
        vkpixmapregionselectorwidget->leaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnLeaveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_PaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->paintEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBasePaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_PaintEvent_IsBase(true);
        vkpixmapregionselectorwidget->paintEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnPaintEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_PaintEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_MoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->moveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseMoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MoveEvent_IsBase(true);
        vkpixmapregionselectorwidget->moveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_MoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->resizeEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ResizeEvent_IsBase(true);
        vkpixmapregionselectorwidget->resizeEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnResizeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_CloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->closeEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseCloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CloseEvent_IsBase(true);
        vkpixmapregionselectorwidget->closeEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCloseEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CloseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->contextMenuEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ContextMenuEvent_IsBase(true);
        vkpixmapregionselectorwidget->contextMenuEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnContextMenuEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_TabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->tabletEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseTabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_TabletEvent_IsBase(true);
        vkpixmapregionselectorwidget->tabletEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnTabletEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_TabletEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->actionEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ActionEvent_IsBase(true);
        vkpixmapregionselectorwidget->actionEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnActionEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ActionEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragEnterEvent_IsBase(true);
        vkpixmapregionselectorwidget->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragEnterEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragMoveEvent_IsBase(true);
        vkpixmapregionselectorwidget->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragMoveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragLeaveEvent_IsBase(true);
        vkpixmapregionselectorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDragLeaveEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->dropEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DropEvent_IsBase(true);
        vkpixmapregionselectorwidget->dropEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDropEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DropEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->showEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ShowEvent_IsBase(true);
        vkpixmapregionselectorwidget->showEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnShowEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ShowEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_HideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->hideEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseHideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HideEvent_IsBase(true);
        vkpixmapregionselectorwidget->hideEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnHideEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_HideEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_NativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseNativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_NativeEvent_IsBase(true);
        return vkpixmapregionselectorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnNativeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_NativeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->changeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ChangeEvent_IsBase(true);
        vkpixmapregionselectorwidget->changeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnChangeEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_Metric(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_QBaseMetric(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Metric_IsBase(true);
        return vkpixmapregionselectorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnMetric(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Metric_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_InitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->initPainter(painter);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseInitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InitPainter_IsBase(true);
        vkpixmapregionselectorwidget->initPainter(painter);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInitPainter(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InitPainter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPixmapRegionSelectorWidget_Redirected(const KPixmapRegionSelectorWidget* self, QPoint* offset) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->redirected(offset);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPixmapRegionSelectorWidget_QBaseRedirected(const KPixmapRegionSelectorWidget* self, QPoint* offset) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Redirected_IsBase(true);
        return vkpixmapregionselectorwidget->redirected(offset);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnRedirected(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Redirected_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPixmapRegionSelectorWidget_SharedPainter(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->sharedPainter();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPixmapRegionSelectorWidget_QBaseSharedPainter(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SharedPainter_IsBase(true);
        return vkpixmapregionselectorwidget->sharedPainter();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSharedPainter(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SharedPainter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_InputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseInputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InputMethodEvent_IsBase(true);
        vkpixmapregionselectorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInputMethodEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPixmapRegionSelectorWidget_InputMethodQuery(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return new QVariant(vkpixmapregionselectorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapRegionSelectorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPixmapRegionSelectorWidget_QBaseInputMethodQuery(const KPixmapRegionSelectorWidget* self, int param1) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkpixmapregionselectorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapRegionSelectorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnInputMethodQuery(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_FocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseFocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusNextPrevChild_IsBase(true);
        return vkpixmapregionselectorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusNextPrevChild(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_TimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->timerEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseTimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_TimerEvent_IsBase(true);
        vkpixmapregionselectorwidget->timerEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnTimerEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_TimerEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->childEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ChildEvent_IsBase(true);
        vkpixmapregionselectorwidget->childEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnChildEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ChildEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_CustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->customEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseCustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CustomEvent_IsBase(true);
        vkpixmapregionselectorwidget->customEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCustomEvent(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_CustomEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_ConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->connectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ConnectNotify_IsBase(true);
        vkpixmapregionselectorwidget->connectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnConnectNotify(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_DisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DisconnectNotify_IsBase(true);
        vkpixmapregionselectorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDisconnectNotify(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_UpdateMicroFocus(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->updateMicroFocus();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseUpdateMicroFocus(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_UpdateMicroFocus_IsBase(true);
        vkpixmapregionselectorwidget->updateMicroFocus();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnUpdateMicroFocus(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_Create(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->create();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->create();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseCreate(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Create_IsBase(true);
        vkpixmapregionselectorwidget->create();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnCreate(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Create_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorWidget_Destroy(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->destroy();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorWidget_QBaseDestroy(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Destroy_IsBase(true);
        vkpixmapregionselectorwidget->destroy();
    } else {
        ((VirtualKPixmapRegionSelectorWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnDestroy(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Destroy_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_FocusNextChild(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->focusNextChild();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseFocusNextChild(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusNextChild_IsBase(true);
        return vkpixmapregionselectorwidget->focusNextChild();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusNextChild(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_FocusPreviousChild(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->focusPreviousChild();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseFocusPreviousChild(KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusPreviousChild_IsBase(true);
        return vkpixmapregionselectorwidget->focusPreviousChild();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnFocusPreviousChild(KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = dynamic_cast<VirtualKPixmapRegionSelectorWidget*>(self);
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPixmapRegionSelectorWidget_Sender(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->sender();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPixmapRegionSelectorWidget_QBaseSender(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Sender_IsBase(true);
        return vkpixmapregionselectorwidget->sender();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSender(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Sender_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_SenderSignalIndex(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->senderSignalIndex();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_QBaseSenderSignalIndex(const KPixmapRegionSelectorWidget* self) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SenderSignalIndex_IsBase(true);
        return vkpixmapregionselectorwidget->senderSignalIndex();
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnSenderSignalIndex(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorWidget_Receivers(const KPixmapRegionSelectorWidget* self, const char* signal) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->receivers(signal);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPixmapRegionSelectorWidget_QBaseReceivers(const KPixmapRegionSelectorWidget* self, const char* signal) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Receivers_IsBase(true);
        return vkpixmapregionselectorwidget->receivers(signal);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnReceivers(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_Receivers_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorWidget_IsSignalConnected(const KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorWidget_QBaseIsSignalConnected(const KPixmapRegionSelectorWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_IsSignalConnected_IsBase(true);
        return vkpixmapregionselectorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnIsSignalConnected(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPixmapRegionSelectorWidget_GetDecodedMetricF(const KPixmapRegionSelectorWidget* self, int metricA, int metricB) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        return vkpixmapregionselectorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPixmapRegionSelectorWidget_QBaseGetDecodedMetricF(const KPixmapRegionSelectorWidget* self, int metricA, int metricB) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_GetDecodedMetricF_IsBase(true);
        return vkpixmapregionselectorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapRegionSelectorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorWidget_OnGetDecodedMetricF(const KPixmapRegionSelectorWidget* self, intptr_t slot) {
    auto* vkpixmapregionselectorwidget = const_cast<VirtualKPixmapRegionSelectorWidget*>(dynamic_cast<const VirtualKPixmapRegionSelectorWidget*>(self));
    if (vkpixmapregionselectorwidget && vkpixmapregionselectorwidget->isVirtualKPixmapRegionSelectorWidget) {
        vkpixmapregionselectorwidget->setKPixmapRegionSelectorWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorWidget::KPixmapRegionSelectorWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KPixmapRegionSelectorWidget_Delete(KPixmapRegionSelectorWidget* self) {
    delete self;
}
