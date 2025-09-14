#include <KAbstractWidgetJobTracker>
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
#include <QWidget>
#include <kabstractwidgetjobtracker.h>
#include "libkabstractwidgetjobtracker.h"
#include "libkabstractwidgetjobtracker.hxx"

KAbstractWidgetJobTracker* KAbstractWidgetJobTracker_new(QWidget* parent) {
    return new VirtualKAbstractWidgetJobTracker(parent);
}

KAbstractWidgetJobTracker* KAbstractWidgetJobTracker_new2() {
    return new VirtualKAbstractWidgetJobTracker();
}

QMetaObject* KAbstractWidgetJobTracker_MetaObject(const KAbstractWidgetJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAbstractWidgetJobTracker_Metacast(KAbstractWidgetJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAbstractWidgetJobTracker_Metacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAbstractWidgetJobTracker_Tr(const char* s) {
    QString _ret = KAbstractWidgetJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAbstractWidgetJobTracker_RegisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        self->registerJob(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->registerJob(job);
    }
}

void KAbstractWidgetJobTracker_UnregisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        self->unregisterJob(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->unregisterJob(job);
    }
}

QWidget* KAbstractWidgetJobTracker_Widget(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->widget(job);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->widget(job);
    }
}

void KAbstractWidgetJobTracker_SetStopOnClose(KAbstractWidgetJobTracker* self, KJob* job, bool stopOnClose) {
    self->setStopOnClose(job, stopOnClose);
}

bool KAbstractWidgetJobTracker_StopOnClose(const KAbstractWidgetJobTracker* self, KJob* job) {
    return self->stopOnClose(job);
}

void KAbstractWidgetJobTracker_SetAutoDelete(KAbstractWidgetJobTracker* self, KJob* job, bool autoDelete) {
    self->setAutoDelete(job, autoDelete);
}

bool KAbstractWidgetJobTracker_AutoDelete(const KAbstractWidgetJobTracker* self, KJob* job) {
    return self->autoDelete(job);
}

void KAbstractWidgetJobTracker_Finished(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->finished(job);
    }
}

void KAbstractWidgetJobTracker_SlotStop(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->slotStop(job);
    }
}

void KAbstractWidgetJobTracker_SlotSuspend(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->slotSuspend(job);
    }
}

void KAbstractWidgetJobTracker_SlotResume(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->slotResume(job);
    }
}

void KAbstractWidgetJobTracker_SlotClean(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->slotClean(job);
    }
}

void KAbstractWidgetJobTracker_Stopped(KAbstractWidgetJobTracker* self, KJob* job) {
    self->stopped(job);
}

