#include <KCompositeJob>
#include <KIO/Job>
#include <KIO/MetaData>
#include <KIO/SimpleJob>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__SpecialJob_Tr(const char* s) {
    auto _ret = KIO::SpecialJob::tr(s);
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KIO__SpecialJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::SpecialJob::tr(s, c);
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
    auto _ret = KIO::SpecialJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__SpecialJob_SuperMetaObject(const KIO__SpecialJob* self) {
    return (QMetaObject*)self->KIO::SpecialJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnMetaObject(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self)))
        vkiospecialjob->kio__specialjob_metaobject_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__SpecialJob_SuperMetacast(KIO__SpecialJob* self, const char* param1) {
    return self->KIO::SpecialJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnMetacast(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_metacast_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__SpecialJob_SuperMetacall(KIO__SpecialJob* self, int param1, int param2, void** param3) {
    return self->KIO::SpecialJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnMetacall(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_metacall_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_DoResume(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        return vkiospecialjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SpecialJob_SuperDoResume(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        return vkiospecialjob->KIO::SpecialJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoResume(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_doresume_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotRedirection(KIO__SpecialJob* self, const QUrl* url) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotRedirection(*url);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotRedirection called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotRedirection(KIO__SpecialJob* self, const QUrl* url) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotRedirection(*url);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotRedirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotRedirection(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotredirection_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotRedirection_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotFinished(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotFinished();
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotFinished called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotFinished(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotFinished();
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotFinished called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotFinished(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotfinished_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotFinished_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotData(KIO__SpecialJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotData(data_QByteArray);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotData called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotData(KIO__SpecialJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotData(data_QByteArray);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotData(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotdata_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotData_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotDataReq(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotDataReq();
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotDataReq called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotDataReq(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotDataReq();
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotDataReq called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotDataReq(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotdatareq_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotDataReq_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotMimetype(mimetype_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotMimetype called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotMimetype(mimetype_QString);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotMimetype called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotMimetype(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotmimetype_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotMimetype_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_DoSuspend(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        return vkiospecialjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SpecialJob_SuperDoSuspend(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        return vkiospecialjob->KIO::SpecialJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoSuspend(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_dosuspend_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_DoKill(KIO__SpecialJob* self) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        return vkiospecialjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SpecialJob_SuperDoKill(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        return vkiospecialjob->KIO::SpecialJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDoKill(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_dokill_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_PutOnHold(KIO__SpecialJob* self) {
    self->putOnHold();
}

// Base class handler implementation
void KIO__SpecialJob_SuperPutOnHold(KIO__SpecialJob* self) {
    self->KIO::SpecialJob::putOnHold();
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnPutOnHold(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_putonhold_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_PutOnHold_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotWarning(KIO__SpecialJob* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotWarning(param1_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotWarning called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotWarning(KIO__SpecialJob* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotWarning(param1_QString);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotWarning called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotWarning(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotwarning_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotWarning_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotMetaData(*_metaData);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotMetaData called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotMetaData(*_metaData);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotMetaData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotMetaData(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotmetadata_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotMetaData_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_Start(KIO__SpecialJob* self) {
    self->start();
}

// Base class handler implementation
void KIO__SpecialJob_SuperStart(KIO__SpecialJob* self) {
    self->KIO::SpecialJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnStart(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_start_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Start_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__SpecialJob_ErrorString(const KIO__SpecialJob* self) {
    auto _ret = self->errorString();
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
libqt_string KIO__SpecialJob_SuperErrorString(const KIO__SpecialJob* self) {
    auto _ret = self->KIO::SpecialJob::errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnErrorString(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self)))
        vkiospecialjob->kio__specialjob_errorstring_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_AddSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        return vkiospecialjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SpecialJob_SuperAddSubjob(KIO__SpecialJob* self, KJob* job) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        return vkiospecialjob->KIO::SpecialJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnAddSubjob(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_addsubjob_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_RemoveSubjob(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        return vkiospecialjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SpecialJob_SuperRemoveSubjob(KIO__SpecialJob* self, KJob* job) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        return vkiospecialjob->KIO::SpecialJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnRemoveSubjob(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_removesubjob_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotResult(KIO__SpecialJob* self, KJob* job) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotResult(job);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotResult called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotResult(KIO__SpecialJob* self, KJob* job) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotResult(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotresult_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotResult_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_SlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperSlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnSlotInfoMessage(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_slotinfomessage_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_Event(KIO__SpecialJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__SpecialJob_SuperEvent(KIO__SpecialJob* self, QEvent* event) {
    return self->KIO::SpecialJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEvent(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_event_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SpecialJob_EventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__SpecialJob_SuperEventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event) {
    return self->KIO::SpecialJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnEventFilter(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_eventfilter_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_TimerEvent(KIO__SpecialJob* self, QTimerEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperTimerEvent(KIO__SpecialJob* self, QTimerEvent* event) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnTimerEvent(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_timerevent_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_ChildEvent(KIO__SpecialJob* self, QChildEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperChildEvent(KIO__SpecialJob* self, QChildEvent* event) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnChildEvent(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_childevent_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_CustomEvent(KIO__SpecialJob* self, QEvent* event) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperCustomEvent(KIO__SpecialJob* self, QEvent* event) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnCustomEvent(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_customevent_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_ConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnConnectNotify(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_connectnotify_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__SpecialJob_DisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self);
    if (vkiospecialjob) {
        vkiospecialjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::SpecialJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SpecialJob_SuperDisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->KIO::SpecialJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::SpecialJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SpecialJob_OnDisconnectNotify(KIO__SpecialJob* self, intptr_t slot) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self))
        vkiospecialjob->kio__specialjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOSpecialJob::KIO__SpecialJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__SpecialJob_HasSubjobs(const KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__SpecialJob_Subjobs(const KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        const QList<KJob*>& _ret = vkiospecialjob->VirtualKIOSpecialJob::subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KIO::SpecialJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_ClearSubjobs(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetCapabilities(KIO__SpecialJob* self, int capabilities) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__SpecialJob_IsFinished(const KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetError(KIO__SpecialJob* self, int errorCode) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetErrorText(KIO__SpecialJob* self, const libqt_string errorText) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiospecialjob->VirtualKIOSpecialJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetProcessedAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetTotalAmount(KIO__SpecialJob* self, int unit, unsigned long long amount) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetProgressUnit(KIO__SpecialJob* self, int unit) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_SetPercent(KIO__SpecialJob* self, unsigned long percentage) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_EmitResult(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_EmitPercent(KIO__SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_EmitSpeed(KIO__SpecialJob* self, unsigned long speed) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::SpecialJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SpecialJob_StartElapsedTimer(KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = dynamic_cast<VirtualKIOSpecialJob*>(self)) {
        vkiospecialjob->VirtualKIOSpecialJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__SpecialJob_Sender(const KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::sender();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__SpecialJob_SenderSignalIndex(const KIO__SpecialJob* self) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::SpecialJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__SpecialJob_Receivers(const KIO__SpecialJob* self, const char* signal) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::SpecialJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__SpecialJob_IsSignalConnected(const KIO__SpecialJob* self, const QMetaMethod* signal) {
    if (auto* vkiospecialjob = const_cast<VirtualKIOSpecialJob*>(dynamic_cast<const VirtualKIOSpecialJob*>(self))) {
        return vkiospecialjob->VirtualKIOSpecialJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::SpecialJob::isSignalConnected called without a directly constructed type");
}

void KIO__SpecialJob_Delete(KIO__SpecialJob* self) {
    delete self;
}
