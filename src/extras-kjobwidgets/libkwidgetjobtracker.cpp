#include <KAbstractWidgetJobTracker>
#include <KJob>
#include <KJobTrackerInterface>
#include <KWidgetJobTracker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kwidgetjobtracker.h>
#include "libkwidgetjobtracker.h"
#include "libkwidgetjobtracker.hxx"

KWidgetJobTracker* KWidgetJobTracker_new(QWidget* parent) {
    return new KWidgetJobTracker(parent);
}

KWidgetJobTracker* KWidgetJobTracker_new2() {
    return new KWidgetJobTracker();
}

QMetaObject* KWidgetJobTracker_MetaObject(const KWidgetJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWidgetJobTracker_Metacast(KWidgetJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWidgetJobTracker_Metacall(KWidgetJobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QWidget* KWidgetJobTracker_Widget(KWidgetJobTracker* self, KJob* job) {
    return self->widget(job);
}

void KWidgetJobTracker_RegisterJob(KWidgetJobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KWidgetJobTracker_UnregisterJob(KWidgetJobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

bool KWidgetJobTracker_KeepOpen(const KWidgetJobTracker* self, KJob* job) {
    return self->keepOpen(job);
}

void KWidgetJobTracker_Delete(KWidgetJobTracker* self) {
    delete self;
}
