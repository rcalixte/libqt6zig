#include <KJob>
#include <KJobTrackerInterface>
#include <KUiServerV2JobTracker>
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
#include <kuiserverv2jobtracker.h>
#include "libkuiserverv2jobtracker.h"
#include "libkuiserverv2jobtracker.hxx"

KUiServerV2JobTracker* KUiServerV2JobTracker_new() {
    return new VirtualKUiServerV2JobTracker();
}

KUiServerV2JobTracker* KUiServerV2JobTracker_new2(QObject* parent) {
    return new VirtualKUiServerV2JobTracker(parent);
}

QMetaObject* KUiServerV2JobTracker_MetaObject(const KUiServerV2JobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUiServerV2JobTracker_Metacast(KUiServerV2JobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUiServerV2JobTracker_Metacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUiServerV2JobTracker_Tr(const char* s) {
    QString _ret = KUiServerV2JobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerV2JobTracker_RegisterJob(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        self->registerJob(job);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->registerJob(job);
    }
}

void KUiServerV2JobTracker_UnregisterJob(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        self->unregisterJob(job);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->unregisterJob(job);
    }
}

void KUiServerV2JobTracker_Finished(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->finished(job);
    }
}

void KUiServerV2JobTracker_Suspended(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->suspended(job);
    }
}

void KUiServerV2JobTracker_Resumed(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->resumed(job);
    }
}

void KUiServerV2JobTracker_Description(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
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
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

void KUiServerV2JobTracker_InfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->infoMessage(job, message_QString);
    }
}

void KUiServerV2JobTracker_TotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KUiServerV2JobTracker_ProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KUiServerV2JobTracker_Percent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->percent(job, static_cast<unsigned long>(percent));
    }
}

void KUiServerV2JobTracker_Speed(KUiServerV2JobTracker* self, KJob* job, unsigned long value) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->speed(job, static_cast<unsigned long>(value));
    }
}

