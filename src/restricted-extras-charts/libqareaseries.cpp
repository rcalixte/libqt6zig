#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QAnyStringView>
#include <QAreaSeries>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChart>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QLineSeries>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qareaseries.h>
#include "libqareaseries.h"
#include "libqareaseries.hxx"

QAreaSeries* QAreaSeries_new() {
    return new VirtualQAreaSeries();
}

QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries) {
    return new VirtualQAreaSeries(upperSeries);
}

QAreaSeries* QAreaSeries_new3(QObject* parent) {
    return new VirtualQAreaSeries(parent);
}

QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries) {
    return new VirtualQAreaSeries(upperSeries, lowerSeries);
}

QMetaObject* QAreaSeries_MetaObject(const QAreaSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAreaSeries_Metacast(QAreaSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAreaSeries_Metacall(QAreaSeries* self, int param1, int param2, void** param3) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAreaSeries_OnMetacall(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_Metacall_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAreaSeries_QBaseMetacall(QAreaSeries* self, int param1, int param2, void** param3) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_Metacall_IsBase(true);
        return vqareaseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAreaSeries_Tr(const char* s) {
    QString _ret = QAreaSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAreaSeries_SetUpperSeries(QAreaSeries* self, QLineSeries* series) {
    self->setUpperSeries(series);
}

QLineSeries* QAreaSeries_UpperSeries(const QAreaSeries* self) {
    return self->upperSeries();
}

void QAreaSeries_SetLowerSeries(QAreaSeries* self, QLineSeries* series) {
    self->setLowerSeries(series);
}

QLineSeries* QAreaSeries_LowerSeries(const QAreaSeries* self) {
    return self->lowerSeries();
}

void QAreaSeries_SetPen(QAreaSeries* self, QPen* pen) {
    self->setPen(*pen);
}

QPen* QAreaSeries_Pen(const QAreaSeries* self) {
    return new QPen(self->pen());
}

void QAreaSeries_SetBrush(QAreaSeries* self, QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QAreaSeries_Brush(const QAreaSeries* self) {
    return new QBrush(self->brush());
}

void QAreaSeries_SetColor(QAreaSeries* self, QColor* color) {
    self->setColor(*color);
}

QColor* QAreaSeries_Color(const QAreaSeries* self) {
    return new QColor(self->color());
}

void QAreaSeries_SetBorderColor(QAreaSeries* self, QColor* color) {
    self->setBorderColor(*color);
}

QColor* QAreaSeries_BorderColor(const QAreaSeries* self) {
    return new QColor(self->borderColor());
}

void QAreaSeries_SetPointsVisible(QAreaSeries* self) {
    self->setPointsVisible();
}

bool QAreaSeries_PointsVisible(const QAreaSeries* self) {
    return self->pointsVisible();
}

void QAreaSeries_SetPointLabelsFormat(QAreaSeries* self, libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setPointLabelsFormat(format_QString);
}

libqt_string QAreaSeries_PointLabelsFormat(const QAreaSeries* self) {
    QString _ret = self->pointLabelsFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAreaSeries_SetPointLabelsVisible(QAreaSeries* self) {
    self->setPointLabelsVisible();
}

bool QAreaSeries_PointLabelsVisible(const QAreaSeries* self) {
    return self->pointLabelsVisible();
}

void QAreaSeries_SetPointLabelsFont(QAreaSeries* self, QFont* font) {
    self->setPointLabelsFont(*font);
}

QFont* QAreaSeries_PointLabelsFont(const QAreaSeries* self) {
    return new QFont(self->pointLabelsFont());
}

void QAreaSeries_SetPointLabelsColor(QAreaSeries* self, QColor* color) {
    self->setPointLabelsColor(*color);
}

QColor* QAreaSeries_PointLabelsColor(const QAreaSeries* self) {
    return new QColor(self->pointLabelsColor());
}

void QAreaSeries_SetPointLabelsClipping(QAreaSeries* self) {
    self->setPointLabelsClipping();
}

bool QAreaSeries_PointLabelsClipping(const QAreaSeries* self) {
    return self->pointLabelsClipping();
}

void QAreaSeries_Clicked(QAreaSeries* self, QPointF* point) {
    self->clicked(*point);
}

void QAreaSeries_Connect_Clicked(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::clicked, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_Hovered(QAreaSeries* self, QPointF* point, bool state) {
    self->hovered(*point, state);
}

void QAreaSeries_Connect_Hovered(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QPointF*, bool) = reinterpret_cast<void (*)(QAreaSeries*, QPointF*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::hovered, [self, slotFunc](const QPointF& point, bool state) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        bool sigval2 = state;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAreaSeries_Pressed(QAreaSeries* self, QPointF* point) {
    self->pressed(*point);
}

void QAreaSeries_Connect_Pressed(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pressed, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_Released(QAreaSeries* self, QPointF* point) {
    self->released(*point);
}

void QAreaSeries_Connect_Released(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::released, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_DoubleClicked(QAreaSeries* self, QPointF* point) {
    self->doubleClicked(*point);
}

void QAreaSeries_Connect_DoubleClicked(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QPointF*) = reinterpret_cast<void (*)(QAreaSeries*, QPointF*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::doubleClicked, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_Selected(QAreaSeries* self) {
    self->selected();
}

void QAreaSeries_Connect_Selected(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*) = reinterpret_cast<void (*)(QAreaSeries*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::selected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAreaSeries_ColorChanged(QAreaSeries* self, QColor* color) {
    self->colorChanged(*color);
}

void QAreaSeries_Connect_ColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_BorderColorChanged(QAreaSeries* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QAreaSeries_Connect_BorderColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::borderColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->pointLabelsFormatChanged(format_QString);
}

void QAreaSeries_Connect_PointLabelsFormatChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, libqt_string) = reinterpret_cast<void (*)(QAreaSeries*, libqt_string)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsFormatChanged, [self, slotFunc](const QString& format) {
        const QString format_ret = format;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray format_b = format_ret.toUtf8();
        libqt_string format_str;
        format_str.len = format_b.length();
        format_str.data = static_cast<char*>(malloc((format_str.len + 1) * sizeof(char)));
        memcpy(format_str.data, format_b.data(), format_str.len);
        format_str.data[format_str.len] = '\0';
        libqt_string sigval1 = format_str;
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_PointLabelsVisibilityChanged(QAreaSeries* self, bool visible) {
    self->pointLabelsVisibilityChanged(visible);
}

void QAreaSeries_Connect_PointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, bool) = reinterpret_cast<void (*)(QAreaSeries*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsVisibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, QFont* font) {
    self->pointLabelsFontChanged(*font);
}

void QAreaSeries_Connect_PointLabelsFontChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QFont*) = reinterpret_cast<void (*)(QAreaSeries*, QFont*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsFontChanged, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_PointLabelsColorChanged(QAreaSeries* self, QColor* color) {
    self->pointLabelsColorChanged(*color);
}

void QAreaSeries_Connect_PointLabelsColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QAreaSeries_PointLabelsClippingChanged(QAreaSeries* self, bool clipping) {
    self->pointLabelsClippingChanged(clipping);
}

void QAreaSeries_Connect_PointLabelsClippingChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, bool) = reinterpret_cast<void (*)(QAreaSeries*, bool)>(slot);
    QAreaSeries::connect(self, &QAreaSeries::pointLabelsClippingChanged, [self, slotFunc](bool clipping) {
        bool sigval1 = clipping;
        slotFunc(self, sigval1);
    });
}

libqt_string QAreaSeries_Tr2(const char* s, const char* c) {
    QString _ret = QAreaSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAreaSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAreaSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAreaSeries_SetPointsVisible1(QAreaSeries* self, bool visible) {
    self->setPointsVisible(visible);
}

void QAreaSeries_SetPointLabelsVisible1(QAreaSeries* self, bool visible) {
    self->setPointLabelsVisible(visible);
}

void QAreaSeries_SetPointLabelsClipping1(QAreaSeries* self, bool enabled) {
    self->setPointLabelsClipping(enabled);
}

// Derived class handler implementation
int QAreaSeries_Type(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return static_cast<int>(vqareaseries->type());
    } else {
        return static_cast<int>(vqareaseries->type());
    }
}

// Base class handler implementation
int QAreaSeries_QBaseType(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Type_IsBase(true);
        return static_cast<int>(vqareaseries->type());
    } else {
        return static_cast<int>(vqareaseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnType(const QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Type_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_Event(QAreaSeries* self, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        return vqareaseries->event(event);
    } else {
        return vqareaseries->event(event);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseEvent(QAreaSeries* self, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_Event_IsBase(true);
        return vqareaseries->event(event);
    } else {
        return vqareaseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_Event_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_EventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        return vqareaseries->eventFilter(watched, event);
    } else {
        return vqareaseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseEventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_EventFilter_IsBase(true);
        return vqareaseries->eventFilter(watched, event);
    } else {
        return vqareaseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEventFilter(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_EventFilter_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_TimerEvent(QAreaSeries* self, QTimerEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->timerEvent(event);
    } else {
        vqareaseries->timerEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseTimerEvent(QAreaSeries* self, QTimerEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_TimerEvent_IsBase(true);
        vqareaseries->timerEvent(event);
    } else {
        vqareaseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnTimerEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_TimerEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_ChildEvent(QAreaSeries* self, QChildEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->childEvent(event);
    } else {
        vqareaseries->childEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseChildEvent(QAreaSeries* self, QChildEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_ChildEvent_IsBase(true);
        vqareaseries->childEvent(event);
    } else {
        vqareaseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnChildEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_ChildEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_CustomEvent(QAreaSeries* self, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->customEvent(event);
    } else {
        vqareaseries->customEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseCustomEvent(QAreaSeries* self, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_CustomEvent_IsBase(true);
        vqareaseries->customEvent(event);
    } else {
        vqareaseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnCustomEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_CustomEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_ConnectNotify(QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->connectNotify(*signal);
    } else {
        vqareaseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseConnectNotify(QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_ConnectNotify_IsBase(true);
        vqareaseries->connectNotify(*signal);
    } else {
        vqareaseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnConnectNotify(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_DisconnectNotify(QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->disconnectNotify(*signal);
    } else {
        vqareaseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseDisconnectNotify(QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_DisconnectNotify_IsBase(true);
        vqareaseries->disconnectNotify(*signal);
    } else {
        vqareaseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnDisconnectNotify(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->setQAreaSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAreaSeries_Sender(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->sender();
    } else {
        return vqareaseries->sender();
    }
}

// Base class handler implementation
QObject* QAreaSeries_QBaseSender(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Sender_IsBase(true);
        return vqareaseries->sender();
    } else {
        return vqareaseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnSender(const QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Sender_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaSeries_SenderSignalIndex(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->senderSignalIndex();
    } else {
        return vqareaseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QAreaSeries_QBaseSenderSignalIndex(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_SenderSignalIndex_IsBase(true);
        return vqareaseries->senderSignalIndex();
    } else {
        return vqareaseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnSenderSignalIndex(const QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaSeries_Receivers(const QAreaSeries* self, const char* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->receivers(signal);
    } else {
        return vqareaseries->receivers(signal);
    }
}

// Base class handler implementation
int QAreaSeries_QBaseReceivers(const QAreaSeries* self, const char* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Receivers_IsBase(true);
        return vqareaseries->receivers(signal);
    } else {
        return vqareaseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnReceivers(const QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_Receivers_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_IsSignalConnected(const QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->isSignalConnected(*signal);
    } else {
        return vqareaseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseIsSignalConnected(const QAreaSeries* self, QMetaMethod* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_IsSignalConnected_IsBase(true);
        return vqareaseries->isSignalConnected(*signal);
    } else {
        return vqareaseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnIsSignalConnected(const QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        vqareaseries->setQAreaSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_IsSignalConnected_Callback>(slot));
    }
}

void QAreaSeries_Delete(QAreaSeries* self) {
    delete self;
}
