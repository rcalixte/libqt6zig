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
#include <QVideoSink>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qvideowidget.h>
#include "libqvideowidget.h"
#include "libqvideowidget.hxx"

QVideoWidget* QVideoWidget_new(QWidget* parent) {
    return new VirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
    return new VirtualQVideoWidget();
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoWidget_Metacall(QVideoWidget* self, int param1, int param2, void** param3) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVideoWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVideoWidget_OnMetacall(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Metacall_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVideoWidget_QBaseMetacall(QVideoWidget* self, int param1, int param2, void** param3) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Metacall_IsBase(true);
        return vqvideowidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVideoWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVideoWidget_Tr(const char* s) {
    QString _ret = QVideoWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self) {
    return self->videoSink();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
    self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
    self->fullScreenChanged(fullScreen);
}

void QVideoWidget_Connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, bool) = reinterpret_cast<void (*)(QVideoWidget*, bool)>(slot);
    QVideoWidget::connect(self, &QVideoWidget::fullScreenChanged, [self, slotFunc](bool fullScreen) {
        bool sigval1 = fullScreen;
        slotFunc(self, sigval1);
    });
}

void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode) {
    self->aspectRatioModeChanged(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_Connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, int) = reinterpret_cast<void (*)(QVideoWidget*, int)>(slot);
    QVideoWidget::connect(self, &QVideoWidget::aspectRatioModeChanged, [self, slotFunc](Qt::AspectRatioMode mode) {
        int sigval1 = static_cast<int>(mode);
        slotFunc(self, sigval1);
    });
}

