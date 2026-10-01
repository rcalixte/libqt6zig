#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qimageiohandler.h>
#include "libqimageiohandler.h"
#include "libqimageiohandler.hxx"

QImageIOHandler* QImageIOHandler_new() {
    return new VirtualQImageIOHandler();
}

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QImageIOHandler_Device(const QImageIOHandler* self) {
    return self->device();
}

void QImageIOHandler_SetFormat(QImageIOHandler* self, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

void QImageIOHandler_SetFormat2(const QImageIOHandler* self, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QImageIOHandler_Format(const QImageIOHandler* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
    return self->canRead();
}

bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
    return self->read(image);
}

bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image) {
    return self->write(*image);
}

QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
    return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
}

void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value) {
    self->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}

bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
    return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
    return self->jumpToNextImage();
}

bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
    return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
    return self->loopCount();
}

int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
    return self->imageCount();
}

int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
    return self->nextImageDelay();
}

int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
    return self->currentImageNumber();
}

QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
    return new QRect(self->currentImageRect());
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
    return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCanRead(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_canread_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CanRead_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self))
        vqimageiohandler->qimageiohandler_read_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Read_Callback>(slot);
}

// Base class handler implementation
bool QImageIOHandler_SuperWrite(QImageIOHandler* self, const QImage* image) {
    return self->QImageIOHandler::write(*image);
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self))
        vqimageiohandler->qimageiohandler_write_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Write_Callback>(slot);
}

// Base class handler implementation
QVariant* QImageIOHandler_SuperOption(const QImageIOHandler* self, int option) {
    return new QVariant(self->QImageIOHandler::option(static_cast<QImageIOHandler::ImageOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnOption(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_option_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Option_Callback>(slot);
}

// Base class handler implementation
void QImageIOHandler_SuperSetOption(QImageIOHandler* self, int option, const QVariant* value) {
    self->QImageIOHandler::setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self))
        vqimageiohandler->qimageiohandler_setoption_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SetOption_Callback>(slot);
}

// Base class handler implementation
bool QImageIOHandler_SuperSupportsOption(const QImageIOHandler* self, int option) {
    return self->QImageIOHandler::supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSupportsOption(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_supportsoption_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SupportsOption_Callback>(slot);
}

// Base class handler implementation
bool QImageIOHandler_SuperJumpToNextImage(QImageIOHandler* self) {
    return self->QImageIOHandler::jumpToNextImage();
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self))
        vqimageiohandler->qimageiohandler_jumptonextimage_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToNextImage_Callback>(slot);
}

// Base class handler implementation
bool QImageIOHandler_SuperJumpToImage(QImageIOHandler* self, int imageNumber) {
    return self->QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self))
        vqimageiohandler->qimageiohandler_jumptoimage_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToImage_Callback>(slot);
}

// Base class handler implementation
int QImageIOHandler_SuperLoopCount(const QImageIOHandler* self) {
    return self->QImageIOHandler::loopCount();
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnLoopCount(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_loopcount_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_LoopCount_Callback>(slot);
}

// Base class handler implementation
int QImageIOHandler_SuperImageCount(const QImageIOHandler* self) {
    return self->QImageIOHandler::imageCount();
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnImageCount(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_imagecount_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_ImageCount_Callback>(slot);
}

// Base class handler implementation
int QImageIOHandler_SuperNextImageDelay(const QImageIOHandler* self) {
    return self->QImageIOHandler::nextImageDelay();
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnNextImageDelay(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_nextimagedelay_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_NextImageDelay_Callback>(slot);
}

// Base class handler implementation
int QImageIOHandler_SuperCurrentImageNumber(const QImageIOHandler* self) {
    return self->QImageIOHandler::currentImageNumber();
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageNumber(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_currentimagenumber_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageNumber_Callback>(slot);
}

// Base class handler implementation
QRect* QImageIOHandler_SuperCurrentImageRect(const QImageIOHandler* self) {
    return new QRect(self->QImageIOHandler::currentImageRect());
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageRect(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self)))
        vqimageiohandler->qimageiohandler_currentimagerect_callback = reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageRect_Callback>(slot);
}

void QImageIOHandler_Delete(QImageIOHandler* self) {
    delete self;
}

QImageIOPlugin* QImageIOPlugin_new() {
    return new VirtualQImageIOPlugin();
}

QImageIOPlugin* QImageIOPlugin_new2(QObject* parent) {
    return new VirtualQImageIOPlugin(parent);
}

QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QImageIOPlugin_Metacall(QImageIOPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QImageIOPlugin_Tr(const char* s) {
    auto _ret = QImageIOPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    return static_cast<int>(self->capabilities(device, format_QByteArray));
}

QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    return self->create(device, format_QByteArray);
}

libqt_string QImageIOPlugin_Tr2(const char* s, const char* c) {
    auto _ret = QImageIOPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QImageIOPlugin_SuperMetaObject(const QImageIOPlugin* self) {
    return (QMetaObject*)self->QImageIOPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnMetaObject(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self)))
        vqimageioplugin->qimageioplugin_metaobject_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QImageIOPlugin_SuperMetacast(QImageIOPlugin* self, const char* param1) {
    return self->QImageIOPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnMetacast(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_metacast_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QImageIOPlugin_SuperMetacall(QImageIOPlugin* self, int param1, int param2, void** param3) {
    return self->QImageIOPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnMetacall(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_metacall_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCapabilities(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self)))
        vqimageioplugin->qimageioplugin_capabilities_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Capabilities_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCreate(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self)))
        vqimageioplugin->qimageioplugin_create_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QImageIOPlugin_Event(QImageIOPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QImageIOPlugin_SuperEvent(QImageIOPlugin* self, QEvent* event) {
    return self->QImageIOPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_event_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QImageIOPlugin_EventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QImageIOPlugin_SuperEventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    return self->QImageIOPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEventFilter(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_eventfilter_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QImageIOPlugin_TimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin) {
        vqimageioplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QImageIOPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QImageIOPlugin_SuperTimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->QImageIOPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QImageIOPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnTimerEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_timerevent_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QImageIOPlugin_ChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin) {
        vqimageioplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QImageIOPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QImageIOPlugin_SuperChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->QImageIOPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QImageIOPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnChildEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_childevent_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QImageIOPlugin_CustomEvent(QImageIOPlugin* self, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin) {
        vqimageioplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QImageIOPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QImageIOPlugin_SuperCustomEvent(QImageIOPlugin* self, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->QImageIOPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QImageIOPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCustomEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_customevent_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QImageIOPlugin_ConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin) {
        vqimageioplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QImageIOPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QImageIOPlugin_SuperConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->QImageIOPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QImageIOPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnConnectNotify(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_connectnotify_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QImageIOPlugin_DisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin) {
        vqimageioplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QImageIOPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QImageIOPlugin_SuperDisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->QImageIOPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QImageIOPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnDisconnectNotify(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self))
        vqimageioplugin->qimageioplugin_disconnectnotify_callback = reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QImageIOPlugin_Sender(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->VirtualQImageIOPlugin::sender();
    } else
        qFatal("Error: Protected method QImageIOPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QImageIOPlugin_SenderSignalIndex(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->VirtualQImageIOPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QImageIOPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QImageIOPlugin_Receivers(const QImageIOPlugin* self, const char* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->VirtualQImageIOPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QImageIOPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QImageIOPlugin_IsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->VirtualQImageIOPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QImageIOPlugin::isSignalConnected called without a directly constructed type");
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
    delete self;
}
