#pragma once
#ifndef LIBQABSTRACTITEMDELEGATE_HXX
#define LIBQABSTRACTITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemDelegate
class VirtualQAbstractItemDelegate : public QAbstractItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemDelegate_MetaObject_Callback = QMetaObject* (*)(const QAbstractItemDelegate*);
    using QAbstractItemDelegate_Metacast_Callback = void* (*)(QAbstractItemDelegate*, const char*);
    using QAbstractItemDelegate_Metacall_Callback = int (*)(QAbstractItemDelegate*, int, int, void**);
    using QAbstractItemDelegate_Paint_Callback = void (*)(const QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_SizeHint_Callback = QSize* (*)(const QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_CreateEditor_Callback = QWidget* (*)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_DestroyEditor_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QModelIndex*);
    using QAbstractItemDelegate_SetEditorData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QModelIndex*);
    using QAbstractItemDelegate_SetModelData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using QAbstractItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_EditorEvent_Callback = bool (*)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_HelpEvent_Callback = bool (*)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const QAbstractItemDelegate*);
    using QAbstractItemDelegate_Event_Callback = bool (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_EventFilter_Callback = bool (*)(QAbstractItemDelegate*, QObject*, QEvent*);
    using QAbstractItemDelegate_TimerEvent_Callback = void (*)(QAbstractItemDelegate*, QTimerEvent*);
    using QAbstractItemDelegate_ChildEvent_Callback = void (*)(QAbstractItemDelegate*, QChildEvent*);
    using QAbstractItemDelegate_CustomEvent_Callback = void (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_ConnectNotify_Callback = void (*)(QAbstractItemDelegate*, QMetaMethod*);
    using QAbstractItemDelegate_DisconnectNotify_Callback = void (*)(QAbstractItemDelegate*, QMetaMethod*);
    using QAbstractItemDelegate::isSignalConnected;
    using QAbstractItemDelegate::receivers;
    using QAbstractItemDelegate::sender;
    using QAbstractItemDelegate::senderSignalIndex;

    // Instance callback storage
    QAbstractItemDelegate_MetaObject_Callback qabstractitemdelegate_metaobject_callback = nullptr;
    QAbstractItemDelegate_Metacast_Callback qabstractitemdelegate_metacast_callback = nullptr;
    QAbstractItemDelegate_Metacall_Callback qabstractitemdelegate_metacall_callback = nullptr;
    QAbstractItemDelegate_Paint_Callback qabstractitemdelegate_paint_callback = nullptr;
    QAbstractItemDelegate_SizeHint_Callback qabstractitemdelegate_sizehint_callback = nullptr;
    QAbstractItemDelegate_CreateEditor_Callback qabstractitemdelegate_createeditor_callback = nullptr;
    QAbstractItemDelegate_DestroyEditor_Callback qabstractitemdelegate_destroyeditor_callback = nullptr;
    QAbstractItemDelegate_SetEditorData_Callback qabstractitemdelegate_seteditordata_callback = nullptr;
    QAbstractItemDelegate_SetModelData_Callback qabstractitemdelegate_setmodeldata_callback = nullptr;
    QAbstractItemDelegate_UpdateEditorGeometry_Callback qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
    QAbstractItemDelegate_EditorEvent_Callback qabstractitemdelegate_editorevent_callback = nullptr;
    QAbstractItemDelegate_HelpEvent_Callback qabstractitemdelegate_helpevent_callback = nullptr;
    QAbstractItemDelegate_PaintingRoles_Callback qabstractitemdelegate_paintingroles_callback = nullptr;
    QAbstractItemDelegate_Event_Callback qabstractitemdelegate_event_callback = nullptr;
    QAbstractItemDelegate_EventFilter_Callback qabstractitemdelegate_eventfilter_callback = nullptr;
    QAbstractItemDelegate_TimerEvent_Callback qabstractitemdelegate_timerevent_callback = nullptr;
    QAbstractItemDelegate_ChildEvent_Callback qabstractitemdelegate_childevent_callback = nullptr;
    QAbstractItemDelegate_CustomEvent_Callback qabstractitemdelegate_customevent_callback = nullptr;
    QAbstractItemDelegate_ConnectNotify_Callback qabstractitemdelegate_connectnotify_callback = nullptr;
    QAbstractItemDelegate_DisconnectNotify_Callback qabstractitemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractItemDelegate {
        using QAbstractItemDelegate::childEvent;
        using QAbstractItemDelegate::connectNotify;
        using QAbstractItemDelegate::customEvent;
        using QAbstractItemDelegate::disconnectNotify;
        using QAbstractItemDelegate::timerEvent;
    };

    VirtualQAbstractItemDelegate() : QAbstractItemDelegate() {};
    VirtualQAbstractItemDelegate(QObject* parent) : QAbstractItemDelegate(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = qabstractitemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractitemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemDelegate::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qabstractitemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemDelegate::sizeHint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = qabstractitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qabstractitemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qabstractitemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = qabstractitemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractitemdelegate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemDelegate::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractitemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractitemdelegate_childevent_callback(this, cbval1);
            return;
        }
        QAbstractItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractitemdelegate_customevent_callback(this, cbval1);
            return;
        }
        QAbstractItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractItemDelegate_SuperTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event);
    friend void QAbstractItemDelegate_SuperChildEvent(QAbstractItemDelegate* self, QChildEvent* event);
    friend void QAbstractItemDelegate_SuperCustomEvent(QAbstractItemDelegate* self, QEvent* event);
    friend void QAbstractItemDelegate_SuperConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend void QAbstractItemDelegate_SuperDisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
};

#endif
