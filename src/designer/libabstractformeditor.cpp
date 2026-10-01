#include <QChildEvent>
#include <QDesignerActionEditorInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowManagerInterface>
#include <QDesignerIntegrationInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerObjectInspectorInterface>
#include <QDesignerOptionsPageInterface>
#include <QDesignerPromotionInterface>
#include <QDesignerPropertyEditorInterface>
#include <QDesignerSettingsInterface>
#include <QDesignerWidgetBoxInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetFactoryInterface>
#include <QEvent>
#include <QExtensionManager>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformeditor.h>
#include "libabstractformeditor.h"
#include "libabstractformeditor.hxx"

QDesignerFormEditorInterface* QDesignerFormEditorInterface_new() {
    return new VirtualQDesignerFormEditorInterface();
}

QDesignerFormEditorInterface* QDesignerFormEditorInterface_new2(QObject* parent) {
    return new VirtualQDesignerFormEditorInterface(parent);
}

QMetaObject* QDesignerFormEditorInterface_MetaObject(const QDesignerFormEditorInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerFormEditorInterface_Metacast(QDesignerFormEditorInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerFormEditorInterface_Metacall(QDesignerFormEditorInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerFormEditorInterface_Tr(const char* s) {
    auto _ret = QDesignerFormEditorInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QExtensionManager* QDesignerFormEditorInterface_ExtensionManager(const QDesignerFormEditorInterface* self) {
    return self->extensionManager();
}

QWidget* QDesignerFormEditorInterface_TopLevel(const QDesignerFormEditorInterface* self) {
    return self->topLevel();
}

QDesignerWidgetBoxInterface* QDesignerFormEditorInterface_WidgetBox(const QDesignerFormEditorInterface* self) {
    return self->widgetBox();
}

QDesignerPropertyEditorInterface* QDesignerFormEditorInterface_PropertyEditor(const QDesignerFormEditorInterface* self) {
    return self->propertyEditor();
}

QDesignerObjectInspectorInterface* QDesignerFormEditorInterface_ObjectInspector(const QDesignerFormEditorInterface* self) {
    return self->objectInspector();
}

QDesignerFormWindowManagerInterface* QDesignerFormEditorInterface_FormWindowManager(const QDesignerFormEditorInterface* self) {
    return self->formWindowManager();
}

QDesignerWidgetDataBaseInterface* QDesignerFormEditorInterface_WidgetDataBase(const QDesignerFormEditorInterface* self) {
    return self->widgetDataBase();
}

QDesignerMetaDataBaseInterface* QDesignerFormEditorInterface_MetaDataBase(const QDesignerFormEditorInterface* self) {
    return self->metaDataBase();
}

QDesignerPromotionInterface* QDesignerFormEditorInterface_Promotion(const QDesignerFormEditorInterface* self) {
    return self->promotion();
}

QDesignerWidgetFactoryInterface* QDesignerFormEditorInterface_WidgetFactory(const QDesignerFormEditorInterface* self) {
    return self->widgetFactory();
}

QDesignerActionEditorInterface* QDesignerFormEditorInterface_ActionEditor(const QDesignerFormEditorInterface* self) {
    return self->actionEditor();
}

QDesignerIntegrationInterface* QDesignerFormEditorInterface_Integration(const QDesignerFormEditorInterface* self) {
    return self->integration();
}

QDesignerSettingsInterface* QDesignerFormEditorInterface_SettingsManager(const QDesignerFormEditorInterface* self) {
    return self->settingsManager();
}

libqt_string QDesignerFormEditorInterface_ResourceLocation(const QDesignerFormEditorInterface* self) {
    auto _ret = self->resourceLocation();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QDesignerOptionsPageInterface* */ QDesignerFormEditorInterface_OptionsPages(const QDesignerFormEditorInterface* self) {
    QList<QDesignerOptionsPageInterface*> _ret = self->optionsPages();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDesignerOptionsPageInterface** _arr = static_cast<QDesignerOptionsPageInterface**>(malloc(sizeof(QDesignerOptionsPageInterface*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerFormEditorInterface_SetTopLevel(QDesignerFormEditorInterface* self, QWidget* topLevel) {
    self->setTopLevel(topLevel);
}

void QDesignerFormEditorInterface_SetWidgetBox(QDesignerFormEditorInterface* self, QDesignerWidgetBoxInterface* widgetBox) {
    self->setWidgetBox(widgetBox);
}

void QDesignerFormEditorInterface_SetPropertyEditor(QDesignerFormEditorInterface* self, QDesignerPropertyEditorInterface* propertyEditor) {
    self->setPropertyEditor(propertyEditor);
}

void QDesignerFormEditorInterface_SetObjectInspector(QDesignerFormEditorInterface* self, QDesignerObjectInspectorInterface* objectInspector) {
    self->setObjectInspector(objectInspector);
}

void QDesignerFormEditorInterface_SetActionEditor(QDesignerFormEditorInterface* self, QDesignerActionEditorInterface* actionEditor) {
    self->setActionEditor(actionEditor);
}

void QDesignerFormEditorInterface_SetIntegration(QDesignerFormEditorInterface* self, QDesignerIntegrationInterface* integration) {
    self->setIntegration(integration);
}

void QDesignerFormEditorInterface_SetSettingsManager(QDesignerFormEditorInterface* self, QDesignerSettingsInterface* settingsManager) {
    self->setSettingsManager(settingsManager);
}

void QDesignerFormEditorInterface_SetOptionsPages(QDesignerFormEditorInterface* self, const libqt_list /* of QDesignerOptionsPageInterface* */ optionsPages) {
    QList<QDesignerOptionsPageInterface*> optionsPages_QList;
    optionsPages_QList.reserve(optionsPages.len);
    QDesignerOptionsPageInterface** optionsPages_arr = static_cast<QDesignerOptionsPageInterface**>(optionsPages.data);
    for (size_t i = 0; i < optionsPages.len; ++i) {
        optionsPages_QList.push_back(optionsPages_arr[i]);
    }
    self->setOptionsPages(optionsPages_QList);
}

libqt_list /* of QObject* */ QDesignerFormEditorInterface_PluginInstances(const QDesignerFormEditorInterface* self) {
    QList<QObject*> _ret = self->pluginInstances();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QIcon* QDesignerFormEditorInterface_CreateIcon(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QIcon(QDesignerFormEditorInterface::createIcon(name_QString));
}

libqt_string QDesignerFormEditorInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerFormEditorInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerFormEditorInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerFormEditorInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerFormEditorInterface_SuperMetaObject(const QDesignerFormEditorInterface* self) {
    return (QMetaObject*)self->QDesignerFormEditorInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetaObject(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self)))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerFormEditorInterface_SuperMetacast(QDesignerFormEditorInterface* self, const char* param1) {
    return self->QDesignerFormEditorInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetacast(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_metacast_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerFormEditorInterface_SuperMetacall(QDesignerFormEditorInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerFormEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetacall(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_metacall_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormEditorInterface_Event(QDesignerFormEditorInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerFormEditorInterface_SuperEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    return self->QDesignerFormEditorInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_event_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormEditorInterface_EventFilter(QDesignerFormEditorInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerFormEditorInterface_SuperEventFilter(QDesignerFormEditorInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerFormEditorInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnEventFilter(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormEditorInterface_TimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface) {
        vqdesignerformeditorinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_SuperTimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->QDesignerFormEditorInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnTimerEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormEditorInterface_ChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface) {
        vqdesignerformeditorinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_SuperChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->QDesignerFormEditorInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnChildEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_childevent_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormEditorInterface_CustomEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface) {
        vqdesignerformeditorinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_SuperCustomEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->QDesignerFormEditorInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnCustomEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_customevent_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormEditorInterface_ConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface) {
        vqdesignerformeditorinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_SuperConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->QDesignerFormEditorInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnConnectNotify(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormEditorInterface_DisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface) {
        vqdesignerformeditorinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_SuperDisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->QDesignerFormEditorInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormEditorInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnDisconnectNotify(QDesignerFormEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self))
        vqdesignerformeditorinterface->qdesignerformeditorinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetFormManager(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setFormManager(formWindowManager);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setFormManager called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetMetaDataBase(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setMetaDataBase(metaDataBase);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setMetaDataBase called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetWidgetDataBase(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setWidgetDataBase(widgetDataBase);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setWidgetDataBase called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetPromotion(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setPromotion(promotion);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setPromotion called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetWidgetFactory(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setWidgetFactory(widgetFactory);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setWidgetFactory called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerFormEditorInterface_SetExtensionManager(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager) {
    if (auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self)) {
        vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::setExtensionManager(extensionManager);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::setExtensionManager called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerFormEditorInterface_Sender(const QDesignerFormEditorInterface* self) {
    if (auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self))) {
        return vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormEditorInterface_SenderSignalIndex(const QDesignerFormEditorInterface* self) {
    if (auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self))) {
        return vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormEditorInterface_Receivers(const QDesignerFormEditorInterface* self, const char* signal) {
    if (auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self))) {
        return vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerFormEditorInterface_IsSignalConnected(const QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self))) {
        return vqdesignerformeditorinterface->VirtualQDesignerFormEditorInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerFormEditorInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerFormEditorInterface_Delete(QDesignerFormEditorInterface* self) {
    delete self;
}
