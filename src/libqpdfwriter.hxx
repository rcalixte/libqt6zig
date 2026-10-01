#pragma once
#ifndef LIBQPDFWRITER_HXX
#define LIBQPDFWRITER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPdfWriter
class VirtualQPdfWriter final : public QPdfWriter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfWriter_MetaObject_Callback = QMetaObject* (*)(const QPdfWriter*);
    using QPdfWriter_Metacast_Callback = void* (*)(QPdfWriter*, const char*);
    using QPdfWriter_Metacall_Callback = int (*)(QPdfWriter*, int, int, void**);
    using QPdfWriter_NewPage_Callback = bool (*)(QPdfWriter*);
    using QPdfWriter_PaintEngine_Callback = QPaintEngine* (*)(const QPdfWriter*);
    using QPdfWriter_Metric_Callback = int (*)(const QPdfWriter*, int);
    using QPdfWriter_Event_Callback = bool (*)(QPdfWriter*, QEvent*);
    using QPdfWriter_EventFilter_Callback = bool (*)(QPdfWriter*, QObject*, QEvent*);
    using QPdfWriter_TimerEvent_Callback = void (*)(QPdfWriter*, QTimerEvent*);
    using QPdfWriter_ChildEvent_Callback = void (*)(QPdfWriter*, QChildEvent*);
    using QPdfWriter_CustomEvent_Callback = void (*)(QPdfWriter*, QEvent*);
    using QPdfWriter_ConnectNotify_Callback = void (*)(QPdfWriter*, QMetaMethod*);
    using QPdfWriter_DisconnectNotify_Callback = void (*)(QPdfWriter*, QMetaMethod*);
    using QPdfWriter_SetPageLayout_Callback = bool (*)(QPdfWriter*, QPageLayout*);
    using QPdfWriter_SetPageSize_Callback = bool (*)(QPdfWriter*, QPageSize*);
    using QPdfWriter_SetPageOrientation_Callback = bool (*)(QPdfWriter*, int);
    using QPdfWriter_SetPageMargins_Callback = bool (*)(QPdfWriter*, QMarginsF*, int);
    using QPdfWriter_SetPageRanges_Callback = void (*)(QPdfWriter*, QPageRanges*);
    using QPdfWriter_DevType_Callback = int (*)(const QPdfWriter*);
    using QPdfWriter_InitPainter_Callback = void (*)(const QPdfWriter*, QPainter*);
    using QPdfWriter_Redirected_Callback = QPaintDevice* (*)(const QPdfWriter*, QPoint*);
    using QPdfWriter_SharedPainter_Callback = QPainter* (*)(const QPdfWriter*);
    using QPdfWriter::getDecodedMetricF;
    using QPdfWriter::isSignalConnected;
    using QPdfWriter::receivers;
    using QPdfWriter::sender;
    using QPdfWriter::senderSignalIndex;

    // Instance callback storage
    QPdfWriter_MetaObject_Callback qpdfwriter_metaobject_callback = nullptr;
    QPdfWriter_Metacast_Callback qpdfwriter_metacast_callback = nullptr;
    QPdfWriter_Metacall_Callback qpdfwriter_metacall_callback = nullptr;
    QPdfWriter_NewPage_Callback qpdfwriter_newpage_callback = nullptr;
    QPdfWriter_PaintEngine_Callback qpdfwriter_paintengine_callback = nullptr;
    QPdfWriter_Metric_Callback qpdfwriter_metric_callback = nullptr;
    QPdfWriter_Event_Callback qpdfwriter_event_callback = nullptr;
    QPdfWriter_EventFilter_Callback qpdfwriter_eventfilter_callback = nullptr;
    QPdfWriter_TimerEvent_Callback qpdfwriter_timerevent_callback = nullptr;
    QPdfWriter_ChildEvent_Callback qpdfwriter_childevent_callback = nullptr;
    QPdfWriter_CustomEvent_Callback qpdfwriter_customevent_callback = nullptr;
    QPdfWriter_ConnectNotify_Callback qpdfwriter_connectnotify_callback = nullptr;
    QPdfWriter_DisconnectNotify_Callback qpdfwriter_disconnectnotify_callback = nullptr;
    QPdfWriter_SetPageLayout_Callback qpdfwriter_setpagelayout_callback = nullptr;
    QPdfWriter_SetPageSize_Callback qpdfwriter_setpagesize_callback = nullptr;
    QPdfWriter_SetPageOrientation_Callback qpdfwriter_setpageorientation_callback = nullptr;
    QPdfWriter_SetPageMargins_Callback qpdfwriter_setpagemargins_callback = nullptr;
    QPdfWriter_SetPageRanges_Callback qpdfwriter_setpageranges_callback = nullptr;
    QPdfWriter_DevType_Callback qpdfwriter_devtype_callback = nullptr;
    QPdfWriter_InitPainter_Callback qpdfwriter_initpainter_callback = nullptr;
    QPdfWriter_Redirected_Callback qpdfwriter_redirected_callback = nullptr;
    QPdfWriter_SharedPainter_Callback qpdfwriter_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QPdfWriter {
        using QPdfWriter::childEvent;
        using QPdfWriter::connectNotify;
        using QPdfWriter::customEvent;
        using QPdfWriter::disconnectNotify;
        using QPdfWriter::initPainter;
        using QPdfWriter::metric;
        using QPdfWriter::paintEngine;
        using QPdfWriter::redirected;
        using QPdfWriter::sharedPainter;
        using QPdfWriter::timerEvent;
    };

    VirtualQPdfWriter(const QString& filename) : QPdfWriter(filename) {};
    VirtualQPdfWriter(QIODevice* device) : QPdfWriter(device) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfwriter_metaobject_callback) {
            QMetaObject* callback_ret = qpdfwriter_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfWriter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfwriter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfwriter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfwriter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfwriter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfWriter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qpdfwriter_newpage_callback) {
            bool callback_ret = qpdfwriter_newpage_callback(this);
            return callback_ret;
        }
        return QPdfWriter::newPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfwriter_paintengine_callback) {
            QPaintEngine* callback_ret = qpdfwriter_paintengine_callback(this);
            return callback_ret;
        }
        return QPdfWriter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric id) const override {
        if (qpdfwriter_metric_callback) {
            int cbval1 = static_cast<int>(id);
            int callback_ret = qpdfwriter_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfWriter::metric(id);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfwriter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfwriter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfwriter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfwriter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfWriter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfwriter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfwriter_timerevent_callback(this, cbval1);
            return;
        }
        QPdfWriter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfwriter_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfwriter_childevent_callback(this, cbval1);
            return;
        }
        QPdfWriter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfwriter_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfwriter_customevent_callback(this, cbval1);
            return;
        }
        QPdfWriter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfwriter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfwriter_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfWriter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfwriter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfwriter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfWriter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qpdfwriter_setpagelayout_callback) {
            const QPageLayout& pageLayout_ret = pageLayout;
            // Cast returned reference into pointer
            QPageLayout* cbval1 = const_cast<QPageLayout*>(&pageLayout_ret);
            bool callback_ret = qpdfwriter_setpagelayout_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::setPageLayout(pageLayout);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qpdfwriter_setpagesize_callback) {
            const QPageSize& pageSize_ret = pageSize;
            // Cast returned reference into pointer
            QPageSize* cbval1 = const_cast<QPageSize*>(&pageSize_ret);
            bool callback_ret = qpdfwriter_setpagesize_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::setPageSize(pageSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qpdfwriter_setpageorientation_callback) {
            int cbval1 = static_cast<int>(orientation);
            bool callback_ret = qpdfwriter_setpageorientation_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::setPageOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qpdfwriter_setpagemargins_callback) {
            const QMarginsF& margins_ret = margins;
            // Cast returned reference into pointer
            QMarginsF* cbval1 = const_cast<QMarginsF*>(&margins_ret);
            int cbval2 = static_cast<int>(units);
            bool callback_ret = qpdfwriter_setpagemargins_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfWriter::setPageMargins(margins, units);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qpdfwriter_setpageranges_callback) {
            const QPageRanges& ranges_ret = ranges;
            // Cast returned reference into pointer
            QPageRanges* cbval1 = const_cast<QPageRanges*>(&ranges_ret);
            qpdfwriter_setpageranges_callback(this, cbval1);
            return;
        }
        QPdfWriter::setPageRanges(ranges);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfwriter_devtype_callback) {
            int callback_ret = qpdfwriter_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPdfWriter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfwriter_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpdfwriter_initpainter_callback(this, cbval1);
            return;
        }
        QPdfWriter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfwriter_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpdfwriter_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfWriter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfwriter_sharedpainter_callback) {
            QPainter* callback_ret = qpdfwriter_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPdfWriter::sharedPainter();
    }

    // Friend functions
    friend QPaintEngine* QPdfWriter_SuperPaintEngine(const QPdfWriter* self);
    friend int QPdfWriter_SuperMetric(const QPdfWriter* self, int id);
    friend void QPdfWriter_SuperTimerEvent(QPdfWriter* self, QTimerEvent* event);
    friend void QPdfWriter_SuperChildEvent(QPdfWriter* self, QChildEvent* event);
    friend void QPdfWriter_SuperCustomEvent(QPdfWriter* self, QEvent* event);
    friend void QPdfWriter_SuperConnectNotify(QPdfWriter* self, const QMetaMethod* signal);
    friend void QPdfWriter_SuperDisconnectNotify(QPdfWriter* self, const QMetaMethod* signal);
    friend void QPdfWriter_SuperInitPainter(const QPdfWriter* self, QPainter* painter);
    friend QPaintDevice* QPdfWriter_SuperRedirected(const QPdfWriter* self, QPoint* offset);
    friend QPainter* QPdfWriter_SuperSharedPainter(const QPdfWriter* self);
};

#endif
