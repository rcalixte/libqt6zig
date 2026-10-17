#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXISFORMATTER_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXISFORMATTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QValue3DAxisFormatter
class VirtualQValue3DAxisFormatter final : public QValue3DAxisFormatter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QValue3DAxisFormatter_MetaObject_Callback = QMetaObject* (*)(const QValue3DAxisFormatter*);
    using QValue3DAxisFormatter_Metacast_Callback = void* (*)(QValue3DAxisFormatter*, const char*);
    using QValue3DAxisFormatter_Metacall_Callback = int (*)(QValue3DAxisFormatter*, int, int, void**);
    using QValue3DAxisFormatter_CreateNewInstance_Callback = QValue3DAxisFormatter* (*)(const QValue3DAxisFormatter*);
    using QValue3DAxisFormatter_Recalculate_Callback = void (*)(QValue3DAxisFormatter*);
    using QValue3DAxisFormatter_StringForValue_Callback = const char* (*)(const QValue3DAxisFormatter*, double, const char*);
    using QValue3DAxisFormatter_PositionAt_Callback = float (*)(const QValue3DAxisFormatter*, float);
    using QValue3DAxisFormatter_ValueAt_Callback = float (*)(const QValue3DAxisFormatter*, float);
    using QValue3DAxisFormatter_PopulateCopy_Callback = void (*)(const QValue3DAxisFormatter*, QValue3DAxisFormatter*);
    using QValue3DAxisFormatter_Event_Callback = bool (*)(QValue3DAxisFormatter*, QEvent*);
    using QValue3DAxisFormatter_EventFilter_Callback = bool (*)(QValue3DAxisFormatter*, QObject*, QEvent*);
    using QValue3DAxisFormatter_TimerEvent_Callback = void (*)(QValue3DAxisFormatter*, QTimerEvent*);
    using QValue3DAxisFormatter_ChildEvent_Callback = void (*)(QValue3DAxisFormatter*, QChildEvent*);
    using QValue3DAxisFormatter_CustomEvent_Callback = void (*)(QValue3DAxisFormatter*, QEvent*);
    using QValue3DAxisFormatter_ConnectNotify_Callback = void (*)(QValue3DAxisFormatter*, QMetaMethod*);
    using QValue3DAxisFormatter_DisconnectNotify_Callback = void (*)(QValue3DAxisFormatter*, QMetaMethod*);
    using QValue3DAxisFormatter::allowNegatives;
    using QValue3DAxisFormatter::allowZero;
    using QValue3DAxisFormatter::axis;
    using QValue3DAxisFormatter::gridPositions;
    using QValue3DAxisFormatter::isSignalConnected;
    using QValue3DAxisFormatter::labelPositions;
    using QValue3DAxisFormatter::labelStrings;
    using QValue3DAxisFormatter::locale;
    using QValue3DAxisFormatter::markDirty;
    using QValue3DAxisFormatter::receivers;
    using QValue3DAxisFormatter::sender;
    using QValue3DAxisFormatter::senderSignalIndex;
    using QValue3DAxisFormatter::setAllowNegatives;
    using QValue3DAxisFormatter::setAllowZero;
    using QValue3DAxisFormatter::setLocale;
    using QValue3DAxisFormatter::subGridPositions;

    // Instance callback storage
    QValue3DAxisFormatter_MetaObject_Callback qvalue3daxisformatter_metaobject_callback = nullptr;
    QValue3DAxisFormatter_Metacast_Callback qvalue3daxisformatter_metacast_callback = nullptr;
    QValue3DAxisFormatter_Metacall_Callback qvalue3daxisformatter_metacall_callback = nullptr;
    QValue3DAxisFormatter_CreateNewInstance_Callback qvalue3daxisformatter_createnewinstance_callback = nullptr;
    QValue3DAxisFormatter_Recalculate_Callback qvalue3daxisformatter_recalculate_callback = nullptr;
    QValue3DAxisFormatter_StringForValue_Callback qvalue3daxisformatter_stringforvalue_callback = nullptr;
    QValue3DAxisFormatter_PositionAt_Callback qvalue3daxisformatter_positionat_callback = nullptr;
    QValue3DAxisFormatter_ValueAt_Callback qvalue3daxisformatter_valueat_callback = nullptr;
    QValue3DAxisFormatter_PopulateCopy_Callback qvalue3daxisformatter_populatecopy_callback = nullptr;
    QValue3DAxisFormatter_Event_Callback qvalue3daxisformatter_event_callback = nullptr;
    QValue3DAxisFormatter_EventFilter_Callback qvalue3daxisformatter_eventfilter_callback = nullptr;
    QValue3DAxisFormatter_TimerEvent_Callback qvalue3daxisformatter_timerevent_callback = nullptr;
    QValue3DAxisFormatter_ChildEvent_Callback qvalue3daxisformatter_childevent_callback = nullptr;
    QValue3DAxisFormatter_CustomEvent_Callback qvalue3daxisformatter_customevent_callback = nullptr;
    QValue3DAxisFormatter_ConnectNotify_Callback qvalue3daxisformatter_connectnotify_callback = nullptr;
    QValue3DAxisFormatter_DisconnectNotify_Callback qvalue3daxisformatter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QValue3DAxisFormatter {
        using QValue3DAxisFormatter::childEvent;
        using QValue3DAxisFormatter::connectNotify;
        using QValue3DAxisFormatter::createNewInstance;
        using QValue3DAxisFormatter::customEvent;
        using QValue3DAxisFormatter::disconnectNotify;
        using QValue3DAxisFormatter::populateCopy;
        using QValue3DAxisFormatter::positionAt;
        using QValue3DAxisFormatter::recalculate;
        using QValue3DAxisFormatter::stringForValue;
        using QValue3DAxisFormatter::timerEvent;
        using QValue3DAxisFormatter::valueAt;
    };

    VirtualQValue3DAxisFormatter() : QValue3DAxisFormatter() {};
    VirtualQValue3DAxisFormatter(QObject* parent) : QValue3DAxisFormatter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvalue3daxisformatter_metaobject_callback) {
            QMetaObject* callback_ret = qvalue3daxisformatter_metaobject_callback(this);
            return callback_ret;
        }
        return QValue3DAxisFormatter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvalue3daxisformatter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvalue3daxisformatter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QValue3DAxisFormatter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalue3daxisformatter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvalue3daxisformatter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QValue3DAxisFormatter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValue3DAxisFormatter* createNewInstance() const override {
        if (qvalue3daxisformatter_createnewinstance_callback) {
            QValue3DAxisFormatter* callback_ret = qvalue3daxisformatter_createnewinstance_callback(this);
            return callback_ret;
        }
        return QValue3DAxisFormatter::createNewInstance();
    }

    // Virtual method for C ABI access and custom callback
    virtual void recalculate() override {
        if (qvalue3daxisformatter_recalculate_callback) {
            qvalue3daxisformatter_recalculate_callback(this);
            return;
        }
        QValue3DAxisFormatter::recalculate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString stringForValue(qreal value, const QString& format) const override {
        if (qvalue3daxisformatter_stringforvalue_callback) {
            double cbval1 = static_cast<double>(value);
            const auto format_ret = format;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray format_b = format_ret.toUtf8();
            auto format_str_len = format_b.length();
            const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
            memcpy((void*)format_str, format_b.data(), format_str_len);
            ((char*)format_str)[format_str_len] = '\0';
            const char* cbval2 = format_str;
            const char* callback_ret = qvalue3daxisformatter_stringforvalue_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(format_str);
            return callback_ret_QString;
        }
        return QValue3DAxisFormatter::stringForValue(value, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual float positionAt(float value) const override {
        if (qvalue3daxisformatter_positionat_callback) {
            float cbval1 = value;
            float callback_ret = qvalue3daxisformatter_positionat_callback(this, cbval1);
            return static_cast<float>(callback_ret);
        }
        return QValue3DAxisFormatter::positionAt(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual float valueAt(float position) const override {
        if (qvalue3daxisformatter_valueat_callback) {
            float cbval1 = position;
            float callback_ret = qvalue3daxisformatter_valueat_callback(this, cbval1);
            return static_cast<float>(callback_ret);
        }
        return QValue3DAxisFormatter::valueAt(position);
    }

    // Virtual method for C ABI access and custom callback
    virtual void populateCopy(QValue3DAxisFormatter& copy) const override {
        if (qvalue3daxisformatter_populatecopy_callback) {
            QValue3DAxisFormatter& copy_ret = copy;
            // Cast returned reference into pointer
            QValue3DAxisFormatter* cbval1 = &copy_ret;
            qvalue3daxisformatter_populatecopy_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::populateCopy(copy);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalue3daxisformatter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvalue3daxisformatter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QValue3DAxisFormatter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalue3daxisformatter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvalue3daxisformatter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QValue3DAxisFormatter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalue3daxisformatter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvalue3daxisformatter_timerevent_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalue3daxisformatter_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvalue3daxisformatter_childevent_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalue3daxisformatter_customevent_callback) {
            QEvent* cbval1 = event;
            qvalue3daxisformatter_customevent_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalue3daxisformatter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalue3daxisformatter_connectnotify_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalue3daxisformatter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalue3daxisformatter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QValue3DAxisFormatter::disconnectNotify(signal);
    }

    // Friend functions
    friend QValue3DAxisFormatter* QValue3DAxisFormatter_SuperCreateNewInstance(const QValue3DAxisFormatter* self);
    friend void QValue3DAxisFormatter_SuperRecalculate(QValue3DAxisFormatter* self);
    friend libqt_string QValue3DAxisFormatter_SuperStringForValue(const QValue3DAxisFormatter* self, double value, const libqt_string format);
    friend float QValue3DAxisFormatter_SuperPositionAt(const QValue3DAxisFormatter* self, float value);
    friend float QValue3DAxisFormatter_SuperValueAt(const QValue3DAxisFormatter* self, float position);
    friend void QValue3DAxisFormatter_SuperPopulateCopy(const QValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
    friend void QValue3DAxisFormatter_SuperTimerEvent(QValue3DAxisFormatter* self, QTimerEvent* event);
    friend void QValue3DAxisFormatter_SuperChildEvent(QValue3DAxisFormatter* self, QChildEvent* event);
    friend void QValue3DAxisFormatter_SuperCustomEvent(QValue3DAxisFormatter* self, QEvent* event);
    friend void QValue3DAxisFormatter_SuperConnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
    friend void QValue3DAxisFormatter_SuperDisconnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
};

#endif