libqt_string KUiServerV2JobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KUiServerV2JobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUiServerV2JobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUiServerV2JobTracker::tr(s, c, static_cast<int>(n));
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
int KUiServerV2JobTracker_QBaseMetacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Metacall_IsBase(true);
        return vkuiserverv2jobtracker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUiServerV2JobTracker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnMetacall(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Metacall_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseRegisterJob(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_RegisterJob_IsBase(true);
        vkuiserverv2jobtracker->registerJob(job);
    } else {
        self->KUiServerV2JobTracker::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnRegisterJob(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_RegisterJob_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_RegisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseUnregisterJob(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_UnregisterJob_IsBase(true);
        vkuiserverv2jobtracker->unregisterJob(job);
    } else {
        self->KUiServerV2JobTracker::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnUnregisterJob(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_UnregisterJob_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_UnregisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseFinished(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Finished_IsBase(true);
        vkuiserverv2jobtracker->finished(job);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnFinished(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Finished_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Finished_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseSuspended(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Suspended_IsBase(true);
        vkuiserverv2jobtracker->suspended(job);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnSuspended(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Suspended_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Suspended_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseResumed(KUiServerV2JobTracker* self, KJob* job) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Resumed_IsBase(true);
        vkuiserverv2jobtracker->resumed(job);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnResumed(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Resumed_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Resumed_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseDescription(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
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
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Description_IsBase(true);
        vkuiserverv2jobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnDescription(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Description_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Description_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseInfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_InfoMessage_IsBase(true);
        vkuiserverv2jobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnInfoMessage(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_InfoMessage_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_InfoMessage_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseTotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_TotalAmount_IsBase(true);
        vkuiserverv2jobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnTotalAmount(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_TotalAmount_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_TotalAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ProcessedAmount_IsBase(true);
        vkuiserverv2jobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnProcessedAmount(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ProcessedAmount_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_ProcessedAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBasePercent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Percent_IsBase(true);
        vkuiserverv2jobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnPercent(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Percent_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Percent_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseSpeed(KUiServerV2JobTracker* self, KJob* job, unsigned long value) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Speed_IsBase(true);
        vkuiserverv2jobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnSpeed(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Speed_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Speed_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_Warning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->warning(job, message_QString);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseWarning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Warning_IsBase(true);
        vkuiserverv2jobtracker->warning(job, message_QString);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnWarning(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Warning_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerV2JobTracker_Event(KUiServerV2JobTracker* self, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->event(event);
    } else {
        return self->KUiServerV2JobTracker::event(event);
    }
}

// Base class handler implementation
bool KUiServerV2JobTracker_QBaseEvent(KUiServerV2JobTracker* self, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Event_IsBase(true);
        return vkuiserverv2jobtracker->event(event);
    } else {
        return self->KUiServerV2JobTracker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnEvent(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Event_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerV2JobTracker_EventFilter(KUiServerV2JobTracker* self, QObject* watched, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->eventFilter(watched, event);
    } else {
        return self->KUiServerV2JobTracker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KUiServerV2JobTracker_QBaseEventFilter(KUiServerV2JobTracker* self, QObject* watched, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_EventFilter_IsBase(true);
        return vkuiserverv2jobtracker->eventFilter(watched, event);
    } else {
        return self->KUiServerV2JobTracker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnEventFilter(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_EventFilter_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_TimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->timerEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseTimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_TimerEvent_IsBase(true);
        vkuiserverv2jobtracker->timerEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnTimerEvent(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_TimerEvent_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_ChildEvent(KUiServerV2JobTracker* self, QChildEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->childEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseChildEvent(KUiServerV2JobTracker* self, QChildEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ChildEvent_IsBase(true);
        vkuiserverv2jobtracker->childEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnChildEvent(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ChildEvent_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_CustomEvent(KUiServerV2JobTracker* self, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->customEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseCustomEvent(KUiServerV2JobTracker* self, QEvent* event) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_CustomEvent_IsBase(true);
        vkuiserverv2jobtracker->customEvent(event);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnCustomEvent(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_CustomEvent_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_ConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->connectNotify(*signal);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ConnectNotify_IsBase(true);
        vkuiserverv2jobtracker->connectNotify(*signal);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnConnectNotify(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_ConnectNotify_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerV2JobTracker_DisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUiServerV2JobTracker_QBaseDisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_DisconnectNotify_IsBase(true);
        vkuiserverv2jobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKUiServerV2JobTracker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnDisconnectNotify(KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = dynamic_cast<VirtualKUiServerV2JobTracker*>(self);
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_DisconnectNotify_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUiServerV2JobTracker_Sender(const KUiServerV2JobTracker* self) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->sender();
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUiServerV2JobTracker_QBaseSender(const KUiServerV2JobTracker* self) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Sender_IsBase(true);
        return vkuiserverv2jobtracker->sender();
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnSender(const KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Sender_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUiServerV2JobTracker_SenderSignalIndex(const KUiServerV2JobTracker* self) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->senderSignalIndex();
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUiServerV2JobTracker_QBaseSenderSignalIndex(const KUiServerV2JobTracker* self) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_SenderSignalIndex_IsBase(true);
        return vkuiserverv2jobtracker->senderSignalIndex();
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnSenderSignalIndex(const KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUiServerV2JobTracker_Receivers(const KUiServerV2JobTracker* self, const char* signal) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->receivers(signal);
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUiServerV2JobTracker_QBaseReceivers(const KUiServerV2JobTracker* self, const char* signal) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Receivers_IsBase(true);
        return vkuiserverv2jobtracker->receivers(signal);
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnReceivers(const KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_Receivers_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerV2JobTracker_IsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        return vkuiserverv2jobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUiServerV2JobTracker_QBaseIsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_IsSignalConnected_IsBase(true);
        return vkuiserverv2jobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKUiServerV2JobTracker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerV2JobTracker_OnIsSignalConnected(const KUiServerV2JobTracker* self, intptr_t slot) {
    auto* vkuiserverv2jobtracker = const_cast<VirtualKUiServerV2JobTracker*>(dynamic_cast<const VirtualKUiServerV2JobTracker*>(self));
    if (vkuiserverv2jobtracker && vkuiserverv2jobtracker->isVirtualKUiServerV2JobTracker) {
        vkuiserverv2jobtracker->setKUiServerV2JobTracker_IsSignalConnected_Callback(reinterpret_cast<VirtualKUiServerV2JobTracker::KUiServerV2JobTracker_IsSignalConnected_Callback>(slot));
    }
}

void KUiServerV2JobTracker_Delete(KUiServerV2JobTracker* self) {
    delete self;
}
