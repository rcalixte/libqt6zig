#include <KAbstractWidgetJobTracker>
#include <KJob>
#include <KJobTrackerInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kabstractwidgetjobtracker.h>
#include "libkabstractwidgetjobtracker.h"
#include "libkabstractwidgetjobtracker.hxx"

QMetaObject* KAbstractWidgetJobTracker_MetaObject(const KAbstractWidgetJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAbstractWidgetJobTracker_Metacast(KAbstractWidgetJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAbstractWidgetJobTracker_Metacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KAbstractWidgetJobTracker_RegisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KAbstractWidgetJobTracker_UnregisterJob(KAbstractWidgetJobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

QWidget* KAbstractWidgetJobTracker_Widget(KAbstractWidgetJobTracker* self, KJob* job) {
    return self->widget(job);
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

void KAbstractWidgetJobTracker_Delete(KAbstractWidgetJobTracker* self) {
    delete self;
}
