#pragma once
#ifndef LIBQITEMDELEGATE_HXX
#define LIBQITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemDelegate
class VirtualQItemDelegate final : public QItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemDelegate_MetaObject_Callback = QMetaObject* (*)(const QItemDelegate*);
    using QItemDelegate_Metacast_Callback = void* (*)(QItemDelegate*, const char*);
    using QItemDelegate_Metacall_Callback = int (*)(QItemDelegate*, int, int, void**);
    using QItemDelegate_Paint_Callback = void (*)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_SizeHint_Callback = QSize* (*)(const QItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_CreateEditor_Callback = QWidget* (*)(const QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_SetEditorData_Callback = void (*)(const QItemDelegate*, QWidget*, QModelIndex*);
    using QItemDelegate_SetModelData_Callback = void (*)(const QItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using QItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_DrawDisplay_Callback = void (*)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, const char*);
    using QItemDelegate_DrawDecoration_Callback = void (*)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, QPixmap*);
    using QItemDelegate_DrawFocus_Callback = void (*)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*);
    using QItemDelegate_DrawCheck_Callback = void (*)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, int);
    using QItemDelegate_EventFilter_Callback = bool (*)(QItemDelegate*, QObject*, QEvent*);
    using QItemDelegate_EditorEvent_Callback = bool (*)(QItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_DestroyEditor_Callback = void (*)(const QItemDelegate*, QWidget*, QModelIndex*);
    using QItemDelegate_HelpEvent_Callback = bool (*)(QItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using QItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const QItemDelegate*);
    using QItemDelegate_Event_Callback = bool (*)(QItemDelegate*, QEvent*);
    using QItemDelegate_TimerEvent_Callback = void (*)(QItemDelegate*, QTimerEvent*);
    using QItemDelegate_ChildEvent_Callback = void (*)(QItemDelegate*, QChildEvent*);
    using QItemDelegate_CustomEvent_Callback = void (*)(QItemDelegate*, QEvent*);
    using QItemDelegate_ConnectNotify_Callback = void (*)(QItemDelegate*, QMetaMethod*);
    using QItemDelegate_DisconnectNotify_Callback = void (*)(QItemDelegate*, QMetaMethod*);
    using QItemDelegate::decoration;
    using QItemDelegate::doCheck;
    using QItemDelegate::doLayout;
    using QItemDelegate::drawBackground;
    using QItemDelegate::isSignalConnected;
    using QItemDelegate::receivers;
    using QItemDelegate::rect;
    using QItemDelegate::selectedPixmap;
    using QItemDelegate::sender;
    using QItemDelegate::senderSignalIndex;
    using QItemDelegate::setOptions;
    using QItemDelegate::textRectangle;

    // Instance callback storage
    QItemDelegate_MetaObject_Callback qitemdelegate_metaobject_callback = nullptr;
    QItemDelegate_Metacast_Callback qitemdelegate_metacast_callback = nullptr;
    QItemDelegate_Metacall_Callback qitemdelegate_metacall_callback = nullptr;
    QItemDelegate_Paint_Callback qitemdelegate_paint_callback = nullptr;
    QItemDelegate_SizeHint_Callback qitemdelegate_sizehint_callback = nullptr;
    QItemDelegate_CreateEditor_Callback qitemdelegate_createeditor_callback = nullptr;
    QItemDelegate_SetEditorData_Callback qitemdelegate_seteditordata_callback = nullptr;
    QItemDelegate_SetModelData_Callback qitemdelegate_setmodeldata_callback = nullptr;
    QItemDelegate_UpdateEditorGeometry_Callback qitemdelegate_updateeditorgeometry_callback = nullptr;
    QItemDelegate_DrawDisplay_Callback qitemdelegate_drawdisplay_callback = nullptr;
    QItemDelegate_DrawDecoration_Callback qitemdelegate_drawdecoration_callback = nullptr;
    QItemDelegate_DrawFocus_Callback qitemdelegate_drawfocus_callback = nullptr;
    QItemDelegate_DrawCheck_Callback qitemdelegate_drawcheck_callback = nullptr;
    QItemDelegate_EventFilter_Callback qitemdelegate_eventfilter_callback = nullptr;
    QItemDelegate_EditorEvent_Callback qitemdelegate_editorevent_callback = nullptr;
    QItemDelegate_DestroyEditor_Callback qitemdelegate_destroyeditor_callback = nullptr;
    QItemDelegate_HelpEvent_Callback qitemdelegate_helpevent_callback = nullptr;
    QItemDelegate_PaintingRoles_Callback qitemdelegate_paintingroles_callback = nullptr;
    QItemDelegate_Event_Callback qitemdelegate_event_callback = nullptr;
    QItemDelegate_TimerEvent_Callback qitemdelegate_timerevent_callback = nullptr;
    QItemDelegate_ChildEvent_Callback qitemdelegate_childevent_callback = nullptr;
    QItemDelegate_CustomEvent_Callback qitemdelegate_customevent_callback = nullptr;
    QItemDelegate_ConnectNotify_Callback qitemdelegate_connectnotify_callback = nullptr;
    QItemDelegate_DisconnectNotify_Callback qitemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QItemDelegate {
        using QItemDelegate::childEvent;
        using QItemDelegate::connectNotify;
        using QItemDelegate::customEvent;
        using QItemDelegate::disconnectNotify;
        using QItemDelegate::drawCheck;
        using QItemDelegate::drawDecoration;
        using QItemDelegate::drawDisplay;
        using QItemDelegate::drawFocus;
        using QItemDelegate::editorEvent;
        using QItemDelegate::eventFilter;
        using QItemDelegate::timerEvent;
    };

    VirtualQItemDelegate() : QItemDelegate() {};
    VirtualQItemDelegate(QObject* parent) : QItemDelegate(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qitemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = qitemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return QItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qitemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qitemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QItemDelegate::paint(painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qitemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QItemDelegate::sizeHint(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = qitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qitemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qitemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        QItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qitemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawDisplay(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QString& text) const override {
        if (qitemdelegate_drawdisplay_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval3 = const_cast<QRect*>(&rect_ret);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval4 = text_str;
            qitemdelegate_drawdisplay_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(text_str);
            return;
        }
        QItemDelegate::drawDisplay(painter, option, rect, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawDecoration(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QPixmap& pixmap) const override {
        if (qitemdelegate_drawdecoration_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval3 = const_cast<QRect*>(&rect_ret);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);
            qitemdelegate_drawdecoration_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QItemDelegate::drawDecoration(painter, option, rect, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawFocus(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect) const override {
        if (qitemdelegate_drawfocus_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval3 = const_cast<QRect*>(&rect_ret);
            qitemdelegate_drawfocus_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QItemDelegate::drawFocus(painter, option, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawCheck(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, Qt::CheckState state) const override {
        if (qitemdelegate_drawcheck_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval3 = const_cast<QRect*>(&rect_ret);
            int cbval4 = static_cast<int>(state);
            qitemdelegate_drawcheck_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QItemDelegate::drawCheck(painter, option, rect, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qitemdelegate_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemDelegate::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qitemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qitemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        QItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qitemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qitemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = qitemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qitemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        QItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qitemdelegate_childevent_callback(this, cbval1);
            return;
        }
        QItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            qitemdelegate_customevent_callback(this, cbval1);
            return;
        }
        QItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        QItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void QItemDelegate_SuperDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text);
    friend void QItemDelegate_SuperDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap);
    friend void QItemDelegate_SuperDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect);
    friend void QItemDelegate_SuperDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state);
    friend bool QItemDelegate_SuperEventFilter(QItemDelegate* self, QObject* object, QEvent* event);
    friend bool QItemDelegate_SuperEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend void QItemDelegate_SuperTimerEvent(QItemDelegate* self, QTimerEvent* event);
    friend void QItemDelegate_SuperChildEvent(QItemDelegate* self, QChildEvent* event);
    friend void QItemDelegate_SuperCustomEvent(QItemDelegate* self, QEvent* event);
    friend void QItemDelegate_SuperConnectNotify(QItemDelegate* self, const QMetaMethod* signal);
    friend void QItemDelegate_SuperDisconnectNotify(QItemDelegate* self, const QMetaMethod* signal);
};

#endif
