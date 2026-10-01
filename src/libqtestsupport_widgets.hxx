#pragma once
#ifndef LIBQTESTSUPPORT_WIDGETS_HXX
#define LIBQTESTSUPPORT_WIDGETS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTest::QTouchEventWidgetSequence
class VirtualQTestQTouchEventWidgetSequence final : public QTest::QTouchEventWidgetSequence {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTest__QTouchEventWidgetSequence_Stationary_Callback = QTest__QTouchEventWidgetSequence* (*)(QTest__QTouchEventWidgetSequence*, int);
    using QTest__QTouchEventWidgetSequence_Commit_Callback = bool (*)(QTest__QTouchEventWidgetSequence*, bool);
    using QTest::QTouchEventWidgetSequence::point;
    using QTest::QTouchEventWidgetSequence::pointOrPreviousPoint;

    // Instance callback storage
    QTest__QTouchEventWidgetSequence_Stationary_Callback qtest__qtoucheventwidgetsequence_stationary_callback = nullptr;
    QTest__QTouchEventWidgetSequence_Commit_Callback qtest__qtoucheventwidgetsequence_commit_callback = nullptr;

    VirtualQTestQTouchEventWidgetSequence(const QTest::QTouchEventWidgetSequence& param1) : QTest::QTouchEventWidgetSequence(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QTest::QTouchEventWidgetSequence& stationary(int touchId) override {
        if (qtest__qtoucheventwidgetsequence_stationary_callback) {
            int cbval1 = touchId;
            QTest__QTouchEventWidgetSequence* callback_ret = qtest__qtoucheventwidgetsequence_stationary_callback(this, cbval1);
            return *callback_ret;
        }
        return QTest__QTouchEventWidgetSequence::stationary(touchId);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool commit(bool processEvents) override {
        if (qtest__qtoucheventwidgetsequence_commit_callback) {
            bool cbval1 = processEvents;
            bool callback_ret = qtest__qtoucheventwidgetsequence_commit_callback(this, cbval1);
            return callback_ret;
        }
        return QTest__QTouchEventWidgetSequence::commit(processEvents);
    }
};

#endif
