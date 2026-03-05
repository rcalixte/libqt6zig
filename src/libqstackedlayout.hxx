#pragma once
#ifndef SRCC_LIBVIRTUALQSTACKEDLAYOUT_H
#define SRCC_LIBVIRTUALQSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedLayout so that we can call protected methods
class VirtualQStackedLayout final : public QStackedLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQStackedLayout = true;

    // Virtual class public types (including callbacks)
    using QStackedLayout_MetaObject_Callback = QMetaObject* (*)();
    using QStackedLayout_Metacast_Callback = void* (*)(QStackedLayout*, const char*);
    using QStackedLayout_Metacall_Callback = int (*)(QStackedLayout*, int, int, void**);
    using QStackedLayout_Count_Callback = int (*)();
    using QStackedLayout_AddItem_Callback = void (*)(QStackedLayout*, QLayoutItem*);
    using QStackedLayout_SizeHint_Callback = QSize* (*)();
    using QStackedLayout_MinimumSize_Callback = QSize* (*)();
    using QStackedLayout_ItemAt_Callback = QLayoutItem* (*)(const QStackedLayout*, int);
    using QStackedLayout_TakeAt_Callback = QLayoutItem* (*)(QStackedLayout*, int);
    using QStackedLayout_SetGeometry_Callback = void (*)(QStackedLayout*, QRect*);
    using QStackedLayout_HasHeightForWidth_Callback = bool (*)();
    using QStackedLayout_HeightForWidth_Callback = int (*)(const QStackedLayout*, int);
    using QStackedLayout_Spacing_Callback = int (*)();
    using QStackedLayout_SetSpacing_Callback = void (*)(QStackedLayout*, int);
    using QStackedLayout_Invalidate_Callback = void (*)();
    using QStackedLayout_Geometry_Callback = QRect* (*)();
    using QStackedLayout_ExpandingDirections_Callback = int (*)();
    using QStackedLayout_MaximumSize_Callback = QSize* (*)();
    using QStackedLayout_IndexOf_Callback = int (*)(const QStackedLayout*, QWidget*);
    using QStackedLayout_IsEmpty_Callback = bool (*)();
    using QStackedLayout_ControlTypes_Callback = int (*)();
    using QStackedLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QStackedLayout*, QWidget*, QWidget*, int);
    using QStackedLayout_Layout_Callback = QLayout* (*)();
    using QStackedLayout_ChildEvent_Callback = void (*)(QStackedLayout*, QChildEvent*);
    using QStackedLayout_Event_Callback = bool (*)(QStackedLayout*, QEvent*);
    using QStackedLayout_EventFilter_Callback = bool (*)(QStackedLayout*, QObject*, QEvent*);
    using QStackedLayout_TimerEvent_Callback = void (*)(QStackedLayout*, QTimerEvent*);
    using QStackedLayout_CustomEvent_Callback = void (*)(QStackedLayout*, QEvent*);
    using QStackedLayout_ConnectNotify_Callback = void (*)(QStackedLayout*, QMetaMethod*);
    using QStackedLayout_DisconnectNotify_Callback = void (*)(QStackedLayout*, QMetaMethod*);
    using QStackedLayout_MinimumHeightForWidth_Callback = int (*)(const QStackedLayout*, int);
    using QStackedLayout_Widget_Callback = QWidget* (*)();
    using QStackedLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QStackedLayout_WidgetEvent_Callback = void (*)(QStackedLayout*, QEvent*);
    using QStackedLayout_AddChildLayout_Callback = void (*)(QStackedLayout*, QLayout*);
    using QStackedLayout_AddChildWidget_Callback = void (*)(QStackedLayout*, QWidget*);
    using QStackedLayout_AdoptLayout_Callback = bool (*)(QStackedLayout*, QLayout*);
    using QStackedLayout_AlignmentRect_Callback = QRect* (*)(const QStackedLayout*, QRect*);
    using QStackedLayout_Sender_Callback = QObject* (*)();
    using QStackedLayout_SenderSignalIndex_Callback = int (*)();
    using QStackedLayout_Receivers_Callback = int (*)(const QStackedLayout*, const char*);
    using QStackedLayout_IsSignalConnected_Callback = bool (*)(const QStackedLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStackedLayout_MetaObject_Callback qstackedlayout_metaobject_callback = nullptr;
    QStackedLayout_Metacast_Callback qstackedlayout_metacast_callback = nullptr;
    QStackedLayout_Metacall_Callback qstackedlayout_metacall_callback = nullptr;
    QStackedLayout_Count_Callback qstackedlayout_count_callback = nullptr;
    QStackedLayout_AddItem_Callback qstackedlayout_additem_callback = nullptr;
    QStackedLayout_SizeHint_Callback qstackedlayout_sizehint_callback = nullptr;
    QStackedLayout_MinimumSize_Callback qstackedlayout_minimumsize_callback = nullptr;
    QStackedLayout_ItemAt_Callback qstackedlayout_itemat_callback = nullptr;
    QStackedLayout_TakeAt_Callback qstackedlayout_takeat_callback = nullptr;
    QStackedLayout_SetGeometry_Callback qstackedlayout_setgeometry_callback = nullptr;
    QStackedLayout_HasHeightForWidth_Callback qstackedlayout_hasheightforwidth_callback = nullptr;
    QStackedLayout_HeightForWidth_Callback qstackedlayout_heightforwidth_callback = nullptr;
    QStackedLayout_Spacing_Callback qstackedlayout_spacing_callback = nullptr;
    QStackedLayout_SetSpacing_Callback qstackedlayout_setspacing_callback = nullptr;
    QStackedLayout_Invalidate_Callback qstackedlayout_invalidate_callback = nullptr;
    QStackedLayout_Geometry_Callback qstackedlayout_geometry_callback = nullptr;
    QStackedLayout_ExpandingDirections_Callback qstackedlayout_expandingdirections_callback = nullptr;
    QStackedLayout_MaximumSize_Callback qstackedlayout_maximumsize_callback = nullptr;
    QStackedLayout_IndexOf_Callback qstackedlayout_indexof_callback = nullptr;
    QStackedLayout_IsEmpty_Callback qstackedlayout_isempty_callback = nullptr;
    QStackedLayout_ControlTypes_Callback qstackedlayout_controltypes_callback = nullptr;
    QStackedLayout_ReplaceWidget_Callback qstackedlayout_replacewidget_callback = nullptr;
    QStackedLayout_Layout_Callback qstackedlayout_layout_callback = nullptr;
    QStackedLayout_ChildEvent_Callback qstackedlayout_childevent_callback = nullptr;
    QStackedLayout_Event_Callback qstackedlayout_event_callback = nullptr;
    QStackedLayout_EventFilter_Callback qstackedlayout_eventfilter_callback = nullptr;
    QStackedLayout_TimerEvent_Callback qstackedlayout_timerevent_callback = nullptr;
    QStackedLayout_CustomEvent_Callback qstackedlayout_customevent_callback = nullptr;
    QStackedLayout_ConnectNotify_Callback qstackedlayout_connectnotify_callback = nullptr;
    QStackedLayout_DisconnectNotify_Callback qstackedlayout_disconnectnotify_callback = nullptr;
    QStackedLayout_MinimumHeightForWidth_Callback qstackedlayout_minimumheightforwidth_callback = nullptr;
    QStackedLayout_Widget_Callback qstackedlayout_widget_callback = nullptr;
    QStackedLayout_SpacerItem_Callback qstackedlayout_spaceritem_callback = nullptr;
    QStackedLayout_WidgetEvent_Callback qstackedlayout_widgetevent_callback = nullptr;
    QStackedLayout_AddChildLayout_Callback qstackedlayout_addchildlayout_callback = nullptr;
    QStackedLayout_AddChildWidget_Callback qstackedlayout_addchildwidget_callback = nullptr;
    QStackedLayout_AdoptLayout_Callback qstackedlayout_adoptlayout_callback = nullptr;
    QStackedLayout_AlignmentRect_Callback qstackedlayout_alignmentrect_callback = nullptr;
    QStackedLayout_Sender_Callback qstackedlayout_sender_callback = nullptr;
    QStackedLayout_SenderSignalIndex_Callback qstackedlayout_sendersignalindex_callback = nullptr;
    QStackedLayout_Receivers_Callback qstackedlayout_receivers_callback = nullptr;
    QStackedLayout_IsSignalConnected_Callback qstackedlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstackedlayout_metaobject_isbase = false;
    mutable bool qstackedlayout_metacast_isbase = false;
    mutable bool qstackedlayout_metacall_isbase = false;
    mutable bool qstackedlayout_count_isbase = false;
    mutable bool qstackedlayout_additem_isbase = false;
    mutable bool qstackedlayout_sizehint_isbase = false;
    mutable bool qstackedlayout_minimumsize_isbase = false;
    mutable bool qstackedlayout_itemat_isbase = false;
    mutable bool qstackedlayout_takeat_isbase = false;
    mutable bool qstackedlayout_setgeometry_isbase = false;
    mutable bool qstackedlayout_hasheightforwidth_isbase = false;
    mutable bool qstackedlayout_heightforwidth_isbase = false;
    mutable bool qstackedlayout_spacing_isbase = false;
    mutable bool qstackedlayout_setspacing_isbase = false;
    mutable bool qstackedlayout_invalidate_isbase = false;
    mutable bool qstackedlayout_geometry_isbase = false;
    mutable bool qstackedlayout_expandingdirections_isbase = false;
    mutable bool qstackedlayout_maximumsize_isbase = false;
    mutable bool qstackedlayout_indexof_isbase = false;
    mutable bool qstackedlayout_isempty_isbase = false;
    mutable bool qstackedlayout_controltypes_isbase = false;
    mutable bool qstackedlayout_replacewidget_isbase = false;
    mutable bool qstackedlayout_layout_isbase = false;
    mutable bool qstackedlayout_childevent_isbase = false;
    mutable bool qstackedlayout_event_isbase = false;
    mutable bool qstackedlayout_eventfilter_isbase = false;
    mutable bool qstackedlayout_timerevent_isbase = false;
    mutable bool qstackedlayout_customevent_isbase = false;
    mutable bool qstackedlayout_connectnotify_isbase = false;
    mutable bool qstackedlayout_disconnectnotify_isbase = false;
    mutable bool qstackedlayout_minimumheightforwidth_isbase = false;
    mutable bool qstackedlayout_widget_isbase = false;
    mutable bool qstackedlayout_spaceritem_isbase = false;
    mutable bool qstackedlayout_widgetevent_isbase = false;
    mutable bool qstackedlayout_addchildlayout_isbase = false;
    mutable bool qstackedlayout_addchildwidget_isbase = false;
    mutable bool qstackedlayout_adoptlayout_isbase = false;
    mutable bool qstackedlayout_alignmentrect_isbase = false;
    mutable bool qstackedlayout_sender_isbase = false;
    mutable bool qstackedlayout_sendersignalindex_isbase = false;
    mutable bool qstackedlayout_receivers_isbase = false;
    mutable bool qstackedlayout_issignalconnected_isbase = false;

  public:
    VirtualQStackedLayout(QWidget* parent) : QStackedLayout(parent) {};
    VirtualQStackedLayout() : QStackedLayout() {};
    VirtualQStackedLayout(QLayout* parentLayout) : QStackedLayout(parentLayout) {};

    // Callback setters
    inline void setQStackedLayout_MetaObject_Callback(QStackedLayout_MetaObject_Callback cb) { qstackedlayout_metaobject_callback = cb; }
    inline void setQStackedLayout_Metacast_Callback(QStackedLayout_Metacast_Callback cb) { qstackedlayout_metacast_callback = cb; }
    inline void setQStackedLayout_Metacall_Callback(QStackedLayout_Metacall_Callback cb) { qstackedlayout_metacall_callback = cb; }
    inline void setQStackedLayout_Count_Callback(QStackedLayout_Count_Callback cb) { qstackedlayout_count_callback = cb; }
    inline void setQStackedLayout_AddItem_Callback(QStackedLayout_AddItem_Callback cb) { qstackedlayout_additem_callback = cb; }
    inline void setQStackedLayout_SizeHint_Callback(QStackedLayout_SizeHint_Callback cb) { qstackedlayout_sizehint_callback = cb; }
    inline void setQStackedLayout_MinimumSize_Callback(QStackedLayout_MinimumSize_Callback cb) { qstackedlayout_minimumsize_callback = cb; }
    inline void setQStackedLayout_ItemAt_Callback(QStackedLayout_ItemAt_Callback cb) { qstackedlayout_itemat_callback = cb; }
    inline void setQStackedLayout_TakeAt_Callback(QStackedLayout_TakeAt_Callback cb) { qstackedlayout_takeat_callback = cb; }
    inline void setQStackedLayout_SetGeometry_Callback(QStackedLayout_SetGeometry_Callback cb) { qstackedlayout_setgeometry_callback = cb; }
    inline void setQStackedLayout_HasHeightForWidth_Callback(QStackedLayout_HasHeightForWidth_Callback cb) { qstackedlayout_hasheightforwidth_callback = cb; }
    inline void setQStackedLayout_HeightForWidth_Callback(QStackedLayout_HeightForWidth_Callback cb) { qstackedlayout_heightforwidth_callback = cb; }
    inline void setQStackedLayout_Spacing_Callback(QStackedLayout_Spacing_Callback cb) { qstackedlayout_spacing_callback = cb; }
    inline void setQStackedLayout_SetSpacing_Callback(QStackedLayout_SetSpacing_Callback cb) { qstackedlayout_setspacing_callback = cb; }
    inline void setQStackedLayout_Invalidate_Callback(QStackedLayout_Invalidate_Callback cb) { qstackedlayout_invalidate_callback = cb; }
    inline void setQStackedLayout_Geometry_Callback(QStackedLayout_Geometry_Callback cb) { qstackedlayout_geometry_callback = cb; }
    inline void setQStackedLayout_ExpandingDirections_Callback(QStackedLayout_ExpandingDirections_Callback cb) { qstackedlayout_expandingdirections_callback = cb; }
    inline void setQStackedLayout_MaximumSize_Callback(QStackedLayout_MaximumSize_Callback cb) { qstackedlayout_maximumsize_callback = cb; }
    inline void setQStackedLayout_IndexOf_Callback(QStackedLayout_IndexOf_Callback cb) { qstackedlayout_indexof_callback = cb; }
    inline void setQStackedLayout_IsEmpty_Callback(QStackedLayout_IsEmpty_Callback cb) { qstackedlayout_isempty_callback = cb; }
    inline void setQStackedLayout_ControlTypes_Callback(QStackedLayout_ControlTypes_Callback cb) { qstackedlayout_controltypes_callback = cb; }
    inline void setQStackedLayout_ReplaceWidget_Callback(QStackedLayout_ReplaceWidget_Callback cb) { qstackedlayout_replacewidget_callback = cb; }
    inline void setQStackedLayout_Layout_Callback(QStackedLayout_Layout_Callback cb) { qstackedlayout_layout_callback = cb; }
    inline void setQStackedLayout_ChildEvent_Callback(QStackedLayout_ChildEvent_Callback cb) { qstackedlayout_childevent_callback = cb; }
    inline void setQStackedLayout_Event_Callback(QStackedLayout_Event_Callback cb) { qstackedlayout_event_callback = cb; }
    inline void setQStackedLayout_EventFilter_Callback(QStackedLayout_EventFilter_Callback cb) { qstackedlayout_eventfilter_callback = cb; }
    inline void setQStackedLayout_TimerEvent_Callback(QStackedLayout_TimerEvent_Callback cb) { qstackedlayout_timerevent_callback = cb; }
    inline void setQStackedLayout_CustomEvent_Callback(QStackedLayout_CustomEvent_Callback cb) { qstackedlayout_customevent_callback = cb; }
    inline void setQStackedLayout_ConnectNotify_Callback(QStackedLayout_ConnectNotify_Callback cb) { qstackedlayout_connectnotify_callback = cb; }
    inline void setQStackedLayout_DisconnectNotify_Callback(QStackedLayout_DisconnectNotify_Callback cb) { qstackedlayout_disconnectnotify_callback = cb; }
    inline void setQStackedLayout_MinimumHeightForWidth_Callback(QStackedLayout_MinimumHeightForWidth_Callback cb) { qstackedlayout_minimumheightforwidth_callback = cb; }
    inline void setQStackedLayout_Widget_Callback(QStackedLayout_Widget_Callback cb) { qstackedlayout_widget_callback = cb; }
    inline void setQStackedLayout_SpacerItem_Callback(QStackedLayout_SpacerItem_Callback cb) { qstackedlayout_spaceritem_callback = cb; }
    inline void setQStackedLayout_WidgetEvent_Callback(QStackedLayout_WidgetEvent_Callback cb) { qstackedlayout_widgetevent_callback = cb; }
    inline void setQStackedLayout_AddChildLayout_Callback(QStackedLayout_AddChildLayout_Callback cb) { qstackedlayout_addchildlayout_callback = cb; }
    inline void setQStackedLayout_AddChildWidget_Callback(QStackedLayout_AddChildWidget_Callback cb) { qstackedlayout_addchildwidget_callback = cb; }
    inline void setQStackedLayout_AdoptLayout_Callback(QStackedLayout_AdoptLayout_Callback cb) { qstackedlayout_adoptlayout_callback = cb; }
    inline void setQStackedLayout_AlignmentRect_Callback(QStackedLayout_AlignmentRect_Callback cb) { qstackedlayout_alignmentrect_callback = cb; }
    inline void setQStackedLayout_Sender_Callback(QStackedLayout_Sender_Callback cb) { qstackedlayout_sender_callback = cb; }
    inline void setQStackedLayout_SenderSignalIndex_Callback(QStackedLayout_SenderSignalIndex_Callback cb) { qstackedlayout_sendersignalindex_callback = cb; }
    inline void setQStackedLayout_Receivers_Callback(QStackedLayout_Receivers_Callback cb) { qstackedlayout_receivers_callback = cb; }
    inline void setQStackedLayout_IsSignalConnected_Callback(QStackedLayout_IsSignalConnected_Callback cb) { qstackedlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStackedLayout_MetaObject_IsBase(bool value) const { qstackedlayout_metaobject_isbase = value; }
    inline void setQStackedLayout_Metacast_IsBase(bool value) const { qstackedlayout_metacast_isbase = value; }
    inline void setQStackedLayout_Metacall_IsBase(bool value) const { qstackedlayout_metacall_isbase = value; }
    inline void setQStackedLayout_Count_IsBase(bool value) const { qstackedlayout_count_isbase = value; }
    inline void setQStackedLayout_AddItem_IsBase(bool value) const { qstackedlayout_additem_isbase = value; }
    inline void setQStackedLayout_SizeHint_IsBase(bool value) const { qstackedlayout_sizehint_isbase = value; }
    inline void setQStackedLayout_MinimumSize_IsBase(bool value) const { qstackedlayout_minimumsize_isbase = value; }
    inline void setQStackedLayout_ItemAt_IsBase(bool value) const { qstackedlayout_itemat_isbase = value; }
    inline void setQStackedLayout_TakeAt_IsBase(bool value) const { qstackedlayout_takeat_isbase = value; }
    inline void setQStackedLayout_SetGeometry_IsBase(bool value) const { qstackedlayout_setgeometry_isbase = value; }
    inline void setQStackedLayout_HasHeightForWidth_IsBase(bool value) const { qstackedlayout_hasheightforwidth_isbase = value; }
    inline void setQStackedLayout_HeightForWidth_IsBase(bool value) const { qstackedlayout_heightforwidth_isbase = value; }
    inline void setQStackedLayout_Spacing_IsBase(bool value) const { qstackedlayout_spacing_isbase = value; }
    inline void setQStackedLayout_SetSpacing_IsBase(bool value) const { qstackedlayout_setspacing_isbase = value; }
    inline void setQStackedLayout_Invalidate_IsBase(bool value) const { qstackedlayout_invalidate_isbase = value; }
    inline void setQStackedLayout_Geometry_IsBase(bool value) const { qstackedlayout_geometry_isbase = value; }
    inline void setQStackedLayout_ExpandingDirections_IsBase(bool value) const { qstackedlayout_expandingdirections_isbase = value; }
    inline void setQStackedLayout_MaximumSize_IsBase(bool value) const { qstackedlayout_maximumsize_isbase = value; }
    inline void setQStackedLayout_IndexOf_IsBase(bool value) const { qstackedlayout_indexof_isbase = value; }
    inline void setQStackedLayout_IsEmpty_IsBase(bool value) const { qstackedlayout_isempty_isbase = value; }
    inline void setQStackedLayout_ControlTypes_IsBase(bool value) const { qstackedlayout_controltypes_isbase = value; }
    inline void setQStackedLayout_ReplaceWidget_IsBase(bool value) const { qstackedlayout_replacewidget_isbase = value; }
    inline void setQStackedLayout_Layout_IsBase(bool value) const { qstackedlayout_layout_isbase = value; }
    inline void setQStackedLayout_ChildEvent_IsBase(bool value) const { qstackedlayout_childevent_isbase = value; }
    inline void setQStackedLayout_Event_IsBase(bool value) const { qstackedlayout_event_isbase = value; }
    inline void setQStackedLayout_EventFilter_IsBase(bool value) const { qstackedlayout_eventfilter_isbase = value; }
    inline void setQStackedLayout_TimerEvent_IsBase(bool value) const { qstackedlayout_timerevent_isbase = value; }
    inline void setQStackedLayout_CustomEvent_IsBase(bool value) const { qstackedlayout_customevent_isbase = value; }
    inline void setQStackedLayout_ConnectNotify_IsBase(bool value) const { qstackedlayout_connectnotify_isbase = value; }
    inline void setQStackedLayout_DisconnectNotify_IsBase(bool value) const { qstackedlayout_disconnectnotify_isbase = value; }
    inline void setQStackedLayout_MinimumHeightForWidth_IsBase(bool value) const { qstackedlayout_minimumheightforwidth_isbase = value; }
    inline void setQStackedLayout_Widget_IsBase(bool value) const { qstackedlayout_widget_isbase = value; }
    inline void setQStackedLayout_SpacerItem_IsBase(bool value) const { qstackedlayout_spaceritem_isbase = value; }
    inline void setQStackedLayout_WidgetEvent_IsBase(bool value) const { qstackedlayout_widgetevent_isbase = value; }
    inline void setQStackedLayout_AddChildLayout_IsBase(bool value) const { qstackedlayout_addchildlayout_isbase = value; }
    inline void setQStackedLayout_AddChildWidget_IsBase(bool value) const { qstackedlayout_addchildwidget_isbase = value; }
    inline void setQStackedLayout_AdoptLayout_IsBase(bool value) const { qstackedlayout_adoptlayout_isbase = value; }
    inline void setQStackedLayout_AlignmentRect_IsBase(bool value) const { qstackedlayout_alignmentrect_isbase = value; }
    inline void setQStackedLayout_Sender_IsBase(bool value) const { qstackedlayout_sender_isbase = value; }
    inline void setQStackedLayout_SenderSignalIndex_IsBase(bool value) const { qstackedlayout_sendersignalindex_isbase = value; }
    inline void setQStackedLayout_Receivers_IsBase(bool value) const { qstackedlayout_receivers_isbase = value; }
    inline void setQStackedLayout_IsSignalConnected_IsBase(bool value) const { qstackedlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstackedlayout_metaobject_isbase) {
            qstackedlayout_metaobject_isbase = false;
            return QStackedLayout::metaObject();
        }
        auto metaobject_cb = qstackedlayout_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QStackedLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstackedlayout_metacast_isbase) {
            qstackedlayout_metacast_isbase = false;
            return QStackedLayout::qt_metacast(param1);
        }
        auto metacast_cb = qstackedlayout_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedlayout_metacall_isbase) {
            qstackedlayout_metacall_isbase = false;
            return QStackedLayout::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qstackedlayout_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qstackedlayout_count_isbase) {
            qstackedlayout_count_isbase = false;
            return QStackedLayout::count();
        }
        auto count_cb = qstackedlayout_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* item) override {
        if (qstackedlayout_additem_isbase) {
            qstackedlayout_additem_isbase = false;
            QStackedLayout::addItem(item);
            return;
        }
        auto additem_cb = qstackedlayout_additem_callback;
        if (additem_cb) {
            QLayoutItem* cbval1 = item;

            additem_cb(this, cbval1);
            return;
        }
        QStackedLayout::addItem(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedlayout_sizehint_isbase) {
            qstackedlayout_sizehint_isbase = false;
            return QStackedLayout::sizeHint();
        }
        auto sizehint_cb = qstackedlayout_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QStackedLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qstackedlayout_minimumsize_isbase) {
            qstackedlayout_minimumsize_isbase = false;
            return QStackedLayout::minimumSize();
        }
        auto minimumsize_cb = qstackedlayout_minimumsize_callback;
        if (minimumsize_cb) {
            QSize* callback_ret = minimumsize_cb();
            return *callback_ret;
        }
        return QStackedLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qstackedlayout_itemat_isbase) {
            qstackedlayout_itemat_isbase = false;
            return QStackedLayout::itemAt(param1);
        }
        auto itemat_cb = qstackedlayout_itemat_callback;
        if (itemat_cb) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = itemat_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::itemAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qstackedlayout_takeat_isbase) {
            qstackedlayout_takeat_isbase = false;
            return QStackedLayout::takeAt(param1);
        }
        auto takeat_cb = qstackedlayout_takeat_callback;
        if (takeat_cb) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = takeat_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::takeAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& rect) override {
        if (qstackedlayout_setgeometry_isbase) {
            qstackedlayout_setgeometry_isbase = false;
            QStackedLayout::setGeometry(rect);
            return;
        }
        auto setgeometry_cb = qstackedlayout_setgeometry_callback;
        if (setgeometry_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QStackedLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedlayout_hasheightforwidth_isbase) {
            qstackedlayout_hasheightforwidth_isbase = false;
            return QStackedLayout::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qstackedlayout_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QStackedLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qstackedlayout_heightforwidth_isbase) {
            qstackedlayout_heightforwidth_isbase = false;
            return QStackedLayout::heightForWidth(width);
        }
        auto heightforwidth_cb = qstackedlayout_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = width;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qstackedlayout_spacing_isbase) {
            qstackedlayout_spacing_isbase = false;
            return QStackedLayout::spacing();
        }
        auto spacing_cb = qstackedlayout_spacing_callback;
        if (spacing_cb) {
            int callback_ret = spacing_cb();
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qstackedlayout_setspacing_isbase) {
            qstackedlayout_setspacing_isbase = false;
            QStackedLayout::setSpacing(spacing);
            return;
        }
        auto setspacing_cb = qstackedlayout_setspacing_callback;
        if (setspacing_cb) {
            int cbval1 = spacing;

            setspacing_cb(this, cbval1);
            return;
        }
        QStackedLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qstackedlayout_invalidate_isbase) {
            qstackedlayout_invalidate_isbase = false;
            QStackedLayout::invalidate();
            return;
        }
        auto invalidate_cb = qstackedlayout_invalidate_callback;
        if (invalidate_cb) {
            invalidate_cb();
            return;
        }
        QStackedLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qstackedlayout_geometry_isbase) {
            qstackedlayout_geometry_isbase = false;
            return QStackedLayout::geometry();
        }
        auto geometry_cb = qstackedlayout_geometry_callback;
        if (geometry_cb) {
            QRect* callback_ret = geometry_cb();
            return *callback_ret;
        }
        return QStackedLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qstackedlayout_expandingdirections_isbase) {
            qstackedlayout_expandingdirections_isbase = false;
            return QStackedLayout::expandingDirections();
        }
        auto expandingdirections_cb = qstackedlayout_expandingdirections_callback;
        if (expandingdirections_cb) {
            int callback_ret = expandingdirections_cb();
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QStackedLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qstackedlayout_maximumsize_isbase) {
            qstackedlayout_maximumsize_isbase = false;
            return QStackedLayout::maximumSize();
        }
        auto maximumsize_cb = qstackedlayout_maximumsize_callback;
        if (maximumsize_cb) {
            QSize* callback_ret = maximumsize_cb();
            return *callback_ret;
        }
        return QStackedLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qstackedlayout_indexof_isbase) {
            qstackedlayout_indexof_isbase = false;
            return QStackedLayout::indexOf(param1);
        }
        auto indexof_cb = qstackedlayout_indexof_callback;
        if (indexof_cb) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = indexof_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qstackedlayout_isempty_isbase) {
            qstackedlayout_isempty_isbase = false;
            return QStackedLayout::isEmpty();
        }
        auto isempty_cb = qstackedlayout_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QStackedLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qstackedlayout_controltypes_isbase) {
            qstackedlayout_controltypes_isbase = false;
            return QStackedLayout::controlTypes();
        }
        auto controltypes_cb = qstackedlayout_controltypes_callback;
        if (controltypes_cb) {
            int callback_ret = controltypes_cb();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QStackedLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qstackedlayout_replacewidget_isbase) {
            qstackedlayout_replacewidget_isbase = false;
            return QStackedLayout::replaceWidget(from, to, options);
        }
        auto replacewidget_cb = qstackedlayout_replacewidget_callback;
        if (replacewidget_cb) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = replacewidget_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStackedLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qstackedlayout_layout_isbase) {
            qstackedlayout_layout_isbase = false;
            return QStackedLayout::layout();
        }
        auto layout_cb = qstackedlayout_layout_callback;
        if (layout_cb) {
            QLayout* callback_ret = layout_cb();
            return callback_ret;
        }
        return QStackedLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qstackedlayout_childevent_isbase) {
            qstackedlayout_childevent_isbase = false;
            QStackedLayout::childEvent(e);
            return;
        }
        auto childevent_cb = qstackedlayout_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = e;

            childevent_cb(this, cbval1);
            return;
        }
        QStackedLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstackedlayout_event_isbase) {
            qstackedlayout_event_isbase = false;
            return QStackedLayout::event(event);
        }
        auto event_cb = qstackedlayout_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedlayout_eventfilter_isbase) {
            qstackedlayout_eventfilter_isbase = false;
            return QStackedLayout::eventFilter(watched, event);
        }
        auto eventfilter_cb = qstackedlayout_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStackedLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedlayout_timerevent_isbase) {
            qstackedlayout_timerevent_isbase = false;
            QStackedLayout::timerEvent(event);
            return;
        }
        auto timerevent_cb = qstackedlayout_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QStackedLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedlayout_customevent_isbase) {
            qstackedlayout_customevent_isbase = false;
            QStackedLayout::customEvent(event);
            return;
        }
        auto customevent_cb = qstackedlayout_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QStackedLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_connectnotify_isbase) {
            qstackedlayout_connectnotify_isbase = false;
            QStackedLayout::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qstackedlayout_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QStackedLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_disconnectnotify_isbase) {
            qstackedlayout_disconnectnotify_isbase = false;
            QStackedLayout::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qstackedlayout_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QStackedLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qstackedlayout_minimumheightforwidth_isbase) {
            qstackedlayout_minimumheightforwidth_isbase = false;
            return QStackedLayout::minimumHeightForWidth(param1);
        }
        auto minimumheightforwidth_cb = qstackedlayout_minimumheightforwidth_callback;
        if (minimumheightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = minimumheightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qstackedlayout_widget_isbase) {
            qstackedlayout_widget_isbase = false;
            return QStackedLayout::widget();
        }
        auto widget_cb = qstackedlayout_widget_callback;
        if (widget_cb) {
            QWidget* callback_ret = widget_cb();
            return callback_ret;
        }
        return QStackedLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qstackedlayout_spaceritem_isbase) {
            qstackedlayout_spaceritem_isbase = false;
            return QStackedLayout::spacerItem();
        }
        auto spaceritem_cb = qstackedlayout_spaceritem_callback;
        if (spaceritem_cb) {
            QSpacerItem* callback_ret = spaceritem_cb();
            return callback_ret;
        }
        return QStackedLayout::spacerItem();
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qstackedlayout_widgetevent_isbase) {
            qstackedlayout_widgetevent_isbase = false;
            QStackedLayout::widgetEvent(param1);
            return;
        }
        auto widgetevent_cb = qstackedlayout_widgetevent_callback;
        if (widgetevent_cb) {
            QEvent* cbval1 = param1;

            widgetevent_cb(this, cbval1);
            return;
        }
        QStackedLayout::widgetEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qstackedlayout_addchildlayout_isbase) {
            qstackedlayout_addchildlayout_isbase = false;
            QStackedLayout::addChildLayout(l);
            return;
        }
        auto addchildlayout_cb = qstackedlayout_addchildlayout_callback;
        if (addchildlayout_cb) {
            QLayout* cbval1 = l;

            addchildlayout_cb(this, cbval1);
            return;
        }
        QStackedLayout::addChildLayout(l);
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qstackedlayout_addchildwidget_isbase) {
            qstackedlayout_addchildwidget_isbase = false;
            QStackedLayout::addChildWidget(w);
            return;
        }
        auto addchildwidget_cb = qstackedlayout_addchildwidget_callback;
        if (addchildwidget_cb) {
            QWidget* cbval1 = w;

            addchildwidget_cb(this, cbval1);
            return;
        }
        QStackedLayout::addChildWidget(w);
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qstackedlayout_adoptlayout_isbase) {
            qstackedlayout_adoptlayout_isbase = false;
            return QStackedLayout::adoptLayout(layout);
        }
        auto adoptlayout_cb = qstackedlayout_adoptlayout_callback;
        if (adoptlayout_cb) {
            QLayout* cbval1 = layout;

            bool callback_ret = adoptlayout_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::adoptLayout(layout);
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qstackedlayout_alignmentrect_isbase) {
            qstackedlayout_alignmentrect_isbase = false;
            return QStackedLayout::alignmentRect(param1);
        }
        auto alignmentrect_cb = qstackedlayout_alignmentrect_callback;
        if (alignmentrect_cb) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = alignmentrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QStackedLayout::alignmentRect(param1);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstackedlayout_sender_isbase) {
            qstackedlayout_sender_isbase = false;
            return QStackedLayout::sender();
        }
        auto sender_cb = qstackedlayout_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QStackedLayout::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstackedlayout_sendersignalindex_isbase) {
            qstackedlayout_sendersignalindex_isbase = false;
            return QStackedLayout::senderSignalIndex();
        }
        auto sendersignalindex_cb = qstackedlayout_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstackedlayout_receivers_isbase) {
            qstackedlayout_receivers_isbase = false;
            return QStackedLayout::receivers(signal);
        }
        auto receivers_cb = qstackedlayout_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstackedlayout_issignalconnected_isbase) {
            qstackedlayout_issignalconnected_isbase = false;
            return QStackedLayout::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qstackedlayout_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::isSignalConnected(signal);
    }

    // Friend functions
    friend void QStackedLayout_ChildEvent(QStackedLayout* self, QChildEvent* e);
    friend void QStackedLayout_SuperChildEvent(QStackedLayout* self, QChildEvent* e);
    friend void QStackedLayout_TimerEvent(QStackedLayout* self, QTimerEvent* event);
    friend void QStackedLayout_SuperTimerEvent(QStackedLayout* self, QTimerEvent* event);
    friend void QStackedLayout_CustomEvent(QStackedLayout* self, QEvent* event);
    friend void QStackedLayout_SuperCustomEvent(QStackedLayout* self, QEvent* event);
    friend void QStackedLayout_ConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_SuperConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_DisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_SuperDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_WidgetEvent(QStackedLayout* self, QEvent* param1);
    friend void QStackedLayout_SuperWidgetEvent(QStackedLayout* self, QEvent* param1);
    friend void QStackedLayout_AddChildLayout(QStackedLayout* self, QLayout* l);
    friend void QStackedLayout_SuperAddChildLayout(QStackedLayout* self, QLayout* l);
    friend void QStackedLayout_AddChildWidget(QStackedLayout* self, QWidget* w);
    friend void QStackedLayout_SuperAddChildWidget(QStackedLayout* self, QWidget* w);
    friend bool QStackedLayout_AdoptLayout(QStackedLayout* self, QLayout* layout);
    friend bool QStackedLayout_SuperAdoptLayout(QStackedLayout* self, QLayout* layout);
    friend QRect* QStackedLayout_AlignmentRect(const QStackedLayout* self, const QRect* param1);
    friend QRect* QStackedLayout_SuperAlignmentRect(const QStackedLayout* self, const QRect* param1);
    friend QObject* QStackedLayout_Sender(const QStackedLayout* self);
    friend QObject* QStackedLayout_SuperSender(const QStackedLayout* self);
    friend int QStackedLayout_SenderSignalIndex(const QStackedLayout* self);
    friend int QStackedLayout_SuperSenderSignalIndex(const QStackedLayout* self);
    friend int QStackedLayout_Receivers(const QStackedLayout* self, const char* signal);
    friend int QStackedLayout_SuperReceivers(const QStackedLayout* self, const char* signal);
    friend bool QStackedLayout_IsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
    friend bool QStackedLayout_SuperIsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
};

#endif
