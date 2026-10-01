#pragma once
#ifndef POSIX_RESTRICTED_QTERMWIDGET_LIBFILTER_HXX
#define POSIX_RESTRICTED_QTERMWIDGET_LIBFILTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Konsole::Filter
class VirtualKonsoleFilter : public Konsole::Filter {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__Filter_Process_Callback = void (*)(Konsole__Filter*);
    using Konsole__Filter_MetaObject_Callback = QMetaObject* (*)(const Konsole__Filter*);
    using Konsole__Filter_Metacast_Callback = void* (*)(Konsole__Filter*, const char*);
    using Konsole__Filter_Metacall_Callback = int (*)(Konsole__Filter*, int, int, void**);
    using Konsole__Filter_Event_Callback = bool (*)(Konsole__Filter*, QEvent*);
    using Konsole__Filter_EventFilter_Callback = bool (*)(Konsole__Filter*, QObject*, QEvent*);
    using Konsole__Filter_TimerEvent_Callback = void (*)(Konsole__Filter*, QTimerEvent*);
    using Konsole__Filter_ChildEvent_Callback = void (*)(Konsole__Filter*, QChildEvent*);
    using Konsole__Filter_CustomEvent_Callback = void (*)(Konsole__Filter*, QEvent*);
    using Konsole__Filter_ConnectNotify_Callback = void (*)(Konsole__Filter*, QMetaMethod*);
    using Konsole__Filter_DisconnectNotify_Callback = void (*)(Konsole__Filter*, QMetaMethod*);
    using Konsole::Filter::addHotSpot;
    using Konsole::Filter::buffer;
    using Konsole::Filter::getLineColumn;
    using Konsole::Filter::isSignalConnected;
    using Konsole::Filter::receivers;
    using Konsole::Filter::sender;
    using Konsole::Filter::senderSignalIndex;

    // Instance callback storage
    Konsole__Filter_Process_Callback konsole__filter_process_callback = nullptr;
    Konsole__Filter_MetaObject_Callback konsole__filter_metaobject_callback = nullptr;
    Konsole__Filter_Metacast_Callback konsole__filter_metacast_callback = nullptr;
    Konsole__Filter_Metacall_Callback konsole__filter_metacall_callback = nullptr;
    Konsole__Filter_Event_Callback konsole__filter_event_callback = nullptr;
    Konsole__Filter_EventFilter_Callback konsole__filter_eventfilter_callback = nullptr;
    Konsole__Filter_TimerEvent_Callback konsole__filter_timerevent_callback = nullptr;
    Konsole__Filter_ChildEvent_Callback konsole__filter_childevent_callback = nullptr;
    Konsole__Filter_CustomEvent_Callback konsole__filter_customevent_callback = nullptr;
    Konsole__Filter_ConnectNotify_Callback konsole__filter_connectnotify_callback = nullptr;
    Konsole__Filter_DisconnectNotify_Callback konsole__filter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Konsole::Filter {
        using Konsole::Filter::childEvent;
        using Konsole::Filter::connectNotify;
        using Konsole::Filter::customEvent;
        using Konsole::Filter::disconnectNotify;
        using Konsole::Filter::timerEvent;
    };

    VirtualKonsoleFilter() : Konsole::Filter() {};

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__filter_process_callback) {
            konsole__filter_process_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Filter::process called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__filter_metaobject_callback) {
            QMetaObject* callback_ret = konsole__filter_metaobject_callback(this);
            return callback_ret;
        }
        return Konsole__Filter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__filter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = konsole__filter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__Filter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = konsole__filter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__Filter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = konsole__filter_event_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__Filter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = konsole__filter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__Filter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            konsole__filter_timerevent_callback(this, cbval1);
            return;
        }
        Konsole__Filter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filter_childevent_callback) {
            QChildEvent* cbval1 = event;
            konsole__filter_childevent_callback(this, cbval1);
            return;
        }
        Konsole__Filter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filter_customevent_callback) {
            QEvent* cbval1 = event;
            konsole__filter_customevent_callback(this, cbval1);
            return;
        }
        Konsole__Filter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__filter_connectnotify_callback(this, cbval1);
            return;
        }
        Konsole__Filter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__filter_disconnectnotify_callback(this, cbval1);
            return;
        }
        Konsole__Filter::disconnectNotify(signal);
    }

    // Friend functions
    friend void Konsole__Filter_SuperTimerEvent(Konsole::Filter* self, QTimerEvent* event);
    friend void Konsole__Filter_SuperChildEvent(Konsole::Filter* self, QChildEvent* event);
    friend void Konsole__Filter_SuperCustomEvent(Konsole::Filter* self, QEvent* event);
    friend void Konsole__Filter_SuperConnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_SuperDisconnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::RegExpFilter
