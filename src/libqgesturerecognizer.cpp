#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include <qgesturerecognizer.h>
#include "libqgesturerecognizer.h"
#include "libqgesturerecognizer.hxx"

QGestureRecognizer* QGestureRecognizer_new() {
    return new VirtualQGestureRecognizer();
}

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
    return self->create(target);
}

int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
    return static_cast<int>(self->recognize(state, watched, event));
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
    self->reset(state);
}

int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
    return static_cast<int>(QGestureRecognizer::registerRecognizer(recognizer));
}

void QGestureRecognizer_UnregisterRecognizer(int typeVal) {
    QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, const QGestureRecognizer* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
QGesture* QGestureRecognizer_SuperCreate(QGestureRecognizer* self, QObject* target) {
    return self->QGestureRecognizer::create(target);
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnCreate(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self))
        vqgesturerecognizer->qgesturerecognizer_create_callback = reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Create_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnRecognize(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self))
        vqgesturerecognizer->qgesturerecognizer_recognize_callback = reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Recognize_Callback>(slot);
}

// Base class handler implementation
void QGestureRecognizer_SuperReset(QGestureRecognizer* self, QGesture* state) {
    self->QGestureRecognizer::reset(state);
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnReset(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self))
        vqgesturerecognizer->qgesturerecognizer_reset_callback = reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Reset_Callback>(slot);
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
    delete self;
}
