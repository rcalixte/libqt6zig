#pragma once
#ifndef SRCC_LIBVIRTUALQGRIDLAYOUT_H
#define SRCC_LIBVIRTUALQGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGridLayout so that we can call protected methods
class VirtualQGridLayout final : public QGridLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQGridLayout = true;

    // Virtual class public types (including callbacks)
    using QGridLayout_Metacall_Callback = int (*)(QGridLayout*, int, int, void**);
    using QGridLayout_SizeHint_Callback = QSize* (*)();
    using QGridLayout_MinimumSize_Callback = QSize* (*)();
    using QGridLayout_MaximumSize_Callback = QSize* (*)();
    using QGridLayout_SetSpacing_Callback = void (*)(QGridLayout*, int);
    using QGridLayout_Spacing_Callback = int (*)();
    using QGridLayout_HasHeightForWidth_Callback = bool (*)();
    using QGridLayout_HeightForWidth_Callback = int (*)(const QGridLayout*, int);
    using QGridLayout_MinimumHeightForWidth_Callback = int (*)(const QGridLayout*, int);
    using QGridLayout_ExpandingDirections_Callback = int (*)();
    using QGridLayout_Invalidate_Callback = void (*)();
    using QGridLayout_ItemAt_Callback = QLayoutItem* (*)(const QGridLayout*, int);
    using QGridLayout_TakeAt_Callback = QLayoutItem* (*)(QGridLayout*, int);
    using QGridLayout_Count_Callback = int (*)();
    using QGridLayout_SetGeometry_Callback = void (*)(QGridLayout*, QRect*);
    using QGridLayout_AddItemWithQLayoutItem_Callback = void (*)(QGridLayout*, QLayoutItem*);
    using QGridLayout_Geometry_Callback = QRect* (*)();
    using QGridLayout_IndexOf_Callback = int (*)(const QGridLayout*, QWidget*);
    using QGridLayout_IsEmpty_Callback = bool (*)();
    using QGridLayout_ControlTypes_Callback = int (*)();
    using QGridLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QGridLayout*, QWidget*, QWidget*, int);
    using QGridLayout_Layout_Callback = QLayout* (*)();
    using QGridLayout_ChildEvent_Callback = void (*)(QGridLayout*, QChildEvent*);
    using QGridLayout_Event_Callback = bool (*)(QGridLayout*, QEvent*);
    using QGridLayout_EventFilter_Callback = bool (*)(QGridLayout*, QObject*, QEvent*);
    using QGridLayout_TimerEvent_Callback = void (*)(QGridLayout*, QTimerEvent*);
    using QGridLayout_CustomEvent_Callback = void (*)(QGridLayout*, QEvent*);
    using QGridLayout_ConnectNotify_Callback = void (*)(QGridLayout*, QMetaMethod*);
    using QGridLayout_DisconnectNotify_Callback = void (*)(QGridLayout*, QMetaMethod*);
    using QGridLayout_Widget_Callback = QWidget* (*)();
    using QGridLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QGridLayout_WidgetEvent_Callback = void (*)(QGridLayout*, QEvent*);
    using QGridLayout_AddChildLayout_Callback = void (*)(QGridLayout*, QLayout*);
    using QGridLayout_AddChildWidget_Callback = void (*)(QGridLayout*, QWidget*);
    using QGridLayout_AdoptLayout_Callback = bool (*)(QGridLayout*, QLayout*);
    using QGridLayout_AlignmentRect_Callback = QRect* (*)(const QGridLayout*, QRect*);
    using QGridLayout_Sender_Callback = QObject* (*)();
    using QGridLayout_SenderSignalIndex_Callback = int (*)();
    using QGridLayout_Receivers_Callback = int (*)(const QGridLayout*, const char*);
    using QGridLayout_IsSignalConnected_Callback = bool (*)(const QGridLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGridLayout_Metacall_Callback qgridlayout_metacall_callback = nullptr;
    QGridLayout_SizeHint_Callback qgridlayout_sizehint_callback = nullptr;
    QGridLayout_MinimumSize_Callback qgridlayout_minimumsize_callback = nullptr;
    QGridLayout_MaximumSize_Callback qgridlayout_maximumsize_callback = nullptr;
    QGridLayout_SetSpacing_Callback qgridlayout_setspacing_callback = nullptr;
    QGridLayout_Spacing_Callback qgridlayout_spacing_callback = nullptr;
    QGridLayout_HasHeightForWidth_Callback qgridlayout_hasheightforwidth_callback = nullptr;
    QGridLayout_HeightForWidth_Callback qgridlayout_heightforwidth_callback = nullptr;
    QGridLayout_MinimumHeightForWidth_Callback qgridlayout_minimumheightforwidth_callback = nullptr;
    QGridLayout_ExpandingDirections_Callback qgridlayout_expandingdirections_callback = nullptr;
    QGridLayout_Invalidate_Callback qgridlayout_invalidate_callback = nullptr;
    QGridLayout_ItemAt_Callback qgridlayout_itemat_callback = nullptr;
    QGridLayout_TakeAt_Callback qgridlayout_takeat_callback = nullptr;
    QGridLayout_Count_Callback qgridlayout_count_callback = nullptr;
    QGridLayout_SetGeometry_Callback qgridlayout_setgeometry_callback = nullptr;
    QGridLayout_AddItemWithQLayoutItem_Callback qgridlayout_additemwithqlayoutitem_callback = nullptr;
    QGridLayout_Geometry_Callback qgridlayout_geometry_callback = nullptr;
    QGridLayout_IndexOf_Callback qgridlayout_indexof_callback = nullptr;
    QGridLayout_IsEmpty_Callback qgridlayout_isempty_callback = nullptr;
    QGridLayout_ControlTypes_Callback qgridlayout_controltypes_callback = nullptr;
    QGridLayout_ReplaceWidget_Callback qgridlayout_replacewidget_callback = nullptr;
    QGridLayout_Layout_Callback qgridlayout_layout_callback = nullptr;
    QGridLayout_ChildEvent_Callback qgridlayout_childevent_callback = nullptr;
    QGridLayout_Event_Callback qgridlayout_event_callback = nullptr;
    QGridLayout_EventFilter_Callback qgridlayout_eventfilter_callback = nullptr;
    QGridLayout_TimerEvent_Callback qgridlayout_timerevent_callback = nullptr;
    QGridLayout_CustomEvent_Callback qgridlayout_customevent_callback = nullptr;
    QGridLayout_ConnectNotify_Callback qgridlayout_connectnotify_callback = nullptr;
    QGridLayout_DisconnectNotify_Callback qgridlayout_disconnectnotify_callback = nullptr;
    QGridLayout_Widget_Callback qgridlayout_widget_callback = nullptr;
    QGridLayout_SpacerItem_Callback qgridlayout_spaceritem_callback = nullptr;
    QGridLayout_WidgetEvent_Callback qgridlayout_widgetevent_callback = nullptr;
    QGridLayout_AddChildLayout_Callback qgridlayout_addchildlayout_callback = nullptr;
    QGridLayout_AddChildWidget_Callback qgridlayout_addchildwidget_callback = nullptr;
    QGridLayout_AdoptLayout_Callback qgridlayout_adoptlayout_callback = nullptr;
    QGridLayout_AlignmentRect_Callback qgridlayout_alignmentrect_callback = nullptr;
    QGridLayout_Sender_Callback qgridlayout_sender_callback = nullptr;
    QGridLayout_SenderSignalIndex_Callback qgridlayout_sendersignalindex_callback = nullptr;
    QGridLayout_Receivers_Callback qgridlayout_receivers_callback = nullptr;
    QGridLayout_IsSignalConnected_Callback qgridlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgridlayout_metacall_isbase = false;
    mutable bool qgridlayout_sizehint_isbase = false;
    mutable bool qgridlayout_minimumsize_isbase = false;
    mutable bool qgridlayout_maximumsize_isbase = false;
    mutable bool qgridlayout_setspacing_isbase = false;
    mutable bool qgridlayout_spacing_isbase = false;
    mutable bool qgridlayout_hasheightforwidth_isbase = false;
    mutable bool qgridlayout_heightforwidth_isbase = false;
    mutable bool qgridlayout_minimumheightforwidth_isbase = false;
    mutable bool qgridlayout_expandingdirections_isbase = false;
    mutable bool qgridlayout_invalidate_isbase = false;
    mutable bool qgridlayout_itemat_isbase = false;
    mutable bool qgridlayout_takeat_isbase = false;
    mutable bool qgridlayout_count_isbase = false;
    mutable bool qgridlayout_setgeometry_isbase = false;
    mutable bool qgridlayout_additemwithqlayoutitem_isbase = false;
    mutable bool qgridlayout_geometry_isbase = false;
    mutable bool qgridlayout_indexof_isbase = false;
    mutable bool qgridlayout_isempty_isbase = false;
    mutable bool qgridlayout_controltypes_isbase = false;
    mutable bool qgridlayout_replacewidget_isbase = false;
    mutable bool qgridlayout_layout_isbase = false;
    mutable bool qgridlayout_childevent_isbase = false;
    mutable bool qgridlayout_event_isbase = false;
    mutable bool qgridlayout_eventfilter_isbase = false;
    mutable bool qgridlayout_timerevent_isbase = false;
    mutable bool qgridlayout_customevent_isbase = false;
    mutable bool qgridlayout_connectnotify_isbase = false;
    mutable bool qgridlayout_disconnectnotify_isbase = false;
    mutable bool qgridlayout_widget_isbase = false;
    mutable bool qgridlayout_spaceritem_isbase = false;
    mutable bool qgridlayout_widgetevent_isbase = false;
    mutable bool qgridlayout_addchildlayout_isbase = false;
    mutable bool qgridlayout_addchildwidget_isbase = false;
    mutable bool qgridlayout_adoptlayout_isbase = false;
    mutable bool qgridlayout_alignmentrect_isbase = false;
    mutable bool qgridlayout_sender_isbase = false;
    mutable bool qgridlayout_sendersignalindex_isbase = false;
    mutable bool qgridlayout_receivers_isbase = false;
    mutable bool qgridlayout_issignalconnected_isbase = false;

  public:
    VirtualQGridLayout(QWidget* parent) : QGridLayout(parent){};
    VirtualQGridLayout() : QGridLayout(){};

    ~VirtualQGridLayout() {
        qgridlayout_metacall_callback = nullptr;
        qgridlayout_sizehint_callback = nullptr;
        qgridlayout_minimumsize_callback = nullptr;
        qgridlayout_maximumsize_callback = nullptr;
        qgridlayout_setspacing_callback = nullptr;
        qgridlayout_spacing_callback = nullptr;
        qgridlayout_hasheightforwidth_callback = nullptr;
        qgridlayout_heightforwidth_callback = nullptr;
        qgridlayout_minimumheightforwidth_callback = nullptr;
        qgridlayout_expandingdirections_callback = nullptr;
        qgridlayout_invalidate_callback = nullptr;
        qgridlayout_itemat_callback = nullptr;
        qgridlayout_takeat_callback = nullptr;
        qgridlayout_count_callback = nullptr;
        qgridlayout_setgeometry_callback = nullptr;
        qgridlayout_additemwithqlayoutitem_callback = nullptr;
        qgridlayout_geometry_callback = nullptr;
        qgridlayout_indexof_callback = nullptr;
        qgridlayout_isempty_callback = nullptr;
        qgridlayout_controltypes_callback = nullptr;
        qgridlayout_replacewidget_callback = nullptr;
        qgridlayout_layout_callback = nullptr;
        qgridlayout_childevent_callback = nullptr;
        qgridlayout_event_callback = nullptr;
        qgridlayout_eventfilter_callback = nullptr;
        qgridlayout_timerevent_callback = nullptr;
        qgridlayout_customevent_callback = nullptr;
        qgridlayout_connectnotify_callback = nullptr;
        qgridlayout_disconnectnotify_callback = nullptr;
        qgridlayout_widget_callback = nullptr;
        qgridlayout_spaceritem_callback = nullptr;
        qgridlayout_widgetevent_callback = nullptr;
        qgridlayout_addchildlayout_callback = nullptr;
        qgridlayout_addchildwidget_callback = nullptr;
        qgridlayout_adoptlayout_callback = nullptr;
        qgridlayout_alignmentrect_callback = nullptr;
        qgridlayout_sender_callback = nullptr;
        qgridlayout_sendersignalindex_callback = nullptr;
        qgridlayout_receivers_callback = nullptr;
        qgridlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGridLayout_Metacall_Callback(QGridLayout_Metacall_Callback cb) { qgridlayout_metacall_callback = cb; }
    inline void setQGridLayout_SizeHint_Callback(QGridLayout_SizeHint_Callback cb) { qgridlayout_sizehint_callback = cb; }
    inline void setQGridLayout_MinimumSize_Callback(QGridLayout_MinimumSize_Callback cb) { qgridlayout_minimumsize_callback = cb; }
    inline void setQGridLayout_MaximumSize_Callback(QGridLayout_MaximumSize_Callback cb) { qgridlayout_maximumsize_callback = cb; }
    inline void setQGridLayout_SetSpacing_Callback(QGridLayout_SetSpacing_Callback cb) { qgridlayout_setspacing_callback = cb; }
    inline void setQGridLayout_Spacing_Callback(QGridLayout_Spacing_Callback cb) { qgridlayout_spacing_callback = cb; }
    inline void setQGridLayout_HasHeightForWidth_Callback(QGridLayout_HasHeightForWidth_Callback cb) { qgridlayout_hasheightforwidth_callback = cb; }
    inline void setQGridLayout_HeightForWidth_Callback(QGridLayout_HeightForWidth_Callback cb) { qgridlayout_heightforwidth_callback = cb; }
    inline void setQGridLayout_MinimumHeightForWidth_Callback(QGridLayout_MinimumHeightForWidth_Callback cb) { qgridlayout_minimumheightforwidth_callback = cb; }
    inline void setQGridLayout_ExpandingDirections_Callback(QGridLayout_ExpandingDirections_Callback cb) { qgridlayout_expandingdirections_callback = cb; }
    inline void setQGridLayout_Invalidate_Callback(QGridLayout_Invalidate_Callback cb) { qgridlayout_invalidate_callback = cb; }
    inline void setQGridLayout_ItemAt_Callback(QGridLayout_ItemAt_Callback cb) { qgridlayout_itemat_callback = cb; }
    inline void setQGridLayout_TakeAt_Callback(QGridLayout_TakeAt_Callback cb) { qgridlayout_takeat_callback = cb; }
    inline void setQGridLayout_Count_Callback(QGridLayout_Count_Callback cb) { qgridlayout_count_callback = cb; }
    inline void setQGridLayout_SetGeometry_Callback(QGridLayout_SetGeometry_Callback cb) { qgridlayout_setgeometry_callback = cb; }
    inline void setQGridLayout_AddItemWithQLayoutItem_Callback(QGridLayout_AddItemWithQLayoutItem_Callback cb) { qgridlayout_additemwithqlayoutitem_callback = cb; }
    inline void setQGridLayout_Geometry_Callback(QGridLayout_Geometry_Callback cb) { qgridlayout_geometry_callback = cb; }
    inline void setQGridLayout_IndexOf_Callback(QGridLayout_IndexOf_Callback cb) { qgridlayout_indexof_callback = cb; }
    inline void setQGridLayout_IsEmpty_Callback(QGridLayout_IsEmpty_Callback cb) { qgridlayout_isempty_callback = cb; }
    inline void setQGridLayout_ControlTypes_Callback(QGridLayout_ControlTypes_Callback cb) { qgridlayout_controltypes_callback = cb; }
    inline void setQGridLayout_ReplaceWidget_Callback(QGridLayout_ReplaceWidget_Callback cb) { qgridlayout_replacewidget_callback = cb; }
    inline void setQGridLayout_Layout_Callback(QGridLayout_Layout_Callback cb) { qgridlayout_layout_callback = cb; }
    inline void setQGridLayout_ChildEvent_Callback(QGridLayout_ChildEvent_Callback cb) { qgridlayout_childevent_callback = cb; }
    inline void setQGridLayout_Event_Callback(QGridLayout_Event_Callback cb) { qgridlayout_event_callback = cb; }
    inline void setQGridLayout_EventFilter_Callback(QGridLayout_EventFilter_Callback cb) { qgridlayout_eventfilter_callback = cb; }
    inline void setQGridLayout_TimerEvent_Callback(QGridLayout_TimerEvent_Callback cb) { qgridlayout_timerevent_callback = cb; }
    inline void setQGridLayout_CustomEvent_Callback(QGridLayout_CustomEvent_Callback cb) { qgridlayout_customevent_callback = cb; }
    inline void setQGridLayout_ConnectNotify_Callback(QGridLayout_ConnectNotify_Callback cb) { qgridlayout_connectnotify_callback = cb; }
    inline void setQGridLayout_DisconnectNotify_Callback(QGridLayout_DisconnectNotify_Callback cb) { qgridlayout_disconnectnotify_callback = cb; }
    inline void setQGridLayout_Widget_Callback(QGridLayout_Widget_Callback cb) { qgridlayout_widget_callback = cb; }
    inline void setQGridLayout_SpacerItem_Callback(QGridLayout_SpacerItem_Callback cb) { qgridlayout_spaceritem_callback = cb; }
    inline void setQGridLayout_WidgetEvent_Callback(QGridLayout_WidgetEvent_Callback cb) { qgridlayout_widgetevent_callback = cb; }
    inline void setQGridLayout_AddChildLayout_Callback(QGridLayout_AddChildLayout_Callback cb) { qgridlayout_addchildlayout_callback = cb; }
    inline void setQGridLayout_AddChildWidget_Callback(QGridLayout_AddChildWidget_Callback cb) { qgridlayout_addchildwidget_callback = cb; }
    inline void setQGridLayout_AdoptLayout_Callback(QGridLayout_AdoptLayout_Callback cb) { qgridlayout_adoptlayout_callback = cb; }
    inline void setQGridLayout_AlignmentRect_Callback(QGridLayout_AlignmentRect_Callback cb) { qgridlayout_alignmentrect_callback = cb; }
    inline void setQGridLayout_Sender_Callback(QGridLayout_Sender_Callback cb) { qgridlayout_sender_callback = cb; }
    inline void setQGridLayout_SenderSignalIndex_Callback(QGridLayout_SenderSignalIndex_Callback cb) { qgridlayout_sendersignalindex_callback = cb; }
    inline void setQGridLayout_Receivers_Callback(QGridLayout_Receivers_Callback cb) { qgridlayout_receivers_callback = cb; }
    inline void setQGridLayout_IsSignalConnected_Callback(QGridLayout_IsSignalConnected_Callback cb) { qgridlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGridLayout_Metacall_IsBase(bool value) const { qgridlayout_metacall_isbase = value; }
    inline void setQGridLayout_SizeHint_IsBase(bool value) const { qgridlayout_sizehint_isbase = value; }
    inline void setQGridLayout_MinimumSize_IsBase(bool value) const { qgridlayout_minimumsize_isbase = value; }
    inline void setQGridLayout_MaximumSize_IsBase(bool value) const { qgridlayout_maximumsize_isbase = value; }
    inline void setQGridLayout_SetSpacing_IsBase(bool value) const { qgridlayout_setspacing_isbase = value; }
    inline void setQGridLayout_Spacing_IsBase(bool value) const { qgridlayout_spacing_isbase = value; }
    inline void setQGridLayout_HasHeightForWidth_IsBase(bool value) const { qgridlayout_hasheightforwidth_isbase = value; }
    inline void setQGridLayout_HeightForWidth_IsBase(bool value) const { qgridlayout_heightforwidth_isbase = value; }
    inline void setQGridLayout_MinimumHeightForWidth_IsBase(bool value) const { qgridlayout_minimumheightforwidth_isbase = value; }
    inline void setQGridLayout_ExpandingDirections_IsBase(bool value) const { qgridlayout_expandingdirections_isbase = value; }
    inline void setQGridLayout_Invalidate_IsBase(bool value) const { qgridlayout_invalidate_isbase = value; }
    inline void setQGridLayout_ItemAt_IsBase(bool value) const { qgridlayout_itemat_isbase = value; }
    inline void setQGridLayout_TakeAt_IsBase(bool value) const { qgridlayout_takeat_isbase = value; }
    inline void setQGridLayout_Count_IsBase(bool value) const { qgridlayout_count_isbase = value; }
    inline void setQGridLayout_SetGeometry_IsBase(bool value) const { qgridlayout_setgeometry_isbase = value; }
    inline void setQGridLayout_AddItemWithQLayoutItem_IsBase(bool value) const { qgridlayout_additemwithqlayoutitem_isbase = value; }
    inline void setQGridLayout_Geometry_IsBase(bool value) const { qgridlayout_geometry_isbase = value; }
    inline void setQGridLayout_IndexOf_IsBase(bool value) const { qgridlayout_indexof_isbase = value; }
    inline void setQGridLayout_IsEmpty_IsBase(bool value) const { qgridlayout_isempty_isbase = value; }
    inline void setQGridLayout_ControlTypes_IsBase(bool value) const { qgridlayout_controltypes_isbase = value; }
    inline void setQGridLayout_ReplaceWidget_IsBase(bool value) const { qgridlayout_replacewidget_isbase = value; }
    inline void setQGridLayout_Layout_IsBase(bool value) const { qgridlayout_layout_isbase = value; }
    inline void setQGridLayout_ChildEvent_IsBase(bool value) const { qgridlayout_childevent_isbase = value; }
    inline void setQGridLayout_Event_IsBase(bool value) const { qgridlayout_event_isbase = value; }
    inline void setQGridLayout_EventFilter_IsBase(bool value) const { qgridlayout_eventfilter_isbase = value; }
    inline void setQGridLayout_TimerEvent_IsBase(bool value) const { qgridlayout_timerevent_isbase = value; }
    inline void setQGridLayout_CustomEvent_IsBase(bool value) const { qgridlayout_customevent_isbase = value; }
    inline void setQGridLayout_ConnectNotify_IsBase(bool value) const { qgridlayout_connectnotify_isbase = value; }
    inline void setQGridLayout_DisconnectNotify_IsBase(bool value) const { qgridlayout_disconnectnotify_isbase = value; }
    inline void setQGridLayout_Widget_IsBase(bool value) const { qgridlayout_widget_isbase = value; }
    inline void setQGridLayout_SpacerItem_IsBase(bool value) const { qgridlayout_spaceritem_isbase = value; }
    inline void setQGridLayout_WidgetEvent_IsBase(bool value) const { qgridlayout_widgetevent_isbase = value; }
    inline void setQGridLayout_AddChildLayout_IsBase(bool value) const { qgridlayout_addchildlayout_isbase = value; }
    inline void setQGridLayout_AddChildWidget_IsBase(bool value) const { qgridlayout_addchildwidget_isbase = value; }
    inline void setQGridLayout_AdoptLayout_IsBase(bool value) const { qgridlayout_adoptlayout_isbase = value; }
    inline void setQGridLayout_AlignmentRect_IsBase(bool value) const { qgridlayout_alignmentrect_isbase = value; }
    inline void setQGridLayout_Sender_IsBase(bool value) const { qgridlayout_sender_isbase = value; }
    inline void setQGridLayout_SenderSignalIndex_IsBase(bool value) const { qgridlayout_sendersignalindex_isbase = value; }
    inline void setQGridLayout_Receivers_IsBase(bool value) const { qgridlayout_receivers_isbase = value; }
    inline void setQGridLayout_IsSignalConnected_IsBase(bool value) const { qgridlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgridlayout_metacall_isbase) {
            qgridlayout_metacall_isbase = false;
            return QGridLayout::qt_metacall(param1, param2, param3);
        } else if (qgridlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgridlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgridlayout_sizehint_isbase) {
            qgridlayout_sizehint_isbase = false;
            return QGridLayout::sizeHint();
        } else if (qgridlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qgridlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return QGridLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qgridlayout_minimumsize_isbase) {
            qgridlayout_minimumsize_isbase = false;
            return QGridLayout::minimumSize();
        } else if (qgridlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qgridlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QGridLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qgridlayout_maximumsize_isbase) {
            qgridlayout_maximumsize_isbase = false;
            return QGridLayout::maximumSize();
        } else if (qgridlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qgridlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QGridLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qgridlayout_setspacing_isbase) {
            qgridlayout_setspacing_isbase = false;
            QGridLayout::setSpacing(spacing);
        } else if (qgridlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qgridlayout_setspacing_callback(this, cbval1);
        } else {
            QGridLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qgridlayout_spacing_isbase) {
            qgridlayout_spacing_isbase = false;
            return QGridLayout::spacing();
        } else if (qgridlayout_spacing_callback != nullptr) {
            int callback_ret = qgridlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgridlayout_hasheightforwidth_isbase) {
            qgridlayout_hasheightforwidth_isbase = false;
            return QGridLayout::hasHeightForWidth();
        } else if (qgridlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qgridlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QGridLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgridlayout_heightforwidth_isbase) {
            qgridlayout_heightforwidth_isbase = false;
            return QGridLayout::heightForWidth(param1);
        } else if (qgridlayout_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qgridlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qgridlayout_minimumheightforwidth_isbase) {
            qgridlayout_minimumheightforwidth_isbase = false;
            return QGridLayout::minimumHeightForWidth(param1);
        } else if (qgridlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qgridlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qgridlayout_expandingdirections_isbase) {
            qgridlayout_expandingdirections_isbase = false;
            return QGridLayout::expandingDirections();
        } else if (qgridlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qgridlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QGridLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgridlayout_invalidate_isbase) {
            qgridlayout_invalidate_isbase = false;
            QGridLayout::invalidate();
        } else if (qgridlayout_invalidate_callback != nullptr) {
            qgridlayout_invalidate_callback();
        } else {
            QGridLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qgridlayout_itemat_isbase) {
            qgridlayout_itemat_isbase = false;
            return QGridLayout::itemAt(index);
        } else if (qgridlayout_itemat_callback != nullptr) {
            int cbval1 = index;

            QLayoutItem* callback_ret = qgridlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGridLayout::itemAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qgridlayout_takeat_isbase) {
            qgridlayout_takeat_isbase = false;
            return QGridLayout::takeAt(index);
        } else if (qgridlayout_takeat_callback != nullptr) {
            int cbval1 = index;

            QLayoutItem* callback_ret = qgridlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGridLayout::takeAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgridlayout_count_isbase) {
            qgridlayout_count_isbase = false;
            return QGridLayout::count();
        } else if (qgridlayout_count_callback != nullptr) {
            int callback_ret = qgridlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qgridlayout_setgeometry_isbase) {
            qgridlayout_setgeometry_isbase = false;
            QGridLayout::setGeometry(geometry);
        } else if (qgridlayout_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qgridlayout_setgeometry_callback(this, cbval1);
        } else {
            QGridLayout::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qgridlayout_additemwithqlayoutitem_isbase) {
            qgridlayout_additemwithqlayoutitem_isbase = false;
            QGridLayout::addItem(param1);
        } else if (qgridlayout_additemwithqlayoutitem_callback != nullptr) {
            QLayoutItem* cbval1 = param1;

            qgridlayout_additemwithqlayoutitem_callback(this, cbval1);
        } else {
            QGridLayout::addItem(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qgridlayout_geometry_isbase) {
            qgridlayout_geometry_isbase = false;
            return QGridLayout::geometry();
        } else if (qgridlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qgridlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QGridLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qgridlayout_indexof_isbase) {
            qgridlayout_indexof_isbase = false;
            return QGridLayout::indexOf(param1);
        } else if (qgridlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qgridlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgridlayout_isempty_isbase) {
            qgridlayout_isempty_isbase = false;
            return QGridLayout::isEmpty();
        } else if (qgridlayout_isempty_callback != nullptr) {
            bool callback_ret = qgridlayout_isempty_callback();
            return callback_ret;
        } else {
            return QGridLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qgridlayout_controltypes_isbase) {
            qgridlayout_controltypes_isbase = false;
            return QGridLayout::controlTypes();
        } else if (qgridlayout_controltypes_callback != nullptr) {
            int callback_ret = qgridlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QGridLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qgridlayout_replacewidget_isbase) {
            qgridlayout_replacewidget_isbase = false;
            return QGridLayout::replaceWidget(from, to, options);
        } else if (qgridlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qgridlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QGridLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qgridlayout_layout_isbase) {
            qgridlayout_layout_isbase = false;
            return QGridLayout::layout();
        } else if (qgridlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qgridlayout_layout_callback();
            return callback_ret;
        } else {
            return QGridLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qgridlayout_childevent_isbase) {
            qgridlayout_childevent_isbase = false;
            QGridLayout::childEvent(e);
        } else if (qgridlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qgridlayout_childevent_callback(this, cbval1);
        } else {
            QGridLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgridlayout_event_isbase) {
            qgridlayout_event_isbase = false;
            return QGridLayout::event(event);
        } else if (qgridlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgridlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGridLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgridlayout_eventfilter_isbase) {
            qgridlayout_eventfilter_isbase = false;
            return QGridLayout::eventFilter(watched, event);
        } else if (qgridlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgridlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGridLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgridlayout_timerevent_isbase) {
            qgridlayout_timerevent_isbase = false;
            QGridLayout::timerEvent(event);
        } else if (qgridlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgridlayout_timerevent_callback(this, cbval1);
        } else {
            QGridLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgridlayout_customevent_isbase) {
            qgridlayout_customevent_isbase = false;
            QGridLayout::customEvent(event);
        } else if (qgridlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgridlayout_customevent_callback(this, cbval1);
        } else {
            QGridLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_connectnotify_isbase) {
            qgridlayout_connectnotify_isbase = false;
            QGridLayout::connectNotify(signal);
        } else if (qgridlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgridlayout_connectnotify_callback(this, cbval1);
        } else {
            QGridLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_disconnectnotify_isbase) {
            qgridlayout_disconnectnotify_isbase = false;
            QGridLayout::disconnectNotify(signal);
        } else if (qgridlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgridlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QGridLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qgridlayout_widget_isbase) {
            qgridlayout_widget_isbase = false;
            return QGridLayout::widget();
        } else if (qgridlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qgridlayout_widget_callback();
            return callback_ret;
        } else {
            return QGridLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qgridlayout_spaceritem_isbase) {
            qgridlayout_spaceritem_isbase = false;
            return QGridLayout::spacerItem();
        } else if (qgridlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qgridlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QGridLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qgridlayout_widgetevent_isbase) {
            qgridlayout_widgetevent_isbase = false;
            QGridLayout::widgetEvent(param1);
        } else if (qgridlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qgridlayout_widgetevent_callback(this, cbval1);
        } else {
            QGridLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qgridlayout_addchildlayout_isbase) {
            qgridlayout_addchildlayout_isbase = false;
            QGridLayout::addChildLayout(l);
        } else if (qgridlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qgridlayout_addchildlayout_callback(this, cbval1);
        } else {
            QGridLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qgridlayout_addchildwidget_isbase) {
            qgridlayout_addchildwidget_isbase = false;
            QGridLayout::addChildWidget(w);
        } else if (qgridlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qgridlayout_addchildwidget_callback(this, cbval1);
        } else {
            QGridLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qgridlayout_adoptlayout_isbase) {
            qgridlayout_adoptlayout_isbase = false;
            return QGridLayout::adoptLayout(layout);
        } else if (qgridlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qgridlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGridLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qgridlayout_alignmentrect_isbase) {
            qgridlayout_alignmentrect_isbase = false;
            return QGridLayout::alignmentRect(param1);
        } else if (qgridlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qgridlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGridLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgridlayout_sender_isbase) {
            qgridlayout_sender_isbase = false;
            return QGridLayout::sender();
        } else if (qgridlayout_sender_callback != nullptr) {
            QObject* callback_ret = qgridlayout_sender_callback();
            return callback_ret;
        } else {
            return QGridLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgridlayout_sendersignalindex_isbase) {
            qgridlayout_sendersignalindex_isbase = false;
            return QGridLayout::senderSignalIndex();
        } else if (qgridlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qgridlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgridlayout_receivers_isbase) {
            qgridlayout_receivers_isbase = false;
            return QGridLayout::receivers(signal);
        } else if (qgridlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgridlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGridLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgridlayout_issignalconnected_isbase) {
            qgridlayout_issignalconnected_isbase = false;
            return QGridLayout::isSignalConnected(signal);
        } else if (qgridlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgridlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGridLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGridLayout_AddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1);
    friend void QGridLayout_QBaseAddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1);
    friend void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e);
    friend void QGridLayout_QBaseChildEvent(QGridLayout* self, QChildEvent* e);
    friend void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event);
    friend void QGridLayout_QBaseTimerEvent(QGridLayout* self, QTimerEvent* event);
    friend void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event);
    friend void QGridLayout_QBaseCustomEvent(QGridLayout* self, QEvent* event);
    friend void QGridLayout_ConnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_QBaseConnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_DisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_QBaseDisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1);
    friend void QGridLayout_QBaseWidgetEvent(QGridLayout* self, QEvent* param1);
    friend void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l);
    friend void QGridLayout_QBaseAddChildLayout(QGridLayout* self, QLayout* l);
    friend void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w);
    friend void QGridLayout_QBaseAddChildWidget(QGridLayout* self, QWidget* w);
    friend bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout);
    friend bool QGridLayout_QBaseAdoptLayout(QGridLayout* self, QLayout* layout);
    friend QRect* QGridLayout_AlignmentRect(const QGridLayout* self, const QRect* param1);
    friend QRect* QGridLayout_QBaseAlignmentRect(const QGridLayout* self, const QRect* param1);
    friend QObject* QGridLayout_Sender(const QGridLayout* self);
    friend QObject* QGridLayout_QBaseSender(const QGridLayout* self);
    friend int QGridLayout_SenderSignalIndex(const QGridLayout* self);
    friend int QGridLayout_QBaseSenderSignalIndex(const QGridLayout* self);
    friend int QGridLayout_Receivers(const QGridLayout* self, const char* signal);
    friend int QGridLayout_QBaseReceivers(const QGridLayout* self, const char* signal);
    friend bool QGridLayout_IsSignalConnected(const QGridLayout* self, const QMetaMethod* signal);
    friend bool QGridLayout_QBaseIsSignalConnected(const QGridLayout* self, const QMetaMethod* signal);
};

#endif