class VirtualKonsoleRegExpFilter final : public Konsole::RegExpFilter {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__RegExpFilter_Process_Callback = void (*)(Konsole__RegExpFilter*);
    using Konsole__RegExpFilter_NewHotSpot_Callback = Konsole__RegExpFilter__HotSpot* (*)(Konsole__RegExpFilter*, int, int, int, int);
    using Konsole__RegExpFilter_MetaObject_Callback = QMetaObject* (*)(const Konsole__RegExpFilter*);
    using Konsole__RegExpFilter_Metacast_Callback = void* (*)(Konsole__RegExpFilter*, const char*);
    using Konsole__RegExpFilter_Metacall_Callback = int (*)(Konsole__RegExpFilter*, int, int, void**);
    using Konsole__RegExpFilter_Event_Callback = bool (*)(Konsole__RegExpFilter*, QEvent*);
    using Konsole__RegExpFilter_EventFilter_Callback = bool (*)(Konsole__RegExpFilter*, QObject*, QEvent*);
    using Konsole__RegExpFilter_TimerEvent_Callback = void (*)(Konsole__RegExpFilter*, QTimerEvent*);
    using Konsole__RegExpFilter_ChildEvent_Callback = void (*)(Konsole__RegExpFilter*, QChildEvent*);
    using Konsole__RegExpFilter_CustomEvent_Callback = void (*)(Konsole__RegExpFilter*, QEvent*);
    using Konsole__RegExpFilter_ConnectNotify_Callback = void (*)(Konsole__RegExpFilter*, QMetaMethod*);
    using Konsole__RegExpFilter_DisconnectNotify_Callback = void (*)(Konsole__RegExpFilter*, QMetaMethod*);
    using Konsole::RegExpFilter::addHotSpot;
    using Konsole::RegExpFilter::buffer;
    using Konsole::RegExpFilter::getLineColumn;
    using Konsole::RegExpFilter::isSignalConnected;
    using Konsole::RegExpFilter::receivers;
    using Konsole::RegExpFilter::sender;
    using Konsole::RegExpFilter::senderSignalIndex;

    // Instance callback storage
    Konsole__RegExpFilter_Process_Callback konsole__regexpfilter_process_callback = nullptr;
    Konsole__RegExpFilter_NewHotSpot_Callback konsole__regexpfilter_newhotspot_callback = nullptr;
    Konsole__RegExpFilter_MetaObject_Callback konsole__regexpfilter_metaobject_callback = nullptr;
    Konsole__RegExpFilter_Metacast_Callback konsole__regexpfilter_metacast_callback = nullptr;
    Konsole__RegExpFilter_Metacall_Callback konsole__regexpfilter_metacall_callback = nullptr;
    Konsole__RegExpFilter_Event_Callback konsole__regexpfilter_event_callback = nullptr;
    Konsole__RegExpFilter_EventFilter_Callback konsole__regexpfilter_eventfilter_callback = nullptr;
    Konsole__RegExpFilter_TimerEvent_Callback konsole__regexpfilter_timerevent_callback = nullptr;
    Konsole__RegExpFilter_ChildEvent_Callback konsole__regexpfilter_childevent_callback = nullptr;
    Konsole__RegExpFilter_CustomEvent_Callback konsole__regexpfilter_customevent_callback = nullptr;
    Konsole__RegExpFilter_ConnectNotify_Callback konsole__regexpfilter_connectnotify_callback = nullptr;
    Konsole__RegExpFilter_DisconnectNotify_Callback konsole__regexpfilter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Konsole::RegExpFilter {
        using Konsole::RegExpFilter::childEvent;
        using Konsole::RegExpFilter::connectNotify;
        using Konsole::RegExpFilter::customEvent;
        using Konsole::RegExpFilter::disconnectNotify;
        using Konsole::RegExpFilter::newHotSpot;
        using Konsole::RegExpFilter::timerEvent;
    };

