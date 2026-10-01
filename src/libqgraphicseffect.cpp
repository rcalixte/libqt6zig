#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QGraphicsBlurEffect>
#include <QGraphicsColorizeEffect>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QTimerEvent>
#include <qgraphicseffect.h>
#include "libqgraphicseffect.h"
#include "libqgraphicseffect.hxx"

QGraphicsEffect* QGraphicsEffect_new() {
    return new VirtualQGraphicsEffect();
}

QGraphicsEffect* QGraphicsEffect_new2(QObject* parent) {
    return new VirtualQGraphicsEffect(parent);
}

QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsEffect_Metacall(QGraphicsEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsEffect_Tr(const char* s) {
    auto _ret = QGraphicsEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->boundingRectFor(*sourceRect));
}

QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self) {
    return new QRectF(self->boundingRect());
}

bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self) {
    return self->isEnabled();
}

void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable) {
    self->setEnabled(enable);
}

void QGraphicsEffect_Update(QGraphicsEffect* self) {
    self->update();
}

void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled) {
    self->enabledChanged(enabled);
}

void QGraphicsEffect_Connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsEffect*, bool) = reinterpret_cast<void (*)(QGraphicsEffect*, bool)>(slot);
    QGraphicsEffect::connect(self,
                             static_cast<void (QGraphicsEffect::*)(bool)>(&QGraphicsEffect::enabledChanged),
                             [self, slotFunc](bool enabled) {
                                 bool sigval1 = enabled;
                                 slotFunc(self, sigval1);
                             });
}

void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->draw(painter);
    }
}

void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

