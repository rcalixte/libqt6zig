#include <KJob>
#include <KJobTrackerInterface>
#include <KUiServerJobTracker>
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
#include <kuiserverjobtracker.h>
#include "libkuiserverjobtracker.h"
#include "libkuiserverjobtracker.hxx"

KUiServerJobTracker* KUiServerJobTracker_new() {
    return new VirtualKUiServerJobTracker();
}

KUiServerJobTracker* KUiServerJobTracker_new2(QObject* parent) {
    return new VirtualKUiServerJobTracker(parent);
}

QMetaObject* KUiServerJobTracker_MetaObject(const KUiServerJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUiServerJobTracker_Metacast(KUiServerJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUiServerJobTracker_Metacall(KUiServerJobTracker* self, int param1, int param2, void** param3) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUiServerJobTracker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUiServerJobTracker_Tr(const char* s) {
    QString _ret = KUiServerJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerJobTracker_RegisterJob(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        self->registerJob(job);
    } else {
        ((VirtualKUiServerJobTracker*)self)->registerJob(job);
    }
}

void KUiServerJobTracker_UnregisterJob(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        self->unregisterJob(job);
    } else {
        ((VirtualKUiServerJobTracker*)self)->unregisterJob(job);
    }
}

void KUiServerJobTracker_Finished(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->finished(job);
    }
}

void KUiServerJobTracker_Suspended(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->suspended(job);
    }
}

void KUiServerJobTracker_Resumed(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->resumed(job);
    }
}

void KUiServerJobTracker_Description(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
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
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

void KUiServerJobTracker_InfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->infoMessage(job, message_QString);
    }
}

void KUiServerJobTracker_TotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KUiServerJobTracker_ProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KUiServerJobTracker_Percent(KUiServerJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->percent(job, static_cast<unsigned long>(percent));
    }
}

void KUiServerJobTracker_Speed(KUiServerJobTracker* self, KJob* job, unsigned long value) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->speed(job, static_cast<unsigned long>(value));
    }
}

