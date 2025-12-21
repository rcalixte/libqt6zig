#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerIntegration>
#include <QDesignerIntegrationInterface>
#include <QDesignerResourceBrowserInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <abstractintegration.h>
#include "libabstractintegration.h"
#include "libabstractintegration.hxx"

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new(QDesignerFormEditorInterface* core) {
    return new VirtualQDesignerIntegrationInterface(core);
}

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new2(QDesignerFormEditorInterface* core, QObject* parent) {
    return new VirtualQDesignerIntegrationInterface(core, parent);
}

QMetaObject* QDesignerIntegrationInterface_MetaObject(const QDesignerIntegrationInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerIntegrationInterface_Metacast(QDesignerIntegrationInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerIntegrationInterface_Metacall(QDesignerIntegrationInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerIntegrationInterface_Core(const QDesignerIntegrationInterface* self) {
    return self->core();
}

QWidget* QDesignerIntegrationInterface_ContainerWindow(const QDesignerIntegrationInterface* self, QWidget* widget) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->containerWindow(widget);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->containerWindow(widget);
    }
}

QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_CreateResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->createResourceBrowser(parent);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->createResourceBrowser(parent);
    }
}

libqt_string QDesignerIntegrationInterface_HeaderSuffix(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        QString _ret = vqdesignerintegrationinterface->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegrationInterface*)self)->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QDesignerIntegrationInterface_SetHeaderSuffix(QDesignerIntegrationInterface* self, const libqt_string headerSuffix) {
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setHeaderSuffix(headerSuffix_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setHeaderSuffix(headerSuffix_QString);
    }
}

bool QDesignerIntegrationInterface_IsHeaderLowercase(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->isHeaderLowercase();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->isHeaderLowercase();
    }
}

void QDesignerIntegrationInterface_SetHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setHeaderLowercase(headerLowerCase);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setHeaderLowercase(headerLowerCase);
    }
}

int QDesignerIntegrationInterface_Features(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return static_cast<int>(vqdesignerintegrationinterface->features());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegrationInterface*)self)->features());
    }
}

bool QDesignerIntegrationInterface_HasFeature(const QDesignerIntegrationInterface* self, int f) {
    return self->hasFeature(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

int QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return static_cast<int>(vqdesignerintegrationinterface->resourceFileWatcherBehaviour());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegrationInterface*)self)->resourceFileWatcherBehaviour());
    }
}

void QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    }
}

libqt_string QDesignerIntegrationInterface_ContextHelpId(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        QString _ret = vqdesignerintegrationinterface->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegrationInterface*)self)->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QDesignerIntegrationInterface_EmitObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, const libqt_string newName, const libqt_string oldName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    self->emitObjectNameChanged(formWindow, object, newName_QString, oldName_QString);
}

void QDesignerIntegrationInterface_EmitNavigateToSlot(QDesignerIntegrationInterface* self, const libqt_string objectName, const libqt_string signalSignature, const libqt_list /* of libqt_string */ parameterNames) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    QString signalSignature_QString = QString::fromUtf8(signalSignature.data, signalSignature.len);
    QList<QString> parameterNames_QList;
    parameterNames_QList.reserve(parameterNames.len);
    libqt_string* parameterNames_arr = static_cast<libqt_string*>(parameterNames.data);
    for (size_t i = 0; i < parameterNames.len; ++i) {
        QString parameterNames_arr_i_QString = QString::fromUtf8(parameterNames_arr[i].data, parameterNames_arr[i].len);
        parameterNames_QList.push_back(parameterNames_arr_i_QString);
    }
    self->emitNavigateToSlot(objectName_QString, signalSignature_QString, parameterNames_QList);
}

void QDesignerIntegrationInterface_EmitNavigateToSlot2(QDesignerIntegrationInterface* self, const libqt_string slotSignature) {
    QString slotSignature_QString = QString::fromUtf8(slotSignature.data, slotSignature.len);
    self->emitNavigateToSlot(slotSignature_QString);
}

