#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__UntrustedProgramHandlerInterface
#include <KJob>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <untrustedprogramhandlerinterface.h>
#include "libuntrustedprogramhandlerinterface.h"
#include "libuntrustedprogramhandlerinterface.hxx"

QMetaObject* KIO__UntrustedProgramHandlerInterface_MetaObject(const KIO__UntrustedProgramHandlerInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__UntrustedProgramHandlerInterface_Metacast(KIO__UntrustedProgramHandlerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__UntrustedProgramHandlerInterface_Metacall(KIO__UntrustedProgramHandlerInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__UntrustedProgramHandlerInterface_ShowUntrustedProgramWarning(KIO__UntrustedProgramHandlerInterface* self, KJob* job, const libqt_string programName) {
    QString programName_QString = QString::fromUtf8(programName.data, programName.len);
    self->showUntrustedProgramWarning(job, programName_QString);
}

bool KIO__UntrustedProgramHandlerInterface_MakeServiceFileExecutable(KIO__UntrustedProgramHandlerInterface* self, const libqt_string fileName, libqt_string errorString) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return self->makeServiceFileExecutable(fileName_QString, errorString_QString);
}

bool KIO__UntrustedProgramHandlerInterface_SetExecuteBit(KIO__UntrustedProgramHandlerInterface* self, const libqt_string fileName, libqt_string errorString) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return self->setExecuteBit(fileName_QString, errorString_QString);
}

void KIO__UntrustedProgramHandlerInterface_Result(KIO__UntrustedProgramHandlerInterface* self, bool confirmed) {
    self->result(confirmed);
}

void KIO__UntrustedProgramHandlerInterface_Connect_Result(KIO__UntrustedProgramHandlerInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__UntrustedProgramHandlerInterface*, bool) = reinterpret_cast<void (*)(KIO__UntrustedProgramHandlerInterface*, bool)>(slot);
    KIO::UntrustedProgramHandlerInterface::connect(self, &KIO::UntrustedProgramHandlerInterface::result, [self, slotFunc](bool confirmed) {
        bool sigval1 = confirmed;
        slotFunc(self, sigval1);
    });
}
