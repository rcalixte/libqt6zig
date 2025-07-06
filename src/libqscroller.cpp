#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QScroller>
#include <QScrollerProperties>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscroller.h>
#include "libqscroller.h"
#include "libqscroller.hxx"

QMetaObject* QScroller_MetaObject(const QScroller* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScroller_Metacast(QScroller* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScroller_Metacall(QScroller* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScroller_Tr(const char* s) {
    QString _ret = QScroller::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QScroller_HasScroller(QObject* target) {
    return QScroller::hasScroller(target);
}

QScroller* QScroller_Scroller(QObject* target) {
    return QScroller::scroller(target);
}

QScroller* QScroller_ScrollerWithTarget(const QObject* target) {
    return (QScroller*)QScroller::scroller(target);
}

int QScroller_GrabGesture(QObject* target) {
    return static_cast<int>(QScroller::grabGesture(target));
}

int QScroller_GrabbedGesture(QObject* target) {
    return static_cast<int>(QScroller::grabbedGesture(target));
}

void QScroller_UngrabGesture(QObject* target) {
    QScroller::ungrabGesture(target);
}

libqt_list /* of QScroller* */ QScroller_ActiveScrollers() {
    QList<QScroller*> _ret = QScroller::activeScrollers();
    // Convert QList<> from C++ memory to manually-managed C memory
    QScroller** _arr = static_cast<QScroller**>(malloc(sizeof(QScroller*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QObject* QScroller_Target(const QScroller* self) {
    return self->target();
}

int QScroller_State(const QScroller* self) {
    return static_cast<int>(self->state());
}

bool QScroller_HandleInput(QScroller* self, int input, const QPointF* position) {
    return self->handleInput(static_cast<QScroller::Input>(input), *position);
}

void QScroller_Stop(QScroller* self) {
    self->stop();
}

QPointF* QScroller_Velocity(const QScroller* self) {
    return new QPointF(self->velocity());
}

QPointF* QScroller_FinalPosition(const QScroller* self) {
    return new QPointF(self->finalPosition());
}

QPointF* QScroller_PixelPerMeter(const QScroller* self) {
    return new QPointF(self->pixelPerMeter());
}

QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self) {
    return new QScrollerProperties(self->scrollerProperties());
}

void QScroller_SetSnapPositionsX(QScroller* self, const libqt_list /* of double */ positions) {
    QList<double> positions_QList;
    positions_QList.reserve(positions.len);
    double* positions_arr = static_cast<double*>(positions.data);
    for (size_t i = 0; i < positions.len; ++i) {
        positions_QList.push_back(static_cast<double>(positions_arr[i]));
    }
    self->setSnapPositionsX(positions_QList);
}

void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval) {
    self->setSnapPositionsX(static_cast<qreal>(first), static_cast<qreal>(interval));
}

void QScroller_SetSnapPositionsY(QScroller* self, const libqt_list /* of double */ positions) {
    QList<double> positions_QList;
    positions_QList.reserve(positions.len);
    double* positions_arr = static_cast<double*>(positions.data);
    for (size_t i = 0; i < positions.len; ++i) {
        positions_QList.push_back(static_cast<double>(positions_arr[i]));
    }
    self->setSnapPositionsY(positions_QList);
}

void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval) {
    self->setSnapPositionsY(static_cast<qreal>(first), static_cast<qreal>(interval));
}

void QScroller_SetScrollerProperties(QScroller* self, const QScrollerProperties* prop) {
    self->setScrollerProperties(*prop);
}

void QScroller_ScrollTo(QScroller* self, const QPointF* pos) {
    self->scrollTo(*pos);
}

void QScroller_ScrollTo2(QScroller* self, const QPointF* pos, int scrollTime) {
    self->scrollTo(*pos, static_cast<int>(scrollTime));
}

void QScroller_EnsureVisible(QScroller* self, const QRectF* rect, double xmargin, double ymargin) {
    self->ensureVisible(*rect, static_cast<qreal>(xmargin), static_cast<qreal>(ymargin));
}

void QScroller_EnsureVisible2(QScroller* self, const QRectF* rect, double xmargin, double ymargin, int scrollTime) {
    self->ensureVisible(*rect, static_cast<qreal>(xmargin), static_cast<qreal>(ymargin), static_cast<int>(scrollTime));
}

void QScroller_ResendPrepareEvent(QScroller* self) {
    self->resendPrepareEvent();
}

void QScroller_StateChanged(QScroller* self, int newstate) {
    self->stateChanged(static_cast<QScroller::State>(newstate));
}

void QScroller_Connect_StateChanged(QScroller* self, intptr_t slot) {
    void (*slotFunc)(QScroller*, int) = reinterpret_cast<void (*)(QScroller*, int)>(slot);
    QScroller::connect(self, &QScroller::stateChanged, [self, slotFunc](QScroller::State newstate) {
        int sigval1 = static_cast<int>(newstate);
        slotFunc(self, sigval1);
    });
}

void QScroller_ScrollerPropertiesChanged(QScroller* self, const QScrollerProperties* param1) {
    self->scrollerPropertiesChanged(*param1);
}

void QScroller_Connect_ScrollerPropertiesChanged(QScroller* self, intptr_t slot) {
    void (*slotFunc)(QScroller*, QScrollerProperties*) = reinterpret_cast<void (*)(QScroller*, QScrollerProperties*)>(slot);
    QScroller::connect(self, &QScroller::scrollerPropertiesChanged, [self, slotFunc](const QScrollerProperties& param1) {
        const QScrollerProperties& param1_ret = param1;
        // Cast returned reference into pointer
        QScrollerProperties* sigval1 = const_cast<QScrollerProperties*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QScroller_Tr2(const char* s, const char* c) {
    QString _ret = QScroller::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScroller_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScroller::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QScroller_GrabGesture2(QObject* target, int gestureType) {
    return static_cast<int>(QScroller::grabGesture(target, static_cast<QScroller::ScrollerGestureType>(gestureType)));
}

bool QScroller_HandleInput3(QScroller* self, int input, const QPointF* position, long long timestamp) {
    return self->handleInput(static_cast<QScroller::Input>(input), *position, static_cast<qint64>(timestamp));
}
