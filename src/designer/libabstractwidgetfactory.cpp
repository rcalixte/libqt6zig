#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetFactoryInterface>
#include <QEvent>
#include <QLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <abstractwidgetfactory.h>
#include "libabstractwidgetfactory.h"
#include "libabstractwidgetfactory.hxx"

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new() {
    return new VirtualQDesignerWidgetFactoryInterface();
}

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new2(QObject* parent) {
    return new VirtualQDesignerWidgetFactoryInterface(parent);
}

QMetaObject* QDesignerWidgetFactoryInterface_MetaObject(const QDesignerWidgetFactoryInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerWidgetFactoryInterface_Metacast(QDesignerWidgetFactoryInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerWidgetFactoryInterface_Metacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerWidgetFactoryInterface_Tr(const char* s) {
    auto _ret = QDesignerWidgetFactoryInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_Core(const QDesignerWidgetFactoryInterface* self) {
    return self->core();
}

QWidget* QDesignerWidgetFactoryInterface_ContainerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    return self->containerOfWidget(w);
}

QWidget* QDesignerWidgetFactoryInterface_WidgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    return self->widgetOfContainer(w);
}

QWidget* QDesignerWidgetFactoryInterface_CreateWidget(const QDesignerWidgetFactoryInterface* self, const libqt_string name, QWidget* parentWidget) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->createWidget(name_QString, parentWidget);
}

QLayout* QDesignerWidgetFactoryInterface_CreateLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int typeVal) {
    return self->createLayout(widget, layout, static_cast<int>(typeVal));
}

bool QDesignerWidgetFactoryInterface_IsPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget) {
    return self->isPassiveInteractor(widget);
}

void QDesignerWidgetFactoryInterface_Initialize(const QDesignerWidgetFactoryInterface* self, QObject* object) {
    self->initialize(object);
}

libqt_string QDesignerWidgetFactoryInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerWidgetFactoryInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerWidgetFactoryInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerWidgetFactoryInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerWidgetFactoryInterface_SuperMetaObject(const QDesignerWidgetFactoryInterface* self) {
    return (QMetaObject*)self->QDesignerWidgetFactoryInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetaObject(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerWidgetFactoryInterface_SuperMetacast(QDesignerWidgetFactoryInterface* self, const char* param1) {
    return self->QDesignerWidgetFactoryInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetacast(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_metacast_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetFactoryInterface_SuperMetacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerWidgetFactoryInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetacall(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_metacall_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCore(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_core_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnContainerOfWidget(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_containerofwidget_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ContainerOfWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnWidgetOfContainer(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_widgetofcontainer_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_WidgetOfContainer_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCreateWidget(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_createwidget_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CreateWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCreateLayout(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_createlayout_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CreateLayout_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnIsPassiveInteractor(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_ispassiveinteractor_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnInitialize(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self)))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_initialize_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Initialize_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetFactoryInterface_Event(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_SuperEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    return self->QDesignerWidgetFactoryInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_event_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetFactoryInterface_EventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_SuperEventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerWidgetFactoryInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnEventFilter(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_TimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface) {
        vqdesignerwidgetfactoryinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_SuperTimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self)) {
        vqdesignerwidgetfactoryinterface->QDesignerWidgetFactoryInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnTimerEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_ChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface) {
        vqdesignerwidgetfactoryinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_SuperChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self)) {
        vqdesignerwidgetfactoryinterface->QDesignerWidgetFactoryInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnChildEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_childevent_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_CustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface) {
        vqdesignerwidgetfactoryinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_SuperCustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self)) {
        vqdesignerwidgetfactoryinterface->QDesignerWidgetFactoryInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCustomEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_customevent_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_ConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface) {
        vqdesignerwidgetfactoryinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_SuperConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self)) {
        vqdesignerwidgetfactoryinterface->QDesignerWidgetFactoryInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnConnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_DisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface) {
        vqdesignerwidgetfactoryinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_SuperDisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self)) {
        vqdesignerwidgetfactoryinterface->QDesignerWidgetFactoryInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetFactoryInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnDisconnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self))
        vqdesignerwidgetfactoryinterface->qdesignerwidgetfactoryinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerWidgetFactoryInterface_Sender(const QDesignerWidgetFactoryInterface* self) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self))) {
        return vqdesignerwidgetfactoryinterface->VirtualQDesignerWidgetFactoryInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerWidgetFactoryInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetFactoryInterface_SenderSignalIndex(const QDesignerWidgetFactoryInterface* self) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self))) {
        return vqdesignerwidgetfactoryinterface->VirtualQDesignerWidgetFactoryInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerWidgetFactoryInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetFactoryInterface_Receivers(const QDesignerWidgetFactoryInterface* self, const char* signal) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self))) {
        return vqdesignerwidgetfactoryinterface->VirtualQDesignerWidgetFactoryInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetFactoryInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerWidgetFactoryInterface_IsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self))) {
        return vqdesignerwidgetfactoryinterface->VirtualQDesignerWidgetFactoryInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetFactoryInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerWidgetFactoryInterface_Delete(QDesignerWidgetFactoryInterface* self) {
    delete self;
}
