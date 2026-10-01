#include <KFileItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__PreviewJob
#include <KImageFilePreview>
#include <KPreviewWidgetBase>
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
#include <QList>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kimagefilepreview.h>
#include "libkimagefilepreview.h"
#include "libkimagefilepreview.hxx"

KImageFilePreview* KImageFilePreview_new(QWidget* parent) {
    return new VirtualKImageFilePreview(parent);
}

KImageFilePreview* KImageFilePreview_new2() {
    return new VirtualKImageFilePreview();
}

QMetaObject* KImageFilePreview_MetaObject(const KImageFilePreview* self) {
    return (QMetaObject*)self->metaObject();
}

void* KImageFilePreview_Metacast(KImageFilePreview* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KImageFilePreview_Metacall(KImageFilePreview* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KImageFilePreview_Tr(const char* s) {
    auto _ret = KImageFilePreview::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KImageFilePreview_SizeHint(const KImageFilePreview* self) {
    return new QSize(self->sizeHint());
}

void KImageFilePreview_ShowPreview(KImageFilePreview* self, const QUrl* url) {
    self->showPreview(*url);
}

void KImageFilePreview_ClearPreview(KImageFilePreview* self) {
    self->clearPreview();
}

void KImageFilePreview_GotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->gotPreview(*param1, *param2);
    }
}

void KImageFilePreview_ResizeEvent(KImageFilePreview* self, QResizeEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->resizeEvent(event);
    }
}

KIO__PreviewJob* KImageFilePreview_CreateJob(KImageFilePreview* self, const QUrl* url, int width, int height) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        return vkimagefilepreview->createJob(*url, static_cast<int>(width), static_cast<int>(height));
    }
    qFatal("Error: Protected method KImageFilePreview::createJob called without a directly constructed type");
}

