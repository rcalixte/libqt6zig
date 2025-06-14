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
#include <QByteArray>
#include <cstring>
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

void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QImageIOHandler_Format(const QImageIOHandler* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
    return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

// Derived class handler implementation
bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->canRead();
    } else {
        return ((VirtualQImageIOHandler*)self)->canRead();
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CanRead_IsBase(true);
        return vqimageiohandler->canRead();
    } else {
        return ((VirtualQImageIOHandler*)self)->canRead();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CanRead_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CanRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->read(image);
    } else {
        return ((VirtualQImageIOHandler*)self)->read(image);
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Read_IsBase(true);
        return vqimageiohandler->read(image);
    } else {
        return ((VirtualQImageIOHandler*)self)->read(image);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Read_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Read_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->write(*image);
    } else {
        return self->QImageIOHandler::write(*image);
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, const QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Write_IsBase(true);
        return vqimageiohandler->write(*image);
    } else {
        return self->QImageIOHandler::write(*image);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Write_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Write_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(((VirtualQImageIOHandler*)self)->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

// Base class handler implementation
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Option_IsBase(true);
        return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(((VirtualQImageIOHandler*)self)->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Option_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Option_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        self->QImageIOHandler::setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

// Base class handler implementation
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, const QVariant* value) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SetOption_IsBase(true);
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        self->QImageIOHandler::setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SetOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SetOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return self->QImageIOHandler::supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_IsBase(true);
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return self->QImageIOHandler::supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SupportsOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->jumpToNextImage();
    } else {
        return self->QImageIOHandler::jumpToNextImage();
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_IsBase(true);
        return vqimageiohandler->jumpToNextImage();
    } else {
        return self->QImageIOHandler::jumpToNextImage();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToNextImage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return self->QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_IsBase(true);
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return self->QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToImage_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->loopCount();
    } else {
        return self->QImageIOHandler::loopCount();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_LoopCount_IsBase(true);
        return vqimageiohandler->loopCount();
    } else {
        return self->QImageIOHandler::loopCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_LoopCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_LoopCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->imageCount();
    } else {
        return self->QImageIOHandler::imageCount();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_ImageCount_IsBase(true);
        return vqimageiohandler->imageCount();
    } else {
        return self->QImageIOHandler::imageCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_ImageCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_ImageCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->nextImageDelay();
    } else {
        return self->QImageIOHandler::nextImageDelay();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_IsBase(true);
        return vqimageiohandler->nextImageDelay();
    } else {
        return self->QImageIOHandler::nextImageDelay();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_NextImageDelay_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->currentImageNumber();
    } else {
        return self->QImageIOHandler::currentImageNumber();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_IsBase(true);
        return vqimageiohandler->currentImageNumber();
    } else {
        return self->QImageIOHandler::currentImageNumber();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageNumber_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return new QRect(vqimageiohandler->currentImageRect());
    } else {
        return new QRect(((VirtualQImageIOHandler*)self)->currentImageRect());
    }
}

