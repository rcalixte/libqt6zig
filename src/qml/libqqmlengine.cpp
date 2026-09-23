#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QNetworkAccessManager>
#include <QObject>
#include <QQmlAbstractUrlInterceptor>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlImageProviderBase>
#include <QQmlIncubationController>
#include <QQmlNetworkAccessManagerFactory>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qqmlengine.h>
#include "libqqmlengine.h"
#include "libqqmlengine.hxx"

QMetaObject* QQmlImageProviderBase_MetaObject(const QQmlImageProviderBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlImageProviderBase_Metacast(QQmlImageProviderBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlImageProviderBase_Metacall(QQmlImageProviderBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlImageProviderBase_Tr(const char* s) {
    auto _ret = QQmlImageProviderBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QQmlImageProviderBase_ImageType(const QQmlImageProviderBase* self) {
    return static_cast<int>(self->imageType());
}

int QQmlImageProviderBase_Flags(const QQmlImageProviderBase* self) {
    return static_cast<int>(self->flags());
}

libqt_string QQmlImageProviderBase_Tr2(const char* s, const char* c) {
    auto _ret = QQmlImageProviderBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlImageProviderBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlImageProviderBase::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlImageProviderBase_Delete(QQmlImageProviderBase* self) {
    delete self;
}

QQmlEngine* QQmlEngine_new() {
    return new VirtualQQmlEngine();
}

QQmlEngine* QQmlEngine_new2(QObject* p) {
    return new VirtualQQmlEngine(p);
}

QMetaObject* QQmlEngine_MetaObject(const QQmlEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlEngine_Metacast(QQmlEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlEngine_Metacall(QQmlEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlEngine_Tr(const char* s) {
    auto _ret = QQmlEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QQmlContext* QQmlEngine_RootContext(const QQmlEngine* self) {
    return self->rootContext();
}

void QQmlEngine_ClearComponentCache(QQmlEngine* self) {
    self->clearComponentCache();
}

void QQmlEngine_TrimComponentCache(QQmlEngine* self) {
    self->trimComponentCache();
}

void QQmlEngine_ClearSingletons(QQmlEngine* self) {
    self->clearSingletons();
}

libqt_list /* of libqt_string */ QQmlEngine_ImportPathList(const QQmlEngine* self) {
    QList<QString> _ret = self->importPathList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QQmlEngine_SetImportPathList(QQmlEngine* self, const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setImportPathList(paths_QList);
}

void QQmlEngine_AddImportPath(QQmlEngine* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->addImportPath(dir_QString);
}

libqt_list /* of libqt_string */ QQmlEngine_PluginPathList(const QQmlEngine* self) {
    QList<QString> _ret = self->pluginPathList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QQmlEngine_SetPluginPathList(QQmlEngine* self, const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setPluginPathList(paths_QList);
}

void QQmlEngine_AddPluginPath(QQmlEngine* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->addPluginPath(dir_QString);
}

bool QQmlEngine_AddNamedBundle(QQmlEngine* self, const libqt_string param1, const libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return self->addNamedBundle(param1_QString, param2_QString);
}

bool QQmlEngine_ImportPlugin(QQmlEngine* self, const libqt_string filePath, const libqt_string uri, libqt_list /* of QQmlError* */ errors) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    QString uri_QString = QString::fromUtf8(uri.data, uri.len);
    QList<QQmlError> errors_QList;
    errors_QList.reserve(errors.len);
    QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    return self->importPlugin(filePath_QString, uri_QString, &errors_QList);
}

void QQmlEngine_SetNetworkAccessManagerFactory(QQmlEngine* self, QQmlNetworkAccessManagerFactory* networkAccessManagerFactory) {
    self->setNetworkAccessManagerFactory(networkAccessManagerFactory);
}

QQmlNetworkAccessManagerFactory* QQmlEngine_NetworkAccessManagerFactory(const QQmlEngine* self) {
    return self->networkAccessManagerFactory();
}

QNetworkAccessManager* QQmlEngine_NetworkAccessManager(const QQmlEngine* self) {
    return self->networkAccessManager();
}

void QQmlEngine_SetUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
    self->setUrlInterceptor(urlInterceptor);
}

QQmlAbstractUrlInterceptor* QQmlEngine_UrlInterceptor(const QQmlEngine* self) {
    return self->urlInterceptor();
}

void QQmlEngine_AddUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
    self->addUrlInterceptor(urlInterceptor);
}

void QQmlEngine_RemoveUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
    self->removeUrlInterceptor(urlInterceptor);
}

libqt_list /* of QQmlAbstractUrlInterceptor* */ QQmlEngine_UrlInterceptors(const QQmlEngine* self) {
    QList<QQmlAbstractUrlInterceptor*> _ret = self->urlInterceptors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQmlAbstractUrlInterceptor** _arr = static_cast<QQmlAbstractUrlInterceptor**>(malloc(sizeof(QQmlAbstractUrlInterceptor*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUrl* QQmlEngine_InterceptUrl(const QQmlEngine* self, const QUrl* url, int typeVal) {
    return new QUrl(self->interceptUrl(*url, static_cast<QQmlAbstractUrlInterceptor::DataType>(typeVal)));
}

void QQmlEngine_AddImageProvider(QQmlEngine* self, const libqt_string id, QQmlImageProviderBase* param2) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->addImageProvider(id_QString, param2);
}

QQmlImageProviderBase* QQmlEngine_ImageProvider(const QQmlEngine* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->imageProvider(id_QString);
}

void QQmlEngine_RemoveImageProvider(QQmlEngine* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->removeImageProvider(id_QString);
}

void QQmlEngine_SetIncubationController(QQmlEngine* self, QQmlIncubationController* incubationController) {
    self->setIncubationController(incubationController);
}

QQmlIncubationController* QQmlEngine_IncubationController(const QQmlEngine* self) {
    return self->incubationController();
}

void QQmlEngine_SetOfflineStoragePath(QQmlEngine* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->setOfflineStoragePath(dir_QString);
}

libqt_string QQmlEngine_OfflineStoragePath(const QQmlEngine* self) {
    auto _ret = self->offlineStoragePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlEngine_OfflineStorageDatabaseFilePath(const QQmlEngine* self, const libqt_string databaseName) {
    QString databaseName_QString = QString::fromUtf8(databaseName.data, databaseName.len);
    auto _ret = self->offlineStorageDatabaseFilePath(databaseName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QQmlEngine_BaseUrl(const QQmlEngine* self) {
    return new QUrl(self->baseUrl());
}

void QQmlEngine_SetBaseUrl(QQmlEngine* self, const QUrl* baseUrl) {
    self->setBaseUrl(*baseUrl);
}

bool QQmlEngine_OutputWarningsToStandardError(const QQmlEngine* self) {
    return self->outputWarningsToStandardError();
}

void QQmlEngine_SetOutputWarningsToStandardError(QQmlEngine* self, bool outputWarningsToStandardError) {
    self->setOutputWarningsToStandardError(outputWarningsToStandardError);
}

void QQmlEngine_MarkCurrentFunctionAsTranslationBinding(QQmlEngine* self) {
    self->markCurrentFunctionAsTranslationBinding();
}

void QQmlEngine_CaptureProperty(const QQmlEngine* self, QObject* object, const QMetaProperty* property) {
    self->captureProperty(object, *property);
}

void QQmlEngine_Retranslate(QQmlEngine* self) {
    self->retranslate();
}

void QQmlEngine_OfflineStoragePathChanged(QQmlEngine* self) {
    self->offlineStoragePathChanged();
}

void QQmlEngine_Connect_OfflineStoragePathChanged(QQmlEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlEngine*) = reinterpret_cast<void (*)(QQmlEngine*)>(slot);
    QQmlEngine::connect(self,
                        static_cast<void (QQmlEngine::*)()>(&QQmlEngine::offlineStoragePathChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

QQmlContext* QQmlEngine_ContextForObject(const QObject* param1) {
    return QQmlEngine::contextForObject(param1);
}

void QQmlEngine_SetContextForObject(QObject* param1, QQmlContext* param2) {
    QQmlEngine::setContextForObject(param1, param2);
}

bool QQmlEngine_Event(QQmlEngine* self, QEvent* param1) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->event(param1);
    }
    return {};
}

void QQmlEngine_Quit(QQmlEngine* self) {
    self->quit();
}

void QQmlEngine_Connect_Quit(QQmlEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlEngine*) = reinterpret_cast<void (*)(QQmlEngine*)>(slot);
    QQmlEngine::connect(self,
                        static_cast<void (QQmlEngine::*)()>(&QQmlEngine::quit),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QQmlEngine_Exit(QQmlEngine* self, int retCode) {
    self->exit(static_cast<int>(retCode));
}

void QQmlEngine_Connect_Exit(QQmlEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlEngine*, int) = reinterpret_cast<void (*)(QQmlEngine*, int)>(slot);
    QQmlEngine::connect(self,
                        static_cast<void (QQmlEngine::*)(int)>(&QQmlEngine::exit),
                        [self, slotFunc](int retCode) {
                            int sigval1 = retCode;
                            slotFunc(self, sigval1);
                        });
}

void QQmlEngine_Warnings(QQmlEngine* self, const libqt_list /* of QQmlError* */ warnings) {
    QList<QQmlError> warnings_QList;
    warnings_QList.reserve(warnings.len);
    QQmlError** warnings_arr = static_cast<QQmlError**>(warnings.data);
    for (size_t i = 0; i < warnings.len; ++i) {
        warnings_QList.push_back(*(warnings_arr[i]));
    }
    self->warnings(warnings_QList);
}

void QQmlEngine_Connect_Warnings(QQmlEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlEngine*, libqt_list /* of QQmlError* */) = reinterpret_cast<void (*)(QQmlEngine*, libqt_list /* of QQmlError* */)>(slot);
    QQmlEngine::connect(self,
                        static_cast<void (QQmlEngine::*)(const QList<QQmlError>&)>(&QQmlEngine::warnings),
                        [self, slotFunc](const QList<QQmlError>& warnings) {
                            const QList<QQmlError>& warnings_ret = warnings;
                            // Convert QList<> from C++ memory to manually-managed C memory
                            QQmlError** warnings_arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * (warnings_ret.size())));
                            for (qsizetype i = 0; i < warnings_ret.size(); ++i) {
                                warnings_arr[i] = new QQmlError(warnings_ret[i]);
                            }
                            libqt_list warnings_out;
                            warnings_out.len = warnings_ret.size();
                            warnings_out.data = static_cast<void*>(warnings_arr);
                            libqt_list /* of QQmlError* */ sigval1 = warnings_out;
                            slotFunc(self, sigval1);
                            free(warnings_arr);
                        });
}

libqt_string QQmlEngine_Tr2(const char* s, const char* c) {
    auto _ret = QQmlEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlEngine::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlEngine_SuperMetaObject(const QQmlEngine* self) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlengine->metaObject();
    } else {
        return (QMetaObject*)self->QQmlEngine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnMetaObject(const QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_MetaObject_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlEngine_SuperMetacast(QQmlEngine* self, const char* param1) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_Metacast_IsBase(true);
        return vqqmlengine->qt_metacast(param1);
    } else {
        return self->QQmlEngine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnMetacast(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_Metacast_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlEngine_SuperMetacall(QQmlEngine* self, int param1, int param2, void** param3) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_Metacall_IsBase(true);
        return vqqmlengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnMetacall(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_Metacall_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_Metacall_Callback>(slot));
}

// Base class handler implementation
bool QQmlEngine_SuperEvent(QQmlEngine* self, QEvent* param1) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_Event_IsBase(true);
        return vqqmlengine->event(param1);
    } else {
        return ((VirtualQQmlEngine*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnEvent(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_Event_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlEngine_EventFilter(QQmlEngine* self, QObject* watched, QEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->eventFilter(watched, event);
    } else {
        return self->QQmlEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlEngine_SuperEventFilter(QQmlEngine* self, QObject* watched, QEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_EventFilter_IsBase(true);
        return vqqmlengine->eventFilter(watched, event);
    } else {
        return self->QQmlEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnEventFilter(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_EventFilter_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngine_TimerEvent(QQmlEngine* self, QTimerEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->timerEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlEngine_SuperTimerEvent(QQmlEngine* self, QTimerEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_TimerEvent_IsBase(true);
        vqqmlengine->timerEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnTimerEvent(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_TimerEvent_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngine_ChildEvent(QQmlEngine* self, QChildEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->childEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlEngine_SuperChildEvent(QQmlEngine* self, QChildEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_ChildEvent_IsBase(true);
        vqqmlengine->childEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnChildEvent(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_ChildEvent_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngine_CustomEvent(QQmlEngine* self, QEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->customEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlEngine_SuperCustomEvent(QQmlEngine* self, QEvent* event) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_CustomEvent_IsBase(true);
        vqqmlengine->customEvent(event);
    } else {
        ((VirtualQQmlEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnCustomEvent(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_CustomEvent_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngine_ConnectNotify(QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->connectNotify(*signal);
    } else {
        ((VirtualQQmlEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlEngine_SuperConnectNotify(QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_ConnectNotify_IsBase(true);
        vqqmlengine->connectNotify(*signal);
    } else {
        ((VirtualQQmlEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnConnectNotify(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngine_DisconnectNotify(QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlEngine_SuperDisconnectNotify(QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_DisconnectNotify_IsBase(true);
        vqqmlengine->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnDisconnectNotify(QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = dynamic_cast<VirtualQQmlEngine*>(self);
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlEngine_Sender(const QQmlEngine* self) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->sender();
    } else {
        return ((VirtualQQmlEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlEngine_SuperSender(const QQmlEngine* self) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_Sender_IsBase(true);
        return vqqmlengine->sender();
    } else {
        return ((VirtualQQmlEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnSender(const QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_Sender_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlEngine_SenderSignalIndex(const QQmlEngine* self) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->senderSignalIndex();
    } else {
        return ((VirtualQQmlEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlEngine_SuperSenderSignalIndex(const QQmlEngine* self) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_SenderSignalIndex_IsBase(true);
        return vqqmlengine->senderSignalIndex();
    } else {
        return ((VirtualQQmlEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnSenderSignalIndex(const QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlEngine_Receivers(const QQmlEngine* self, const char* signal) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->receivers(signal);
    } else {
        return ((VirtualQQmlEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlEngine_SuperReceivers(const QQmlEngine* self, const char* signal) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_Receivers_IsBase(true);
        return vqqmlengine->receivers(signal);
    } else {
        return ((VirtualQQmlEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnReceivers(const QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_Receivers_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlEngine_IsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        return vqqmlengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlEngine_SuperIsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine) {
        vqqmlengine->setQQmlEngine_IsSignalConnected_IsBase(true);
        return vqqmlengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngine_OnIsSignalConnected(const QQmlEngine* self, intptr_t slot) {
    auto* vqqmlengine = const_cast<VirtualQQmlEngine*>(dynamic_cast<const VirtualQQmlEngine*>(self));
    if (vqqmlengine && vqqmlengine->isVirtualQQmlEngine)
        vqqmlengine->setQQmlEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlEngine::QQmlEngine_IsSignalConnected_Callback>(slot));
}

void QQmlEngine_Delete(QQmlEngine* self) {
    delete self;
}
