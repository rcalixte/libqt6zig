#include <KJob>
#include <KJobTrackerInterface>
#include <KUiServerV2JobTracker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kuiserverv2jobtracker.h>
#include "libkuiserverv2jobtracker.h"
#include "libkuiserverv2jobtracker.hxx"

KUiServerV2JobTracker* KUiServerV2JobTracker_new() {
    return new KUiServerV2JobTracker();
}

KUiServerV2JobTracker* KUiServerV2JobTracker_new2(QObject* parent) {
    return new KUiServerV2JobTracker(parent);
}

QMetaObject* KUiServerV2JobTracker_MetaObject(const KUiServerV2JobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUiServerV2JobTracker_Metacast(KUiServerV2JobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUiServerV2JobTracker_Metacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KUiServerV2JobTracker_RegisterJob(KUiServerV2JobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KUiServerV2JobTracker_UnregisterJob(KUiServerV2JobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

void KUiServerV2JobTracker_Delete(KUiServerV2JobTracker* self) {
    delete self;
}
