#include <KSandbox>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSandbox__ProcessContext
#include <QProcess>
#include <ksandbox.h>
#include "libksandbox.h"
#include "libksandbox.hxx"

bool KSandbox_IsInside() {
    return KSandbox::isInside();
}

bool KSandbox_IsFlatpak() {
    return KSandbox::isFlatpak();
}

bool KSandbox_IsSnap() {
    return KSandbox::isSnap();
}

KSandbox__ProcessContext* KSandbox_MakeHostContext(const QProcess* param1) {
    return new KSandbox::ProcessContext(KSandbox::makeHostContext(*param1));
}

void KSandbox_StartHostProcess(QProcess* param1, int param2) {
    KSandbox::startHostProcess(*param1, static_cast<QProcess::OpenMode>(param2));
}

KSandbox__ProcessContext* KSandbox__ProcessContext_new(const KSandbox__ProcessContext* param1) {
    return new KSandbox::ProcessContext(*param1);
}

void KSandbox__ProcessContext_Delete(KSandbox__ProcessContext* self) {
    delete self;
}
