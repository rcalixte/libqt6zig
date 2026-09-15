#include <QList>
#include <QMap>
#include <QObject>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlIncubationController>
#include <QQmlIncubator>
#include <QString>
#include <QVariant>
#include <qqmlincubator.h>
#include "libqqmlincubator.h"
#include "libqqmlincubator.hxx"

QQmlIncubator* QQmlIncubator_new() {
    return new VirtualQQmlIncubator();
}

QQmlIncubator* QQmlIncubator_new2(int param1) {
    return new VirtualQQmlIncubator(static_cast<QQmlIncubator::IncubationMode>(param1));
}

void QQmlIncubator_Clear(QQmlIncubator* self) {
    self->clear();
}

void QQmlIncubator_ForceCompletion(QQmlIncubator* self) {
    self->forceCompletion();
}

bool QQmlIncubator_IsNull(const QQmlIncubator* self) {
    return self->isNull();
}

bool QQmlIncubator_IsReady(const QQmlIncubator* self) {
    return self->isReady();
}

bool QQmlIncubator_IsError(const QQmlIncubator* self) {
    return self->isError();
}

bool QQmlIncubator_IsLoading(const QQmlIncubator* self) {
    return self->isLoading();
}

libqt_list /* of QQmlError* */ QQmlIncubator_Errors(const QQmlIncubator* self) {
    QList<QQmlError> _ret = self->errors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQmlError** _arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QQmlError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QQmlIncubator_IncubationMode(const QQmlIncubator* self) {
    return static_cast<int>(self->incubationMode());
}

int QQmlIncubator_Status(const QQmlIncubator* self) {
    return static_cast<int>(self->status());
}

QObject* QQmlIncubator_Object(const QQmlIncubator* self) {
    return self->object();
}

void QQmlIncubator_SetInitialProperties(QQmlIncubator* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties) {
    QMap<QString, QVariant> initialProperties_QMap;
    libqt_string* initialProperties_karr = static_cast<libqt_string*>(initialProperties.keys);
    QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
    for (size_t i = 0; i < initialProperties.len; ++i) {
        QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
        initialProperties_QMap.insert(initialProperties_karr_i_QString, *(initialProperties_varr[i]));
    }
    self->setInitialProperties(initialProperties_QMap);
}

void QQmlIncubator_StatusChanged(QQmlIncubator* self, int param1) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator) {
        vqqmlincubator->statusChanged(static_cast<QQmlIncubator::Status>(param1));
    }
}

void QQmlIncubator_SetInitialState(QQmlIncubator* self, QObject* initialState) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator) {
        vqqmlincubator->setInitialState(initialState);
    }
}

// Base class handler implementation
void QQmlIncubator_SuperStatusChanged(QQmlIncubator* self, int param1) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator) {
        vqqmlincubator->setQQmlIncubator_StatusChanged_IsBase(true);
        vqqmlincubator->statusChanged(static_cast<QQmlIncubator::Status>(param1));
    } else {
        ((VirtualQQmlIncubator*)self)->statusChanged(static_cast<QQmlIncubator::Status>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlIncubator_OnStatusChanged(QQmlIncubator* self, intptr_t slot) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator)
        vqqmlincubator->setQQmlIncubator_StatusChanged_Callback(reinterpret_cast<VirtualQQmlIncubator::QQmlIncubator_StatusChanged_Callback>(slot));
}

// Base class handler implementation
void QQmlIncubator_SuperSetInitialState(QQmlIncubator* self, QObject* initialState) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator) {
        vqqmlincubator->setQQmlIncubator_SetInitialState_IsBase(true);
        vqqmlincubator->setInitialState(initialState);
    } else {
        ((VirtualQQmlIncubator*)self)->setInitialState(initialState);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlIncubator_OnSetInitialState(QQmlIncubator* self, intptr_t slot) {
    auto* vqqmlincubator = dynamic_cast<VirtualQQmlIncubator*>(self);
    if (vqqmlincubator && vqqmlincubator->isVirtualQQmlIncubator)
        vqqmlincubator->setQQmlIncubator_SetInitialState_Callback(reinterpret_cast<VirtualQQmlIncubator::QQmlIncubator_SetInitialState_Callback>(slot));
}

void QQmlIncubator_Delete(QQmlIncubator* self) {
    delete self;
}

QQmlIncubationController* QQmlIncubationController_new() {
    return new VirtualQQmlIncubationController();
}

QQmlEngine* QQmlIncubationController_Engine(const QQmlIncubationController* self) {
    return self->engine();
}

int QQmlIncubationController_IncubatingObjectCount(const QQmlIncubationController* self) {
    return self->incubatingObjectCount();
}

void QQmlIncubationController_IncubateFor(QQmlIncubationController* self, int msecs) {
    self->incubateFor(static_cast<int>(msecs));
}

void QQmlIncubationController_IncubatingObjectCountChanged(QQmlIncubationController* self, int param1) {
    auto* vqqmlincubationcontroller = dynamic_cast<VirtualQQmlIncubationController*>(self);
    if (vqqmlincubationcontroller && vqqmlincubationcontroller->isVirtualQQmlIncubationController) {
        vqqmlincubationcontroller->incubatingObjectCountChanged(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QQmlIncubationController_SuperIncubatingObjectCountChanged(QQmlIncubationController* self, int param1) {
    auto* vqqmlincubationcontroller = dynamic_cast<VirtualQQmlIncubationController*>(self);
    if (vqqmlincubationcontroller && vqqmlincubationcontroller->isVirtualQQmlIncubationController) {
        vqqmlincubationcontroller->setQQmlIncubationController_IncubatingObjectCountChanged_IsBase(true);
        vqqmlincubationcontroller->incubatingObjectCountChanged(static_cast<int>(param1));
    } else {
        ((VirtualQQmlIncubationController*)self)->incubatingObjectCountChanged(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlIncubationController_OnIncubatingObjectCountChanged(QQmlIncubationController* self, intptr_t slot) {
    auto* vqqmlincubationcontroller = dynamic_cast<VirtualQQmlIncubationController*>(self);
    if (vqqmlincubationcontroller && vqqmlincubationcontroller->isVirtualQQmlIncubationController)
        vqqmlincubationcontroller->setQQmlIncubationController_IncubatingObjectCountChanged_Callback(reinterpret_cast<VirtualQQmlIncubationController::QQmlIncubationController_IncubatingObjectCountChanged_Callback>(slot));
}

void QQmlIncubationController_Delete(QQmlIncubationController* self) {
    delete self;
}
