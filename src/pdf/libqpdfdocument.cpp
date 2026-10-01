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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfDocument_Tr(const char* s) {
    auto _ret = QPdfDocument::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QPdfDocument_Load2(QPdfDocument* self, QIODevice* device) {
    self->load(device);
}

void QPdfDocument_SetPassword(QPdfDocument* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string QPdfDocument_Password(const QPdfDocument* self) {
    auto _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->pageLabel(static_cast<int>(page));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPdfDocument_PageIndexForLabel(QPdfDocument* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->pageIndexForLabel(label_QString);
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
    QPdfDocument::connect(self,
                          static_cast<void (QPdfDocument::*)()>(&QPdfDocument::passwordChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QPdfDocument_PasswordRequired(QPdfDocument* self) {
    self->passwordRequired();
}

void QPdfDocument_Connect_PasswordRequired(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*) = reinterpret_cast<void (*)(QPdfDocument*)>(slot);
    QPdfDocument::connect(self,
                          static_cast<void (QPdfDocument::*)()>(&QPdfDocument::passwordRequired),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QPdfDocument_StatusChanged(QPdfDocument* self, int status) {
    self->statusChanged(static_cast<QPdfDocument::Status>(status));
}

void QPdfDocument_Connect_StatusChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*, int) = reinterpret_cast<void (*)(QPdfDocument*, int)>(slot);
    QPdfDocument::connect(self,
                          static_cast<void (QPdfDocument::*)(QPdfDocument::Status)>(&QPdfDocument::statusChanged),
                          [self, slotFunc](QPdfDocument::Status status) {
                              int sigval1 = static_cast<int>(status);
                              slotFunc(self, sigval1);
                          });
}

void QPdfDocument_PageCountChanged(QPdfDocument* self, int pageCount) {
    self->pageCountChanged(static_cast<int>(pageCount));
}

void QPdfDocument_Connect_PageCountChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*, int) = reinterpret_cast<void (*)(QPdfDocument*, int)>(slot);
    QPdfDocument::connect(self,
                          static_cast<void (QPdfDocument::*)(int)>(&QPdfDocument::pageCountChanged),
                          [self, slotFunc](int pageCount) {
                              int sigval1 = pageCount;
                              slotFunc(self, sigval1);
                          });
}

void QPdfDocument_PageModelChanged(QPdfDocument* self) {
    self->pageModelChanged();
}

void QPdfDocument_Connect_PageModelChanged(QPdfDocument* self, intptr_t slot) {
    void (*slotFunc)(QPdfDocument*) = reinterpret_cast<void (*)(QPdfDocument*)>(slot);
    QPdfDocument::connect(self,
                          static_cast<void (QPdfDocument::*)()>(&QPdfDocument::pageModelChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

libqt_string QPdfDocument_Tr2(const char* s, const char* c) {
    auto _ret = QPdfDocument::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfDocument_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfDocument::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* QPdfDocument_Render3(QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options) {
    return new QImage(self->render(static_cast<int>(page), *imageSize, *options));
}

// Base class handler implementation
QMetaObject* QPdfDocument_SuperMetaObject(const QPdfDocument* self) {
    return (QMetaObject*)self->QPdfDocument::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnMetaObject(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self)))
        vqpdfdocument->qpdfdocument_metaobject_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfDocument_SuperMetacast(QPdfDocument* self, const char* param1) {
    return self->QPdfDocument::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnMetacast(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_metacast_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfDocument_SuperMetacall(QPdfDocument* self, int param1, int param2, void** param3) {
    return self->QPdfDocument::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnMetacall(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_metacall_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPdfDocument_Event(QPdfDocument* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfDocument_SuperEvent(QPdfDocument* self, QEvent* event) {
    return self->QPdfDocument::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnEvent(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_event_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfDocument_EventFilter(QPdfDocument* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfDocument_SuperEventFilter(QPdfDocument* self, QObject* watched, QEvent* event) {
    return self->QPdfDocument::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnEventFilter(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_eventfilter_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfDocument_TimerEvent(QPdfDocument* self, QTimerEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument) {
        vqpdfdocument->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfDocument::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfDocument_SuperTimerEvent(QPdfDocument* self, QTimerEvent* event) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self)) {
        vqpdfdocument->QPdfDocument::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfDocument::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnTimerEvent(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_timerevent_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfDocument_ChildEvent(QPdfDocument* self, QChildEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument) {
        vqpdfdocument->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfDocument::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfDocument_SuperChildEvent(QPdfDocument* self, QChildEvent* event) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self)) {
        vqpdfdocument->QPdfDocument::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfDocument::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnChildEvent(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_childevent_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfDocument_CustomEvent(QPdfDocument* self, QEvent* event) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument) {
        vqpdfdocument->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfDocument::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfDocument_SuperCustomEvent(QPdfDocument* self, QEvent* event) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self)) {
        vqpdfdocument->QPdfDocument::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfDocument::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnCustomEvent(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_customevent_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfDocument_ConnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument) {
        vqpdfdocument->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfDocument::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfDocument_SuperConnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self)) {
        vqpdfdocument->QPdfDocument::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfDocument::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnConnectNotify(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_connectnotify_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfDocument_DisconnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self);
    if (vqpdfdocument) {
        vqpdfdocument->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfDocument::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfDocument_SuperDisconnectNotify(QPdfDocument* self, const QMetaMethod* signal) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self)) {
        vqpdfdocument->QPdfDocument::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfDocument::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfDocument_OnDisconnectNotify(QPdfDocument* self, intptr_t slot) {
    if (auto* vqpdfdocument = dynamic_cast<VirtualQPdfDocument*>(self))
        vqpdfdocument->qpdfdocument_disconnectnotify_callback = reinterpret_cast<VirtualQPdfDocument::QPdfDocument_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPdfDocument_Sender(const QPdfDocument* self) {
    if (auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self))) {
        return vqpdfdocument->VirtualQPdfDocument::sender();
    } else
        qFatal("Error: Protected method QPdfDocument::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfDocument_SenderSignalIndex(const QPdfDocument* self) {
    if (auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self))) {
        return vqpdfdocument->VirtualQPdfDocument::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfDocument::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfDocument_Receivers(const QPdfDocument* self, const char* signal) {
    if (auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self))) {
        return vqpdfdocument->VirtualQPdfDocument::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfDocument::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfDocument_IsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal) {
    if (auto* vqpdfdocument = const_cast<VirtualQPdfDocument*>(dynamic_cast<const VirtualQPdfDocument*>(self))) {
        return vqpdfdocument->VirtualQPdfDocument::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfDocument::isSignalConnected called without a directly constructed type");
}

void QPdfDocument_Delete(QPdfDocument* self) {
    delete self;
}
