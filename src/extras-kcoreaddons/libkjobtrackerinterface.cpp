#include <KJob>
#include <KJobTrackerInterface>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kjobtrackerinterface.h>
#include "libkjobtrackerinterface.h"
#include "libkjobtrackerinterface.hxx"

KJobTrackerInterface* KJobTrackerInterface_new() {
    return new VirtualKJobTrackerInterface();
}

KJobTrackerInterface* KJobTrackerInterface_new2(QObject* parent) {
    return new VirtualKJobTrackerInterface(parent);
}

QMetaObject* KJobTrackerInterface_MetaObject(const KJobTrackerInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJobTrackerInterface_Metacast(KJobTrackerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJobTrackerInterface_Metacall(KJobTrackerInterface* self, int param1, int param2, void** param3) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KJobTrackerInterface_OnMetacall(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Metacall_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KJobTrackerInterface_QBaseMetacall(KJobTrackerInterface* self, int param1, int param2, void** param3) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Metacall_IsBase(true);
        return vkjobtrackerinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KJobTrackerInterface_Tr(const char* s) {
    QString _ret = KJobTrackerInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJobTrackerInterface_Tr2(const char* s, const char* c) {
    QString _ret = KJobTrackerInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJobTrackerInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = KJobTrackerInterface::tr(s, c, static_cast<int>(n));
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
void KJobTrackerInterface_RegisterJob(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->registerJob(job);
    } else {
        self->KJobTrackerInterface::registerJob(job);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseRegisterJob(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_RegisterJob_IsBase(true);
        vkjobtrackerinterface->registerJob(job);
    } else {
        self->KJobTrackerInterface::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnRegisterJob(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_RegisterJob_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_RegisterJob_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_UnregisterJob(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->unregisterJob(job);
    } else {
        self->KJobTrackerInterface::unregisterJob(job);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseUnregisterJob(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_UnregisterJob_IsBase(true);
        vkjobtrackerinterface->unregisterJob(job);
    } else {
        self->KJobTrackerInterface::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnUnregisterJob(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_UnregisterJob_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_UnregisterJob_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Finished(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->finished(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->finished(job);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseFinished(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Finished_IsBase(true);
        vkjobtrackerinterface->finished(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnFinished(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Finished_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Finished_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Suspended(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->suspended(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->suspended(job);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseSuspended(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Suspended_IsBase(true);
        vkjobtrackerinterface->suspended(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnSuspended(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Suspended_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Suspended_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Resumed(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->resumed(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->resumed(job);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseResumed(KJobTrackerInterface* self, KJob* job) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Resumed_IsBase(true);
        vkjobtrackerinterface->resumed(job);
    } else {
        ((VirtualKJobTrackerInterface*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnResumed(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Resumed_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Resumed_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Description(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QPair<QString, QString> field1_QPair;
    libqt_string* field1_first = static_cast<libqt_string*>(field1.first);
    libqt_string* field1_second = static_cast<libqt_string*>(field1.second);
    QString field1_first_0_QString = QString::fromUtf8(field1_first[0].data, field1_first[0].len);
    QString field1_second_0_QString = QString::fromUtf8(field1_second[0].data, field1_second[0].len);
    field1_QPair.first = field1_first_0_QString;
    field1_QPair.second = field1_second_0_QString;
    QPair<QString, QString> field2_QPair;
    libqt_string* field2_first = static_cast<libqt_string*>(field2.first);
    libqt_string* field2_second = static_cast<libqt_string*>(field2.second);
    QString field2_first_0_QString = QString::fromUtf8(field2_first[0].data, field2_first[0].len);
    QString field2_second_0_QString = QString::fromUtf8(field2_second[0].data, field2_second[0].len);
    field2_QPair.first = field2_first_0_QString;
    field2_QPair.second = field2_second_0_QString;
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKJobTrackerInterface*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseDescription(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QPair<QString, QString> field1_QPair;
    libqt_string* field1_first = static_cast<libqt_string*>(field1.first);
    libqt_string* field1_second = static_cast<libqt_string*>(field1.second);
    QString field1_first_0_QString = QString::fromUtf8(field1_first[0].data, field1_first[0].len);
    QString field1_second_0_QString = QString::fromUtf8(field1_second[0].data, field1_second[0].len);
    field1_QPair.first = field1_first_0_QString;
    field1_QPair.second = field1_second_0_QString;
    QPair<QString, QString> field2_QPair;
    libqt_string* field2_first = static_cast<libqt_string*>(field2.first);
    libqt_string* field2_second = static_cast<libqt_string*>(field2.second);
    QString field2_first_0_QString = QString::fromUtf8(field2_first[0].data, field2_first[0].len);
    QString field2_second_0_QString = QString::fromUtf8(field2_second[0].data, field2_second[0].len);
    field2_QPair.first = field2_first_0_QString;
    field2_QPair.second = field2_second_0_QString;
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Description_IsBase(true);
        vkjobtrackerinterface->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKJobTrackerInterface*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnDescription(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Description_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Description_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_InfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->infoMessage(job, message_QString);
    } else {
        ((VirtualKJobTrackerInterface*)self)->infoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseInfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_InfoMessage_IsBase(true);
        vkjobtrackerinterface->infoMessage(job, message_QString);
    } else {
        ((VirtualKJobTrackerInterface*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnInfoMessage(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_InfoMessage_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_InfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Warning(KJobTrackerInterface* self, KJob* job, const libqt_string message) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->warning(job, message_QString);
    } else {
        ((VirtualKJobTrackerInterface*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseWarning(KJobTrackerInterface* self, KJob* job, const libqt_string message) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Warning_IsBase(true);
        vkjobtrackerinterface->warning(job, message_QString);
    } else {
        ((VirtualKJobTrackerInterface*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnWarning(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Warning_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_TotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJobTrackerInterface*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseTotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_TotalAmount_IsBase(true);
        vkjobtrackerinterface->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJobTrackerInterface*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnTotalAmount(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_TotalAmount_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_TotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_ProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJobTrackerInterface*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ProcessedAmount_IsBase(true);
        vkjobtrackerinterface->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJobTrackerInterface*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnProcessedAmount(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ProcessedAmount_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_ProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Percent(KJobTrackerInterface* self, KJob* job, unsigned long percent) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKJobTrackerInterface*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBasePercent(KJobTrackerInterface* self, KJob* job, unsigned long percent) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Percent_IsBase(true);
        vkjobtrackerinterface->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKJobTrackerInterface*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnPercent(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Percent_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Percent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_Speed(KJobTrackerInterface* self, KJob* job, unsigned long value) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKJobTrackerInterface*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseSpeed(KJobTrackerInterface* self, KJob* job, unsigned long value) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Speed_IsBase(true);
        vkjobtrackerinterface->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKJobTrackerInterface*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnSpeed(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Speed_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Speed_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobTrackerInterface_Event(KJobTrackerInterface* self, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->event(event);
    } else {
        return self->KJobTrackerInterface::event(event);
    }
}

// Base class handler implementation
bool KJobTrackerInterface_QBaseEvent(KJobTrackerInterface* self, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Event_IsBase(true);
        return vkjobtrackerinterface->event(event);
    } else {
        return self->KJobTrackerInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnEvent(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Event_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobTrackerInterface_EventFilter(KJobTrackerInterface* self, QObject* watched, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->eventFilter(watched, event);
    } else {
        return self->KJobTrackerInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KJobTrackerInterface_QBaseEventFilter(KJobTrackerInterface* self, QObject* watched, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_EventFilter_IsBase(true);
        return vkjobtrackerinterface->eventFilter(watched, event);
    } else {
        return self->KJobTrackerInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnEventFilter(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_EventFilter_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_TimerEvent(KJobTrackerInterface* self, QTimerEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->timerEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseTimerEvent(KJobTrackerInterface* self, QTimerEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_TimerEvent_IsBase(true);
        vkjobtrackerinterface->timerEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnTimerEvent(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_TimerEvent_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_ChildEvent(KJobTrackerInterface* self, QChildEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->childEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseChildEvent(KJobTrackerInterface* self, QChildEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ChildEvent_IsBase(true);
        vkjobtrackerinterface->childEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnChildEvent(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ChildEvent_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_CustomEvent(KJobTrackerInterface* self, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->customEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseCustomEvent(KJobTrackerInterface* self, QEvent* event) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_CustomEvent_IsBase(true);
        vkjobtrackerinterface->customEvent(event);
    } else {
        ((VirtualKJobTrackerInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnCustomEvent(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_CustomEvent_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_ConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->connectNotify(*signal);
    } else {
        ((VirtualKJobTrackerInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ConnectNotify_IsBase(true);
        vkjobtrackerinterface->connectNotify(*signal);
    } else {
        ((VirtualKJobTrackerInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnConnectNotify(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_ConnectNotify_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobTrackerInterface_DisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->disconnectNotify(*signal);
    } else {
        ((VirtualKJobTrackerInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KJobTrackerInterface_QBaseDisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_DisconnectNotify_IsBase(true);
        vkjobtrackerinterface->disconnectNotify(*signal);
    } else {
        ((VirtualKJobTrackerInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnDisconnectNotify(KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = dynamic_cast<VirtualKJobTrackerInterface*>(self);
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KJobTrackerInterface_Sender(const KJobTrackerInterface* self) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->sender();
    } else {
        return ((VirtualKJobTrackerInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* KJobTrackerInterface_QBaseSender(const KJobTrackerInterface* self) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Sender_IsBase(true);
        return vkjobtrackerinterface->sender();
    } else {
        return ((VirtualKJobTrackerInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnSender(const KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Sender_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KJobTrackerInterface_SenderSignalIndex(const KJobTrackerInterface* self) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->senderSignalIndex();
    } else {
        return ((VirtualKJobTrackerInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KJobTrackerInterface_QBaseSenderSignalIndex(const KJobTrackerInterface* self) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_SenderSignalIndex_IsBase(true);
        return vkjobtrackerinterface->senderSignalIndex();
    } else {
        return ((VirtualKJobTrackerInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnSenderSignalIndex(const KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KJobTrackerInterface_Receivers(const KJobTrackerInterface* self, const char* signal) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->receivers(signal);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KJobTrackerInterface_QBaseReceivers(const KJobTrackerInterface* self, const char* signal) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Receivers_IsBase(true);
        return vkjobtrackerinterface->receivers(signal);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnReceivers(const KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_Receivers_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobTrackerInterface_IsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        return vkjobtrackerinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KJobTrackerInterface_QBaseIsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_IsSignalConnected_IsBase(true);
        return vkjobtrackerinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualKJobTrackerInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobTrackerInterface_OnIsSignalConnected(const KJobTrackerInterface* self, intptr_t slot) {
    auto* vkjobtrackerinterface = const_cast<VirtualKJobTrackerInterface*>(dynamic_cast<const VirtualKJobTrackerInterface*>(self));
    if (vkjobtrackerinterface && vkjobtrackerinterface->isVirtualKJobTrackerInterface) {
        vkjobtrackerinterface->setKJobTrackerInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualKJobTrackerInterface::KJobTrackerInterface_IsSignalConnected_Callback>(slot));
    }
}

void KJobTrackerInterface_Delete(KJobTrackerInterface* self) {
    delete self;
}
