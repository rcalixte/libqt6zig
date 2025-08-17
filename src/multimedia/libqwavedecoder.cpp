#include <QAudioFormat>
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
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "libqwavedecoder.h"
#include "libqwavedecoder.hxx"

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
    return new VirtualQWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, const QAudioFormat* format) {
    return new VirtualQWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
    return new VirtualQWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, const QAudioFormat* format, QObject* parent) {
    return new VirtualQWaveDecoder(device, *format, parent);
}

QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWaveDecoder_Metacall(QWaveDecoder* self, int param1, int param2, void** param3) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWaveDecoder*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWaveDecoder_OnMetacall(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Metacall_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWaveDecoder_QBaseMetacall(QWaveDecoder* self, int param1, int param2, void** param3) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Metacall_IsBase(true);
        return vqwavedecoder->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWaveDecoder*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWaveDecoder_Tr(const char* s) {
    QString _ret = QWaveDecoder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self) {
    return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self) {
    return self->getDevice();
}

int QWaveDecoder_Duration(const QWaveDecoder* self) {
    return self->duration();
}

long long QWaveDecoder_HeaderLength() {
    return static_cast<long long>(QWaveDecoder::headerLength());
}

void QWaveDecoder_FormatKnown(QWaveDecoder* self) {
    self->formatKnown();
}

void QWaveDecoder_Connect_FormatKnown(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self, &QWaveDecoder::formatKnown, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWaveDecoder_ParsingError(QWaveDecoder* self) {
    self->parsingError();
}

void QWaveDecoder_Connect_ParsingError(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self, &QWaveDecoder::parsingError, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWaveDecoder_Tr2(const char* s, const char* c) {
    QString _ret = QWaveDecoder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QWaveDecoder_Open(QWaveDecoder* self, int mode) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->QWaveDecoder::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseOpen(QWaveDecoder* self, int mode) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Open_IsBase(true);
        return vqwavedecoder->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->QWaveDecoder::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnOpen(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Open_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_Close(QWaveDecoder* self) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->close();
    } else {
        self->QWaveDecoder::close();
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseClose(QWaveDecoder* self) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Close_IsBase(true);
        vqwavedecoder->close();
    } else {
        self->QWaveDecoder::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnClose(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Close_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->seek(static_cast<qint64>(pos));
    } else {
        return self->QWaveDecoder::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseSeek(QWaveDecoder* self, long long pos) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Seek_IsBase(true);
        return vqwavedecoder->seek(static_cast<qint64>(pos));
    } else {
        return self->QWaveDecoder::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSeek(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Seek_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_Pos(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->pos());
    } else {
        return static_cast<long long>(self->QWaveDecoder::pos());
    }
}

// Base class handler implementation
long long QWaveDecoder_QBasePos(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Pos_IsBase(true);
        return static_cast<long long>(vqwavedecoder->pos());
    } else {
        return static_cast<long long>(self->QWaveDecoder::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnPos(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Pos_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_Size(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->size());
    } else {
        return static_cast<long long>(self->QWaveDecoder::size());
    }
}

// Base class handler implementation
long long QWaveDecoder_QBaseSize(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Size_IsBase(true);
        return static_cast<long long>(vqwavedecoder->size());
    } else {
        return static_cast<long long>(self->QWaveDecoder::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSize(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Size_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_IsSequential(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->isSequential();
    } else {
        return self->QWaveDecoder::isSequential();
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseIsSequential(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_IsSequential_IsBase(true);
        return vqwavedecoder->isSequential();
    } else {
        return self->QWaveDecoder::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnIsSequential(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_IsSequential_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->bytesAvailable());
    } else {
        return static_cast<long long>(self->QWaveDecoder::bytesAvailable());
    }
}

// Base class handler implementation
long long QWaveDecoder_QBaseBytesAvailable(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqwavedecoder->bytesAvailable());
    } else {
        return static_cast<long long>(self->QWaveDecoder::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnBytesAvailable(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_BytesAvailable_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_AtEnd(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->atEnd();
    } else {
        return self->QWaveDecoder::atEnd();
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseAtEnd(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_AtEnd_IsBase(true);
        return vqwavedecoder->atEnd();
    } else {
        return self->QWaveDecoder::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnAtEnd(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_AtEnd_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_Reset(QWaveDecoder* self) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->reset();
    } else {
        return self->QWaveDecoder::reset();
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseReset(QWaveDecoder* self) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Reset_IsBase(true);
        return vqwavedecoder->reset();
    } else {
        return self->QWaveDecoder::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnReset(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Reset_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_BytesToWrite(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->bytesToWrite());
    } else {
        return static_cast<long long>(self->QWaveDecoder::bytesToWrite());
    }
}

// Base class handler implementation
long long QWaveDecoder_QBaseBytesToWrite(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqwavedecoder->bytesToWrite());
    } else {
        return static_cast<long long>(self->QWaveDecoder::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnBytesToWrite(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_BytesToWrite_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_CanReadLine(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->canReadLine();
    } else {
        return self->QWaveDecoder::canReadLine();
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseCanReadLine(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_CanReadLine_IsBase(true);
        return vqwavedecoder->canReadLine();
    } else {
        return self->QWaveDecoder::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnCanReadLine(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_CanReadLine_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_WaitForReadyRead(QWaveDecoder* self, int msecs) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseWaitForReadyRead(QWaveDecoder* self, int msecs) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_WaitForReadyRead_IsBase(true);
        return vqwavedecoder->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnWaitForReadyRead(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_WaitForReadyRead_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_WaitForBytesWritten(QWaveDecoder* self, int msecs) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseWaitForBytesWritten(QWaveDecoder* self, int msecs) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_WaitForBytesWritten_IsBase(true);
        return vqwavedecoder->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnWaitForBytesWritten(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_ReadLineData(QWaveDecoder* self, char* data, long long maxlen) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQWaveDecoder*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QWaveDecoder_QBaseReadLineData(QWaveDecoder* self, char* data, long long maxlen) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ReadLineData_IsBase(true);
        return static_cast<long long>(vqwavedecoder->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQWaveDecoder*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnReadLineData(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ReadLineData_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QWaveDecoder_SkipData(QWaveDecoder* self, long long maxSize) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return static_cast<long long>(vqwavedecoder->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQWaveDecoder*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QWaveDecoder_QBaseSkipData(QWaveDecoder* self, long long maxSize) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SkipData_IsBase(true);
        return static_cast<long long>(vqwavedecoder->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQWaveDecoder*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSkipData(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SkipData_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_Event(QWaveDecoder* self, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->event(event);
    } else {
        return self->QWaveDecoder::event(event);
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseEvent(QWaveDecoder* self, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Event_IsBase(true);
        return vqwavedecoder->event(event);
    } else {
        return self->QWaveDecoder::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnEvent(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Event_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_EventFilter(QWaveDecoder* self, QObject* watched, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->eventFilter(watched, event);
    } else {
        return self->QWaveDecoder::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseEventFilter(QWaveDecoder* self, QObject* watched, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_EventFilter_IsBase(true);
        return vqwavedecoder->eventFilter(watched, event);
    } else {
        return self->QWaveDecoder::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnEventFilter(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_EventFilter_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_TimerEvent(QWaveDecoder* self, QTimerEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->timerEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseTimerEvent(QWaveDecoder* self, QTimerEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_TimerEvent_IsBase(true);
        vqwavedecoder->timerEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnTimerEvent(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_TimerEvent_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_ChildEvent(QWaveDecoder* self, QChildEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->childEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseChildEvent(QWaveDecoder* self, QChildEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ChildEvent_IsBase(true);
        vqwavedecoder->childEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnChildEvent(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ChildEvent_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_CustomEvent(QWaveDecoder* self, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->customEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseCustomEvent(QWaveDecoder* self, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_CustomEvent_IsBase(true);
        vqwavedecoder->customEvent(event);
    } else {
        ((VirtualQWaveDecoder*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnCustomEvent(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_CustomEvent_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_ConnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->connectNotify(*signal);
    } else {
        ((VirtualQWaveDecoder*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseConnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ConnectNotify_IsBase(true);
        vqwavedecoder->connectNotify(*signal);
    } else {
        ((VirtualQWaveDecoder*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnConnectNotify(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_ConnectNotify_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_DisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->disconnectNotify(*signal);
    } else {
        ((VirtualQWaveDecoder*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseDisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_DisconnectNotify_IsBase(true);
        vqwavedecoder->disconnectNotify(*signal);
    } else {
        ((VirtualQWaveDecoder*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnDisconnectNotify(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_DisconnectNotify_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_SetOpenMode(QWaveDecoder* self, int openMode) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQWaveDecoder*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseSetOpenMode(QWaveDecoder* self, int openMode) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SetOpenMode_IsBase(true);
        vqwavedecoder->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQWaveDecoder*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSetOpenMode(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SetOpenMode_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QWaveDecoder_SetErrorString(QWaveDecoder* self, const libqt_string errorString) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setErrorString(errorString_QString);
    } else {
        ((VirtualQWaveDecoder*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QWaveDecoder_QBaseSetErrorString(QWaveDecoder* self, const libqt_string errorString) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SetErrorString_IsBase(true);
        vqwavedecoder->setErrorString(errorString_QString);
    } else {
        ((VirtualQWaveDecoder*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSetErrorString(QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SetErrorString_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWaveDecoder_Sender(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->sender();
    } else {
        return ((VirtualQWaveDecoder*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWaveDecoder_QBaseSender(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Sender_IsBase(true);
        return vqwavedecoder->sender();
    } else {
        return ((VirtualQWaveDecoder*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSender(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Sender_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWaveDecoder_SenderSignalIndex(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->senderSignalIndex();
    } else {
        return ((VirtualQWaveDecoder*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWaveDecoder_QBaseSenderSignalIndex(const QWaveDecoder* self) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SenderSignalIndex_IsBase(true);
        return vqwavedecoder->senderSignalIndex();
    } else {
        return ((VirtualQWaveDecoder*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSenderSignalIndex(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWaveDecoder_Receivers(const QWaveDecoder* self, const char* signal) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->receivers(signal);
    } else {
        return ((VirtualQWaveDecoder*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWaveDecoder_QBaseReceivers(const QWaveDecoder* self, const char* signal) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Receivers_IsBase(true);
        return vqwavedecoder->receivers(signal);
    } else {
        return ((VirtualQWaveDecoder*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnReceivers(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_Receivers_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWaveDecoder_IsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        return vqwavedecoder->isSignalConnected(*signal);
    } else {
        return ((VirtualQWaveDecoder*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWaveDecoder_QBaseIsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_IsSignalConnected_IsBase(true);
        return vqwavedecoder->isSignalConnected(*signal);
    } else {
        return ((VirtualQWaveDecoder*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnIsSignalConnected(const QWaveDecoder* self, intptr_t slot) {
    auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self));
    if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
        vqwavedecoder->setQWaveDecoder_IsSignalConnected_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_IsSignalConnected_Callback>(slot));
    }
}

void QWaveDecoder_Delete(QWaveDecoder* self) {
    delete self;
}