// Base class handler implementation
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_IsBase(true);
        return new QRect(vqimageiohandler->currentImageRect());
    } else {
        return new QRect(((VirtualQImageIOHandler*)self)->currentImageRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageRect_Callback>(slot));
    }
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
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQImageIOPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOPlugin_OnMetacall(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Metacall_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOPlugin_QBaseMetacall(QImageIOPlugin* self, int param1, int param2, void** param3) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Metacall_IsBase(true);
        return vqimageioplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQImageIOPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QImageIOPlugin_Tr(const char* s) {
    QString _ret = QImageIOPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QImageIOPlugin_Tr2(const char* s, const char* c) {
    QString _ret = QImageIOPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    QByteArray format_QByteArray(format.data, format.len);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    } else {
        return static_cast<int>(((VirtualQImageIOPlugin*)self)->capabilities(device, format_QByteArray));
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseCapabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    QByteArray format_QByteArray(format.data, format.len);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Capabilities_IsBase(true);
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    } else {
        return static_cast<int>(((VirtualQImageIOPlugin*)self)->capabilities(device, format_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCapabilities(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Capabilities_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Capabilities_Callback>(slot));
    }
}

// Derived class handler implementation
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    QByteArray format_QByteArray(format.data, format.len);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->create(device, format_QByteArray);
    } else {
        return ((VirtualQImageIOPlugin*)self)->create(device, format_QByteArray);
    }
}

// Base class handler implementation
QImageIOHandler* QImageIOPlugin_QBaseCreate(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    QByteArray format_QByteArray(format.data, format.len);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Create_IsBase(true);
        return vqimageioplugin->create(device, format_QByteArray);
    } else {
        return ((VirtualQImageIOPlugin*)self)->create(device, format_QByteArray);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCreate(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Create_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_Event(QImageIOPlugin* self, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->event(event);
    } else {
        return self->QImageIOPlugin::event(event);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseEvent(QImageIOPlugin* self, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Event_IsBase(true);
        return vqimageioplugin->event(event);
    } else {
        return self->QImageIOPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEvent(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Event_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_EventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->eventFilter(watched, event);
    } else {
        return self->QImageIOPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseEventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_EventFilter_IsBase(true);
        return vqimageioplugin->eventFilter(watched, event);
    } else {
        return self->QImageIOPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEventFilter(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_EventFilter_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_TimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->timerEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseTimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_TimerEvent_IsBase(true);
        vqimageioplugin->timerEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnTimerEvent(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_ChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->childEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_ChildEvent_IsBase(true);
        vqimageioplugin->childEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnChildEvent(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_CustomEvent(QImageIOPlugin* self, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->customEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseCustomEvent(QImageIOPlugin* self, QEvent* event) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_CustomEvent_IsBase(true);
        vqimageioplugin->customEvent(event);
    } else {
        ((VirtualQImageIOPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCustomEvent(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_ConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->connectNotify(*signal);
    } else {
        ((VirtualQImageIOPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_ConnectNotify_IsBase(true);
        vqimageioplugin->connectNotify(*signal);
    } else {
        ((VirtualQImageIOPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnConnectNotify(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_DisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQImageIOPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseDisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_DisconnectNotify_IsBase(true);
        vqimageioplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQImageIOPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnDisconnectNotify(QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self);
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QImageIOPlugin_Sender(const QImageIOPlugin* self) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->sender();
    } else {
        return ((VirtualQImageIOPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QImageIOPlugin_QBaseSender(const QImageIOPlugin* self) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Sender_IsBase(true);
        return vqimageioplugin->sender();
    } else {
        return ((VirtualQImageIOPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnSender(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Sender_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOPlugin_SenderSignalIndex(const QImageIOPlugin* self) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->senderSignalIndex();
    } else {
        return ((VirtualQImageIOPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseSenderSignalIndex(const QImageIOPlugin* self) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_SenderSignalIndex_IsBase(true);
        return vqimageioplugin->senderSignalIndex();
    } else {
        return ((VirtualQImageIOPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnSenderSignalIndex(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOPlugin_Receivers(const QImageIOPlugin* self, const char* signal) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->receivers(signal);
    } else {
        return ((VirtualQImageIOPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseReceivers(const QImageIOPlugin* self, const char* signal) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Receivers_IsBase(true);
        return vqimageioplugin->receivers(signal);
    } else {
        return ((VirtualQImageIOPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnReceivers(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_Receivers_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_IsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        return vqimageioplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQImageIOPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseIsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_IsSignalConnected_IsBase(true);
        return vqimageioplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQImageIOPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnIsSignalConnected(const QImageIOPlugin* self, intptr_t slot) {
    auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self));
    if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
        vqimageioplugin->setQImageIOPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_IsSignalConnected_Callback>(slot));
    }
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
    delete self;
}
