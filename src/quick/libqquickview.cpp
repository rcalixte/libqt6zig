#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQuickItem>
#include <QQuickRenderControl>
#include <QQuickView>
#include <QQuickWindow>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWindow>
#include <qquickview.h>
#include "libqquickview.h"
#include "libqquickview.hxx"

QQuickView* QQuickView_new() {
    return new VirtualQQuickView();
}

QQuickView* QQuickView_new2(QQmlEngine* engine, QWindow* parent) {
    return new VirtualQQuickView(engine, parent);
}

QQuickView* QQuickView_new3(const QUrl* source) {
    return new VirtualQQuickView(*source);
}

QQuickView* QQuickView_new4(libqt_string uri, libqt_string typeName) {
    return new VirtualQQuickView(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

QQuickView* QQuickView_new5(const QUrl* source, QQuickRenderControl* renderControl) {
    return new VirtualQQuickView(*source, renderControl);
}

QQuickView* QQuickView_new6(QWindow* parent) {
    return new VirtualQQuickView(parent);
}

QQuickView* QQuickView_new7(const QUrl* source, QWindow* parent) {
    return new VirtualQQuickView(*source, parent);
}

QQuickView* QQuickView_new8(libqt_string uri, libqt_string typeName, QWindow* parent) {
    return new VirtualQQuickView(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), parent);
}

QMetaObject* QQuickView_MetaObject(const QQuickView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickView_Metacast(QQuickView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickView_Metacall(QQuickView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickView_Tr(const char* s) {
    auto _ret = QQuickView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QQuickView_Source(const QQuickView* self) {
    return new QUrl(self->source());
}

QQmlEngine* QQuickView_Engine(const QQuickView* self) {
    return self->engine();
}

QQmlContext* QQuickView_RootContext(const QQuickView* self) {
    return self->rootContext();
}

QQuickItem* QQuickView_RootObject(const QQuickView* self) {
    return self->rootObject();
}

int QQuickView_ResizeMode(const QQuickView* self) {
    return static_cast<int>(self->resizeMode());
}

void QQuickView_SetResizeMode(QQuickView* self, int resizeMode) {
    self->setResizeMode(static_cast<QQuickView::ResizeMode>(resizeMode));
}

int QQuickView_Status(const QQuickView* self) {
    return static_cast<int>(self->status());
}

libqt_list /* of QQmlError* */ QQuickView_Errors(const QQuickView* self) {
    QList<QQmlError> _ret = self->errors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQmlError** _arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QQmlError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSize* QQuickView_SizeHint(const QQuickView* self) {
    return new QSize(self->sizeHint());
}

QSize* QQuickView_InitialSize(const QQuickView* self) {
    return new QSize(self->initialSize());
}

void QQuickView_SetSource(QQuickView* self, const QUrl* source) {
    self->setSource(*source);
}

void QQuickView_LoadFromModule(QQuickView* self, libqt_string uri, libqt_string typeName) {
    self->loadFromModule(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

void QQuickView_SetInitialProperties(QQuickView* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties) {
    QMap<QString, QVariant> initialProperties_QMap;
    libqt_string* initialProperties_karr = static_cast<libqt_string*>(initialProperties.keys);
    QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
    for (size_t i = 0; i < initialProperties.len; ++i) {
        QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
        initialProperties_QMap.insert(initialProperties_karr_i_QString, *(initialProperties_varr[i]));
    }
    self->setInitialProperties(initialProperties_QMap);
}

void QQuickView_SetContent(QQuickView* self, const QUrl* url, QQmlComponent* component, QObject* item) {
    self->setContent(*url, component, item);
}

void QQuickView_StatusChanged(QQuickView* self, int param1) {
    self->statusChanged(static_cast<QQuickView::Status>(param1));
}

void QQuickView_Connect_StatusChanged(QQuickView* self, intptr_t slot) {
    void (*slotFunc)(QQuickView*, int) = reinterpret_cast<void (*)(QQuickView*, int)>(slot);
    QQuickView::connect(self, &QQuickView::statusChanged, [self, slotFunc](QQuickView::Status param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QQuickView_ResizeEvent(QQuickView* self, QResizeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->resizeEvent(param1);
    }
}

void QQuickView_TimerEvent(QQuickView* self, QTimerEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->timerEvent(param1);
    }
}

void QQuickView_KeyPressEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->keyPressEvent(param1);
    }
}

void QQuickView_KeyReleaseEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->keyReleaseEvent(param1);
    }
}

void QQuickView_MousePressEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->mousePressEvent(param1);
    }
}

void QQuickView_MouseReleaseEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->mouseReleaseEvent(param1);
    }
}

void QQuickView_MouseMoveEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->mouseMoveEvent(param1);
    }
}

