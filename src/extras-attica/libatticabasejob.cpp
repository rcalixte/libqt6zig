#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkReply>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <atticabasejob.h>
#include "libatticabasejob.h"
#include "libatticabasejob.hxx"

QMetaObject* Attica__BaseJob_MetaObject(const Attica__BaseJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__BaseJob_Metacast(Attica__BaseJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__BaseJob_Metacall(Attica__BaseJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

Attica__Metadata* Attica__BaseJob_Metadata(const Attica__BaseJob* self) {
    return new Attica::Metadata(self->metadata());
}

bool Attica__BaseJob_IsAborted(const Attica__BaseJob* self) {
    return self->isAborted();
}

void Attica__BaseJob_Start(Attica__BaseJob* self) {
    self->start();
}

void Attica__BaseJob_Abort(Attica__BaseJob* self) {
    self->abort();
}

void Attica__BaseJob_Finished(Attica__BaseJob* self, Attica__BaseJob* job) {
    self->finished(job);
}

void Attica__BaseJob_Connect_Finished(Attica__BaseJob* self, intptr_t slot) {
    void (*slotFunc)(Attica__BaseJob*, Attica__BaseJob*) = reinterpret_cast<void (*)(Attica__BaseJob*, Attica__BaseJob*)>(slot);
    Attica::BaseJob::connect(self, &Attica::BaseJob::finished, [self, slotFunc](Attica::BaseJob* job) {
        Attica__BaseJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void Attica__BaseJob_Delete(Attica__BaseJob* self) {
    delete self;
}
