#pragma once
#ifndef LIBQGESTURERECOGNIZER_HXX
#define LIBQGESTURERECOGNIZER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGestureRecognizer
class VirtualQGestureRecognizer : public QGestureRecognizer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGestureRecognizer_Create_Callback = QGesture* (*)(QGestureRecognizer*, QObject*);
    using QGestureRecognizer_Recognize_Callback = int (*)(QGestureRecognizer*, QGesture*, QObject*, QEvent*);
    using QGestureRecognizer_Reset_Callback = void (*)(QGestureRecognizer*, QGesture*);

    // Instance callback storage
    QGestureRecognizer_Create_Callback qgesturerecognizer_create_callback = nullptr;
    QGestureRecognizer_Recognize_Callback qgesturerecognizer_recognize_callback = nullptr;
    QGestureRecognizer_Reset_Callback qgesturerecognizer_reset_callback = nullptr;

    VirtualQGestureRecognizer() : QGestureRecognizer() {};

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (qgesturerecognizer_create_callback) {
            QObject* cbval1 = target;
            QGesture* callback_ret = qgesturerecognizer_create_callback(this, cbval1);
            return callback_ret;
        }
        return QGestureRecognizer::create(target);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* state, QObject* watched, QEvent* event) override {
        if (qgesturerecognizer_recognize_callback) {
            QGesture* cbval1 = state;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;
            int callback_ret = qgesturerecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGestureRecognizer::recognize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (qgesturerecognizer_reset_callback) {
            QGesture* cbval1 = state;
            qgesturerecognizer_reset_callback(this, cbval1);
            return;
        }
        QGestureRecognizer::reset(state);
    }
};

#endif
