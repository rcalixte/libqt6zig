#pragma once
#ifndef QML_LIBQQMLINCUBATOR_HXX
#define QML_LIBQQMLINCUBATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlIncubator
class VirtualQQmlIncubator final : public QQmlIncubator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlIncubator_StatusChanged_Callback = void (*)(QQmlIncubator*, int);
    using QQmlIncubator_SetInitialState_Callback = void (*)(QQmlIncubator*, QObject*);

    // Instance callback storage
    QQmlIncubator_StatusChanged_Callback qqmlincubator_statuschanged_callback = nullptr;
    QQmlIncubator_SetInitialState_Callback qqmlincubator_setinitialstate_callback = nullptr;

    // Access struct
    struct Base : QQmlIncubator {
        using QQmlIncubator::setInitialState;
        using QQmlIncubator::statusChanged;
    };

    VirtualQQmlIncubator() : QQmlIncubator() {};
    VirtualQQmlIncubator(QQmlIncubator::IncubationMode param1) : QQmlIncubator(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void statusChanged(QQmlIncubator::Status param1) override {
        if (qqmlincubator_statuschanged_callback) {
            int cbval1 = static_cast<int>(param1);
            qqmlincubator_statuschanged_callback(this, cbval1);
            return;
        }
        QQmlIncubator::statusChanged(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setInitialState(QObject* initialState) override {
        if (qqmlincubator_setinitialstate_callback) {
            QObject* cbval1 = initialState;
            qqmlincubator_setinitialstate_callback(this, cbval1);
            return;
        }
        QQmlIncubator::setInitialState(initialState);
    }

    // Friend functions
    friend void QQmlIncubator_SuperStatusChanged(QQmlIncubator* self, int param1);
    friend void QQmlIncubator_SuperSetInitialState(QQmlIncubator* self, QObject* initialState);
};

// This class is a subclass of QQmlIncubationController
class VirtualQQmlIncubationController final : public QQmlIncubationController {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlIncubationController_IncubatingObjectCountChanged_Callback = void (*)(QQmlIncubationController*, int);

    // Instance callback storage
    QQmlIncubationController_IncubatingObjectCountChanged_Callback qqmlincubationcontroller_incubatingobjectcountchanged_callback = nullptr;

    // Access struct
    struct Base : QQmlIncubationController {
        using QQmlIncubationController::incubatingObjectCountChanged;
    };

    VirtualQQmlIncubationController() : QQmlIncubationController() {};

    // Virtual method for C ABI access and custom callback
    virtual void incubatingObjectCountChanged(int param1) override {
        if (qqmlincubationcontroller_incubatingobjectcountchanged_callback) {
            int cbval1 = param1;
            qqmlincubationcontroller_incubatingobjectcountchanged_callback(this, cbval1);
            return;
        }
        QQmlIncubationController::incubatingObjectCountChanged(param1);
    }

    // Friend functions
    friend void QQmlIncubationController_SuperIncubatingObjectCountChanged(QQmlIncubationController* self, int param1);
};

#endif
