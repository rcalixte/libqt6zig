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
#include <QByteArray>
#include <cstring>
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
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKImageFilePreview*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KImageFilePreview_Tr(const char* s) {
    QString _ret = KImageFilePreview::tr(s);
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
    auto* vkimagefilepreview = dynamic_cast<const VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKImageFilePreview*)self)->sizeHint());
    }
}

void KImageFilePreview_ShowPreview(KImageFilePreview* self, const QUrl* url) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        self->showPreview(*url);
    } else {
        ((VirtualKImageFilePreview*)self)->showPreview(*url);
    }
}

void KImageFilePreview_ClearPreview(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        self->clearPreview();
    } else {
        ((VirtualKImageFilePreview*)self)->clearPreview();
    }
}

void KImageFilePreview_GotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->gotPreview(*param1, *param2);
    }
}

void KImageFilePreview_ResizeEvent(KImageFilePreview* self, QResizeEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->resizeEvent(event);
    }
}

KIO__PreviewJob* KImageFilePreview_CreateJob(KImageFilePreview* self, const QUrl* url, int width, int height) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->createJob(*url, static_cast<int>(width), static_cast<int>(height));
    }
    return {};
}

libqt_string KImageFilePreview_Tr2(const char* s, const char* c) {
    QString _ret = KImageFilePreview::tr(s, c);
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
    QString _ret = KImageFilePreview::tr(s, c, static_cast<int>(n));
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
int KImageFilePreview_QBaseMetacall(KImageFilePreview* self, int param1, int param2, void** param3) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Metacall_IsBase(true);
        return vkimagefilepreview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KImageFilePreview::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetacall(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Metacall_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KImageFilePreview_QBaseSizeHint(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SizeHint_IsBase(true);
        return new QSize(vkimagefilepreview->sizeHint());
    } else {
        return new QSize(((VirtualKImageFilePreview*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSizeHint(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SizeHint_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseShowPreview(KImageFilePreview* self, const QUrl* url) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview_IsBase(true);
        vkimagefilepreview->showPreview(*url);
    } else {
        self->KImageFilePreview::showPreview(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowPreview(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowPreview_Callback>(slot));
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseClearPreview(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ClearPreview_IsBase(true);
        vkimagefilepreview->clearPreview();
    } else {
        self->KImageFilePreview::clearPreview();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnClearPreview(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ClearPreview_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ClearPreview_Callback>(slot));
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_GotPreview_IsBase(true);
        vkimagefilepreview->gotPreview(*param1, *param2);
    } else {
        ((VirtualKImageFilePreview*)self)->gotPreview(*param1, *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnGotPreview(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_GotPreview_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_GotPreview_Callback>(slot));
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseResizeEvent(KImageFilePreview* self, QResizeEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ResizeEvent_IsBase(true);
        vkimagefilepreview->resizeEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnResizeEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ResizeEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
KIO__PreviewJob* KImageFilePreview_QBaseCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CreateJob_IsBase(true);
        return vkimagefilepreview->createJob(*url, static_cast<int>(width), static_cast<int>(height));
    } else {
        return ((VirtualKImageFilePreview*)self)->createJob(*url, static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCreateJob(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CreateJob_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CreateJob_Callback>(slot));
    }
}

// Derived class handler implementation
int KImageFilePreview_DevType(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->devType();
    } else {
        return self->KImageFilePreview::devType();
    }
}

// Base class handler implementation
int KImageFilePreview_QBaseDevType(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DevType_IsBase(true);
        return vkimagefilepreview->devType();
    } else {
        return self->KImageFilePreview::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDevType(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DevType_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_SetVisible(KImageFilePreview* self, bool visible) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setVisible(visible);
    } else {
        self->KImageFilePreview::setVisible(visible);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseSetVisible(KImageFilePreview* self, bool visible) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SetVisible_IsBase(true);
        vkimagefilepreview->setVisible(visible);
    } else {
        self->KImageFilePreview::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSetVisible(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SetVisible_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KImageFilePreview_MinimumSizeHint(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return new QSize(vkimagefilepreview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKImageFilePreview*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KImageFilePreview_QBaseMinimumSizeHint(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MinimumSizeHint_IsBase(true);
        return new QSize(vkimagefilepreview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKImageFilePreview*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMinimumSizeHint(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MinimumSizeHint_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KImageFilePreview_HeightForWidth(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KImageFilePreview::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KImageFilePreview_QBaseHeightForWidth(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HeightForWidth_IsBase(true);
        return vkimagefilepreview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KImageFilePreview::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHeightForWidth(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HeightForWidth_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_HasHeightForWidth(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->hasHeightForWidth();
    } else {
        return self->KImageFilePreview::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseHasHeightForWidth(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HasHeightForWidth_IsBase(true);
        return vkimagefilepreview->hasHeightForWidth();
    } else {
        return self->KImageFilePreview::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHasHeightForWidth(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HasHeightForWidth_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KImageFilePreview_PaintEngine(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->paintEngine();
    } else {
        return self->KImageFilePreview::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KImageFilePreview_QBasePaintEngine(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_PaintEngine_IsBase(true);
        return vkimagefilepreview->paintEngine();
    } else {
        return self->KImageFilePreview::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnPaintEngine(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_PaintEngine_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_Event(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->event(event);
    } else {
        return ((VirtualKImageFilePreview*)self)->event(event);
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Event_IsBase(true);
        return vkimagefilepreview->event(event);
    } else {
        return ((VirtualKImageFilePreview*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Event_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_MousePressEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->mousePressEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseMousePressEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MousePressEvent_IsBase(true);
        vkimagefilepreview->mousePressEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMousePressEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MousePressEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_MouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->mouseReleaseEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseReleaseEvent_IsBase(true);
        vkimagefilepreview->mouseReleaseEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseReleaseEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_MouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseDoubleClickEvent_IsBase(true);
        vkimagefilepreview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseDoubleClickEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_MouseMoveEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->mouseMoveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseMoveEvent_IsBase(true);
        vkimagefilepreview->mouseMoveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMouseMoveEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MouseMoveEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_WheelEvent(KImageFilePreview* self, QWheelEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->wheelEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseWheelEvent(KImageFilePreview* self, QWheelEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_WheelEvent_IsBase(true);
        vkimagefilepreview->wheelEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnWheelEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_WheelEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_KeyPressEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->keyPressEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseKeyPressEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_KeyPressEvent_IsBase(true);
        vkimagefilepreview->keyPressEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnKeyPressEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_KeyPressEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_KeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->keyReleaseEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_KeyReleaseEvent_IsBase(true);
        vkimagefilepreview->keyReleaseEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnKeyReleaseEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_FocusInEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->focusInEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseFocusInEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusInEvent_IsBase(true);
        vkimagefilepreview->focusInEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusInEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusInEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_FocusOutEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->focusOutEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseFocusOutEvent(KImageFilePreview* self, QFocusEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusOutEvent_IsBase(true);
        vkimagefilepreview->focusOutEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusOutEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusOutEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_EnterEvent(KImageFilePreview* self, QEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->enterEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseEnterEvent(KImageFilePreview* self, QEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_EnterEvent_IsBase(true);
        vkimagefilepreview->enterEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEnterEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_EnterEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_LeaveEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->leaveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseLeaveEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_LeaveEvent_IsBase(true);
        vkimagefilepreview->leaveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnLeaveEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_LeaveEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_PaintEvent(KImageFilePreview* self, QPaintEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->paintEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBasePaintEvent(KImageFilePreview* self, QPaintEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_PaintEvent_IsBase(true);
        vkimagefilepreview->paintEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnPaintEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_PaintEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_MoveEvent(KImageFilePreview* self, QMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->moveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseMoveEvent(KImageFilePreview* self, QMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MoveEvent_IsBase(true);
        vkimagefilepreview->moveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMoveEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_MoveEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_CloseEvent(KImageFilePreview* self, QCloseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->closeEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseCloseEvent(KImageFilePreview* self, QCloseEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CloseEvent_IsBase(true);
        vkimagefilepreview->closeEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCloseEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CloseEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->contextMenuEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ContextMenuEvent_IsBase(true);
        vkimagefilepreview->contextMenuEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnContextMenuEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ContextMenuEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_TabletEvent(KImageFilePreview* self, QTabletEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->tabletEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseTabletEvent(KImageFilePreview* self, QTabletEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_TabletEvent_IsBase(true);
        vkimagefilepreview->tabletEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnTabletEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_TabletEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ActionEvent(KImageFilePreview* self, QActionEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->actionEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseActionEvent(KImageFilePreview* self, QActionEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ActionEvent_IsBase(true);
        vkimagefilepreview->actionEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnActionEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ActionEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_DragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->dragEnterEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragEnterEvent_IsBase(true);
        vkimagefilepreview->dragEnterEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragEnterEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragEnterEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_DragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->dragMoveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragMoveEvent_IsBase(true);
        vkimagefilepreview->dragMoveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragMoveEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragMoveEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_DragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->dragLeaveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragLeaveEvent_IsBase(true);
        vkimagefilepreview->dragLeaveEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDragLeaveEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DragLeaveEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_DropEvent(KImageFilePreview* self, QDropEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->dropEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDropEvent(KImageFilePreview* self, QDropEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DropEvent_IsBase(true);
        vkimagefilepreview->dropEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDropEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DropEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ShowEvent(KImageFilePreview* self, QShowEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->showEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseShowEvent(KImageFilePreview* self, QShowEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowEvent_IsBase(true);
        vkimagefilepreview->showEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_HideEvent(KImageFilePreview* self, QHideEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->hideEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseHideEvent(KImageFilePreview* self, QHideEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HideEvent_IsBase(true);
        vkimagefilepreview->hideEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnHideEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_HideEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_NativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKImageFilePreview*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_NativeEvent_IsBase(true);
        return vkimagefilepreview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKImageFilePreview*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnNativeEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_NativeEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ChangeEvent(KImageFilePreview* self, QEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->changeEvent(param1);
    } else {
        ((VirtualKImageFilePreview*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseChangeEvent(KImageFilePreview* self, QEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ChangeEvent_IsBase(true);
        vkimagefilepreview->changeEvent(param1);
    } else {
        ((VirtualKImageFilePreview*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnChangeEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ChangeEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KImageFilePreview_Metric(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKImageFilePreview*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KImageFilePreview_QBaseMetric(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Metric_IsBase(true);
        return vkimagefilepreview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKImageFilePreview*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnMetric(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Metric_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_InitPainter(const KImageFilePreview* self, QPainter* painter) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->initPainter(painter);
    } else {
        ((VirtualKImageFilePreview*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseInitPainter(const KImageFilePreview* self, QPainter* painter) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InitPainter_IsBase(true);
        vkimagefilepreview->initPainter(painter);
    } else {
        ((VirtualKImageFilePreview*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInitPainter(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InitPainter_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KImageFilePreview_Redirected(const KImageFilePreview* self, QPoint* offset) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->redirected(offset);
    } else {
        return ((VirtualKImageFilePreview*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KImageFilePreview_QBaseRedirected(const KImageFilePreview* self, QPoint* offset) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Redirected_IsBase(true);
        return vkimagefilepreview->redirected(offset);
    } else {
        return ((VirtualKImageFilePreview*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnRedirected(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Redirected_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KImageFilePreview_SharedPainter(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->sharedPainter();
    } else {
        return ((VirtualKImageFilePreview*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KImageFilePreview_QBaseSharedPainter(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SharedPainter_IsBase(true);
        return vkimagefilepreview->sharedPainter();
    } else {
        return ((VirtualKImageFilePreview*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSharedPainter(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SharedPainter_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_InputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->inputMethodEvent(param1);
    } else {
        ((VirtualKImageFilePreview*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InputMethodEvent_IsBase(true);
        vkimagefilepreview->inputMethodEvent(param1);
    } else {
        ((VirtualKImageFilePreview*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInputMethodEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InputMethodEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KImageFilePreview_InputMethodQuery(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return new QVariant(vkimagefilepreview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKImageFilePreview*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KImageFilePreview_QBaseInputMethodQuery(const KImageFilePreview* self, int param1) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InputMethodQuery_IsBase(true);
        return new QVariant(vkimagefilepreview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKImageFilePreview*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnInputMethodQuery(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_InputMethodQuery_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_FocusNextPrevChild(KImageFilePreview* self, bool next) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->focusNextPrevChild(next);
    } else {
        return ((VirtualKImageFilePreview*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseFocusNextPrevChild(KImageFilePreview* self, bool next) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusNextPrevChild_IsBase(true);
        return vkimagefilepreview->focusNextPrevChild(next);
    } else {
        return ((VirtualKImageFilePreview*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusNextPrevChild(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_EventFilter(KImageFilePreview* self, QObject* watched, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->eventFilter(watched, event);
    } else {
        return self->KImageFilePreview::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseEventFilter(KImageFilePreview* self, QObject* watched, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_EventFilter_IsBase(true);
        return vkimagefilepreview->eventFilter(watched, event);
    } else {
        return self->KImageFilePreview::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnEventFilter(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_EventFilter_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_TimerEvent(KImageFilePreview* self, QTimerEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->timerEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseTimerEvent(KImageFilePreview* self, QTimerEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_TimerEvent_IsBase(true);
        vkimagefilepreview->timerEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnTimerEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_TimerEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ChildEvent(KImageFilePreview* self, QChildEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->childEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseChildEvent(KImageFilePreview* self, QChildEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ChildEvent_IsBase(true);
        vkimagefilepreview->childEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnChildEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ChildEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_CustomEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->customEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseCustomEvent(KImageFilePreview* self, QEvent* event) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CustomEvent_IsBase(true);
        vkimagefilepreview->customEvent(event);
    } else {
        ((VirtualKImageFilePreview*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCustomEvent(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_CustomEvent_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ConnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->connectNotify(*signal);
    } else {
        ((VirtualKImageFilePreview*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseConnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ConnectNotify_IsBase(true);
        vkimagefilepreview->connectNotify(*signal);
    } else {
        ((VirtualKImageFilePreview*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnConnectNotify(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ConnectNotify_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_DisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->disconnectNotify(*signal);
    } else {
        ((VirtualKImageFilePreview*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DisconnectNotify_IsBase(true);
        vkimagefilepreview->disconnectNotify(*signal);
    } else {
        ((VirtualKImageFilePreview*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDisconnectNotify(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_DisconnectNotify_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ShowPreview2(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->showPreview();
    } else {
        ((VirtualKImageFilePreview*)self)->showPreview();
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseShowPreview2(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview2_IsBase(true);
        vkimagefilepreview->showPreview();
    } else {
        ((VirtualKImageFilePreview*)self)->showPreview();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowPreview2(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview2_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowPreview2_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_ShowPreview3(KImageFilePreview* self, const QUrl* url, bool force) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->showPreview(*url, force);
    } else {
        ((VirtualKImageFilePreview*)self)->showPreview(*url, force);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseShowPreview3(KImageFilePreview* self, const QUrl* url, bool force) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview3_IsBase(true);
        vkimagefilepreview->showPreview(*url, force);
    } else {
        ((VirtualKImageFilePreview*)self)->showPreview(*url, force);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnShowPreview3(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_ShowPreview3_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_ShowPreview3_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_SetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setSupportedMimeTypes(mimeTypes_QList);
    } else {
        ((VirtualKImageFilePreview*)self)->setSupportedMimeTypes(mimeTypes_QList);
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseSetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SetSupportedMimeTypes_IsBase(true);
        vkimagefilepreview->setSupportedMimeTypes(mimeTypes_QList);
    } else {
        ((VirtualKImageFilePreview*)self)->setSupportedMimeTypes(mimeTypes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSetSupportedMimeTypes(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SetSupportedMimeTypes_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SetSupportedMimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_UpdateMicroFocus(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->updateMicroFocus();
    } else {
        ((VirtualKImageFilePreview*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseUpdateMicroFocus(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_UpdateMicroFocus_IsBase(true);
        vkimagefilepreview->updateMicroFocus();
    } else {
        ((VirtualKImageFilePreview*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnUpdateMicroFocus(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_Create(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->create();
    } else {
        ((VirtualKImageFilePreview*)self)->create();
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseCreate(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Create_IsBase(true);
        vkimagefilepreview->create();
    } else {
        ((VirtualKImageFilePreview*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnCreate(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Create_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KImageFilePreview_Destroy(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->destroy();
    } else {
        ((VirtualKImageFilePreview*)self)->destroy();
    }
}

// Base class handler implementation
void KImageFilePreview_QBaseDestroy(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Destroy_IsBase(true);
        vkimagefilepreview->destroy();
    } else {
        ((VirtualKImageFilePreview*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnDestroy(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Destroy_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_FocusNextChild(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->focusNextChild();
    } else {
        return ((VirtualKImageFilePreview*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseFocusNextChild(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusNextChild_IsBase(true);
        return vkimagefilepreview->focusNextChild();
    } else {
        return ((VirtualKImageFilePreview*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusNextChild(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusNextChild_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_FocusPreviousChild(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->focusPreviousChild();
    } else {
        return ((VirtualKImageFilePreview*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseFocusPreviousChild(KImageFilePreview* self) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusPreviousChild_IsBase(true);
        return vkimagefilepreview->focusPreviousChild();
    } else {
        return ((VirtualKImageFilePreview*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnFocusPreviousChild(KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = dynamic_cast<VirtualKImageFilePreview*>(self);
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_FocusPreviousChild_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KImageFilePreview_Sender(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->sender();
    } else {
        return ((VirtualKImageFilePreview*)self)->sender();
    }
}

// Base class handler implementation
QObject* KImageFilePreview_QBaseSender(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Sender_IsBase(true);
        return vkimagefilepreview->sender();
    } else {
        return ((VirtualKImageFilePreview*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSender(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Sender_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KImageFilePreview_SenderSignalIndex(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->senderSignalIndex();
    } else {
        return ((VirtualKImageFilePreview*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KImageFilePreview_QBaseSenderSignalIndex(const KImageFilePreview* self) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SenderSignalIndex_IsBase(true);
        return vkimagefilepreview->senderSignalIndex();
    } else {
        return ((VirtualKImageFilePreview*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnSenderSignalIndex(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_SenderSignalIndex_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KImageFilePreview_Receivers(const KImageFilePreview* self, const char* signal) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->receivers(signal);
    } else {
        return ((VirtualKImageFilePreview*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KImageFilePreview_QBaseReceivers(const KImageFilePreview* self, const char* signal) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Receivers_IsBase(true);
        return vkimagefilepreview->receivers(signal);
    } else {
        return ((VirtualKImageFilePreview*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnReceivers(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_Receivers_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KImageFilePreview_IsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->isSignalConnected(*signal);
    } else {
        return ((VirtualKImageFilePreview*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KImageFilePreview_QBaseIsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_IsSignalConnected_IsBase(true);
        return vkimagefilepreview->isSignalConnected(*signal);
    } else {
        return ((VirtualKImageFilePreview*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnIsSignalConnected(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_IsSignalConnected_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KImageFilePreview_GetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        return vkimagefilepreview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKImageFilePreview*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KImageFilePreview_QBaseGetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_GetDecodedMetricF_IsBase(true);
        return vkimagefilepreview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKImageFilePreview*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KImageFilePreview_OnGetDecodedMetricF(const KImageFilePreview* self, intptr_t slot) {
    auto* vkimagefilepreview = const_cast<VirtualKImageFilePreview*>(dynamic_cast<const VirtualKImageFilePreview*>(self));
    if (vkimagefilepreview && vkimagefilepreview->isVirtualKImageFilePreview) {
        vkimagefilepreview->setKImageFilePreview_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKImageFilePreview::KImageFilePreview_GetDecodedMetricF_Callback>(slot));
    }
}

void KImageFilePreview_Delete(KImageFilePreview* self) {
    delete self;
}
