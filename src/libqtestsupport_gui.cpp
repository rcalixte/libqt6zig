#include <QEventPoint>
#include <QList>
#include <QPoint>
#include <QPointingDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#include <QWindow>
#include <qtestsupport_gui.h>
#include "libqtestsupport_gui.h"
#include "libqtestsupport_gui.hxx"

void qtestsupport_gui_h_HandleTouchEvent(QWindow* w, const QPointingDevice* device, const libqt_list /* of QEventPoint* */ points, int mods) {
    QList<QEventPoint> points_QList;
    points_QList.reserve(points.len);
    QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    qt_handleTouchEvent(w, device, points_QList, static_cast<Qt::KeyboardModifiers>(mods));
}

bool qtestsupport_gui_h_HandleTouchEventv2(QWindow* w, const QPointingDevice* device, const libqt_list /* of QEventPoint* */ points, int mods) {
    QList<QEventPoint> points_QList;
    points_QList.reserve(points.len);
    QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    return qt_handleTouchEventv2(w, device, points_QList, static_cast<Qt::KeyboardModifiers>(mods));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventSequence& _ret = self->press(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventSequence& _ret = self->move(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventSequence& _ret = self->release(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Stationary(QTest__QTouchEventSequence* self, int touchId) {
    QTest::QTouchEventSequence& _ret = self->stationary(static_cast<int>(touchId));
    // Cast returned reference into pointer
    return &_ret;
}

bool QTest__QTouchEventSequence_Commit(QTest__QTouchEventSequence* self, bool processEvents) {
    return self->commit(processEvents);
}

void QTest__QTouchEventSequence_OperatorAssign(QTest__QTouchEventSequence* self, const QTest__QTouchEventSequence* param1) {
    self->operator=(*param1);
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
    QTest::QTouchEventSequence& _ret = self->press(static_cast<int>(touchId), *pt, window);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
    QTest::QTouchEventSequence& _ret = self->move(static_cast<int>(touchId), *pt, window);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
    QTest::QTouchEventSequence& _ret = self->release(static_cast<int>(touchId), *pt, window);
    // Cast returned reference into pointer
    return &_ret;
}

void QTest__QTouchEventSequence_Delete(QTest__QTouchEventSequence* self) {
    delete self;
}
