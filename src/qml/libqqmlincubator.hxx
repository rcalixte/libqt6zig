#pragma once
#ifndef QML_LIBQQMLINCUBATOR_HXX
#define QML_LIBQQMLINCUBATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlIncubator so that we can call protected methods
class VirtualQQmlIncubator final : public QQmlIncubator {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlIncubator = true;

    // Virtual class public types (including callbacks)
    using QQmlIncubator_StatusChanged_Callback = void (*)(QQmlIncubator*, int);
    using QQmlIncubator_SetInitialState_Callback = void (*)(QQmlIncubator*, QObject*);

  protected:
    // Instance callback storage
    QQmlIncubator_StatusChanged_Callback qqmlincubator_statuschanged_callback = nullptr;
    QQmlIncubator_SetInitialState_Callback qqmlincubator_setinitialstate_callback = nullptr;

    // Instance base flags
    mutable bool qqmlincubator_statuschanged_isbase = false;
    mutable bool qqmlincubator_setinitialstate_isbase = false;

  public:
    VirtualQQmlIncubator() : QQmlIncubator() {};
    VirtualQQmlIncubator(QQmlIncubator::IncubationMode param1) : QQmlIncubator(param1) {};

    // Callback setters
    inline void setQQmlIncubator_StatusChanged_Callback(QQmlIncubator_StatusChanged_Callback cb) { qqmlincubator_statuschanged_callback = cb; }
    inline void setQQmlIncubator_SetInitialState_Callback(QQmlIncubator_SetInitialState_Callback cb) { qqmlincubator_setinitialstate_callback = cb; }

    // Base flag setters
    inline void setQQmlIncubator_StatusChanged_IsBase(bool value) const { qqmlincubator_statuschanged_isbase = value; }
    inline void setQQmlIncubator_SetInitialState_IsBase(bool value) const { qqmlincubator_setinitialstate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void statusChanged(QQmlIncubator::Status param1) override {
        if (qqmlincubator_statuschanged_isbase) {
            qqmlincubator_statuschanged_isbase = false;
            QQmlIncubator::statusChanged(param1);
            return;
        }
        auto statuschanged_cb = qqmlincubator_statuschanged_callback;
        if (statuschanged_cb) {
            int cbval1 = static_cast<int>(param1);
            statuschanged_cb(this, cbval1);
            return;
        }
        QQmlIncubator::statusChanged(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setInitialState(QObject* initialState) override {
        if (qqmlincubator_setinitialstate_isbase) {
            qqmlincubator_setinitialstate_isbase = false;
            QQmlIncubator::setInitialState(initialState);
            return;
        }
        auto setinitialstate_cb = qqmlincubator_setinitialstate_callback;
        if (setinitialstate_cb) {
            QObject* cbval1 = initialState;
            setinitialstate_cb(this, cbval1);
            return;
        }
        QQmlIncubator::setInitialState(initialState);
    }

    // Friend functions
    friend void QQmlIncubator_StatusChanged(QQmlIncubator* self, int param1);
    friend void QQmlIncubator_SuperStatusChanged(QQmlIncubator* self, int param1);
    friend void QQmlIncubator_SetInitialState(QQmlIncubator* self, QObject* initialState);
    friend void QQmlIncubator_SuperSetInitialState(QQmlIncubator* self, QObject* initialState);
};

// This class is a subclass of QQmlIncubationController so that we can call protected methods
class VirtualQQmlIncubationController final : public QQmlIncubationController {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlIncubationController = true;

    // Virtual class public types (including callbacks)
    using QQmlIncubationController_IncubatingObjectCountChanged_Callback = void (*)(QQmlIncubationController*, int);

  protected:
    // Instance callback storage
    QQmlIncubationController_IncubatingObjectCountChanged_Callback qqmlincubationcontroller_incubatingobjectcountchanged_callback = nullptr;

    // Instance base flags
    mutable bool qqmlincubationcontroller_incubatingobjectcountchanged_isbase = false;

  public:
    VirtualQQmlIncubationController() : QQmlIncubationController() {};

    // Callback setters
    inline void setQQmlIncubationController_IncubatingObjectCountChanged_Callback(QQmlIncubationController_IncubatingObjectCountChanged_Callback cb) { qqmlincubationcontroller_incubatingobjectcountchanged_callback = cb; }

    // Base flag setters
    inline void setQQmlIncubationController_IncubatingObjectCountChanged_IsBase(bool value) const { qqmlincubationcontroller_incubatingobjectcountchanged_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void incubatingObjectCountChanged(int param1) override {
        if (qqmlincubationcontroller_incubatingobjectcountchanged_isbase) {
            qqmlincubationcontroller_incubatingobjectcountchanged_isbase = false;
            QQmlIncubationController::incubatingObjectCountChanged(param1);
            return;
        }
        auto incubatingobjectcountchanged_cb = qqmlincubationcontroller_incubatingobjectcountchanged_callback;
        if (incubatingobjectcountchanged_cb) {
            int cbval1 = param1;
            incubatingobjectcountchanged_cb(this, cbval1);
            return;
        }
        QQmlIncubationController::incubatingObjectCountChanged(param1);
    }

    // Friend functions
    friend void QQmlIncubationController_IncubatingObjectCountChanged(QQmlIncubationController* self, int param1);
    friend void QQmlIncubationController_SuperIncubatingObjectCountChanged(QQmlIncubationController* self, int param1);
};

#endif
