#include <QChildEvent>
#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTimerEvent>
#include <QTransform>
#include <qgraphicsitemanimation.h>
#include "libqgraphicsitemanimation.h"
#include "libqgraphicsitemanimation.hxx"

QGraphicsItemAnimation* QGraphicsItemAnimation_new() {
    return new VirtualQGraphicsItemAnimation();
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent) {
    return new VirtualQGraphicsItemAnimation(parent);
}

QMetaObject* QGraphicsItemAnimation_MetaObject(const QGraphicsItemAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsItemAnimation_Metacast(QGraphicsItemAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsItemAnimation_Metacall(QGraphicsItemAnimation* self, int param1, int param2, void** param3) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsItemAnimation_OnMetacall(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Metacall_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsItemAnimation_QBaseMetacall(QGraphicsItemAnimation* self, int param1, int param2, void** param3) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Metacall_IsBase(true);
        return vqgraphicsitemanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsItemAnimation_Tr(const char* s) {
    QString _ret = QGraphicsItemAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self) {
    return self->item();
}

void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item) {
    self->setItem(item);
}

QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self) {
    return self->timeLine();
}

void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine) {
    self->setTimeLine(timeLine);
}

QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step) {
    return new QPointF(self->posAt(static_cast<qreal>(step)));
}

libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->posList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QPointF* */* _arr = static_cast<libqt_pair /* tuple of double and QPointF* */*>(malloc(sizeof(libqt_pair /* tuple of double and QPointF* */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QPointF** _lv_second = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QPointF(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, const QPointF* pos) {
    self->setPosAt(static_cast<qreal>(step), *pos);
}

QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step) {
    return new QTransform(self->transformAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->rotationAt(static_cast<qreal>(step)));
}

libqt_list /* of libqt_pair  tuple of double and double  */ QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, double>> _ret = self->rotationList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and double */* _arr = static_cast<libqt_pair /* tuple of double and double */*>(malloc(sizeof(libqt_pair /* tuple of double and double */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, double> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        double* _lv_second = static_cast<double*>(malloc(sizeof(double)));
        *_lv_first = _lv_ret.first;
        *_lv_second = _lv_ret.second;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle) {
    self->setRotationAt(static_cast<qreal>(step), static_cast<qreal>(angle));
}

double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->xTranslationAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->yTranslationAt(static_cast<qreal>(step)));
}

libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->translationList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QPointF* */* _arr = static_cast<libqt_pair /* tuple of double and QPointF* */*>(malloc(sizeof(libqt_pair /* tuple of double and QPointF* */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QPointF** _lv_second = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QPointF(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy) {
    self->setTranslationAt(static_cast<qreal>(step), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->verticalScaleAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->horizontalScaleAt(static_cast<qreal>(step)));
}

libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->scaleList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QPointF* */* _arr = static_cast<libqt_pair /* tuple of double and QPointF* */*>(malloc(sizeof(libqt_pair /* tuple of double and QPointF* */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QPointF** _lv_second = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QPointF(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy) {
    self->setScaleAt(static_cast<qreal>(step), static_cast<qreal>(sx), static_cast<qreal>(sy));
}

double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->verticalShearAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step) {
    return static_cast<double>(self->horizontalShearAt(static_cast<qreal>(step)));
}

libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->shearList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QPointF* */* _arr = static_cast<libqt_pair /* tuple of double and QPointF* */*>(malloc(sizeof(libqt_pair /* tuple of double and QPointF* */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QPointF** _lv_second = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QPointF(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv) {
    self->setShearAt(static_cast<qreal>(step), static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self) {
    self->clear();
}

void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x) {
    self->setStep(static_cast<qreal>(x));
}

void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->beforeAnimationStep(static_cast<qreal>(step));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsItemAnimation_OnBeforeAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_BeforeAnimationStep_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_BeforeAnimationStep_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_BeforeAnimationStep_IsBase(true);
        vqgraphicsitemanimation->beforeAnimationStep(static_cast<qreal>(step));
    }
}

void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->afterAnimationStep(static_cast<qreal>(step));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsItemAnimation_OnAfterAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_AfterAnimationStep_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_AfterAnimationStep_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_AfterAnimationStep_IsBase(true);
        vqgraphicsitemanimation->afterAnimationStep(static_cast<qreal>(step));
    }
}

libqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsItemAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsItemAnimation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QGraphicsItemAnimation_Event(QGraphicsItemAnimation* self, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->event(event);
    } else {
        return self->QGraphicsItemAnimation::event(event);
    }
}

// Base class handler implementation
bool QGraphicsItemAnimation_QBaseEvent(QGraphicsItemAnimation* self, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Event_IsBase(true);
        return vqgraphicsitemanimation->event(event);
    } else {
        return self->QGraphicsItemAnimation::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Event_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemAnimation_EventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->eventFilter(watched, event);
    } else {
        return self->QGraphicsItemAnimation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsItemAnimation_QBaseEventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_EventFilter_IsBase(true);
        return vqgraphicsitemanimation->eventFilter(watched, event);
    } else {
        return self->QGraphicsItemAnimation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnEventFilter(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemAnimation_TimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->timerEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseTimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_TimerEvent_IsBase(true);
        vqgraphicsitemanimation->timerEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnTimerEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemAnimation_ChildEvent(QGraphicsItemAnimation* self, QChildEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->childEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseChildEvent(QGraphicsItemAnimation* self, QChildEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_ChildEvent_IsBase(true);
        vqgraphicsitemanimation->childEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnChildEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemAnimation_CustomEvent(QGraphicsItemAnimation* self, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->customEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseCustomEvent(QGraphicsItemAnimation* self, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_CustomEvent_IsBase(true);
        vqgraphicsitemanimation->customEvent(event);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnCustomEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemAnimation_ConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_ConnectNotify_IsBase(true);
        vqgraphicsitemanimation->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnConnectNotify(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemAnimation_DisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_QBaseDisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_DisconnectNotify_IsBase(true);
        vqgraphicsitemanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsItemAnimation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnDisconnectNotify(QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsItemAnimation_Sender(const QGraphicsItemAnimation* self) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->sender();
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsItemAnimation_QBaseSender(const QGraphicsItemAnimation* self) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Sender_IsBase(true);
        return vqgraphicsitemanimation->sender();
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnSender(const QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Sender_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsItemAnimation_SenderSignalIndex(const QGraphicsItemAnimation* self) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsItemAnimation_QBaseSenderSignalIndex(const QGraphicsItemAnimation* self) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_SenderSignalIndex_IsBase(true);
        return vqgraphicsitemanimation->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnSenderSignalIndex(const QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsItemAnimation_Receivers(const QGraphicsItemAnimation* self, const char* signal) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->receivers(signal);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsItemAnimation_QBaseReceivers(const QGraphicsItemAnimation* self, const char* signal) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Receivers_IsBase(true);
        return vqgraphicsitemanimation->receivers(signal);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnReceivers(const QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_Receivers_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemAnimation_IsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        return vqgraphicsitemanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsItemAnimation_QBaseIsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_IsSignalConnected_IsBase(true);
        return vqgraphicsitemanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsItemAnimation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnIsSignalConnected(const QGraphicsItemAnimation* self, intptr_t slot) {
    auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self));
    if (vqgraphicsitemanimation && vqgraphicsitemanimation->isVirtualQGraphicsItemAnimation) {
        vqgraphicsitemanimation->setQGraphicsItemAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
    delete self;
}