void KAbstractWidgetJobTracker_Connect_Stopped(KAbstractWidgetJobTracker* self, intptr_t slot) {
    void (*slotFunc)(KAbstractWidgetJobTracker*, KJob*) = reinterpret_cast<void (*)(KAbstractWidgetJobTracker*, KJob*)>(slot);
    KAbstractWidgetJobTracker::connect(self, &KAbstractWidgetJobTracker::stopped, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KAbstractWidgetJobTracker_Suspend(KAbstractWidgetJobTracker* self, KJob* job) {
    self->suspend(job);
}

void KAbstractWidgetJobTracker_Connect_Suspend(KAbstractWidgetJobTracker* self, intptr_t slot) {
    void (*slotFunc)(KAbstractWidgetJobTracker*, KJob*) = reinterpret_cast<void (*)(KAbstractWidgetJobTracker*, KJob*)>(slot);
    KAbstractWidgetJobTracker::connect(self, &KAbstractWidgetJobTracker::suspend, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KAbstractWidgetJobTracker_Resume(KAbstractWidgetJobTracker* self, KJob* job) {
    self->resume(job);
}

void KAbstractWidgetJobTracker_Connect_Resume(KAbstractWidgetJobTracker* self, intptr_t slot) {
    void (*slotFunc)(KAbstractWidgetJobTracker*, KJob*) = reinterpret_cast<void (*)(KAbstractWidgetJobTracker*, KJob*)>(slot);
    KAbstractWidgetJobTracker::connect(self, &KAbstractWidgetJobTracker::resume, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

libqt_string KAbstractWidgetJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KAbstractWidgetJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAbstractWidgetJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAbstractWidgetJobTracker::tr(s, c, static_cast<int>(n));
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
int KAbstractWidgetJobTracker_QBaseMetacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Metacall_IsBase(true);
        return vkabstractwidgetjobtracker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAbstractWidgetJobTracker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnMetacall(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Metacall_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseRegisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_RegisterJob_IsBase(true);
        vkabstractwidgetjobtracker->registerJob(job);
    } else {
        self->KAbstractWidgetJobTracker::registerJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnRegisterJob(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_RegisterJob_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_RegisterJob_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseUnregisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_UnregisterJob_IsBase(true);
        vkabstractwidgetjobtracker->unregisterJob(job);
    } else {
        self->KAbstractWidgetJobTracker::unregisterJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnUnregisterJob(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_UnregisterJob_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_UnregisterJob_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KAbstractWidgetJobTracker_QBaseWidget(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Widget_IsBase(true);
        return vkabstractwidgetjobtracker->widget(job);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->widget(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnWidget(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Widget_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Widget_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseFinished(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Finished_IsBase(true);
        vkabstractwidgetjobtracker->finished(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->finished(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnFinished(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Finished_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Finished_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSlotStop(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotStop_IsBase(true);
        vkabstractwidgetjobtracker->slotStop(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->slotStop(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSlotStop(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotStop_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_SlotStop_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSlotSuspend(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotSuspend_IsBase(true);
        vkabstractwidgetjobtracker->slotSuspend(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->slotSuspend(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSlotSuspend(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotSuspend_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_SlotSuspend_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSlotResume(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotResume_IsBase(true);
        vkabstractwidgetjobtracker->slotResume(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->slotResume(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSlotResume(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotResume_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_SlotResume_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSlotClean(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotClean_IsBase(true);
        vkabstractwidgetjobtracker->slotClean(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->slotClean(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSlotClean(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SlotClean_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_SlotClean_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Suspended(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->suspended(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->suspended(job);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSuspended(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Suspended_IsBase(true);
        vkabstractwidgetjobtracker->suspended(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->suspended(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSuspended(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Suspended_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Suspended_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Resumed(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->resumed(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->resumed(job);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseResumed(KAbstractWidgetJobTracker* self, KJob* job) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Resumed_IsBase(true);
        vkabstractwidgetjobtracker->resumed(job);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->resumed(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnResumed(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Resumed_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Resumed_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Description(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
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
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseDescription(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
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
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Description_IsBase(true);
        vkabstractwidgetjobtracker->description(job, title_QString, field1_QPair, field2_QPair);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->description(job, title_QString, field1_QPair, field2_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnDescription(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Description_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Description_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_InfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseInfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_InfoMessage_IsBase(true);
        vkabstractwidgetjobtracker->infoMessage(job, message_QString);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->infoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnInfoMessage(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_InfoMessage_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_InfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Warning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->warning(job, message_QString);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseWarning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Warning_IsBase(true);
        vkabstractwidgetjobtracker->warning(job, message_QString);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->warning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnWarning(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Warning_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Warning_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_TotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseTotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_TotalAmount_IsBase(true);
        vkabstractwidgetjobtracker->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnTotalAmount(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_TotalAmount_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_TotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_ProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ProcessedAmount_IsBase(true);
        vkabstractwidgetjobtracker->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->processedAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnProcessedAmount(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ProcessedAmount_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_ProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Percent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBasePercent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Percent_IsBase(true);
        vkabstractwidgetjobtracker->percent(job, static_cast<unsigned long>(percent));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->percent(job, static_cast<unsigned long>(percent));
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnPercent(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Percent_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Percent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_Speed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseSpeed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Speed_IsBase(true);
        vkabstractwidgetjobtracker->speed(job, static_cast<unsigned long>(value));
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->speed(job, static_cast<unsigned long>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSpeed(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Speed_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Speed_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractWidgetJobTracker_Event(KAbstractWidgetJobTracker* self, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->event(event);
    } else {
        return self->KAbstractWidgetJobTracker::event(event);
    }
}

// Base class handler implementation
bool KAbstractWidgetJobTracker_QBaseEvent(KAbstractWidgetJobTracker* self, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Event_IsBase(true);
        return vkabstractwidgetjobtracker->event(event);
    } else {
        return self->KAbstractWidgetJobTracker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnEvent(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Event_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractWidgetJobTracker_EventFilter(KAbstractWidgetJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->eventFilter(watched, event);
    } else {
        return self->KAbstractWidgetJobTracker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KAbstractWidgetJobTracker_QBaseEventFilter(KAbstractWidgetJobTracker* self, QObject* watched, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_EventFilter_IsBase(true);
        return vkabstractwidgetjobtracker->eventFilter(watched, event);
    } else {
        return self->KAbstractWidgetJobTracker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnEventFilter(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_EventFilter_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_TimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->timerEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseTimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_TimerEvent_IsBase(true);
        vkabstractwidgetjobtracker->timerEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnTimerEvent(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_TimerEvent_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_ChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->childEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ChildEvent_IsBase(true);
        vkabstractwidgetjobtracker->childEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnChildEvent(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ChildEvent_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_CustomEvent(KAbstractWidgetJobTracker* self, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->customEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseCustomEvent(KAbstractWidgetJobTracker* self, QEvent* event) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_CustomEvent_IsBase(true);
        vkabstractwidgetjobtracker->customEvent(event);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnCustomEvent(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_CustomEvent_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_ConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ConnectNotify_IsBase(true);
        vkabstractwidgetjobtracker->connectNotify(*signal);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnConnectNotify(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_ConnectNotify_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractWidgetJobTracker_DisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractWidgetJobTracker_QBaseDisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_DisconnectNotify_IsBase(true);
        vkabstractwidgetjobtracker->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractWidgetJobTracker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnDisconnectNotify(KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = dynamic_cast<VirtualKAbstractWidgetJobTracker*>(self);
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_DisconnectNotify_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAbstractWidgetJobTracker_Sender(const KAbstractWidgetJobTracker* self) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->sender();
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAbstractWidgetJobTracker_QBaseSender(const KAbstractWidgetJobTracker* self) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Sender_IsBase(true);
        return vkabstractwidgetjobtracker->sender();
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSender(const KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Sender_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractWidgetJobTracker_SenderSignalIndex(const KAbstractWidgetJobTracker* self) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAbstractWidgetJobTracker_QBaseSenderSignalIndex(const KAbstractWidgetJobTracker* self) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SenderSignalIndex_IsBase(true);
        return vkabstractwidgetjobtracker->senderSignalIndex();
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnSenderSignalIndex(const KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractWidgetJobTracker_Receivers(const KAbstractWidgetJobTracker* self, const char* signal) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->receivers(signal);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAbstractWidgetJobTracker_QBaseReceivers(const KAbstractWidgetJobTracker* self, const char* signal) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Receivers_IsBase(true);
        return vkabstractwidgetjobtracker->receivers(signal);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnReceivers(const KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_Receivers_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractWidgetJobTracker_IsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        return vkabstractwidgetjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAbstractWidgetJobTracker_QBaseIsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_IsSignalConnected_IsBase(true);
        return vkabstractwidgetjobtracker->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractWidgetJobTracker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractWidgetJobTracker_OnIsSignalConnected(const KAbstractWidgetJobTracker* self, intptr_t slot) {
    auto* vkabstractwidgetjobtracker = const_cast<VirtualKAbstractWidgetJobTracker*>(dynamic_cast<const VirtualKAbstractWidgetJobTracker*>(self));
    if (vkabstractwidgetjobtracker && vkabstractwidgetjobtracker->isVirtualKAbstractWidgetJobTracker) {
        vkabstractwidgetjobtracker->setKAbstractWidgetJobTracker_IsSignalConnected_Callback(reinterpret_cast<VirtualKAbstractWidgetJobTracker::KAbstractWidgetJobTracker_IsSignalConnected_Callback>(slot));
    }
}

void KAbstractWidgetJobTracker_Delete(KAbstractWidgetJobTracker* self) {
    delete self;
}
