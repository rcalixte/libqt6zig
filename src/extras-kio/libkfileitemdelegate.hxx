#pragma once
#ifndef EXTRAS_KIO_LIBKFILEITEMDELEGATE_HXX
#define EXTRAS_KIO_LIBKFILEITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileItemDelegate
class VirtualKFileItemDelegate final : public KFileItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileItemDelegate_MetaObject_Callback = QMetaObject* (*)(const KFileItemDelegate*);
    using KFileItemDelegate_Metacast_Callback = void* (*)(KFileItemDelegate*, const char*);
    using KFileItemDelegate_Metacall_Callback = int (*)(KFileItemDelegate*, int, int, void**);
    using KFileItemDelegate_SizeHint_Callback = QSize* (*)(const KFileItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_Paint_Callback = void (*)(const KFileItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_CreateEditor_Callback = QWidget* (*)(const KFileItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_EditorEvent_Callback = bool (*)(KFileItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_SetEditorData_Callback = void (*)(const KFileItemDelegate*, QWidget*, QModelIndex*);
    using KFileItemDelegate_SetModelData_Callback = void (*)(const KFileItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using KFileItemDelegate_UpdateEditorGeometry_Callback = void (*)(const KFileItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_EventFilter_Callback = bool (*)(KFileItemDelegate*, QObject*, QEvent*);
    using KFileItemDelegate_HelpEvent_Callback = bool (*)(KFileItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_DestroyEditor_Callback = void (*)(const KFileItemDelegate*, QWidget*, QModelIndex*);
    using KFileItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const KFileItemDelegate*);
    using KFileItemDelegate_Event_Callback = bool (*)(KFileItemDelegate*, QEvent*);
    using KFileItemDelegate_TimerEvent_Callback = void (*)(KFileItemDelegate*, QTimerEvent*);
    using KFileItemDelegate_ChildEvent_Callback = void (*)(KFileItemDelegate*, QChildEvent*);
    using KFileItemDelegate_CustomEvent_Callback = void (*)(KFileItemDelegate*, QEvent*);
    using KFileItemDelegate_ConnectNotify_Callback = void (*)(KFileItemDelegate*, QMetaMethod*);
    using KFileItemDelegate_DisconnectNotify_Callback = void (*)(KFileItemDelegate*, QMetaMethod*);
    using KFileItemDelegate::isSignalConnected;
    using KFileItemDelegate::receivers;
    using KFileItemDelegate::sender;
    using KFileItemDelegate::senderSignalIndex;

    // Instance callback storage
    KFileItemDelegate_MetaObject_Callback kfileitemdelegate_metaobject_callback = nullptr;
    KFileItemDelegate_Metacast_Callback kfileitemdelegate_metacast_callback = nullptr;
    KFileItemDelegate_Metacall_Callback kfileitemdelegate_metacall_callback = nullptr;
    KFileItemDelegate_SizeHint_Callback kfileitemdelegate_sizehint_callback = nullptr;
    KFileItemDelegate_Paint_Callback kfileitemdelegate_paint_callback = nullptr;
    KFileItemDelegate_CreateEditor_Callback kfileitemdelegate_createeditor_callback = nullptr;
    KFileItemDelegate_EditorEvent_Callback kfileitemdelegate_editorevent_callback = nullptr;
    KFileItemDelegate_SetEditorData_Callback kfileitemdelegate_seteditordata_callback = nullptr;
    KFileItemDelegate_SetModelData_Callback kfileitemdelegate_setmodeldata_callback = nullptr;
    KFileItemDelegate_UpdateEditorGeometry_Callback kfileitemdelegate_updateeditorgeometry_callback = nullptr;
    KFileItemDelegate_EventFilter_Callback kfileitemdelegate_eventfilter_callback = nullptr;
    KFileItemDelegate_HelpEvent_Callback kfileitemdelegate_helpevent_callback = nullptr;
    KFileItemDelegate_DestroyEditor_Callback kfileitemdelegate_destroyeditor_callback = nullptr;
    KFileItemDelegate_PaintingRoles_Callback kfileitemdelegate_paintingroles_callback = nullptr;
    KFileItemDelegate_Event_Callback kfileitemdelegate_event_callback = nullptr;
    KFileItemDelegate_TimerEvent_Callback kfileitemdelegate_timerevent_callback = nullptr;
    KFileItemDelegate_ChildEvent_Callback kfileitemdelegate_childevent_callback = nullptr;
    KFileItemDelegate_CustomEvent_Callback kfileitemdelegate_customevent_callback = nullptr;
    KFileItemDelegate_ConnectNotify_Callback kfileitemdelegate_connectnotify_callback = nullptr;
    KFileItemDelegate_DisconnectNotify_Callback kfileitemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileItemDelegate {
        using KFileItemDelegate::childEvent;
        using KFileItemDelegate::connectNotify;
        using KFileItemDelegate::customEvent;
        using KFileItemDelegate::disconnectNotify;
        using KFileItemDelegate::timerEvent;
    };

    VirtualKFileItemDelegate() : KFileItemDelegate() {};
    VirtualKFileItemDelegate(QObject* parent) : KFileItemDelegate(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileitemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = kfileitemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return KFileItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileitemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfileitemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileitemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfileitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kfileitemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileItemDelegate::sizeHint(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kfileitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KFileItemDelegate::paint(painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = kfileitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFileItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kfileitemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kfileitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KFileItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kfileitemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kfileitemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        KFileItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kfileitemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kfileitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KFileItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kfileitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KFileItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kfileitemdelegate_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kfileitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileItemDelegate::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kfileitemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kfileitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KFileItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kfileitemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kfileitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        KFileItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kfileitemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = kfileitemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KFileItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileitemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfileitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileitemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfileitemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        KFileItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileitemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfileitemdelegate_childevent_callback(this, cbval1);
            return;
        }
        KFileItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileitemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            kfileitemdelegate_customevent_callback(this, cbval1);
            return;
        }
        KFileItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileitemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileitemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        KFileItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileitemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileitemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileItemDelegate_SuperTimerEvent(KFileItemDelegate* self, QTimerEvent* event);
    friend void KFileItemDelegate_SuperChildEvent(KFileItemDelegate* self, QChildEvent* event);
    friend void KFileItemDelegate_SuperCustomEvent(KFileItemDelegate* self, QEvent* event);
    friend void KFileItemDelegate_SuperConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
    friend void KFileItemDelegate_SuperDisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
};

#endif
