#include <KTextEditor/Application>
#include <KTextEditor/Document>
#include <KTextEditor/MainWindow>
#include <KTextEditor/Plugin>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <application.h>
#include "libapplication_1.h"
#include "libapplication_1.hxx"

KTextEditor__Application* KTextEditor__Application_new(QObject* parent) {
    return new VirtualKTextEditorApplication(parent);
}

QMetaObject* KTextEditor__Application_MetaObject(const KTextEditor__Application* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Application_Metacast(KTextEditor__Application* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Application_Metacall(KTextEditor__Application* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__Application_Tr(const char* s) {
    auto _ret = KTextEditor::Application::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KTextEditor__Application_Quit(KTextEditor__Application* self) {
    return self->quit();
}

libqt_list /* of KTextEditor__MainWindow* */ KTextEditor__Application_MainWindows(KTextEditor__Application* self) {
    QList<KTextEditor::MainWindow*> _ret = self->mainWindows();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__MainWindow** _arr = static_cast<KTextEditor__MainWindow**>(malloc(sizeof(KTextEditor__MainWindow*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KTextEditor__MainWindow* KTextEditor__Application_ActiveMainWindow(KTextEditor__Application* self) {
    return self->activeMainWindow();
}

libqt_list /* of KTextEditor__Document* */ KTextEditor__Application_Documents(KTextEditor__Application* self) {
    QList<KTextEditor::Document*> _ret = self->documents();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Document** _arr = static_cast<KTextEditor__Document**>(malloc(sizeof(KTextEditor__Document*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KTextEditor__Document* KTextEditor__Application_FindUrl(KTextEditor__Application* self, const QUrl* url) {
    return self->findUrl(*url);
}

KTextEditor__Document* KTextEditor__Application_OpenUrl(KTextEditor__Application* self, const QUrl* url) {
    return self->openUrl(*url);
}

bool KTextEditor__Application_CloseDocument(KTextEditor__Application* self, KTextEditor__Document* document) {
    return self->closeDocument(document);
}

bool KTextEditor__Application_CloseDocuments(KTextEditor__Application* self, const libqt_list /* of KTextEditor__Document* */ documents) {
    QList<KTextEditor::Document*> documents_QList;
    documents_QList.reserve(documents.len);
    KTextEditor__Document** documents_arr = static_cast<KTextEditor__Document**>(documents.data);
    for (size_t i = 0; i < documents.len; ++i) {
        documents_QList.push_back(documents_arr[i]);
    }
    return self->closeDocuments(documents_QList);
}

void KTextEditor__Application_DocumentCreated(KTextEditor__Application* self, KTextEditor__Document* document) {
    self->documentCreated(document);
}

void KTextEditor__Application_Connect_DocumentCreated(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Application*, KTextEditor__Document*)>(slot);
    KTextEditor::Application::connect(self,
                                      static_cast<void (KTextEditor::Application::*)(KTextEditor::Document*)>(&KTextEditor::Application::documentCreated),
                                      [self, slotFunc](KTextEditor::Document* document) {
                                          KTextEditor__Document* sigval1 = document;
                                          slotFunc(self, sigval1);
                                      });
}

void KTextEditor__Application_DocumentWillBeDeleted(KTextEditor__Application* self, KTextEditor__Document* document) {
    self->documentWillBeDeleted(document);
}

void KTextEditor__Application_Connect_DocumentWillBeDeleted(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Application*, KTextEditor__Document*)>(slot);
    KTextEditor::Application::connect(self,
                                      static_cast<void (KTextEditor::Application::*)(KTextEditor::Document*)>(&KTextEditor::Application::documentWillBeDeleted),
                                      [self, slotFunc](KTextEditor::Document* document) {
                                          KTextEditor__Document* sigval1 = document;
                                          slotFunc(self, sigval1);
                                      });
}

void KTextEditor__Application_DocumentDeleted(KTextEditor__Application* self, KTextEditor__Document* document) {
    self->documentDeleted(document);
}

void KTextEditor__Application_Connect_DocumentDeleted(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Application*, KTextEditor__Document*)>(slot);
    KTextEditor::Application::connect(self,
                                      static_cast<void (KTextEditor::Application::*)(KTextEditor::Document*)>(&KTextEditor::Application::documentDeleted),
                                      [self, slotFunc](KTextEditor::Document* document) {
                                          KTextEditor__Document* sigval1 = document;
                                          slotFunc(self, sigval1);
                                      });
}

KTextEditor__Plugin* KTextEditor__Application_Plugin(KTextEditor__Application* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->plugin(name_QString);
}

void KTextEditor__Application_PluginCreated(KTextEditor__Application* self, const libqt_string name, KTextEditor__Plugin* plugin) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pluginCreated(name_QString, plugin);
}

void KTextEditor__Application_Connect_PluginCreated(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, const char*, KTextEditor__Plugin*) = reinterpret_cast<void (*)(KTextEditor__Application*, const char*, KTextEditor__Plugin*)>(slot);
    KTextEditor::Application::connect(self,
                                      static_cast<void (KTextEditor::Application::*)(const QString&, KTextEditor::Plugin*)>(&KTextEditor::Application::pluginCreated),
                                      [self, slotFunc](const QString& name, KTextEditor::Plugin* plugin) {
                                          const auto name_ret = name;
                                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                          QByteArray name_b = name_ret.toUtf8();
                                          auto name_str_len = name_b.length();
                                          const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                          memcpy((void*)name_str, name_b.data(), name_str_len);
                                          ((char*)name_str)[name_str_len] = '\0';
                                          const char* sigval1 = name_str;
                                          KTextEditor__Plugin* sigval2 = plugin;
                                          slotFunc(self, sigval1, sigval2);
                                          libqt_free(name_str);
                                      });
}

void KTextEditor__Application_PluginDeleted(KTextEditor__Application* self, const libqt_string name, KTextEditor__Plugin* plugin) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pluginDeleted(name_QString, plugin);
}

void KTextEditor__Application_Connect_PluginDeleted(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, const char*, KTextEditor__Plugin*) = reinterpret_cast<void (*)(KTextEditor__Application*, const char*, KTextEditor__Plugin*)>(slot);
    KTextEditor::Application::connect(self,
                                      static_cast<void (KTextEditor::Application::*)(const QString&, KTextEditor::Plugin*)>(&KTextEditor::Application::pluginDeleted),
                                      [self, slotFunc](const QString& name, KTextEditor::Plugin* plugin) {
                                          const auto name_ret = name;
                                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                          QByteArray name_b = name_ret.toUtf8();
                                          auto name_str_len = name_b.length();
                                          const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                          memcpy((void*)name_str, name_b.data(), name_str_len);
                                          ((char*)name_str)[name_str_len] = '\0';
                                          const char* sigval1 = name_str;
                                          KTextEditor__Plugin* sigval2 = plugin;
                                          slotFunc(self, sigval1, sigval2);
                                          libqt_free(name_str);
                                      });
}

libqt_string KTextEditor__Application_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::Application::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Application_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTextEditor::Application::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__Document* KTextEditor__Application_OpenUrl2(KTextEditor__Application* self, const QUrl* url, const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return self->openUrl(*url, encoding_QString);
}

// Base class handler implementation
QMetaObject* KTextEditor__Application_SuperMetaObject(const KTextEditor__Application* self) {
    return (QMetaObject*)self->KTextEditor::Application::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnMetaObject(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self)))
        vktexteditorapplication->ktexteditor__application_metaobject_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__Application_SuperMetacast(KTextEditor__Application* self, const char* param1) {
    return self->KTextEditor::Application::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnMetacast(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_metacast_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__Application_SuperMetacall(KTextEditor__Application* self, int param1, int param2, void** param3) {
    return self->KTextEditor::Application::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnMetacall(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_metacall_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Application_Event(KTextEditor__Application* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTextEditor__Application_SuperEvent(KTextEditor__Application* self, QEvent* event) {
    return self->KTextEditor::Application::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnEvent(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_event_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Application_EventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__Application_SuperEventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::Application::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnEventFilter(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_eventfilter_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Application_TimerEvent(KTextEditor__Application* self, QTimerEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication) {
        vktexteditorapplication->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Application::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Application_SuperTimerEvent(KTextEditor__Application* self, QTimerEvent* event) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self)) {
        vktexteditorapplication->KTextEditor::Application::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Application::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnTimerEvent(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_timerevent_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Application_ChildEvent(KTextEditor__Application* self, QChildEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication) {
        vktexteditorapplication->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Application::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Application_SuperChildEvent(KTextEditor__Application* self, QChildEvent* event) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self)) {
        vktexteditorapplication->KTextEditor::Application::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Application::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnChildEvent(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_childevent_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Application_CustomEvent(KTextEditor__Application* self, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication) {
        vktexteditorapplication->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Application::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Application_SuperCustomEvent(KTextEditor__Application* self, QEvent* event) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self)) {
        vktexteditorapplication->KTextEditor::Application::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Application::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnCustomEvent(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_customevent_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Application_ConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication) {
        vktexteditorapplication->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Application::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Application_SuperConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self)) {
        vktexteditorapplication->KTextEditor::Application::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Application::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnConnectNotify(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_connectnotify_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Application_DisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication) {
        vktexteditorapplication->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Application::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Application_SuperDisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self)) {
        vktexteditorapplication->KTextEditor::Application::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Application::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnDisconnectNotify(KTextEditor__Application* self, intptr_t slot) {
    if (auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self))
        vktexteditorapplication->ktexteditor__application_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KTextEditor__Application_Sender(const KTextEditor__Application* self) {
    if (auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self))) {
        return vktexteditorapplication->VirtualKTextEditorApplication::sender();
    } else
        qFatal("Error: Protected method KTextEditor::Application::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Application_SenderSignalIndex(const KTextEditor__Application* self) {
    if (auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self))) {
        return vktexteditorapplication->VirtualKTextEditorApplication::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::Application::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Application_Receivers(const KTextEditor__Application* self, const char* signal) {
    if (auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self))) {
        return vktexteditorapplication->VirtualKTextEditorApplication::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::Application::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__Application_IsSignalConnected(const KTextEditor__Application* self, const QMetaMethod* signal) {
    if (auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self))) {
        return vktexteditorapplication->VirtualKTextEditorApplication::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::Application::isSignalConnected called without a directly constructed type");
}

void KTextEditor__Application_Delete(KTextEditor__Application* self) {
    delete self;
}