libqt_string KUiServerJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KUiServerJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUiServerJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUiServerJobTracker::tr(s, c, static_cast<int>(n));
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
int KUiServerJobTracker_QBaseMetacall(KUiServerJobTracker* self, int param1, int param2, void** param3) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Metacall_IsBase(true);
        return vkuiserverjobtracker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUiServerJobTracker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnMetacall(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Metacall_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseRegisterJob(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_RegisterJob_IsBase(true);
        vkuiserverjobtracker->registerJob(job);
    } else {
        self->KUiServerJobTracker::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnRegisterJob(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_RegisterJob_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_RegisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseUnregisterJob(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_UnregisterJob_IsBase(true);
        vkuiserverjobtracker->unregisterJob(job);
    } else {
        self->KUiServerJobTracker::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnUnregisterJob(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_UnregisterJob_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_UnregisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseFinished(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Finished_IsBase(true);
        vkuiserverjobtracker->finished(job);
    } else {
        ((VirtualKUiServerJobTracker*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnFinished(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Finished_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Finished_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseSuspended(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Suspended_IsBase(true);
        vkuiserverjobtracker->suspended(job);
    } else {
        ((VirtualKUiServerJobTracker*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnSuspended(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Suspended_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Suspended_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseResumed(KUiServerJobTracker* self, KJob* job) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Resumed_IsBase(true);
        vkuiserverjobtracker->resumed(job);
    } else {
        ((VirtualKUiServerJobTracker*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnResumed(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Resumed_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Resumed_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseDescription(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
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
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Description_IsBase(true);
        vkuiserverjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKUiServerJobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnDescription(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Description_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Description_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseInfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_InfoMessage_IsBase(true);
        vkuiserverjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKUiServerJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnInfoMessage(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_InfoMessage_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_InfoMessage_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseTotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_TotalAmount_IsBase(true);
        vkuiserverjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKUiServerJobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnTotalAmount(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_TotalAmount_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_TotalAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ProcessedAmount_IsBase(true);
        vkuiserverjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKUiServerJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnProcessedAmount(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ProcessedAmount_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_ProcessedAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBasePercent(KUiServerJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Percent_IsBase(true);
        vkuiserverjobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKUiServerJobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnPercent(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Percent_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Percent_Callback>(slot));
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseSpeed(KUiServerJobTracker* self, KJob* job, unsigned long value) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Speed_IsBase(true);
        vkuiserverjobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKUiServerJobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnSpeed(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Speed_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Speed_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_Warning(KUiServerJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKUiServerJobTracker*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseWarning(KUiServerJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Warning_IsBase(true);
        vkuiserverjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKUiServerJobTracker*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnWarning(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Warning_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerJobTracker_Event(KUiServerJobTracker* self, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->event(event);
    } else {
        return self->KUiServerJobTracker::event(event);
    }
}

// Base class handler implementation
bool KUiServerJobTracker_QBaseEvent(KUiServerJobTracker* self, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Event_IsBase(true);
        return vkuiserverjobtracker->event(event);
    } else {
        return self->KUiServerJobTracker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnEvent(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Event_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerJobTracker_EventFilter(KUiServerJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->eventFilter(watched, event);
    } else {
        return self->KUiServerJobTracker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KUiServerJobTracker_QBaseEventFilter(KUiServerJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_EventFilter_IsBase(true);
        return vkuiserverjobtracker->eventFilter(watched, event);
    } else {
        return self->KUiServerJobTracker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnEventFilter(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_EventFilter_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_TimerEvent(KUiServerJobTracker* self, QTimerEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->timerEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseTimerEvent(KUiServerJobTracker* self, QTimerEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_TimerEvent_IsBase(true);
        vkuiserverjobtracker->timerEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnTimerEvent(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_TimerEvent_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_ChildEvent(KUiServerJobTracker* self, QChildEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->childEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseChildEvent(KUiServerJobTracker* self, QChildEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ChildEvent_IsBase(true);
        vkuiserverjobtracker->childEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnChildEvent(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ChildEvent_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_CustomEvent(KUiServerJobTracker* self, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->customEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseCustomEvent(KUiServerJobTracker* self, QEvent* event) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_CustomEvent_IsBase(true);
        vkuiserverjobtracker->customEvent(event);
    } else {
        ((VirtualKUiServerJobTracker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnCustomEvent(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_CustomEvent_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_ConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKUiServerJobTracker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ConnectNotify_IsBase(true);
        vkuiserverjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKUiServerJobTracker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnConnectNotify(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_ConnectNotify_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUiServerJobTracker_DisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKUiServerJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUiServerJobTracker_QBaseDisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_DisconnectNotify_IsBase(true);
        vkuiserverjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKUiServerJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnDisconnectNotify(KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = dynamic_cast<VirtualKUiServerJobTracker*>(self);
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_DisconnectNotify_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUiServerJobTracker_Sender(const KUiServerJobTracker* self) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->sender();
    } else {
        return ((VirtualKUiServerJobTracker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUiServerJobTracker_QBaseSender(const KUiServerJobTracker* self) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Sender_IsBase(true);
        return vkuiserverjobtracker->sender();
    } else {
        return ((VirtualKUiServerJobTracker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnSender(const KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Sender_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUiServerJobTracker_SenderSignalIndex(const KUiServerJobTracker* self) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKUiServerJobTracker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUiServerJobTracker_QBaseSenderSignalIndex(const KUiServerJobTracker* self) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_SenderSignalIndex_IsBase(true);
        return vkuiserverjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKUiServerJobTracker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnSenderSignalIndex(const KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUiServerJobTracker_Receivers(const KUiServerJobTracker* self, const char* signal) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->receivers(signal);
    } else {
        return ((VirtualKUiServerJobTracker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUiServerJobTracker_QBaseReceivers(const KUiServerJobTracker* self, const char* signal) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Receivers_IsBase(true);
        return vkuiserverjobtracker->receivers(signal);
    } else {
        return ((VirtualKUiServerJobTracker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnReceivers(const KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_Receivers_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUiServerJobTracker_IsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        return vkuiserverjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKUiServerJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUiServerJobTracker_QBaseIsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_IsSignalConnected_IsBase(true);
        return vkuiserverjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKUiServerJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUiServerJobTracker_OnIsSignalConnected(const KUiServerJobTracker* self, intptr_t slot) {
    auto* vkuiserverjobtracker = const_cast<VirtualKUiServerJobTracker*>(dynamic_cast<const VirtualKUiServerJobTracker*>(self));
    if (vkuiserverjobtracker && vkuiserverjobtracker->isVirtualKUiServerJobTracker) {
        vkuiserverjobtracker->setKUiServerJobTracker_IsSignalConnected_Callback(reinterpret_cast<VirtualKUiServerJobTracker::KUiServerJobTracker_IsSignalConnected_Callback>(slot));
    }
}

void KUiServerJobTracker_Delete(KUiServerJobTracker* self) {
    delete self;
}
