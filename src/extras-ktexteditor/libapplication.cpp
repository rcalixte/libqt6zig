#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Application
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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <application.h>
#include "libapplication.h"
#include "libapplication.hxx"

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
    auto* vktexteditor__application = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditor__application && vktexteditor__application->isVirtualKTextEditorApplication) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorApplication*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__Application_Tr(const char* s) {
    QString _ret = KTextEditor::Application::tr(s);
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
    KTextEditor__MainWindow** _arr = static_cast<KTextEditor__MainWindow**>(malloc(sizeof(KTextEditor__MainWindow*) * (_ret.size() + 1)));
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
    KTextEditor__Document** _arr = static_cast<KTextEditor__Document**>(malloc(sizeof(KTextEditor__Document*) * (_ret.size() + 1)));
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
    KTextEditor::Application::connect(self, &KTextEditor::Application::documentCreated, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Application_DocumentWillBeDeleted(KTextEditor__Application* self, KTextEditor__Document* document) {
    self->documentWillBeDeleted(document);
}

void KTextEditor__Application_Connect_DocumentWillBeDeleted(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Application*, KTextEditor__Document*)>(slot);
    KTextEditor::Application::connect(self, &KTextEditor::Application::documentWillBeDeleted, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Application_DocumentDeleted(KTextEditor__Application* self, KTextEditor__Document* document) {
    self->documentDeleted(document);
}

void KTextEditor__Application_Connect_DocumentDeleted(KTextEditor__Application* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Application*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Application*, KTextEditor__Document*)>(slot);
    KTextEditor::Application::connect(self, &KTextEditor::Application::documentDeleted, [self, slotFunc](KTextEditor::Document* document) {
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
    KTextEditor::Application::connect(self, &KTextEditor::Application::pluginCreated, [self, slotFunc](const QString& name, KTextEditor::Plugin* plugin) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
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
    KTextEditor::Application::connect(self, &KTextEditor::Application::pluginDeleted, [self, slotFunc](const QString& name, KTextEditor::Plugin* plugin) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval1 = name_str;
        KTextEditor__Plugin* sigval2 = plugin;
        slotFunc(self, sigval1, sigval2);
        libqt_free(name_str);
    });
}

libqt_string KTextEditor__Application_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Application::tr(s, c);
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
    QString _ret = KTextEditor::Application::tr(s, c, static_cast<int>(n));
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
int KTextEditor__Application_QBaseMetacall(KTextEditor__Application* self, int param1, int param2, void** param3) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Metacall_IsBase(true);
        return vktexteditorapplication->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::Application::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnMetacall(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Metacall_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Application_Event(KTextEditor__Application* self, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->event(event);
    } else {
        return self->KTextEditor::Application::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__Application_QBaseEvent(KTextEditor__Application* self, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Event_IsBase(true);
        return vktexteditorapplication->event(event);
    } else {
        return self->KTextEditor::Application::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnEvent(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Event_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Application_EventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Application::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__Application_QBaseEventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_EventFilter_IsBase(true);
        return vktexteditorapplication->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Application::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnEventFilter(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Application_TimerEvent(KTextEditor__Application* self, QTimerEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->timerEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Application_QBaseTimerEvent(KTextEditor__Application* self, QTimerEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_TimerEvent_IsBase(true);
        vktexteditorapplication->timerEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnTimerEvent(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Application_ChildEvent(KTextEditor__Application* self, QChildEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->childEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Application_QBaseChildEvent(KTextEditor__Application* self, QChildEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_ChildEvent_IsBase(true);
        vktexteditorapplication->childEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnChildEvent(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Application_CustomEvent(KTextEditor__Application* self, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->customEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Application_QBaseCustomEvent(KTextEditor__Application* self, QEvent* event) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_CustomEvent_IsBase(true);
        vktexteditorapplication->customEvent(event);
    } else {
        ((VirtualKTextEditorApplication*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnCustomEvent(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Application_ConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorApplication*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Application_QBaseConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_ConnectNotify_IsBase(true);
        vktexteditorapplication->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorApplication*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnConnectNotify(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Application_DisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorApplication*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Application_QBaseDisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_DisconnectNotify_IsBase(true);
        vktexteditorapplication->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorApplication*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnDisconnectNotify(KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = dynamic_cast<VirtualKTextEditorApplication*>(self);
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__Application_Sender(const KTextEditor__Application* self) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->sender();
    } else {
        return ((VirtualKTextEditorApplication*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__Application_QBaseSender(const KTextEditor__Application* self) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Sender_IsBase(true);
        return vktexteditorapplication->sender();
    } else {
        return ((VirtualKTextEditorApplication*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnSender(const KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Sender_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Application_SenderSignalIndex(const KTextEditor__Application* self) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorApplication*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__Application_QBaseSenderSignalIndex(const KTextEditor__Application* self) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_SenderSignalIndex_IsBase(true);
        return vktexteditorapplication->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorApplication*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnSenderSignalIndex(const KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Application_Receivers(const KTextEditor__Application* self, const char* signal) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->receivers(signal);
    } else {
        return ((VirtualKTextEditorApplication*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__Application_QBaseReceivers(const KTextEditor__Application* self, const char* signal) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Receivers_IsBase(true);
        return vktexteditorapplication->receivers(signal);
    } else {
        return ((VirtualKTextEditorApplication*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnReceivers(const KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_Receivers_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Application_IsSignalConnected(const KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        return vktexteditorapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorApplication*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__Application_QBaseIsSignalConnected(const KTextEditor__Application* self, const QMetaMethod* signal) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_IsSignalConnected_IsBase(true);
        return vktexteditorapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorApplication*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Application_OnIsSignalConnected(const KTextEditor__Application* self, intptr_t slot) {
    auto* vktexteditorapplication = const_cast<VirtualKTextEditorApplication*>(dynamic_cast<const VirtualKTextEditorApplication*>(self));
    if (vktexteditorapplication && vktexteditorapplication->isVirtualKTextEditorApplication) {
        vktexteditorapplication->setKTextEditor__Application_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorApplication::KTextEditor__Application_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__Application_Delete(KTextEditor__Application* self) {
    delete self;
}