void QDesignerIntegrationInterface_EmitHelpRequested(QDesignerIntegrationInterface* self, const libqt_string manual, const libqt_string document) {
    QString manual_QString = QString::fromUtf8(manual.data, manual.len);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    self->emitHelpRequested(manual_QString, document_QString);
}

void QDesignerIntegrationInterface_PropertyChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->propertyChanged(formWindow, name_QString, *value);
}

void QDesignerIntegrationInterface_ObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, const libqt_string newName, const libqt_string oldName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    self->objectNameChanged(formWindow, object, newName_QString, oldName_QString);
}

void QDesignerIntegrationInterface_HelpRequested(QDesignerIntegrationInterface* self, const libqt_string manual, const libqt_string document) {
    QString manual_QString = QString::fromUtf8(manual.data, manual.len);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    self->helpRequested(manual_QString, document_QString);
}

void QDesignerIntegrationInterface_NavigateToSlot(QDesignerIntegrationInterface* self, const libqt_string objectName, const libqt_string signalSignature, const libqt_list /* of libqt_string */ parameterNames) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    QString signalSignature_QString = QString::fromUtf8(signalSignature.data, signalSignature.len);
    QList<QString> parameterNames_QList;
    parameterNames_QList.reserve(parameterNames.len);
    libqt_string* parameterNames_arr = static_cast<libqt_string*>(parameterNames.data);
    for (size_t i = 0; i < parameterNames.len; ++i) {
        QString parameterNames_arr_i_QString = QString::fromUtf8(parameterNames_arr[i].data, parameterNames_arr[i].len);
        parameterNames_QList.push_back(parameterNames_arr_i_QString);
    }
    self->navigateToSlot(objectName_QString, signalSignature_QString, parameterNames_QList);
}

void QDesignerIntegrationInterface_NavigateToSlot2(QDesignerIntegrationInterface* self, const libqt_string slotSignature) {
    QString slotSignature_QString = QString::fromUtf8(slotSignature.data, slotSignature.len);
    self->navigateToSlot(slotSignature_QString);
}

void QDesignerIntegrationInterface_SetFeatures(QDesignerIntegrationInterface* self, int f) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    }
}

void QDesignerIntegrationInterface_UpdateProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->updateProperty(name_QString, *value, enableSubPropertyHandling);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateProperty(name_QString, *value, enableSubPropertyHandling);
    }
}

void QDesignerIntegrationInterface_UpdateProperty2(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->updateProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateProperty(name_QString, *value);
    }
}

void QDesignerIntegrationInterface_ResetProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->resetProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->resetProperty(name_QString);
    }
}

void QDesignerIntegrationInterface_AddDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->addDynamicProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->addDynamicProperty(name_QString, *value);
    }
}

void QDesignerIntegrationInterface_RemoveDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->removeDynamicProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->removeDynamicProperty(name_QString);
    }
}

void QDesignerIntegrationInterface_UpdateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->updateActiveFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateActiveFormWindow(formWindow);
    }
}

void QDesignerIntegrationInterface_SetupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setupFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setupFormWindow(formWindow);
    }
}

void QDesignerIntegrationInterface_UpdateSelection(QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->updateSelection();
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateSelection();
    }
}

void QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->updateCustomWidgetPlugins();
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateCustomWidgetPlugins();
    }
}