libqt_string QVideoWidget_Tr2(const char* s, const char* c) {
    QString _ret = QVideoWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return new QSize(vqvideowidget->sizeHint());
    } else {
        return new QSize(((VirtualQVideoWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QVideoWidget_QBaseSizeHint(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SizeHint_IsBase(true);
        return new QSize(vqvideowidget->sizeHint());
    } else {
        return new QSize(((VirtualQVideoWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSizeHint(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SizeHint_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_Event(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->event(event);
    } else {
        return ((VirtualQVideoWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Event_IsBase(true);
        return vqvideowidget->event(event);
    } else {
        return ((VirtualQVideoWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Event_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ShowEvent(QVideoWidget* self, QShowEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->showEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseShowEvent(QVideoWidget* self, QShowEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ShowEvent_IsBase(true);
        vqvideowidget->showEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnShowEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ShowEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_HideEvent(QVideoWidget* self, QHideEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->hideEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseHideEvent(QVideoWidget* self, QHideEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HideEvent_IsBase(true);
        vqvideowidget->hideEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHideEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HideEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->resizeEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ResizeEvent_IsBase(true);
        vqvideowidget->resizeEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnResizeEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MoveEvent(QVideoWidget* self, QMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->moveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMoveEvent(QVideoWidget* self, QMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MoveEvent_IsBase(true);
        vqvideowidget->moveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMoveEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_DevType(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->devType();
    } else {
        return self->QVideoWidget::devType();
    }
}

// Base class handler implementation
int QVideoWidget_QBaseDevType(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DevType_IsBase(true);
        return vqvideowidget->devType();
    } else {
        return self->QVideoWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDevType(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DevType_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_SetVisible(QVideoWidget* self, bool visible) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setVisible(visible);
    } else {
        self->QVideoWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseSetVisible(QVideoWidget* self, bool visible) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SetVisible_IsBase(true);
        vqvideowidget->setVisible(visible);
    } else {
        self->QVideoWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSetVisible(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SetVisible_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QVideoWidget_MinimumSizeHint(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return new QSize(vqvideowidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQVideoWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QVideoWidget_QBaseMinimumSizeHint(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqvideowidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQVideoWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMinimumSizeHint(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_HeightForWidth(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QVideoWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QVideoWidget_QBaseHeightForWidth(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HeightForWidth_IsBase(true);
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QVideoWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHeightForWidth(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_HasHeightForWidth(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->hasHeightForWidth();
    } else {
        return self->QVideoWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseHasHeightForWidth(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HasHeightForWidth_IsBase(true);
        return vqvideowidget->hasHeightForWidth();
    } else {
        return self->QVideoWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHasHeightForWidth(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QVideoWidget_PaintEngine(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->paintEngine();
    } else {
        return self->QVideoWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QVideoWidget_QBasePaintEngine(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_PaintEngine_IsBase(true);
        return vqvideowidget->paintEngine();
    } else {
        return self->QVideoWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEngine(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_PaintEngine_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->mousePressEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MousePressEvent_IsBase(true);
        vqvideowidget->mousePressEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMousePressEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseReleaseEvent_IsBase(true);
        vqvideowidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseReleaseEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseDoubleClickEvent_IsBase(true);
        vqvideowidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseDoubleClickEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->mouseMoveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseMoveEvent_IsBase(true);
        vqvideowidget->mouseMoveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseMoveEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_WheelEvent(QVideoWidget* self, QWheelEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->wheelEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseWheelEvent(QVideoWidget* self, QWheelEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_WheelEvent_IsBase(true);
        vqvideowidget->wheelEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnWheelEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_WheelEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_KeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->keyPressEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseKeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_KeyPressEvent_IsBase(true);
        vqvideowidget->keyPressEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyPressEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_KeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->keyReleaseEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseKeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_KeyReleaseEvent_IsBase(true);
        vqvideowidget->keyReleaseEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyReleaseEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_FocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->focusInEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseFocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusInEvent_IsBase(true);
        vqvideowidget->focusInEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusInEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_FocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->focusOutEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseFocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusOutEvent_IsBase(true);
        vqvideowidget->focusOutEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusOutEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_EnterEvent(QVideoWidget* self, QEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->enterEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseEnterEvent(QVideoWidget* self, QEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_EnterEvent_IsBase(true);
        vqvideowidget->enterEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEnterEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_EnterEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_LeaveEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->leaveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseLeaveEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_LeaveEvent_IsBase(true);
        vqvideowidget->leaveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnLeaveEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_PaintEvent(QVideoWidget* self, QPaintEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->paintEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBasePaintEvent(QVideoWidget* self, QPaintEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_PaintEvent_IsBase(true);
        vqvideowidget->paintEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_PaintEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_CloseEvent(QVideoWidget* self, QCloseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->closeEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCloseEvent(QVideoWidget* self, QCloseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_CloseEvent_IsBase(true);
        vqvideowidget->closeEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCloseEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_CloseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->contextMenuEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ContextMenuEvent_IsBase(true);
        vqvideowidget->contextMenuEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnContextMenuEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_TabletEvent(QVideoWidget* self, QTabletEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->tabletEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseTabletEvent(QVideoWidget* self, QTabletEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_TabletEvent_IsBase(true);
        vqvideowidget->tabletEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTabletEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_TabletEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ActionEvent(QVideoWidget* self, QActionEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->actionEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseActionEvent(QVideoWidget* self, QActionEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ActionEvent_IsBase(true);
        vqvideowidget->actionEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnActionEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ActionEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->dragEnterEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragEnterEvent_IsBase(true);
        vqvideowidget->dragEnterEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragEnterEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->dragMoveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragMoveEvent_IsBase(true);
        vqvideowidget->dragMoveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragMoveEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->dragLeaveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragLeaveEvent_IsBase(true);
        vqvideowidget->dragLeaveEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragLeaveEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DropEvent(QVideoWidget* self, QDropEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->dropEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDropEvent(QVideoWidget* self, QDropEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DropEvent_IsBase(true);
        vqvideowidget->dropEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDropEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DropEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_NativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQVideoWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseNativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_NativeEvent_IsBase(true);
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQVideoWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnNativeEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_NativeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ChangeEvent(QVideoWidget* self, QEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->changeEvent(param1);
    } else {
        ((VirtualQVideoWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseChangeEvent(QVideoWidget* self, QEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ChangeEvent_IsBase(true);
        vqvideowidget->changeEvent(param1);
    } else {
        ((VirtualQVideoWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChangeEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_Metric(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQVideoWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QVideoWidget_QBaseMetric(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Metric_IsBase(true);
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQVideoWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetric(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Metric_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_InitPainter(const QVideoWidget* self, QPainter* painter) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->initPainter(painter);
    } else {
        ((VirtualQVideoWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseInitPainter(const QVideoWidget* self, QPainter* painter) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InitPainter_IsBase(true);
        vqvideowidget->initPainter(painter);
    } else {
        ((VirtualQVideoWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInitPainter(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InitPainter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QVideoWidget_Redirected(const QVideoWidget* self, QPoint* offset) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->redirected(offset);
    } else {
        return ((VirtualQVideoWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QVideoWidget_QBaseRedirected(const QVideoWidget* self, QPoint* offset) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Redirected_IsBase(true);
        return vqvideowidget->redirected(offset);
    } else {
        return ((VirtualQVideoWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnRedirected(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Redirected_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QVideoWidget_SharedPainter(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->sharedPainter();
    } else {
        return ((VirtualQVideoWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QVideoWidget_QBaseSharedPainter(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SharedPainter_IsBase(true);
        return vqvideowidget->sharedPainter();
    } else {
        return ((VirtualQVideoWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSharedPainter(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SharedPainter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_InputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->inputMethodEvent(param1);
    } else {
        ((VirtualQVideoWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseInputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InputMethodEvent_IsBase(true);
        vqvideowidget->inputMethodEvent(param1);
    } else {
        ((VirtualQVideoWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QVideoWidget_InputMethodQuery(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return new QVariant(vqvideowidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQVideoWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QVideoWidget_QBaseInputMethodQuery(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqvideowidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQVideoWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodQuery(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusNextPrevChild(QVideoWidget* self, bool next) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQVideoWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusNextPrevChild(QVideoWidget* self, bool next) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusNextPrevChild_IsBase(true);
        return vqvideowidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQVideoWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusNextPrevChild(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_EventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->eventFilter(watched, event);
    } else {
        return self->QVideoWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseEventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_EventFilter_IsBase(true);
        return vqvideowidget->eventFilter(watched, event);
    } else {
        return self->QVideoWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEventFilter(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_EventFilter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_TimerEvent(QVideoWidget* self, QTimerEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->timerEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseTimerEvent(QVideoWidget* self, QTimerEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_TimerEvent_IsBase(true);
        vqvideowidget->timerEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTimerEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_TimerEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ChildEvent(QVideoWidget* self, QChildEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->childEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseChildEvent(QVideoWidget* self, QChildEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ChildEvent_IsBase(true);
        vqvideowidget->childEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChildEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ChildEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_CustomEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->customEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCustomEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_CustomEvent_IsBase(true);
        vqvideowidget->customEvent(event);
    } else {
        ((VirtualQVideoWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCustomEvent(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_CustomEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ConnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->connectNotify(*signal);
    } else {
        ((VirtualQVideoWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseConnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ConnectNotify_IsBase(true);
        vqvideowidget->connectNotify(*signal);
    } else {
        ((VirtualQVideoWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnConnectNotify(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DisconnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDisconnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DisconnectNotify_IsBase(true);
        vqvideowidget->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDisconnectNotify(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_UpdateMicroFocus(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->updateMicroFocus();
    } else {
        ((VirtualQVideoWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseUpdateMicroFocus(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_UpdateMicroFocus_IsBase(true);
        vqvideowidget->updateMicroFocus();
    } else {
        ((VirtualQVideoWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnUpdateMicroFocus(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_Create(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->create();
    } else {
        ((VirtualQVideoWidget*)self)->create();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCreate(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Create_IsBase(true);
        vqvideowidget->create();
    } else {
        ((VirtualQVideoWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCreate(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Create_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_Destroy(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->destroy();
    } else {
        ((VirtualQVideoWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDestroy(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Destroy_IsBase(true);
        vqvideowidget->destroy();
    } else {
        ((VirtualQVideoWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDestroy(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Destroy_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusNextChild(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->focusNextChild();
    } else {
        return ((VirtualQVideoWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusNextChild(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusNextChild_IsBase(true);
        return vqvideowidget->focusNextChild();
    } else {
        return ((VirtualQVideoWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusNextChild(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusPreviousChild(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->focusPreviousChild();
    } else {
        return ((VirtualQVideoWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusPreviousChild(QVideoWidget* self) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusPreviousChild_IsBase(true);
        return vqvideowidget->focusPreviousChild();
    } else {
        return ((VirtualQVideoWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusPreviousChild(QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVideoWidget_Sender(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->sender();
    } else {
        return ((VirtualQVideoWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVideoWidget_QBaseSender(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Sender_IsBase(true);
        return vqvideowidget->sender();
    } else {
        return ((VirtualQVideoWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSender(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Sender_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_SenderSignalIndex(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->senderSignalIndex();
    } else {
        return ((VirtualQVideoWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVideoWidget_QBaseSenderSignalIndex(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SenderSignalIndex_IsBase(true);
        return vqvideowidget->senderSignalIndex();
    } else {
        return ((VirtualQVideoWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSenderSignalIndex(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_Receivers(const QVideoWidget* self, const char* signal) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->receivers(signal);
    } else {
        return ((VirtualQVideoWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVideoWidget_QBaseReceivers(const QVideoWidget* self, const char* signal) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Receivers_IsBase(true);
        return vqvideowidget->receivers(signal);
    } else {
        return ((VirtualQVideoWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnReceivers(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_Receivers_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_IsSignalConnected(const QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        return vqvideowidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseIsSignalConnected(const QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_IsSignalConnected_IsBase(true);
        return vqvideowidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnIsSignalConnected(const QVideoWidget* self, intptr_t slot) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget && vqvideowidget->isVirtualQVideoWidget) {
        vqvideowidget->setQVideoWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_IsSignalConnected_Callback>(slot));
    }
}

void QVideoWidget_Delete(QVideoWidget* self) {
    delete self;
}
