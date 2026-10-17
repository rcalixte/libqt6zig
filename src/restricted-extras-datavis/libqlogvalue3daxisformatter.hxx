#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLogValue3DAxisFormatter
class VirtualQLogValue3DAxisFormatter final : public QLogValue3DAxisFormatter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLogValue3DAxisFormatter_MetaObject_Callback = QMetaObject* (*)(const QLogValue3DAxisFormatter*);
    using QLogValue3DAxisFormatter_Metacast_Callback = void* (*)(QLogValue3DAxisFormatter*, const char*);
    using QLogValue3DAxisFormatter_Metacall_Callback = int (*)(QLogValue3DAxisFormatter*, int, int, void**);
    using QLogValue3DAxisFormatter_CreateNewInstance_Callback = QValue3DAxisFormatter* (*)(const QLogValue3DAxisFormatter*);
    using QLogValue3DAxisFormatter_Recalculate_Callback = void (*)(QLogValue3DAxisFormatter*);
    using QLogValue3DAxisFormatter_PositionAt_Callback = float (*)(const QLogValue3DAxisFormatter*, float);
    using QLogValue3DAxisFormatter_ValueAt_Callback = float (*)(const QLogValue3DAxisFormatter*, float);
    using QLogValue3DAxisFormatter_PopulateCopy_Callback = void (*)(const QLogValue3DAxisFormatter*, QValue3DAxisFormatter*);
    using QLogValue3DAxisFormatter_StringForValue_Callback = const char* (*)(const QLogValue3DAxisFormatter*, double, const char*);
    using QLogValue3DAxisFormatter_Event_Callback = bool (*)(QLogValue3DAxisFormatter*, QEvent*);
    using QLogValue3DAxisFormatter_EventFilter_Callback = bool (*)(QLogValue3DAxisFormatter*, QObject*, QEvent*);
    using QLogValue3DAxisFormatter_TimerEvent_Callback = void (*)(QLogValue3DAxisFormatter*, QTimerEvent*);
    using QLogValue3DAxisFormatter_ChildEvent_Callback = void (*)(QLogValue3DAxisFormatter*, QChildEvent*);
    using QLogValue3DAxisFormatter_CustomEvent_Callback = void (*)(QLogValue3DAxisFormatter*, QEvent*);
    using QLogValue3DAxisFormatter_ConnectNotify_Callback = void (*)(QLogValue3DAxisFormatter*, QMetaMethod*);
    using QLogValue3DAxisFormatter_DisconnectNotify_Callback = void (*)(QLogValue3DAxisFormatter*, QMetaMethod*);
    using QLogValue3DAxisFormatter::allowNegatives;
    using QLogValue3DAxisFormatter::allowZero;
    using QLogValue3DAxisFormatter::axis;
    using QLogValue3DAxisFormatter::gridPositions;
    using QLogValue3DAxisFormatter::isSignalConnected;
    using QLogValue3DAxisFormatter::labelPositions;
    using QLogValue3DAxisFormatter::labelStrings;
    using QLogValue3DAxisFormatter::locale;
    using QLogValue3DAxisFormatter::markDirty;
    using QLogValue3DAxisFormatter::receivers;
    using QLogValue3DAxisFormatter::sender;
    using QLogValue3DAxisFormatter::senderSignalIndex;
    using QLogValue3DAxisFormatter::setAllowNegatives;
    using QLogValue3DAxisFormatter::setAllowZero;
    using QLogValue3DAxisFormatter::setLocale;
    using QLogValue3DAxisFormatter::subGridPositions;

    // Instance callback storage
    QLogValue3DAxisFormatter_MetaObject_Callback qlogvalue3daxisformatter_metaobject_callback = nullptr;
    QLogValue3DAxisFormatter_Metacast_Callback qlogvalue3daxisformatter_metacast_callback = nullptr;
    QLogValue3DAxisFormatter_Metacall_Callback qlogvalue3daxisformatter_metacall_callback = nullptr;
    QLogValue3DAxisFormatter_CreateNewInstance_Callback qlogvalue3daxisformatter_createnewinstance_callback = nullptr;
    QLogValue3DAxisFormatter_Recalculate_Callback qlogvalue3daxisformatter_recalculate_callback = nullptr;
    QLogValue3DAxisFormatter_PositionAt_Callback qlogvalue3daxisformatter_positionat_callback = nullptr;
    QLogValue3DAxisFormatter_ValueAt_Callback qlogvalue3daxisformatter_valueat_callback = nullptr;
    QLogValue3DAxisFormatter_PopulateCopy_Callback qlogvalue3daxisformatter_populatecopy_callback = nullptr;
    QLogValue3DAxisFormatter_StringForValue_Callback qlogvalue3daxisformatter_stringforvalue_callback = nullptr;
    QLogValue3DAxisFormatter_Event_Callback qlogvalue3daxisformatter_event_callback = nullptr;
    QLogValue3DAxisFormatter_EventFilter_Callback qlogvalue3daxisformatter_eventfilter_callback = nullptr;
    QLogValue3DAxisFormatter_TimerEvent_Callback qlogvalue3daxisformatter_timerevent_callback = nullptr;
    QLogValue3DAxisFormatter_ChildEvent_Callback qlogvalue3daxisformatter_childevent_callback = nullptr;
    QLogValue3DAxisFormatter_CustomEvent_Callback qlogvalue3daxisformatter_customevent_callback = nullptr;
    QLogValue3DAxisFormatter_ConnectNotify_Callback qlogvalue3daxisformatter_connectnotify_callback = nullptr;
    QLogValue3DAxisFormatter_DisconnectNotify_Callback qlogvalue3daxisformatter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLogValue3DAxisFormatter {
        using QLogValue3DAxisFormatter::childEvent;
        using QLogValue3DAxisFormatter::connectNotify;
        using QLogValue3DAxisFormatter::createNewInstance;
        using QLogValue3DAxisFormatter::customEvent;
        using QLogValue3DAxisFormatter::disconnectNotify;
        using QLogValue3DAxisFormatter::populateCopy;
        using QLogValue3DAxisFormatter::positionAt;
        using QLogValue3DAxisFormatter::recalculate;
        using QLogValue3DAxisFormatter::stringForValue;
        using QLogValue3DAxisFormatter::timerEvent;
        using QLogValue3DAxisFormatter::valueAt;
    };

    VirtualQLogValue3DAxisFormatter() : QLogValue3DAxisFormatter() {};
    VirtualQLogValue3DAxisFormatter(QObject* parent) : QLogValue3DAxisFormatter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlogvalue3daxisformatter_metaobject_callback) {
            QMetaObject* callback_ret = qlogvalue3daxisformatter_metaobject_callback(this);
            return callback_ret;
        }
        return QLogValue3DAxisFormatter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlogvalue3daxisformatter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlogvalue3daxisformatter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLogValue3DAxisFormatter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlogvalue3daxisformatter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlogvalue3daxisformatter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLogValue3DAxisFormatter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValue3DAxisFormatter* createNewInstance() const override {
        if (qlogvalue3daxisformatter_createnewinstance_callback) {
            QValue3DAxisFormatter* callback_ret = qlogvalue3daxisformatter_createnewinstance_callback(this);
            return callback_ret;
        }
        return QLogValue3DAxisFormatter::createNewInstance();
    }

    // Virtual method for C ABI access and custom callback
    virtual void recalculate() override {
        if (qlogvalue3daxisformatter_recalculate_callback) {
            qlogvalue3daxisformatter_recalculate_callback(this);
            return;
        }
        QLogValue3DAxisFormatter::recalculate();
    }

    // Virtual method for C ABI access and custom callback
    virtual float positionAt(float value) const override {
        if (qlogvalue3daxisformatter_positionat_callback) {
            float cbval1 = value;
            float callback_ret = qlogvalue3daxisformatter_positionat_callback(this, cbval1);
            return static_cast<float>(callback_ret);
        }
        return QLogValue3DAxisFormatter::positionAt(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual float valueAt(float position) const override {
        if (qlogvalue3daxisformatter_valueat_callback) {
            float cbval1 = position;
            float callback_ret = qlogvalue3daxisformatter_valueat_callback(this, cbval1);
            return static_cast<float>(callback_ret);
        }
        return QLogValue3DAxisFormatter::valueAt(position);
    }

    // Virtual method for C ABI access and custom callback
    virtual void populateCopy(QValue3DAxisFormatter& copy) const override {
        if (qlogvalue3daxisformatter_populatecopy_callback) {
            QValue3DAxisFormatter& copy_ret = copy;
            // Cast returned reference into pointer
            QValue3DAxisFormatter* cbval1 = &copy_ret;
            qlogvalue3daxisformatter_populatecopy_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::populateCopy(copy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString stringForValue(qreal value, const QString& format) const override {
        if (qlogvalue3daxisformatter_stringforvalue_callback) {
            double cbval1 = static_cast<double>(value);
            const auto format_ret = format;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray format_b = format_ret.toUtf8();
            auto format_str_len = format_b.length();
            const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
            memcpy((void*)format_str, format_b.data(), format_str_len);
            ((char*)format_str)[format_str_len] = '\0';
            const char* cbval2 = format_str;
            const char* callback_ret = qlogvalue3daxisformatter_stringforvalue_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(format_str);
            return callback_ret_QString;
        }
        return QLogValue3DAxisFormatter::stringForValue(value, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlogvalue3daxisformatter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlogvalue3daxisformatter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLogValue3DAxisFormatter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlogvalue3daxisformatter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlogvalue3daxisformatter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLogValue3DAxisFormatter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlogvalue3daxisformatter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlogvalue3daxisformatter_timerevent_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlogvalue3daxisformatter_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlogvalue3daxisformatter_childevent_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlogvalue3daxisformatter_customevent_callback) {
            QEvent* cbval1 = event;
            qlogvalue3daxisformatter_customevent_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlogvalue3daxisformatter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlogvalue3daxisformatter_connectnotify_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlogvalue3daxisformatter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlogvalue3daxisformatter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLogValue3DAxisFormatter::disconnectNotify(signal);
    }

    // Friend functions
    friend QValue3DAxisFormatter* QLogValue3DAxisFormatter_SuperCreateNewInstance(const QLogValue3DAxisFormatter* self);
    friend void QLogValue3DAxisFormatter_SuperRecalculate(QLogValue3DAxisFormatter* self);
    friend float QLogValue3DAxisFormatter_SuperPositionAt(const QLogValue3DAxisFormatter* self, float value);
    friend float QLogValue3DAxisFormatter_SuperValueAt(const QLogValue3DAxisFormatter* self, float position);
    friend void QLogValue3DAxisFormatter_SuperPopulateCopy(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
    friend libqt_string QLogValue3DAxisFormatter_SuperStringForValue(const QLogValue3DAxisFormatter* self, double value, const libqt_string format);
    friend void QLogValue3DAxisFormatter_SuperTimerEvent(QLogValue3DAxisFormatter* self, QTimerEvent* event);
    friend void QLogValue3DAxisFormatter_SuperChildEvent(QLogValue3DAxisFormatter* self, QChildEvent* event);
    friend void QLogValue3DAxisFormatter_SuperCustomEvent(QLogValue3DAxisFormatter* self, QEvent* event);
    friend void QLogValue3DAxisFormatter_SuperConnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
    friend void QLogValue3DAxisFormatter_SuperDisconnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
};

#endif
