#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKWIDGETITEMDELEGATE_HXX
#define EXTRAS_KITEMVIEWS_LIBKWIDGETITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWidgetItemDelegate
class VirtualKWidgetItemDelegate : public KWidgetItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using KWidgetItemDelegate_MetaObject_Callback = QMetaObject* (*)(const KWidgetItemDelegate*);
    using KWidgetItemDelegate_Metacast_Callback = void* (*)(KWidgetItemDelegate*, const char*);
    using KWidgetItemDelegate_Metacall_Callback = int (*)(KWidgetItemDelegate*, int, int, void**);
    using KWidgetItemDelegate_CreateItemWidgets_Callback = libqt_list /* of QWidget* */ (*)(const KWidgetItemDelegate*, QModelIndex*);
    using KWidgetItemDelegate_UpdateItemWidgets_Callback = void (*)(const KWidgetItemDelegate*, libqt_list /* of QWidget* */, QStyleOptionViewItem*, QPersistentModelIndex*);
    using KWidgetItemDelegate_Paint_Callback = void (*)(const KWidgetItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_SizeHint_Callback = QSize* (*)(const KWidgetItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_CreateEditor_Callback = QWidget* (*)(const KWidgetItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_DestroyEditor_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, QModelIndex*);
    using KWidgetItemDelegate_SetEditorData_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, QModelIndex*);
    using KWidgetItemDelegate_SetModelData_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using KWidgetItemDelegate_UpdateEditorGeometry_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_EditorEvent_Callback = bool (*)(KWidgetItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_HelpEvent_Callback = bool (*)(KWidgetItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using KWidgetItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const KWidgetItemDelegate*);
    using KWidgetItemDelegate_Event_Callback = bool (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_EventFilter_Callback = bool (*)(KWidgetItemDelegate*, QObject*, QEvent*);
    using KWidgetItemDelegate_TimerEvent_Callback = void (*)(KWidgetItemDelegate*, QTimerEvent*);
    using KWidgetItemDelegate_ChildEvent_Callback = void (*)(KWidgetItemDelegate*, QChildEvent*);
    using KWidgetItemDelegate_CustomEvent_Callback = void (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_ConnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate_DisconnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate::blockedEventTypes;
    using KWidgetItemDelegate::isSignalConnected;
    using KWidgetItemDelegate::receivers;
    using KWidgetItemDelegate::sender;
    using KWidgetItemDelegate::senderSignalIndex;
    using KWidgetItemDelegate::setBlockedEventTypes;

    // Instance callback storage
    KWidgetItemDelegate_MetaObject_Callback kwidgetitemdelegate_metaobject_callback = nullptr;
    KWidgetItemDelegate_Metacast_Callback kwidgetitemdelegate_metacast_callback = nullptr;
    KWidgetItemDelegate_Metacall_Callback kwidgetitemdelegate_metacall_callback = nullptr;
    KWidgetItemDelegate_CreateItemWidgets_Callback kwidgetitemdelegate_createitemwidgets_callback = nullptr;
    KWidgetItemDelegate_UpdateItemWidgets_Callback kwidgetitemdelegate_updateitemwidgets_callback = nullptr;
    KWidgetItemDelegate_Paint_Callback kwidgetitemdelegate_paint_callback = nullptr;
    KWidgetItemDelegate_SizeHint_Callback kwidgetitemdelegate_sizehint_callback = nullptr;
    KWidgetItemDelegate_CreateEditor_Callback kwidgetitemdelegate_createeditor_callback = nullptr;
    KWidgetItemDelegate_DestroyEditor_Callback kwidgetitemdelegate_destroyeditor_callback = nullptr;
    KWidgetItemDelegate_SetEditorData_Callback kwidgetitemdelegate_seteditordata_callback = nullptr;
    KWidgetItemDelegate_SetModelData_Callback kwidgetitemdelegate_setmodeldata_callback = nullptr;
    KWidgetItemDelegate_UpdateEditorGeometry_Callback kwidgetitemdelegate_updateeditorgeometry_callback = nullptr;
    KWidgetItemDelegate_EditorEvent_Callback kwidgetitemdelegate_editorevent_callback = nullptr;
    KWidgetItemDelegate_HelpEvent_Callback kwidgetitemdelegate_helpevent_callback = nullptr;
    KWidgetItemDelegate_PaintingRoles_Callback kwidgetitemdelegate_paintingroles_callback = nullptr;
    KWidgetItemDelegate_Event_Callback kwidgetitemdelegate_event_callback = nullptr;
    KWidgetItemDelegate_EventFilter_Callback kwidgetitemdelegate_eventfilter_callback = nullptr;
    KWidgetItemDelegate_TimerEvent_Callback kwidgetitemdelegate_timerevent_callback = nullptr;
    KWidgetItemDelegate_ChildEvent_Callback kwidgetitemdelegate_childevent_callback = nullptr;
    KWidgetItemDelegate_CustomEvent_Callback kwidgetitemdelegate_customevent_callback = nullptr;
    KWidgetItemDelegate_ConnectNotify_Callback kwidgetitemdelegate_connectnotify_callback = nullptr;
    KWidgetItemDelegate_DisconnectNotify_Callback kwidgetitemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KWidgetItemDelegate {
        using KWidgetItemDelegate::childEvent;
        using KWidgetItemDelegate::connectNotify;
        using KWidgetItemDelegate::createItemWidgets;
        using KWidgetItemDelegate::customEvent;
        using KWidgetItemDelegate::disconnectNotify;
        using KWidgetItemDelegate::timerEvent;
        using KWidgetItemDelegate::updateItemWidgets;
    };

    VirtualKWidgetItemDelegate(QAbstractItemView* itemView) : KWidgetItemDelegate(itemView) {};
    VirtualKWidgetItemDelegate(QAbstractItemView* itemView, QObject* parent) : KWidgetItemDelegate(itemView, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwidgetitemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = kwidgetitemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return KWidgetItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwidgetitemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kwidgetitemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KWidgetItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwidgetitemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kwidgetitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWidgetItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> createItemWidgets(const QModelIndex& index) const override {
        if (kwidgetitemdelegate_createitemwidgets_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_list /* of QWidget* */ callback_ret = kwidgetitemdelegate_createitemwidgets_callback(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KWidgetItemDelegate::createItemWidgets called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateItemWidgets(const QList<QWidget*>& widgets, const QStyleOptionViewItem& option, const QPersistentModelIndex& index) const override {
        if (kwidgetitemdelegate_updateitemwidgets_callback) {
            const QList<QWidget*>& widgets_ret = widgets;
            // Convert QList<> from C++ memory to manually-managed C memory
            QWidget** widgets_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (widgets_ret.size())));
            for (qsizetype i = 0; i < widgets_ret.size(); ++i) {
                widgets_arr[i] = widgets_ret[i];
            }
            libqt_list widgets_out;
            widgets_out.len = widgets_ret.size();
            widgets_out.data = static_cast<void*>(widgets_arr);
            libqt_list /* of QWidget* */ cbval1 = widgets_out;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QPersistentModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QPersistentModelIndex* cbval3 = const_cast<QPersistentModelIndex*>(&index_ret);
            kwidgetitemdelegate_updateitemwidgets_callback(this, cbval1, cbval2, cbval3);
            free(widgets_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KWidgetItemDelegate::updateItemWidgets called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kwidgetitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KWidgetItemDelegate::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kwidgetitemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KWidgetItemDelegate::sizeHint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = kwidgetitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KWidgetItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kwidgetitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        KWidgetItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kwidgetitemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        KWidgetItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kwidgetitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KWidgetItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kwidgetitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KWidgetItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kwidgetitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KWidgetItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kwidgetitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KWidgetItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kwidgetitemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = kwidgetitemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KWidgetItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwidgetitemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kwidgetitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return KWidgetItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwidgetitemdelegate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kwidgetitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KWidgetItemDelegate::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwidgetitemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kwidgetitemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        KWidgetItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwidgetitemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            kwidgetitemdelegate_childevent_callback(this, cbval1);
            return;
        }
        KWidgetItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwidgetitemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            kwidgetitemdelegate_customevent_callback(this, cbval1);
            return;
        }
        KWidgetItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwidgetitemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        KWidgetItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwidgetitemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        KWidgetItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void KWidgetItemDelegate_SuperTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
    friend void KWidgetItemDelegate_SuperChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
    friend void KWidgetItemDelegate_SuperCustomEvent(KWidgetItemDelegate* self, QEvent* event);
    friend void KWidgetItemDelegate_SuperConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_SuperDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
};

#endif
