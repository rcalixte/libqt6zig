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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerIntegrationInterface_Tr(const char* s) {
    auto _ret = QDesignerIntegrationInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerIntegrationInterface_Core(const QDesignerIntegrationInterface* self) {
    return self->core();
}

QWidget* QDesignerIntegrationInterface_ContainerWindow(const QDesignerIntegrationInterface* self, QWidget* widget) {
    return self->containerWindow(widget);
}

QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_CreateResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent) {
    return self->createResourceBrowser(parent);
}

libqt_string QDesignerIntegrationInterface_HeaderSuffix(const QDesignerIntegrationInterface* self) {
    auto _ret = self->headerSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerIntegrationInterface_SetHeaderSuffix(QDesignerIntegrationInterface* self, const libqt_string headerSuffix) {
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    self->setHeaderSuffix(headerSuffix_QString);
}

bool QDesignerIntegrationInterface_IsHeaderLowercase(const QDesignerIntegrationInterface* self) {
    return self->isHeaderLowercase();
}

void QDesignerIntegrationInterface_SetHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase) {
    self->setHeaderLowercase(headerLowerCase);
}

int QDesignerIntegrationInterface_Features(const QDesignerIntegrationInterface* self) {
    return static_cast<int>(self->features());
}

bool QDesignerIntegrationInterface_HasFeature(const QDesignerIntegrationInterface* self, int f) {
    return self->hasFeature(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

int QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self) {
    return static_cast<int>(self->resourceFileWatcherBehaviour());
}

void QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour) {
    self->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
}

libqt_string QDesignerIntegrationInterface_ContextHelpId(const QDesignerIntegrationInterface* self) {
    auto _ret = self->contextHelpId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

void QDesignerIntegrationInterface_Connect_PropertyChanged(QDesignerIntegrationInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*, const char*, QVariant*) = reinterpret_cast<void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*, const char*, QVariant*)>(slot);
    QDesignerIntegrationInterface::connect(self,
                                           static_cast<void (QDesignerIntegrationInterface::*)(QDesignerFormWindowInterface*, const QString&, const QVariant&)>(&QDesignerIntegrationInterface::propertyChanged),
                                           [self, slotFunc](QDesignerFormWindowInterface* formWindow, const QString& name, const QVariant& value) {
                                               QDesignerFormWindowInterface* sigval1 = formWindow;
                                               const auto name_ret = name;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray name_b = name_ret.toUtf8();
                                               auto name_str_len = name_b.length();
                                               const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                               memcpy((void*)name_str, name_b.data(), name_str_len);
                                               ((char*)name_str)[name_str_len] = '\0';
                                               const char* sigval2 = name_str;
                                               const QVariant& value_ret = value;
                                               // Cast returned reference into pointer
                                               QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
                                               slotFunc(self, sigval1, sigval2, sigval3);
                                               libqt_free(name_str);
                                           });
}

void QDesignerIntegrationInterface_ObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, const libqt_string newName, const libqt_string oldName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    self->objectNameChanged(formWindow, object, newName_QString, oldName_QString);
}

void QDesignerIntegrationInterface_Connect_ObjectNameChanged(QDesignerIntegrationInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*, QObject*, const char*, const char*) = reinterpret_cast<void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*, QObject*, const char*, const char*)>(slot);
    QDesignerIntegrationInterface::connect(self,
                                           static_cast<void (QDesignerIntegrationInterface::*)(QDesignerFormWindowInterface*, QObject*, const QString&, const QString&)>(&QDesignerIntegrationInterface::objectNameChanged),
                                           [self, slotFunc](QDesignerFormWindowInterface* formWindow, QObject* object, const QString& newName, const QString& oldName) {
                                               QDesignerFormWindowInterface* sigval1 = formWindow;
                                               QObject* sigval2 = object;
                                               const auto newName_ret = newName;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray newName_b = newName_ret.toUtf8();
                                               auto newName_str_len = newName_b.length();
                                               const char* newName_str = static_cast<const char*>(malloc(newName_str_len + 1));
                                               memcpy((void*)newName_str, newName_b.data(), newName_str_len);
                                               ((char*)newName_str)[newName_str_len] = '\0';
                                               const char* sigval3 = newName_str;
                                               const auto oldName_ret = oldName;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray oldName_b = oldName_ret.toUtf8();
                                               auto oldName_str_len = oldName_b.length();
                                               const char* oldName_str = static_cast<const char*>(malloc(oldName_str_len + 1));
                                               memcpy((void*)oldName_str, oldName_b.data(), oldName_str_len);
                                               ((char*)oldName_str)[oldName_str_len] = '\0';
                                               const char* sigval4 = oldName_str;
                                               slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                                               libqt_free(newName_str);
                                               libqt_free(oldName_str);
                                           });
}