libqt_string KImageFilePreview_Tr2(const char* s, const char* c) {
    auto _ret = KImageFilePreview::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KImageFilePreview_Tr3(const char* s, const char* c, int n) {
    auto _ret = KImageFilePreview::tr(s, c, static_cast<int>(n));
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
QMetaObject* KImageFilePreview_SuperMetaObject(const KImageFilePreview* self) {
    return (QMetaObject*)self->KImageFilePreview::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetaObject(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_metaobject_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KImageFilePreview_SuperMetacast(KImageFilePreview* self, const char* param1) {
    return self->KImageFilePreview::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetacast(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_metacast_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Metacast_Callback>(slot);
}

// Base class handler implementation
int KImageFilePreview_SuperMetacall(KImageFilePreview* self, int param1, int param2, void** param3) {
    return self->KImageFilePreview::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetacall(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_metacall_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KImageFilePreview_SuperSizeHint(const KImageFilePreview* self) {
    return new QSize(self->KImageFilePreview::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSizeHint(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_sizehint_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KImageFilePreview_SuperShowPreview(KImageFilePreview* self, const QUrl* url) {
    self->KImageFilePreview::showPreview(*url);
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowPreview(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_showpreview_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowPreview_Callback>(slot);
}

// Base class handler implementation
void KImageFilePreview_SuperClearPreview(KImageFilePreview* self) {
    self->KImageFilePreview::clearPreview();
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnClearPreview(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_clearpreview_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ClearPreview_Callback>(slot);
}

// Base class handler implementation
void KImageFilePreview_SuperGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::gotPreview(*param1, *param2);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::gotPreview called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnGotPreview(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_gotpreview_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_GotPreview_Callback>(slot);
}

// Base class handler implementation
void KImageFilePreview_SuperResizeEvent(KImageFilePreview* self, QResizeEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnResizeEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_resizeevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
KIO__PreviewJob* KImageFilePreview_SuperCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->KImageFilePreview::createJob(*url, static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::createJob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCreateJob(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_createjob_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CreateJob_Callback>(slot);
}

// Derived class handler implementation
int KImageFilePreview_DevType(const KImageFilePreview* self) {
    return self->devType();
}

// Base class handler implementation
int KImageFilePreview_SuperDevType(const KImageFilePreview* self) {
    return self->KImageFilePreview::devType();
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDevType(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_devtype_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DevType_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_SetVisible(KImageFilePreview* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KImageFilePreview_SuperSetVisible(KImageFilePreview* self, bool visible) {
    self->KImageFilePreview::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSetVisible(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_setvisible_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KImageFilePreview_MinimumSizeHint(const KImageFilePreview* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KImageFilePreview_SuperMinimumSizeHint(const KImageFilePreview* self) {
    return new QSize(self->KImageFilePreview::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMinimumSizeHint(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_minimumsizehint_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KImageFilePreview_HeightForWidth(const KImageFilePreview* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KImageFilePreview_SuperHeightForWidth(const KImageFilePreview* self, int param1) {
    return self->KImageFilePreview::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHeightForWidth(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_heightforwidth_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KImageFilePreview_HasHeightForWidth(const KImageFilePreview* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KImageFilePreview_SuperHasHeightForWidth(const KImageFilePreview* self) {
    return self->KImageFilePreview::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHasHeightForWidth(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_hasheightforwidth_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KImageFilePreview_PaintEngine(const KImageFilePreview* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KImageFilePreview_SuperPaintEngine(const KImageFilePreview* self) {
    return self->KImageFilePreview::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnPaintEngine(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_paintengine_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KImageFilePreview_Event(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        return vkimagefilepreview->event(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KImageFilePreview_SuperEvent(KImageFilePreview* self, QEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->KImageFilePreview::event(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_event_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Event_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_MousePressEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperMousePressEvent(KImageFilePreview* self, QMouseEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMousePressEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_mousepressevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_MouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseReleaseEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_mousereleaseevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_MouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseDoubleClickEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_mousedoubleclickevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_MouseMoveEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseMoveEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_mousemoveevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_WheelEvent(KImageFilePreview* self, QWheelEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperWheelEvent(KImageFilePreview* self, QWheelEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnWheelEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_wheelevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_KeyPressEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperKeyPressEvent(KImageFilePreview* self, QKeyEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnKeyPressEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_keypressevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_KeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnKeyReleaseEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_keyreleaseevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_FocusInEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperFocusInEvent(KImageFilePreview* self, QFocusEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusInEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_focusinevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_FocusOutEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperFocusOutEvent(KImageFilePreview* self, QFocusEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusOutEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_focusoutevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_EnterEvent(KImageFilePreview* self, QEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperEnterEvent(KImageFilePreview* self, QEnterEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEnterEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_enterevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_LeaveEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperLeaveEvent(KImageFilePreview* self, QEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnLeaveEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_leaveevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_PaintEvent(KImageFilePreview* self, QPaintEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperPaintEvent(KImageFilePreview* self, QPaintEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnPaintEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_paintevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_MoveEvent(KImageFilePreview* self, QMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperMoveEvent(KImageFilePreview* self, QMoveEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMoveEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_moveevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_CloseEvent(KImageFilePreview* self, QCloseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperCloseEvent(KImageFilePreview* self, QCloseEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCloseEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_closeevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnContextMenuEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_contextmenuevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_TabletEvent(KImageFilePreview* self, QTabletEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperTabletEvent(KImageFilePreview* self, QTabletEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnTabletEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_tabletevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ActionEvent(KImageFilePreview* self, QActionEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperActionEvent(KImageFilePreview* self, QActionEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnActionEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_actionevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_DragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragEnterEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_dragenterevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_DragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragMoveEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_dragmoveevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_DragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragLeaveEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_dragleaveevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_DropEvent(KImageFilePreview* self, QDropEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperDropEvent(KImageFilePreview* self, QDropEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDropEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_dropevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ShowEvent(KImageFilePreview* self, QShowEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperShowEvent(KImageFilePreview* self, QShowEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_showevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_HideEvent(KImageFilePreview* self, QHideEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperHideEvent(KImageFilePreview* self, QHideEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHideEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_hideevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KImageFilePreview_NativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        return vkimagefilepreview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KImageFilePreview_SuperNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->KImageFilePreview::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnNativeEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_nativeevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ChangeEvent(KImageFilePreview* self, QEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperChangeEvent(KImageFilePreview* self, QEvent* param1) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnChangeEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_changeevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KImageFilePreview_Metric(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview) {
        return vkimagefilepreview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KImageFilePreview_SuperMetric(const KImageFilePreview* self, int param1) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->KImageFilePreview::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetric(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_metric_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Metric_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_InitPainter(const KImageFilePreview* self, QPainter* painter) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview) {
        vkimagefilepreview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperInitPainter(const KImageFilePreview* self, QPainter* painter) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        vkimagefilepreview->KImageFilePreview::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInitPainter(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_initpainter_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KImageFilePreview_Redirected(const KImageFilePreview* self, QPoint* offset) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview) {
        return vkimagefilepreview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KImageFilePreview_SuperRedirected(const KImageFilePreview* self, QPoint* offset) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->KImageFilePreview::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnRedirected(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_redirected_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KImageFilePreview_SharedPainter(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview) {
        return vkimagefilepreview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KImageFilePreview_SuperSharedPainter(const KImageFilePreview* self) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->KImageFilePreview::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSharedPainter(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_sharedpainter_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_InputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInputMethodEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_inputmethodevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KImageFilePreview_InputMethodQuery(const KImageFilePreview* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KImageFilePreview_SuperInputMethodQuery(const KImageFilePreview* self, int param1) {
    return new QVariant(self->KImageFilePreview::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInputMethodQuery(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self)))
        vkimagefilepreview->kimagefilepreview_inputmethodquery_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KImageFilePreview_FocusNextPrevChild(KImageFilePreview* self, bool next) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        return vkimagefilepreview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KImageFilePreview_SuperFocusNextPrevChild(KImageFilePreview* self, bool next) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->KImageFilePreview::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusNextPrevChild(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_focusnextprevchild_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KImageFilePreview_EventFilter(KImageFilePreview* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KImageFilePreview_SuperEventFilter(KImageFilePreview* self, QObject* watched, QEvent* event) {
    return self->KImageFilePreview::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEventFilter(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_eventfilter_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_TimerEvent(KImageFilePreview* self, QTimerEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperTimerEvent(KImageFilePreview* self, QTimerEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnTimerEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_timerevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ChildEvent(KImageFilePreview* self, QChildEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperChildEvent(KImageFilePreview* self, QChildEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnChildEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_childevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_CustomEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperCustomEvent(KImageFilePreview* self, QEvent* event) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCustomEvent(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_customevent_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_ConnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperConnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnConnectNotify(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_connectnotify_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KImageFilePreview_DisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview) {
        vkimagefilepreview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KImageFilePreview::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KImageFilePreview_SuperDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->KImageFilePreview::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KImageFilePreview::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDisconnectNotify(KImageFilePreview* self, intptr_t slot) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self))
        vkimagefilepreview->kimagefilepreview_disconnectnotify_callback = reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KImageFilePreview_ShowPreview2(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->VirtualKImageFilePreview::showPreview();
    } else
        qFatal("Error: Protected method KImageFilePreview::showPreview2 called without a directly constructed type");
}

// Derived class protected handler implementation
void KImageFilePreview_ShowPreview3(KImageFilePreview* self, const QUrl* url, bool force) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->VirtualKImageFilePreview::showPreview(*url, force);
    } else
        qFatal("Error: Protected method KImageFilePreview::showPreview3 called without a directly constructed type");
}

// Derived class protected handler implementation
void KImageFilePreview_SetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        QList<QString> mimeTypes_QList;
        mimeTypes_QList.reserve(mimeTypes.len);
        libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
        for (size_t i = 0; i < mimeTypes.len; ++i) {
            QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
            mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
        }
        vkimagefilepreview->VirtualKImageFilePreview::setSupportedMimeTypes(mimeTypes_QList);
    } else
        qFatal("Error: Protected method KImageFilePreview::setSupportedMimeTypes called without a directly constructed type");
}

// Derived class protected handler implementation
void KImageFilePreview_UpdateMicroFocus(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->VirtualKImageFilePreview::updateMicroFocus();
    } else
        qFatal("Error: Protected method KImageFilePreview::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KImageFilePreview_Create(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->VirtualKImageFilePreview::create();
    } else
        qFatal("Error: Protected method KImageFilePreview::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KImageFilePreview_Destroy(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        vkimagefilepreview->VirtualKImageFilePreview::destroy();
    } else
        qFatal("Error: Protected method KImageFilePreview::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KImageFilePreview_FocusNextChild(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->VirtualKImageFilePreview::focusNextChild();
    } else
        qFatal("Error: Protected method KImageFilePreview::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KImageFilePreview_FocusPreviousChild(KImageFilePreview* self) {
    if (auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self)) {
        return vkimagefilepreview->VirtualKImageFilePreview::focusPreviousChild();
    } else
        qFatal("Error: Protected method KImageFilePreview::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KImageFilePreview_Sender(const KImageFilePreview* self) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->VirtualKImageFilePreview::sender();
    } else
        qFatal("Error: Protected method KImageFilePreview::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KImageFilePreview_SenderSignalIndex(const KImageFilePreview* self) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->VirtualKImageFilePreview::senderSignalIndex();
    } else
        qFatal("Error: Protected method KImageFilePreview::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KImageFilePreview_Receivers(const KImageFilePreview* self, const char* signal) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->VirtualKImageFilePreview::receivers(signal);
    } else
        qFatal("Error: Protected method KImageFilePreview::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KImageFilePreview_IsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->VirtualKImageFilePreview::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KImageFilePreview::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KImageFilePreview_GetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB) {
    if (auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self))) {
        return vkimagefilepreview->VirtualKImageFilePreview::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KImageFilePreview::getDecodedMetricF called without a directly constructed type");
}

void KImageFilePreview_Delete(KImageFilePreview* self) {
    delete self;
}
