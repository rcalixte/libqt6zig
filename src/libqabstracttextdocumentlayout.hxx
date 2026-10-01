#pragma once
#ifndef LIBQABSTRACTTEXTDOCUMENTLAYOUT_HXX
#define LIBQABSTRACTTEXTDOCUMENTLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractTextDocumentLayout
class VirtualQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractTextDocumentLayout_MetaObject_Callback = QMetaObject* (*)(const QAbstractTextDocumentLayout*);
    using QAbstractTextDocumentLayout_Metacast_Callback = void* (*)(QAbstractTextDocumentLayout*, const char*);
    using QAbstractTextDocumentLayout_Metacall_Callback = int (*)(QAbstractTextDocumentLayout*, int, int, void**);
    using QAbstractTextDocumentLayout_Draw_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
    using QAbstractTextDocumentLayout_HitTest_Callback = int (*)(const QAbstractTextDocumentLayout*, QPointF*, int);
    using QAbstractTextDocumentLayout_PageCount_Callback = int (*)(const QAbstractTextDocumentLayout*);
    using QAbstractTextDocumentLayout_DocumentSize_Callback = QSizeF* (*)(const QAbstractTextDocumentLayout*);
    using QAbstractTextDocumentLayout_FrameBoundingRect_Callback = QRectF* (*)(const QAbstractTextDocumentLayout*, QTextFrame*);
    using QAbstractTextDocumentLayout_BlockBoundingRect_Callback = QRectF* (*)(const QAbstractTextDocumentLayout*, QTextBlock*);
    using QAbstractTextDocumentLayout_DocumentChanged_Callback = void (*)(QAbstractTextDocumentLayout*, int, int, int);
    using QAbstractTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QAbstractTextDocumentLayout_PositionInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QAbstractTextDocumentLayout_DrawInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
    using QAbstractTextDocumentLayout_Event_Callback = bool (*)(QAbstractTextDocumentLayout*, QEvent*);
    using QAbstractTextDocumentLayout_EventFilter_Callback = bool (*)(QAbstractTextDocumentLayout*, QObject*, QEvent*);
    using QAbstractTextDocumentLayout_TimerEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QTimerEvent*);
    using QAbstractTextDocumentLayout_ChildEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QChildEvent*);
    using QAbstractTextDocumentLayout_CustomEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QEvent*);
    using QAbstractTextDocumentLayout_ConnectNotify_Callback = void (*)(QAbstractTextDocumentLayout*, QMetaMethod*);
    using QAbstractTextDocumentLayout_DisconnectNotify_Callback = void (*)(QAbstractTextDocumentLayout*, QMetaMethod*);
    using QAbstractTextDocumentLayout::format;
    using QAbstractTextDocumentLayout::formatIndex;
    using QAbstractTextDocumentLayout::isSignalConnected;
    using QAbstractTextDocumentLayout::receivers;
    using QAbstractTextDocumentLayout::sender;
    using QAbstractTextDocumentLayout::senderSignalIndex;

    // Instance callback storage
    QAbstractTextDocumentLayout_MetaObject_Callback qabstracttextdocumentlayout_metaobject_callback = nullptr;
    QAbstractTextDocumentLayout_Metacast_Callback qabstracttextdocumentlayout_metacast_callback = nullptr;
    QAbstractTextDocumentLayout_Metacall_Callback qabstracttextdocumentlayout_metacall_callback = nullptr;
    QAbstractTextDocumentLayout_Draw_Callback qabstracttextdocumentlayout_draw_callback = nullptr;
    QAbstractTextDocumentLayout_HitTest_Callback qabstracttextdocumentlayout_hittest_callback = nullptr;
    QAbstractTextDocumentLayout_PageCount_Callback qabstracttextdocumentlayout_pagecount_callback = nullptr;
    QAbstractTextDocumentLayout_DocumentSize_Callback qabstracttextdocumentlayout_documentsize_callback = nullptr;
    QAbstractTextDocumentLayout_FrameBoundingRect_Callback qabstracttextdocumentlayout_frameboundingrect_callback = nullptr;
    QAbstractTextDocumentLayout_BlockBoundingRect_Callback qabstracttextdocumentlayout_blockboundingrect_callback = nullptr;
    QAbstractTextDocumentLayout_DocumentChanged_Callback qabstracttextdocumentlayout_documentchanged_callback = nullptr;
    QAbstractTextDocumentLayout_ResizeInlineObject_Callback qabstracttextdocumentlayout_resizeinlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_PositionInlineObject_Callback qabstracttextdocumentlayout_positioninlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_DrawInlineObject_Callback qabstracttextdocumentlayout_drawinlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_Event_Callback qabstracttextdocumentlayout_event_callback = nullptr;
    QAbstractTextDocumentLayout_EventFilter_Callback qabstracttextdocumentlayout_eventfilter_callback = nullptr;
    QAbstractTextDocumentLayout_TimerEvent_Callback qabstracttextdocumentlayout_timerevent_callback = nullptr;
    QAbstractTextDocumentLayout_ChildEvent_Callback qabstracttextdocumentlayout_childevent_callback = nullptr;
    QAbstractTextDocumentLayout_CustomEvent_Callback qabstracttextdocumentlayout_customevent_callback = nullptr;
    QAbstractTextDocumentLayout_ConnectNotify_Callback qabstracttextdocumentlayout_connectnotify_callback = nullptr;
    QAbstractTextDocumentLayout_DisconnectNotify_Callback qabstracttextdocumentlayout_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractTextDocumentLayout {
        using QAbstractTextDocumentLayout::childEvent;
        using QAbstractTextDocumentLayout::connectNotify;
        using QAbstractTextDocumentLayout::customEvent;
        using QAbstractTextDocumentLayout::disconnectNotify;
        using QAbstractTextDocumentLayout::documentChanged;
        using QAbstractTextDocumentLayout::drawInlineObject;
        using QAbstractTextDocumentLayout::positionInlineObject;
        using QAbstractTextDocumentLayout::resizeInlineObject;
        using QAbstractTextDocumentLayout::timerEvent;
    };

    VirtualQAbstractTextDocumentLayout(QTextDocument* doc) : QAbstractTextDocumentLayout(doc) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstracttextdocumentlayout_metaobject_callback) {
            QMetaObject* callback_ret = qabstracttextdocumentlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractTextDocumentLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstracttextdocumentlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstracttextdocumentlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTextDocumentLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttextdocumentlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstracttextdocumentlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTextDocumentLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter, const QAbstractTextDocumentLayout::PaintContext& context) override {
        if (qabstracttextdocumentlayout_draw_callback) {
            QPainter* cbval1 = painter;
            const QAbstractTextDocumentLayout::PaintContext& context_ret = context;
            // Cast returned reference into pointer
            QAbstractTextDocumentLayout__PaintContext* cbval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&context_ret);
            qabstracttextdocumentlayout_draw_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::draw called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int hitTest(const QPointF& point, Qt::HitTestAccuracy accuracy) const override {
        if (qabstracttextdocumentlayout_hittest_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            int cbval2 = static_cast<int>(accuracy);
            int callback_ret = qabstracttextdocumentlayout_hittest_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::hitTest called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int pageCount() const override {
        if (qabstracttextdocumentlayout_pagecount_callback) {
            int callback_ret = qabstracttextdocumentlayout_pagecount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::pageCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF documentSize() const override {
        if (qabstracttextdocumentlayout_documentsize_callback) {
            QSizeF* callback_ret = qabstracttextdocumentlayout_documentsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::documentSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF frameBoundingRect(QTextFrame* frame) const override {
        if (qabstracttextdocumentlayout_frameboundingrect_callback) {
            QTextFrame* cbval1 = frame;
            QRectF* callback_ret = qabstracttextdocumentlayout_frameboundingrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::frameBoundingRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
        if (qabstracttextdocumentlayout_blockboundingrect_callback) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = qabstracttextdocumentlayout_blockboundingrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::blockBoundingRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void documentChanged(int from, int charsRemoved, int charsAdded) override {
        if (qabstracttextdocumentlayout_documentchanged_callback) {
            int cbval1 = from;
            int cbval2 = charsRemoved;
            int cbval3 = charsAdded;
            qabstracttextdocumentlayout_documentchanged_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTextDocumentLayout::documentChanged called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_resizeinlineobject_callback) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);
            qabstracttextdocumentlayout_resizeinlineobject_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_positioninlineobject_callback) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);
            qabstracttextdocumentlayout_positioninlineobject_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_drawinlineobject_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            QTextInlineObject* cbval3 = new QTextInlineObject(object);
            int cbval4 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval5 = const_cast<QTextFormat*>(&format_ret);
            qabstracttextdocumentlayout_drawinlineobject_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstracttextdocumentlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstracttextdocumentlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTextDocumentLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttextdocumentlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstracttextdocumentlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTextDocumentLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttextdocumentlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstracttextdocumentlayout_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractTextDocumentLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttextdocumentlayout_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstracttextdocumentlayout_childevent_callback(this, cbval1);
            return;
        }
        QAbstractTextDocumentLayout::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttextdocumentlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qabstracttextdocumentlayout_customevent_callback(this, cbval1);
            return;
        }
        QAbstractTextDocumentLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttextdocumentlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttextdocumentlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTextDocumentLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttextdocumentlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttextdocumentlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTextDocumentLayout::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractTextDocumentLayout_SuperResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QAbstractTextDocumentLayout_SuperPositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QAbstractTextDocumentLayout_SuperDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
    friend void QAbstractTextDocumentLayout_SuperTimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event);
    friend void QAbstractTextDocumentLayout_SuperChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event);
    friend void QAbstractTextDocumentLayout_SuperCustomEvent(QAbstractTextDocumentLayout* self, QEvent* event);
    friend void QAbstractTextDocumentLayout_SuperConnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
    friend void QAbstractTextDocumentLayout_SuperDisconnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
};

#endif
