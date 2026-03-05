#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKEXTENDABLEITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKEXTENDABLEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KExtendableItemDelegate so that we can call protected methods
class VirtualKExtendableItemDelegate final : public KExtendableItemDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKExtendableItemDelegate = true;

    // Virtual class public types (including callbacks)
    using KExtendableItemDelegate_MetaObject_Callback = QMetaObject* (*)();
    using KExtendableItemDelegate_Metacast_Callback = void* (*)(KExtendableItemDelegate*, const char*);
    using KExtendableItemDelegate_Metacall_Callback = int (*)(KExtendableItemDelegate*, int, int, void**);
    using KExtendableItemDelegate_SizeHint_Callback = QSize* (*)(const KExtendableItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_Paint_Callback = void (*)(const KExtendableItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_UpdateExtenderGeometry_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_CreateEditor_Callback = QWidget* (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_SetEditorData_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QModelIndex*);
    using KExtendableItemDelegate_SetModelData_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using KExtendableItemDelegate_UpdateEditorGeometry_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_DisplayText_Callback = const char* (*)(const KExtendableItemDelegate*, QVariant*, QLocale*);
    using KExtendableItemDelegate_InitStyleOption_Callback = void (*)(const KExtendableItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_EventFilter_Callback = bool (*)(KExtendableItemDelegate*, QObject*, QEvent*);
    using KExtendableItemDelegate_EditorEvent_Callback = bool (*)(KExtendableItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_DestroyEditor_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QModelIndex*);
    using KExtendableItemDelegate_HelpEvent_Callback = bool (*)(KExtendableItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)();
    using KExtendableItemDelegate_Event_Callback = bool (*)(KExtendableItemDelegate*, QEvent*);
    using KExtendableItemDelegate_TimerEvent_Callback = void (*)(KExtendableItemDelegate*, QTimerEvent*);
    using KExtendableItemDelegate_ChildEvent_Callback = void (*)(KExtendableItemDelegate*, QChildEvent*);
    using KExtendableItemDelegate_CustomEvent_Callback = void (*)(KExtendableItemDelegate*, QEvent*);
    using KExtendableItemDelegate_ConnectNotify_Callback = void (*)(KExtendableItemDelegate*, QMetaMethod*);
    using KExtendableItemDelegate_DisconnectNotify_Callback = void (*)(KExtendableItemDelegate*, QMetaMethod*);
    using KExtendableItemDelegate_ExtenderRect_Callback = QRect* (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_SetExtendPixmap_Callback = void (*)(KExtendableItemDelegate*, QPixmap*);
    using KExtendableItemDelegate_SetContractPixmap_Callback = void (*)(KExtendableItemDelegate*, QPixmap*);
    using KExtendableItemDelegate_ExtendPixmap_Callback = QPixmap* (*)();
    using KExtendableItemDelegate_ContractPixmap_Callback = QPixmap* (*)();
    using KExtendableItemDelegate_Sender_Callback = QObject* (*)();
    using KExtendableItemDelegate_SenderSignalIndex_Callback = int (*)();
    using KExtendableItemDelegate_Receivers_Callback = int (*)(const KExtendableItemDelegate*, const char*);
    using KExtendableItemDelegate_IsSignalConnected_Callback = bool (*)(const KExtendableItemDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    KExtendableItemDelegate_MetaObject_Callback kextendableitemdelegate_metaobject_callback = nullptr;
    KExtendableItemDelegate_Metacast_Callback kextendableitemdelegate_metacast_callback = nullptr;
    KExtendableItemDelegate_Metacall_Callback kextendableitemdelegate_metacall_callback = nullptr;
    KExtendableItemDelegate_SizeHint_Callback kextendableitemdelegate_sizehint_callback = nullptr;
    KExtendableItemDelegate_Paint_Callback kextendableitemdelegate_paint_callback = nullptr;
    KExtendableItemDelegate_UpdateExtenderGeometry_Callback kextendableitemdelegate_updateextendergeometry_callback = nullptr;
    KExtendableItemDelegate_CreateEditor_Callback kextendableitemdelegate_createeditor_callback = nullptr;
    KExtendableItemDelegate_SetEditorData_Callback kextendableitemdelegate_seteditordata_callback = nullptr;
    KExtendableItemDelegate_SetModelData_Callback kextendableitemdelegate_setmodeldata_callback = nullptr;
    KExtendableItemDelegate_UpdateEditorGeometry_Callback kextendableitemdelegate_updateeditorgeometry_callback = nullptr;
    KExtendableItemDelegate_DisplayText_Callback kextendableitemdelegate_displaytext_callback = nullptr;
    KExtendableItemDelegate_InitStyleOption_Callback kextendableitemdelegate_initstyleoption_callback = nullptr;
    KExtendableItemDelegate_EventFilter_Callback kextendableitemdelegate_eventfilter_callback = nullptr;
    KExtendableItemDelegate_EditorEvent_Callback kextendableitemdelegate_editorevent_callback = nullptr;
    KExtendableItemDelegate_DestroyEditor_Callback kextendableitemdelegate_destroyeditor_callback = nullptr;
    KExtendableItemDelegate_HelpEvent_Callback kextendableitemdelegate_helpevent_callback = nullptr;
    KExtendableItemDelegate_PaintingRoles_Callback kextendableitemdelegate_paintingroles_callback = nullptr;
    KExtendableItemDelegate_Event_Callback kextendableitemdelegate_event_callback = nullptr;
    KExtendableItemDelegate_TimerEvent_Callback kextendableitemdelegate_timerevent_callback = nullptr;
    KExtendableItemDelegate_ChildEvent_Callback kextendableitemdelegate_childevent_callback = nullptr;
    KExtendableItemDelegate_CustomEvent_Callback kextendableitemdelegate_customevent_callback = nullptr;
    KExtendableItemDelegate_ConnectNotify_Callback kextendableitemdelegate_connectnotify_callback = nullptr;
    KExtendableItemDelegate_DisconnectNotify_Callback kextendableitemdelegate_disconnectnotify_callback = nullptr;
    KExtendableItemDelegate_ExtenderRect_Callback kextendableitemdelegate_extenderrect_callback = nullptr;
    KExtendableItemDelegate_SetExtendPixmap_Callback kextendableitemdelegate_setextendpixmap_callback = nullptr;
    KExtendableItemDelegate_SetContractPixmap_Callback kextendableitemdelegate_setcontractpixmap_callback = nullptr;
    KExtendableItemDelegate_ExtendPixmap_Callback kextendableitemdelegate_extendpixmap_callback = nullptr;
    KExtendableItemDelegate_ContractPixmap_Callback kextendableitemdelegate_contractpixmap_callback = nullptr;
    KExtendableItemDelegate_Sender_Callback kextendableitemdelegate_sender_callback = nullptr;
    KExtendableItemDelegate_SenderSignalIndex_Callback kextendableitemdelegate_sendersignalindex_callback = nullptr;
    KExtendableItemDelegate_Receivers_Callback kextendableitemdelegate_receivers_callback = nullptr;
    KExtendableItemDelegate_IsSignalConnected_Callback kextendableitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kextendableitemdelegate_metaobject_isbase = false;
    mutable bool kextendableitemdelegate_metacast_isbase = false;
    mutable bool kextendableitemdelegate_metacall_isbase = false;
    mutable bool kextendableitemdelegate_sizehint_isbase = false;
    mutable bool kextendableitemdelegate_paint_isbase = false;
    mutable bool kextendableitemdelegate_updateextendergeometry_isbase = false;
    mutable bool kextendableitemdelegate_createeditor_isbase = false;
    mutable bool kextendableitemdelegate_seteditordata_isbase = false;
    mutable bool kextendableitemdelegate_setmodeldata_isbase = false;
    mutable bool kextendableitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool kextendableitemdelegate_displaytext_isbase = false;
    mutable bool kextendableitemdelegate_initstyleoption_isbase = false;
    mutable bool kextendableitemdelegate_eventfilter_isbase = false;
    mutable bool kextendableitemdelegate_editorevent_isbase = false;
    mutable bool kextendableitemdelegate_destroyeditor_isbase = false;
    mutable bool kextendableitemdelegate_helpevent_isbase = false;
    mutable bool kextendableitemdelegate_paintingroles_isbase = false;
    mutable bool kextendableitemdelegate_event_isbase = false;
    mutable bool kextendableitemdelegate_timerevent_isbase = false;
    mutable bool kextendableitemdelegate_childevent_isbase = false;
    mutable bool kextendableitemdelegate_customevent_isbase = false;
    mutable bool kextendableitemdelegate_connectnotify_isbase = false;
    mutable bool kextendableitemdelegate_disconnectnotify_isbase = false;
    mutable bool kextendableitemdelegate_extenderrect_isbase = false;
    mutable bool kextendableitemdelegate_setextendpixmap_isbase = false;
    mutable bool kextendableitemdelegate_setcontractpixmap_isbase = false;
    mutable bool kextendableitemdelegate_extendpixmap_isbase = false;
    mutable bool kextendableitemdelegate_contractpixmap_isbase = false;
    mutable bool kextendableitemdelegate_sender_isbase = false;
    mutable bool kextendableitemdelegate_sendersignalindex_isbase = false;
    mutable bool kextendableitemdelegate_receivers_isbase = false;
    mutable bool kextendableitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualKExtendableItemDelegate(QAbstractItemView* parent) : KExtendableItemDelegate(parent) {};

    // Callback setters
    inline void setKExtendableItemDelegate_MetaObject_Callback(KExtendableItemDelegate_MetaObject_Callback cb) { kextendableitemdelegate_metaobject_callback = cb; }
    inline void setKExtendableItemDelegate_Metacast_Callback(KExtendableItemDelegate_Metacast_Callback cb) { kextendableitemdelegate_metacast_callback = cb; }
    inline void setKExtendableItemDelegate_Metacall_Callback(KExtendableItemDelegate_Metacall_Callback cb) { kextendableitemdelegate_metacall_callback = cb; }
    inline void setKExtendableItemDelegate_SizeHint_Callback(KExtendableItemDelegate_SizeHint_Callback cb) { kextendableitemdelegate_sizehint_callback = cb; }
    inline void setKExtendableItemDelegate_Paint_Callback(KExtendableItemDelegate_Paint_Callback cb) { kextendableitemdelegate_paint_callback = cb; }
    inline void setKExtendableItemDelegate_UpdateExtenderGeometry_Callback(KExtendableItemDelegate_UpdateExtenderGeometry_Callback cb) { kextendableitemdelegate_updateextendergeometry_callback = cb; }
    inline void setKExtendableItemDelegate_CreateEditor_Callback(KExtendableItemDelegate_CreateEditor_Callback cb) { kextendableitemdelegate_createeditor_callback = cb; }
    inline void setKExtendableItemDelegate_SetEditorData_Callback(KExtendableItemDelegate_SetEditorData_Callback cb) { kextendableitemdelegate_seteditordata_callback = cb; }
    inline void setKExtendableItemDelegate_SetModelData_Callback(KExtendableItemDelegate_SetModelData_Callback cb) { kextendableitemdelegate_setmodeldata_callback = cb; }
    inline void setKExtendableItemDelegate_UpdateEditorGeometry_Callback(KExtendableItemDelegate_UpdateEditorGeometry_Callback cb) { kextendableitemdelegate_updateeditorgeometry_callback = cb; }
    inline void setKExtendableItemDelegate_DisplayText_Callback(KExtendableItemDelegate_DisplayText_Callback cb) { kextendableitemdelegate_displaytext_callback = cb; }
    inline void setKExtendableItemDelegate_InitStyleOption_Callback(KExtendableItemDelegate_InitStyleOption_Callback cb) { kextendableitemdelegate_initstyleoption_callback = cb; }
    inline void setKExtendableItemDelegate_EventFilter_Callback(KExtendableItemDelegate_EventFilter_Callback cb) { kextendableitemdelegate_eventfilter_callback = cb; }
    inline void setKExtendableItemDelegate_EditorEvent_Callback(KExtendableItemDelegate_EditorEvent_Callback cb) { kextendableitemdelegate_editorevent_callback = cb; }
    inline void setKExtendableItemDelegate_DestroyEditor_Callback(KExtendableItemDelegate_DestroyEditor_Callback cb) { kextendableitemdelegate_destroyeditor_callback = cb; }
    inline void setKExtendableItemDelegate_HelpEvent_Callback(KExtendableItemDelegate_HelpEvent_Callback cb) { kextendableitemdelegate_helpevent_callback = cb; }
    inline void setKExtendableItemDelegate_PaintingRoles_Callback(KExtendableItemDelegate_PaintingRoles_Callback cb) { kextendableitemdelegate_paintingroles_callback = cb; }
    inline void setKExtendableItemDelegate_Event_Callback(KExtendableItemDelegate_Event_Callback cb) { kextendableitemdelegate_event_callback = cb; }
    inline void setKExtendableItemDelegate_TimerEvent_Callback(KExtendableItemDelegate_TimerEvent_Callback cb) { kextendableitemdelegate_timerevent_callback = cb; }
    inline void setKExtendableItemDelegate_ChildEvent_Callback(KExtendableItemDelegate_ChildEvent_Callback cb) { kextendableitemdelegate_childevent_callback = cb; }
    inline void setKExtendableItemDelegate_CustomEvent_Callback(KExtendableItemDelegate_CustomEvent_Callback cb) { kextendableitemdelegate_customevent_callback = cb; }
    inline void setKExtendableItemDelegate_ConnectNotify_Callback(KExtendableItemDelegate_ConnectNotify_Callback cb) { kextendableitemdelegate_connectnotify_callback = cb; }
    inline void setKExtendableItemDelegate_DisconnectNotify_Callback(KExtendableItemDelegate_DisconnectNotify_Callback cb) { kextendableitemdelegate_disconnectnotify_callback = cb; }
    inline void setKExtendableItemDelegate_ExtenderRect_Callback(KExtendableItemDelegate_ExtenderRect_Callback cb) { kextendableitemdelegate_extenderrect_callback = cb; }
    inline void setKExtendableItemDelegate_SetExtendPixmap_Callback(KExtendableItemDelegate_SetExtendPixmap_Callback cb) { kextendableitemdelegate_setextendpixmap_callback = cb; }
    inline void setKExtendableItemDelegate_SetContractPixmap_Callback(KExtendableItemDelegate_SetContractPixmap_Callback cb) { kextendableitemdelegate_setcontractpixmap_callback = cb; }
    inline void setKExtendableItemDelegate_ExtendPixmap_Callback(KExtendableItemDelegate_ExtendPixmap_Callback cb) { kextendableitemdelegate_extendpixmap_callback = cb; }
    inline void setKExtendableItemDelegate_ContractPixmap_Callback(KExtendableItemDelegate_ContractPixmap_Callback cb) { kextendableitemdelegate_contractpixmap_callback = cb; }
    inline void setKExtendableItemDelegate_Sender_Callback(KExtendableItemDelegate_Sender_Callback cb) { kextendableitemdelegate_sender_callback = cb; }
    inline void setKExtendableItemDelegate_SenderSignalIndex_Callback(KExtendableItemDelegate_SenderSignalIndex_Callback cb) { kextendableitemdelegate_sendersignalindex_callback = cb; }
    inline void setKExtendableItemDelegate_Receivers_Callback(KExtendableItemDelegate_Receivers_Callback cb) { kextendableitemdelegate_receivers_callback = cb; }
    inline void setKExtendableItemDelegate_IsSignalConnected_Callback(KExtendableItemDelegate_IsSignalConnected_Callback cb) { kextendableitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKExtendableItemDelegate_MetaObject_IsBase(bool value) const { kextendableitemdelegate_metaobject_isbase = value; }
    inline void setKExtendableItemDelegate_Metacast_IsBase(bool value) const { kextendableitemdelegate_metacast_isbase = value; }
    inline void setKExtendableItemDelegate_Metacall_IsBase(bool value) const { kextendableitemdelegate_metacall_isbase = value; }
    inline void setKExtendableItemDelegate_SizeHint_IsBase(bool value) const { kextendableitemdelegate_sizehint_isbase = value; }
    inline void setKExtendableItemDelegate_Paint_IsBase(bool value) const { kextendableitemdelegate_paint_isbase = value; }
    inline void setKExtendableItemDelegate_UpdateExtenderGeometry_IsBase(bool value) const { kextendableitemdelegate_updateextendergeometry_isbase = value; }
    inline void setKExtendableItemDelegate_CreateEditor_IsBase(bool value) const { kextendableitemdelegate_createeditor_isbase = value; }
    inline void setKExtendableItemDelegate_SetEditorData_IsBase(bool value) const { kextendableitemdelegate_seteditordata_isbase = value; }
    inline void setKExtendableItemDelegate_SetModelData_IsBase(bool value) const { kextendableitemdelegate_setmodeldata_isbase = value; }
    inline void setKExtendableItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { kextendableitemdelegate_updateeditorgeometry_isbase = value; }
    inline void setKExtendableItemDelegate_DisplayText_IsBase(bool value) const { kextendableitemdelegate_displaytext_isbase = value; }
    inline void setKExtendableItemDelegate_InitStyleOption_IsBase(bool value) const { kextendableitemdelegate_initstyleoption_isbase = value; }
    inline void setKExtendableItemDelegate_EventFilter_IsBase(bool value) const { kextendableitemdelegate_eventfilter_isbase = value; }
    inline void setKExtendableItemDelegate_EditorEvent_IsBase(bool value) const { kextendableitemdelegate_editorevent_isbase = value; }
    inline void setKExtendableItemDelegate_DestroyEditor_IsBase(bool value) const { kextendableitemdelegate_destroyeditor_isbase = value; }
    inline void setKExtendableItemDelegate_HelpEvent_IsBase(bool value) const { kextendableitemdelegate_helpevent_isbase = value; }
    inline void setKExtendableItemDelegate_PaintingRoles_IsBase(bool value) const { kextendableitemdelegate_paintingroles_isbase = value; }
    inline void setKExtendableItemDelegate_Event_IsBase(bool value) const { kextendableitemdelegate_event_isbase = value; }
    inline void setKExtendableItemDelegate_TimerEvent_IsBase(bool value) const { kextendableitemdelegate_timerevent_isbase = value; }
    inline void setKExtendableItemDelegate_ChildEvent_IsBase(bool value) const { kextendableitemdelegate_childevent_isbase = value; }
    inline void setKExtendableItemDelegate_CustomEvent_IsBase(bool value) const { kextendableitemdelegate_customevent_isbase = value; }
    inline void setKExtendableItemDelegate_ConnectNotify_IsBase(bool value) const { kextendableitemdelegate_connectnotify_isbase = value; }
    inline void setKExtendableItemDelegate_DisconnectNotify_IsBase(bool value) const { kextendableitemdelegate_disconnectnotify_isbase = value; }
    inline void setKExtendableItemDelegate_ExtenderRect_IsBase(bool value) const { kextendableitemdelegate_extenderrect_isbase = value; }
    inline void setKExtendableItemDelegate_SetExtendPixmap_IsBase(bool value) const { kextendableitemdelegate_setextendpixmap_isbase = value; }
    inline void setKExtendableItemDelegate_SetContractPixmap_IsBase(bool value) const { kextendableitemdelegate_setcontractpixmap_isbase = value; }
    inline void setKExtendableItemDelegate_ExtendPixmap_IsBase(bool value) const { kextendableitemdelegate_extendpixmap_isbase = value; }
    inline void setKExtendableItemDelegate_ContractPixmap_IsBase(bool value) const { kextendableitemdelegate_contractpixmap_isbase = value; }
    inline void setKExtendableItemDelegate_Sender_IsBase(bool value) const { kextendableitemdelegate_sender_isbase = value; }
    inline void setKExtendableItemDelegate_SenderSignalIndex_IsBase(bool value) const { kextendableitemdelegate_sendersignalindex_isbase = value; }
    inline void setKExtendableItemDelegate_Receivers_IsBase(bool value) const { kextendableitemdelegate_receivers_isbase = value; }
    inline void setKExtendableItemDelegate_IsSignalConnected_IsBase(bool value) const { kextendableitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kextendableitemdelegate_metaobject_isbase) {
            kextendableitemdelegate_metaobject_isbase = false;
            return KExtendableItemDelegate::metaObject();
        }
        auto metaobject_cb = kextendableitemdelegate_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KExtendableItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kextendableitemdelegate_metacast_isbase) {
            kextendableitemdelegate_metacast_isbase = false;
            return KExtendableItemDelegate::qt_metacast(param1);
        }
        auto metacast_cb = kextendableitemdelegate_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KExtendableItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kextendableitemdelegate_metacall_isbase) {
            kextendableitemdelegate_metacall_isbase = false;
            return KExtendableItemDelegate::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kextendableitemdelegate_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KExtendableItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_sizehint_isbase) {
            kextendableitemdelegate_sizehint_isbase = false;
            return KExtendableItemDelegate::sizeHint(option, index);
        }
        auto sizehint_cb = kextendableitemdelegate_sizehint_callback;
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
        return KExtendableItemDelegate::sizeHint(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_paint_isbase) {
            kextendableitemdelegate_paint_isbase = false;
            KExtendableItemDelegate::paint(painter, option, index);
            return;
        }
        auto paint_cb = kextendableitemdelegate_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::paint(painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateExtenderGeometry(QWidget* extender, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_updateextendergeometry_isbase) {
            kextendableitemdelegate_updateextendergeometry_isbase = false;
            KExtendableItemDelegate::updateExtenderGeometry(extender, option, index);
            return;
        }
        auto updateextendergeometry_cb = kextendableitemdelegate_updateextendergeometry_callback;
        if (updateextendergeometry_cb) {
            QWidget* cbval1 = extender;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            updateextendergeometry_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::updateExtenderGeometry(extender, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_createeditor_isbase) {
            kextendableitemdelegate_createeditor_isbase = false;
            return KExtendableItemDelegate::createEditor(parent, option, index);
        }
        auto createeditor_cb = kextendableitemdelegate_createeditor_callback;
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
        return KExtendableItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kextendableitemdelegate_seteditordata_isbase) {
            kextendableitemdelegate_seteditordata_isbase = false;
            KExtendableItemDelegate::setEditorData(editor, index);
            return;
        }
        auto seteditordata_cb = kextendableitemdelegate_seteditordata_callback;
        if (seteditordata_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            seteditordata_cb(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kextendableitemdelegate_setmodeldata_isbase) {
            kextendableitemdelegate_setmodeldata_isbase = false;
            KExtendableItemDelegate::setModelData(editor, model, index);
            return;
        }
        auto setmodeldata_cb = kextendableitemdelegate_setmodeldata_callback;
        if (setmodeldata_cb) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            setmodeldata_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_updateeditorgeometry_isbase) {
            kextendableitemdelegate_updateeditorgeometry_isbase = false;
            KExtendableItemDelegate::updateEditorGeometry(editor, option, index);
            return;
        }
        auto updateeditorgeometry_cb = kextendableitemdelegate_updateeditorgeometry_callback;
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
        KExtendableItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
        if (kextendableitemdelegate_displaytext_isbase) {
            kextendableitemdelegate_displaytext_isbase = false;
            return KExtendableItemDelegate::displayText(value, locale);
        }
        auto displaytext_cb = kextendableitemdelegate_displaytext_callback;
        if (displaytext_cb) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval2 = const_cast<QLocale*>(&locale_ret);

            const char* callback_ret = displaytext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KExtendableItemDelegate::displayText(value, locale);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_initstyleoption_isbase) {
            kextendableitemdelegate_initstyleoption_isbase = false;
            KExtendableItemDelegate::initStyleOption(option, index);
            return;
        }
        auto initstyleoption_cb = kextendableitemdelegate_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionViewItem* cbval1 = option;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            initstyleoption_cb(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::initStyleOption(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kextendableitemdelegate_eventfilter_isbase) {
            kextendableitemdelegate_eventfilter_isbase = false;
            return KExtendableItemDelegate::eventFilter(object, event);
        }
        auto eventfilter_cb = kextendableitemdelegate_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KExtendableItemDelegate::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kextendableitemdelegate_editorevent_isbase) {
            kextendableitemdelegate_editorevent_isbase = false;
            return KExtendableItemDelegate::editorEvent(event, model, option, index);
        }
        auto editorevent_cb = kextendableitemdelegate_editorevent_callback;
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
        return KExtendableItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kextendableitemdelegate_destroyeditor_isbase) {
            kextendableitemdelegate_destroyeditor_isbase = false;
            KExtendableItemDelegate::destroyEditor(editor, index);
            return;
        }
        auto destroyeditor_cb = kextendableitemdelegate_destroyeditor_callback;
        if (destroyeditor_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            destroyeditor_cb(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kextendableitemdelegate_helpevent_isbase) {
            kextendableitemdelegate_helpevent_isbase = false;
            return KExtendableItemDelegate::helpEvent(event, view, option, index);
        }
        auto helpevent_cb = kextendableitemdelegate_helpevent_callback;
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
        return KExtendableItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kextendableitemdelegate_paintingroles_isbase) {
            kextendableitemdelegate_paintingroles_isbase = false;
            return KExtendableItemDelegate::paintingRoles();
        }
        auto paintingroles_cb = kextendableitemdelegate_paintingroles_callback;
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
        return KExtendableItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kextendableitemdelegate_event_isbase) {
            kextendableitemdelegate_event_isbase = false;
            return KExtendableItemDelegate::event(event);
        }
        auto event_cb = kextendableitemdelegate_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KExtendableItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kextendableitemdelegate_timerevent_isbase) {
            kextendableitemdelegate_timerevent_isbase = false;
            KExtendableItemDelegate::timerEvent(event);
            return;
        }
        auto timerevent_cb = kextendableitemdelegate_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kextendableitemdelegate_childevent_isbase) {
            kextendableitemdelegate_childevent_isbase = false;
            KExtendableItemDelegate::childEvent(event);
            return;
        }
        auto childevent_cb = kextendableitemdelegate_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kextendableitemdelegate_customevent_isbase) {
            kextendableitemdelegate_customevent_isbase = false;
            KExtendableItemDelegate::customEvent(event);
            return;
        }
        auto customevent_cb = kextendableitemdelegate_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kextendableitemdelegate_connectnotify_isbase) {
            kextendableitemdelegate_connectnotify_isbase = false;
            KExtendableItemDelegate::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kextendableitemdelegate_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kextendableitemdelegate_disconnectnotify_isbase) {
            kextendableitemdelegate_disconnectnotify_isbase = false;
            KExtendableItemDelegate::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kextendableitemdelegate_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QRect extenderRect(QWidget* extender, const QStyleOptionViewItem& option, const QModelIndex& index) const {
        if (kextendableitemdelegate_extenderrect_isbase) {
            kextendableitemdelegate_extenderrect_isbase = false;
            return KExtendableItemDelegate::extenderRect(extender, option, index);
        }
        auto extenderrect_cb = kextendableitemdelegate_extenderrect_callback;
        if (extenderrect_cb) {
            QWidget* cbval1 = extender;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = extenderrect_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KExtendableItemDelegate::extenderRect(extender, option, index);
    }

    // Virtual method for C ABI access and custom callback
    void setExtendPixmap(const QPixmap& pixmap) {
        if (kextendableitemdelegate_setextendpixmap_isbase) {
            kextendableitemdelegate_setextendpixmap_isbase = false;
            KExtendableItemDelegate::setExtendPixmap(pixmap);
            return;
        }
        auto setextendpixmap_cb = kextendableitemdelegate_setextendpixmap_callback;
        if (setextendpixmap_cb) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);

            setextendpixmap_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::setExtendPixmap(pixmap);
    }

    // Virtual method for C ABI access and custom callback
    void setContractPixmap(const QPixmap& pixmap) {
        if (kextendableitemdelegate_setcontractpixmap_isbase) {
            kextendableitemdelegate_setcontractpixmap_isbase = false;
            KExtendableItemDelegate::setContractPixmap(pixmap);
            return;
        }
        auto setcontractpixmap_cb = kextendableitemdelegate_setcontractpixmap_callback;
        if (setcontractpixmap_cb) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);

            setcontractpixmap_cb(this, cbval1);
            return;
        }
        KExtendableItemDelegate::setContractPixmap(pixmap);
    }

    // Virtual method for C ABI access and custom callback
    QPixmap extendPixmap() {
        if (kextendableitemdelegate_extendpixmap_isbase) {
            kextendableitemdelegate_extendpixmap_isbase = false;
            return KExtendableItemDelegate::extendPixmap();
        }
        auto extendpixmap_cb = kextendableitemdelegate_extendpixmap_callback;
        if (extendpixmap_cb) {
            QPixmap* callback_ret = extendpixmap_cb();
            return *callback_ret;
        }
        return KExtendableItemDelegate::extendPixmap();
    }

    // Virtual method for C ABI access and custom callback
    QPixmap contractPixmap() {
        if (kextendableitemdelegate_contractpixmap_isbase) {
            kextendableitemdelegate_contractpixmap_isbase = false;
            return KExtendableItemDelegate::contractPixmap();
        }
        auto contractpixmap_cb = kextendableitemdelegate_contractpixmap_callback;
        if (contractpixmap_cb) {
            QPixmap* callback_ret = contractpixmap_cb();
            return *callback_ret;
        }
        return KExtendableItemDelegate::contractPixmap();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kextendableitemdelegate_sender_isbase) {
            kextendableitemdelegate_sender_isbase = false;
            return KExtendableItemDelegate::sender();
        }
        auto sender_cb = kextendableitemdelegate_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KExtendableItemDelegate::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kextendableitemdelegate_sendersignalindex_isbase) {
            kextendableitemdelegate_sendersignalindex_isbase = false;
            return KExtendableItemDelegate::senderSignalIndex();
        }
        auto sendersignalindex_cb = kextendableitemdelegate_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KExtendableItemDelegate::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kextendableitemdelegate_receivers_isbase) {
            kextendableitemdelegate_receivers_isbase = false;
            return KExtendableItemDelegate::receivers(signal);
        }
        auto receivers_cb = kextendableitemdelegate_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KExtendableItemDelegate::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kextendableitemdelegate_issignalconnected_isbase) {
            kextendableitemdelegate_issignalconnected_isbase = false;
            return KExtendableItemDelegate::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kextendableitemdelegate_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KExtendableItemDelegate::isSignalConnected(signal);
    }

    // Friend functions
    friend void KExtendableItemDelegate_InitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
    friend void KExtendableItemDelegate_SuperInitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
    friend bool KExtendableItemDelegate_EventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event);
    friend bool KExtendableItemDelegate_SuperEventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event);
    friend bool KExtendableItemDelegate_EditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend bool KExtendableItemDelegate_SuperEditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend void KExtendableItemDelegate_TimerEvent(KExtendableItemDelegate* self, QTimerEvent* event);
    friend void KExtendableItemDelegate_SuperTimerEvent(KExtendableItemDelegate* self, QTimerEvent* event);
    friend void KExtendableItemDelegate_ChildEvent(KExtendableItemDelegate* self, QChildEvent* event);
    friend void KExtendableItemDelegate_SuperChildEvent(KExtendableItemDelegate* self, QChildEvent* event);
    friend void KExtendableItemDelegate_CustomEvent(KExtendableItemDelegate* self, QEvent* event);
    friend void KExtendableItemDelegate_SuperCustomEvent(KExtendableItemDelegate* self, QEvent* event);
    friend void KExtendableItemDelegate_ConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend void KExtendableItemDelegate_SuperConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend void KExtendableItemDelegate_DisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend void KExtendableItemDelegate_SuperDisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend QRect* KExtendableItemDelegate_ExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend QRect* KExtendableItemDelegate_SuperExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend void KExtendableItemDelegate_SetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
    friend void KExtendableItemDelegate_SuperSetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
    friend void KExtendableItemDelegate_SetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
    friend void KExtendableItemDelegate_SuperSetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
    friend QPixmap* KExtendableItemDelegate_ExtendPixmap(KExtendableItemDelegate* self);
    friend QPixmap* KExtendableItemDelegate_SuperExtendPixmap(KExtendableItemDelegate* self);
    friend QPixmap* KExtendableItemDelegate_ContractPixmap(KExtendableItemDelegate* self);
    friend QPixmap* KExtendableItemDelegate_SuperContractPixmap(KExtendableItemDelegate* self);
    friend QObject* KExtendableItemDelegate_Sender(const KExtendableItemDelegate* self);
    friend QObject* KExtendableItemDelegate_SuperSender(const KExtendableItemDelegate* self);
    friend int KExtendableItemDelegate_SenderSignalIndex(const KExtendableItemDelegate* self);
    friend int KExtendableItemDelegate_SuperSenderSignalIndex(const KExtendableItemDelegate* self);
    friend int KExtendableItemDelegate_Receivers(const KExtendableItemDelegate* self, const char* signal);
    friend int KExtendableItemDelegate_SuperReceivers(const KExtendableItemDelegate* self, const char* signal);
    friend bool KExtendableItemDelegate_IsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend bool KExtendableItemDelegate_SuperIsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal);
};

#endif
