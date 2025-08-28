#include <QRunnable>
#include <qrunnable.h>
#include "libqrunnable.h"
#include "libqrunnable.hxx"

QRunnable* QRunnable_new() {
    return new VirtualQRunnable();
}

void QRunnable_Run(QRunnable* self) {
    auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self);
    if (vqrunnable && vqrunnable->isVirtualQRunnable) {
        vqrunnable->run();
    } else {
        ((VirtualQRunnable*)self)->run();
    }
}

bool QRunnable_AutoDelete(const QRunnable* self) {
    return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete) {
    self->setAutoDelete(autoDelete);
}

// Base class handler implementation
void QRunnable_QBaseRun(QRunnable* self) {
    auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self);
    if (vqrunnable && vqrunnable->isVirtualQRunnable) {
        vqrunnable->setQRunnable_Run_IsBase(true);
        vqrunnable->run();
    } else {
        ((VirtualQRunnable*)self)->run();
    }
}

// Auxiliary method to allow providing re-implementation
void QRunnable_OnRun(QRunnable* self, intptr_t slot) {
    auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self);
    if (vqrunnable && vqrunnable->isVirtualQRunnable) {
        vqrunnable->setQRunnable_Run_Callback(reinterpret_cast<VirtualQRunnable::QRunnable_Run_Callback>(slot));
    }
}

void QRunnable_Delete(QRunnable* self) {
    delete self;
}
