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
    QQuickTextDocument::connect(self, &QQuickTextDocument::textDocumentChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickTextDocument_SourceChanged(QQuickTextDocument* self) {
    self->sourceChanged();
}

void QQuickTextDocument_Connect_SourceChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self, &QQuickTextDocument::sourceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickTextDocument_ModifiedChanged(QQuickTextDocument* self) {
    self->modifiedChanged();
}

void QQuickTextDocument_Connect_ModifiedChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self, &QQuickTextDocument::modifiedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickTextDocument_StatusChanged(QQuickTextDocument* self) {
    self->statusChanged();
}

void QQuickTextDocument_Connect_StatusChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self, &QQuickTextDocument::statusChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickTextDocument_ErrorStringChanged(QQuickTextDocument* self) {
    self->errorStringChanged();
}

void QQuickTextDocument_Connect_ErrorStringChanged(QQuickTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QQuickTextDocument*) = reinterpret_cast<void (*)(QQuickTextDocument*)>(slot);
    QQuickTextDocument::connect(self, &QQuickTextDocument::errorStringChanged, [self, slotFunc]() {
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
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_MetaObject_IsBase(true);
        return (QMetaObject*)vqquicktextdocument->metaObject();
    } else {
        return (QMetaObject*)self->QQuickTextDocument::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetaObject(const QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_MetaObject_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickTextDocument_SuperMetacast(QQuickTextDocument* self, const char* param1) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_Metacast_IsBase(true);
        return vqquicktextdocument->qt_metacast(param1);
    } else {
        return self->QQuickTextDocument::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetacast(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_Metacast_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickTextDocument_SuperMetacall(QQuickTextDocument* self, int param1, int param2, void** param3) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_Metacall_IsBase(true);
        return vqquicktextdocument->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickTextDocument::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnMetacall(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_Metacall_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextDocument_Event(QQuickTextDocument* self, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->event(event);
    } else {
        return self->QQuickTextDocument::event(event);
    }
}

// Base class handler implementation
bool QQuickTextDocument_SuperEvent(QQuickTextDocument* self, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_Event_IsBase(true);
        return vqquicktextdocument->event(event);
    } else {
        return self->QQuickTextDocument::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnEvent(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_Event_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextDocument_EventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->eventFilter(watched, event);
    } else {
        return self->QQuickTextDocument::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickTextDocument_SuperEventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_EventFilter_IsBase(true);
        return vqquicktextdocument->eventFilter(watched, event);
    } else {
        return self->QQuickTextDocument::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnEventFilter(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_EventFilter_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextDocument_TimerEvent(QQuickTextDocument* self, QTimerEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->timerEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperTimerEvent(QQuickTextDocument* self, QTimerEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_TimerEvent_IsBase(true);
        vqquicktextdocument->timerEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnTimerEvent(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_TimerEvent_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextDocument_ChildEvent(QQuickTextDocument* self, QChildEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->childEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperChildEvent(QQuickTextDocument* self, QChildEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_ChildEvent_IsBase(true);
        vqquicktextdocument->childEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnChildEvent(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_ChildEvent_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextDocument_CustomEvent(QQuickTextDocument* self, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->customEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperCustomEvent(QQuickTextDocument* self, QEvent* event) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_CustomEvent_IsBase(true);
        vqquicktextdocument->customEvent(event);
    } else {
        ((VirtualQQuickTextDocument*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnCustomEvent(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_CustomEvent_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextDocument_ConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->connectNotify(*signal);
    } else {
        ((VirtualQQuickTextDocument*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_ConnectNotify_IsBase(true);
        vqquicktextdocument->connectNotify(*signal);
    } else {
        ((VirtualQQuickTextDocument*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnConnectNotify(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextDocument_DisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTextDocument*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTextDocument_SuperDisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_DisconnectNotify_IsBase(true);
        vqquicktextdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTextDocument*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnDisconnectNotify(QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = dynamic_cast<VirtualQQuickTextDocument*>(self);
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickTextDocument_Sender(const QQuickTextDocument* self) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->sender();
    } else {
        return ((VirtualQQuickTextDocument*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickTextDocument_SuperSender(const QQuickTextDocument* self) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_Sender_IsBase(true);
        return vqquicktextdocument->sender();
    } else {
        return ((VirtualQQuickTextDocument*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnSender(const QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_Sender_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickTextDocument_SenderSignalIndex(const QQuickTextDocument* self) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->senderSignalIndex();
    } else {
        return ((VirtualQQuickTextDocument*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickTextDocument_SuperSenderSignalIndex(const QQuickTextDocument* self) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_SenderSignalIndex_IsBase(true);
        return vqquicktextdocument->senderSignalIndex();
    } else {
        return ((VirtualQQuickTextDocument*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnSenderSignalIndex(const QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickTextDocument_Receivers(const QQuickTextDocument* self, const char* signal) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->receivers(signal);
    } else {
        return ((VirtualQQuickTextDocument*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickTextDocument_SuperReceivers(const QQuickTextDocument* self, const char* signal) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_Receivers_IsBase(true);
        return vqquicktextdocument->receivers(signal);
    } else {
        return ((VirtualQQuickTextDocument*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnReceivers(const QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_Receivers_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextDocument_IsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        return vqquicktextdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTextDocument*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickTextDocument_SuperIsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument) {
        vqquicktextdocument->setQQuickTextDocument_IsSignalConnected_IsBase(true);
        return vqquicktextdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTextDocument*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextDocument_OnIsSignalConnected(const QQuickTextDocument* self, intptr_t slot) {
    auto* vqquicktextdocument = const_cast<VirtualQQuickTextDocument*>(dynamic_cast<const VirtualQQuickTextDocument*>(self));
    if (vqquicktextdocument && vqquicktextdocument->isVirtualQQuickTextDocument)
        vqquicktextdocument->setQQuickTextDocument_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickTextDocument::QQuickTextDocument_IsSignalConnected_Callback>(slot));
}

void QQuickTextDocument_Delete(QQuickTextDocument* self) {
    delete self;
}
