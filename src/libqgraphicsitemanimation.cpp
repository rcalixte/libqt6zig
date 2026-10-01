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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsItemAnimation_Tr(const char* s) {
    auto _ret = QGraphicsItemAnimation::tr(s);
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

libqt_list /* of pair_double_qpointf tuple of double and QPointF* */ QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->posList();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qpointf /* tuple of double and QPointF* */* _arr = static_cast<pair_double_qpointf /* tuple of double and QPointF* */*>(malloc(sizeof(pair_double_qpointf /* tuple of double and QPointF* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qpointf /* tuple of double and QPointF* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QPointF(_lv_ret.second);
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

libqt_list /* of pair_double_double tuple of double and double */ QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, double>> _ret = self->rotationList();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_double /* tuple of double and double */* _arr = static_cast<pair_double_double /* tuple of double and double */*>(malloc(sizeof(pair_double_double /* tuple of double and double */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, double> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_double /* tuple of double and double */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = _lv_ret.second;
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

libqt_list /* of pair_double_qpointf tuple of double and QPointF* */ QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->translationList();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qpointf /* tuple of double and QPointF* */* _arr = static_cast<pair_double_qpointf /* tuple of double and QPointF* */*>(malloc(sizeof(pair_double_qpointf /* tuple of double and QPointF* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qpointf /* tuple of double and QPointF* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QPointF(_lv_ret.second);
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

libqt_list /* of pair_double_qpointf tuple of double and QPointF* */ QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->scaleList();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qpointf /* tuple of double and QPointF* */* _arr = static_cast<pair_double_qpointf /* tuple of double and QPointF* */*>(malloc(sizeof(pair_double_qpointf /* tuple of double and QPointF* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qpointf /* tuple of double and QPointF* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QPointF(_lv_ret.second);
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

libqt_list /* of pair_double_qpointf tuple of double and QPointF* */ QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self) {
    QList<QPair<double, QPointF>> _ret = self->shearList();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qpointf /* tuple of double and QPointF* */* _arr = static_cast<pair_double_qpointf /* tuple of double and QPointF* */*>(malloc(sizeof(pair_double_qpointf /* tuple of double and QPointF* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QPointF> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qpointf /* tuple of double and QPointF* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QPointF(_lv_ret.second);
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
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->beforeAnimationStep(static_cast<qreal>(step));
    }
}

void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->afterAnimationStep(static_cast<qreal>(step));
    }
}

libqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsItemAnimation::tr(s, c);
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
    auto _ret = QGraphicsItemAnimation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QGraphicsItemAnimation_SuperMetaObject(const QGraphicsItemAnimation* self) {
    return (QMetaObject*)self->QGraphicsItemAnimation::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnMetaObject(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self)))
        vqgraphicsitemanimation->qgraphicsitemanimation_metaobject_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsItemAnimation_SuperMetacast(QGraphicsItemAnimation* self, const char* param1) {
    return self->QGraphicsItemAnimation::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnMetacast(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_metacast_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsItemAnimation_SuperMetacall(QGraphicsItemAnimation* self, int param1, int param2, void** param3) {
    return self->QGraphicsItemAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnMetacall(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_metacall_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperBeforeAnimationStep(QGraphicsItemAnimation* self, double step) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::beforeAnimationStep(static_cast<qreal>(step));
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::beforeAnimationStep called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnBeforeAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_beforeanimationstep_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_BeforeAnimationStep_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperAfterAnimationStep(QGraphicsItemAnimation* self, double step) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::afterAnimationStep(static_cast<qreal>(step));
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::afterAnimationStep called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnAfterAnimationStep(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_afteranimationstep_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_AfterAnimationStep_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemAnimation_Event(QGraphicsItemAnimation* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsItemAnimation_SuperEvent(QGraphicsItemAnimation* self, QEvent* event) {
    return self->QGraphicsItemAnimation::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_event_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemAnimation_EventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsItemAnimation_SuperEventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event) {
    return self->QGraphicsItemAnimation::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnEventFilter(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_eventfilter_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemAnimation_TimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperTimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnTimerEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_timerevent_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemAnimation_ChildEvent(QGraphicsItemAnimation* self, QChildEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperChildEvent(QGraphicsItemAnimation* self, QChildEvent* event) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnChildEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_childevent_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemAnimation_CustomEvent(QGraphicsItemAnimation* self, QEvent* event) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperCustomEvent(QGraphicsItemAnimation* self, QEvent* event) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnCustomEvent(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_customevent_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemAnimation_ConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnConnectNotify(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_connectnotify_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemAnimation_DisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self);
    if (vqgraphicsitemanimation) {
        vqgraphicsitemanimation->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemAnimation_SuperDisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self)) {
        vqgraphicsitemanimation->QGraphicsItemAnimation::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemAnimation::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemAnimation_OnDisconnectNotify(QGraphicsItemAnimation* self, intptr_t slot) {
    if (auto* vqgraphicsitemanimation = dynamic_cast<VirtualQGraphicsItemAnimation*>(self))
        vqgraphicsitemanimation->qgraphicsitemanimation_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsItemAnimation::QGraphicsItemAnimation_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGraphicsItemAnimation_Sender(const QGraphicsItemAnimation* self) {
    if (auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self))) {
        return vqgraphicsitemanimation->VirtualQGraphicsItemAnimation::sender();
    } else
        qFatal("Error: Protected method QGraphicsItemAnimation::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsItemAnimation_SenderSignalIndex(const QGraphicsItemAnimation* self) {
    if (auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self))) {
        return vqgraphicsitemanimation->VirtualQGraphicsItemAnimation::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsItemAnimation::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsItemAnimation_Receivers(const QGraphicsItemAnimation* self, const char* signal) {
    if (auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self))) {
        return vqgraphicsitemanimation->VirtualQGraphicsItemAnimation::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsItemAnimation::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsItemAnimation_IsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsitemanimation = const_cast<VirtualQGraphicsItemAnimation*>(dynamic_cast<const VirtualQGraphicsItemAnimation*>(self))) {
        return vqgraphicsitemanimation->VirtualQGraphicsItemAnimation::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsItemAnimation::isSignalConnected called without a directly constructed type");
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
    delete self;
}
