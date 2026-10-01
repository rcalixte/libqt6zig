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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAreaSeries_Tr(const char* s) {
    auto _ret = QAreaSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAreaSeries_Type(const QAreaSeries* self) {
    return static_cast<int>(self->type());
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
    auto _ret = self->pointLabelsFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::clicked),
                         [self, slotFunc](const QPointF& point) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QPointF&, bool)>(&QAreaSeries::hovered),
                         [self, slotFunc](const QPointF& point, bool state) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::pressed),
                         [self, slotFunc](const QPointF& point) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::released),
                         [self, slotFunc](const QPointF& point) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::doubleClicked),
                         [self, slotFunc](const QPointF& point) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)()>(&QAreaSeries::selected),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QAreaSeries_ColorChanged(QAreaSeries* self, QColor* color) {
    self->colorChanged(*color);
}

void QAreaSeries_Connect_ColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(QColor)>(&QAreaSeries::colorChanged),
                         [self, slotFunc](QColor color) {
                             QColor* sigval1 = new QColor(color);
                             slotFunc(self, sigval1);
                         });
}

void QAreaSeries_BorderColorChanged(QAreaSeries* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QAreaSeries_Connect_BorderColorChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QColor*) = reinterpret_cast<void (*)(QAreaSeries*, QColor*)>(slot);
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(QColor)>(&QAreaSeries::borderColorChanged),
                         [self, slotFunc](QColor color) {
                             QColor* sigval1 = new QColor(color);
                             slotFunc(self, sigval1);
                         });
}

void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->pointLabelsFormatChanged(format_QString);
}

void QAreaSeries_Connect_PointLabelsFormatChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, const char*) = reinterpret_cast<void (*)(QAreaSeries*, const char*)>(slot);
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QString&)>(&QAreaSeries::pointLabelsFormatChanged),
                         [self, slotFunc](const QString& format) {
                             const auto format_ret = format;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray format_b = format_ret.toUtf8();
                             auto format_str_len = format_b.length();
                             const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
                             memcpy((void*)format_str, format_b.data(), format_str_len);
                             ((char*)format_str)[format_str_len] = '\0';
                             const char* sigval1 = format_str;
                             slotFunc(self, sigval1);
                             libqt_free(format_str);
                         });
}

void QAreaSeries_PointLabelsVisibilityChanged(QAreaSeries* self, bool visible) {
    self->pointLabelsVisibilityChanged(visible);
}

void QAreaSeries_Connect_PointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, bool) = reinterpret_cast<void (*)(QAreaSeries*, bool)>(slot);
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(bool)>(&QAreaSeries::pointLabelsVisibilityChanged),
                         [self, slotFunc](bool visible) {
                             bool sigval1 = visible;
                             slotFunc(self, sigval1);
                         });
}

void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, const QFont* font) {
    self->pointLabelsFontChanged(*font);
}

void QAreaSeries_Connect_PointLabelsFontChanged(QAreaSeries* self, intptr_t slot) {
    void (*slotFunc)(QAreaSeries*, QFont*) = reinterpret_cast<void (*)(QAreaSeries*, QFont*)>(slot);
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QFont&)>(&QAreaSeries::pointLabelsFontChanged),
                         [self, slotFunc](const QFont& font) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(const QColor&)>(&QAreaSeries::pointLabelsColorChanged),
                         [self, slotFunc](const QColor& color) {
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
    QAreaSeries::connect(self,
                         static_cast<void (QAreaSeries::*)(bool)>(&QAreaSeries::pointLabelsClippingChanged),
                         [self, slotFunc](bool clipping) {
                             bool sigval1 = clipping;
                             slotFunc(self, sigval1);
                         });
}

libqt_string QAreaSeries_Tr2(const char* s, const char* c) {
    auto _ret = QAreaSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAreaSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAreaSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

// Base class handler implementation
QMetaObject* QAreaSeries_SuperMetaObject(const QAreaSeries* self) {
    return (QMetaObject*)self->QAreaSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnMetaObject(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self)))
        vqareaseries->qareaseries_metaobject_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAreaSeries_SuperMetacast(QAreaSeries* self, const char* param1) {
    return self->QAreaSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnMetacast(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_metacast_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAreaSeries_SuperMetacall(QAreaSeries* self, int param1, int param2, void** param3) {
    return self->QAreaSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnMetacall(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_metacall_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QAreaSeries_SuperType(const QAreaSeries* self) {
    return static_cast<int>(self->QAreaSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnType(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self)))
        vqareaseries->qareaseries_type_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QAreaSeries_Event(QAreaSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAreaSeries_SuperEvent(QAreaSeries* self, QEvent* event) {
    return self->QAreaSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_event_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAreaSeries_EventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAreaSeries_SuperEventFilter(QAreaSeries* self, QObject* watched, QEvent* event) {
    return self->QAreaSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnEventFilter(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_eventfilter_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAreaSeries_TimerEvent(QAreaSeries* self, QTimerEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries) {
        vqareaseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaSeries_SuperTimerEvent(QAreaSeries* self, QTimerEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->QAreaSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnTimerEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_timerevent_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaSeries_ChildEvent(QAreaSeries* self, QChildEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries) {
        vqareaseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaSeries_SuperChildEvent(QAreaSeries* self, QChildEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->QAreaSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnChildEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_childevent_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaSeries_CustomEvent(QAreaSeries* self, QEvent* event) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries) {
        vqareaseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaSeries_SuperCustomEvent(QAreaSeries* self, QEvent* event) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->QAreaSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnCustomEvent(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_customevent_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaSeries_ConnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries) {
        vqareaseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAreaSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaSeries_SuperConnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->QAreaSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAreaSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnConnectNotify(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_connectnotify_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAreaSeries_DisconnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self);
    if (vqareaseries) {
        vqareaseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAreaSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaSeries_SuperDisconnectNotify(QAreaSeries* self, const QMetaMethod* signal) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self)) {
        vqareaseries->QAreaSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAreaSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaSeries_OnDisconnectNotify(QAreaSeries* self, intptr_t slot) {
    if (auto* vqareaseries = dynamic_cast<VirtualQAreaSeries*>(self))
        vqareaseries->qareaseries_disconnectnotify_callback = reinterpret_cast<VirtualQAreaSeries::QAreaSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAreaSeries_Sender(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->VirtualQAreaSeries::sender();
    } else
        qFatal("Error: Protected method QAreaSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAreaSeries_SenderSignalIndex(const QAreaSeries* self) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->VirtualQAreaSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAreaSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAreaSeries_Receivers(const QAreaSeries* self, const char* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->VirtualQAreaSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QAreaSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAreaSeries_IsSignalConnected(const QAreaSeries* self, const QMetaMethod* signal) {
    if (auto* vqareaseries = const_cast<VirtualQAreaSeries*>(dynamic_cast<const VirtualQAreaSeries*>(self))) {
        return vqareaseries->VirtualQAreaSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAreaSeries::isSignalConnected called without a directly constructed type");
}

void QAreaSeries_Delete(QAreaSeries* self) {
    delete self;
}
