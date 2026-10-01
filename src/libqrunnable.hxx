#pragma once
#ifndef LIBQRUNNABLE_HXX
#define LIBQRUNNABLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRunnable
class VirtualQRunnable : public QRunnable {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRunnable_Run_Callback = void (*)(QRunnable*);

    // Instance callback storage
    QRunnable_Run_Callback qrunnable_run_callback = nullptr;

    VirtualQRunnable() : QRunnable() {};

    // Virtual method for C ABI access and custom callback
    virtual void run() override {
        if (qrunnable_run_callback) {
            qrunnable_run_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QRunnable::run called without being implemented");
    }
};

#endif
