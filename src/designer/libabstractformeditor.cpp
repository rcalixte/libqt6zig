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
#include <QByteArray>
#include <cstring>
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
    auto* vqdesignerformeditorinterface = dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerFormEditorInterface*)self)->metaObject();
    }
}

void* QDesignerFormEditorInterface_Metacast(QDesignerFormEditorInterface* self, const char* param1) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerFormEditorInterface_Metacall(QDesignerFormEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    QString _ret = self->resourceLocation();
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

// Base class handler implementation
QMetaObject* QDesignerFormEditorInterface_QBaseMetaObject(const QDesignerFormEditorInterface* self) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerformeditorinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerFormEditorInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetaObject(const QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerFormEditorInterface_QBaseMetacast(QDesignerFormEditorInterface* self, const char* param1) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Metacast_IsBase(true);
        return vqdesignerformeditorinterface->qt_metacast(param1);
    } else {
        return self->QDesignerFormEditorInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetacast(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormEditorInterface_QBaseMetacall(QDesignerFormEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Metacall_IsBase(true);
        return vqdesignerformeditorinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerFormEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnMetacall(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormEditorInterface_Event(QDesignerFormEditorInterface* self, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->event(event);
    } else {
        return self->QDesignerFormEditorInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerFormEditorInterface_QBaseEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Event_IsBase(true);
        return vqdesignerformeditorinterface->event(event);
    } else {
        return self->QDesignerFormEditorInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Event_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormEditorInterface_EventFilter(QDesignerFormEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormEditorInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerFormEditorInterface_QBaseEventFilter(QDesignerFormEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_EventFilter_IsBase(true);
        return vqdesignerformeditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormEditorInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnEventFilter(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_TimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseTimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_TimerEvent_IsBase(true);
        vqdesignerformeditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnTimerEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_ChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_ChildEvent_IsBase(true);
        vqdesignerformeditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnChildEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_CustomEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseCustomEvent(QDesignerFormEditorInterface* self, QEvent* event) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_CustomEvent_IsBase(true);
        vqdesignerformeditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnCustomEvent(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_ConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_ConnectNotify_IsBase(true);
        vqdesignerformeditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnConnectNotify(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_DisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseDisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_DisconnectNotify_IsBase(true);
        vqdesignerformeditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnDisconnectNotify(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetFormManager(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setFormManager(formWindowManager);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setFormManager(formWindowManager);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetFormManager(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetFormManager_IsBase(true);
        vqdesignerformeditorinterface->setFormManager(formWindowManager);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setFormManager(formWindowManager);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetFormManager(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetFormManager_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetFormManager_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetMetaDataBase(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setMetaDataBase(metaDataBase);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setMetaDataBase(metaDataBase);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetMetaDataBase(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetMetaDataBase_IsBase(true);
        vqdesignerformeditorinterface->setMetaDataBase(metaDataBase);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setMetaDataBase(metaDataBase);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetMetaDataBase(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetMetaDataBase_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetMetaDataBase_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetWidgetDataBase(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setWidgetDataBase(widgetDataBase);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setWidgetDataBase(widgetDataBase);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetWidgetDataBase(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetWidgetDataBase_IsBase(true);
        vqdesignerformeditorinterface->setWidgetDataBase(widgetDataBase);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setWidgetDataBase(widgetDataBase);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetWidgetDataBase(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetWidgetDataBase_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetWidgetDataBase_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetPromotion(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setPromotion(promotion);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setPromotion(promotion);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetPromotion(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetPromotion_IsBase(true);
        vqdesignerformeditorinterface->setPromotion(promotion);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setPromotion(promotion);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetPromotion(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetPromotion_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetPromotion_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetWidgetFactory(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setWidgetFactory(widgetFactory);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setWidgetFactory(widgetFactory);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetWidgetFactory(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetWidgetFactory_IsBase(true);
        vqdesignerformeditorinterface->setWidgetFactory(widgetFactory);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setWidgetFactory(widgetFactory);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetWidgetFactory(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetWidgetFactory_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetWidgetFactory_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormEditorInterface_SetExtensionManager(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setExtensionManager(extensionManager);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setExtensionManager(extensionManager);
    }
}

// Base class handler implementation
void QDesignerFormEditorInterface_QBaseSetExtensionManager(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetExtensionManager_IsBase(true);
        vqdesignerformeditorinterface->setExtensionManager(extensionManager);
    } else {
        ((VirtualQDesignerFormEditorInterface*)self)->setExtensionManager(extensionManager);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSetExtensionManager(QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = dynamic_cast<VirtualQDesignerFormEditorInterface*>(self);
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SetExtensionManager_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SetExtensionManager_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerFormEditorInterface_Sender(const QDesignerFormEditorInterface* self) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->sender();
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerFormEditorInterface_QBaseSender(const QDesignerFormEditorInterface* self) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Sender_IsBase(true);
        return vqdesignerformeditorinterface->sender();
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSender(const QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormEditorInterface_SenderSignalIndex(const QDesignerFormEditorInterface* self) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerFormEditorInterface_QBaseSenderSignalIndex(const QDesignerFormEditorInterface* self) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerformeditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnSenderSignalIndex(const QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormEditorInterface_Receivers(const QDesignerFormEditorInterface* self, const char* signal) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerFormEditorInterface_QBaseReceivers(const QDesignerFormEditorInterface* self, const char* signal) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Receivers_IsBase(true);
        return vqdesignerformeditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnReceivers(const QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormEditorInterface_IsSignalConnected(const QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        return vqdesignerformeditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerFormEditorInterface_QBaseIsSignalConnected(const QDesignerFormEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_IsSignalConnected_IsBase(true);
        return vqdesignerformeditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorInterface_OnIsSignalConnected(const QDesignerFormEditorInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorinterface = const_cast<VirtualQDesignerFormEditorInterface*>(dynamic_cast<const VirtualQDesignerFormEditorInterface*>(self));
    if (vqdesignerformeditorinterface && vqdesignerformeditorinterface->isVirtualQDesignerFormEditorInterface) {
        vqdesignerformeditorinterface->setQDesignerFormEditorInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerFormEditorInterface::QDesignerFormEditorInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerFormEditorInterface_Delete(QDesignerFormEditorInterface* self) {
    delete self;
}