// Base class handler implementation
int QDesignerIntegrationInterface_QBaseMetacall(QDesignerIntegrationInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Metacall_IsBase(true);
        return vqdesignerintegrationinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerIntegrationInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnMetacall(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerIntegrationInterface_QBaseContainerWindow(const QDesignerIntegrationInterface* self, QWidget* widget) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ContainerWindow_IsBase(true);
        return vqdesignerintegrationinterface->containerWindow(widget);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->containerWindow(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnContainerWindow(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ContainerWindow_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ContainerWindow_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_QBaseCreateResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_CreateResourceBrowser_IsBase(true);
        return vqdesignerintegrationinterface->createResourceBrowser(parent);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->createResourceBrowser(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnCreateResourceBrowser(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_CreateResourceBrowser_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_CreateResourceBrowser_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerIntegrationInterface_QBaseHeaderSuffix(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_HeaderSuffix_IsBase(true);
        QString _ret = vqdesignerintegrationinterface->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegrationInterface*)self)->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnHeaderSuffix(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_HeaderSuffix_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_HeaderSuffix_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseSetHeaderSuffix(QDesignerIntegrationInterface* self, const libqt_string headerSuffix) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetHeaderSuffix_IsBase(true);
        vqdesignerintegrationinterface->setHeaderSuffix(headerSuffix_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setHeaderSuffix(headerSuffix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetHeaderSuffix(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetHeaderSuffix_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetHeaderSuffix_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerIntegrationInterface_QBaseIsHeaderLowercase(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_IsHeaderLowercase_IsBase(true);
        return vqdesignerintegrationinterface->isHeaderLowercase();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->isHeaderLowercase();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnIsHeaderLowercase(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_IsHeaderLowercase_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_IsHeaderLowercase_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseSetHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetHeaderLowercase_IsBase(true);
        vqdesignerintegrationinterface->setHeaderLowercase(headerLowerCase);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setHeaderLowercase(headerLowerCase);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetHeaderLowercase(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetHeaderLowercase_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetHeaderLowercase_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerIntegrationInterface_QBaseFeatures(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Features_IsBase(true);
        return static_cast<int>(vqdesignerintegrationinterface->features());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegrationInterface*)self)->features());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnFeatures(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Features_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Features_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerIntegrationInterface_QBaseResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ResourceFileWatcherBehaviour_IsBase(true);
        return static_cast<int>(vqdesignerintegrationinterface->resourceFileWatcherBehaviour());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegrationInterface*)self)->resourceFileWatcherBehaviour());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseSetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_IsBase(true);
        vqdesignerintegrationinterface->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerIntegrationInterface_QBaseContextHelpId(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ContextHelpId_IsBase(true);
        QString _ret = vqdesignerintegrationinterface->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegrationInterface*)self)->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnContextHelpId(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ContextHelpId_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ContextHelpId_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseSetFeatures(QDesignerIntegrationInterface* self, int f) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetFeatures_IsBase(true);
        vqdesignerintegrationinterface->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetFeatures(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetFeatures_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetFeatures_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseUpdateProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateProperty_IsBase(true);
        vqdesignerintegrationinterface->updateProperty(name_QString, *value, enableSubPropertyHandling);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateProperty(name_QString, *value, enableSubPropertyHandling);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateProperty_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseUpdateProperty2(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateProperty2_IsBase(true);
        vqdesignerintegrationinterface->updateProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateProperty2(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateProperty2_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateProperty2_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseResetProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ResetProperty_IsBase(true);
        vqdesignerintegrationinterface->resetProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->resetProperty(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnResetProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ResetProperty_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ResetProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseAddDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_AddDynamicProperty_IsBase(true);
        vqdesignerintegrationinterface->addDynamicProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->addDynamicProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnAddDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_AddDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_AddDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseRemoveDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_RemoveDynamicProperty_IsBase(true);
        vqdesignerintegrationinterface->removeDynamicProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->removeDynamicProperty(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnRemoveDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_RemoveDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_RemoveDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseUpdateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateActiveFormWindow_IsBase(true);
        vqdesignerintegrationinterface->updateActiveFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateActiveFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateActiveFormWindow(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateActiveFormWindow_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseSetupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetupFormWindow_IsBase(true);
        vqdesignerintegrationinterface->setupFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->setupFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetupFormWindow(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SetupFormWindow_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetupFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseUpdateSelection(QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateSelection_IsBase(true);
        vqdesignerintegrationinterface->updateSelection();
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateSelection(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateSelection_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateSelection_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseUpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateCustomWidgetPlugins_IsBase(true);
        vqdesignerintegrationinterface->updateCustomWidgetPlugins();
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->updateCustomWidgetPlugins();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegrationInterface_Event(QDesignerIntegrationInterface* self, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->event(event);
    } else {
        return self->QDesignerIntegrationInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerIntegrationInterface_QBaseEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Event_IsBase(true);
        return vqdesignerintegrationinterface->event(event);
    } else {
        return self->QDesignerIntegrationInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Event_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegrationInterface_EventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerIntegrationInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerIntegrationInterface_QBaseEventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_EventFilter_IsBase(true);
        return vqdesignerintegrationinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerIntegrationInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnEventFilter(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegrationInterface_TimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseTimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_TimerEvent_IsBase(true);
        vqdesignerintegrationinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnTimerEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegrationInterface_ChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->childEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ChildEvent_IsBase(true);
        vqdesignerintegrationinterface->childEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnChildEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegrationInterface_CustomEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->customEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseCustomEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_CustomEvent_IsBase(true);
        vqdesignerintegrationinterface->customEvent(event);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnCustomEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegrationInterface_ConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ConnectNotify_IsBase(true);
        vqdesignerintegrationinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnConnectNotify(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegrationInterface_DisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_QBaseDisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_DisconnectNotify_IsBase(true);
        vqdesignerintegrationinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegrationInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnDisconnectNotify(QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerIntegrationInterface_Sender(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->sender();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerIntegrationInterface_QBaseSender(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Sender_IsBase(true);
        return vqdesignerintegrationinterface->sender();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSender(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerIntegrationInterface_SenderSignalIndex(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerIntegrationInterface_QBaseSenderSignalIndex(const QDesignerIntegrationInterface* self) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerintegrationinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSenderSignalIndex(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerIntegrationInterface_Receivers(const QDesignerIntegrationInterface* self, const char* signal) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerIntegrationInterface_QBaseReceivers(const QDesignerIntegrationInterface* self, const char* signal) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Receivers_IsBase(true);
        return vqdesignerintegrationinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnReceivers(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegrationInterface_IsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        return vqdesignerintegrationinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerIntegrationInterface_QBaseIsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_IsSignalConnected_IsBase(true);
        return vqdesignerintegrationinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerIntegrationInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnIsSignalConnected(const QDesignerIntegrationInterface* self, intptr_t slot) {
    auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self));
    if (vqdesignerintegrationinterface && vqdesignerintegrationinterface->isVirtualQDesignerIntegrationInterface) {
        vqdesignerintegrationinterface->setQDesignerIntegrationInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerIntegrationInterface_Delete(QDesignerIntegrationInterface* self) {
    delete self;
}

QDesignerIntegration* QDesignerIntegration_new(QDesignerFormEditorInterface* core) {
    return new VirtualQDesignerIntegration(core);
}

QDesignerIntegration* QDesignerIntegration_new2(QDesignerFormEditorInterface* core, QObject* parent) {
    return new VirtualQDesignerIntegration(core, parent);
}

QMetaObject* QDesignerIntegration_MetaObject(const QDesignerIntegration* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerIntegration_Metacast(QDesignerIntegration* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerIntegration_Metacall(QDesignerIntegration* self, int param1, int param2, void** param3) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerIntegration*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDesignerIntegration_HeaderSuffix(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        QString _ret = self->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegration*)self)->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QDesignerIntegration_SetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix) {
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->setHeaderSuffix(headerSuffix_QString);
    } else {
        ((VirtualQDesignerIntegration*)self)->setHeaderSuffix(headerSuffix_QString);
    }
}

bool QDesignerIntegration_IsHeaderLowercase(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return self->isHeaderLowercase();
    } else {
        return ((VirtualQDesignerIntegration*)self)->isHeaderLowercase();
    }
}

void QDesignerIntegration_SetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->setHeaderLowercase(headerLowerCase);
    } else {
        ((VirtualQDesignerIntegration*)self)->setHeaderLowercase(headerLowerCase);
    }
}

int QDesignerIntegration_Features(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return static_cast<int>(self->features());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegration*)self)->features());
    }
}

void QDesignerIntegration_SetFeatures(QDesignerIntegration* self, int f) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    } else {
        ((VirtualQDesignerIntegration*)self)->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    }
}

int QDesignerIntegration_ResourceFileWatcherBehaviour(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return static_cast<int>(self->resourceFileWatcherBehaviour());
    } else {
        return static_cast<int>(((VirtualQDesignerIntegration*)self)->resourceFileWatcherBehaviour());
    }
}

void QDesignerIntegration_SetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    } else {
        ((VirtualQDesignerIntegration*)self)->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    }
}

QWidget* QDesignerIntegration_ContainerWindow(const QDesignerIntegration* self, QWidget* widget) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return self->containerWindow(widget);
    } else {
        return ((VirtualQDesignerIntegration*)self)->containerWindow(widget);
    }
}

void QDesignerIntegration_InitializePlugins(QDesignerFormEditorInterface* formEditor) {
    QDesignerIntegration::initializePlugins(formEditor);
}

QDesignerResourceBrowserInterface* QDesignerIntegration_CreateResourceBrowser(QDesignerIntegration* self, QWidget* parent) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return self->createResourceBrowser(parent);
    } else {
        return ((VirtualQDesignerIntegration*)self)->createResourceBrowser(parent);
    }
}

libqt_string QDesignerIntegration_ContextHelpId(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<const VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        QString _ret = self->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerIntegration*)self)->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QDesignerIntegration_UpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->updateProperty(name_QString, *value, enableSubPropertyHandling);
    } else {
        ((VirtualQDesignerIntegration*)self)->updateProperty(name_QString, *value, enableSubPropertyHandling);
    }
}

void QDesignerIntegration_UpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->updateProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegration*)self)->updateProperty(name_QString, *value);
    }
}

void QDesignerIntegration_ResetProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->resetProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegration*)self)->resetProperty(name_QString);
    }
}

