#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCustom3DLabel
class VirtualQCustom3DLabel final : public QCustom3DLabel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCustom3DLabel_MetaObject_Callback = QMetaObject* (*)(const QCustom3DLabel*);
    using QCustom3DLabel_Metacast_Callback = void* (*)(QCustom3DLabel*, const char*);
    using QCustom3DLabel_Metacall_Callback = int (*)(QCustom3DLabel*, int, int, void**);
    using QCustom3DLabel_Event_Callback = bool (*)(QCustom3DLabel*, QEvent*);
    using QCustom3DLabel_EventFilter_Callback = bool (*)(QCustom3DLabel*, QObject*, QEvent*);
    using QCustom3DLabel_TimerEvent_Callback = void (*)(QCustom3DLabel*, QTimerEvent*);
    using QCustom3DLabel_ChildEvent_Callback = void (*)(QCustom3DLabel*, QChildEvent*);
    using QCustom3DLabel_CustomEvent_Callback = void (*)(QCustom3DLabel*, QEvent*);
    using QCustom3DLabel_ConnectNotify_Callback = void (*)(QCustom3DLabel*, QMetaMethod*);
    using QCustom3DLabel_DisconnectNotify_Callback = void (*)(QCustom3DLabel*, QMetaMethod*);
    using QCustom3DLabel::isSignalConnected;
    using QCustom3DLabel::receivers;
    using QCustom3DLabel::sender;
    using QCustom3DLabel::senderSignalIndex;

    // Instance callback storage
    QCustom3DLabel_MetaObject_Callback qcustom3dlabel_metaobject_callback = nullptr;
    QCustom3DLabel_Metacast_Callback qcustom3dlabel_metacast_callback = nullptr;
    QCustom3DLabel_Metacall_Callback qcustom3dlabel_metacall_callback = nullptr;
    QCustom3DLabel_Event_Callback qcustom3dlabel_event_callback = nullptr;
    QCustom3DLabel_EventFilter_Callback qcustom3dlabel_eventfilter_callback = nullptr;
    QCustom3DLabel_TimerEvent_Callback qcustom3dlabel_timerevent_callback = nullptr;
    QCustom3DLabel_ChildEvent_Callback qcustom3dlabel_childevent_callback = nullptr;
    QCustom3DLabel_CustomEvent_Callback qcustom3dlabel_customevent_callback = nullptr;
    QCustom3DLabel_ConnectNotify_Callback qcustom3dlabel_connectnotify_callback = nullptr;
    QCustom3DLabel_DisconnectNotify_Callback qcustom3dlabel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCustom3DLabel {
        using QCustom3DLabel::childEvent;
        using QCustom3DLabel::connectNotify;
        using QCustom3DLabel::customEvent;
        using QCustom3DLabel::disconnectNotify;
        using QCustom3DLabel::timerEvent;
    };

    VirtualQCustom3DLabel() : QCustom3DLabel() {};
    VirtualQCustom3DLabel(const QString& text, const QFont& font, const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation) : QCustom3DLabel(text, font, position, scaling, rotation) {};
    VirtualQCustom3DLabel(QObject* parent) : QCustom3DLabel(parent) {};
    VirtualQCustom3DLabel(const QString& text, const QFont& font, const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation, QObject* parent) : QCustom3DLabel(text, font, position, scaling, rotation, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcustom3dlabel_metaobject_callback) {
            QMetaObject* callback_ret = qcustom3dlabel_metaobject_callback(this);
            return callback_ret;
        }
        return QCustom3DLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcustom3dlabel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcustom3dlabel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcustom3dlabel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcustom3dlabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCustom3DLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcustom3dlabel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcustom3dlabel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DLabel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcustom3dlabel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcustom3dlabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCustom3DLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcustom3dlabel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcustom3dlabel_timerevent_callback(this, cbval1);
            return;
        }
        QCustom3DLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcustom3dlabel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcustom3dlabel_childevent_callback(this, cbval1);
            return;
        }
        QCustom3DLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcustom3dlabel_customevent_callback) {
            QEvent* cbval1 = event;
            qcustom3dlabel_customevent_callback(this, cbval1);
            return;
        }
        QCustom3DLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcustom3dlabel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3dlabel_connectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcustom3dlabel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3dlabel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DLabel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCustom3DLabel_SuperTimerEvent(QCustom3DLabel* self, QTimerEvent* event);
    friend void QCustom3DLabel_SuperChildEvent(QCustom3DLabel* self, QChildEvent* event);
    friend void QCustom3DLabel_SuperCustomEvent(QCustom3DLabel* self, QEvent* event);
    friend void QCustom3DLabel_SuperConnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
    friend void QCustom3DLabel_SuperDisconnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
};

#endif
