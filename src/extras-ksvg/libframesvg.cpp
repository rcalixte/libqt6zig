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
#include <QByteArray>
#include <cstring>
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
    auto* vksvg__framesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvg__framesvg && vksvg__framesvg->isVirtualKSvgFrameSvg) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSvgFrameSvg*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSvg__FrameSvg_Tr(const char* s) {
    QString _ret = KSvg::FrameSvg::tr(s);
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
    auto* vksvg__framesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvg__framesvg && vksvg__framesvg->isVirtualKSvgFrameSvg) {
        self->setImagePath(path_QString);
    } else {
        ((VirtualKSvgFrameSvg*)self)->setImagePath(path_QString);
    }
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
    QString _ret = self->prefix();
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
    QString _ret = self->actualPrefix();
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
    QString _ret = KSvg::FrameSvg::tr(s, c);
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
    QString _ret = KSvg::FrameSvg::tr(s, c, static_cast<int>(n));
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
int KSvg__FrameSvg_QBaseMetacall(KSvg__FrameSvg* self, int param1, int param2, void** param3) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Metacall_IsBase(true);
        return vksvgframesvg->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSvg::FrameSvg::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnMetacall(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Metacall_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseSetImagePath(KSvg__FrameSvg* self, const libqt_string path) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_SetImagePath_IsBase(true);
        vksvgframesvg->setImagePath(path_QString);
    } else {
        self->KSvg::FrameSvg::setImagePath(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnSetImagePath(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_SetImagePath_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_SetImagePath_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__FrameSvg_Event(KSvg__FrameSvg* self, QEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        return vksvgframesvg->event(event);
    } else {
        return self->KSvg::FrameSvg::event(event);
    }
}

// Base class handler implementation
bool KSvg__FrameSvg_QBaseEvent(KSvg__FrameSvg* self, QEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Event_IsBase(true);
        return vksvgframesvg->event(event);
    } else {
        return self->KSvg::FrameSvg::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnEvent(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Event_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__FrameSvg_TimerEvent(KSvg__FrameSvg* self, QTimerEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->timerEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseTimerEvent(KSvg__FrameSvg* self, QTimerEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_TimerEvent_IsBase(true);
        vksvgframesvg->timerEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnTimerEvent(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_TimerEvent_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__FrameSvg_ChildEvent(KSvg__FrameSvg* self, QChildEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->childEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseChildEvent(KSvg__FrameSvg* self, QChildEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_ChildEvent_IsBase(true);
        vksvgframesvg->childEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnChildEvent(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_ChildEvent_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__FrameSvg_CustomEvent(KSvg__FrameSvg* self, QEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->customEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseCustomEvent(KSvg__FrameSvg* self, QEvent* event) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_CustomEvent_IsBase(true);
        vksvgframesvg->customEvent(event);
    } else {
        ((VirtualKSvgFrameSvg*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnCustomEvent(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_CustomEvent_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__FrameSvg_ConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->connectNotify(*signal);
    } else {
        ((VirtualKSvgFrameSvg*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_ConnectNotify_IsBase(true);
        vksvgframesvg->connectNotify(*signal);
    } else {
        ((VirtualKSvgFrameSvg*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnConnectNotify(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_ConnectNotify_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__FrameSvg_DisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgFrameSvg*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__FrameSvg_QBaseDisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_DisconnectNotify_IsBase(true);
        vksvgframesvg->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgFrameSvg*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnDisconnectNotify(KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = dynamic_cast<VirtualKSvgFrameSvg*>(self);
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_DisconnectNotify_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSvg__FrameSvg_Sender(const KSvg__FrameSvg* self) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        return vksvgframesvg->sender();
    } else {
        return ((VirtualKSvgFrameSvg*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSvg__FrameSvg_QBaseSender(const KSvg__FrameSvg* self) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Sender_IsBase(true);
        return vksvgframesvg->sender();
    } else {
        return ((VirtualKSvgFrameSvg*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnSender(const KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Sender_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__FrameSvg_SenderSignalIndex(const KSvg__FrameSvg* self) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        return vksvgframesvg->senderSignalIndex();
    } else {
        return ((VirtualKSvgFrameSvg*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSvg__FrameSvg_QBaseSenderSignalIndex(const KSvg__FrameSvg* self) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_SenderSignalIndex_IsBase(true);
        return vksvgframesvg->senderSignalIndex();
    } else {
        return ((VirtualKSvgFrameSvg*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnSenderSignalIndex(const KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__FrameSvg_Receivers(const KSvg__FrameSvg* self, const char* signal) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        return vksvgframesvg->receivers(signal);
    } else {
        return ((VirtualKSvgFrameSvg*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSvg__FrameSvg_QBaseReceivers(const KSvg__FrameSvg* self, const char* signal) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Receivers_IsBase(true);
        return vksvgframesvg->receivers(signal);
    } else {
        return ((VirtualKSvgFrameSvg*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnReceivers(const KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_Receivers_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__FrameSvg_IsSignalConnected(const KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        return vksvgframesvg->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgFrameSvg*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSvg__FrameSvg_QBaseIsSignalConnected(const KSvg__FrameSvg* self, const QMetaMethod* signal) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_IsSignalConnected_IsBase(true);
        return vksvgframesvg->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgFrameSvg*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__FrameSvg_OnIsSignalConnected(const KSvg__FrameSvg* self, intptr_t slot) {
    auto* vksvgframesvg = const_cast<VirtualKSvgFrameSvg*>(dynamic_cast<const VirtualKSvgFrameSvg*>(self));
    if (vksvgframesvg && vksvgframesvg->isVirtualKSvgFrameSvg) {
        vksvgframesvg->setKSvg__FrameSvg_IsSignalConnected_Callback(reinterpret_cast<VirtualKSvgFrameSvg::KSvg__FrameSvg_IsSignalConnected_Callback>(slot));
    }
}

void KSvg__FrameSvg_Delete(KSvg__FrameSvg* self) {
    delete self;
}