void QDesignerIntegrationInterface_HelpRequested(QDesignerIntegrationInterface* self, const libqt_string manual, const libqt_string document) {
    QString manual_QString = QString::fromUtf8(manual.data, manual.len);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    self->helpRequested(manual_QString, document_QString);
}

void QDesignerIntegrationInterface_Connect_HelpRequested(QDesignerIntegrationInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerIntegrationInterface*, const char*, const char*) = reinterpret_cast<void (*)(QDesignerIntegrationInterface*, const char*, const char*)>(slot);
    QDesignerIntegrationInterface::connect(self,
                                           static_cast<void (QDesignerIntegrationInterface::*)(const QString&, const QString&)>(&QDesignerIntegrationInterface::helpRequested),
                                           [self, slotFunc](const QString& manual, const QString& document) {
                                               const auto manual_ret = manual;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray manual_b = manual_ret.toUtf8();
                                               auto manual_str_len = manual_b.length();
                                               const char* manual_str = static_cast<const char*>(malloc(manual_str_len + 1));
                                               memcpy((void*)manual_str, manual_b.data(), manual_str_len);
                                               ((char*)manual_str)[manual_str_len] = '\0';
                                               const char* sigval1 = manual_str;
                                               const auto document_ret = document;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray document_b = document_ret.toUtf8();
                                               auto document_str_len = document_b.length();
                                               const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
                                               memcpy((void*)document_str, document_b.data(), document_str_len);
                                               ((char*)document_str)[document_str_len] = '\0';
                                               const char* sigval2 = document_str;
                                               slotFunc(self, sigval1, sigval2);
                                               libqt_free(manual_str);
                                               libqt_free(document_str);
                                           });
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

void QDesignerIntegrationInterface_Connect_NavigateToSlot(QDesignerIntegrationInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerIntegrationInterface*, const char*, const char*, const char**) = reinterpret_cast<void (*)(QDesignerIntegrationInterface*, const char*, const char*, const char**)>(slot);
    QDesignerIntegrationInterface::connect(self,
                                           static_cast<void (QDesignerIntegrationInterface::*)(const QString&, const QString&, const QList<QString>&)>(&QDesignerIntegrationInterface::navigateToSlot),
                                           [self, slotFunc](const QString& objectName, const QString& signalSignature, const QList<QString>& parameterNames) {
                                               const auto objectName_ret = objectName;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray objectName_b = objectName_ret.toUtf8();
                                               auto objectName_str_len = objectName_b.length();
                                               const char* objectName_str = static_cast<const char*>(malloc(objectName_str_len + 1));
                                               memcpy((void*)objectName_str, objectName_b.data(), objectName_str_len);
                                               ((char*)objectName_str)[objectName_str_len] = '\0';
                                               const char* sigval1 = objectName_str;
                                               const auto signalSignature_ret = signalSignature;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray signalSignature_b = signalSignature_ret.toUtf8();
                                               auto signalSignature_str_len = signalSignature_b.length();
                                               const char* signalSignature_str = static_cast<const char*>(malloc(signalSignature_str_len + 1));
                                               memcpy((void*)signalSignature_str, signalSignature_b.data(), signalSignature_str_len);
                                               ((char*)signalSignature_str)[signalSignature_str_len] = '\0';
                                               const char* sigval2 = signalSignature_str;
                                               const QList<QString>& parameterNames_ret = parameterNames;
                                               // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
                                               const char** parameterNames_arr = static_cast<const char**>(malloc(sizeof(const char*) * (parameterNames_ret.size() + 1)));
                                               for (qsizetype i = 0; i < parameterNames_ret.size(); ++i) {
                                                   QByteArray parameterNames_b = parameterNames_ret[i].toUtf8();
                                                   auto parameterNames_str_len = parameterNames_b.length();
                                                   char* parameterNames_str = static_cast<char*>(malloc(parameterNames_str_len + 1));
                                                   memcpy(parameterNames_str, parameterNames_b.data(), parameterNames_str_len);
                                                   parameterNames_str[parameterNames_str_len] = '\0';
                                                   parameterNames_arr[i] = parameterNames_str;
                                               }
                                               // Append sentinel null terminator to the list
                                               parameterNames_arr[parameterNames_ret.size()] = nullptr;
                                               const char** sigval3 = parameterNames_arr;
                                               slotFunc(self, sigval1, sigval2, sigval3);
                                               libqt_free(objectName_str);
                                               libqt_free(signalSignature_str);
                                               libqt_free(parameterNames_arr);
                                           });
}

