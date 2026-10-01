#define WORKAROUND_INNER_CLASS_DEFINITION_KSvg__FrameSvg
#define WORKAROUND_INNER_CLASS_DEFINITION_KSvg__Svg
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSizeF>
#include <QString>
#include <QTimerEvent>
#include <framesvg.h>
#include "libframesvg.h"
#include "libframesvg.hxx"

KSvg__FrameSvg* KSvg__FrameSvg_new() {
    return new VirtualKSvgFrameSvg();
}

KSvg__FrameSvg* KSvg__FrameSvg_new2(QObject* parent) {
    return new VirtualKSvgFrameSvg(parent);
}

QMetaObject* KSvg__FrameSvg_MetaObject(const KSvg__FrameSvg* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSvg__FrameSvg_Metacast(KSvg__FrameSvg* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSvg__FrameSvg_Metacall(KSvg__FrameSvg* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSvg__FrameSvg_Tr(const char* s) {
    auto _ret = KSvg::FrameSvg::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__FrameSvg_SetImagePath(KSvg__FrameSvg* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setImagePath(path_QString);
}

void KSvg__FrameSvg_SetEnabledBorders(KSvg__FrameSvg* self, const int borders) {
    self->setEnabledBorders(static_cast<const KSvg::FrameSvg::EnabledBorders>(borders));
}

int KSvg__FrameSvg_EnabledBorders(const KSvg__FrameSvg* self) {
    return static_cast<int>(self->enabledBorders());
}

void KSvg__FrameSvg_ResizeFrame(KSvg__FrameSvg* self, const QSizeF* size) {
    self->resizeFrame(*size);
}

QSizeF* KSvg__FrameSvg_FrameSize(const KSvg__FrameSvg* self) {
    return new QSizeF(self->frameSize());
}

double KSvg__FrameSvg_MarginSize(const KSvg__FrameSvg* self, const int edge) {
    return static_cast<double>(self->marginSize(static_cast<const KSvg::FrameSvg::MarginEdge>(edge)));
}

void KSvg__FrameSvg_GetMargins(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom) {
    self->getMargins(static_cast<qreal&>(*left), static_cast<qreal&>(*top), static_cast<qreal&>(*right), static_cast<qreal&>(*bottom));
}

double KSvg__FrameSvg_FixedMarginSize(const KSvg__FrameSvg* self, const int edge) {
    return static_cast<double>(self->fixedMarginSize(static_cast<const KSvg::FrameSvg::MarginEdge>(edge)));
}

void KSvg__FrameSvg_GetFixedMargins(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom) {
    self->getFixedMargins(static_cast<qreal&>(*left), static_cast<qreal&>(*top), static_cast<qreal&>(*right), static_cast<qreal&>(*bottom));
}

double KSvg__FrameSvg_InsetSize(const KSvg__FrameSvg* self, const int edge) {
    return static_cast<double>(self->insetSize(static_cast<const KSvg::FrameSvg::MarginEdge>(edge)));
}

void KSvg__FrameSvg_GetInset(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom) {
    self->getInset(static_cast<qreal&>(*left), static_cast<qreal&>(*top), static_cast<qreal&>(*right), static_cast<qreal&>(*bottom));
}

QRectF* KSvg__FrameSvg_ContentsRect(const KSvg__FrameSvg* self) {
    return new QRectF(self->contentsRect());
}

void KSvg__FrameSvg_SetElementPrefix(KSvg__FrameSvg* self, int location) {
    self->setElementPrefix(static_cast<KSvg::FrameSvg::LocationPrefix>(location));
}

void KSvg__FrameSvg_SetElementPrefix2(KSvg__FrameSvg* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setElementPrefix(prefix_QString);
}

bool KSvg__FrameSvg_HasElementPrefix(const KSvg__FrameSvg* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->hasElementPrefix(prefix_QString);
}

bool KSvg__FrameSvg_HasElementPrefix2(const KSvg__FrameSvg* self, int location) {
    return self->hasElementPrefix(static_cast<KSvg::FrameSvg::LocationPrefix>(location));
}

libqt_string KSvg__FrameSvg_Prefix(KSvg__FrameSvg* self) {
    auto _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRegion* KSvg__FrameSvg_Mask(const KSvg__FrameSvg* self) {
    return new QRegion(self->mask());
}

QPixmap* KSvg__FrameSvg_AlphaMask(const KSvg__FrameSvg* self) {
    return new QPixmap(self->alphaMask());
}

void KSvg__FrameSvg_SetCacheAllRenderedFrames(KSvg__FrameSvg* self, bool cache) {
    self->setCacheAllRenderedFrames(cache);
}

bool KSvg__FrameSvg_CacheAllRenderedFrames(const KSvg__FrameSvg* self) {
    return self->cacheAllRenderedFrames();
}

void KSvg__FrameSvg_ClearCache(KSvg__FrameSvg* self) {
    self->clearCache();
}

QPixmap* KSvg__FrameSvg_FramePixmap(KSvg__FrameSvg* self) {
    return new QPixmap(self->framePixmap());
}

void KSvg__FrameSvg_PaintFrame(KSvg__FrameSvg* self, QPainter* painter, const QRectF* target) {
    self->paintFrame(painter, *target);
}

void KSvg__FrameSvg_PaintFrame2(KSvg__FrameSvg* self, QPainter* painter) {
    self->paintFrame(painter);
}

libqt_string KSvg__FrameSvg_ActualPrefix(const KSvg__FrameSvg* self) {
    auto _ret = self->actualPrefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSvg__FrameSvg_IsRepaintBlocked(const KSvg__FrameSvg* self) {
    return self->isRepaintBlocked();
}

void KSvg__FrameSvg_SetRepaintBlocked(KSvg__FrameSvg* self, bool blocked) {
    self->setRepaintBlocked(blocked);
}

int KSvg__FrameSvg_MinimumDrawingHeight(KSvg__FrameSvg* self) {
    return self->minimumDrawingHeight();
}

int KSvg__FrameSvg_MinimumDrawingWidth(KSvg__FrameSvg* self) {
    return self->minimumDrawingWidth();
}

libqt_string KSvg__FrameSvg_Tr2(const char* s, const char* c) {
    auto _ret = KSvg::FrameSvg::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSvg__FrameSvg_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSvg::FrameSvg::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__FrameSvg_PaintFrame3(KSvg__FrameSvg* self, QPainter* painter, const QRectF* target, const QRectF* source) {
    self->paintFrame(painter, *target, *source);
}

void KSvg__FrameSvg_PaintFrame22(KSvg__FrameSvg* self, QPainter* painter, const QPointF* pos) {
    self->paintFrame(painter, *pos);
}

// Base class handler implementation
QMetaObject* KSvg__FrameSvg_SuperMetaObject(const KSvg__FrameSvg* self) {
    return (QMetaObject*)self->KSvg::FrameSvg::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnMetaObject(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self)))
        vksvgframesvg->ksvg__framesvg_metaobject_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSvg__FrameSvg_SuperMetacast(KSvg__FrameSvg* self, const char* param1) {
    return self->KSvg::FrameSvg::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnMetacast(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_metacast_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSvg__FrameSvg_SuperMetacall(KSvg__FrameSvg* self, int param1, int param2, void** param3) {
    return self->KSvg::FrameSvg::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnMetacall(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_metacall_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Metacall_Callback>(slot);
}

// Base class handler implementation
void KSvg__FrameSvg_SuperSetImagePath(KSvg__FrameSvg* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->KSvg::FrameSvg::setImagePath(path_QString);
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnSetImagePath(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_setimagepath_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_SetImagePath_Callback>(slot);
}

// Derived class handler implementation
bool KSvg__FrameSvg_Event(KSvg__FrameSvg* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSvg__FrameSvg_SuperEvent(KSvg__FrameSvg* self, QEvent* event) {
    return self->KSvg::FrameSvg::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnEvent(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_event_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Event_Callback>(slot);
}

// Derived class handler implementation
void KSvg__FrameSvg_TimerEvent(KSvg__FrameSvg* self, QTimerEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg) {
        vksvgframesvg->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSvg::FrameSvg::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSvg__FrameSvg_SuperTimerEvent(KSvg__FrameSvg* self, QTimerEvent* event) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self)) {
        vksvgframesvg->KSvg::FrameSvg::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSvg::FrameSvg::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnTimerEvent(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_timerevent_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSvg__FrameSvg_ChildEvent(KSvg__FrameSvg* self, QChildEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg) {
        vksvgframesvg->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSvg::FrameSvg::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSvg__FrameSvg_SuperChildEvent(KSvg__FrameSvg* self, QChildEvent* event) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self)) {
        vksvgframesvg->KSvg::FrameSvg::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSvg::FrameSvg::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnChildEvent(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_childevent_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSvg__FrameSvg_CustomEvent(KSvg__FrameSvg* self, QEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg) {
        vksvgframesvg->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSvg::FrameSvg::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSvg__FrameSvg_SuperCustomEvent(KSvg__FrameSvg* self, QEvent* event) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self)) {
        vksvgframesvg->KSvg::FrameSvg::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSvg::FrameSvg::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnCustomEvent(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_customevent_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSvg__FrameSvg_ConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg) {
        vksvgframesvg->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSvg::FrameSvg::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSvg__FrameSvg_SuperConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self)) {
        vksvgframesvg->KSvg::FrameSvg::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSvg::FrameSvg::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnConnectNotify(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_connectnotify_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSvg__FrameSvg_DisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg) {
        vksvgframesvg->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSvg::FrameSvg::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSvg__FrameSvg_SuperDisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self)) {
        vksvgframesvg->KSvg::FrameSvg::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSvg::FrameSvg::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnDisconnectNotify(KSvg__FrameSvg* self, intptr_t slot) {
    if (auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self))
        vksvgframesvg->ksvg__framesvg_disconnectnotify_callback = reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KSvg__FrameSvg_Sender(const KSvg__FrameSvg* self) {
    if (auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self))) {
        return vksvgframesvg->VirtualKSvgFrameSvg::sender();
    } else
        qFatal("Error: Protected method KSvg::FrameSvg::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSvg__FrameSvg_SenderSignalIndex(const KSvg__FrameSvg* self) {
    if (auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self))) {
        return vksvgframesvg->VirtualKSvgFrameSvg::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSvg::FrameSvg::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSvg__FrameSvg_Receivers(const KSvg__FrameSvg* self, const char* signal) {
    if (auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self))) {
        return vksvgframesvg->VirtualKSvgFrameSvg::receivers(signal);
    } else
        qFatal("Error: Protected method KSvg::FrameSvg::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSvg__FrameSvg_IsSignalConnected(const KSvg__FrameSvg* self, const QMetaMethod* signal) {
    if (auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self))) {
        return vksvgframesvg->VirtualKSvgFrameSvg::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSvg::FrameSvg::isSignalConnected called without a directly constructed type");
}

void KSvg__FrameSvg_Delete(KSvg__FrameSvg* self) {
    delete self;
}
