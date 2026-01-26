#include <KCompressionDevice>
#include <KFilterBase>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kcompressiondevice.h>
#include "libkcompressiondevice.h"
#include "libkcompressiondevice.hxx"

KCompressionDevice* KCompressionDevice_new(QIODevice* inputDevice, bool autoDeleteInputDevice, int typeVal) {
    return new VirtualKCompressionDevice(inputDevice, autoDeleteInputDevice, static_cast<KCompressionDevice::CompressionType>(typeVal));
}

KCompressionDevice* KCompressionDevice_new2(const libqt_string fileName, int typeVal) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKCompressionDevice(fileName_QString, static_cast<KCompressionDevice::CompressionType>(typeVal));
}

KCompressionDevice* KCompressionDevice_new3(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKCompressionDevice(fileName_QString);
}

QMetaObject* KCompressionDevice_MetaObject(const KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<const VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKCompressionDevice*)self)->metaObject();
    }
}

void* KCompressionDevice_Metacast(KCompressionDevice* self, const char* param1) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKCompressionDevice*)self)->qt_metacast(param1);
    }
}

int KCompressionDevice_Metacall(KCompressionDevice* self, int param1, int param2, void** param3) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCompressionDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int KCompressionDevice_CompressionType(const KCompressionDevice* self) {
    return static_cast<int>(self->compressionType());
}

bool KCompressionDevice_Open(KCompressionDevice* self, int mode) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return self->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKCompressionDevice*)self)->open(static_cast<QIODevice::OpenMode>(mode));
    }
}

void KCompressionDevice_Close(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        self->close();
    } else {
        ((VirtualKCompressionDevice*)self)->close();
    }
}

void KCompressionDevice_SetOrigFileName(KCompressionDevice* self, const libqt_string fileName) {
    QByteArray fileName_QByteArray(fileName.data, fileName.len);
    self->setOrigFileName(fileName_QByteArray);
}

void KCompressionDevice_SetSkipHeaders(KCompressionDevice* self) {
    self->setSkipHeaders();
}

bool KCompressionDevice_Seek(KCompressionDevice* self, long long param1) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return self->seek(static_cast<long long>(param1));
    } else {
        return ((VirtualKCompressionDevice*)self)->seek(static_cast<long long>(param1));
    }
}

bool KCompressionDevice_AtEnd(const KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<const VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return self->atEnd();
    } else {
        return ((VirtualKCompressionDevice*)self)->atEnd();
    }
}

KFilterBase* KCompressionDevice_FilterForCompressionType(int typeVal) {
    return KCompressionDevice::filterForCompressionType(static_cast<KCompressionDevice::CompressionType>(typeVal));
}

int KCompressionDevice_CompressionTypeForMimeType(const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return static_cast<int>(KCompressionDevice::compressionTypeForMimeType(mimetype_QString));
}

int KCompressionDevice_Error(const KCompressionDevice* self) {
    return static_cast<int>(self->error());
}

long long KCompressionDevice_ReadData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->readData(data, static_cast<qint64>(maxlen)));
    }
    return {};
}

long long KCompressionDevice_WriteData(KCompressionDevice* self, const char* data, long long lenVal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->writeData(data, static_cast<qint64>(lenVal)));
    }
    return {};
}

