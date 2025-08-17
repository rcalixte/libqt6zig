#pragma once
#ifndef SRCC_LIBVIRTUALQGESTURERECOGNIZER_H
#define SRCC_LIBVIRTUALQGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGestureRecognizer so that we can call protected methods
class VirtualQGestureRecognizer final : public QGestureRecognizer {

  public:
    // Virtual class boolean flag
    bool isVirtualQGestureRecognizer = true;

    // Virtual class public types (including callbacks)
    using QGestureRecognizer_Create_Callback = QGesture* (*)(QGestureRecognizer*, QObject*);
    using QGestureRecognizer_Recognize_Callback = int (*)(QGestureRecognizer*, QGesture*, QObject*, QEvent*);
    using QGestureRecognizer_Reset_Callback = void (*)(QGestureRecognizer*, QGesture*);

  protected:
    // Instance callback storage
    QGestureRecognizer_Create_Callback qgesturerecognizer_create_callback = nullptr;
    QGestureRecognizer_Recognize_Callback qgesturerecognizer_recognize_callback = nullptr;
    QGestureRecognizer_Reset_Callback qgesturerecognizer_reset_callback = nullptr;

    // Instance base flags
    mutable bool qgesturerecognizer_create_isbase = false;
    mutable bool qgesturerecognizer_recognize_isbase = false;
    mutable bool qgesturerecognizer_reset_isbase = false;

  public:
    VirtualQGestureRecognizer() : QGestureRecognizer() {};

    ~VirtualQGestureRecognizer() {
        qgesturerecognizer_create_callback = nullptr;
        qgesturerecognizer_recognize_callback = nullptr;
        qgesturerecognizer_reset_callback = nullptr;
    }

    // Callback setters
    inline void setQGestureRecognizer_Create_Callback(QGestureRecognizer_Create_Callback cb) { qgesturerecognizer_create_callback = cb; }
    inline void setQGestureRecognizer_Recognize_Callback(QGestureRecognizer_Recognize_Callback cb) { qgesturerecognizer_recognize_callback = cb; }
    inline void setQGestureRecognizer_Reset_Callback(QGestureRecognizer_Reset_Callback cb) { qgesturerecognizer_reset_callback = cb; }

    // Base flag setters
    inline void setQGestureRecognizer_Create_IsBase(bool value) const { qgesturerecognizer_create_isbase = value; }
    inline void setQGestureRecognizer_Recognize_IsBase(bool value) const { qgesturerecognizer_recognize_isbase = value; }
    inline void setQGestureRecognizer_Reset_IsBase(bool value) const { qgesturerecognizer_reset_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (qgesturerecognizer_create_isbase) {
            qgesturerecognizer_create_isbase = false;
            return QGestureRecognizer::create(target);
        } else if (qgesturerecognizer_create_callback != nullptr) {
            QObject* cbval1 = target;

            QGesture* callback_ret = qgesturerecognizer_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGestureRecognizer::create(target);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* state, QObject* watched, QEvent* event) override {
        if (qgesturerecognizer_recognize_callback != nullptr) {
            QGesture* cbval1 = state;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;

            int callback_ret = qgesturerecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (qgesturerecognizer_reset_isbase) {
            qgesturerecognizer_reset_isbase = false;
            QGestureRecognizer::reset(state);
        } else if (qgesturerecognizer_reset_callback != nullptr) {
            QGesture* cbval1 = state;

            qgesturerecognizer_reset_callback(this, cbval1);
        } else {
            QGestureRecognizer::reset(state);
        }
    }
};

#endif