    VirtualKonsoleRegExpFilter() : Konsole::RegExpFilter() {};

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__regexpfilter_process_callback) {
            konsole__regexpfilter_process_callback(this);
            return;
        }
        Konsole__RegExpFilter::process();
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int startLine, int startColumn, int endLine, int endColumn) override {
        if (konsole__regexpfilter_newhotspot_callback) {
            int cbval1 = startLine;
            int cbval2 = startColumn;
            int cbval3 = endLine;
            int cbval4 = endColumn;
            Konsole__RegExpFilter__HotSpot* callback_ret = konsole__regexpfilter_newhotspot_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return Konsole__RegExpFilter::newHotSpot(startLine, startColumn, endLine, endColumn);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__regexpfilter_metaobject_callback) {
            QMetaObject* callback_ret = konsole__regexpfilter_metaobject_callback(this);
            return callback_ret;
        }
        return Konsole__RegExpFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__regexpfilter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = konsole__regexpfilter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__RegExpFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__regexpfilter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = konsole__regexpfilter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__RegExpFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__regexpfilter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = konsole__regexpfilter_event_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__RegExpFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__regexpfilter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = konsole__regexpfilter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__RegExpFilter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__regexpfilter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            konsole__regexpfilter_timerevent_callback(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__regexpfilter_childevent_callback) {
            QChildEvent* cbval1 = event;
            konsole__regexpfilter_childevent_callback(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__regexpfilter_customevent_callback) {
            QEvent* cbval1 = event;
            konsole__regexpfilter_customevent_callback(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__regexpfilter_connectnotify_callback(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__regexpfilter_disconnectnotify_callback(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::disconnectNotify(signal);
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_SuperNewHotSpot(Konsole::RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
    friend void Konsole__RegExpFilter_SuperTimerEvent(Konsole::RegExpFilter* self, QTimerEvent* event);
    friend void Konsole__RegExpFilter_SuperChildEvent(Konsole::RegExpFilter* self, QChildEvent* event);
    friend void Konsole__RegExpFilter_SuperCustomEvent(Konsole::RegExpFilter* self, QEvent* event);
    friend void Konsole__RegExpFilter_SuperConnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_SuperDisconnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::UrlFilter
class VirtualKonsoleUrlFilter final : public Konsole::UrlFilter {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__UrlFilter_MetaObject_Callback = QMetaObject* (*)(const Konsole__UrlFilter*);
    using Konsole__UrlFilter_Metacast_Callback = void* (*)(Konsole__UrlFilter*, const char*);
    using Konsole__UrlFilter_Metacall_Callback = int (*)(Konsole__UrlFilter*, int, int, void**);
    using Konsole__UrlFilter_NewHotSpot_Callback = Konsole__RegExpFilter__HotSpot* (*)(Konsole__UrlFilter*, int, int, int, int);
    using Konsole__UrlFilter_Process_Callback = void (*)(Konsole__UrlFilter*);
    using Konsole__UrlFilter_Event_Callback = bool (*)(Konsole__UrlFilter*, QEvent*);
    using Konsole__UrlFilter_EventFilter_Callback = bool (*)(Konsole__UrlFilter*, QObject*, QEvent*);
    using Konsole__UrlFilter_TimerEvent_Callback = void (*)(Konsole__UrlFilter*, QTimerEvent*);
    using Konsole__UrlFilter_ChildEvent_Callback = void (*)(Konsole__UrlFilter*, QChildEvent*);
    using Konsole__UrlFilter_CustomEvent_Callback = void (*)(Konsole__UrlFilter*, QEvent*);
    using Konsole__UrlFilter_ConnectNotify_Callback = void (*)(Konsole__UrlFilter*, QMetaMethod*);
    using Konsole__UrlFilter_DisconnectNotify_Callback = void (*)(Konsole__UrlFilter*, QMetaMethod*);
    using Konsole::UrlFilter::addHotSpot;
    using Konsole::UrlFilter::buffer;
    using Konsole::UrlFilter::getLineColumn;
    using Konsole::UrlFilter::isSignalConnected;
    using Konsole::UrlFilter::receivers;
    using Konsole::UrlFilter::sender;
    using Konsole::UrlFilter::senderSignalIndex;

    // Instance callback storage
    Konsole__UrlFilter_MetaObject_Callback konsole__urlfilter_metaobject_callback = nullptr;
    Konsole__UrlFilter_Metacast_Callback konsole__urlfilter_metacast_callback = nullptr;
    Konsole__UrlFilter_Metacall_Callback konsole__urlfilter_metacall_callback = nullptr;
    Konsole__UrlFilter_NewHotSpot_Callback konsole__urlfilter_newhotspot_callback = nullptr;
    Konsole__UrlFilter_Process_Callback konsole__urlfilter_process_callback = nullptr;
    Konsole__UrlFilter_Event_Callback konsole__urlfilter_event_callback = nullptr;
    Konsole__UrlFilter_EventFilter_Callback konsole__urlfilter_eventfilter_callback = nullptr;
    Konsole__UrlFilter_TimerEvent_Callback konsole__urlfilter_timerevent_callback = nullptr;
    Konsole__UrlFilter_ChildEvent_Callback konsole__urlfilter_childevent_callback = nullptr;
    Konsole__UrlFilter_CustomEvent_Callback konsole__urlfilter_customevent_callback = nullptr;
    Konsole__UrlFilter_ConnectNotify_Callback konsole__urlfilter_connectnotify_callback = nullptr;
    Konsole__UrlFilter_DisconnectNotify_Callback konsole__urlfilter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Konsole::UrlFilter {
        using Konsole::UrlFilter::childEvent;
        using Konsole::UrlFilter::connectNotify;
        using Konsole::UrlFilter::customEvent;
        using Konsole::UrlFilter::disconnectNotify;
        using Konsole::UrlFilter::newHotSpot;
        using Konsole::UrlFilter::timerEvent;
    };

    VirtualKonsoleUrlFilter() : Konsole::UrlFilter() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__urlfilter_metaobject_callback) {
            QMetaObject* callback_ret = konsole__urlfilter_metaobject_callback(this);
            return callback_ret;
        }
        return Konsole__UrlFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__urlfilter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = konsole__urlfilter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__UrlFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__urlfilter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = konsole__urlfilter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__UrlFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int param1, int param2, int param3, int param4) override {
        if (konsole__urlfilter_newhotspot_callback) {
            int cbval1 = param1;
            int cbval2 = param2;
            int cbval3 = param3;
            int cbval4 = param4;
            Konsole__RegExpFilter__HotSpot* callback_ret = konsole__urlfilter_newhotspot_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return Konsole__UrlFilter::newHotSpot(param1, param2, param3, param4);
    }

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__urlfilter_process_callback) {
            konsole__urlfilter_process_callback(this);
            return;
        }
        Konsole__UrlFilter::process();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__urlfilter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = konsole__urlfilter_event_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__UrlFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__urlfilter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = konsole__urlfilter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__UrlFilter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__urlfilter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            konsole__urlfilter_timerevent_callback(this, cbval1);
            return;
        }
        Konsole__UrlFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__urlfilter_childevent_callback) {
            QChildEvent* cbval1 = event;
            konsole__urlfilter_childevent_callback(this, cbval1);
            return;
        }
        Konsole__UrlFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__urlfilter_customevent_callback) {
            QEvent* cbval1 = event;
            konsole__urlfilter_customevent_callback(this, cbval1);
            return;
        }
        Konsole__UrlFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__urlfilter_connectnotify_callback(this, cbval1);
            return;
        }
        Konsole__UrlFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__urlfilter_disconnectnotify_callback(this, cbval1);
            return;
        }
        Konsole__UrlFilter::disconnectNotify(signal);
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_SuperNewHotSpot(Konsole::UrlFilter* self, int param1, int param2, int param3, int param4);
    friend void Konsole__UrlFilter_SuperTimerEvent(Konsole::UrlFilter* self, QTimerEvent* event);
    friend void Konsole__UrlFilter_SuperChildEvent(Konsole::UrlFilter* self, QChildEvent* event);
    friend void Konsole__UrlFilter_SuperCustomEvent(Konsole::UrlFilter* self, QEvent* event);
    friend void Konsole__UrlFilter_SuperConnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_SuperDisconnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::FilterObject
class VirtualKonsoleFilterObject final : public Konsole::FilterObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__FilterObject_MetaObject_Callback = QMetaObject* (*)(const Konsole__FilterObject*);
    using Konsole__FilterObject_Metacast_Callback = void* (*)(Konsole__FilterObject*, const char*);
    using Konsole__FilterObject_Metacall_Callback = int (*)(Konsole__FilterObject*, int, int, void**);
    using Konsole__FilterObject_Event_Callback = bool (*)(Konsole__FilterObject*, QEvent*);
    using Konsole__FilterObject_EventFilter_Callback = bool (*)(Konsole__FilterObject*, QObject*, QEvent*);
    using Konsole__FilterObject_TimerEvent_Callback = void (*)(Konsole__FilterObject*, QTimerEvent*);
    using Konsole__FilterObject_ChildEvent_Callback = void (*)(Konsole__FilterObject*, QChildEvent*);
    using Konsole__FilterObject_CustomEvent_Callback = void (*)(Konsole__FilterObject*, QEvent*);
    using Konsole__FilterObject_ConnectNotify_Callback = void (*)(Konsole__FilterObject*, QMetaMethod*);
    using Konsole__FilterObject_DisconnectNotify_Callback = void (*)(Konsole__FilterObject*, QMetaMethod*);
    using Konsole::FilterObject::isSignalConnected;
    using Konsole::FilterObject::receivers;
    using Konsole::FilterObject::sender;
    using Konsole::FilterObject::senderSignalIndex;

    // Instance callback storage
    Konsole__FilterObject_MetaObject_Callback konsole__filterobject_metaobject_callback = nullptr;
    Konsole__FilterObject_Metacast_Callback konsole__filterobject_metacast_callback = nullptr;
    Konsole__FilterObject_Metacall_Callback konsole__filterobject_metacall_callback = nullptr;
    Konsole__FilterObject_Event_Callback konsole__filterobject_event_callback = nullptr;
    Konsole__FilterObject_EventFilter_Callback konsole__filterobject_eventfilter_callback = nullptr;
    Konsole__FilterObject_TimerEvent_Callback konsole__filterobject_timerevent_callback = nullptr;
    Konsole__FilterObject_ChildEvent_Callback konsole__filterobject_childevent_callback = nullptr;
    Konsole__FilterObject_CustomEvent_Callback konsole__filterobject_customevent_callback = nullptr;
    Konsole__FilterObject_ConnectNotify_Callback konsole__filterobject_connectnotify_callback = nullptr;
    Konsole__FilterObject_DisconnectNotify_Callback konsole__filterobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Konsole::FilterObject {
        using Konsole::FilterObject::childEvent;
        using Konsole::FilterObject::connectNotify;
        using Konsole::FilterObject::customEvent;
        using Konsole::FilterObject::disconnectNotify;
        using Konsole::FilterObject::timerEvent;
    };

    VirtualKonsoleFilterObject(Konsole::Filter::HotSpot* filter) : Konsole::FilterObject(filter) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__filterobject_metaobject_callback) {
            QMetaObject* callback_ret = konsole__filterobject_metaobject_callback(this);
            return callback_ret;
        }
        return Konsole__FilterObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__filterobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = konsole__filterobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__FilterObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filterobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = konsole__filterobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__FilterObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filterobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = konsole__filterobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__FilterObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filterobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = konsole__filterobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__FilterObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filterobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            konsole__filterobject_timerevent_callback(this, cbval1);
            return;
        }
        Konsole__FilterObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filterobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            konsole__filterobject_childevent_callback(this, cbval1);
            return;
        }
        Konsole__FilterObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filterobject_customevent_callback) {
            QEvent* cbval1 = event;
            konsole__filterobject_customevent_callback(this, cbval1);
            return;
        }
        Konsole__FilterObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__filterobject_connectnotify_callback(this, cbval1);
            return;
        }
        Konsole__FilterObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__filterobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        Konsole__FilterObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void Konsole__FilterObject_SuperTimerEvent(Konsole::FilterObject* self, QTimerEvent* event);
    friend void Konsole__FilterObject_SuperChildEvent(Konsole::FilterObject* self, QChildEvent* event);
    friend void Konsole__FilterObject_SuperCustomEvent(Konsole::FilterObject* self, QEvent* event);
    friend void Konsole__FilterObject_SuperConnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_SuperDisconnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::Filter::HotSpot
