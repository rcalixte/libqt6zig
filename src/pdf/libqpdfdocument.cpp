#include <QAbstractListModel>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfDocument>
#include <QPdfDocumentRenderOptions>
#include <QPdfSelection>
#include <QPointF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfdocument.h>
#include "libqpdfdocument.h"
#include "libqpdfdocument.hxx"

QPdfDocument* QPdfDocument_new() {
    return new VirtualQPdfDocument();
}

QPdfDocument* QPdfDocument_new2(QObject* parent) {
    return new VirtualQPdfDocument(parent);
}

QMetaObject* QPdfDocument_MetaObject(const QPdfDocument* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfDocument_Metacast(QPdfDocument* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfDocument_Metacall(QPdfDocument* self, int param1, int param2, void** param3) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfDocument*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfDocument_OnMetacall(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Metacall_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfDocument_QBaseMetacall(QPdfDocument* self, int param1, int param2, void** param3) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Metacall_IsBase(true);
        return vqpdfdocument->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfDocument*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfDocument_Tr(const char* s) {
    QString _ret = QPdfDocument::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPdfDocument_Load(QPdfDocument* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return static_cast<int>(self->load(fileName_QString));
}

int QPdfDocument_Status(const QPdfDocument* self) {
    return static_cast<int>(self->status());
}

void QPdfDocument_LoadWithDevice(QPdfDocument* self, QIODevice* device) {
    self->load(device);
}

void QPdfDocument_SetPassword(QPdfDocument* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string QPdfDocument_Password(const QPdfDocument* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QPdfDocument_MetaData(const QPdfDocument* self, int field) {
    return new QVariant(self->metaData(static_cast<QPdfDocument::MetaDataField>(field)));
}

int QPdfDocument_Error(const QPdfDocument* self) {
    return static_cast<int>(self->error());
}

void QPdfDocument_Close(QPdfDocument* self) {
    self->close();
}

int QPdfDocument_PageCount(const QPdfDocument* self) {
    return self->pageCount();
}

QSizeF* QPdfDocument_PagePointSize(const QPdfDocument* self, int page) {
    return new QSizeF(self->pagePointSize(static_cast<int>(page)));
}

libqt_string QPdfDocument_PageLabel(QPdfDocument* self, int page) {
    QString _ret = self->pageLabel(static_cast<int>(page));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractListModel* QPdfDocument_PageModel(QPdfDocument* self) {
    return self->pageModel();
}

QImage* QPdfDocument_Render(QPdfDocument* self, int page, QSize* imageSize) {
    return new QImage(self->render(static_cast<int>(page), *imageSize));
}

QPdfSelection* QPdfDocument_GetSelection(QPdfDocument* self, int page, QPointF* start, QPointF* end) {
    return new QPdfSelection(self->getSelection(static_cast<int>(page), *start, *end));
}

QPdfSelection* QPdfDocument_GetSelectionAtIndex(QPdfDocument* self, int page, int startIndex, int maxLength) {
    return new QPdfSelection(self->getSelectionAtIndex(static_cast<int>(page), static_cast<int>(startIndex), static_cast<int>(maxLength)));
}

QPdfSelection* QPdfDocument_GetAllText(QPdfDocument* self, int page) {
    return new QPdfSelection(self->getAllText(static_cast<int>(page)));
}

void QPdfDocument_PasswordChanged(QPdfDocument* self) {
    self->passwordChanged();
}

void QPdfDocument_Connect_PasswordChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*) = reinterpret_cast<void (*)(QPdfDocument*)>(slot);
    QPdfDocument::connect(self, &QPdfDocument::passwordChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfDocument_PasswordRequired(QPdfDocument* self) {
    self->passwordRequired();
}

void QPdfDocument_Connect_PasswordRequired(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*) = reinterpret_cast<void (*)(QPdfDocument*)>(slot);
    QPdfDocument::connect(self, &QPdfDocument::passwordRequired, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfDocument_StatusChanged(QPdfDocument* self, int status) {
    self->statusChanged(static_cast<QPdfDocument::Status>(status));
}

void QPdfDocument_Connect_StatusChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*, int) = reinterpret_cast<void (*)(QPdfDocument*, int)>(slot);
    QPdfDocument::connect(self, &QPdfDocument::statusChanged, [self, slotFunc](QPdfDocument::Status status) {
        int sigval1 = static_cast<int>(status);
        slotFunc(self, sigval1);
    });
}

void QPdfDocument_PageCountChanged(QPdfDocument* self, int pageCount) {
    self->pageCountChanged(static_cast<int>(pageCount));
}

void QPdfDocument_Connect_PageCountChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*, int) = reinterpret_cast<void (*)(QPdfDocument*, int)>(slot);
    QPdfDocument::connect(self, &QPdfDocument::pageCountChanged, [self, slotFunc](int pageCount) {
        int sigval1 = pageCount;
        slotFunc(self, sigval1);
    });
}

void QPdfDocument_PageModelChanged(QPdfDocument* self) {
    self->pageModelChanged();
}

void QPdfDocument_Connect_PageModelChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*) = reinterpret_cast<void (*)(QPdfDocument*)>(slot);
    QPdfDocument::connect(self, &QPdfDocument::pageModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QPdfDocument_Tr2(const char* s, const char* c) {
    QString _ret = QPdfDocument::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfDocument_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfDocument::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* QPdfDocument_Render3(QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options) {
    return new QImage(self->render(static_cast<int>(page), *imageSize, *options));
}

// Derived class handler implementation
bool QPdfDocument_Event(QPdfDocument* self, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->event(event);
    } else {
        return self->QPdfDocument::event(event);
    }
}

// Base class handler implementation
bool QPdfDocument_QBaseEvent(QPdfDocument* self, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Event_IsBase(true);
        return vqpdfdocument->event(event);
    } else {
        return self->QPdfDocument::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnEvent(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Event_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfDocument_EventFilter(QPdfDocument* self, QObject* watched, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->eventFilter(watched, event);
    } else {
        return self->QPdfDocument::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfDocument_QBaseEventFilter(QPdfDocument* self, QObject* watched, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_EventFilter_IsBase(true);
        return vqpdfdocument->eventFilter(watched, event);
    } else {
        return self->QPdfDocument::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnEventFilter(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_EventFilter_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfDocument_TimerEvent(QPdfDocument* self, QTimerEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->timerEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfDocument_QBaseTimerEvent(QPdfDocument* self, QTimerEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_TimerEvent_IsBase(true);
        vqpdfdocument->timerEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnTimerEvent(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_TimerEvent_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfDocument_ChildEvent(QPdfDocument* self, QChildEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->childEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfDocument_QBaseChildEvent(QPdfDocument* self, QChildEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_ChildEvent_IsBase(true);
        vqpdfdocument->childEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnChildEvent(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_ChildEvent_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfDocument_CustomEvent(QPdfDocument* self, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->customEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfDocument_QBaseCustomEvent(QPdfDocument* self, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_CustomEvent_IsBase(true);
        vqpdfdocument->customEvent(event);
    } else {
        ((VirtualQPdfDocument*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnCustomEvent(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_CustomEvent_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfDocument_ConnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->connectNotify(*signal);
    } else {
        ((VirtualQPdfDocument*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfDocument_QBaseConnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_ConnectNotify_IsBase(true);
        vqpdfdocument->connectNotify(*signal);
    } else {
        ((VirtualQPdfDocument*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnConnectNotify(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfDocument_DisconnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfDocument*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfDocument_QBaseDisconnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_DisconnectNotify_IsBase(true);
        vqpdfdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfDocument*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnDisconnectNotify(QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfDocument_Sender(const QPdfDocument* self) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->sender();
    } else {
        return ((VirtualQPdfDocument*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfDocument_QBaseSender(const QPdfDocument* self) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Sender_IsBase(true);
        return vqpdfdocument->sender();
    } else {
        return ((VirtualQPdfDocument*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnSender(const QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Sender_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfDocument_SenderSignalIndex(const QPdfDocument* self) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->senderSignalIndex();
    } else {
        return ((VirtualQPdfDocument*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfDocument_QBaseSenderSignalIndex(const QPdfDocument* self) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_SenderSignalIndex_IsBase(true);
        return vqpdfdocument->senderSignalIndex();
    } else {
        return ((VirtualQPdfDocument*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnSenderSignalIndex(const QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfDocument_Receivers(const QPdfDocument* self, const char* signal) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->receivers(signal);
    } else {
        return ((VirtualQPdfDocument*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfDocument_QBaseReceivers(const QPdfDocument* self, const char* signal) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Receivers_IsBase(true);
        return vqpdfdocument->receivers(signal);
    } else {
        return ((VirtualQPdfDocument*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnReceivers(const QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_Receivers_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfDocument_IsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        return vqpdfdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfDocument*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfDocument_QBaseIsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_IsSignalConnected_IsBase(true);
        return vqpdfdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfDocument*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnIsSignalConnected(const QPdfDocument* self, intptr_t slot) {
    auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self));
    if (vqpdfdocument && vqpdfdocument->isVirtualQPdfDocument) {
        vqpdfdocument->setQPdfDocument_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfDocument::QPdfDocument_IsSignalConnected_Callback>(slot));
    }
}

void QPdfDocument_Delete(QPdfDocument* self) {
    delete self;
}