libqt_string QGraphicsEffect_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsEffect_SuperMetaObject(const QGraphicsEffect* self) {
    return (QMetaObject*)self->QGraphicsEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnMetaObject(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        vqgraphicseffect->qgraphicseffect_metaobject_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsEffect_SuperMetacast(QGraphicsEffect* self, const char* param1) {
    return self->QGraphicsEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnMetacast(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_metacast_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsEffect_SuperMetacall(QGraphicsEffect* self, int param1, int param2, void** param3) {
    return self->QGraphicsEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnMetacall(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_metacall_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsEffect_SuperBoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->QGraphicsEffect::boundingRectFor(*sourceRect));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnBoundingRectFor(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        vqgraphicseffect->qgraphicseffect_boundingrectfor_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_BoundingRectFor_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDraw(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_draw_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Draw_Callback>(slot);
}

// Base class handler implementation
void QGraphicsEffect_SuperSourceChanged(QGraphicsEffect* self, int flags) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::sourceChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceChanged(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_sourcechanged_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceChanged_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEffect_Event(QGraphicsEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsEffect_SuperEvent(QGraphicsEffect* self, QEvent* event) {
    return self->QGraphicsEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_event_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEffect_EventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsEffect_SuperEventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event) {
    return self->QGraphicsEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnEventFilter(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_eventfilter_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEffect_TimerEvent(QGraphicsEffect* self, QTimerEvent* event) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEffect_SuperTimerEvent(QGraphicsEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnTimerEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_timerevent_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEffect_ChildEvent(QGraphicsEffect* self, QChildEvent* event) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEffect_SuperChildEvent(QGraphicsEffect* self, QChildEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnChildEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_childevent_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEffect_CustomEvent(QGraphicsEffect* self, QEvent* event) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEffect_SuperCustomEvent(QGraphicsEffect* self, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnCustomEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_customevent_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEffect_ConnectNotify(QGraphicsEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEffect_SuperConnectNotify(QGraphicsEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnConnectNotify(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_connectnotify_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEffect_DisconnectNotify(QGraphicsEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
    if (vqgraphicseffect) {
        vqgraphicseffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEffect_SuperDisconnectNotify(QGraphicsEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->QGraphicsEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDisconnectNotify(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self))
        vqgraphicseffect->qgraphicseffect_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->VirtualQGraphicsEffect::updateBoundingRect();
    } else
        qFatal("Error: Protected method QGraphicsEffect::updateBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->VirtualQGraphicsEffect::sourceIsPixmap();
    } else
        qFatal("Error: Protected method QGraphicsEffect::sourceIsPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QRectF(vqgraphicseffect->sourceBoundingRect());
    qFatal("Error: Protected method QGraphicsEffect::sourceBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->VirtualQGraphicsEffect::drawSource(painter);
    } else
        qFatal("Error: Protected method QGraphicsEffect::drawSource called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QPixmap(vqgraphicseffect->sourcePixmap());
    qFatal("Error: Protected method QGraphicsEffect::sourcePixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QRectF(vqgraphicseffect->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
    qFatal("Error: Protected method QGraphicsEffect::sourceBoundingRect1 called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
    qFatal("Error: Protected method QGraphicsEffect::sourcePixmap1 called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
    qFatal("Error: Protected method QGraphicsEffect::sourcePixmap2 called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self)))
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
    qFatal("Error: Protected method QGraphicsEffect::sourcePixmap3 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsEffect_Sender(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->VirtualQGraphicsEffect::sender();
    } else
        qFatal("Error: Protected method QGraphicsEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsEffect_SenderSignalIndex(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->VirtualQGraphicsEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsEffect_Receivers(const QGraphicsEffect* self, const char* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->VirtualQGraphicsEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsEffect_IsSignalConnected(const QGraphicsEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->VirtualQGraphicsEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsEffect::isSignalConnected called without a directly constructed type");
}

void QGraphicsEffect_Delete(QGraphicsEffect* self) {
    delete self;
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new() {
    return new VirtualQGraphicsColorizeEffect();
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent) {
    return new VirtualQGraphicsColorizeEffect(parent);
}

QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsColorizeEffect_Metacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsColorizeEffect_Tr(const char* s) {
    auto _ret = QGraphicsColorizeEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self) {
    return new QColor(self->color());
}

double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self) {
    return static_cast<double>(self->strength());
}

void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, const QColor* c) {
    self->setColor(*c);
}

void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength) {
    self->setStrength(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, const QColor* color) {
    self->colorChanged(*color);
}

void QGraphicsColorizeEffect_Connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, QColor*) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, QColor*)>(slot);
    QGraphicsColorizeEffect::connect(self,
                                     static_cast<void (QGraphicsColorizeEffect::*)(const QColor&)>(&QGraphicsColorizeEffect::colorChanged),
                                     [self, slotFunc](const QColor& color) {
                                         const QColor& color_ret = color;
                                         // Cast returned reference into pointer
                                         QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                         slotFunc(self, sigval1);
                                     });
}

void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength) {
    self->strengthChanged(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_Connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, double) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, double)>(slot);
    QGraphicsColorizeEffect::connect(self,
                                     static_cast<void (QGraphicsColorizeEffect::*)(qreal)>(&QGraphicsColorizeEffect::strengthChanged),
                                     [self, slotFunc](qreal strength) {
                                         double sigval1 = static_cast<double>(strength);
                                         slotFunc(self, sigval1);
                                     });
}

void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->draw(painter);
    }
}

libqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsColorizeEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsColorizeEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsColorizeEffect_SuperMetaObject(const QGraphicsColorizeEffect* self) {
    return (QMetaObject*)self->QGraphicsColorizeEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnMetaObject(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self)))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_metaobject_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsColorizeEffect_SuperMetacast(QGraphicsColorizeEffect* self, const char* param1) {
    return self->QGraphicsColorizeEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnMetacast(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_metacast_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsColorizeEffect_SuperMetacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3) {
    return self->QGraphicsColorizeEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnMetacall(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_metacall_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperDraw(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::draw(painter);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::draw called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDraw(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_draw_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Draw_Callback>(slot);
}

// Derived class handler implementation
QRectF* QGraphicsColorizeEffect_BoundingRectFor(const QGraphicsColorizeEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->boundingRectFor(*sourceRect));
}

// Base class handler implementation
QRectF* QGraphicsColorizeEffect_SuperBoundingRectFor(const QGraphicsColorizeEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->QGraphicsColorizeEffect::boundingRectFor(*sourceRect));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnBoundingRectFor(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self)))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_boundingrectfor_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_BoundingRectFor_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_SourceChanged(QGraphicsColorizeEffect* self, int flags) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::sourceChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperSourceChanged(QGraphicsColorizeEffect* self, int flags) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::sourceChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSourceChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_sourcechanged_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SourceChanged_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_Event(QGraphicsColorizeEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsColorizeEffect_SuperEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    return self->QGraphicsColorizeEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_event_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_EventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsColorizeEffect_SuperEventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event) {
    return self->QGraphicsColorizeEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnEventFilter(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_eventfilter_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_TimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperTimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnTimerEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_timerevent_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_ChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnChildEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_childevent_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_CustomEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperCustomEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnCustomEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_customevent_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_ConnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperConnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnConnectNotify(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_connectnotify_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsColorizeEffect_DisconnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
    if (vqgraphicscolorizeeffect) {
        vqgraphicscolorizeeffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_SuperDisconnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->QGraphicsColorizeEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsColorizeEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDisconnectNotify(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self))
        vqgraphicscolorizeeffect->qgraphicscolorizeeffect_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsColorizeEffect_UpdateBoundingRect(QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::updateBoundingRect();
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::updateBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsColorizeEffect_SourceIsPixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::sourceIsPixmap();
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::sourceIsPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsColorizeEffect_SourceBoundingRect(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self)))
        return new QRectF(vqgraphicscolorizeeffect->sourceBoundingRect());
    qFatal("Error: Protected method QGraphicsColorizeEffect::sourceBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsColorizeEffect_DrawSource(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::drawSource(painter);
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::drawSource called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsColorizeEffect_SourcePixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self)))
        return new QPixmap(vqgraphicscolorizeeffect->sourcePixmap());
    qFatal("Error: Protected method QGraphicsColorizeEffect::sourcePixmap called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsColorizeEffect_Sender(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::sender();
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsColorizeEffect_SenderSignalIndex(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsColorizeEffect_Receivers(const QGraphicsColorizeEffect* self, const char* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsColorizeEffect_IsSignalConnected(const QGraphicsColorizeEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->VirtualQGraphicsColorizeEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsColorizeEffect::isSignalConnected called without a directly constructed type");
}

void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self) {
    delete self;
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new() {
    return new VirtualQGraphicsBlurEffect();
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent) {
    return new VirtualQGraphicsBlurEffect(parent);
}

QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsBlurEffect_Metacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsBlurEffect_Tr(const char* s) {
    auto _ret = QGraphicsBlurEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect) {
    return new QRectF(self->boundingRectFor(*rect));
}

double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self) {
    return static_cast<double>(self->blurRadius());
}

int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self) {
    return static_cast<int>(self->blurHints());
}

void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
    self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints) {
    self->setBlurHints(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
    self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_Connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, double) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, double)>(slot);
    QGraphicsBlurEffect::connect(self,
                                 static_cast<void (QGraphicsBlurEffect::*)(qreal)>(&QGraphicsBlurEffect::blurRadiusChanged),
                                 [self, slotFunc](qreal blurRadius) {
                                     double sigval1 = static_cast<double>(blurRadius);
                                     slotFunc(self, sigval1);
                                 });
}

void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints) {
    self->blurHintsChanged(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_Connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, int) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, int)>(slot);
    QGraphicsBlurEffect::connect(self,
                                 static_cast<void (QGraphicsBlurEffect::*)(QGraphicsBlurEffect::BlurHints)>(&QGraphicsBlurEffect::blurHintsChanged),
                                 [self, slotFunc](QGraphicsBlurEffect::BlurHints hints) {
                                     int sigval1 = static_cast<int>(hints);
                                     slotFunc(self, sigval1);
                                 });
}

void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->draw(painter);
    }
}

libqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsBlurEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsBlurEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsBlurEffect_SuperMetaObject(const QGraphicsBlurEffect* self) {
    return (QMetaObject*)self->QGraphicsBlurEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnMetaObject(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self)))
        vqgraphicsblureffect->qgraphicsblureffect_metaobject_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsBlurEffect_SuperMetacast(QGraphicsBlurEffect* self, const char* param1) {
    return self->QGraphicsBlurEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnMetacast(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_metacast_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsBlurEffect_SuperMetacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3) {
    return self->QGraphicsBlurEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnMetacall(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_metacall_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsBlurEffect_SuperBoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect) {
    return new QRectF(self->QGraphicsBlurEffect::boundingRectFor(*rect));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnBoundingRectFor(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self)))
        vqgraphicsblureffect->qgraphicsblureffect_boundingrectfor_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_BoundingRectFor_Callback>(slot);
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperDraw(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::draw(painter);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::draw called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDraw(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_draw_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Draw_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_SourceChanged(QGraphicsBlurEffect* self, int flags) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::sourceChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperSourceChanged(QGraphicsBlurEffect* self, int flags) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::sourceChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSourceChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_sourcechanged_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SourceChanged_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsBlurEffect_Event(QGraphicsBlurEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsBlurEffect_SuperEvent(QGraphicsBlurEffect* self, QEvent* event) {
    return self->QGraphicsBlurEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_event_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsBlurEffect_EventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsBlurEffect_SuperEventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event) {
    return self->QGraphicsBlurEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnEventFilter(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_eventfilter_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_TimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperTimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnTimerEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_timerevent_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_ChildEvent(QGraphicsBlurEffect* self, QChildEvent* event) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperChildEvent(QGraphicsBlurEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnChildEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_childevent_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_CustomEvent(QGraphicsBlurEffect* self, QEvent* event) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperCustomEvent(QGraphicsBlurEffect* self, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnCustomEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_customevent_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_ConnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperConnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnConnectNotify(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_connectnotify_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsBlurEffect_DisconnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
    if (vqgraphicsblureffect) {
        vqgraphicsblureffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_SuperDisconnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->QGraphicsBlurEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsBlurEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDisconnectNotify(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self))
        vqgraphicsblureffect->qgraphicsblureffect_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsBlurEffect_UpdateBoundingRect(QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->VirtualQGraphicsBlurEffect::updateBoundingRect();
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::updateBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsBlurEffect_SourceIsPixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->VirtualQGraphicsBlurEffect::sourceIsPixmap();
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::sourceIsPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsBlurEffect_SourceBoundingRect(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self)))
        return new QRectF(vqgraphicsblureffect->sourceBoundingRect());
    qFatal("Error: Protected method QGraphicsBlurEffect::sourceBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsBlurEffect_DrawSource(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->VirtualQGraphicsBlurEffect::drawSource(painter);
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::drawSource called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsBlurEffect_SourcePixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self)))
        return new QPixmap(vqgraphicsblureffect->sourcePixmap());
    qFatal("Error: Protected method QGraphicsBlurEffect::sourcePixmap called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsBlurEffect_Sender(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->VirtualQGraphicsBlurEffect::sender();
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsBlurEffect_SenderSignalIndex(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->VirtualQGraphicsBlurEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsBlurEffect_Receivers(const QGraphicsBlurEffect* self, const char* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->VirtualQGraphicsBlurEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsBlurEffect_IsSignalConnected(const QGraphicsBlurEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->VirtualQGraphicsBlurEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsBlurEffect::isSignalConnected called without a directly constructed type");
}

void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self) {
    delete self;
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new() {
    return new VirtualQGraphicsDropShadowEffect();
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent) {
    return new VirtualQGraphicsDropShadowEffect(parent);
}

QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsDropShadowEffect_Metacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsDropShadowEffect_Tr(const char* s) {
    auto _ret = QGraphicsDropShadowEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect) {
    return new QRectF(self->boundingRectFor(*rect));
}

QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self) {
    return new QPointF(self->offset());
}

double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->xOffset());
}

double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->yOffset());
}

double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->blurRadius());
}

QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self) {
    return new QColor(self->color());
}

void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, const QPointF* ofs) {
    self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
    self->setOffset(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetOffset3(QGraphicsDropShadowEffect* self, double d) {
    self->setOffset(static_cast<qreal>(d));
}

void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx) {
    self->setXOffset(static_cast<qreal>(dx));
}

void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy) {
    self->setYOffset(static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
    self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, const QColor* color) {
    self->setColor(*color);
}

void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, const QPointF* offset) {
    self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_Connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, QPointF*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, QPointF*)>(slot);
    QGraphicsDropShadowEffect::connect(self,
                                       static_cast<void (QGraphicsDropShadowEffect::*)(const QPointF&)>(&QGraphicsDropShadowEffect::offsetChanged),
                                       [self, slotFunc](const QPointF& offset) {
                                           const QPointF& offset_ret = offset;
                                           // Cast returned reference into pointer
                                           QPointF* sigval1 = const_cast<QPointF*>(&offset_ret);
                                           slotFunc(self, sigval1);
                                       });
}

void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
    self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, double) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, double)>(slot);
    QGraphicsDropShadowEffect::connect(self,
                                       static_cast<void (QGraphicsDropShadowEffect::*)(qreal)>(&QGraphicsDropShadowEffect::blurRadiusChanged),
                                       [self, slotFunc](qreal blurRadius) {
                                           double sigval1 = static_cast<double>(blurRadius);
                                           slotFunc(self, sigval1);
                                       });
}

void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, const QColor* color) {
    self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_Connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, QColor*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, QColor*)>(slot);
    QGraphicsDropShadowEffect::connect(self,
                                       static_cast<void (QGraphicsDropShadowEffect::*)(const QColor&)>(&QGraphicsDropShadowEffect::colorChanged),
                                       [self, slotFunc](const QColor& color) {
                                           const QColor& color_ret = color;
                                           // Cast returned reference into pointer
                                           QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                           slotFunc(self, sigval1);
                                       });
}

void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->draw(painter);
    }
}

libqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsDropShadowEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsDropShadowEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsDropShadowEffect_SuperMetaObject(const QGraphicsDropShadowEffect* self) {
    return (QMetaObject*)self->QGraphicsDropShadowEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnMetaObject(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self)))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_metaobject_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsDropShadowEffect_SuperMetacast(QGraphicsDropShadowEffect* self, const char* param1) {
    return self->QGraphicsDropShadowEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnMetacast(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_metacast_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsDropShadowEffect_SuperMetacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3) {
    return self->QGraphicsDropShadowEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnMetacall(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_metacall_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsDropShadowEffect_SuperBoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect) {
    return new QRectF(self->QGraphicsDropShadowEffect::boundingRectFor(*rect));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnBoundingRectFor(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self)))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_boundingrectfor_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_BoundingRectFor_Callback>(slot);
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperDraw(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::draw(painter);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::draw called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDraw(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_draw_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Draw_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_SourceChanged(QGraphicsDropShadowEffect* self, int flags) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::sourceChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperSourceChanged(QGraphicsDropShadowEffect* self, int flags) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::sourceChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSourceChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_sourcechanged_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SourceChanged_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_Event(QGraphicsDropShadowEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_SuperEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    return self->QGraphicsDropShadowEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_event_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_EventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_SuperEventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event) {
    return self->QGraphicsDropShadowEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnEventFilter(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_eventfilter_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_TimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperTimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnTimerEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_timerevent_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_ChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnChildEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_childevent_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_CustomEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperCustomEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnCustomEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_customevent_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_ConnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperConnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnConnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_connectnotify_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_DisconnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
    if (vqgraphicsdropshadoweffect) {
        vqgraphicsdropshadoweffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_SuperDisconnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->QGraphicsDropShadowEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsDropShadowEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDisconnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self))
        vqgraphicsdropshadoweffect->qgraphicsdropshadoweffect_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsDropShadowEffect_UpdateBoundingRect(QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::updateBoundingRect();
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::updateBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsDropShadowEffect_SourceIsPixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::sourceIsPixmap();
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::sourceIsPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsDropShadowEffect_SourceBoundingRect(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self)))
        return new QRectF(vqgraphicsdropshadoweffect->sourceBoundingRect());
    qFatal("Error: Protected method QGraphicsDropShadowEffect::sourceBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsDropShadowEffect_DrawSource(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::drawSource(painter);
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::drawSource called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsDropShadowEffect_SourcePixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self)))
        return new QPixmap(vqgraphicsdropshadoweffect->sourcePixmap());
    qFatal("Error: Protected method QGraphicsDropShadowEffect::sourcePixmap called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsDropShadowEffect_Sender(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::sender();
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsDropShadowEffect_SenderSignalIndex(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsDropShadowEffect_Receivers(const QGraphicsDropShadowEffect* self, const char* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsDropShadowEffect_IsSignalConnected(const QGraphicsDropShadowEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->VirtualQGraphicsDropShadowEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsDropShadowEffect::isSignalConnected called without a directly constructed type");
}

void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self) {
    delete self;
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new() {
    return new VirtualQGraphicsOpacityEffect();
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent) {
    return new VirtualQGraphicsOpacityEffect(parent);
}

QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsOpacityEffect_Metacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsOpacityEffect_Tr(const char* s) {
    auto _ret = QGraphicsOpacityEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self) {
    return static_cast<double>(self->opacity());
}

QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self) {
    return new QBrush(self->opacityMask());
}

void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, const QBrush* mask) {
    self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity) {
    self->opacityChanged(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_Connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, double) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, double)>(slot);
    QGraphicsOpacityEffect::connect(self,
                                    static_cast<void (QGraphicsOpacityEffect::*)(qreal)>(&QGraphicsOpacityEffect::opacityChanged),
                                    [self, slotFunc](qreal opacity) {
                                        double sigval1 = static_cast<double>(opacity);
                                        slotFunc(self, sigval1);
                                    });
}

void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, const QBrush* mask) {
    self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_Connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, QBrush*) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, QBrush*)>(slot);
    QGraphicsOpacityEffect::connect(self,
                                    static_cast<void (QGraphicsOpacityEffect::*)(const QBrush&)>(&QGraphicsOpacityEffect::opacityMaskChanged),
                                    [self, slotFunc](const QBrush& mask) {
                                        const QBrush& mask_ret = mask;
                                        // Cast returned reference into pointer
                                        QBrush* sigval1 = const_cast<QBrush*>(&mask_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->draw(painter);
    }
}

libqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsOpacityEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsOpacityEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsOpacityEffect_SuperMetaObject(const QGraphicsOpacityEffect* self) {
    return (QMetaObject*)self->QGraphicsOpacityEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnMetaObject(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self)))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_metaobject_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsOpacityEffect_SuperMetacast(QGraphicsOpacityEffect* self, const char* param1) {
    return self->QGraphicsOpacityEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnMetacast(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_metacast_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsOpacityEffect_SuperMetacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3) {
    return self->QGraphicsOpacityEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnMetacall(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_metacall_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperDraw(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::draw(painter);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::draw called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDraw(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_draw_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Draw_Callback>(slot);
}

// Derived class handler implementation
QRectF* QGraphicsOpacityEffect_BoundingRectFor(const QGraphicsOpacityEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->boundingRectFor(*sourceRect));
}

// Base class handler implementation
QRectF* QGraphicsOpacityEffect_SuperBoundingRectFor(const QGraphicsOpacityEffect* self, const QRectF* sourceRect) {
    return new QRectF(self->QGraphicsOpacityEffect::boundingRectFor(*sourceRect));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnBoundingRectFor(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self)))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_boundingrectfor_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_BoundingRectFor_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_SourceChanged(QGraphicsOpacityEffect* self, int flags) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::sourceChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperSourceChanged(QGraphicsOpacityEffect* self, int flags) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::sourceChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSourceChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_sourcechanged_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SourceChanged_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_Event(QGraphicsOpacityEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsOpacityEffect_SuperEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    return self->QGraphicsOpacityEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_event_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_EventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsOpacityEffect_SuperEventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event) {
    return self->QGraphicsOpacityEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnEventFilter(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_eventfilter_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_TimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperTimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnTimerEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_timerevent_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_ChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnChildEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_childevent_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_CustomEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperCustomEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnCustomEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_customevent_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_ConnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperConnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnConnectNotify(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_connectnotify_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsOpacityEffect_DisconnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal) {
    auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
    if (vqgraphicsopacityeffect) {
        vqgraphicsopacityeffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_SuperDisconnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->QGraphicsOpacityEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsOpacityEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDisconnectNotify(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self))
        vqgraphicsopacityeffect->qgraphicsopacityeffect_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsOpacityEffect_UpdateBoundingRect(QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::updateBoundingRect();
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::updateBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsOpacityEffect_SourceIsPixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::sourceIsPixmap();
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::sourceIsPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QGraphicsOpacityEffect_SourceBoundingRect(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self)))
        return new QRectF(vqgraphicsopacityeffect->sourceBoundingRect());
    qFatal("Error: Protected method QGraphicsOpacityEffect::sourceBoundingRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsOpacityEffect_DrawSource(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::drawSource(painter);
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::drawSource called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QGraphicsOpacityEffect_SourcePixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self)))
        return new QPixmap(vqgraphicsopacityeffect->sourcePixmap());
    qFatal("Error: Protected method QGraphicsOpacityEffect::sourcePixmap called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsOpacityEffect_Sender(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::sender();
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsOpacityEffect_SenderSignalIndex(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsOpacityEffect_Receivers(const QGraphicsOpacityEffect* self, const char* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsOpacityEffect_IsSignalConnected(const QGraphicsOpacityEffect* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->VirtualQGraphicsOpacityEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsOpacityEffect::isSignalConnected called without a directly constructed type");
}

void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self) {
    delete self;
}