libqt_string QQuickView_Tr2(const char* s, const char* c) {
    auto _ret = QQuickView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickView_SuperMetaObject(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickview->metaObject();
    } else {
        return (QMetaObject*)self->QQuickView::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetaObject(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MetaObject_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickView_SuperMetacast(QQuickView* self, const char* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Metacast_IsBase(true);
        return vqquickview->qt_metacast(param1);
    } else {
        return self->QQuickView::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetacast(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Metacast_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickView_SuperMetacall(QQuickView* self, int param1, int param2, void** param3) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Metacall_IsBase(true);
        return vqquickview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetacall(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Metacall_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperResizeEvent(QQuickView* self, QResizeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ResizeEvent_IsBase(true);
        vqquickview->resizeEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnResizeEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ResizeEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ResizeEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperTimerEvent(QQuickView* self, QTimerEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_TimerEvent_IsBase(true);
        vqquickview->timerEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTimerEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_TimerEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_TimerEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperKeyPressEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_KeyPressEvent_IsBase(true);
        vqquickview->keyPressEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnKeyPressEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_KeyPressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperKeyReleaseEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_KeyReleaseEvent_IsBase(true);
        vqquickview->keyReleaseEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnKeyReleaseEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_KeyReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperMousePressEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MousePressEvent_IsBase(true);
        vqquickview->mousePressEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMousePressEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MousePressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperMouseReleaseEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MouseReleaseEvent_IsBase(true);
        vqquickview->mouseReleaseEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseReleaseEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MouseReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickView_SuperMouseMoveEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MouseMoveEvent_IsBase(true);
        vqquickview->mouseMoveEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseMoveEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MouseMoveEvent_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickView_FocusObject(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->focusObject();
    } else {
        return self->QQuickView::focusObject();
    }
}

// Base class handler implementation
QObject* QQuickView_SuperFocusObject(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_FocusObject_IsBase(true);
        return vqquickview->focusObject();
    } else {
        return self->QQuickView::focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusObject(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_FocusObject_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_FocusObject_Callback>(slot));
}

// Derived class handler implementation
QAccessibleInterface* QQuickView_AccessibleRoot(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->accessibleRoot();
    } else {
        return self->QQuickView::accessibleRoot();
    }
}

// Base class handler implementation
QAccessibleInterface* QQuickView_SuperAccessibleRoot(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_AccessibleRoot_IsBase(true);
        return vqquickview->accessibleRoot();
    } else {
        return self->QQuickView::accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnAccessibleRoot(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_AccessibleRoot_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_AccessibleRoot_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_ExposeEvent(QQuickView* self, QExposeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->exposeEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->exposeEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperExposeEvent(QQuickView* self, QExposeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ExposeEvent_IsBase(true);
        vqquickview->exposeEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnExposeEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ExposeEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ExposeEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_ShowEvent(QQuickView* self, QShowEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->showEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperShowEvent(QQuickView* self, QShowEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ShowEvent_IsBase(true);
        vqquickview->showEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnShowEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ShowEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ShowEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_HideEvent(QQuickView* self, QHideEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->hideEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperHideEvent(QQuickView* self, QHideEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_HideEvent_IsBase(true);
        vqquickview->hideEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnHideEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_HideEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_HideEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_CloseEvent(QQuickView* self, QCloseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->closeEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperCloseEvent(QQuickView* self, QCloseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_CloseEvent_IsBase(true);
        vqquickview->closeEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnCloseEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_CloseEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_CloseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_FocusInEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->focusInEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperFocusInEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_FocusInEvent_IsBase(true);
        vqquickview->focusInEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusInEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_FocusInEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_FocusOutEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->focusOutEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperFocusOutEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_FocusOutEvent_IsBase(true);
        vqquickview->focusOutEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusOutEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_FocusOutEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickView_Event(QQuickView* self, QEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->event(param1);
    } else {
        return ((VirtualQQuickView*)self)->event(param1);
    }
}

// Base class handler implementation
bool QQuickView_SuperEvent(QQuickView* self, QEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Event_IsBase(true);
        return vqquickview->event(param1);
    } else {
        return ((VirtualQQuickView*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Event_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Event_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_MouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperMouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MouseDoubleClickEvent_IsBase(true);
        vqquickview->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseDoubleClickEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MouseDoubleClickEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_WheelEvent(QQuickView* self, QWheelEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->wheelEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperWheelEvent(QQuickView* self, QWheelEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_WheelEvent_IsBase(true);
        vqquickview->wheelEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnWheelEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_WheelEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_WheelEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_TabletEvent(QQuickView* self, QTabletEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->tabletEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->tabletEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperTabletEvent(QQuickView* self, QTabletEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_TabletEvent_IsBase(true);
        vqquickview->tabletEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTabletEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_TabletEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_TabletEvent_Callback>(slot));
}

// Derived class handler implementation
int QQuickView_SurfaceType(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return static_cast<int>(vqquickview->surfaceType());
    } else {
        return static_cast<int>(self->QQuickView::surfaceType());
    }
}

// Base class handler implementation
int QQuickView_SuperSurfaceType(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_SurfaceType_IsBase(true);
        return static_cast<int>(vqquickview->surfaceType());
    } else {
        return static_cast<int>(self->QQuickView::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSurfaceType(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_SurfaceType_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_SurfaceType_Callback>(slot));
}

// Derived class handler implementation
QSurfaceFormat* QQuickView_Format(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return new QSurfaceFormat(vqquickview->format());
    } else {
        return new QSurfaceFormat(((VirtualQQuickView*)self)->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QQuickView_SuperFormat(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Format_IsBase(true);
        return new QSurfaceFormat(vqquickview->format());
    } else {
        return new QSurfaceFormat(((VirtualQQuickView*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFormat(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Format_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Format_Callback>(slot));
}

// Derived class handler implementation
QSize* QQuickView_Size(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return new QSize(vqquickview->size());
    } else {
        return new QSize(((VirtualQQuickView*)self)->size());
    }
}

// Base class handler implementation
QSize* QQuickView_SuperSize(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Size_IsBase(true);
        return new QSize(vqquickview->size());
    } else {
        return new QSize(((VirtualQQuickView*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSize(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Size_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Size_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_PaintEvent(QQuickView* self, QPaintEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->paintEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperPaintEvent(QQuickView* self, QPaintEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_PaintEvent_IsBase(true);
        vqquickview->paintEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnPaintEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_PaintEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_PaintEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_MoveEvent(QQuickView* self, QMoveEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->moveEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->moveEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperMoveEvent(QQuickView* self, QMoveEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_MoveEvent_IsBase(true);
        vqquickview->moveEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMoveEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_MoveEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_MoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_TouchEvent(QQuickView* self, QTouchEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->touchEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->touchEvent(param1);
    }
}

// Base class handler implementation
void QQuickView_SuperTouchEvent(QQuickView* self, QTouchEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_TouchEvent_IsBase(true);
        vqquickview->touchEvent(param1);
    } else {
        ((VirtualQQuickView*)self)->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTouchEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_TouchEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_TouchEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickView_NativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QQuickView_SuperNativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_NativeEvent_IsBase(true);
        return vqquickview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnNativeEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_NativeEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_NativeEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickView_EventFilter(QQuickView* self, QObject* watched, QEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->eventFilter(watched, event);
    } else {
        return self->QQuickView::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickView_SuperEventFilter(QQuickView* self, QObject* watched, QEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_EventFilter_IsBase(true);
        return vqquickview->eventFilter(watched, event);
    } else {
        return self->QQuickView::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnEventFilter(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_EventFilter_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_ChildEvent(QQuickView* self, QChildEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->childEvent(event);
    } else {
        ((VirtualQQuickView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickView_SuperChildEvent(QQuickView* self, QChildEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ChildEvent_IsBase(true);
        vqquickview->childEvent(event);
    } else {
        ((VirtualQQuickView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnChildEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ChildEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_CustomEvent(QQuickView* self, QEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->customEvent(event);
    } else {
        ((VirtualQQuickView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickView_SuperCustomEvent(QQuickView* self, QEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_CustomEvent_IsBase(true);
        vqquickview->customEvent(event);
    } else {
        ((VirtualQQuickView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnCustomEvent(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_CustomEvent_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_ConnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->connectNotify(*signal);
    } else {
        ((VirtualQQuickView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickView_SuperConnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ConnectNotify_IsBase(true);
        vqquickview->connectNotify(*signal);
    } else {
        ((VirtualQQuickView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnConnectNotify(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickView_DisconnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickView_SuperDisconnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_DisconnectNotify_IsBase(true);
        vqquickview->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnDisconnectNotify(QQuickView* self, intptr_t slot) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void* QQuickView_ResolveInterface(const QQuickView* self, const char* name, int revision) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQQuickView*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QQuickView_SuperResolveInterface(const QQuickView* self, const char* name, int revision) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_ResolveInterface_IsBase(true);
        return vqquickview->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQQuickView*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnResolveInterface(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_ResolveInterface_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_ResolveInterface_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickView_Sender(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->sender();
    } else {
        return ((VirtualQQuickView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickView_SuperSender(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Sender_IsBase(true);
        return vqquickview->sender();
    } else {
        return ((VirtualQQuickView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSender(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Sender_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickView_SenderSignalIndex(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->senderSignalIndex();
    } else {
        return ((VirtualQQuickView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickView_SuperSenderSignalIndex(const QQuickView* self) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_SenderSignalIndex_IsBase(true);
        return vqquickview->senderSignalIndex();
    } else {
        return ((VirtualQQuickView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSenderSignalIndex(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickView_Receivers(const QQuickView* self, const char* signal) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->receivers(signal);
    } else {
        return ((VirtualQQuickView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickView_SuperReceivers(const QQuickView* self, const char* signal) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_Receivers_IsBase(true);
        return vqquickview->receivers(signal);
    } else {
        return ((VirtualQQuickView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnReceivers(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_Receivers_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickView_IsSignalConnected(const QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        return vqquickview->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickView_SuperIsSignalConnected(const QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView) {
        vqquickview->setQQuickView_IsSignalConnected_IsBase(true);
        return vqquickview->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnIsSignalConnected(const QQuickView* self, intptr_t slot) {
    auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self));
    if (vqquickview && vqquickview->isVirtualQQuickView)
        vqquickview->setQQuickView_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickView::QQuickView_IsSignalConnected_Callback>(slot));
}

void QQuickView_Delete(QQuickView* self) {
    delete self;
}