class VirtualKonsoleFilterHotSpot : public Konsole::Filter::HotSpot {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__Filter__HotSpot_Activate_Callback = void (*)(Konsole__Filter__HotSpot*, const char*);
    using Konsole__Filter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)(Konsole__Filter__HotSpot*);
    using Konsole::Filter::HotSpot::setType;

    // Instance callback storage
    Konsole__Filter__HotSpot_Activate_Callback konsole__filter__hotspot_activate_callback = nullptr;
    Konsole__Filter__HotSpot_Actions_Callback konsole__filter__hotspot_actions_callback = nullptr;

    VirtualKonsoleFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::Filter::HotSpot(startLine, startColumn, endLine, endColumn) {};
    VirtualKonsoleFilterHotSpot(const Konsole::Filter::HotSpot& param1) : Konsole::Filter::HotSpot(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__filter__hotspot_activate_callback) {
            const auto action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;
            konsole__filter__hotspot_activate_callback(this, cbval1);
            libqt_free(action_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Filter::HotSpot::activate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__filter__hotspot_actions_callback) {
            libqt_list /* of QAction* */ callback_ret = konsole__filter__hotspot_actions_callback(this);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__Filter__HotSpot::actions();
    }
};

// This class is a subclass of Konsole::RegExpFilter::HotSpot
class VirtualKonsoleRegExpFilterHotSpot final : public Konsole::RegExpFilter::HotSpot {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__RegExpFilter__HotSpot_Activate_Callback = void (*)(Konsole__RegExpFilter__HotSpot*, const char*);
    using Konsole__RegExpFilter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)(Konsole__RegExpFilter__HotSpot*);
    using Konsole::RegExpFilter::HotSpot::setType;

    // Instance callback storage
    Konsole__RegExpFilter__HotSpot_Activate_Callback konsole__regexpfilter__hotspot_activate_callback = nullptr;
    Konsole__RegExpFilter__HotSpot_Actions_Callback konsole__regexpfilter__hotspot_actions_callback = nullptr;

    VirtualKonsoleRegExpFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::RegExpFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};
    VirtualKonsoleRegExpFilterHotSpot(const Konsole::RegExpFilter::HotSpot& param1) : Konsole::RegExpFilter::HotSpot(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__regexpfilter__hotspot_activate_callback) {
            const auto action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;
            konsole__regexpfilter__hotspot_activate_callback(this, cbval1);
            libqt_free(action_str);
            return;
        }
        Konsole__RegExpFilter__HotSpot::activate(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__regexpfilter__hotspot_actions_callback) {
            libqt_list /* of QAction* */ callback_ret = konsole__regexpfilter__hotspot_actions_callback(this);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__RegExpFilter__HotSpot::actions();
    }
};