// Base class handler implementation
QMetaObject* KCompressionDevice_QBaseMetaObject(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_MetaObject_IsBase(true);
        return (QMetaObject*)vkcompressiondevice->metaObject();
    } else {
        return (QMetaObject*)self->KCompressionDevice::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetaObject(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_MetaObject_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KCompressionDevice_QBaseMetacast(KCompressionDevice* self, const char* param1) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Metacast_IsBase(true);
        return vkcompressiondevice->qt_metacast(param1);
    } else {
        return self->KCompressionDevice::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetacast(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Metacast_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KCompressionDevice_QBaseMetacall(KCompressionDevice* self, int param1, int param2, void** param3) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Metacall_IsBase(true);
        return vkcompressiondevice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCompressionDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetacall(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Metacall_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseOpen(KCompressionDevice* self, int mode) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Open_IsBase(true);
        return vkcompressiondevice->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KCompressionDevice::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnOpen(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Open_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Open_Callback>(slot));
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseClose(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Close_IsBase(true);
        vkcompressiondevice->close();
    } else {
        self->KCompressionDevice::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnClose(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Close_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Close_Callback>(slot));
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseSeek(KCompressionDevice* self, long long param1) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Seek_IsBase(true);
        return vkcompressiondevice->seek(static_cast<long long>(param1));
    } else {
        return self->KCompressionDevice::seek(static_cast<long long>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSeek(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Seek_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Seek_Callback>(slot));
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseAtEnd(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_AtEnd_IsBase(true);
        return vkcompressiondevice->atEnd();
    } else {
        return self->KCompressionDevice::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnAtEnd(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_AtEnd_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_AtEnd_Callback>(slot));
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseReadData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ReadData_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReadData(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ReadData_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ReadData_Callback>(slot));
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseWriteData(KCompressionDevice* self, const char* data, long long lenVal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WriteData_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWriteData(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WriteData_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_IsSequential(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->isSequential();
    } else {
        return self->KCompressionDevice::isSequential();
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseIsSequential(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_IsSequential_IsBase(true);
        return vkcompressiondevice->isSequential();
    } else {
        return self->KCompressionDevice::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnIsSequential(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_IsSequential_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_Pos(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->pos());
    } else {
        return static_cast<long long>(self->KCompressionDevice::pos());
    }
}

// Base class handler implementation
long long KCompressionDevice_QBasePos(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Pos_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->pos());
    } else {
        return static_cast<long long>(self->KCompressionDevice::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnPos(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Pos_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_Size(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->size());
    } else {
        return static_cast<long long>(self->KCompressionDevice::size());
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseSize(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Size_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->size());
    } else {
        return static_cast<long long>(self->KCompressionDevice::size());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSize(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Size_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_Reset(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->reset();
    } else {
        return self->KCompressionDevice::reset();
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseReset(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Reset_IsBase(true);
        return vkcompressiondevice->reset();
    } else {
        return self->KCompressionDevice::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReset(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Reset_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_BytesAvailable(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->bytesAvailable());
    } else {
        return static_cast<long long>(self->KCompressionDevice::bytesAvailable());
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseBytesAvailable(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_BytesAvailable_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->bytesAvailable());
    } else {
        return static_cast<long long>(self->KCompressionDevice::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnBytesAvailable(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_BytesAvailable_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_BytesToWrite(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->bytesToWrite());
    } else {
        return static_cast<long long>(self->KCompressionDevice::bytesToWrite());
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseBytesToWrite(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_BytesToWrite_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->bytesToWrite());
    } else {
        return static_cast<long long>(self->KCompressionDevice::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnBytesToWrite(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_BytesToWrite_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_CanReadLine(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->canReadLine();
    } else {
        return self->KCompressionDevice::canReadLine();
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseCanReadLine(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_CanReadLine_IsBase(true);
        return vkcompressiondevice->canReadLine();
    } else {
        return self->KCompressionDevice::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnCanReadLine(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_CanReadLine_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_WaitForReadyRead(KCompressionDevice* self, int msecs) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KCompressionDevice::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseWaitForReadyRead(KCompressionDevice* self, int msecs) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WaitForReadyRead_IsBase(true);
        return vkcompressiondevice->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KCompressionDevice::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWaitForReadyRead(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WaitForReadyRead_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_WaitForBytesWritten(KCompressionDevice* self, int msecs) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KCompressionDevice::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseWaitForBytesWritten(KCompressionDevice* self, int msecs) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WaitForBytesWritten_IsBase(true);
        return vkcompressiondevice->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KCompressionDevice::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWaitForBytesWritten(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_WaitForBytesWritten_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_ReadLineData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseReadLineData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ReadLineData_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReadLineData(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ReadLineData_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KCompressionDevice_SkipData(KCompressionDevice* self, long long maxSize) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return static_cast<long long>(vkcompressiondevice->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long KCompressionDevice_QBaseSkipData(KCompressionDevice* self, long long maxSize) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SkipData_IsBase(true);
        return static_cast<long long>(vkcompressiondevice->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKCompressionDevice*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSkipData(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SkipData_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_Event(KCompressionDevice* self, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->event(event);
    } else {
        return self->KCompressionDevice::event(event);
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseEvent(KCompressionDevice* self, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Event_IsBase(true);
        return vkcompressiondevice->event(event);
    } else {
        return self->KCompressionDevice::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnEvent(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Event_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_EventFilter(KCompressionDevice* self, QObject* watched, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->eventFilter(watched, event);
    } else {
        return self->KCompressionDevice::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseEventFilter(KCompressionDevice* self, QObject* watched, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_EventFilter_IsBase(true);
        return vkcompressiondevice->eventFilter(watched, event);
    } else {
        return self->KCompressionDevice::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnEventFilter(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_EventFilter_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_TimerEvent(KCompressionDevice* self, QTimerEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->timerEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseTimerEvent(KCompressionDevice* self, QTimerEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_TimerEvent_IsBase(true);
        vkcompressiondevice->timerEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnTimerEvent(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_TimerEvent_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_ChildEvent(KCompressionDevice* self, QChildEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->childEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseChildEvent(KCompressionDevice* self, QChildEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ChildEvent_IsBase(true);
        vkcompressiondevice->childEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnChildEvent(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ChildEvent_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_CustomEvent(KCompressionDevice* self, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->customEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseCustomEvent(KCompressionDevice* self, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_CustomEvent_IsBase(true);
        vkcompressiondevice->customEvent(event);
    } else {
        ((VirtualKCompressionDevice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnCustomEvent(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_CustomEvent_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_ConnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->connectNotify(*signal);
    } else {
        ((VirtualKCompressionDevice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseConnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ConnectNotify_IsBase(true);
        vkcompressiondevice->connectNotify(*signal);
    } else {
        ((VirtualKCompressionDevice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnConnectNotify(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_ConnectNotify_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_DisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->disconnectNotify(*signal);
    } else {
        ((VirtualKCompressionDevice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseDisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_DisconnectNotify_IsBase(true);
        vkcompressiondevice->disconnectNotify(*signal);
    } else {
        ((VirtualKCompressionDevice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnDisconnectNotify(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_DisconnectNotify_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KFilterBase* KCompressionDevice_FilterBase(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->filterBase();
    } else {
        return ((VirtualKCompressionDevice*)self)->filterBase();
    }
}

// Base class handler implementation
KFilterBase* KCompressionDevice_QBaseFilterBase(KCompressionDevice* self) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_FilterBase_IsBase(true);
        return vkcompressiondevice->filterBase();
    } else {
        return ((VirtualKCompressionDevice*)self)->filterBase();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnFilterBase(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_FilterBase_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_FilterBase_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_SetOpenMode(KCompressionDevice* self, int openMode) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKCompressionDevice*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseSetOpenMode(KCompressionDevice* self, int openMode) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SetOpenMode_IsBase(true);
        vkcompressiondevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKCompressionDevice*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSetOpenMode(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SetOpenMode_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompressionDevice_SetErrorString(KCompressionDevice* self, const libqt_string errorString) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setErrorString(errorString_QString);
    } else {
        ((VirtualKCompressionDevice*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void KCompressionDevice_QBaseSetErrorString(KCompressionDevice* self, const libqt_string errorString) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SetErrorString_IsBase(true);
        vkcompressiondevice->setErrorString(errorString_QString);
    } else {
        ((VirtualKCompressionDevice*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSetErrorString(KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SetErrorString_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCompressionDevice_Sender(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->sender();
    } else {
        return ((VirtualKCompressionDevice*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCompressionDevice_QBaseSender(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Sender_IsBase(true);
        return vkcompressiondevice->sender();
    } else {
        return ((VirtualKCompressionDevice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSender(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Sender_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompressionDevice_SenderSignalIndex(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->senderSignalIndex();
    } else {
        return ((VirtualKCompressionDevice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCompressionDevice_QBaseSenderSignalIndex(const KCompressionDevice* self) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SenderSignalIndex_IsBase(true);
        return vkcompressiondevice->senderSignalIndex();
    } else {
        return ((VirtualKCompressionDevice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSenderSignalIndex(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompressionDevice_Receivers(const KCompressionDevice* self, const char* signal) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->receivers(signal);
    } else {
        return ((VirtualKCompressionDevice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCompressionDevice_QBaseReceivers(const KCompressionDevice* self, const char* signal) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Receivers_IsBase(true);
        return vkcompressiondevice->receivers(signal);
    } else {
        return ((VirtualKCompressionDevice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReceivers(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_Receivers_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompressionDevice_IsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        return vkcompressiondevice->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompressionDevice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCompressionDevice_QBaseIsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_IsSignalConnected_IsBase(true);
        return vkcompressiondevice->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompressionDevice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnIsSignalConnected(const KCompressionDevice* self, intptr_t slot) {
    auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self));
    if (vkcompressiondevice && vkcompressiondevice->isVirtualKCompressionDevice) {
        vkcompressiondevice->setKCompressionDevice_IsSignalConnected_Callback(reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_IsSignalConnected_Callback>(slot));
    }
}

void KCompressionDevice_Delete(KCompressionDevice* self) {
    delete self;
}
