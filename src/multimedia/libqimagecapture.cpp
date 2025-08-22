#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QImageCapture>
#include <QList>
#include <QMediaCaptureSession>
#include <QMediaMetaData>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <qimagecapture.h>
#include "libqimagecapture.h"
#include "libqimagecapture.hxx"

QImageCapture* QImageCapture_new() {
    return new VirtualQImageCapture();
}

QImageCapture* QImageCapture_new2(QObject* parent) {
    return new VirtualQImageCapture(parent);
}

QMetaObject* QImageCapture_MetaObject(const QImageCapture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QImageCapture_Metacast(QImageCapture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QImageCapture_Metacall(QImageCapture* self, int param1, int param2, void** param3) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQImageCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageCapture_OnMetacall(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Metacall_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageCapture_QBaseMetacall(QImageCapture* self, int param1, int param2, void** param3) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Metacall_IsBase(true);
        return vqimagecapture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQImageCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QImageCapture_Tr(const char* s) {
    QString _ret = QImageCapture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QImageCapture_IsAvailable(const QImageCapture* self) {
    return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self) {
    return self->captureSession();
}

int QImageCapture_Error(const QImageCapture* self) {
    return static_cast<int>(self->error());
}

libqt_string QImageCapture_ErrorString(const QImageCapture* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QImageCapture_IsReadyForCapture(const QImageCapture* self) {
    return self->isReadyForCapture();
}

int QImageCapture_FileFormat(const QImageCapture* self) {
    return static_cast<int>(self->fileFormat());
}

void QImageCapture_SetFileFormat(QImageCapture* self, int format) {
    self->setFileFormat(static_cast<QImageCapture::FileFormat>(format));
}

libqt_list /* of int */ QImageCapture_SupportedFormats() {
    QList<QImageCapture::FileFormat> _ret = QImageCapture::supportedFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QImageCapture_FileFormatName(int c) {
    QString _ret = QImageCapture::fileFormatName(static_cast<QImageCapture::FileFormat>(c));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QImageCapture_FileFormatDescription(int c) {
    QString _ret = QImageCapture::fileFormatDescription(static_cast<QImageCapture::FileFormat>(c));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QImageCapture_Resolution(const QImageCapture* self) {
    return new QSize(self->resolution());
}

void QImageCapture_SetResolution(QImageCapture* self, const QSize* resolution) {
    self->setResolution(*resolution);
}

void QImageCapture_SetResolution2(QImageCapture* self, int width, int height) {
    self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageCapture_Quality(const QImageCapture* self) {
    return static_cast<int>(self->quality());
}

void QImageCapture_SetQuality(QImageCapture* self, int quality) {
    self->setQuality(static_cast<QImageCapture::Quality>(quality));
}

QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self) {
    return new QMediaMetaData(self->metaData());
}

void QImageCapture_SetMetaData(QImageCapture* self, const QMediaMetaData* metaData) {
    self->setMetaData(*metaData);
}

void QImageCapture_AddMetaData(QImageCapture* self, const QMediaMetaData* metaData) {
    self->addMetaData(*metaData);
}

int QImageCapture_CaptureToFile(QImageCapture* self) {
    return self->captureToFile();
}

int QImageCapture_Capture(QImageCapture* self) {
    return self->capture();
}

void QImageCapture_ErrorChanged(QImageCapture* self) {
    self->errorChanged();
}

void QImageCapture_Connect_ErrorChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<int>(id), static_cast<QImageCapture::Error>(errorVal), errorString_QString);
}

void QImageCapture_Connect_ErrorOccurred(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, int, const char*) = reinterpret_cast<void (*)(QImageCapture*, int, int, const char*)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorOccurred, [self, slotFunc](int id, QImageCapture::Error errorVal, const QString& errorString) {
        int sigval1 = id;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(errorString_str);
    });
}

void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready) {
    self->readyForCaptureChanged(ready);
}

void QImageCapture_Connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, bool) = reinterpret_cast<void (*)(QImageCapture*, bool)>(slot);
    QImageCapture::connect(self, &QImageCapture::readyForCaptureChanged, [self, slotFunc](bool ready) {
        bool sigval1 = ready;
        slotFunc(self, sigval1);
    });
}

void QImageCapture_MetaDataChanged(QImageCapture* self) {
    self->metaDataChanged();
}

void QImageCapture_Connect_MetaDataChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_FileFormatChanged(QImageCapture* self) {
    self->fileFormatChanged();
}

void QImageCapture_Connect_FileFormatChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::fileFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_QualityChanged(QImageCapture* self) {
    self->qualityChanged();
}

void QImageCapture_Connect_QualityChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::qualityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ResolutionChanged(QImageCapture* self) {
    self->resolutionChanged();
}

void QImageCapture_Connect_ResolutionChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::resolutionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ImageExposed(QImageCapture* self, int id) {
    self->imageExposed(static_cast<int>(id));
}

void QImageCapture_Connect_ImageExposed(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int) = reinterpret_cast<void (*)(QImageCapture*, int)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageExposed, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QImageCapture_ImageCaptured(QImageCapture* self, int id, const QImage* preview) {
    self->imageCaptured(static_cast<int>(id), *preview);
}

void QImageCapture_Connect_ImageCaptured(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QImage*) = reinterpret_cast<void (*)(QImageCapture*, int, QImage*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageCaptured, [self, slotFunc](int id, const QImage& preview) {
        int sigval1 = id;
        const QImage& preview_ret = preview;
        // Cast returned reference into pointer
        QImage* sigval2 = const_cast<QImage*>(&preview_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, const QMediaMetaData* metaData) {
    self->imageMetadataAvailable(static_cast<int>(id), *metaData);
}

void QImageCapture_Connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QMediaMetaData*) = reinterpret_cast<void (*)(QImageCapture*, int, QMediaMetaData*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageMetadataAvailable, [self, slotFunc](int id, const QMediaMetaData& metaData) {
        int sigval1 = id;
        const QMediaMetaData& metaData_ret = metaData;
        // Cast returned reference into pointer
        QMediaMetaData* sigval2 = const_cast<QMediaMetaData*>(&metaData_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageAvailable(QImageCapture* self, int id, const QVideoFrame* frame) {
    self->imageAvailable(static_cast<int>(id), *frame);
}

void QImageCapture_Connect_ImageAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QVideoFrame*) = reinterpret_cast<void (*)(QImageCapture*, int, QVideoFrame*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageAvailable, [self, slotFunc](int id, const QVideoFrame& frame) {
        int sigval1 = id;
        const QVideoFrame& frame_ret = frame;
        // Cast returned reference into pointer
        QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageSaved(QImageCapture* self, int id, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QImageCapture_Connect_ImageSaved(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, const char*) = reinterpret_cast<void (*)(QImageCapture*, int, const char*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageSaved, [self, slotFunc](int id, const QString& fileName) {
        int sigval1 = id;
        const QString fileName_ret = fileName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray fileName_b = fileName_ret.toUtf8();
        const char* fileName_str = static_cast<const char*>(malloc(fileName_b.length() + 1));
        memcpy((void*)fileName_str, fileName_b.data(), fileName_b.length());
        ((char*)fileName_str)[fileName_b.length()] = '\0';
        const char* sigval2 = fileName_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(fileName_str);
    });
}

libqt_string QImageCapture_Tr2(const char* s, const char* c) {
    QString _ret = QImageCapture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QImageCapture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QImageCapture::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QImageCapture_CaptureToFile1(QImageCapture* self, const libqt_string location) {
    QString location_QString = QString::fromUtf8(location.data, location.len);
    return self->captureToFile(location_QString);
}

// Derived class handler implementation
bool QImageCapture_Event(QImageCapture* self, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->event(event);
    } else {
        return self->QImageCapture::event(event);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseEvent(QImageCapture* self, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Event_IsBase(true);
        return vqimagecapture->event(event);
    } else {
        return self->QImageCapture::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnEvent(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Event_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageCapture_EventFilter(QImageCapture* self, QObject* watched, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->eventFilter(watched, event);
    } else {
        return self->QImageCapture::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseEventFilter(QImageCapture* self, QObject* watched, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_EventFilter_IsBase(true);
        return vqimagecapture->eventFilter(watched, event);
    } else {
        return self->QImageCapture::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnEventFilter(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_EventFilter_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_TimerEvent(QImageCapture* self, QTimerEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->timerEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseTimerEvent(QImageCapture* self, QTimerEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_TimerEvent_IsBase(true);
        vqimagecapture->timerEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnTimerEvent(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_TimerEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_ChildEvent(QImageCapture* self, QChildEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->childEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseChildEvent(QImageCapture* self, QChildEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_ChildEvent_IsBase(true);
        vqimagecapture->childEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnChildEvent(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_ChildEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_CustomEvent(QImageCapture* self, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->customEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseCustomEvent(QImageCapture* self, QEvent* event) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_CustomEvent_IsBase(true);
        vqimagecapture->customEvent(event);
    } else {
        ((VirtualQImageCapture*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnCustomEvent(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_CustomEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_ConnectNotify(QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->connectNotify(*signal);
    } else {
        ((VirtualQImageCapture*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QImageCapture_QBaseConnectNotify(QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_ConnectNotify_IsBase(true);
        vqimagecapture->connectNotify(*signal);
    } else {
        ((VirtualQImageCapture*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnConnectNotify(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_ConnectNotify_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_DisconnectNotify(QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->disconnectNotify(*signal);
    } else {
        ((VirtualQImageCapture*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QImageCapture_QBaseDisconnectNotify(QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_DisconnectNotify_IsBase(true);
        vqimagecapture->disconnectNotify(*signal);
    } else {
        ((VirtualQImageCapture*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnDisconnectNotify(QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self);
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_DisconnectNotify_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QImageCapture_Sender(const QImageCapture* self) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->sender();
    } else {
        return ((VirtualQImageCapture*)self)->sender();
    }
}

// Base class handler implementation
QObject* QImageCapture_QBaseSender(const QImageCapture* self) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Sender_IsBase(true);
        return vqimagecapture->sender();
    } else {
        return ((VirtualQImageCapture*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnSender(const QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Sender_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageCapture_SenderSignalIndex(const QImageCapture* self) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->senderSignalIndex();
    } else {
        return ((VirtualQImageCapture*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QImageCapture_QBaseSenderSignalIndex(const QImageCapture* self) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_SenderSignalIndex_IsBase(true);
        return vqimagecapture->senderSignalIndex();
    } else {
        return ((VirtualQImageCapture*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnSenderSignalIndex(const QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageCapture_Receivers(const QImageCapture* self, const char* signal) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->receivers(signal);
    } else {
        return ((VirtualQImageCapture*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QImageCapture_QBaseReceivers(const QImageCapture* self, const char* signal) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Receivers_IsBase(true);
        return vqimagecapture->receivers(signal);
    } else {
        return ((VirtualQImageCapture*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnReceivers(const QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_Receivers_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageCapture_IsSignalConnected(const QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        return vqimagecapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQImageCapture*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseIsSignalConnected(const QImageCapture* self, const QMetaMethod* signal) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_IsSignalConnected_IsBase(true);
        return vqimagecapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQImageCapture*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnIsSignalConnected(const QImageCapture* self, intptr_t slot) {
    auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self));
    if (vqimagecapture && vqimagecapture->isVirtualQImageCapture) {
        vqimagecapture->setQImageCapture_IsSignalConnected_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_IsSignalConnected_Callback>(slot));
    }
}

void QImageCapture_Delete(QImageCapture* self) {
    delete self;
}
