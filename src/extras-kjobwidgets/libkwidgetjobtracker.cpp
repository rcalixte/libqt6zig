#include <KAbstractWidgetJobTracker>
#include <KJob>
#include <KJobTrackerInterface>
#include <KWidgetJobTracker>
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
#include <QWidget>
#include <kwidgetjobtracker.h>
#include "libkwidgetjobtracker.h"
#include "libkwidgetjobtracker.hxx"

KWidgetJobTracker* KWidgetJobTracker_new(QWidget* parent) {
    return new VirtualKWidgetJobTracker(parent);
}

KWidgetJobTracker* KWidgetJobTracker_new2() {
    return new VirtualKWidgetJobTracker();
}

QMetaObject* KWidgetJobTracker_MetaObject(const KWidgetJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWidgetJobTracker_Metacast(KWidgetJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWidgetJobTracker_Metacall(KWidgetJobTracker* self, int param1, int param2, void** param3) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KWidgetJobTracker_Tr(const char* s) {
    QString _ret = KWidgetJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KWidgetJobTracker_Widget(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return self->widget(job);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->widget(job);
    }
}

void KWidgetJobTracker_RegisterJob(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        self->registerJob(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->registerJob(job);
    }
}

void KWidgetJobTracker_UnregisterJob(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        self->unregisterJob(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->unregisterJob(job);
    }
}

bool KWidgetJobTracker_KeepOpen(const KWidgetJobTracker* self, KJob* job) {
    return self->keepOpen(job);
}

void KWidgetJobTracker_InfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->infoMessage(job, message_QString);
    }
}

void KWidgetJobTracker_Description(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
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
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

void KWidgetJobTracker_TotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KWidgetJobTracker_ProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KWidgetJobTracker_Percent(KWidgetJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->percent(job, static_cast<unsigned long>(percent));
    }
}

void KWidgetJobTracker_Speed(KWidgetJobTracker* self, KJob* job, unsigned long value) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->speed(job, static_cast<unsigned long>(value));
    }
}

void KWidgetJobTracker_SlotClean(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->slotClean(job);
    }
}

void KWidgetJobTracker_Suspended(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->suspended(job);
    }
}

void KWidgetJobTracker_Resumed(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->resumed(job);
    }
}

