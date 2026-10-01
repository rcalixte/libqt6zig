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
    QQuickView::connect(self,
                        static_cast<void (QQuickView::*)(QQuickView::Status)>(&QQuickView::statusChanged),
                        [self, slotFunc](QQuickView::Status param1) {
                            int sigval1 = static_cast<int>(param1);
                            slotFunc(self, sigval1);
                        });
}

void QQuickView_ResizeEvent(QQuickView* self, QResizeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->resizeEvent(param1);
    }
}

void QQuickView_TimerEvent(QQuickView* self, QTimerEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->timerEvent(param1);
    }
}

void QQuickView_KeyPressEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->keyPressEvent(param1);
    }
}

void QQuickView_KeyReleaseEvent(QQuickView* self, QKeyEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->keyReleaseEvent(param1);
    }
}

void QQuickView_MousePressEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->mousePressEvent(param1);
    }
}

void QQuickView_MouseReleaseEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->mouseReleaseEvent(param1);
    }
}

void QQuickView_MouseMoveEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
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
    return (QMetaObject*)self->QQuickView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetaObject(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_metaobject_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickView_SuperMetacast(QQuickView* self, const char* param1) {
    return self->QQuickView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetacast(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_metacast_callback = reinterpret_cast<VirtualQQuickView::QQuickView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickView_SuperMetacall(QQuickView* self, int param1, int param2, void** param3) {
    return self->QQuickView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMetacall(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_metacall_callback = reinterpret_cast<VirtualQQuickView::QQuickView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperResizeEvent(QQuickView* self, QResizeEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnResizeEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_resizeevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperTimerEvent(QQuickView* self, QTimerEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTimerEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_timerevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperKeyPressEvent(QQuickView* self, QKeyEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnKeyPressEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_keypressevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperKeyReleaseEvent(QQuickView* self, QKeyEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnKeyReleaseEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_keyreleaseevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperMousePressEvent(QQuickView* self, QMouseEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMousePressEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_mousepressevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperMouseReleaseEvent(QQuickView* self, QMouseEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseReleaseEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_mousereleaseevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickView_SuperMouseMoveEvent(QQuickView* self, QMouseEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseMoveEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_mousemoveevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
QObject* QQuickView_FocusObject(const QQuickView* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* QQuickView_SuperFocusObject(const QQuickView* self) {
    return self->QQuickView::focusObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusObject(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_focusobject_callback = reinterpret_cast<VirtualQQuickView::QQuickView_FocusObject_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QQuickView_AccessibleRoot(const QQuickView* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* QQuickView_SuperAccessibleRoot(const QQuickView* self) {
    return self->QQuickView::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnAccessibleRoot(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_accessibleroot_callback = reinterpret_cast<VirtualQQuickView::QQuickView_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_ExposeEvent(QQuickView* self, QExposeEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->exposeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperExposeEvent(QQuickView* self, QExposeEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::exposeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnExposeEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_exposeevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_ShowEvent(QQuickView* self, QShowEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperShowEvent(QQuickView* self, QShowEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnShowEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_showevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_HideEvent(QQuickView* self, QHideEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperHideEvent(QQuickView* self, QHideEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnHideEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_hideevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_CloseEvent(QQuickView* self, QCloseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperCloseEvent(QQuickView* self, QCloseEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnCloseEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_closeevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_FocusInEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperFocusInEvent(QQuickView* self, QFocusEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusInEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_focusinevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_FocusOutEvent(QQuickView* self, QFocusEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperFocusOutEvent(QQuickView* self, QFocusEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFocusOutEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_focusoutevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickView_Event(QQuickView* self, QEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        return vqquickview->event(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickView_SuperEvent(QQuickView* self, QEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        return vqquickview->QQuickView::event(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_event_callback = reinterpret_cast<VirtualQQuickView::QQuickView_Event_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_MouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperMouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMouseDoubleClickEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_WheelEvent(QQuickView* self, QWheelEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperWheelEvent(QQuickView* self, QWheelEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnWheelEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_wheelevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_TabletEvent(QQuickView* self, QTabletEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperTabletEvent(QQuickView* self, QTabletEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTabletEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_tabletevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
int QQuickView_SurfaceType(const QQuickView* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int QQuickView_SuperSurfaceType(const QQuickView* self) {
    return static_cast<int>(self->QQuickView::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSurfaceType(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_surfacetype_callback = reinterpret_cast<VirtualQQuickView::QQuickView_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* QQuickView_Format(const QQuickView* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* QQuickView_SuperFormat(const QQuickView* self) {
    return new QSurfaceFormat(self->QQuickView::format());
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnFormat(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_format_callback = reinterpret_cast<VirtualQQuickView::QQuickView_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* QQuickView_Size(const QQuickView* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* QQuickView_SuperSize(const QQuickView* self) {
    return new QSize(self->QQuickView::size());
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnSize(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self)))
        vqquickview->qquickview_size_callback = reinterpret_cast<VirtualQQuickView::QQuickView_Size_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_PaintEvent(QQuickView* self, QPaintEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperPaintEvent(QQuickView* self, QPaintEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnPaintEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_paintevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_MoveEvent(QQuickView* self, QMoveEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperMoveEvent(QQuickView* self, QMoveEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnMoveEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_moveevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_TouchEvent(QQuickView* self, QTouchEvent* param1) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->touchEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickView::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperTouchEvent(QQuickView* self, QTouchEvent* param1) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::touchEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickView::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnTouchEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_touchevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickView_NativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        return vqquickview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QQuickView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickView_SuperNativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        return vqquickview->QQuickView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QQuickView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnNativeEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_nativeevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickView_EventFilter(QQuickView* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickView_SuperEventFilter(QQuickView* self, QObject* watched, QEvent* event) {
    return self->QQuickView::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnEventFilter(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_eventfilter_callback = reinterpret_cast<VirtualQQuickView::QQuickView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_ChildEvent(QQuickView* self, QChildEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperChildEvent(QQuickView* self, QChildEvent* event) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnChildEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_childevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_CustomEvent(QQuickView* self, QEvent* event) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperCustomEvent(QQuickView* self, QEvent* event) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnCustomEvent(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_customevent_callback = reinterpret_cast<VirtualQQuickView::QQuickView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_ConnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperConnectNotify(QQuickView* self, const QMetaMethod* signal) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnConnectNotify(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_connectnotify_callback = reinterpret_cast<VirtualQQuickView::QQuickView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickView_DisconnectNotify(QQuickView* self, const QMetaMethod* signal) {
    auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self);
    if (vqquickview) {
        vqquickview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickView_SuperDisconnectNotify(QQuickView* self, const QMetaMethod* signal) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self)) {
        vqquickview->QQuickView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickView_OnDisconnectNotify(QQuickView* self, intptr_t slot) {
    if (auto* vqquickview = dynamic_cast<VirtualQQuickView*>(self))
        vqquickview->qquickview_disconnectnotify_callback = reinterpret_cast<VirtualQQuickView::QQuickView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QQuickView_ResolveInterface(const QQuickView* self, const char* name, int revision) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self))) {
        return vqquickview->VirtualQQuickView::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QQuickView::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickView_Sender(const QQuickView* self) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self))) {
        return vqquickview->VirtualQQuickView::sender();
    } else
        qFatal("Error: Protected method QQuickView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickView_SenderSignalIndex(const QQuickView* self) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self))) {
        return vqquickview->VirtualQQuickView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickView_Receivers(const QQuickView* self, const char* signal) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self))) {
        return vqquickview->VirtualQQuickView::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickView_IsSignalConnected(const QQuickView* self, const QMetaMethod* signal) {
    if (auto* vqquickview = const_cast<VirtualQQuickView*>(dynamic_cast<const VirtualQQuickView*>(self))) {
        return vqquickview->VirtualQQuickView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickView::isSignalConnected called without a directly constructed type");
}

void QQuickView_Delete(QQuickView* self) {
    delete self;
}