void QDesignerIntegrationInterface_NavigateToSlot2(QDesignerIntegrationInterface* self, const libqt_string slotSignature) {
    QString slotSignature_QString = QString::fromUtf8(slotSignature.data, slotSignature.len);
    self->navigateToSlot(slotSignature_QString);
}

void QDesignerIntegrationInterface_Connect_NavigateToSlot2(QDesignerIntegrationInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerIntegrationInterface*, const char*) = reinterpret_cast<void (*)(QDesignerIntegrationInterface*, const char*)>(slot);
    QDesignerIntegrationInterface::connect(self,
                                           static_cast<void (QDesignerIntegrationInterface::*)(const QString&)>(&QDesignerIntegrationInterface::navigateToSlot),
                                           [self, slotFunc](const QString& slotSignature) {
                                               const auto slotSignature_ret = slotSignature;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray slotSignature_b = slotSignature_ret.toUtf8();
                                               auto slotSignature_str_len = slotSignature_b.length();
                                               const char* slotSignature_str = static_cast<const char*>(malloc(slotSignature_str_len + 1));
                                               memcpy((void*)slotSignature_str, slotSignature_b.data(), slotSignature_str_len);
                                               ((char*)slotSignature_str)[slotSignature_str_len] = '\0';
                                               const char* sigval1 = slotSignature_str;
                                               slotFunc(self, sigval1);
                                               libqt_free(slotSignature_str);
                                           });
}

void QDesignerIntegrationInterface_SetFeatures(QDesignerIntegrationInterface* self, int f) {
    self->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

void QDesignerIntegrationInterface_UpdateProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->updateProperty(name_QString, *value, enableSubPropertyHandling);
}

void QDesignerIntegrationInterface_UpdateProperty2(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->updateProperty(name_QString, *value);
}

void QDesignerIntegrationInterface_ResetProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->resetProperty(name_QString);
}

void QDesignerIntegrationInterface_AddDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addDynamicProperty(name_QString, *value);
}

void QDesignerIntegrationInterface_RemoveDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeDynamicProperty(name_QString);
}

void QDesignerIntegrationInterface_UpdateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->updateActiveFormWindow(formWindow);
}

void QDesignerIntegrationInterface_SetupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->setupFormWindow(formWindow);
}

void QDesignerIntegrationInterface_UpdateSelection(QDesignerIntegrationInterface* self) {
    self->updateSelection();
}

void QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self) {
    self->updateCustomWidgetPlugins();
}

