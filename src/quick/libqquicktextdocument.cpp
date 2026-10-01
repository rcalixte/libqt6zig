#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickItem>
#include <QQuickTextDocument>
#include <QString>
#include <QTextDocument>
#include <QTimerEvent>
#include <QUrl>
#include <qquicktextdocument.h>
#include "libqquicktextdocument.h"
#include "libqquicktextdocument.hxx"

QQuickTextDocument* QQuickTextDocument_new(QQuickItem* parent) {
    return new VirtualQQuickTextDocument(parent);
}

QMetaObject* QQuickTextDocument_MetaObject(const QQuickTextDocument* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickTextDocument_Metacast(QQuickTextDocument* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickTextDocument_Metacall(QQuickTextDocument* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickTextDocument_Tr(const char* s) {
    auto _ret = QQuickTextDocument::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QQuickTextDocument_Source(const QQuickTextDocument* self) {
    return new QUrl(self->source());
}

void QQuickTextDocument_SetSource(QQuickTextDocument* self, const QUrl* url) {
    self->setSource(*url);
}

bool QQuickTextDocument_IsModified(const QQuickTextDocument* self) {
    return self->isModified();
}

void QQuickTextDocument_SetModified(QQuickTextDocument* self, bool modified) {
    self->setModified(modified);
}

QTextDocument* QQuickTextDocument_TextDocument(const QQuickTextDocument* self) {
    return self->textDocument();
}

void QQuickTextDocument_SetTextDocument(QQuickTextDocument* self, QTextDocument* document) {
    self->setTextDocument(document);
}

void QQuickTextDocument_Save(QQuickTextDocument* self) {
    self->save();
}

void QQuickTextDocument_SaveAs(QQuickTextDocument* self, const QUrl* url) {
    self->saveAs(*url);
}

uint8_t QQuickTextDocument_Status(const QQuickTextDocument* self) {
    return static_cast<uint8_t>(self->status());
}

libqt_string QQuickTextDocument_ErrorString(const QQuickTextDocument* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickTextDocument_TextDocumentChanged(QQuickTextDocument* self) {
    self->textDocumentChanged();
}

void QQuickTextDocument_Connect_TextDocumentChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self,
                                static_cast<void (QQuickTextDocument::*)()>(&QQuickTextDocument::textDocumentChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuickTextDocument_SourceChanged(QQuickTextDocument* self) {
    self->sourceChanged();
}

void QQuickTextDocument_Connect_SourceChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self,
                                static_cast<void (QQuickTextDocument::*)()>(&QQuickTextDocument::sourceChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuickTextDocument_ModifiedChanged(QQuickTextDocument* self) {
    self->modifiedChanged();
}

void QQuickTextDocument_Connect_ModifiedChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self,
                                static_cast<void (QQuickTextDocument::*)()>(&QQuickTextDocument::modifiedChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuickTextDocument_StatusChanged(QQuickTextDocument* self) {
    self->statusChanged();
}

void QQuickTextDocument_Connect_StatusChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self,
                                static_cast<void (QQuickTextDocument::*)()>(&QQuickTextDocument::statusChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuickTextDocument_ErrorStringChanged(QQuickTextDocument* self) {
    self->errorStringChanged();
}

void QQuickTextDocument_Connect_ErrorStringChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self,
                                static_cast<void (QQuickTextDocument::*)()>(&QQuickTextDocument::errorStringChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

libqt_string QQuickTextDocument_Tr2(const char* s, const char* c) {
    auto _ret = QQuickTextDocument::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickTextDocument_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickTextDocument::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickTextDocument_SuperMetaObject(const QQuickTextDocument* self) {
    return (QMetaObject*)self->QQuickTextDocument::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetaObject(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self)))
        vqquicktextdocument->qquicktextdocument_metaobject_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickTextDocument_SuperMetacast(QQuickTextDocument* self, const char* param1) {
    return self->QQuickTextDocument::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetacast(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_metacast_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickTextDocument_SuperMetacall(QQuickTextDocument* self, int param1, int param2, void** param3) {
    return self->QQuickTextDocument::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetacall(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_metacall_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQuickTextDocument_Event(QQuickTextDocument* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickTextDocument_SuperEvent(QQuickTextDocument* self, QEvent* event) {
    return self->QQuickTextDocument::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnEvent(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_event_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickTextDocument_EventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickTextDocument_SuperEventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event) {
    return self->QQuickTextDocument::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnEventFilter(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_eventfilter_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextDocument_TimerEvent(QQuickTextDocument* self, QTimerEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument) {
        vqquicktextdocument->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextDocument::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperTimerEvent(QQuickTextDocument* self, QTimerEvent* event) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self)) {
        vqquicktextdocument->QQuickTextDocument::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextDocument::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnTimerEvent(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_timerevent_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextDocument_ChildEvent(QQuickTextDocument* self, QChildEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument) {
        vqquicktextdocument->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextDocument::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperChildEvent(QQuickTextDocument* self, QChildEvent* event) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self)) {
        vqquicktextdocument->QQuickTextDocument::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextDocument::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnChildEvent(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_childevent_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextDocument_CustomEvent(QQuickTextDocument* self, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument) {
        vqquicktextdocument->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextDocument::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperCustomEvent(QQuickTextDocument* self, QEvent* event) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self)) {
        vqquicktextdocument->QQuickTextDocument::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextDocument::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnCustomEvent(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_customevent_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextDocument_ConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument) {
        vqquicktextdocument->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickTextDocument::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self)) {
        vqquicktextdocument->QQuickTextDocument::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickTextDocument::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnConnectNotify(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_connectnotify_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextDocument_DisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument) {
        vqquicktextdocument->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickTextDocument::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperDisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self)) {
        vqquicktextdocument->QQuickTextDocument::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickTextDocument::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnDisconnectNotify(QQuickTextDocument* self, intptr_t slot) {
    if (auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self))
        vqquicktextdocument->qquicktextdocument_disconnectnotify_callback = reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickTextDocument_Sender(const QQuickTextDocument* self) {
    if (auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self))) {
        return vqquicktextdocument->VirtualQQuickTextDocument::sender();
    } else
        qFatal("Error: Protected method QQuickTextDocument::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickTextDocument_SenderSignalIndex(const QQuickTextDocument* self) {
    if (auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self))) {
        return vqquicktextdocument->VirtualQQuickTextDocument::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickTextDocument::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickTextDocument_Receivers(const QQuickTextDocument* self, const char* signal) {
    if (auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self))) {
        return vqquicktextdocument->VirtualQQuickTextDocument::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickTextDocument::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickTextDocument_IsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal) {
    if (auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self))) {
        return vqquicktextdocument->VirtualQQuickTextDocument::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickTextDocument::isSignalConnected called without a directly constructed type");
}

void QQuickTextDocument_Delete(QQuickTextDocument* self) {
    delete self;
}
