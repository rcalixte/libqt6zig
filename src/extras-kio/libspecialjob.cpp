#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MetaData
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SpecialJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob
#include <KJob>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <specialjob.h>
#include "libspecialjob.h"
#include "libspecialjob.hxx"

KIO__SpecialJob* KIO__SpecialJob_new(const QUrl* url) {
    return new VirtualKIOSpecialJob(*url);
}

KIO__SpecialJob* KIO__SpecialJob_new2(const QUrl* url, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new VirtualKIOSpecialJob(*url, data_QByteArray);
}

QMetaObject* KIO__SpecialJob_MetaObject(const KIO__SpecialJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__SpecialJob_Metacast(KIO__SpecialJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__SpecialJob_Metacall(KIO__SpecialJob* self, int param1, int param2, void** param3) {
    auto* vkio__specialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkio__specialjob && vkio__specialjob->isVirtualKIOSpecialJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOSpecialJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__SpecialJob_Tr(const char* s) {
    QString _ret = KIO::SpecialJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__SpecialJob_SetArguments(KIO__SpecialJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setArguments(data_QByteArray);
}

libqt_string KIO__SpecialJob_Arguments(const KIO__SpecialJob* self) {
    QByteArray _qb = self->arguments();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SpecialJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::SpecialJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SpecialJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::SpecialJob::tr(s, c, static_cast<int>(n));
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
int KIO__SpecialJob_QBaseMetacall(KIO__SpecialJob* self, int param1, int param2, void** param3) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Metacall_IsBase(true);
        return vkiospecialjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::SpecialJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnMetacall(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Metacall_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_DoResume(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->doResume();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseDoResume(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoResume_IsBase(true);
        return vkiospecialjob->doResume();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoResume(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoResume_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotRedirection(KIO__SpecialJob* self, const QUrl* url) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotRedirection(*url);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotRedirection(*url);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotRedirection(KIO__SpecialJob* self, const QUrl* url) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotRedirection_IsBase(true);
        vkiospecialjob->slotRedirection(*url);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotRedirection(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotRedirection(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotRedirection_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotRedirection_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotFinished(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotFinished();
    } else {
        ((VirtualKIOSpecialJob*)self)->slotFinished();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotFinished(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotFinished_IsBase(true);
        vkiospecialjob->slotFinished();
    } else {
        ((VirtualKIOSpecialJob*)self)->slotFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotFinished(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotFinished_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotData(KIO__SpecialJob* self, const libqt_string data) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotData(data_QByteArray);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotData(data_QByteArray);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotData(KIO__SpecialJob* self, const libqt_string data) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotData_IsBase(true);
        vkiospecialjob->slotData(data_QByteArray);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotData(data_QByteArray);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotData(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotData_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotData_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotDataReq(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotDataReq();
    } else {
        ((VirtualKIOSpecialJob*)self)->slotDataReq();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotDataReq(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotDataReq_IsBase(true);
        vkiospecialjob->slotDataReq();
    } else {
        ((VirtualKIOSpecialJob*)self)->slotDataReq();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotDataReq(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotDataReq_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotDataReq_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotMimetype(mimetype_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotMimetype(mimetype_QString);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotMimetype_IsBase(true);
        vkiospecialjob->slotMimetype(mimetype_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotMimetype(mimetype_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotMimetype(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotMimetype_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotMimetype_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_DoSuspend(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->doSuspend();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseDoSuspend(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoSuspend_IsBase(true);
        return vkiospecialjob->doSuspend();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoSuspend(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_DoKill(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->doKill();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseDoKill(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoKill_IsBase(true);
        return vkiospecialjob->doKill();
    } else {
        return ((VirtualKIOSpecialJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoKill(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DoKill_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_PutOnHold(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->putOnHold();
    } else {
        self->KIO::SpecialJob::putOnHold();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBasePutOnHold(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_PutOnHold_IsBase(true);
        vkiospecialjob->putOnHold();
    } else {
        self->KIO::SpecialJob::putOnHold();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnPutOnHold(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_PutOnHold_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_PutOnHold_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotWarning(KIO__SpecialJob* self, const libqt_string param1) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotWarning(param1_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotWarning(param1_QString);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotWarning(KIO__SpecialJob* self, const libqt_string param1) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotWarning_IsBase(true);
        vkiospecialjob->slotWarning(param1_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotWarning(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotWarning(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotWarning_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotWarning_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotMetaData(*_metaData);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotMetaData(*_metaData);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotMetaData_IsBase(true);
        vkiospecialjob->slotMetaData(*_metaData);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotMetaData(*_metaData);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotMetaData(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotMetaData_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotMetaData_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_Start(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->start();
    } else {
        self->KIO::SpecialJob::start();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseStart(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Start_IsBase(true);
        vkiospecialjob->start();
    } else {
        self->KIO::SpecialJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnStart(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Start_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__SpecialJob_ErrorString(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        QString _ret = vkiospecialjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::SpecialJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KIO__SpecialJob_QBaseErrorString(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ErrorString_IsBase(true);
        QString _ret = vkiospecialjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::SpecialJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnErrorString(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ErrorString_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_AddSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->addSubjob(job);
    } else {
        return ((VirtualKIOSpecialJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseAddSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_AddSubjob_IsBase(true);
        return vkiospecialjob->addSubjob(job);
    } else {
        return ((VirtualKIOSpecialJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnAddSubjob(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_AddSubjob_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_RemoveSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->removeSubjob(job);
    } else {
        return ((VirtualKIOSpecialJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseRemoveSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_RemoveSubjob_IsBase(true);
        return vkiospecialjob->removeSubjob(job);
    } else {
        return ((VirtualKIOSpecialJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnRemoveSubjob(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotResult(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotResult(job);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotResult(job);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotResult(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotResult_IsBase(true);
        vkiospecialjob->slotResult(job);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotResult(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotResult(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotResult_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotInfoMessage_IsBase(true);
        vkiospecialjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotInfoMessage(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_Event(KIO__SpecialJob* self, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->event(event);
    } else {
        return self->KIO::SpecialJob::event(event);
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseEvent(KIO__SpecialJob* self, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Event_IsBase(true);
        return vkiospecialjob->event(event);
    } else {
        return self->KIO::SpecialJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEvent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Event_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_EventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->eventFilter(watched, event);
    } else {
        return self->KIO::SpecialJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseEventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EventFilter_IsBase(true);
        return vkiospecialjob->eventFilter(watched, event);
    } else {
        return self->KIO::SpecialJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEventFilter(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EventFilter_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_TimerEvent(KIO__SpecialJob* self, QTimerEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->timerEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseTimerEvent(KIO__SpecialJob* self, QTimerEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_TimerEvent_IsBase(true);
        vkiospecialjob->timerEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnTimerEvent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_ChildEvent(KIO__SpecialJob* self, QChildEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->childEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseChildEvent(KIO__SpecialJob* self, QChildEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ChildEvent_IsBase(true);
        vkiospecialjob->childEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnChildEvent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_CustomEvent(KIO__SpecialJob* self, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->customEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseCustomEvent(KIO__SpecialJob* self, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_CustomEvent_IsBase(true);
        vkiospecialjob->customEvent(event);
    } else {
        ((VirtualKIOSpecialJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnCustomEvent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_ConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->connectNotify(*signal);
    } else {
        ((VirtualKIOSpecialJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ConnectNotify_IsBase(true);
        vkiospecialjob->connectNotify(*signal);
    } else {
        ((VirtualKIOSpecialJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnConnectNotify(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_DisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOSpecialJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseDisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DisconnectNotify_IsBase(true);
        vkiospecialjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOSpecialJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDisconnectNotify(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_HasSubjobs(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->hasSubjobs();
    } else {
        return ((VirtualKIOSpecialJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseHasSubjobs(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_HasSubjobs_IsBase(true);
        return vkiospecialjob->hasSubjobs();
    } else {
        return ((VirtualKIOSpecialJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnHasSubjobs(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__SpecialJob_Subjobs(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        const QList<KJob*>& _ret = vkiospecialjob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOSpecialJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of KJob* */ KIO__SpecialJob_QBaseSubjobs(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkiospecialjob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOSpecialJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSubjobs(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Subjobs_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_ClearSubjobs(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->clearSubjobs();
    } else {
        ((VirtualKIOSpecialJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseClearSubjobs(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ClearSubjobs_IsBase(true);
        vkiospecialjob->clearSubjobs();
    } else {
        ((VirtualKIOSpecialJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnClearSubjobs(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetCapabilities(KIO__SpecialJob* self, int capabilities) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOSpecialJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetCapabilities(KIO__SpecialJob* self, int capabilities) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetCapabilities_IsBase(true);
        vkiospecialjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOSpecialJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetCapabilities(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_IsFinished(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->isFinished();
    } else {
        return ((VirtualKIOSpecialJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseIsFinished(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_IsFinished_IsBase(true);
        return vkiospecialjob->isFinished();
    } else {
        return ((VirtualKIOSpecialJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnIsFinished(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_IsFinished_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetError(KIO__SpecialJob* self, int errorCode) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOSpecialJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetError(KIO__SpecialJob* self, int errorCode) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetError_IsBase(true);
        vkiospecialjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOSpecialJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetError(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetError_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetErrorText(KIO__SpecialJob* self, const libqt_string errorText) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetErrorText(KIO__SpecialJob* self, const libqt_string errorText) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetErrorText_IsBase(true);
        vkiospecialjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOSpecialJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetErrorText(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetProcessedAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOSpecialJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetProcessedAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetProcessedAmount_IsBase(true);
        vkiospecialjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOSpecialJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetProcessedAmount(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetTotalAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOSpecialJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetTotalAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetTotalAmount_IsBase(true);
        vkiospecialjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOSpecialJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetTotalAmount(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetProgressUnit(KIO__SpecialJob* self, int unit) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOSpecialJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetProgressUnit(KIO__SpecialJob* self, int unit) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetProgressUnit_IsBase(true);
        vkiospecialjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOSpecialJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetProgressUnit(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_SetPercent(KIO__SpecialJob* self, unsigned long percentage) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOSpecialJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseSetPercent(KIO__SpecialJob* self, unsigned long percentage) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetPercent_IsBase(true);
        vkiospecialjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOSpecialJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSetPercent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SetPercent_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_EmitResult(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->emitResult();
    } else {
        ((VirtualKIOSpecialJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseEmitResult(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitResult_IsBase(true);
        vkiospecialjob->emitResult();
    } else {
        ((VirtualKIOSpecialJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEmitResult(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitResult_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_EmitPercent(KIO__SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOSpecialJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseEmitPercent(KIO__SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitPercent_IsBase(true);
        vkiospecialjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOSpecialJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEmitPercent(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_EmitSpeed(KIO__SpecialJob* self, unsigned long speed) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOSpecialJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseEmitSpeed(KIO__SpecialJob* self, unsigned long speed) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitSpeed_IsBase(true);
        vkiospecialjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOSpecialJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEmitSpeed(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SpecialJob_StartElapsedTimer(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->startElapsedTimer();
    } else {
        ((VirtualKIOSpecialJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__SpecialJob_QBaseStartElapsedTimer(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_StartElapsedTimer_IsBase(true);
        vkiospecialjob->startElapsedTimer();
    } else {
        ((VirtualKIOSpecialJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnStartElapsedTimer(KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__SpecialJob_Sender(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->sender();
    } else {
        return ((VirtualKIOSpecialJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__SpecialJob_QBaseSender(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Sender_IsBase(true);
        return vkiospecialjob->sender();
    } else {
        return ((VirtualKIOSpecialJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSender(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Sender_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SpecialJob_SenderSignalIndex(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->senderSignalIndex();
    } else {
        return ((VirtualKIOSpecialJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__SpecialJob_QBaseSenderSignalIndex(const KIO__SpecialJob* self) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SenderSignalIndex_IsBase(true);
        return vkiospecialjob->senderSignalIndex();
    } else {
        return ((VirtualKIOSpecialJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSenderSignalIndex(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SpecialJob_Receivers(const KIO__SpecialJob* self, const char* signal) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->receivers(signal);
    } else {
        return ((VirtualKIOSpecialJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__SpecialJob_QBaseReceivers(const KIO__SpecialJob* self, const char* signal) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Receivers_IsBase(true);
        return vkiospecialjob->receivers(signal);
    } else {
        return ((VirtualKIOSpecialJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnReceivers(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_Receivers_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SpecialJob_IsSignalConnected(const KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        return vkiospecialjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOSpecialJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__SpecialJob_QBaseIsSignalConnected(const KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_IsSignalConnected_IsBase(true);
        return vkiospecialjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOSpecialJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnIsSignalConnected(const KIO__SpecialJob* self, intptr_t slot) {
    auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self));
    if (vkiospecialjob && vkiospecialjob->isVirtualKIOSpecialJob) {
        vkiospecialjob->setKIO__SpecialJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__SpecialJob_Delete(KIO__SpecialJob* self) {
    delete self;
}
