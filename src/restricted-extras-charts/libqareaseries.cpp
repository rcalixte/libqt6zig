#include <QAbstractSeries>
#include <QAreaSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QLineSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
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
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAreaSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAreaSeries_OnMetacall(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Metacall_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAreaSeries_QBaseMetacall(QAreaSeries* self, int param1, int param2, void** param3) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Metacall_IsBase(true);
        return vqareaseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAreaSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
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

void QAreaSeries_SetPen(QAreaSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QAreaSeries_Pen(const QAreaSeries* self) {
    return new QPen(self->pen());
}

void QAreaSeries_SetBrush(QAreaSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QAreaSeries_Brush(const QAreaSeries* self) {
    return new QBrush(self->brush());
}

void QAreaSeries_SetColor(QAreaSeries* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QAreaSeries_Color(const QAreaSeries* self) {
    return new QColor(self->color());
}

void QAreaSeries_SetBorderColor(QAreaSeries* self, const QColor* color) {
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

void QAreaSeries_SetPointLabelsFormat(QAreaSeries* self, const libqt_string format) {
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

void QAreaSeries_SetPointLabelsFont(QAreaSeries* self, const QFont* font) {
    self->setPointLabelsFont(*font);
}

QFont* QAreaSeries_PointLabelsFont(const QAreaSeries* self) {
    return new QFont(self->pointLabelsFont());
}

void QAreaSeries_SetPointLabelsColor(QAreaSeries* self, const QColor* color) {
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

void QAreaSeries_Clicked(QAreaSeries* self, const QPointF* point) {
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

void QAreaSeries_Hovered(QAreaSeries* self, const QPointF* point, bool state) {
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

void QAreaSeries_Pressed(QAreaSeries* self, const QPointF* point) {
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

void QAreaSeries_Released(QAreaSeries* self, const QPointF* point) {
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

void QAreaSeries_DoubleClicked(QAreaSeries* self, const QPointF* point) {
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

void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, const libqt_string format) {
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

void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, const QFont* font) {
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

void QAreaSeries_PointLabelsColorChanged(QAreaSeries* self, const QColor* color) {
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
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return static_cast<int>(vqareaseries->type());
    } else {
        return static_cast<int>(self->QAreaSeries::type());
    }
}

// Base class handler implementation
int QAreaSeries_QBaseType(const QAreaSeries* self) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Type_IsBase(true);
        return static_cast<int>(vqareaseries->type());
    } else {
        return static_cast<int>(self->QAreaSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnType(const QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Type_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_Event(QAreaSeries* self, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->event(event);
    } else {
        return self->QAreaSeries::event(event);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseEvent(QAreaSeries* self, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Event_IsBase(true);
        return vqareaseries->event(event);
    } else {
        return self->QAreaSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEvent(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Event_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_EventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->eventFilter(watched, event);
    } else {
        return self->QAreaSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseEventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_EventFilter_IsBase(true);
        return vqareaseries->eventFilter(watched, event);
    } else {
        return self->QAreaSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEventFilter(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_EventFilter_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_TimerEvent(QAreaSeries* self, QTimerEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->timerEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseTimerEvent(QAreaSeries* self, QTimerEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_TimerEvent_IsBase(true);
        vqareaseries->timerEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnTimerEvent(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_TimerEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_ChildEvent(QAreaSeries* self, QChildEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->childEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseChildEvent(QAreaSeries* self, QChildEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_ChildEvent_IsBase(true);
        vqareaseries->childEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnChildEvent(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_ChildEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_CustomEvent(QAreaSeries* self, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->customEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseCustomEvent(QAreaSeries* self, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_CustomEvent_IsBase(true);
        vqareaseries->customEvent(event);
    } else {
        ((VirtualQAreaSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnCustomEvent(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_CustomEvent_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_ConnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->connectNotify(*signal);
    } else {
        ((VirtualQAreaSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseConnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_ConnectNotify_IsBase(true);
        vqareaseries->connectNotify(*signal);
    } else {
        ((VirtualQAreaSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnConnectNotify(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaSeries_DisconnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->disconnectNotify(*signal);
    } else {
        ((VirtualQAreaSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaSeries_QBaseDisconnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_DisconnectNotify_IsBase(true);
        vqareaseries->disconnectNotify(*signal);
    } else {
        ((VirtualQAreaSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnDisconnectNotify(QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAreaSeries_Sender(const QAreaSeries* self) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->sender();
    } else {
        return ((VirtualQAreaSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAreaSeries_QBaseSender(const QAreaSeries* self) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Sender_IsBase(true);
        return vqareaseries->sender();
    } else {
        return ((VirtualQAreaSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnSender(const QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Sender_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaSeries_SenderSignalIndex(const QAreaSeries* self) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->senderSignalIndex();
    } else {
        return ((VirtualQAreaSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAreaSeries_QBaseSenderSignalIndex(const QAreaSeries* self) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_SenderSignalIndex_IsBase(true);
        return vqareaseries->senderSignalIndex();
    } else {
        return ((VirtualQAreaSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnSenderSignalIndex(const QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaSeries_Receivers(const QAreaSeries* self, const char* signal) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->receivers(signal);
    } else {
        return ((VirtualQAreaSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAreaSeries_QBaseReceivers(const QAreaSeries* self, const char* signal) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Receivers_IsBase(true);
        return vqareaseries->receivers(signal);
    } else {
        return ((VirtualQAreaSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnReceivers(const QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_Receivers_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaSeries_IsSignalConnected(const QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        return vqareaseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQAreaSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAreaSeries_QBaseIsSignalConnected(const QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_IsSignalConnected_IsBase(true);
        return vqareaseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQAreaSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnIsSignalConnected(const QAreaSeries* self, intptr_t slot) {
    auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self));
    if (vqareaseries && vqareaseries->isVirtualQAreaSeries) {
        vqareaseries->setQAreaSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQAreaSeries::QAreaSeries_IsSignalConnected_Callback>(slot));
    }
}

void QAreaSeries_Delete(QAreaSeries* self) {
    delete self;
}
