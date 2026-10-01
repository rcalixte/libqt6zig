#include <QtLogging>
#include <QRunnable>
#include <qrunnable.h>
#include "libqrunnable.h"
#include "libqrunnable.hxx"

QRunnable* QRunnable_new() {
    return new VirtualQRunnable();
}

void QRunnable_Run(QRunnable* self) {
    self->run();
}

bool QRunnable_AutoDelete(const QRunnable* self) {
    return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete) {
    self->setAutoDelete(autoDelete);
}

// Auxiliary method to allow providing re-implementation
void QRunnable_OnRun(QRunnable* self, intptr_t slot) {
    if (auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self))
        vqrunnable->qrunnable_run_callback = reinterpret_cast<VirtualQRunnable::QRunnable_Run_Callback>(slot);
}

void QRunnable_Delete(QRunnable* self) {
    delete self;
}
