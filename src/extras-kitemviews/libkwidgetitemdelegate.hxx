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
    using KWidgetItemDelegate_Metacall_Callback = int (*)(KWidgetItemDelegate*, int, int, void**);
    using KWidgetItemDelegate_CreateItemWidgets_Callback = QWidget** (*)(const KWidgetItemDelegate*, QModelIndex*);
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
    using KWidgetItemDelegate_PaintingRoles_Callback = int* (*)();
    using KWidgetItemDelegate_Event_Callback = bool (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_EventFilter_Callback = bool (*)(KWidgetItemDelegate*, QObject*, QEvent*);
    using KWidgetItemDelegate_TimerEvent_Callback = void (*)(KWidgetItemDelegate*, QTimerEvent*);
    using KWidgetItemDelegate_ChildEvent_Callback = void (*)(KWidgetItemDelegate*, QChildEvent*);
    using KWidgetItemDelegate_CustomEvent_Callback = void (*)(KWidgetItemDelegate*, QEvent*);
    using KWidgetItemDelegate_ConnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate_DisconnectNotify_Callback = void (*)(KWidgetItemDelegate*, QMetaMethod*);
    using KWidgetItemDelegate_SetBlockedEventTypes_Callback = void (*)(const KWidgetItemDelegate*, QWidget*, libqt_list /* of int */);
    using KWidgetItemDelegate_BlockedEventTypes_Callback = int* (*)(const KWidgetItemDelegate*, QWidget*);
    using KWidgetItemDelegate_Sender_Callback = QObject* (*)();
    using KWidgetItemDelegate_SenderSignalIndex_Callback = int (*)();
    using KWidgetItemDelegate_Receivers_Callback = int (*)(const KWidgetItemDelegate*, const char*);
    using KWidgetItemDelegate_IsSignalConnected_Callback = bool (*)(const KWidgetItemDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
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

    ~VirtualKWidgetItemDelegate() {
        kwidgetitemdelegate_metacall_callback = nullptr;
        kwidgetitemdelegate_createitemwidgets_callback = nullptr;
        kwidgetitemdelegate_updateitemwidgets_callback = nullptr;
        kwidgetitemdelegate_paint_callback = nullptr;
        kwidgetitemdelegate_sizehint_callback = nullptr;
        kwidgetitemdelegate_createeditor_callback = nullptr;
        kwidgetitemdelegate_destroyeditor_callback = nullptr;
        kwidgetitemdelegate_seteditordata_callback = nullptr;
        kwidgetitemdelegate_setmodeldata_callback = nullptr;
        kwidgetitemdelegate_updateeditorgeometry_callback = nullptr;
        kwidgetitemdelegate_editorevent_callback = nullptr;
        kwidgetitemdelegate_helpevent_callback = nullptr;
        kwidgetitemdelegate_paintingroles_callback = nullptr;
        kwidgetitemdelegate_event_callback = nullptr;
        kwidgetitemdelegate_eventfilter_callback = nullptr;
        kwidgetitemdelegate_timerevent_callback = nullptr;
        kwidgetitemdelegate_childevent_callback = nullptr;
        kwidgetitemdelegate_customevent_callback = nullptr;
        kwidgetitemdelegate_connectnotify_callback = nullptr;
        kwidgetitemdelegate_disconnectnotify_callback = nullptr;
        kwidgetitemdelegate_setblockedeventtypes_callback = nullptr;
        kwidgetitemdelegate_blockedeventtypes_callback = nullptr;
        kwidgetitemdelegate_sender_callback = nullptr;
        kwidgetitemdelegate_sendersignalindex_callback = nullptr;
        kwidgetitemdelegate_receivers_callback = nullptr;
        kwidgetitemdelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwidgetitemdelegate_metacall_isbase) {
            kwidgetitemdelegate_metacall_isbase = false;
            return KWidgetItemDelegate::qt_metacall(param1, param2, param3);
        } else if (kwidgetitemdelegate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kwidgetitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetItemDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> createItemWidgets(const QModelIndex& index) const override {
        if (kwidgetitemdelegate_createitemwidgets_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QWidget** callback_ret = kwidgetitemdelegate_createitemwidgets_callback(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateItemWidgets(const QList<QWidget*>& widgets, const QStyleOptionViewItem& option, const QPersistentModelIndex& index) const override {
        if (kwidgetitemdelegate_updateitemwidgets_callback != nullptr) {
            const QList<QWidget*>& widgets_ret = widgets;
            // Convert QList<> from C++ memory to manually-managed C memory
            QWidget** widgets_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (widgets_ret.size() + 1)));
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
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kwidgetitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_sizehint_callback != nullptr) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kwidgetitemdelegate_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_createeditor_isbase) {
            kwidgetitemdelegate_createeditor_isbase = false;
            return KWidgetItemDelegate::createEditor(parent, option, index);
        } else if (kwidgetitemdelegate_createeditor_callback != nullptr) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QWidget* callback_ret = kwidgetitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KWidgetItemDelegate::createEditor(parent, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_destroyeditor_isbase) {
            kwidgetitemdelegate_destroyeditor_isbase = false;
            KWidgetItemDelegate::destroyEditor(editor, index);
        } else if (kwidgetitemdelegate_destroyeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kwidgetitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
        } else {
            KWidgetItemDelegate::destroyEditor(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_seteditordata_isbase) {
            kwidgetitemdelegate_seteditordata_isbase = false;
            KWidgetItemDelegate::setEditorData(editor, index);
        } else if (kwidgetitemdelegate_seteditordata_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kwidgetitemdelegate_seteditordata_callback(this, cbval1, cbval2);
        } else {
            KWidgetItemDelegate::setEditorData(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_setmodeldata_isbase) {
            kwidgetitemdelegate_setmodeldata_isbase = false;
            KWidgetItemDelegate::setModelData(editor, model, index);
        } else if (kwidgetitemdelegate_setmodeldata_callback != nullptr) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kwidgetitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
        } else {
            KWidgetItemDelegate::setModelData(editor, model, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kwidgetitemdelegate_updateeditorgeometry_isbase) {
            kwidgetitemdelegate_updateeditorgeometry_isbase = false;
            KWidgetItemDelegate::updateEditorGeometry(editor, option, index);
        } else if (kwidgetitemdelegate_updateeditorgeometry_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kwidgetitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
        } else {
            KWidgetItemDelegate::updateEditorGeometry(editor, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_editorevent_isbase) {
            kwidgetitemdelegate_editorevent_isbase = false;
            return KWidgetItemDelegate::editorEvent(event, model, option, index);
        } else if (kwidgetitemdelegate_editorevent_callback != nullptr) {
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
        } else {
            return KWidgetItemDelegate::editorEvent(event, model, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kwidgetitemdelegate_helpevent_isbase) {
            kwidgetitemdelegate_helpevent_isbase = false;
            return KWidgetItemDelegate::helpEvent(event, view, option, index);
        } else if (kwidgetitemdelegate_helpevent_callback != nullptr) {
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
        } else {
            return KWidgetItemDelegate::helpEvent(event, view, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kwidgetitemdelegate_paintingroles_isbase) {
            kwidgetitemdelegate_paintingroles_isbase = false;
            return KWidgetItemDelegate::paintingRoles();
        } else if (kwidgetitemdelegate_paintingroles_callback != nullptr) {
            int* callback_ret = kwidgetitemdelegate_paintingroles_callback();
            QList<int> callback_ret_QList;
            for (int* ptr = callback_ret; *ptr != -1; ++ptr) {
                callback_ret_QList.push_back(*ptr);
            }
            return callback_ret_QList;
        } else {
            return KWidgetItemDelegate::paintingRoles();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwidgetitemdelegate_event_isbase) {
            kwidgetitemdelegate_event_isbase = false;
            return KWidgetItemDelegate::event(event);
        } else if (kwidgetitemdelegate_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kwidgetitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWidgetItemDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwidgetitemdelegate_eventfilter_isbase) {
            kwidgetitemdelegate_eventfilter_isbase = false;
            return KWidgetItemDelegate::eventFilter(watched, event);
        } else if (kwidgetitemdelegate_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kwidgetitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KWidgetItemDelegate::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwidgetitemdelegate_timerevent_isbase) {
            kwidgetitemdelegate_timerevent_isbase = false;
            KWidgetItemDelegate::timerEvent(event);
        } else if (kwidgetitemdelegate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kwidgetitemdelegate_timerevent_callback(this, cbval1);
        } else {
            KWidgetItemDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwidgetitemdelegate_childevent_isbase) {
            kwidgetitemdelegate_childevent_isbase = false;
            KWidgetItemDelegate::childEvent(event);
        } else if (kwidgetitemdelegate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kwidgetitemdelegate_childevent_callback(this, cbval1);
        } else {
            KWidgetItemDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwidgetitemdelegate_customevent_isbase) {
            kwidgetitemdelegate_customevent_isbase = false;
            KWidgetItemDelegate::customEvent(event);
        } else if (kwidgetitemdelegate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kwidgetitemdelegate_customevent_callback(this, cbval1);
        } else {
            KWidgetItemDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_connectnotify_isbase) {
            kwidgetitemdelegate_connectnotify_isbase = false;
            KWidgetItemDelegate::connectNotify(signal);
        } else if (kwidgetitemdelegate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwidgetitemdelegate_connectnotify_callback(this, cbval1);
        } else {
            KWidgetItemDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwidgetitemdelegate_disconnectnotify_isbase) {
            kwidgetitemdelegate_disconnectnotify_isbase = false;
            KWidgetItemDelegate::disconnectNotify(signal);
        } else if (kwidgetitemdelegate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwidgetitemdelegate_disconnectnotify_callback(this, cbval1);
        } else {
            KWidgetItemDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setBlockedEventTypes(QWidget* widget, const QList<QEvent::Type>& types) const {
        if (kwidgetitemdelegate_setblockedeventtypes_isbase) {
            kwidgetitemdelegate_setblockedeventtypes_isbase = false;
            KWidgetItemDelegate::setBlockedEventTypes(widget, types);
        } else if (kwidgetitemdelegate_setblockedeventtypes_callback != nullptr) {
            QWidget* cbval1 = widget;
            const QList<QEvent::Type>& types_ret = types;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* types_arr = static_cast<int*>(malloc(sizeof(int) * (types_ret.size() + 1)));
            for (qsizetype i = 0; i < types_ret.size(); ++i) {
                types_arr[i] = static_cast<int>(types_ret[i]);
            }
            libqt_list types_out;
            types_out.len = types_ret.size();
            types_out.data = static_cast<void*>(types_arr);
            libqt_list /* of int */ cbval2 = types_out;

            kwidgetitemdelegate_setblockedeventtypes_callback(this, cbval1, cbval2);
        } else {
            KWidgetItemDelegate::setBlockedEventTypes(widget, types);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QEvent::Type> blockedEventTypes(QWidget* widget) const {
        if (kwidgetitemdelegate_blockedeventtypes_isbase) {
            kwidgetitemdelegate_blockedeventtypes_isbase = false;
            return KWidgetItemDelegate::blockedEventTypes(widget);
        } else if (kwidgetitemdelegate_blockedeventtypes_callback != nullptr) {
            QWidget* cbval1 = widget;

            int* callback_ret = kwidgetitemdelegate_blockedeventtypes_callback(this, cbval1);
            QList<QEvent::Type> callback_ret_QList;
            for (int* ptr = callback_ret; *ptr != -1; ++ptr) {
                callback_ret_QList.push_back(static_cast<QEvent::Type>(*ptr));
            }
            return callback_ret_QList;
        } else {
            return KWidgetItemDelegate::blockedEventTypes(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwidgetitemdelegate_sender_isbase) {
            kwidgetitemdelegate_sender_isbase = false;
            return KWidgetItemDelegate::sender();
        } else if (kwidgetitemdelegate_sender_callback != nullptr) {
            QObject* callback_ret = kwidgetitemdelegate_sender_callback();
            return callback_ret;
        } else {
            return KWidgetItemDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwidgetitemdelegate_sendersignalindex_isbase) {
            kwidgetitemdelegate_sendersignalindex_isbase = false;
            return KWidgetItemDelegate::senderSignalIndex();
        } else if (kwidgetitemdelegate_sendersignalindex_callback != nullptr) {
            int callback_ret = kwidgetitemdelegate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetItemDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwidgetitemdelegate_receivers_isbase) {
            kwidgetitemdelegate_receivers_isbase = false;
            return KWidgetItemDelegate::receivers(signal);
        } else if (kwidgetitemdelegate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kwidgetitemdelegate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetItemDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwidgetitemdelegate_issignalconnected_isbase) {
            kwidgetitemdelegate_issignalconnected_isbase = false;
            return KWidgetItemDelegate::isSignalConnected(signal);
        } else if (kwidgetitemdelegate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kwidgetitemdelegate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWidgetItemDelegate::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend libqt_list /* of QWidget* */ KWidgetItemDelegate_CreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
    friend libqt_list /* of QWidget* */ KWidgetItemDelegate_QBaseCreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
    friend void KWidgetItemDelegate_UpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
    friend void KWidgetItemDelegate_QBaseUpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
    friend void KWidgetItemDelegate_TimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
    friend void KWidgetItemDelegate_QBaseTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
    friend void KWidgetItemDelegate_ChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
    friend void KWidgetItemDelegate_QBaseChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
    friend void KWidgetItemDelegate_CustomEvent(KWidgetItemDelegate* self, QEvent* event);
    friend void KWidgetItemDelegate_QBaseCustomEvent(KWidgetItemDelegate* self, QEvent* event);
    friend void KWidgetItemDelegate_ConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_QBaseConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_DisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_QBaseDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend void KWidgetItemDelegate_SetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
    friend void KWidgetItemDelegate_QBaseSetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
    friend libqt_list /* of int */ KWidgetItemDelegate_BlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
    friend libqt_list /* of int */ KWidgetItemDelegate_QBaseBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
    friend QObject* KWidgetItemDelegate_Sender(const KWidgetItemDelegate* self);
    friend QObject* KWidgetItemDelegate_QBaseSender(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_SenderSignalIndex(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_QBaseSenderSignalIndex(const KWidgetItemDelegate* self);
    friend int KWidgetItemDelegate_Receivers(const KWidgetItemDelegate* self, const char* signal);
    friend int KWidgetItemDelegate_QBaseReceivers(const KWidgetItemDelegate* self, const char* signal);
    friend bool KWidgetItemDelegate_IsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
    friend bool KWidgetItemDelegate_QBaseIsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
};

#endif
