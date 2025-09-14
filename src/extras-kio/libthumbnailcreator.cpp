#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailCreator
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailRequest
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ThumbnailResult
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <thumbnailcreator.h>
#include "libthumbnailcreator.h"
#include "libthumbnailcreator.hxx"

KIO__ThumbnailRequest* KIO__ThumbnailRequest_new(const QUrl* url, const QSize* targetSize, const libqt_string mimeType, double dpr, float sequenceIndex) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new KIO::ThumbnailRequest(*url, *targetSize, mimeType_QString, static_cast<qreal>(dpr), static_cast<float>(sequenceIndex));
}

KIO__ThumbnailRequest* KIO__ThumbnailRequest_new2(const KIO__ThumbnailRequest* param1) {
    return new KIO::ThumbnailRequest(*param1);
}

void KIO__ThumbnailRequest_OperatorAssign(KIO__ThumbnailRequest* self, const KIO__ThumbnailRequest* param1) {
    self->operator=(*param1);
}

QUrl* KIO__ThumbnailRequest_Url(const KIO__ThumbnailRequest* self) {
    return new QUrl(self->url());
}

QSize* KIO__ThumbnailRequest_TargetSize(const KIO__ThumbnailRequest* self) {
    return new QSize(self->targetSize());
}

libqt_string KIO__ThumbnailRequest_MimeType(const KIO__ThumbnailRequest* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double KIO__ThumbnailRequest_DevicePixelRatio(const KIO__ThumbnailRequest* self) {
    return static_cast<double>(self->devicePixelRatio());
}

float KIO__ThumbnailRequest_SequenceIndex(const KIO__ThumbnailRequest* self) {
    return self->sequenceIndex();
}

void KIO__ThumbnailRequest_Delete(KIO__ThumbnailRequest* self) {
    delete self;
}

KIO__ThumbnailResult* KIO__ThumbnailResult_new(const KIO__ThumbnailResult* param1) {
    return new KIO::ThumbnailResult(*param1);
}

void KIO__ThumbnailResult_OperatorAssign(KIO__ThumbnailResult* self, const KIO__ThumbnailResult* param1) {
    self->operator=(*param1);
}

QImage* KIO__ThumbnailResult_Image(const KIO__ThumbnailResult* self) {
    return new QImage(self->image());
}

bool KIO__ThumbnailResult_IsValid(const KIO__ThumbnailResult* self) {
    return self->isValid();
}

float KIO__ThumbnailResult_SequenceIndexWraparoundPoint(const KIO__ThumbnailResult* self) {
    return self->sequenceIndexWraparoundPoint();
}

void KIO__ThumbnailResult_SetSequenceIndexWraparoundPoint(KIO__ThumbnailResult* self, float wraparoundPoint) {
    self->setSequenceIndexWraparoundPoint(static_cast<float>(wraparoundPoint));
}

KIO__ThumbnailResult* KIO__ThumbnailResult_Pass(const QImage* image) {
    return new KIO::ThumbnailResult(KIO::ThumbnailResult::pass(*image));
}

KIO__ThumbnailResult* KIO__ThumbnailResult_Fail() {
    return new KIO::ThumbnailResult(KIO::ThumbnailResult::fail());
}

void KIO__ThumbnailResult_Delete(KIO__ThumbnailResult* self) {
    delete self;
}

KIO__ThumbnailCreator* KIO__ThumbnailCreator_new(QObject* parent, const libqt_list /* of QVariant* */ args) {
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new VirtualKIOThumbnailCreator(parent, args_QList);
}

QMetaObject* KIO__ThumbnailCreator_MetaObject(const KIO__ThumbnailCreator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__ThumbnailCreator_Metacast(KIO__ThumbnailCreator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__ThumbnailCreator_Metacall(KIO__ThumbnailCreator* self, int param1, int param2, void** param3) {
    auto* vkio__thumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkio__thumbnailcreator && vkio__thumbnailcreator->isVirtualKIOThumbnailCreator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__ThumbnailCreator_Tr(const char* s) {
    QString _ret = KIO::ThumbnailCreator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__ThumbnailResult* KIO__ThumbnailCreator_Create(KIO__ThumbnailCreator* self, const KIO__ThumbnailRequest* request) {
    auto* vkio__thumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkio__thumbnailcreator && vkio__thumbnailcreator->isVirtualKIOThumbnailCreator) {
        return new KIO::ThumbnailResult(vkio__thumbnailcreator->create(*request));
    } else {
        return new KIO::ThumbnailResult(((VirtualKIOThumbnailCreator*)self)->create(*request));
    }
}

libqt_string KIO__ThumbnailCreator_Tr2(const char* s, const char* c) {
    QString _ret = KIO::ThumbnailCreator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__ThumbnailCreator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::ThumbnailCreator::tr(s, c, static_cast<int>(n));
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
int KIO__ThumbnailCreator_QBaseMetacall(KIO__ThumbnailCreator* self, int param1, int param2, void** param3) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Metacall_IsBase(true);
        return vkiothumbnailcreator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::ThumbnailCreator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnMetacall(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Metacall_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
KIO__ThumbnailResult* KIO__ThumbnailCreator_QBaseCreate(KIO__ThumbnailCreator* self, const KIO__ThumbnailRequest* request) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Create_IsBase(true);
        return new KIO::ThumbnailResult(vkiothumbnailcreator->create(*request));
    } else {
        return new KIO::ThumbnailResult(((VirtualKIOThumbnailCreator*)self)->create(*request));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnCreate(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Create_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ThumbnailCreator_Event(KIO__ThumbnailCreator* self, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->event(event);
    } else {
        return self->KIO::ThumbnailCreator::event(event);
    }
}

// Base class handler implementation
bool KIO__ThumbnailCreator_QBaseEvent(KIO__ThumbnailCreator* self, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Event_IsBase(true);
        return vkiothumbnailcreator->event(event);
    } else {
        return self->KIO::ThumbnailCreator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnEvent(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Event_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ThumbnailCreator_EventFilter(KIO__ThumbnailCreator* self, QObject* watched, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->eventFilter(watched, event);
    } else {
        return self->KIO::ThumbnailCreator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__ThumbnailCreator_QBaseEventFilter(KIO__ThumbnailCreator* self, QObject* watched, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_EventFilter_IsBase(true);
        return vkiothumbnailcreator->eventFilter(watched, event);
    } else {
        return self->KIO::ThumbnailCreator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnEventFilter(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_EventFilter_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ThumbnailCreator_TimerEvent(KIO__ThumbnailCreator* self, QTimerEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->timerEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__ThumbnailCreator_QBaseTimerEvent(KIO__ThumbnailCreator* self, QTimerEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_TimerEvent_IsBase(true);
        vkiothumbnailcreator->timerEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnTimerEvent(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_TimerEvent_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ThumbnailCreator_ChildEvent(KIO__ThumbnailCreator* self, QChildEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->childEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__ThumbnailCreator_QBaseChildEvent(KIO__ThumbnailCreator* self, QChildEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_ChildEvent_IsBase(true);
        vkiothumbnailcreator->childEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnChildEvent(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_ChildEvent_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ThumbnailCreator_CustomEvent(KIO__ThumbnailCreator* self, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->customEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__ThumbnailCreator_QBaseCustomEvent(KIO__ThumbnailCreator* self, QEvent* event) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_CustomEvent_IsBase(true);
        vkiothumbnailcreator->customEvent(event);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnCustomEvent(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_CustomEvent_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ThumbnailCreator_ConnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->connectNotify(*signal);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ThumbnailCreator_QBaseConnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_ConnectNotify_IsBase(true);
        vkiothumbnailcreator->connectNotify(*signal);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnConnectNotify(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_ConnectNotify_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ThumbnailCreator_DisconnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->disconnectNotify(*signal);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ThumbnailCreator_QBaseDisconnectNotify(KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_DisconnectNotify_IsBase(true);
        vkiothumbnailcreator->disconnectNotify(*signal);
    } else {
        ((VirtualKIOThumbnailCreator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnDisconnectNotify(KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = dynamic_cast<VirtualKIOThumbnailCreator*>(self);
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__ThumbnailCreator_Sender(const KIO__ThumbnailCreator* self) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->sender();
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__ThumbnailCreator_QBaseSender(const KIO__ThumbnailCreator* self) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Sender_IsBase(true);
        return vkiothumbnailcreator->sender();
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnSender(const KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Sender_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ThumbnailCreator_SenderSignalIndex(const KIO__ThumbnailCreator* self) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->senderSignalIndex();
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__ThumbnailCreator_QBaseSenderSignalIndex(const KIO__ThumbnailCreator* self) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_SenderSignalIndex_IsBase(true);
        return vkiothumbnailcreator->senderSignalIndex();
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnSenderSignalIndex(const KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ThumbnailCreator_Receivers(const KIO__ThumbnailCreator* self, const char* signal) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->receivers(signal);
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__ThumbnailCreator_QBaseReceivers(const KIO__ThumbnailCreator* self, const char* signal) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Receivers_IsBase(true);
        return vkiothumbnailcreator->receivers(signal);
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnReceivers(const KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_Receivers_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ThumbnailCreator_IsSignalConnected(const KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        return vkiothumbnailcreator->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__ThumbnailCreator_QBaseIsSignalConnected(const KIO__ThumbnailCreator* self, const QMetaMethod* signal) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_IsSignalConnected_IsBase(true);
        return vkiothumbnailcreator->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOThumbnailCreator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ThumbnailCreator_OnIsSignalConnected(const KIO__ThumbnailCreator* self, intptr_t slot) {
    auto* vkiothumbnailcreator = const_cast<VirtualKIOThumbnailCreator*>(dynamic_cast<const VirtualKIOThumbnailCreator*>(self));
    if (vkiothumbnailcreator && vkiothumbnailcreator->isVirtualKIOThumbnailCreator) {
        vkiothumbnailcreator->setKIO__ThumbnailCreator_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOThumbnailCreator::KIO__ThumbnailCreator_IsSignalConnected_Callback>(slot));
    }
}

void KIO__ThumbnailCreator_Delete(KIO__ThumbnailCreator* self) {
    delete self;
}