// This class is a subclass of Konsole::UrlFilter::HotSpot
class VirtualKonsoleUrlFilterHotSpot final : public Konsole::UrlFilter::HotSpot {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole__UrlFilter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)(Konsole__UrlFilter__HotSpot*);
    using Konsole__UrlFilter__HotSpot_Activate_Callback = void (*)(Konsole__UrlFilter__HotSpot*, const char*);
    using Konsole::UrlFilter::HotSpot::setType;

    // Instance callback storage
    Konsole__UrlFilter__HotSpot_Actions_Callback konsole__urlfilter__hotspot_actions_callback = nullptr;
    Konsole__UrlFilter__HotSpot_Activate_Callback konsole__urlfilter__hotspot_activate_callback = nullptr;

    VirtualKonsoleUrlFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::UrlFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__urlfilter__hotspot_actions_callback) {
            libqt_list /* of QAction* */ callback_ret = konsole__urlfilter__hotspot_actions_callback(this);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__UrlFilter__HotSpot::actions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__urlfilter__hotspot_activate_callback) {
            const auto action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;
            konsole__urlfilter__hotspot_activate_callback(this, cbval1);
            libqt_free(action_str);
            return;
        }
        Konsole__UrlFilter__HotSpot::activate(action);
    }
};

#endif
