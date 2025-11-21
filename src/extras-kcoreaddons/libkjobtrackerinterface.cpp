#include <KJob>
#include <KJobTrackerInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kjobtrackerinterface.h>
#include "libkjobtrackerinterface.h"
#include "libkjobtrackerinterface.hxx"

KJobTrackerInterface* KJobTrackerInterface_new() {
    return new KJobTrackerInterface();
}

KJobTrackerInterface* KJobTrackerInterface_new2(QObject* parent) {
    return new KJobTrackerInterface(parent);
}

QMetaObject* KJobTrackerInterface_MetaObject(const KJobTrackerInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJobTrackerInterface_Metacast(KJobTrackerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJobTrackerInterface_Metacall(KJobTrackerInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KJobTrackerInterface_RegisterJob(KJobTrackerInterface* self, KJob* job) {
    self->registerJob(job);
}

void KJobTrackerInterface_UnregisterJob(KJobTrackerInterface* self, KJob* job) {
    self->unregisterJob(job);
}

void KJobTrackerInterface_Delete(KJobTrackerInterface* self) {
    delete self;
}
