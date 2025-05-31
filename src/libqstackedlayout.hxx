#pragma once
#ifndef SRCC_LIBVIRTUALQSTACKEDLAYOUT_H
#define SRCC_LIBVIRTUALQSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedLayout so that we can call protected methods
class VirtualQStackedLayout final : public QStackedLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQStackedLayout = true;

    // Virtual class public types (including callbacks)
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
    VirtualQStackedLayout(QWidget* parent) : QStackedLayout(parent){};
    VirtualQStackedLayout() : QStackedLayout(){};
    VirtualQStackedLayout(QLayout* parentLayout) : QStackedLayout(parentLayout){};

    ~VirtualQStackedLayout() {
        qstackedlayout_metacall_callback = nullptr;
        qstackedlayout_count_callback = nullptr;
        qstackedlayout_additem_callback = nullptr;
        qstackedlayout_sizehint_callback = nullptr;
        qstackedlayout_minimumsize_callback = nullptr;
        qstackedlayout_itemat_callback = nullptr;
        qstackedlayout_takeat_callback = nullptr;
        qstackedlayout_setgeometry_callback = nullptr;
        qstackedlayout_hasheightforwidth_callback = nullptr;
        qstackedlayout_heightforwidth_callback = nullptr;
        qstackedlayout_spacing_callback = nullptr;
        qstackedlayout_setspacing_callback = nullptr;
        qstackedlayout_invalidate_callback = nullptr;
        qstackedlayout_geometry_callback = nullptr;
        qstackedlayout_expandingdirections_callback = nullptr;
        qstackedlayout_maximumsize_callback = nullptr;
        qstackedlayout_indexof_callback = nullptr;
        qstackedlayout_isempty_callback = nullptr;
        qstackedlayout_controltypes_callback = nullptr;
        qstackedlayout_replacewidget_callback = nullptr;
        qstackedlayout_layout_callback = nullptr;
        qstackedlayout_childevent_callback = nullptr;
        qstackedlayout_event_callback = nullptr;
        qstackedlayout_eventfilter_callback = nullptr;
        qstackedlayout_timerevent_callback = nullptr;
        qstackedlayout_customevent_callback = nullptr;
        qstackedlayout_connectnotify_callback = nullptr;
        qstackedlayout_disconnectnotify_callback = nullptr;
        qstackedlayout_minimumheightforwidth_callback = nullptr;
        qstackedlayout_widget_callback = nullptr;
        qstackedlayout_spaceritem_callback = nullptr;
        qstackedlayout_widgetevent_callback = nullptr;
        qstackedlayout_addchildlayout_callback = nullptr;
        qstackedlayout_addchildwidget_callback = nullptr;
        qstackedlayout_adoptlayout_callback = nullptr;
        qstackedlayout_alignmentrect_callback = nullptr;
        qstackedlayout_sender_callback = nullptr;
        qstackedlayout_sendersignalindex_callback = nullptr;
        qstackedlayout_receivers_callback = nullptr;
        qstackedlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedlayout_metacall_isbase) {
            qstackedlayout_metacall_isbase = false;
            return QStackedLayout::qt_metacall(param1, param2, param3);
        } else if (qstackedlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstackedlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qstackedlayout_count_isbase) {
            qstackedlayout_count_isbase = false;
            return QStackedLayout::count();
        } else if (qstackedlayout_count_callback != nullptr) {
            int callback_ret = qstackedlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* item) override {
        if (qstackedlayout_additem_isbase) {
            qstackedlayout_additem_isbase = false;
            QStackedLayout::addItem(item);
        } else if (qstackedlayout_additem_callback != nullptr) {
            QLayoutItem* cbval1 = item;

            qstackedlayout_additem_callback(this, cbval1);
        } else {
            QStackedLayout::addItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedlayout_sizehint_isbase) {
            qstackedlayout_sizehint_isbase = false;
            return QStackedLayout::sizeHint();
        } else if (qstackedlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qstackedlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return QStackedLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qstackedlayout_minimumsize_isbase) {
            qstackedlayout_minimumsize_isbase = false;
            return QStackedLayout::minimumSize();
        } else if (qstackedlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qstackedlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QStackedLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qstackedlayout_itemat_isbase) {
            qstackedlayout_itemat_isbase = false;
            return QStackedLayout::itemAt(param1);
        } else if (qstackedlayout_itemat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qstackedlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedLayout::itemAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qstackedlayout_takeat_isbase) {
            qstackedlayout_takeat_isbase = false;
            return QStackedLayout::takeAt(param1);
        } else if (qstackedlayout_takeat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qstackedlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedLayout::takeAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& rect) override {
        if (qstackedlayout_setgeometry_isbase) {
            qstackedlayout_setgeometry_isbase = false;
            QStackedLayout::setGeometry(rect);
        } else if (qstackedlayout_setgeometry_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);

            qstackedlayout_setgeometry_callback(this, cbval1);
        } else {
            QStackedLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedlayout_hasheightforwidth_isbase) {
            qstackedlayout_hasheightforwidth_isbase = false;
            return QStackedLayout::hasHeightForWidth();
        } else if (qstackedlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qstackedlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QStackedLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qstackedlayout_heightforwidth_isbase) {
            qstackedlayout_heightforwidth_isbase = false;
            return QStackedLayout::heightForWidth(width);
        } else if (qstackedlayout_heightforwidth_callback != nullptr) {
            int cbval1 = width;

            int callback_ret = qstackedlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::heightForWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qstackedlayout_spacing_isbase) {
            qstackedlayout_spacing_isbase = false;
            return QStackedLayout::spacing();
        } else if (qstackedlayout_spacing_callback != nullptr) {
            int callback_ret = qstackedlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qstackedlayout_setspacing_isbase) {
            qstackedlayout_setspacing_isbase = false;
            QStackedLayout::setSpacing(spacing);
        } else if (qstackedlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qstackedlayout_setspacing_callback(this, cbval1);
        } else {
            QStackedLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qstackedlayout_invalidate_isbase) {
            qstackedlayout_invalidate_isbase = false;
            QStackedLayout::invalidate();
        } else if (qstackedlayout_invalidate_callback != nullptr) {
            qstackedlayout_invalidate_callback();
        } else {
            QStackedLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qstackedlayout_geometry_isbase) {
            qstackedlayout_geometry_isbase = false;
            return QStackedLayout::geometry();
        } else if (qstackedlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qstackedlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QStackedLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qstackedlayout_expandingdirections_isbase) {
            qstackedlayout_expandingdirections_isbase = false;
            return QStackedLayout::expandingDirections();
        } else if (qstackedlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qstackedlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QStackedLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qstackedlayout_maximumsize_isbase) {
            qstackedlayout_maximumsize_isbase = false;
            return QStackedLayout::maximumSize();
        } else if (qstackedlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qstackedlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QStackedLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qstackedlayout_indexof_isbase) {
            qstackedlayout_indexof_isbase = false;
            return QStackedLayout::indexOf(param1);
        } else if (qstackedlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qstackedlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qstackedlayout_isempty_isbase) {
            qstackedlayout_isempty_isbase = false;
            return QStackedLayout::isEmpty();
        } else if (qstackedlayout_isempty_callback != nullptr) {
            bool callback_ret = qstackedlayout_isempty_callback();
            return callback_ret;
        } else {
            return QStackedLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qstackedlayout_controltypes_isbase) {
            qstackedlayout_controltypes_isbase = false;
            return QStackedLayout::controlTypes();
        } else if (qstackedlayout_controltypes_callback != nullptr) {
            int callback_ret = qstackedlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QStackedLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qstackedlayout_replacewidget_isbase) {
            qstackedlayout_replacewidget_isbase = false;
            return QStackedLayout::replaceWidget(from, to, options);
        } else if (qstackedlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qstackedlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStackedLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qstackedlayout_layout_isbase) {
            qstackedlayout_layout_isbase = false;
            return QStackedLayout::layout();
        } else if (qstackedlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qstackedlayout_layout_callback();
            return callback_ret;
        } else {
            return QStackedLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qstackedlayout_childevent_isbase) {
            qstackedlayout_childevent_isbase = false;
            QStackedLayout::childEvent(e);
        } else if (qstackedlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qstackedlayout_childevent_callback(this, cbval1);
        } else {
            QStackedLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstackedlayout_event_isbase) {
            qstackedlayout_event_isbase = false;
            return QStackedLayout::event(event);
        } else if (qstackedlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qstackedlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedlayout_eventfilter_isbase) {
            qstackedlayout_eventfilter_isbase = false;
            return QStackedLayout::eventFilter(watched, event);
        } else if (qstackedlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstackedlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStackedLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedlayout_timerevent_isbase) {
            qstackedlayout_timerevent_isbase = false;
            QStackedLayout::timerEvent(event);
        } else if (qstackedlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstackedlayout_timerevent_callback(this, cbval1);
        } else {
            QStackedLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedlayout_customevent_isbase) {
            qstackedlayout_customevent_isbase = false;
            QStackedLayout::customEvent(event);
        } else if (qstackedlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstackedlayout_customevent_callback(this, cbval1);
        } else {
            QStackedLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_connectnotify_isbase) {
            qstackedlayout_connectnotify_isbase = false;
            QStackedLayout::connectNotify(signal);
        } else if (qstackedlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstackedlayout_connectnotify_callback(this, cbval1);
        } else {
            QStackedLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_disconnectnotify_isbase) {
            qstackedlayout_disconnectnotify_isbase = false;
            QStackedLayout::disconnectNotify(signal);
        } else if (qstackedlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstackedlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QStackedLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qstackedlayout_minimumheightforwidth_isbase) {
            qstackedlayout_minimumheightforwidth_isbase = false;
            return QStackedLayout::minimumHeightForWidth(param1);
        } else if (qstackedlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qstackedlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qstackedlayout_widget_isbase) {
            qstackedlayout_widget_isbase = false;
            return QStackedLayout::widget();
        } else if (qstackedlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qstackedlayout_widget_callback();
            return callback_ret;
        } else {
            return QStackedLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qstackedlayout_spaceritem_isbase) {
            qstackedlayout_spaceritem_isbase = false;
            return QStackedLayout::spacerItem();
        } else if (qstackedlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qstackedlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QStackedLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qstackedlayout_widgetevent_isbase) {
            qstackedlayout_widgetevent_isbase = false;
            QStackedLayout::widgetEvent(param1);
        } else if (qstackedlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qstackedlayout_widgetevent_callback(this, cbval1);
        } else {
            QStackedLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qstackedlayout_addchildlayout_isbase) {
            qstackedlayout_addchildlayout_isbase = false;
            QStackedLayout::addChildLayout(l);
        } else if (qstackedlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qstackedlayout_addchildlayout_callback(this, cbval1);
        } else {
            QStackedLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qstackedlayout_addchildwidget_isbase) {
            qstackedlayout_addchildwidget_isbase = false;
            QStackedLayout::addChildWidget(w);
        } else if (qstackedlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qstackedlayout_addchildwidget_callback(this, cbval1);
        } else {
            QStackedLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qstackedlayout_adoptlayout_isbase) {
            qstackedlayout_adoptlayout_isbase = false;
            return QStackedLayout::adoptLayout(layout);
        } else if (qstackedlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qstackedlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qstackedlayout_alignmentrect_isbase) {
            qstackedlayout_alignmentrect_isbase = false;
            return QStackedLayout::alignmentRect(param1);
        } else if (qstackedlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qstackedlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QStackedLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstackedlayout_sender_isbase) {
            qstackedlayout_sender_isbase = false;
            return QStackedLayout::sender();
        } else if (qstackedlayout_sender_callback != nullptr) {
            QObject* callback_ret = qstackedlayout_sender_callback();
            return callback_ret;
        } else {
            return QStackedLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstackedlayout_sendersignalindex_isbase) {
            qstackedlayout_sendersignalindex_isbase = false;
            return QStackedLayout::senderSignalIndex();
        } else if (qstackedlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qstackedlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstackedlayout_receivers_isbase) {
            qstackedlayout_receivers_isbase = false;
            return QStackedLayout::receivers(signal);
        } else if (qstackedlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstackedlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstackedlayout_issignalconnected_isbase) {
            qstackedlayout_issignalconnected_isbase = false;
            return QStackedLayout::isSignalConnected(signal);
        } else if (qstackedlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstackedlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStackedLayout_ChildEvent(QStackedLayout* self, QChildEvent* e);
    friend void QStackedLayout_QBaseChildEvent(QStackedLayout* self, QChildEvent* e);
    friend void QStackedLayout_TimerEvent(QStackedLayout* self, QTimerEvent* event);
    friend void QStackedLayout_QBaseTimerEvent(QStackedLayout* self, QTimerEvent* event);
    friend void QStackedLayout_CustomEvent(QStackedLayout* self, QEvent* event);
    friend void QStackedLayout_QBaseCustomEvent(QStackedLayout* self, QEvent* event);
    friend void QStackedLayout_ConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_QBaseConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_DisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_QBaseDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_WidgetEvent(QStackedLayout* self, QEvent* param1);
    friend void QStackedLayout_QBaseWidgetEvent(QStackedLayout* self, QEvent* param1);
    friend void QStackedLayout_AddChildLayout(QStackedLayout* self, QLayout* l);
    friend void QStackedLayout_QBaseAddChildLayout(QStackedLayout* self, QLayout* l);
    friend void QStackedLayout_AddChildWidget(QStackedLayout* self, QWidget* w);
    friend void QStackedLayout_QBaseAddChildWidget(QStackedLayout* self, QWidget* w);
    friend bool QStackedLayout_AdoptLayout(QStackedLayout* self, QLayout* layout);
    friend bool QStackedLayout_QBaseAdoptLayout(QStackedLayout* self, QLayout* layout);
    friend QRect* QStackedLayout_AlignmentRect(const QStackedLayout* self, const QRect* param1);
    friend QRect* QStackedLayout_QBaseAlignmentRect(const QStackedLayout* self, const QRect* param1);
    friend QObject* QStackedLayout_Sender(const QStackedLayout* self);
    friend QObject* QStackedLayout_QBaseSender(const QStackedLayout* self);
    friend int QStackedLayout_SenderSignalIndex(const QStackedLayout* self);
    friend int QStackedLayout_QBaseSenderSignalIndex(const QStackedLayout* self);
    friend int QStackedLayout_Receivers(const QStackedLayout* self, const char* signal);
    friend int QStackedLayout_QBaseReceivers(const QStackedLayout* self, const char* signal);
    friend bool QStackedLayout_IsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
    friend bool QStackedLayout_QBaseIsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
};

#endif