libqt_string KWidgetJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KWidgetJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWidgetJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KWidgetJobTracker::tr(s, c, static_cast<int>(n));
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
int KWidgetJobTracker_QBaseMetacall(KWidgetJobTracker* self, int param1, int param2, void** param3) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Metacall_IsBase(true);
        return vkwidgetjobtracker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KWidgetJobTracker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnMetacall(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Metacall_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KWidgetJobTracker_QBaseWidget(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Widget_IsBase(true);
        return vkwidgetjobtracker->widget(job);
    } else {
        return self->KWidgetJobTracker::widget(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnWidget(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Widget_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Widget_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseRegisterJob(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_RegisterJob_IsBase(true);
        vkwidgetjobtracker->registerJob(job);
    } else {
        self->KWidgetJobTracker::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnRegisterJob(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_RegisterJob_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_RegisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseUnregisterJob(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_UnregisterJob_IsBase(true);
        vkwidgetjobtracker->unregisterJob(job);
    } else {
        self->KWidgetJobTracker::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnUnregisterJob(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_UnregisterJob_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_UnregisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseInfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_InfoMessage_IsBase(true);
        vkwidgetjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKWidgetJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnInfoMessage(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_InfoMessage_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_InfoMessage_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseDescription(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
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
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Description_IsBase(true);
        vkwidgetjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKWidgetJobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnDescription(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Description_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Description_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseTotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_TotalAmount_IsBase(true);
        vkwidgetjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKWidgetJobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnTotalAmount(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_TotalAmount_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_TotalAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ProcessedAmount_IsBase(true);
        vkwidgetjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKWidgetJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnProcessedAmount(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ProcessedAmount_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_ProcessedAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBasePercent(KWidgetJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Percent_IsBase(true);
        vkwidgetjobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKWidgetJobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnPercent(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Percent_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Percent_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSpeed(KWidgetJobTracker* self, KJob* job, unsigned long value) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Speed_IsBase(true);
        vkwidgetjobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKWidgetJobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSpeed(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Speed_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Speed_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSlotClean(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotClean_IsBase(true);
        vkwidgetjobtracker->slotClean(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotClean(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSlotClean(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotClean_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_SlotClean_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSuspended(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Suspended_IsBase(true);
        vkwidgetjobtracker->suspended(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSuspended(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Suspended_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Suspended_Callback>(slot));
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseResumed(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Resumed_IsBase(true);
        vkwidgetjobtracker->resumed(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnResumed(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Resumed_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Resumed_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_Finished(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->finished(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->finished(job);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseFinished(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Finished_IsBase(true);
        vkwidgetjobtracker->finished(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnFinished(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Finished_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Finished_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_SlotStop(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->slotStop(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotStop(job);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSlotStop(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotStop_IsBase(true);
        vkwidgetjobtracker->slotStop(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotStop(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSlotStop(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotStop_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_SlotStop_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_SlotSuspend(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->slotSuspend(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotSuspend(job);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSlotSuspend(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotSuspend_IsBase(true);
        vkwidgetjobtracker->slotSuspend(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotSuspend(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSlotSuspend(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotSuspend_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_SlotSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_SlotResume(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->slotResume(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotResume(job);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseSlotResume(KWidgetJobTracker* self, KJob* job) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotResume_IsBase(true);
        vkwidgetjobtracker->slotResume(job);
    } else {
        ((VirtualKWidgetJobTracker*)self)->slotResume(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSlotResume(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SlotResume_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_SlotResume_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_Warning(KWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKWidgetJobTracker*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseWarning(KWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Warning_IsBase(true);
        vkwidgetjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKWidgetJobTracker*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnWarning(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Warning_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetJobTracker_Event(KWidgetJobTracker* self, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->event(event);
    } else {
        return self->KWidgetJobTracker::event(event);
    }
}

// Base class handler implementation
bool KWidgetJobTracker_QBaseEvent(KWidgetJobTracker* self, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Event_IsBase(true);
        return vkwidgetjobtracker->event(event);
    } else {
        return self->KWidgetJobTracker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnEvent(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Event_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetJobTracker_EventFilter(KWidgetJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->eventFilter(watched, event);
    } else {
        return self->KWidgetJobTracker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KWidgetJobTracker_QBaseEventFilter(KWidgetJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_EventFilter_IsBase(true);
        return vkwidgetjobtracker->eventFilter(watched, event);
    } else {
        return self->KWidgetJobTracker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnEventFilter(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_EventFilter_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_TimerEvent(KWidgetJobTracker* self, QTimerEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->timerEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseTimerEvent(KWidgetJobTracker* self, QTimerEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_TimerEvent_IsBase(true);
        vkwidgetjobtracker->timerEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnTimerEvent(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_TimerEvent_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_ChildEvent(KWidgetJobTracker* self, QChildEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->childEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseChildEvent(KWidgetJobTracker* self, QChildEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ChildEvent_IsBase(true);
        vkwidgetjobtracker->childEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnChildEvent(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ChildEvent_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_CustomEvent(KWidgetJobTracker* self, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->customEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseCustomEvent(KWidgetJobTracker* self, QEvent* event) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_CustomEvent_IsBase(true);
        vkwidgetjobtracker->customEvent(event);
    } else {
        ((VirtualKWidgetJobTracker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnCustomEvent(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_CustomEvent_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_ConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKWidgetJobTracker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ConnectNotify_IsBase(true);
        vkwidgetjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKWidgetJobTracker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnConnectNotify(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_ConnectNotify_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetJobTracker_DisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKWidgetJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KWidgetJobTracker_QBaseDisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_DisconnectNotify_IsBase(true);
        vkwidgetjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKWidgetJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnDisconnectNotify(KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = dynamic_cast<VirtualKWidgetJobTracker*>(self);
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_DisconnectNotify_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KWidgetJobTracker_Sender(const KWidgetJobTracker* self) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->sender();
    } else {
        return ((VirtualKWidgetJobTracker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KWidgetJobTracker_QBaseSender(const KWidgetJobTracker* self) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Sender_IsBase(true);
        return vkwidgetjobtracker->sender();
    } else {
        return ((VirtualKWidgetJobTracker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSender(const KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Sender_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KWidgetJobTracker_SenderSignalIndex(const KWidgetJobTracker* self) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKWidgetJobTracker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KWidgetJobTracker_QBaseSenderSignalIndex(const KWidgetJobTracker* self) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SenderSignalIndex_IsBase(true);
        return vkwidgetjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKWidgetJobTracker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnSenderSignalIndex(const KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KWidgetJobTracker_Receivers(const KWidgetJobTracker* self, const char* signal) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->receivers(signal);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KWidgetJobTracker_QBaseReceivers(const KWidgetJobTracker* self, const char* signal) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Receivers_IsBase(true);
        return vkwidgetjobtracker->receivers(signal);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnReceivers(const KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_Receivers_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetJobTracker_IsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        return vkwidgetjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KWidgetJobTracker_QBaseIsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_IsSignalConnected_IsBase(true);
        return vkwidgetjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKWidgetJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetJobTracker_OnIsSignalConnected(const KWidgetJobTracker* self, intptr_t slot) {
    auto* vkwidgetjobtracker = const_cast<VirtualKWidgetJobTracker*>(dynamic_cast<const VirtualKWidgetJobTracker*>(self));
    if (vkwidgetjobtracker && vkwidgetjobtracker->isVirtualKWidgetJobTracker) {
        vkwidgetjobtracker->setKWidgetJobTracker_IsSignalConnected_Callback(reinterpret_cast<VirtualKWidgetJobTracker::KWidgetJobTracker_IsSignalConnected_Callback>(slot));
    }
}

void KWidgetJobTracker_Delete(KWidgetJobTracker* self) {
    delete self;
}
