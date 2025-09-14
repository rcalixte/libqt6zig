#include <KAbstractWidgetJobTracker>
#include <KJob>
#include <KJobTrackerInterface>
#include <KStatusBarJobTracker>
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
#include <kstatusbarjobtracker.h>
#include "libkstatusbarjobtracker.h"
#include "libkstatusbarjobtracker.hxx"

KStatusBarJobTracker* KStatusBarJobTracker_new(QWidget* parent) {
    return new VirtualKStatusBarJobTracker(parent);
}

KStatusBarJobTracker* KStatusBarJobTracker_new2() {
    return new VirtualKStatusBarJobTracker();
}

KStatusBarJobTracker* KStatusBarJobTracker_new3(QWidget* parent, bool button) {
    return new VirtualKStatusBarJobTracker(parent, button);
}

QMetaObject* KStatusBarJobTracker_MetaObject(const KStatusBarJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KStatusBarJobTracker_Metacast(KStatusBarJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KStatusBarJobTracker_Metacall(KStatusBarJobTracker* self, int param1, int param2, void** param3) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KStatusBarJobTracker_Tr(const char* s) {
    QString _ret = KStatusBarJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusBarJobTracker_RegisterJob(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->registerJob(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->registerJob(job);
    }
}

void KStatusBarJobTracker_UnregisterJob(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->unregisterJob(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->unregisterJob(job);
    }
}

QWidget* KStatusBarJobTracker_Widget(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return self->widget(job);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->widget(job);
    }
}

void KStatusBarJobTracker_SetStatusBarMode(KStatusBarJobTracker* self, int statusBarMode) {
    self->setStatusBarMode(static_cast<KStatusBarJobTracker::StatusBarModes>(statusBarMode));
}

void KStatusBarJobTracker_Description(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
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
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

void KStatusBarJobTracker_TotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKStatusBarJobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

void KStatusBarJobTracker_Percent(KStatusBarJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKStatusBarJobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

void KStatusBarJobTracker_Speed(KStatusBarJobTracker* self, KJob* job, unsigned long value) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKStatusBarJobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

void KStatusBarJobTracker_SlotClean(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        self->slotClean(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotClean(job);
    }
}

libqt_string KStatusBarJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KStatusBarJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStatusBarJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KStatusBarJobTracker::tr(s, c, static_cast<int>(n));
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
int KStatusBarJobTracker_QBaseMetacall(KStatusBarJobTracker* self, int param1, int param2, void** param3) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Metacall_IsBase(true);
        return vkstatusbarjobtracker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KStatusBarJobTracker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnMetacall(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Metacall_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseRegisterJob(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_RegisterJob_IsBase(true);
        vkstatusbarjobtracker->registerJob(job);
    } else {
        self->KStatusBarJobTracker::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnRegisterJob(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_RegisterJob_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_RegisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseUnregisterJob(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_UnregisterJob_IsBase(true);
        vkstatusbarjobtracker->unregisterJob(job);
    } else {
        self->KStatusBarJobTracker::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnUnregisterJob(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_UnregisterJob_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_UnregisterJob_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KStatusBarJobTracker_QBaseWidget(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Widget_IsBase(true);
        return vkstatusbarjobtracker->widget(job);
    } else {
        return self->KStatusBarJobTracker::widget(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnWidget(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Widget_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Widget_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseDescription(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
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
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Description_IsBase(true);
        vkstatusbarjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        self->KStatusBarJobTracker::description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnDescription(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Description_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Description_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseTotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_TotalAmount_IsBase(true);
        vkstatusbarjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        self->KStatusBarJobTracker::totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnTotalAmount(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_TotalAmount_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_TotalAmount_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBasePercent(KStatusBarJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Percent_IsBase(true);
        vkstatusbarjobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        self->KStatusBarJobTracker::percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnPercent(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Percent_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Percent_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSpeed(KStatusBarJobTracker* self, KJob* job, unsigned long value) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Speed_IsBase(true);
        vkstatusbarjobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        self->KStatusBarJobTracker::speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSpeed(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Speed_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Speed_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSlotClean(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotClean_IsBase(true);
        vkstatusbarjobtracker->slotClean(job);
    } else {
        self->KStatusBarJobTracker::slotClean(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSlotClean(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotClean_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_SlotClean_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_Finished(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->finished(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->finished(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseFinished(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Finished_IsBase(true);
        vkstatusbarjobtracker->finished(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnFinished(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Finished_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Finished_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_SlotStop(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->slotStop(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotStop(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSlotStop(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotStop_IsBase(true);
        vkstatusbarjobtracker->slotStop(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotStop(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSlotStop(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotStop_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_SlotStop_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_SlotSuspend(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->slotSuspend(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotSuspend(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSlotSuspend(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotSuspend_IsBase(true);
        vkstatusbarjobtracker->slotSuspend(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotSuspend(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSlotSuspend(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotSuspend_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_SlotSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_SlotResume(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->slotResume(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotResume(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSlotResume(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotResume_IsBase(true);
        vkstatusbarjobtracker->slotResume(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->slotResume(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSlotResume(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SlotResume_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_SlotResume_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_Suspended(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->suspended(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->suspended(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseSuspended(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Suspended_IsBase(true);
        vkstatusbarjobtracker->suspended(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSuspended(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Suspended_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Suspended_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_Resumed(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->resumed(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->resumed(job);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseResumed(KStatusBarJobTracker* self, KJob* job) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Resumed_IsBase(true);
        vkstatusbarjobtracker->resumed(job);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnResumed(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Resumed_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Resumed_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_InfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseInfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_InfoMessage_IsBase(true);
        vkstatusbarjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnInfoMessage(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_InfoMessage_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_InfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_Warning(KStatusBarJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseWarning(KStatusBarJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Warning_IsBase(true);
        vkstatusbarjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnWarning(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Warning_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_ProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKStatusBarJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ProcessedAmount_IsBase(true);
        vkstatusbarjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKStatusBarJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnProcessedAmount(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ProcessedAmount_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_ProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStatusBarJobTracker_Event(KStatusBarJobTracker* self, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->event(event);
    } else {
        return self->KStatusBarJobTracker::event(event);
    }
}

// Base class handler implementation
bool KStatusBarJobTracker_QBaseEvent(KStatusBarJobTracker* self, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Event_IsBase(true);
        return vkstatusbarjobtracker->event(event);
    } else {
        return self->KStatusBarJobTracker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnEvent(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Event_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStatusBarJobTracker_EventFilter(KStatusBarJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->eventFilter(watched, event);
    } else {
        return self->KStatusBarJobTracker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KStatusBarJobTracker_QBaseEventFilter(KStatusBarJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_EventFilter_IsBase(true);
        return vkstatusbarjobtracker->eventFilter(watched, event);
    } else {
        return self->KStatusBarJobTracker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnEventFilter(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_EventFilter_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_TimerEvent(KStatusBarJobTracker* self, QTimerEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->timerEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseTimerEvent(KStatusBarJobTracker* self, QTimerEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_TimerEvent_IsBase(true);
        vkstatusbarjobtracker->timerEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnTimerEvent(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_TimerEvent_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_ChildEvent(KStatusBarJobTracker* self, QChildEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->childEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseChildEvent(KStatusBarJobTracker* self, QChildEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ChildEvent_IsBase(true);
        vkstatusbarjobtracker->childEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnChildEvent(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ChildEvent_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_CustomEvent(KStatusBarJobTracker* self, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->customEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseCustomEvent(KStatusBarJobTracker* self, QEvent* event) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_CustomEvent_IsBase(true);
        vkstatusbarjobtracker->customEvent(event);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnCustomEvent(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_CustomEvent_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_ConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ConnectNotify_IsBase(true);
        vkstatusbarjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnConnectNotify(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_ConnectNotify_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusBarJobTracker_DisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KStatusBarJobTracker_QBaseDisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_DisconnectNotify_IsBase(true);
        vkstatusbarjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKStatusBarJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnDisconnectNotify(KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = dynamic_cast<VirtualKStatusBarJobTracker*>(self);
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_DisconnectNotify_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KStatusBarJobTracker_Sender(const KStatusBarJobTracker* self) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->sender();
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KStatusBarJobTracker_QBaseSender(const KStatusBarJobTracker* self) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Sender_IsBase(true);
        return vkstatusbarjobtracker->sender();
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSender(const KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Sender_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KStatusBarJobTracker_SenderSignalIndex(const KStatusBarJobTracker* self) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KStatusBarJobTracker_QBaseSenderSignalIndex(const KStatusBarJobTracker* self) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SenderSignalIndex_IsBase(true);
        return vkstatusbarjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnSenderSignalIndex(const KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KStatusBarJobTracker_Receivers(const KStatusBarJobTracker* self, const char* signal) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->receivers(signal);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KStatusBarJobTracker_QBaseReceivers(const KStatusBarJobTracker* self, const char* signal) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Receivers_IsBase(true);
        return vkstatusbarjobtracker->receivers(signal);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnReceivers(const KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_Receivers_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStatusBarJobTracker_IsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        return vkstatusbarjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KStatusBarJobTracker_QBaseIsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_IsSignalConnected_IsBase(true);
        return vkstatusbarjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKStatusBarJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusBarJobTracker_OnIsSignalConnected(const KStatusBarJobTracker* self, intptr_t slot) {
    auto* vkstatusbarjobtracker = const_cast<VirtualKStatusBarJobTracker*>(dynamic_cast<const VirtualKStatusBarJobTracker*>(self));
    if (vkstatusbarjobtracker && vkstatusbarjobtracker->isVirtualKStatusBarJobTracker) {
        vkstatusbarjobtracker->setKStatusBarJobTracker_IsSignalConnected_Callback(reinterpret_cast<VirtualKStatusBarJobTracker::KStatusBarJobTracker_IsSignalConnected_Callback>(slot));
    }
}

void KStatusBarJobTracker_Delete(KStatusBarJobTracker* self) {
    delete self;
}