libqt_string QDesignerIntegrationInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerIntegrationInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerIntegrationInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerIntegrationInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerIntegrationInterface_SuperMetaObject(const QDesignerIntegrationInterface* self) {
    return (QMetaObject*)self->QDesignerIntegrationInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnMetaObject(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerIntegrationInterface_SuperMetacast(QDesignerIntegrationInterface* self, const char* param1) {
    return self->QDesignerIntegrationInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnMetacast(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_metacast_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerIntegrationInterface_SuperMetacall(QDesignerIntegrationInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerIntegrationInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnMetacall(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_metacall_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnContainerWindow(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_containerwindow_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ContainerWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnCreateResourceBrowser(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_createresourcebrowser_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_CreateResourceBrowser_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnHeaderSuffix(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_headersuffix_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_HeaderSuffix_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetHeaderSuffix(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_setheadersuffix_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetHeaderSuffix_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnIsHeaderLowercase(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_isheaderlowercase_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_IsHeaderLowercase_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetHeaderLowercase(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_setheaderlowercase_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetHeaderLowercase_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnFeatures(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_features_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Features_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnContextHelpId(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self)))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_contexthelpid_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ContextHelpId_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetFeatures(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_setfeatures_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetFeatures_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_updateproperty_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateProperty2(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_updateproperty2_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateProperty2_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnResetProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_resetproperty_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ResetProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnAddDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_adddynamicproperty_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_AddDynamicProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnRemoveDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_removedynamicproperty_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_RemoveDynamicProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateActiveFormWindow(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_updateactiveformwindow_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnSetupFormWindow(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_setupformwindow_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_SetupFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateSelection(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_updateselection_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateSelection_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_updatecustomwidgetplugins_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerIntegrationInterface_Event(QDesignerIntegrationInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerIntegrationInterface_SuperEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    return self->QDesignerIntegrationInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_event_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerIntegrationInterface_EventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerIntegrationInterface_SuperEventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerIntegrationInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnEventFilter(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegrationInterface_TimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface) {
        vqdesignerintegrationinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_SuperTimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self)) {
        vqdesignerintegrationinterface->QDesignerIntegrationInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnTimerEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegrationInterface_ChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface) {
        vqdesignerintegrationinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_SuperChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self)) {
        vqdesignerintegrationinterface->QDesignerIntegrationInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnChildEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_childevent_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegrationInterface_CustomEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface) {
        vqdesignerintegrationinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_SuperCustomEvent(QDesignerIntegrationInterface* self, QEvent* event) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self)) {
        vqdesignerintegrationinterface->QDesignerIntegrationInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnCustomEvent(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_customevent_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegrationInterface_ConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface) {
        vqdesignerintegrationinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_SuperConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self)) {
        vqdesignerintegrationinterface->QDesignerIntegrationInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnConnectNotify(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegrationInterface_DisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self);
    if (vqdesignerintegrationinterface) {
        vqdesignerintegrationinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegrationInterface_SuperDisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self)) {
        vqdesignerintegrationinterface->QDesignerIntegrationInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegrationInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegrationInterface_OnDisconnectNotify(QDesignerIntegrationInterface* self, intptr_t slot) {
    if (auto* vqdesignerintegrationinterface = dynamic_cast<VirtualQDesignerIntegrationInterface*>(self))
        vqdesignerintegrationinterface->qdesignerintegrationinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerIntegrationInterface::QDesignerIntegrationInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerIntegrationInterface_Sender(const QDesignerIntegrationInterface* self) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self))) {
        return vqdesignerintegrationinterface->VirtualQDesignerIntegrationInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerIntegrationInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerIntegrationInterface_SenderSignalIndex(const QDesignerIntegrationInterface* self) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self))) {
        return vqdesignerintegrationinterface->VirtualQDesignerIntegrationInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerIntegrationInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerIntegrationInterface_Receivers(const QDesignerIntegrationInterface* self, const char* signal) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self))) {
        return vqdesignerintegrationinterface->VirtualQDesignerIntegrationInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerIntegrationInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerIntegrationInterface_IsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegrationinterface = const_cast<VirtualQDesignerIntegrationInterface*>(dynamic_cast<const VirtualQDesignerIntegrationInterface*>(self))) {
        return vqdesignerintegrationinterface->VirtualQDesignerIntegrationInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerIntegrationInterface::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerIntegration_Tr(const char* s) {
    auto _ret = QDesignerIntegration::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerIntegration_HeaderSuffix(const QDesignerIntegration* self) {
    auto _ret = self->headerSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerIntegration_SetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix) {
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    self->setHeaderSuffix(headerSuffix_QString);
}

bool QDesignerIntegration_IsHeaderLowercase(const QDesignerIntegration* self) {
    return self->isHeaderLowercase();
}

void QDesignerIntegration_SetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase) {
    self->setHeaderLowercase(headerLowerCase);
}

int QDesignerIntegration_Features(const QDesignerIntegration* self) {
    return static_cast<int>(self->features());
}

void QDesignerIntegration_SetFeatures(QDesignerIntegration* self, int f) {
    self->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

int QDesignerIntegration_ResourceFileWatcherBehaviour(const QDesignerIntegration* self) {
    return static_cast<int>(self->resourceFileWatcherBehaviour());
}

void QDesignerIntegration_SetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour) {
    self->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
}

QWidget* QDesignerIntegration_ContainerWindow(const QDesignerIntegration* self, QWidget* widget) {
    return self->containerWindow(widget);
}

void QDesignerIntegration_InitializePlugins(QDesignerFormEditorInterface* formEditor) {
    QDesignerIntegration::initializePlugins(formEditor);
}

QDesignerResourceBrowserInterface* QDesignerIntegration_CreateResourceBrowser(QDesignerIntegration* self, QWidget* parent) {
    return self->createResourceBrowser(parent);
}

libqt_string QDesignerIntegration_ContextHelpId(const QDesignerIntegration* self) {
    auto _ret = self->contextHelpId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerIntegration_UpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->updateProperty(name_QString, *value, enableSubPropertyHandling);
}

void QDesignerIntegration_UpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->updateProperty(name_QString, *value);
}

void QDesignerIntegration_ResetProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->resetProperty(name_QString);
}

void QDesignerIntegration_AddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addDynamicProperty(name_QString, *value);
}

void QDesignerIntegration_RemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeDynamicProperty(name_QString);
}

void QDesignerIntegration_UpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    self->updateActiveFormWindow(formWindow);
}

void QDesignerIntegration_SetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    self->setupFormWindow(formWindow);
}

void QDesignerIntegration_UpdateSelection(QDesignerIntegration* self) {
    self->updateSelection();
}

void QDesignerIntegration_UpdateCustomWidgetPlugins(QDesignerIntegration* self) {
    self->updateCustomWidgetPlugins();
}

libqt_string QDesignerIntegration_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerIntegration::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerIntegration_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerIntegration::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerIntegration_SuperMetaObject(const QDesignerIntegration* self) {
    return (QMetaObject*)self->QDesignerIntegration::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnMetaObject(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_metaobject_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerIntegration_SuperMetacast(QDesignerIntegration* self, const char* param1) {
    return self->QDesignerIntegration::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnMetacast(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_metacast_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerIntegration_SuperMetacall(QDesignerIntegration* self, int param1, int param2, void** param3) {
    return self->QDesignerIntegration::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnMetacall(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_metacall_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QDesignerIntegration_SuperHeaderSuffix(const QDesignerIntegration* self) {
    auto _ret = self->QDesignerIntegration::headerSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnHeaderSuffix(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_headersuffix_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_HeaderSuffix_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperSetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix) {
    QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
    self->QDesignerIntegration::setHeaderSuffix(headerSuffix_QString);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetHeaderSuffix(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_setheadersuffix_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetHeaderSuffix_Callback>(slot);
}

// Base class handler implementation
bool QDesignerIntegration_SuperIsHeaderLowercase(const QDesignerIntegration* self) {
    return self->QDesignerIntegration::isHeaderLowercase();
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnIsHeaderLowercase(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_isheaderlowercase_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_IsHeaderLowercase_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperSetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase) {
    self->QDesignerIntegration::setHeaderLowercase(headerLowerCase);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetHeaderLowercase(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_setheaderlowercase_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetHeaderLowercase_Callback>(slot);
}

// Base class handler implementation
int QDesignerIntegration_SuperFeatures(const QDesignerIntegration* self) {
    return static_cast<int>(self->QDesignerIntegration::features());
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnFeatures(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_features_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Features_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperSetFeatures(QDesignerIntegration* self, int f) {
    self->QDesignerIntegration::setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetFeatures(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_setfeatures_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetFeatures_Callback>(slot);
}

// Base class handler implementation
int QDesignerIntegration_SuperResourceFileWatcherBehaviour(const QDesignerIntegration* self) {
    return static_cast<int>(self->QDesignerIntegration::resourceFileWatcherBehaviour());
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnResourceFileWatcherBehaviour(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_resourcefilewatcherbehaviour_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ResourceFileWatcherBehaviour_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperSetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour) {
    self->QDesignerIntegration::setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetResourceFileWatcherBehaviour(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_setresourcefilewatcherbehaviour_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback>(slot);
}

// Base class handler implementation
QWidget* QDesignerIntegration_SuperContainerWindow(const QDesignerIntegration* self, QWidget* widget) {
    return self->QDesignerIntegration::containerWindow(widget);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnContainerWindow(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_containerwindow_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ContainerWindow_Callback>(slot);
}

// Base class handler implementation
QDesignerResourceBrowserInterface* QDesignerIntegration_SuperCreateResourceBrowser(QDesignerIntegration* self, QWidget* parent) {
    return self->QDesignerIntegration::createResourceBrowser(parent);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnCreateResourceBrowser(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_createresourcebrowser_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_CreateResourceBrowser_Callback>(slot);
}

// Base class handler implementation
libqt_string QDesignerIntegration_SuperContextHelpId(const QDesignerIntegration* self) {
    auto _ret = self->QDesignerIntegration::contextHelpId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnContextHelpId(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self)))
        vqdesignerintegration->qdesignerintegration_contexthelpid_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ContextHelpId_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperUpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QDesignerIntegration::updateProperty(name_QString, *value, enableSubPropertyHandling);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateProperty(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_updateproperty_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateProperty_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperUpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QDesignerIntegration::updateProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateProperty2(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_updateproperty2_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateProperty2_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperResetProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QDesignerIntegration::resetProperty(name_QString);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnResetProperty(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_resetproperty_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ResetProperty_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperAddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QDesignerIntegration::addDynamicProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnAddDynamicProperty(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_adddynamicproperty_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_AddDynamicProperty_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperRemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QDesignerIntegration::removeDynamicProperty(name_QString);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnRemoveDynamicProperty(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_removedynamicproperty_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_RemoveDynamicProperty_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperUpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    self->QDesignerIntegration::updateActiveFormWindow(formWindow);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateActiveFormWindow(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_updateactiveformwindow_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateActiveFormWindow_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperSetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
    self->QDesignerIntegration::setupFormWindow(formWindow);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnSetupFormWindow(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_setupformwindow_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_SetupFormWindow_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperUpdateSelection(QDesignerIntegration* self) {
    self->QDesignerIntegration::updateSelection();
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateSelection(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_updateselection_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateSelection_Callback>(slot);
}

// Base class handler implementation
void QDesignerIntegration_SuperUpdateCustomWidgetPlugins(QDesignerIntegration* self) {
    self->QDesignerIntegration::updateCustomWidgetPlugins();
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnUpdateCustomWidgetPlugins(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_updatecustomwidgetplugins_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_UpdateCustomWidgetPlugins_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerIntegration_Event(QDesignerIntegration* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerIntegration_SuperEvent(QDesignerIntegration* self, QEvent* event) {
    return self->QDesignerIntegration::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnEvent(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_event_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerIntegration_EventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerIntegration_SuperEventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event) {
    return self->QDesignerIntegration::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnEventFilter(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_eventfilter_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegration_TimerEvent(QDesignerIntegration* self, QTimerEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration) {
        vqdesignerintegration->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegration::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegration_SuperTimerEvent(QDesignerIntegration* self, QTimerEvent* event) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self)) {
        vqdesignerintegration->QDesignerIntegration::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegration::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnTimerEvent(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_timerevent_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegration_ChildEvent(QDesignerIntegration* self, QChildEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration) {
        vqdesignerintegration->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegration::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegration_SuperChildEvent(QDesignerIntegration* self, QChildEvent* event) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self)) {
        vqdesignerintegration->QDesignerIntegration::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegration::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnChildEvent(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_childevent_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegration_CustomEvent(QDesignerIntegration* self, QEvent* event) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration) {
        vqdesignerintegration->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegration::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegration_SuperCustomEvent(QDesignerIntegration* self, QEvent* event) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self)) {
        vqdesignerintegration->QDesignerIntegration::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegration::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnCustomEvent(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_customevent_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegration_ConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration) {
        vqdesignerintegration->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegration::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegration_SuperConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self)) {
        vqdesignerintegration->QDesignerIntegration::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegration::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnConnectNotify(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_connectnotify_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerIntegration_DisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self);
    if (vqdesignerintegration) {
        vqdesignerintegration->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerIntegration::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerIntegration_SuperDisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self)) {
        vqdesignerintegration->QDesignerIntegration::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerIntegration::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerIntegration_OnDisconnectNotify(QDesignerIntegration* self, intptr_t slot) {
    if (auto* vqdesignerintegration = dynamic_cast<VirtualQDesignerIntegration*>(self))
        vqdesignerintegration->qdesignerintegration_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerIntegration::QDesignerIntegration_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerIntegration_Sender(const QDesignerIntegration* self) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self))) {
        return vqdesignerintegration->VirtualQDesignerIntegration::sender();
    } else
        qFatal("Error: Protected method QDesignerIntegration::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerIntegration_SenderSignalIndex(const QDesignerIntegration* self) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self))) {
        return vqdesignerintegration->VirtualQDesignerIntegration::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerIntegration::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerIntegration_Receivers(const QDesignerIntegration* self, const char* signal) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self))) {
        return vqdesignerintegration->VirtualQDesignerIntegration::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerIntegration::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerIntegration_IsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal) {
    if (auto* vqdesignerintegration = const_cast<VirtualQDesignerIntegration*>(dynamic_cast<const VirtualQDesignerIntegration*>(self))) {
        return vqdesignerintegration->VirtualQDesignerIntegration::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerIntegration::isSignalConnected called without a directly constructed type");
}

void QDesignerIntegration_Delete(QDesignerIntegration* self) {
    delete self;
}
