#pragma once
#ifndef SRCC_LIBVIRTUALQTESTSUPPORT_WIDGETS_H
#define SRCC_LIBVIRTUALQTESTSUPPORT_WIDGETS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTest::QTouchEventWidgetSequence so that we can call protected methods
class VirtualQTestQTouchEventWidgetSequence final : public QTest::QTouchEventWidgetSequence {

  public:
    // Virtual class boolean flag
    bool isVirtualQTestQTouchEventWidgetSequence = true;

    // Virtual class public types (including callbacks)
    using QTest__QTouchEventWidgetSequence_Stationary_Callback = QTest__QTouchEventWidgetSequence* (*)(QTest__QTouchEventWidgetSequence*, int);
    using QTest__QTouchEventWidgetSequence_Commit_Callback = bool (*)(QTest__QTouchEventWidgetSequence*, bool);
    using QTest__QTouchEventWidgetSequence_Point_Callback = QEventPoint* (*)(QTest__QTouchEventWidgetSequence*, int);
    using QTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback = QEventPoint* (*)(QTest__QTouchEventWidgetSequence*, int);

  protected:
    // Instance callback storage
    QTest__QTouchEventWidgetSequence_Stationary_Callback qtest__qtoucheventwidgetsequence_stationary_callback = nullptr;
    QTest__QTouchEventWidgetSequence_Commit_Callback qtest__qtoucheventwidgetsequence_commit_callback = nullptr;
    QTest__QTouchEventWidgetSequence_Point_Callback qtest__qtoucheventwidgetsequence_point_callback = nullptr;
    QTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback qtest__qtoucheventwidgetsequence_pointorpreviouspoint_callback = nullptr;

    // Instance base flags
    mutable bool qtest__qtoucheventwidgetsequence_stationary_isbase = false;
    mutable bool qtest__qtoucheventwidgetsequence_commit_isbase = false;
    mutable bool qtest__qtoucheventwidgetsequence_point_isbase = false;
    mutable bool qtest__qtoucheventwidgetsequence_pointorpreviouspoint_isbase = false;

  public:
    VirtualQTestQTouchEventWidgetSequence(const QTest::QTouchEventWidgetSequence& param1) : QTest::QTouchEventWidgetSequence(param1) {};

    ~VirtualQTestQTouchEventWidgetSequence() {
        qtest__qtoucheventwidgetsequence_stationary_callback = nullptr;
        qtest__qtoucheventwidgetsequence_commit_callback = nullptr;
        qtest__qtoucheventwidgetsequence_point_callback = nullptr;
        qtest__qtoucheventwidgetsequence_pointorpreviouspoint_callback = nullptr;
    }

    // Callback setters
    inline void setQTest__QTouchEventWidgetSequence_Stationary_Callback(QTest__QTouchEventWidgetSequence_Stationary_Callback cb) { qtest__qtoucheventwidgetsequence_stationary_callback = cb; }
    inline void setQTest__QTouchEventWidgetSequence_Commit_Callback(QTest__QTouchEventWidgetSequence_Commit_Callback cb) { qtest__qtoucheventwidgetsequence_commit_callback = cb; }
    inline void setQTest__QTouchEventWidgetSequence_Point_Callback(QTest__QTouchEventWidgetSequence_Point_Callback cb) { qtest__qtoucheventwidgetsequence_point_callback = cb; }
    inline void setQTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback(QTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback cb) { qtest__qtoucheventwidgetsequence_pointorpreviouspoint_callback = cb; }

    // Base flag setters
    inline void setQTest__QTouchEventWidgetSequence_Stationary_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_stationary_isbase = value; }
    inline void setQTest__QTouchEventWidgetSequence_Commit_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_commit_isbase = value; }
    inline void setQTest__QTouchEventWidgetSequence_Point_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_point_isbase = value; }
    inline void setQTest__QTouchEventWidgetSequence_PointOrPreviousPoint_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_pointorpreviouspoint_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTest::QTouchEventWidgetSequence& stationary(int touchId) override {
        if (qtest__qtoucheventwidgetsequence_stationary_isbase) {
            qtest__qtoucheventwidgetsequence_stationary_isbase = false;
            return QTest__QTouchEventWidgetSequence::stationary(touchId);
        } else if (qtest__qtoucheventwidgetsequence_stationary_callback != nullptr) {
            int cbval1 = touchId;

            QTest__QTouchEventWidgetSequence* callback_ret = qtest__qtoucheventwidgetsequence_stationary_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTest__QTouchEventWidgetSequence::stationary(touchId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool commit(bool processEvents) override {
        if (qtest__qtoucheventwidgetsequence_commit_isbase) {
            qtest__qtoucheventwidgetsequence_commit_isbase = false;
            return QTest__QTouchEventWidgetSequence::commit(processEvents);
        } else if (qtest__qtoucheventwidgetsequence_commit_callback != nullptr) {
            bool cbval1 = processEvents;

            bool callback_ret = qtest__qtoucheventwidgetsequence_commit_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTest__QTouchEventWidgetSequence::commit(processEvents);
        }
    }

    // Virtual method for C ABI access and custom callback
    QEventPoint& point(int touchId) {
        if (qtest__qtoucheventwidgetsequence_point_isbase) {
            qtest__qtoucheventwidgetsequence_point_isbase = false;
            return QTest__QTouchEventWidgetSequence::point(touchId);
        } else if (qtest__qtoucheventwidgetsequence_point_callback != nullptr) {
            int cbval1 = touchId;

            QEventPoint* callback_ret = qtest__qtoucheventwidgetsequence_point_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTest__QTouchEventWidgetSequence::point(touchId);
        }
    }

    // Virtual method for C ABI access and custom callback
    QEventPoint& pointOrPreviousPoint(int touchId) {
        if (qtest__qtoucheventwidgetsequence_pointorpreviouspoint_isbase) {
            qtest__qtoucheventwidgetsequence_pointorpreviouspoint_isbase = false;
            return QTest__QTouchEventWidgetSequence::pointOrPreviousPoint(touchId);
        } else if (qtest__qtoucheventwidgetsequence_pointorpreviouspoint_callback != nullptr) {
            int cbval1 = touchId;

            QEventPoint* callback_ret = qtest__qtoucheventwidgetsequence_pointorpreviouspoint_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTest__QTouchEventWidgetSequence::pointOrPreviousPoint(touchId);
        }
    }

    // Friend functions
    friend QEventPoint* QTest__QTouchEventWidgetSequence_Point(QTest::QTouchEventWidgetSequence* self, int touchId);
    friend QEventPoint* QTest__QTouchEventWidgetSequence_QBasePoint(QTest::QTouchEventWidgetSequence* self, int touchId);
    friend QEventPoint* QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(QTest::QTouchEventWidgetSequence* self, int touchId);
    friend QEventPoint* QTest__QTouchEventWidgetSequence_QBasePointOrPreviousPoint(QTest::QTouchEventWidgetSequence* self, int touchId);
};

#endif
