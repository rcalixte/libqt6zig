#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKWIDGETITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKWIDGETITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWidgetItemDelegate so that we can call protected methods
class VirtualKWidgetItemDelegate : public KWidgetItemDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKWidgetItemDelegate = true;

    // Virtual class public types (including callbacks)
    using KWidgetItemDelegate_MetaObject_Callback = QMetaObject* (*)();
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
    using KWidgetItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)();
    using KWidgetItemDelegate_Event_Callback = bool (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_EventFilter_Callback = bool (*)(KWidgetItemDelegate*, QObject*, QEvent*);
    using KWidgetItemDelegate_TimerEvent_Callback = void (*)(KWidgetItemDelegate*, QTimerEvent*);
    using KWidgetItemDelegate_ChildEvent_Callback = void (*)(KWidgetItemDelegate*, QChildEvent*);
    using KWidgetItemDelegate_CustomEvent_Callback = void (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_ConnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate_DisconnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate_SetBlockedEventTypes_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, libqt_list /* of int */);
    using KWidgetItemDelegate_BlockedEventTypes_Callback = libqt_list /* of int */ (*)(const KWidgetItemDelegate*, QWidget*);
    using KWidgetItemDelegate_Sender_Callback = QObject* (*)();
    using KWidgetItemDelegate_SenderSignalIndex_Callback = int (*)();
    using KWidgetItemDelegate_Receivers_Callback = int (*)(const KWidgetItemDelegate*, const char*);
    using KWidgetItemDelegate_IsSignalConnected_Callback = bool (*)(const KWidgetItemDelegate*, QMetaMethod*);

  protected:
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
    KWidgetItemDelegate_SetBlockedEventTypes_Callback kwidgetitemdelegate_setblockedeventtypes_callback = nullptr;
    KWidgetItemDelegate_BlockedEventTypes_Callback kwidgetitemdelegate_blockedeventtypes_callback = nullptr;
    KWidgetItemDelegate_Sender_Callback kwidgetitemdelegate_sender_callback = nullptr;
    KWidgetItemDelegate_SenderSignalIndex_Callback kwidgetitemdelegate_sendersignalindex_callback = nullptr;
    KWidgetItemDelegate_Receivers_Callback kwidgetitemdelegate_receivers_callback = nullptr;
    KWidgetItemDelegate_IsSignalConnected_Callback kwidgetitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwidgetitemdelegate_metaobject_isbase = false;
    mutable bool kwidgetitemdelegate_metacast_isbase = false;
    mutable bool kwidgetitemdelegate_metacall_isbase = false;
    mutable bool kwidgetitemdelegate_createitemwidgets_isbase = false;
    mutable bool kwidgetitemdelegate_updateitemwidgets_isbase = false;
    mutable bool kwidgetitemdelegate_paint_isbase = false;
    mutable bool kwidgetitemdelegate_sizehint_isbase = false;
    mutable bool kwidgetitemdelegate_createeditor_isbase = false;
    mutable bool kwidgetitemdelegate_destroyeditor_isbase = false;
    mutable bool kwidgetitemdelegate_seteditordata_isbase = false;
    mutable bool kwidgetitemdelegate_setmodeldata_isbase = false;
    mutable bool kwidgetitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool kwidgetitemdelegate_editorevent_isbase = false;
    mutable bool kwidgetitemdelegate_helpevent_isbase = false;
    mutable bool kwidgetitemdelegate_paintingroles_isbase = false;
    mutable bool kwidgetitemdelegate_event_isbase = false;
    mutable bool kwidgetitemdelegate_eventfilter_isbase = false;
    mutable bool kwidgetitemdelegate_timerevent_isbase = false;
    mutable bool kwidgetitemdelegate_childevent_isbase = false;
    mutable bool kwidgetitemdelegate_customevent_isbase = false;
    mutable bool kwidgetitemdelegate_connectnotify_isbase = false;
    mutable bool kwidgetitemdelegate_disconnectnotify_isbase = false;
    mutable bool kwidgetitemdelegate_setblockedeventtypes_isbase = false;
    mutable bool kwidgetitemdelegate_blockedeventtypes_isbase = false;
    mutable bool kwidgetitemdelegate_sender_isbase = false;
    mutable bool kwidgetitemdelegate_sendersignalindex_isbase = false;
    mutable bool kwidgetitemdelegate_receivers_isbase = false;
    mutable bool kwidgetitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualKWidgetItemDelegate(QAbstractItemView* itemView) : KWidgetItemDelegate(itemView) {};
    VirtualKWidgetItemDelegate(QAbstractItemView* itemView, QObject* parent) : KWidgetItemDelegate(itemView, parent) {};

    // Callback setters
    inline void setKWidgetItemDelegate_MetaObject_Callback(KWidgetItemDelegate_MetaObject_Callback cb) { kwidgetitemdelegate_metaobject_callback = cb; }
    inline void setKWidgetItemDelegate_Metacast_Callback(KWidgetItemDelegate_Metacast_Callback cb) { kwidgetitemdelegate_metacast_callback = cb; }
    inline void setKWidgetItemDelegate_Metacall_Callback(KWidgetItemDelegate_Metacall_Callback cb) { kwidgetitemdelegate_metacall_callback = cb; }
    inline void setKWidgetItemDelegate_CreateItemWidgets_Callback(KWidgetItemDelegate_CreateItemWidgets_Callback cb) { kwidgetitemdelegate_createitemwidgets_callback = cb; }
    inline void setKWidgetItemDelegate_UpdateItemWidgets_Callback(KWidgetItemDelegate_UpdateItemWidgets_Callback cb) { kwidgetitemdelegate_updateitemwidgets_callback = cb; }
    inline void setKWidgetItemDelegate_Paint_Callback(KWidgetItemDelegate_Paint_Callback cb) { kwidgetitemdelegate_paint_callback = cb; }
    inline void setKWidgetItemDelegate_SizeHint_Callback(KWidgetItemDelegate_SizeHint_Callback cb) { kwidgetitemdelegate_sizehint_callback = cb; }
    inline void setKWidgetItemDelegate_CreateEditor_Callback(KWidgetItemDelegate_CreateEditor_Callback cb) { kwidgetitemdelegate_createeditor_callback = cb; }
    inline void setKWidgetItemDelegate_DestroyEditor_Callback(KWidgetItemDelegate_DestroyEditor_Callback cb) { kwidgetitemdelegate_destroyeditor_callback = cb; }
    inline void setKWidgetItemDelegate_SetEditorData_Callback(KWidgetItemDelegate_SetEditorData_Callback cb) { kwidgetitemdelegate_seteditordata_callback = cb; }
    inline void setKWidgetItemDelegate_SetModelData_Callback(KWidgetItemDelegate_SetModelData_Callback cb) { kwidgetitemdelegate_setmodeldata_callback = cb; }
    inline void setKWidgetItemDelegate_UpdateEditorGeometry_Callback(KWidgetItemDelegate_UpdateEditorGeometry_Callback cb) { kwidgetitemdelegate_updateeditorgeometry_callback = cb; }
    inline void setKWidgetItemDelegate_EditorEvent_Callback(KWidgetItemDelegate_EditorEvent_Callback cb) { kwidgetitemdelegate_editorevent_callback = cb; }
    inline void setKWidgetItemDelegate_HelpEvent_Callback(KWidgetItemDelegate_HelpEvent_Callback cb) { kwidgetitemdelegate_helpevent_callback = cb; }
    inline void setKWidgetItemDelegate_PaintingRoles_Callback(KWidgetItemDelegate_PaintingRoles_Callback cb) { kwidgetitemdelegate_paintingroles_callback = cb; }
    inline void setKWidgetItemDelegate_Event_Callback(KWidgetItemDelegate_Event_Callback cb) { kwidgetitemdelegate_event_callback = cb; }
    inline void setKWidgetItemDelegate_EventFilter_Callback(KWidgetItemDelegate_EventFilter_Callback cb) { kwidgetitemdelegate_eventfilter_callback = cb; }
    inline void setKWidgetItemDelegate_TimerEvent_Callback(KWidgetItemDelegate_TimerEvent_Callback cb) { kwidgetitemdelegate_timerevent_callback = cb; }
    inline void setKWidgetItemDelegate_ChildEvent_Callback(KWidgetItemDelegate_ChildEvent_Callback cb) { kwidgetitemdelegate_childevent_callback = cb; }
    inline void setKWidgetItemDelegate_CustomEvent_Callback(KWidgetItemDelegate_CustomEvent_Callback cb) { kwidgetitemdelegate_customevent_callback = cb; }
    inline void setKWidgetItemDelegate_ConnectNotify_Callback(KWidgetItemDelegate_ConnectNotify_Callback cb) { kwidgetitemdelegate_connectnotify_callback = cb; }
    inline void setKWidgetItemDelegate_DisconnectNotify_Callback(KWidgetItemDelegate_DisconnectNotify_Callback cb) { kwidgetitemdelegate_disconnectnotify_callback = cb; }
    inline void setKWidgetItemDelegate_SetBlockedEventTypes_Callback(KWidgetItemDelegate_SetBlockedEventTypes_Callback cb) { kwidgetitemdelegate_setblockedeventtypes_callback = cb; }
    inline void setKWidgetItemDelegate_BlockedEventTypes_Callback(KWidgetItemDelegate_BlockedEventTypes_Callback cb) { kwidgetitemdelegate_blockedeventtypes_callback = cb; }
    inline void setKWidgetItemDelegate_Sender_Callback(KWidgetItemDelegate_Sender_Callback cb) { kwidgetitemdelegate_sender_callback = cb; }
    inline void setKWidgetItemDelegate_SenderSignalIndex_Callback(KWidgetItemDelegate_SenderSignalIndex_Callback cb) { kwidgetitemdelegate_sendersignalindex_callback = cb; }
    inline void setKWidgetItemDelegate_Receivers_Callback(KWidgetItemDelegate_Receivers_Callback cb) { kwidgetitemdelegate_receivers_callback = cb; }
    inline void setKWidgetItemDelegate_IsSignalConnected_Callback(KWidgetItemDelegate_IsSignalConnected_Callback cb) { kwidgetitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWidgetItemDelegate_MetaObject_IsBase(bool value) const { kwidgetitemdelegate_metaobject_isbase = value; }
    inline void setKWidgetItemDelegate_Metacast_IsBase(bool value) const { kwidgetitemdelegate_metacast_isbase = value; }
    inline void setKWidgetItemDelegate_Metacall_IsBase(bool value) const { kwidgetitemdelegate_metacall_isbase = value; }
    inline void setKWidgetItemDelegate_CreateItemWidgets_IsBase(bool value) const { kwidgetitemdelegate_createitemwidgets_isbase = value; }
    inline void setKWidgetItemDelegate_UpdateItemWidgets_IsBase(bool value) const { kwidgetitemdelegate_updateitemwidgets_isbase = value; }
    inline void setKWidgetItemDelegate_Paint_IsBase(bool value) const { kwidgetitemdelegate_paint_isbase = value; }
    inline void setKWidgetItemDelegate_SizeHint_IsBase(bool value) const { kwidgetitemdelegate_sizehint_isbase = value; }
    inline void setKWidgetItemDelegate_CreateEditor_IsBase(bool value) const { kwidgetitemdelegate_createeditor_isbase = value; }
    inline void setKWidgetItemDelegate_DestroyEditor_IsBase(bool value) const { kwidgetitemdelegate_destroyeditor_isbase = value; }
    inline void setKWidgetItemDelegate_SetEditorData_IsBase(bool value) const { kwidgetitemdelegate_seteditordata_isbase = value; }
    inline void setKWidgetItemDelegate_SetModelData_IsBase(bool value) const { kwidgetitemdelegate_setmodeldata_isbase = value; }
    inline void setKWidgetItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { kwidgetitemdelegate_updateeditorgeometry_isbase = value; }
    inline void setKWidgetItemDelegate_EditorEvent_IsBase(bool value) const { kwidgetitemdelegate_editorevent_isbase = value; }
    inline void setKWidgetItemDelegate_HelpEvent_IsBase(bool value) const { kwidgetitemdelegate_helpevent_isbase = value; }
    inline void setKWidgetItemDelegate_PaintingRoles_IsBase(bool value) const { kwidgetitemdelegate_paintingroles_isbase = value; }
    inline void setKWidgetItemDelegate_Event_IsBase(bool value) const { kwidgetitemdelegate_event_isbase = value; }
    inline void setKWidgetItemDelegate_EventFilter_IsBase(bool value) const { kwidgetitemdelegate_eventfilter_isbase = value; }
    inline void setKWidgetItemDelegate_TimerEvent_IsBase(bool value) const { kwidgetitemdelegate_timerevent_isbase = value; }
    inline void setKWidgetItemDelegate_ChildEvent_IsBase(bool value) const { kwidgetitemdelegate_childevent_isbase = value; }
    inline void setKWidgetItemDelegate_CustomEvent_IsBase(bool value) const { kwidgetitemdelegate_customevent_isbase = value; }
    inline void setKWidgetItemDelegate_ConnectNotify_IsBase(bool value) const { kwidgetitemdelegate_connectnotify_isbase = value; }
    inline void setKWidgetItemDelegate_DisconnectNotify_IsBase(bool value) const { kwidgetitemdelegate_disconnectnotify_isbase = value; }
    inline void setKWidgetItemDelegate_SetBlockedEventTypes_IsBase(bool value) const { kwidgetitemdelegate_setblockedeventtypes_isbase = value; }
    inline void setKWidgetItemDelegate_BlockedEventTypes_IsBase(bool value) const { kwidgetitemdelegate_blockedeventtypes_isbase = value; }
    inline void setKWidgetItemDelegate_Sender_IsBase(bool value) const { kwidgetitemdelegate_sender_isbase = value; }
    inline void setKWidgetItemDelegate_SenderSignalIndex_IsBase(bool value) const { kwidgetitemdelegate_sendersignalindex_isbase = value; }
    inline void setKWidgetItemDelegate_Receivers_IsBase(bool value) const { kwidgetitemdelegate_receivers_isbase = value; }
    inline void setKWidgetItemDelegate_IsSignalConnected_IsBase(bool value) const { kwidgetitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwidgetitemdelegate_metaobject_isbase) {
            kwidgetitemdelegate_metaobject_isbase = false;
            return KWidgetItemDelegate::metaObject();
        }
        auto metaobject_cb = kwidgetitemdelegate_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KWidgetItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwidgetitemdelegate_metacast_isbase) {
            kwidgetitemdelegate_metacast_isbase = false;
            return KWidgetItemDelegate::qt_metacast(param1);
        }
        auto metacast_cb = kwidgetitemdelegate_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KWidgetItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwidgetitemdelegate_metacall_isbase) {
            kwidgetitemdelegate_metacall_isbase = false;
            return KWidgetItemDelegate::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kwidgetitemdelegate_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWidgetItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> createItemWidgets(const QModelIndex& index) const override {
        auto createitemwidgets_cb = kwidgetitemdelegate_createitemwidgets_callback;
        if (createitemwidgets_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_list /* of QWidget* */ callback_ret = createitemwidgets_cb(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateItemWidgets(const QList<QWidget*>& widgets, const QStyleOptionViewItem& option, const QPersistentModelIndex& index) const override {
        auto updateitemwidgets_cb = kwidgetitemdelegate_updateitemwidgets_callback;
        if (updateitemwidgets_cb) {
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

            updateitemwidgets_cb(this, cbval1, cbval2, cbval3);
            free(widgets_arr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        auto paint_cb = kwidgetitemdelegate_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            paint_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        auto sizehint_cb = kwidgetitemdelegate_sizehint_callback;
        if (sizehint_cb) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_createeditor_isbase) {
            kwidgetitemdelegate_createeditor_isbase = false;
            return KWidgetItemDelegate::createEditor(parent, option, index);
        }
        auto createeditor_cb = kwidgetitemdelegate_createeditor_callback;
        if (createeditor_cb) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QWidget* callback_ret = createeditor_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KWidgetItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_destroyeditor_isbase) {
            kwidgetitemdelegate_destroyeditor_isbase = false;
            KWidgetItemDelegate::destroyEditor(editor, index);
            return;
        }
        auto destroyeditor_cb = kwidgetitemdelegate_destroyeditor_callback;
        if (destroyeditor_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            destroyeditor_cb(this, cbval1, cbval2);
            return;
        }
        KWidgetItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_seteditordata_isbase) {
            kwidgetitemdelegate_seteditordata_isbase = false;
            KWidgetItemDelegate::setEditorData(editor, index);
            return;
        }
        auto seteditordata_cb = kwidgetitemdelegate_seteditordata_callback;
        if (seteditordata_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            seteditordata_cb(this, cbval1, cbval2);
            return;
        }
        KWidgetItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_setmodeldata_isbase) {
            kwidgetitemdelegate_setmodeldata_isbase = false;
            KWidgetItemDelegate::setModelData(editor, model, index);
            return;
        }
        auto setmodeldata_cb = kwidgetitemdelegate_setmodeldata_callback;
        if (setmodeldata_cb) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            setmodeldata_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KWidgetItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_updateeditorgeometry_isbase) {
            kwidgetitemdelegate_updateeditorgeometry_isbase = false;
            KWidgetItemDelegate::updateEditorGeometry(editor, option, index);
            return;
        }
        auto updateeditorgeometry_cb = kwidgetitemdelegate_updateeditorgeometry_callback;
        if (updateeditorgeometry_cb) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            updateeditorgeometry_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KWidgetItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_editorevent_isbase) {
            kwidgetitemdelegate_editorevent_isbase = false;
            return KWidgetItemDelegate::editorEvent(event, model, option, index);
        }
        auto editorevent_cb = kwidgetitemdelegate_editorevent_callback;
        if (editorevent_cb) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = editorevent_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KWidgetItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_helpevent_isbase) {
            kwidgetitemdelegate_helpevent_isbase = false;
            return KWidgetItemDelegate::helpEvent(event, view, option, index);
        }
        auto helpevent_cb = kwidgetitemdelegate_helpevent_callback;
        if (helpevent_cb) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = helpevent_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KWidgetItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kwidgetitemdelegate_paintingroles_isbase) {
            kwidgetitemdelegate_paintingroles_isbase = false;
            return KWidgetItemDelegate::paintingRoles();
        }
        auto paintingroles_cb = kwidgetitemdelegate_paintingroles_callback;
        if (paintingroles_cb) {
            libqt_list /* of int */ callback_ret = paintingroles_cb();
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
        if (kwidgetitemdelegate_event_isbase) {
            kwidgetitemdelegate_event_isbase = false;
            return KWidgetItemDelegate::event(event);
        }
        auto event_cb = kwidgetitemdelegate_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KWidgetItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwidgetitemdelegate_eventfilter_isbase) {
            kwidgetitemdelegate_eventfilter_isbase = false;
            return KWidgetItemDelegate::eventFilter(watched, event);
        }
        auto eventfilter_cb = kwidgetitemdelegate_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KWidgetItemDelegate::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwidgetitemdelegate_timerevent_isbase) {
            kwidgetitemdelegate_timerevent_isbase = false;
            KWidgetItemDelegate::timerEvent(event);
            return;
        }
        auto timerevent_cb = kwidgetitemdelegate_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KWidgetItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwidgetitemdelegate_childevent_isbase) {
            kwidgetitemdelegate_childevent_isbase = false;
            KWidgetItemDelegate::childEvent(event);
            return;
        }
        auto childevent_cb = kwidgetitemdelegate_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KWidgetItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwidgetitemdelegate_customevent_isbase) {
            kwidgetitemdelegate_customevent_isbase = false;
            KWidgetItemDelegate::customEvent(event);
            return;
        }
        auto customevent_cb = kwidgetitemdelegate_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KWidgetItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_connectnotify_isbase) {
            kwidgetitemdelegate_connectnotify_isbase = false;
            KWidgetItemDelegate::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kwidgetitemdelegate_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KWidgetItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_disconnectnotify_isbase) {
            kwidgetitemdelegate_disconnectnotify_isbase = false;
            KWidgetItemDelegate::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kwidgetitemdelegate_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KWidgetItemDelegate::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setBlockedEventTypes(QWidget* widget, const QList<QEvent::Type>& types) const {
        if (kwidgetitemdelegate_setblockedeventtypes_isbase) {
            kwidgetitemdelegate_setblockedeventtypes_isbase = false;
            KWidgetItemDelegate::setBlockedEventTypes(widget, types);
            return;
        }
        auto setblockedeventtypes_cb = kwidgetitemdelegate_setblockedeventtypes_callback;
        if (setblockedeventtypes_cb) {
            QWidget* cbval1 = widget;
            const QList<QEvent::Type>& types_ret = types;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* types_arr = static_cast<int*>(malloc(sizeof(int) * (types_ret.size())));
            for (qsizetype i = 0; i < types_ret.size(); ++i) {
                types_arr[i] = static_cast<int>(types_ret[i]);
            }
            libqt_list types_out;
            types_out.len = types_ret.size();
            types_out.data = static_cast<void*>(types_arr);
            libqt_list /* of int */ cbval2 = types_out;

            setblockedeventtypes_cb(this, cbval1, cbval2);
            free(types_arr);
            return;
        }
        KWidgetItemDelegate::setBlockedEventTypes(widget, types);
    }

    // Virtual method for C ABI access and custom callback
    QList<QEvent::Type> blockedEventTypes(QWidget* widget) const {
        if (kwidgetitemdelegate_blockedeventtypes_isbase) {
            kwidgetitemdelegate_blockedeventtypes_isbase = false;
            return KWidgetItemDelegate::blockedEventTypes(widget);
        }
        auto blockedeventtypes_cb = kwidgetitemdelegate_blockedeventtypes_callback;
        if (blockedeventtypes_cb) {
            QWidget* cbval1 = widget;

            libqt_list /* of int */ callback_ret = blockedeventtypes_cb(this, cbval1);
            QList<QEvent::Type> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QEvent::Type>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KWidgetItemDelegate::blockedEventTypes(widget);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwidgetitemdelegate_sender_isbase) {
            kwidgetitemdelegate_sender_isbase = false;
            return KWidgetItemDelegate::sender();
        }
        auto sender_cb = kwidgetitemdelegate_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KWidgetItemDelegate::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwidgetitemdelegate_sendersignalindex_isbase) {
            kwidgetitemdelegate_sendersignalindex_isbase = false;
            return KWidgetItemDelegate::senderSignalIndex();
        }
        auto sendersignalindex_cb = kwidgetitemdelegate_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KWidgetItemDelegate::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwidgetitemdelegate_receivers_isbase) {
            kwidgetitemdelegate_receivers_isbase = false;
            return KWidgetItemDelegate::receivers(signal);
        }
        auto receivers_cb = kwidgetitemdelegate_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KWidgetItemDelegate::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwidgetitemdelegate_issignalconnected_isbase) {
            kwidgetitemdelegate_issignalconnected_isbase = false;
            return KWidgetItemDelegate::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kwidgetitemdelegate_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KWidgetItemDelegate::isSignalConnected(signal);
    }

    // Friend functions
    friend libqt_list /* of QWidget* */ KWidgetItemDelegate_CreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
    friend libqt_list /* of QWidget* */ KWidgetItemDelegate_SuperCreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
    friend void KWidgetItemDelegate_UpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
    friend void KWidgetItemDelegate_SuperUpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
    friend void KWidgetItemDelegate_TimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
    friend void KWidgetItemDelegate_SuperTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
    friend void KWidgetItemDelegate_ChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
    friend void KWidgetItemDelegate_SuperChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
    friend void KWidgetItemDelegate_CustomEvent(KWidgetItemDelegate* self, QEvent* event);
    friend void KWidgetItemDelegate_SuperCustomEvent(KWidgetItemDelegate* self, QEvent* event);
    friend void KWidgetItemDelegate_ConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_SuperConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_DisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_SuperDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_SetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
    friend void KWidgetItemDelegate_SuperSetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
    friend libqt_list /* of int */ KWidgetItemDelegate_BlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
    friend libqt_list /* of int */ KWidgetItemDelegate_SuperBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
    friend QObject* KWidgetItemDelegate_Sender(const KWidgetItemDelegate* self);
    friend QObject* KWidgetItemDelegate_SuperSender(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_SenderSignalIndex(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_SuperSenderSignalIndex(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_Receivers(const KWidgetItemDelegate* self, const char* signal);
    friend int KWidgetItemDelegate_SuperReceivers(const KWidgetItemDelegate* self, const char* signal);
    friend bool KWidgetItemDelegate_IsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend bool KWidgetItemDelegate_SuperIsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
};

#endif
