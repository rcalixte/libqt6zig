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

// Derived class handler implementation
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        return new QTest::QTouchEventWidgetSequence(vqtestqtoucheventwidgetsequence->stationary(static_cast<int>(touchId)));
    } else {
        return new QTest::QTouchEventWidgetSequence(((VirtualQTestQTouchEventWidgetSequence*)self)->stationary(static_cast<int>(touchId)));
    }
}

// Base class handler implementation
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_QBaseStationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Stationary_IsBase(true);
        return new QTest::QTouchEventWidgetSequence(vqtestqtoucheventwidgetsequence->stationary(static_cast<int>(touchId)));
    } else {
        return new QTest::QTouchEventWidgetSequence(((VirtualQTestQTouchEventWidgetSequence*)self)->stationary(static_cast<int>(touchId)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnStationary(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Stationary_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Stationary_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        return vqtestqtoucheventwidgetsequence->commit(processEvents);
    } else {
        return self->QTest::QTouchEventWidgetSequence::commit(processEvents);
    }
}

// Base class handler implementation
bool QTest__QTouchEventWidgetSequence_QBaseCommit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Commit_IsBase(true);
        return vqtestqtoucheventwidgetsequence->commit(processEvents);
    } else {
        return self->QTest::QTouchEventWidgetSequence::commit(processEvents);
    }
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnCommit(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Commit_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Commit_Callback>(slot));
    }
}

// Derived class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_Point(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        return new QEventPoint(vqtestqtoucheventwidgetsequence->point(static_cast<int>(touchId)));
    }
    return {};
}

// Base class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_QBasePoint(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Point_IsBase(true);
        return new QEventPoint(vqtestqtoucheventwidgetsequence->point(static_cast<int>(touchId)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnPoint(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Point_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Point_Callback>(slot));
    }
}

// Derived class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        return new QEventPoint(vqtestqtoucheventwidgetsequence->pointOrPreviousPoint(static_cast<int>(touchId)));
    }
    return {};
}

// Base class handler implementation
QEventPoint* QTest__QTouchEventWidgetSequence_QBasePointOrPreviousPoint(QTest__QTouchEventWidgetSequence* self, int touchId) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_PointOrPreviousPoint_IsBase(true);
        return new QEventPoint(vqtestqtoucheventwidgetsequence->pointOrPreviousPoint(static_cast<int>(touchId)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
    auto* vqtestqtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
    if (vqtestqtoucheventwidgetsequence && vqtestqtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
        vqtestqtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_PointOrPreviousPoint_Callback>(slot));
    }
}

void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self) {
    delete self;
}
