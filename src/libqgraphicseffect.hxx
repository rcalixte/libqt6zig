#pragma once
#ifndef LIBQGRAPHICSEFFECT_HXX
#define LIBQGRAPHICSEFFECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsEffect
class VirtualQGraphicsEffect : public QGraphicsEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsEffect_MetaObject_Callback = QMetaObject* (*)(const QGraphicsEffect*);
    using QGraphicsEffect_Metacast_Callback = void* (*)(QGraphicsEffect*, const char*);
    using QGraphicsEffect_Metacall_Callback = int (*)(QGraphicsEffect*, int, int, void**);
    using QGraphicsEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsEffect*, QRectF*);
    using QGraphicsEffect_Draw_Callback = void (*)(QGraphicsEffect*, QPainter*);
    using QGraphicsEffect_SourceChanged_Callback = void (*)(QGraphicsEffect*, int);
    using QGraphicsEffect_Event_Callback = bool (*)(QGraphicsEffect*, QEvent*);
    using QGraphicsEffect_EventFilter_Callback = bool (*)(QGraphicsEffect*, QObject*, QEvent*);
    using QGraphicsEffect_TimerEvent_Callback = void (*)(QGraphicsEffect*, QTimerEvent*);
    using QGraphicsEffect_ChildEvent_Callback = void (*)(QGraphicsEffect*, QChildEvent*);
    using QGraphicsEffect_CustomEvent_Callback = void (*)(QGraphicsEffect*, QEvent*);
    using QGraphicsEffect_ConnectNotify_Callback = void (*)(QGraphicsEffect*, QMetaMethod*);
    using QGraphicsEffect_DisconnectNotify_Callback = void (*)(QGraphicsEffect*, QMetaMethod*);
    using QGraphicsEffect::drawSource;
    using QGraphicsEffect::isSignalConnected;
    using QGraphicsEffect::receivers;
    using QGraphicsEffect::sender;
    using QGraphicsEffect::senderSignalIndex;
    using QGraphicsEffect::sourceBoundingRect;
    using QGraphicsEffect::sourceIsPixmap;
    using QGraphicsEffect::sourcePixmap;
    using QGraphicsEffect::updateBoundingRect;

    // Instance callback storage
    QGraphicsEffect_MetaObject_Callback qgraphicseffect_metaobject_callback = nullptr;
    QGraphicsEffect_Metacast_Callback qgraphicseffect_metacast_callback = nullptr;
    QGraphicsEffect_Metacall_Callback qgraphicseffect_metacall_callback = nullptr;
    QGraphicsEffect_BoundingRectFor_Callback qgraphicseffect_boundingrectfor_callback = nullptr;
    QGraphicsEffect_Draw_Callback qgraphicseffect_draw_callback = nullptr;
    QGraphicsEffect_SourceChanged_Callback qgraphicseffect_sourcechanged_callback = nullptr;
    QGraphicsEffect_Event_Callback qgraphicseffect_event_callback = nullptr;
    QGraphicsEffect_EventFilter_Callback qgraphicseffect_eventfilter_callback = nullptr;
    QGraphicsEffect_TimerEvent_Callback qgraphicseffect_timerevent_callback = nullptr;
    QGraphicsEffect_ChildEvent_Callback qgraphicseffect_childevent_callback = nullptr;
    QGraphicsEffect_CustomEvent_Callback qgraphicseffect_customevent_callback = nullptr;
    QGraphicsEffect_ConnectNotify_Callback qgraphicseffect_connectnotify_callback = nullptr;
    QGraphicsEffect_DisconnectNotify_Callback qgraphicseffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsEffect {
        using QGraphicsEffect::childEvent;
        using QGraphicsEffect::connectNotify;
        using QGraphicsEffect::customEvent;
        using QGraphicsEffect::disconnectNotify;
        using QGraphicsEffect::draw;
        using QGraphicsEffect::sourceChanged;
        using QGraphicsEffect::timerEvent;
    };

    VirtualQGraphicsEffect() : QGraphicsEffect() {};
    VirtualQGraphicsEffect(QObject* parent) : QGraphicsEffect(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicseffect_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicseffect_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicseffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicseffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicseffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicseffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicseffect_boundingrectfor_callback) {
            const QRectF& sourceRect_ret = sourceRect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&sourceRect_ret);
            QRectF* callback_ret = qgraphicseffect_boundingrectfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicseffect_draw_callback) {
            QPainter* cbval1 = painter;
            qgraphicseffect_draw_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsEffect::draw called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicseffect_sourcechanged_callback) {
            int cbval1 = static_cast<int>(flags);
            qgraphicseffect_sourcechanged_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicseffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicseffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicseffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicseffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicseffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicseffect_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicseffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicseffect_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicseffect_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicseffect_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicseffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicseffect_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicseffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicseffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsEffect_SuperSourceChanged(QGraphicsEffect* self, int flags);
    friend void QGraphicsEffect_SuperTimerEvent(QGraphicsEffect* self, QTimerEvent* event);
    friend void QGraphicsEffect_SuperChildEvent(QGraphicsEffect* self, QChildEvent* event);
    friend void QGraphicsEffect_SuperCustomEvent(QGraphicsEffect* self, QEvent* event);
    friend void QGraphicsEffect_SuperConnectNotify(QGraphicsEffect* self, const QMetaMethod* signal);
    friend void QGraphicsEffect_SuperDisconnectNotify(QGraphicsEffect* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsColorizeEffect
class VirtualQGraphicsColorizeEffect final : public QGraphicsColorizeEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsColorizeEffect_MetaObject_Callback = QMetaObject* (*)(const QGraphicsColorizeEffect*);
    using QGraphicsColorizeEffect_Metacast_Callback = void* (*)(QGraphicsColorizeEffect*, const char*);
    using QGraphicsColorizeEffect_Metacall_Callback = int (*)(QGraphicsColorizeEffect*, int, int, void**);
    using QGraphicsColorizeEffect_Draw_Callback = void (*)(QGraphicsColorizeEffect*, QPainter*);
    using QGraphicsColorizeEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsColorizeEffect*, QRectF*);
    using QGraphicsColorizeEffect_SourceChanged_Callback = void (*)(QGraphicsColorizeEffect*, int);
    using QGraphicsColorizeEffect_Event_Callback = bool (*)(QGraphicsColorizeEffect*, QEvent*);
    using QGraphicsColorizeEffect_EventFilter_Callback = bool (*)(QGraphicsColorizeEffect*, QObject*, QEvent*);
    using QGraphicsColorizeEffect_TimerEvent_Callback = void (*)(QGraphicsColorizeEffect*, QTimerEvent*);
    using QGraphicsColorizeEffect_ChildEvent_Callback = void (*)(QGraphicsColorizeEffect*, QChildEvent*);
    using QGraphicsColorizeEffect_CustomEvent_Callback = void (*)(QGraphicsColorizeEffect*, QEvent*);
    using QGraphicsColorizeEffect_ConnectNotify_Callback = void (*)(QGraphicsColorizeEffect*, QMetaMethod*);
    using QGraphicsColorizeEffect_DisconnectNotify_Callback = void (*)(QGraphicsColorizeEffect*, QMetaMethod*);
    using QGraphicsColorizeEffect::drawSource;
    using QGraphicsColorizeEffect::isSignalConnected;
    using QGraphicsColorizeEffect::receivers;
    using QGraphicsColorizeEffect::sender;
    using QGraphicsColorizeEffect::senderSignalIndex;
    using QGraphicsColorizeEffect::sourceBoundingRect;
    using QGraphicsColorizeEffect::sourceIsPixmap;
    using QGraphicsColorizeEffect::sourcePixmap;
    using QGraphicsColorizeEffect::updateBoundingRect;

    // Instance callback storage
    QGraphicsColorizeEffect_MetaObject_Callback qgraphicscolorizeeffect_metaobject_callback = nullptr;
    QGraphicsColorizeEffect_Metacast_Callback qgraphicscolorizeeffect_metacast_callback = nullptr;
    QGraphicsColorizeEffect_Metacall_Callback qgraphicscolorizeeffect_metacall_callback = nullptr;
    QGraphicsColorizeEffect_Draw_Callback qgraphicscolorizeeffect_draw_callback = nullptr;
    QGraphicsColorizeEffect_BoundingRectFor_Callback qgraphicscolorizeeffect_boundingrectfor_callback = nullptr;
    QGraphicsColorizeEffect_SourceChanged_Callback qgraphicscolorizeeffect_sourcechanged_callback = nullptr;
    QGraphicsColorizeEffect_Event_Callback qgraphicscolorizeeffect_event_callback = nullptr;
    QGraphicsColorizeEffect_EventFilter_Callback qgraphicscolorizeeffect_eventfilter_callback = nullptr;
    QGraphicsColorizeEffect_TimerEvent_Callback qgraphicscolorizeeffect_timerevent_callback = nullptr;
    QGraphicsColorizeEffect_ChildEvent_Callback qgraphicscolorizeeffect_childevent_callback = nullptr;
    QGraphicsColorizeEffect_CustomEvent_Callback qgraphicscolorizeeffect_customevent_callback = nullptr;
    QGraphicsColorizeEffect_ConnectNotify_Callback qgraphicscolorizeeffect_connectnotify_callback = nullptr;
    QGraphicsColorizeEffect_DisconnectNotify_Callback qgraphicscolorizeeffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsColorizeEffect {
        using QGraphicsColorizeEffect::childEvent;
        using QGraphicsColorizeEffect::connectNotify;
        using QGraphicsColorizeEffect::customEvent;
        using QGraphicsColorizeEffect::disconnectNotify;
        using QGraphicsColorizeEffect::draw;
        using QGraphicsColorizeEffect::sourceChanged;
        using QGraphicsColorizeEffect::timerEvent;
    };

    VirtualQGraphicsColorizeEffect() : QGraphicsColorizeEffect() {};
    VirtualQGraphicsColorizeEffect(QObject* parent) : QGraphicsColorizeEffect(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicscolorizeeffect_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicscolorizeeffect_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsColorizeEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicscolorizeeffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicscolorizeeffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsColorizeEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicscolorizeeffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicscolorizeeffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsColorizeEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicscolorizeeffect_draw_callback) {
            QPainter* cbval1 = painter;
            qgraphicscolorizeeffect_draw_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::draw(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicscolorizeeffect_boundingrectfor_callback) {
            const QRectF& sourceRect_ret = sourceRect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&sourceRect_ret);
            QRectF* callback_ret = qgraphicscolorizeeffect_boundingrectfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicscolorizeeffect_sourcechanged_callback) {
            int cbval1 = static_cast<int>(flags);
            qgraphicscolorizeeffect_sourcechanged_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::sourceChanged(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicscolorizeeffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicscolorizeeffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsColorizeEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicscolorizeeffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicscolorizeeffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsColorizeEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicscolorizeeffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicscolorizeeffect_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicscolorizeeffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicscolorizeeffect_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicscolorizeeffect_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicscolorizeeffect_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicscolorizeeffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicscolorizeeffect_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicscolorizeeffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicscolorizeeffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsColorizeEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsColorizeEffect_SuperDraw(QGraphicsColorizeEffect* self, QPainter* painter);
    friend void QGraphicsColorizeEffect_SuperSourceChanged(QGraphicsColorizeEffect* self, int flags);
    friend void QGraphicsColorizeEffect_SuperTimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event);
    friend void QGraphicsColorizeEffect_SuperChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event);
    friend void QGraphicsColorizeEffect_SuperCustomEvent(QGraphicsColorizeEffect* self, QEvent* event);
    friend void QGraphicsColorizeEffect_SuperConnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal);
    friend void QGraphicsColorizeEffect_SuperDisconnectNotify(QGraphicsColorizeEffect* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsBlurEffect
class VirtualQGraphicsBlurEffect final : public QGraphicsBlurEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsBlurEffect_MetaObject_Callback = QMetaObject* (*)(const QGraphicsBlurEffect*);
    using QGraphicsBlurEffect_Metacast_Callback = void* (*)(QGraphicsBlurEffect*, const char*);
    using QGraphicsBlurEffect_Metacall_Callback = int (*)(QGraphicsBlurEffect*, int, int, void**);
    using QGraphicsBlurEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsBlurEffect*, QRectF*);
    using QGraphicsBlurEffect_Draw_Callback = void (*)(QGraphicsBlurEffect*, QPainter*);
    using QGraphicsBlurEffect_SourceChanged_Callback = void (*)(QGraphicsBlurEffect*, int);
    using QGraphicsBlurEffect_Event_Callback = bool (*)(QGraphicsBlurEffect*, QEvent*);
    using QGraphicsBlurEffect_EventFilter_Callback = bool (*)(QGraphicsBlurEffect*, QObject*, QEvent*);
    using QGraphicsBlurEffect_TimerEvent_Callback = void (*)(QGraphicsBlurEffect*, QTimerEvent*);
    using QGraphicsBlurEffect_ChildEvent_Callback = void (*)(QGraphicsBlurEffect*, QChildEvent*);
    using QGraphicsBlurEffect_CustomEvent_Callback = void (*)(QGraphicsBlurEffect*, QEvent*);
    using QGraphicsBlurEffect_ConnectNotify_Callback = void (*)(QGraphicsBlurEffect*, QMetaMethod*);
    using QGraphicsBlurEffect_DisconnectNotify_Callback = void (*)(QGraphicsBlurEffect*, QMetaMethod*);
    using QGraphicsBlurEffect::drawSource;
    using QGraphicsBlurEffect::isSignalConnected;
    using QGraphicsBlurEffect::receivers;
    using QGraphicsBlurEffect::sender;
    using QGraphicsBlurEffect::senderSignalIndex;
    using QGraphicsBlurEffect::sourceBoundingRect;
    using QGraphicsBlurEffect::sourceIsPixmap;
    using QGraphicsBlurEffect::sourcePixmap;
    using QGraphicsBlurEffect::updateBoundingRect;

    // Instance callback storage
    QGraphicsBlurEffect_MetaObject_Callback qgraphicsblureffect_metaobject_callback = nullptr;
    QGraphicsBlurEffect_Metacast_Callback qgraphicsblureffect_metacast_callback = nullptr;
    QGraphicsBlurEffect_Metacall_Callback qgraphicsblureffect_metacall_callback = nullptr;
    QGraphicsBlurEffect_BoundingRectFor_Callback qgraphicsblureffect_boundingrectfor_callback = nullptr;
    QGraphicsBlurEffect_Draw_Callback qgraphicsblureffect_draw_callback = nullptr;
    QGraphicsBlurEffect_SourceChanged_Callback qgraphicsblureffect_sourcechanged_callback = nullptr;
    QGraphicsBlurEffect_Event_Callback qgraphicsblureffect_event_callback = nullptr;
    QGraphicsBlurEffect_EventFilter_Callback qgraphicsblureffect_eventfilter_callback = nullptr;
    QGraphicsBlurEffect_TimerEvent_Callback qgraphicsblureffect_timerevent_callback = nullptr;
    QGraphicsBlurEffect_ChildEvent_Callback qgraphicsblureffect_childevent_callback = nullptr;
    QGraphicsBlurEffect_CustomEvent_Callback qgraphicsblureffect_customevent_callback = nullptr;
    QGraphicsBlurEffect_ConnectNotify_Callback qgraphicsblureffect_connectnotify_callback = nullptr;
    QGraphicsBlurEffect_DisconnectNotify_Callback qgraphicsblureffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsBlurEffect {
        using QGraphicsBlurEffect::childEvent;
        using QGraphicsBlurEffect::connectNotify;
        using QGraphicsBlurEffect::customEvent;
        using QGraphicsBlurEffect::disconnectNotify;
        using QGraphicsBlurEffect::draw;
        using QGraphicsBlurEffect::sourceChanged;
        using QGraphicsBlurEffect::timerEvent;
    };

    VirtualQGraphicsBlurEffect() : QGraphicsBlurEffect() {};
    VirtualQGraphicsBlurEffect(QObject* parent) : QGraphicsBlurEffect(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsblureffect_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsblureffect_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsBlurEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsblureffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsblureffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsBlurEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsblureffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsblureffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsBlurEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& rect) const override {
        if (qgraphicsblureffect_boundingrectfor_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            QRectF* callback_ret = qgraphicsblureffect_boundingrectfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsBlurEffect::boundingRectFor(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsblureffect_draw_callback) {
            QPainter* cbval1 = painter;
            qgraphicsblureffect_draw_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::draw(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsblureffect_sourcechanged_callback) {
            int cbval1 = static_cast<int>(flags);
            qgraphicsblureffect_sourcechanged_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::sourceChanged(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsblureffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsblureffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsBlurEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsblureffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsblureffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsBlurEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsblureffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsblureffect_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsblureffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsblureffect_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsblureffect_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsblureffect_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsblureffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsblureffect_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsblureffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsblureffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsBlurEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsBlurEffect_SuperDraw(QGraphicsBlurEffect* self, QPainter* painter);
    friend void QGraphicsBlurEffect_SuperSourceChanged(QGraphicsBlurEffect* self, int flags);
    friend void QGraphicsBlurEffect_SuperTimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event);
    friend void QGraphicsBlurEffect_SuperChildEvent(QGraphicsBlurEffect* self, QChildEvent* event);
    friend void QGraphicsBlurEffect_SuperCustomEvent(QGraphicsBlurEffect* self, QEvent* event);
    friend void QGraphicsBlurEffect_SuperConnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal);
    friend void QGraphicsBlurEffect_SuperDisconnectNotify(QGraphicsBlurEffect* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsDropShadowEffect
class VirtualQGraphicsDropShadowEffect final : public QGraphicsDropShadowEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsDropShadowEffect_MetaObject_Callback = QMetaObject* (*)(const QGraphicsDropShadowEffect*);
    using QGraphicsDropShadowEffect_Metacast_Callback = void* (*)(QGraphicsDropShadowEffect*, const char*);
    using QGraphicsDropShadowEffect_Metacall_Callback = int (*)(QGraphicsDropShadowEffect*, int, int, void**);
    using QGraphicsDropShadowEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsDropShadowEffect*, QRectF*);
    using QGraphicsDropShadowEffect_Draw_Callback = void (*)(QGraphicsDropShadowEffect*, QPainter*);
    using QGraphicsDropShadowEffect_SourceChanged_Callback = void (*)(QGraphicsDropShadowEffect*, int);
    using QGraphicsDropShadowEffect_Event_Callback = bool (*)(QGraphicsDropShadowEffect*, QEvent*);
    using QGraphicsDropShadowEffect_EventFilter_Callback = bool (*)(QGraphicsDropShadowEffect*, QObject*, QEvent*);
    using QGraphicsDropShadowEffect_TimerEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QTimerEvent*);
    using QGraphicsDropShadowEffect_ChildEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QChildEvent*);
    using QGraphicsDropShadowEffect_CustomEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QEvent*);
    using QGraphicsDropShadowEffect_ConnectNotify_Callback = void (*)(QGraphicsDropShadowEffect*, QMetaMethod*);
    using QGraphicsDropShadowEffect_DisconnectNotify_Callback = void (*)(QGraphicsDropShadowEffect*, QMetaMethod*);
    using QGraphicsDropShadowEffect::drawSource;
    using QGraphicsDropShadowEffect::isSignalConnected;
    using QGraphicsDropShadowEffect::receivers;
    using QGraphicsDropShadowEffect::sender;
    using QGraphicsDropShadowEffect::senderSignalIndex;
    using QGraphicsDropShadowEffect::sourceBoundingRect;
    using QGraphicsDropShadowEffect::sourceIsPixmap;
    using QGraphicsDropShadowEffect::sourcePixmap;
    using QGraphicsDropShadowEffect::updateBoundingRect;

    // Instance callback storage
    QGraphicsDropShadowEffect_MetaObject_Callback qgraphicsdropshadoweffect_metaobject_callback = nullptr;
    QGraphicsDropShadowEffect_Metacast_Callback qgraphicsdropshadoweffect_metacast_callback = nullptr;
    QGraphicsDropShadowEffect_Metacall_Callback qgraphicsdropshadoweffect_metacall_callback = nullptr;
    QGraphicsDropShadowEffect_BoundingRectFor_Callback qgraphicsdropshadoweffect_boundingrectfor_callback = nullptr;
    QGraphicsDropShadowEffect_Draw_Callback qgraphicsdropshadoweffect_draw_callback = nullptr;
    QGraphicsDropShadowEffect_SourceChanged_Callback qgraphicsdropshadoweffect_sourcechanged_callback = nullptr;
    QGraphicsDropShadowEffect_Event_Callback qgraphicsdropshadoweffect_event_callback = nullptr;
    QGraphicsDropShadowEffect_EventFilter_Callback qgraphicsdropshadoweffect_eventfilter_callback = nullptr;
    QGraphicsDropShadowEffect_TimerEvent_Callback qgraphicsdropshadoweffect_timerevent_callback = nullptr;
    QGraphicsDropShadowEffect_ChildEvent_Callback qgraphicsdropshadoweffect_childevent_callback = nullptr;
    QGraphicsDropShadowEffect_CustomEvent_Callback qgraphicsdropshadoweffect_customevent_callback = nullptr;
    QGraphicsDropShadowEffect_ConnectNotify_Callback qgraphicsdropshadoweffect_connectnotify_callback = nullptr;
    QGraphicsDropShadowEffect_DisconnectNotify_Callback qgraphicsdropshadoweffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsDropShadowEffect {
        using QGraphicsDropShadowEffect::childEvent;
        using QGraphicsDropShadowEffect::connectNotify;
        using QGraphicsDropShadowEffect::customEvent;
        using QGraphicsDropShadowEffect::disconnectNotify;
        using QGraphicsDropShadowEffect::draw;
        using QGraphicsDropShadowEffect::sourceChanged;
        using QGraphicsDropShadowEffect::timerEvent;
    };

    VirtualQGraphicsDropShadowEffect() : QGraphicsDropShadowEffect() {};
    VirtualQGraphicsDropShadowEffect(QObject* parent) : QGraphicsDropShadowEffect(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsdropshadoweffect_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsdropshadoweffect_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsDropShadowEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsdropshadoweffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsdropshadoweffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsDropShadowEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsdropshadoweffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsdropshadoweffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsDropShadowEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& rect) const override {
        if (qgraphicsdropshadoweffect_boundingrectfor_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            QRectF* callback_ret = qgraphicsdropshadoweffect_boundingrectfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsDropShadowEffect::boundingRectFor(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsdropshadoweffect_draw_callback) {
            QPainter* cbval1 = painter;
            qgraphicsdropshadoweffect_draw_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::draw(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsdropshadoweffect_sourcechanged_callback) {
            int cbval1 = static_cast<int>(flags);
            qgraphicsdropshadoweffect_sourcechanged_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::sourceChanged(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsdropshadoweffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsdropshadoweffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsDropShadowEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsdropshadoweffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsdropshadoweffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsDropShadowEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsdropshadoweffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsdropshadoweffect_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsdropshadoweffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsdropshadoweffect_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsdropshadoweffect_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsdropshadoweffect_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsdropshadoweffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsdropshadoweffect_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsdropshadoweffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsdropshadoweffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsDropShadowEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsDropShadowEffect_SuperDraw(QGraphicsDropShadowEffect* self, QPainter* painter);
    friend void QGraphicsDropShadowEffect_SuperSourceChanged(QGraphicsDropShadowEffect* self, int flags);
    friend void QGraphicsDropShadowEffect_SuperTimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event);
    friend void QGraphicsDropShadowEffect_SuperChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event);
    friend void QGraphicsDropShadowEffect_SuperCustomEvent(QGraphicsDropShadowEffect* self, QEvent* event);
    friend void QGraphicsDropShadowEffect_SuperConnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal);
    friend void QGraphicsDropShadowEffect_SuperDisconnectNotify(QGraphicsDropShadowEffect* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsOpacityEffect
class VirtualQGraphicsOpacityEffect final : public QGraphicsOpacityEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsOpacityEffect_MetaObject_Callback = QMetaObject* (*)(const QGraphicsOpacityEffect*);
    using QGraphicsOpacityEffect_Metacast_Callback = void* (*)(QGraphicsOpacityEffect*, const char*);
    using QGraphicsOpacityEffect_Metacall_Callback = int (*)(QGraphicsOpacityEffect*, int, int, void**);
    using QGraphicsOpacityEffect_Draw_Callback = void (*)(QGraphicsOpacityEffect*, QPainter*);
    using QGraphicsOpacityEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsOpacityEffect*, QRectF*);
    using QGraphicsOpacityEffect_SourceChanged_Callback = void (*)(QGraphicsOpacityEffect*, int);
    using QGraphicsOpacityEffect_Event_Callback = bool (*)(QGraphicsOpacityEffect*, QEvent*);
    using QGraphicsOpacityEffect_EventFilter_Callback = bool (*)(QGraphicsOpacityEffect*, QObject*, QEvent*);
    using QGraphicsOpacityEffect_TimerEvent_Callback = void (*)(QGraphicsOpacityEffect*, QTimerEvent*);
    using QGraphicsOpacityEffect_ChildEvent_Callback = void (*)(QGraphicsOpacityEffect*, QChildEvent*);
    using QGraphicsOpacityEffect_CustomEvent_Callback = void (*)(QGraphicsOpacityEffect*, QEvent*);
    using QGraphicsOpacityEffect_ConnectNotify_Callback = void (*)(QGraphicsOpacityEffect*, QMetaMethod*);
    using QGraphicsOpacityEffect_DisconnectNotify_Callback = void (*)(QGraphicsOpacityEffect*, QMetaMethod*);
    using QGraphicsOpacityEffect::drawSource;
    using QGraphicsOpacityEffect::isSignalConnected;
    using QGraphicsOpacityEffect::receivers;
    using QGraphicsOpacityEffect::sender;
    using QGraphicsOpacityEffect::senderSignalIndex;
    using QGraphicsOpacityEffect::sourceBoundingRect;
    using QGraphicsOpacityEffect::sourceIsPixmap;
    using QGraphicsOpacityEffect::sourcePixmap;
    using QGraphicsOpacityEffect::updateBoundingRect;

    // Instance callback storage
    QGraphicsOpacityEffect_MetaObject_Callback qgraphicsopacityeffect_metaobject_callback = nullptr;
    QGraphicsOpacityEffect_Metacast_Callback qgraphicsopacityeffect_metacast_callback = nullptr;
    QGraphicsOpacityEffect_Metacall_Callback qgraphicsopacityeffect_metacall_callback = nullptr;
    QGraphicsOpacityEffect_Draw_Callback qgraphicsopacityeffect_draw_callback = nullptr;
    QGraphicsOpacityEffect_BoundingRectFor_Callback qgraphicsopacityeffect_boundingrectfor_callback = nullptr;
    QGraphicsOpacityEffect_SourceChanged_Callback qgraphicsopacityeffect_sourcechanged_callback = nullptr;
    QGraphicsOpacityEffect_Event_Callback qgraphicsopacityeffect_event_callback = nullptr;
    QGraphicsOpacityEffect_EventFilter_Callback qgraphicsopacityeffect_eventfilter_callback = nullptr;
    QGraphicsOpacityEffect_TimerEvent_Callback qgraphicsopacityeffect_timerevent_callback = nullptr;
    QGraphicsOpacityEffect_ChildEvent_Callback qgraphicsopacityeffect_childevent_callback = nullptr;
    QGraphicsOpacityEffect_CustomEvent_Callback qgraphicsopacityeffect_customevent_callback = nullptr;
    QGraphicsOpacityEffect_ConnectNotify_Callback qgraphicsopacityeffect_connectnotify_callback = nullptr;
    QGraphicsOpacityEffect_DisconnectNotify_Callback qgraphicsopacityeffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsOpacityEffect {
        using QGraphicsOpacityEffect::childEvent;
        using QGraphicsOpacityEffect::connectNotify;
        using QGraphicsOpacityEffect::customEvent;
        using QGraphicsOpacityEffect::disconnectNotify;
        using QGraphicsOpacityEffect::draw;
        using QGraphicsOpacityEffect::sourceChanged;
        using QGraphicsOpacityEffect::timerEvent;
    };

    VirtualQGraphicsOpacityEffect() : QGraphicsOpacityEffect() {};
    VirtualQGraphicsOpacityEffect(QObject* parent) : QGraphicsOpacityEffect(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsopacityeffect_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsopacityeffect_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsOpacityEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsopacityeffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsopacityeffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsOpacityEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsopacityeffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsopacityeffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsOpacityEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsopacityeffect_draw_callback) {
            QPainter* cbval1 = painter;
            qgraphicsopacityeffect_draw_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::draw(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicsopacityeffect_boundingrectfor_callback) {
            const QRectF& sourceRect_ret = sourceRect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&sourceRect_ret);
            QRectF* callback_ret = qgraphicsopacityeffect_boundingrectfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsopacityeffect_sourcechanged_callback) {
            int cbval1 = static_cast<int>(flags);
            qgraphicsopacityeffect_sourcechanged_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::sourceChanged(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsopacityeffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsopacityeffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsOpacityEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsopacityeffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsopacityeffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsOpacityEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsopacityeffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsopacityeffect_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsopacityeffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsopacityeffect_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsopacityeffect_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsopacityeffect_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsopacityeffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsopacityeffect_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsopacityeffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsopacityeffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsOpacityEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsOpacityEffect_SuperDraw(QGraphicsOpacityEffect* self, QPainter* painter);
    friend void QGraphicsOpacityEffect_SuperSourceChanged(QGraphicsOpacityEffect* self, int flags);
    friend void QGraphicsOpacityEffect_SuperTimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event);
    friend void QGraphicsOpacityEffect_SuperChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event);
    friend void QGraphicsOpacityEffect_SuperCustomEvent(QGraphicsOpacityEffect* self, QEvent* event);
    friend void QGraphicsOpacityEffect_SuperConnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal);
    friend void QGraphicsOpacityEffect_SuperDisconnectNotify(QGraphicsOpacityEffect* self, const QMetaMethod* signal);
};

#endif