void QDesignerIntegration_AddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->addDynamicProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerIntegration*)self)->addDynamicProperty(name_QString, *value);
    }
}

void QDesignerIntegration_RemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->removeDynamicProperty(name_QString);
    } else {
        ((VirtualQDesignerIntegration*)self)->removeDynamicProperty(name_QString);
    }
}

void QDesignerIntegration_UpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->updateActiveFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegration*)self)->updateActiveFormWindow(formWindow);
    }
}

void QDesignerIntegration_SetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->setupFormWindow(formWindow);
    } else {
        ((VirtualQDesignerIntegration*)self)->setupFormWindow(formWindow);
    }
}

void QDesignerIntegration_UpdateSelection(QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->updateSelection();
    } else {
        ((VirtualQDesignerIntegration*)self)->updateSelection();
    }
}

void QDesignerIntegration_UpdateCustomWidgetPlugins(QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        self->updateCustomWidgetPlugins();
    } else {
        ((VirtualQDesignerIntegration*)self)->updateCustomWidgetPlugins();
    }
}

// Base class handler implementation
int QDesignerIntegration_QBaseMetacall(QDesignerIntegration* self, int param1, int param2, void** param3) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Metacall_IsBase(true);
        return vqdesignerintegration->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerIntegration::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnMetacall(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Metacall_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerIntegration_QBaseHeaderSuffix(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_HeaderSuffix_IsBase(true);
        QString _ret = vqdesignerintegration->headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QDesignerIntegration::headerSuffix();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnHeaderSuffix(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_HeaderSuffix_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_HeaderSuffix_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseSetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetHeaderSuffix_IsBase(true);
        vqdesignerintegration->setHeaderSuffix(headerSuffix_QString);
    } else {
        self->QDesignerIntegration::setHeaderSuffix(headerSuffix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetHeaderSuffix(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetHeaderSuffix_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetHeaderSuffix_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerIntegration_QBaseIsHeaderLowercase(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_IsHeaderLowercase_IsBase(true);
        return vqdesignerintegration->isHeaderLowercase();
    } else {
        return self->QDesignerIntegration::isHeaderLowercase();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnIsHeaderLowercase(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_IsHeaderLowercase_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_IsHeaderLowercase_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseSetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetHeaderLowercase_IsBase(true);
        vqdesignerintegration->setHeaderLowercase(headerLowerCase);
    } else {
        self->QDesignerIntegration::setHeaderLowercase(headerLowerCase);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetHeaderLowercase(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetHeaderLowercase_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetHeaderLowercase_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerIntegration_QBaseFeatures(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Features_IsBase(true);
        return static_cast<int>(vqdesignerintegration->features());
    } else {
        return static_cast<int>(self->QDesignerIntegration::features());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnFeatures(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Features_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Features_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseSetFeatures(QDesignerIntegration* self, int f) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetFeatures_IsBase(true);
        vqdesignerintegration->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    } else {
        self->QDesignerIntegration::setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetFeatures(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetFeatures_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetFeatures_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerIntegration_QBaseResourceFileWatcherBehaviour(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ResourceFileWatcherBehaviour_IsBase(true);
        return static_cast<int>(vqdesignerintegration->resourceFileWatcherBehaviour());
    } else {
        return static_cast<int>(self->QDesignerIntegration::resourceFileWatcherBehaviour());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnResourceFileWatcherBehaviour(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ResourceFileWatcherBehaviour_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ResourceFileWatcherBehaviour_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseSetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetResourceFileWatcherBehaviour_IsBase(true);
        vqdesignerintegration->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    } else {
        self->QDesignerIntegration::setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetResourceFileWatcherBehaviour(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetResourceFileWatcherBehaviour_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerIntegration_QBaseContainerWindow(const QDesignerIntegration* self, QWidget* widget) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ContainerWindow_IsBase(true);
        return vqdesignerintegration->containerWindow(widget);
    } else {
        return self->QDesignerIntegration::containerWindow(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnContainerWindow(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ContainerWindow_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ContainerWindow_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerResourceBrowserInterface* QDesignerIntegration_QBaseCreateResourceBrowser(QDesignerIntegration* self, QWidget* parent) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_CreateResourceBrowser_IsBase(true);
        return vqdesignerintegration->createResourceBrowser(parent);
    } else {
        return self->QDesignerIntegration::createResourceBrowser(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnCreateResourceBrowser(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_CreateResourceBrowser_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_CreateResourceBrowser_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerIntegration_QBaseContextHelpId(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ContextHelpId_IsBase(true);
        QString _ret = vqdesignerintegration->contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QDesignerIntegration::contextHelpId();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnContextHelpId(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ContextHelpId_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ContextHelpId_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseUpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateProperty_IsBase(true);
        vqdesignerintegration->updateProperty(name_QString, *value, enableSubPropertyHandling);
    } else {
        self->QDesignerIntegration::updateProperty(name_QString, *value, enableSubPropertyHandling);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateProperty(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateProperty_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseUpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateProperty2_IsBase(true);
        vqdesignerintegration->updateProperty(name_QString, *value);
    } else {
        self->QDesignerIntegration::updateProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateProperty2(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateProperty2_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateProperty2_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseResetProperty(QDesignerIntegration* self, const libqt_string name) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ResetProperty_IsBase(true);
        vqdesignerintegration->resetProperty(name_QString);
    } else {
        self->QDesignerIntegration::resetProperty(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnResetProperty(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ResetProperty_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ResetProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseAddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_AddDynamicProperty_IsBase(true);
        vqdesignerintegration->addDynamicProperty(name_QString, *value);
    } else {
        self->QDesignerIntegration::addDynamicProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnAddDynamicProperty(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_AddDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_AddDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseRemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_RemoveDynamicProperty_IsBase(true);
        vqdesignerintegration->removeDynamicProperty(name_QString);
    } else {
        self->QDesignerIntegration::removeDynamicProperty(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnRemoveDynamicProperty(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_RemoveDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_RemoveDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseUpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateActiveFormWindow_IsBase(true);
        vqdesignerintegration->updateActiveFormWindow(formWindow);
    } else {
        self->QDesignerIntegration::updateActiveFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateActiveFormWindow(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateActiveFormWindow_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateActiveFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseSetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetupFormWindow_IsBase(true);
        vqdesignerintegration->setupFormWindow(formWindow);
    } else {
        self->QDesignerIntegration::setupFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetupFormWindow(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SetupFormWindow_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetupFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseUpdateSelection(QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateSelection_IsBase(true);
        vqdesignerintegration->updateSelection();
    } else {
        self->QDesignerIntegration::updateSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateSelection(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateSelection_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateSelection_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseUpdateCustomWidgetPlugins(QDesignerIntegration* self) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateCustomWidgetPlugins_IsBase(true);
        vqdesignerintegration->updateCustomWidgetPlugins();
    } else {
        self->QDesignerIntegration::updateCustomWidgetPlugins();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateCustomWidgetPlugins(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_UpdateCustomWidgetPlugins_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateCustomWidgetPlugins_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegration_Event(QDesignerIntegration* self, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->event(event);
    } else {
        return self->QDesignerIntegration::event(event);
    }
}

// Base class handler implementation
bool QDesignerIntegration_QBaseEvent(QDesignerIntegration* self, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Event_IsBase(true);
        return vqdesignerintegration->event(event);
    } else {
        return self->QDesignerIntegration::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnEvent(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Event_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegration_EventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->eventFilter(watched, event);
    } else {
        return self->QDesignerIntegration::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerIntegration_QBaseEventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_EventFilter_IsBase(true);
        return vqdesignerintegration->eventFilter(watched, event);
    } else {
        return self->QDesignerIntegration::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnEventFilter(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_EventFilter_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegration_TimerEvent(QDesignerIntegration* self, QTimerEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->timerEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseTimerEvent(QDesignerIntegration* self, QTimerEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_TimerEvent_IsBase(true);
        vqdesignerintegration->timerEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnTimerEvent(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegration_ChildEvent(QDesignerIntegration* self, QChildEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->childEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseChildEvent(QDesignerIntegration* self, QChildEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ChildEvent_IsBase(true);
        vqdesignerintegration->childEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnChildEvent(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegration_CustomEvent(QDesignerIntegration* self, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->customEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseCustomEvent(QDesignerIntegration* self, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_CustomEvent_IsBase(true);
        vqdesignerintegration->customEvent(event);
    } else {
        ((VirtualQDesignerIntegration*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnCustomEvent(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegration_ConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->connectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegration*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ConnectNotify_IsBase(true);
        vqdesignerintegration->connectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegration*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnConnectNotify(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerIntegration_DisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegration*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerIntegration_QBaseDisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_DisconnectNotify_IsBase(true);
        vqdesignerintegration->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerIntegration*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnDisconnectNotify(QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerIntegration_Sender(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->sender();
    } else {
        return ((VirtualQDesignerIntegration*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerIntegration_QBaseSender(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Sender_IsBase(true);
        return vqdesignerintegration->sender();
    } else {
        return ((VirtualQDesignerIntegration*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSender(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Sender_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerIntegration_SenderSignalIndex(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->senderSignalIndex();
    } else {
        return ((VirtualQDesignerIntegration*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerIntegration_QBaseSenderSignalIndex(const QDesignerIntegration* self) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SenderSignalIndex_IsBase(true);
        return vqdesignerintegration->senderSignalIndex();
    } else {
        return ((VirtualQDesignerIntegration*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSenderSignalIndex(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerIntegration_Receivers(const QDesignerIntegration* self, const char* signal) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->receivers(signal);
    } else {
        return ((VirtualQDesignerIntegration*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerIntegration_QBaseReceivers(const QDesignerIntegration* self, const char* signal) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Receivers_IsBase(true);
        return vqdesignerintegration->receivers(signal);
    } else {
        return ((VirtualQDesignerIntegration*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnReceivers(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_Receivers_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerIntegration_IsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        return vqdesignerintegration->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerIntegration*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerIntegration_QBaseIsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_IsSignalConnected_IsBase(true);
        return vqdesignerintegration->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerIntegration*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnIsSignalConnected(const QDesignerIntegration* self, intptr_t slot) {
    auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self));
    if (vqdesignerintegration && vqdesignerintegration->isVirtualQDesignerIntegration) {
        vqdesignerintegration->setQDesignerIntegration_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerIntegration_Delete(QDesignerIntegration* self) {
    delete self;
}
