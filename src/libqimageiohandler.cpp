#include <QByteArray>
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->canRead();
    } else {
        return ((VirtualQImageIOHandler*)self)->canRead();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CanRead_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CanRead_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CanRead_IsBase(true);
        return vqimageiohandler->canRead();
    } else {
        return ((VirtualQImageIOHandler*)self)->canRead();
    }
}

bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return vqimageiohandler->read(image);
    } else {
        return ((VirtualQImageIOHandler*)self)->read(image);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Read_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Read_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Read_IsBase(true);
        return vqimageiohandler->read(image);
    } else {
        return ((VirtualQImageIOHandler*)self)->read(image);
    }
}

bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->write(*image);
    } else {
        return ((VirtualQImageIOHandler*)self)->write(*image);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Write_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Write_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, const QImage* image) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Write_IsBase(true);
        return vqimageiohandler->write(*image);
    } else {
        return ((VirtualQImageIOHandler*)self)->write(*image);
    }
}

QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(((VirtualQImageIOHandler*)self)->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Option_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Option_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_Option_IsBase(true);
        return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(((VirtualQImageIOHandler*)self)->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        self->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        ((VirtualQImageIOHandler*)self)->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SetOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SetOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, const QVariant* value) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SetOption_IsBase(true);
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        ((VirtualQImageIOHandler*)self)->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return ((VirtualQImageIOHandler*)self)->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SupportsOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_IsBase(true);
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return ((VirtualQImageIOHandler*)self)->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->jumpToNextImage();
    } else {
        return ((VirtualQImageIOHandler*)self)->jumpToNextImage();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToNextImage_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_IsBase(true);
        return vqimageiohandler->jumpToNextImage();
    } else {
        return ((VirtualQImageIOHandler*)self)->jumpToNextImage();
    }
}

bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return ((VirtualQImageIOHandler*)self)->jumpToImage(static_cast<int>(imageNumber));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToImage_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber) {
    auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_IsBase(true);
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return ((VirtualQImageIOHandler*)self)->jumpToImage(static_cast<int>(imageNumber));
    }
}

int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->loopCount();
    } else {
        return ((VirtualQImageIOHandler*)self)->loopCount();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_LoopCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_LoopCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_LoopCount_IsBase(true);
        return vqimageiohandler->loopCount();
    } else {
        return ((VirtualQImageIOHandler*)self)->loopCount();
    }
}

int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->imageCount();
    } else {
        return ((VirtualQImageIOHandler*)self)->imageCount();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_ImageCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_ImageCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_ImageCount_IsBase(true);
        return vqimageiohandler->imageCount();
    } else {
        return ((VirtualQImageIOHandler*)self)->imageCount();
    }
}

int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->nextImageDelay();
    } else {
        return ((VirtualQImageIOHandler*)self)->nextImageDelay();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_NextImageDelay_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_IsBase(true);
        return vqimageiohandler->nextImageDelay();
    } else {
        return ((VirtualQImageIOHandler*)self)->nextImageDelay();
    }
}

int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return self->currentImageNumber();
    } else {
        return ((VirtualQImageIOHandler*)self)->currentImageNumber();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageNumber_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_IsBase(true);
        return vqimageiohandler->currentImageNumber();
    } else {
        return ((VirtualQImageIOHandler*)self)->currentImageNumber();
    }
}

QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        return new QRect(self->currentImageRect());
    } else {
        return new QRect(((VirtualQImageIOHandler*)self)->currentImageRect());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot) {
    auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self));
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self) {
    auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
    if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_IsBase(true);
        return new QRect(vqimageiohandler->currentImageRect());
    } else {
        return new QRect(((VirtualQImageIOHandler*)self)->currentImageRect());
    }
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
    return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

void QImageIOHandler_Delete(QImageIOHandler* self) {
    delete self;
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
    QString _ret = QImageIOPlugin::tr(s);
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
    QString _ret = QImageIOPlugin::tr(s, c);
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
    QString _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
    delete self;
}
