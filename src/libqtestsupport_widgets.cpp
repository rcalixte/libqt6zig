#include <QEventPoint>
#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "libqtestsupport_widgets.h"
#include "libqtestsupport_widgets.hxx"

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(const QTest__QTouchEventWidgetSequence* param1) {
    return new VirtualQTestQTouchEventWidgetSequence(*param1);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
    QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
    QTest::QTouchEventWidgetSequence& _ret = self->stationary(static_cast<int>(touchId));
    // Cast returned reference into pointer
    return &_ret;
}

bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
    return self->commit(processEvents);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
    QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt, widget);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
    QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt, widget);
    // Cast returned reference into pointer
    return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
    QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt, widget);
    // Cast returned reference into pointer
    return &_ret;
}

// Base class handler implementation
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_SuperStationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
    return new QTest::QTouchEventWidgetSequence(self->QTest::QTouchEventWidgetSequence::stationary(static_cast<int>(touchId)));
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnStationary(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    if (auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self))
        vqtestqtoucheventwidgetsequence->qtest__qtoucheventwidgetsequence_stationary_callback = reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Stationary_Callback>(slot);
}

// Base class handler implementation
bool QTest__QTouchEventWidgetSequence_SuperCommit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
    return self->QTest::QTouchEventWidgetSequence::commit(processEvents);
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnCommit(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    if (auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self))
        vqtestqtoucheventwidgetsequence->qtest__qtoucheventwidgetsequence_commit_callback = reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Commit_Callback>(slot);
}

// Derived class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_Point(QTest__QTouchEventWidgetSequence* self, int touchId) {
    if (auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self))
        return new QEventPoint(vqtestqtoucheventwidgetsequence->point(static_cast<int>(touchId)));
    qFatal("Error: Protected method QTest::QTouchEventWidgetSequence::point called without a directly constructed type");
}

// Derived class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(QTest__QTouchEventWidgetSequence* self, int touchId) {
    if (auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self))
        return new QEventPoint(vqtestqtoucheventwidgetsequence->pointOrPreviousPoint(static_cast<int>(touchId)));
    qFatal("Error: Protected method QTest::QTouchEventWidgetSequence::pointOrPreviousPoint called without a directly constructed type");
}

void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self) {
    delete self;
}
