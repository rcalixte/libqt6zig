#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapSequenceOverlayPainter
class VirtualKPixmapSequenceOverlayPainter final : public KPixmapSequenceOverlayPainter {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPixmapSequenceOverlayPainter_MetaObject_Callback = QMetaObject* (*)(const KPixmapSequenceOverlayPainter*);
    using KPixmapSequenceOverlayPainter_Metacast_Callback = void* (*)(KPixmapSequenceOverlayPainter*, const char*);
    using KPixmapSequenceOverlayPainter_Metacall_Callback = int (*)(KPixmapSequenceOverlayPainter*, int, int, void**);
    using KPixmapSequenceOverlayPainter_EventFilter_Callback = bool (*)(KPixmapSequenceOverlayPainter*, QObject*, QEvent*);
    using KPixmapSequenceOverlayPainter_Event_Callback = bool (*)(KPixmapSequenceOverlayPainter*, QEvent*);
    using KPixmapSequenceOverlayPainter_TimerEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QTimerEvent*);
    using KPixmapSequenceOverlayPainter_ChildEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QChildEvent*);
    using KPixmapSequenceOverlayPainter_CustomEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QEvent*);
    using KPixmapSequenceOverlayPainter_ConnectNotify_Callback = void (*)(KPixmapSequenceOverlayPainter*, QMetaMethod*);
    using KPixmapSequenceOverlayPainter_DisconnectNotify_Callback = void (*)(KPixmapSequenceOverlayPainter*, QMetaMethod*);
    using KPixmapSequenceOverlayPainter::isSignalConnected;
    using KPixmapSequenceOverlayPainter::receivers;
    using KPixmapSequenceOverlayPainter::sender;
    using KPixmapSequenceOverlayPainter::senderSignalIndex;

    // Instance callback storage
    KPixmapSequenceOverlayPainter_MetaObject_Callback kpixmapsequenceoverlaypainter_metaobject_callback = nullptr;
    KPixmapSequenceOverlayPainter_Metacast_Callback kpixmapsequenceoverlaypainter_metacast_callback = nullptr;
    KPixmapSequenceOverlayPainter_Metacall_Callback kpixmapsequenceoverlaypainter_metacall_callback = nullptr;
    KPixmapSequenceOverlayPainter_EventFilter_Callback kpixmapsequenceoverlaypainter_eventfilter_callback = nullptr;
    KPixmapSequenceOverlayPainter_Event_Callback kpixmapsequenceoverlaypainter_event_callback = nullptr;
    KPixmapSequenceOverlayPainter_TimerEvent_Callback kpixmapsequenceoverlaypainter_timerevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_ChildEvent_Callback kpixmapsequenceoverlaypainter_childevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_CustomEvent_Callback kpixmapsequenceoverlaypainter_customevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_ConnectNotify_Callback kpixmapsequenceoverlaypainter_connectnotify_callback = nullptr;
    KPixmapSequenceOverlayPainter_DisconnectNotify_Callback kpixmapsequenceoverlaypainter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPixmapSequenceOverlayPainter {
        using KPixmapSequenceOverlayPainter::childEvent;
        using KPixmapSequenceOverlayPainter::connectNotify;
        using KPixmapSequenceOverlayPainter::customEvent;
        using KPixmapSequenceOverlayPainter::disconnectNotify;
        using KPixmapSequenceOverlayPainter::eventFilter;
        using KPixmapSequenceOverlayPainter::timerEvent;
    };

    VirtualKPixmapSequenceOverlayPainter() : KPixmapSequenceOverlayPainter() {};
    VirtualKPixmapSequenceOverlayPainter(const KPixmapSequence& seq) : KPixmapSequenceOverlayPainter(seq) {};
    VirtualKPixmapSequenceOverlayPainter(QObject* parent) : KPixmapSequenceOverlayPainter(parent) {};
    VirtualKPixmapSequenceOverlayPainter(const KPixmapSequence& seq, QObject* parent) : KPixmapSequenceOverlayPainter(seq, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapsequenceoverlaypainter_metaobject_callback) {
            QMetaObject* callback_ret = kpixmapsequenceoverlaypainter_metaobject_callback(this);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapsequenceoverlaypainter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpixmapsequenceoverlaypainter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapsequenceoverlaypainter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpixmapsequenceoverlaypainter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceOverlayPainter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;
            bool callback_ret = kpixmapsequenceoverlaypainter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpixmapsequenceoverlaypainter_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapsequenceoverlaypainter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpixmapsequenceoverlaypainter_timerevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapsequenceoverlaypainter_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpixmapsequenceoverlaypainter_childevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_customevent_callback) {
            QEvent* cbval1 = event;
            kpixmapsequenceoverlaypainter_customevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapsequenceoverlaypainter_connectnotify_callback(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapsequenceoverlaypainter_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPixmapSequenceOverlayPainter_SuperEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_SuperDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
};

#endif
