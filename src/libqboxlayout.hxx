#pragma once
#ifndef SRCC_LIBVIRTUALQBOXLAYOUT_H
#define SRCC_LIBVIRTUALQBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBoxLayout so that we can call protected methods
class VirtualQBoxLayout final : public QBoxLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQBoxLayout = true;

    // Virtual class public types (including callbacks)
    using QBoxLayout_Metacall_Callback = int (*)(QBoxLayout*, int, int, void**);
    using QBoxLayout_AddItem_Callback = void (*)(QBoxLayout*, QLayoutItem*);
    using QBoxLayout_Spacing_Callback = int (*)();
    using QBoxLayout_SetSpacing_Callback = void (*)(QBoxLayout*, int);
    using QBoxLayout_SizeHint_Callback = QSize* (*)();
    using QBoxLayout_MinimumSize_Callback = QSize* (*)();
    using QBoxLayout_MaximumSize_Callback = QSize* (*)();
    using QBoxLayout_HasHeightForWidth_Callback = bool (*)();
    using QBoxLayout_HeightForWidth_Callback = int (*)(const QBoxLayout*, int);
    using QBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QBoxLayout*, int);
    using QBoxLayout_ExpandingDirections_Callback = int (*)();
    using QBoxLayout_Invalidate_Callback = void (*)();
    using QBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QBoxLayout*, int);
    using QBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QBoxLayout*, int);
    using QBoxLayout_Count_Callback = int (*)();
    using QBoxLayout_SetGeometry_Callback = void (*)(QBoxLayout*, QRect*);
    using QBoxLayout_Geometry_Callback = QRect* (*)();
    using QBoxLayout_IndexOf_Callback = int (*)(const QBoxLayout*, QWidget*);
    using QBoxLayout_IsEmpty_Callback = bool (*)();
    using QBoxLayout_ControlTypes_Callback = int (*)();
    using QBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QBoxLayout*, QWidget*, QWidget*, int);
    using QBoxLayout_Layout_Callback = QLayout* (*)();
    using QBoxLayout_ChildEvent_Callback = void (*)(QBoxLayout*, QChildEvent*);
    using QBoxLayout_Event_Callback = bool (*)(QBoxLayout*, QEvent*);
    using QBoxLayout_EventFilter_Callback = bool (*)(QBoxLayout*, QObject*, QEvent*);
    using QBoxLayout_TimerEvent_Callback = void (*)(QBoxLayout*, QTimerEvent*);
    using QBoxLayout_CustomEvent_Callback = void (*)(QBoxLayout*, QEvent*);
    using QBoxLayout_ConnectNotify_Callback = void (*)(QBoxLayout*, QMetaMethod*);
    using QBoxLayout_DisconnectNotify_Callback = void (*)(QBoxLayout*, QMetaMethod*);
    using QBoxLayout_Widget_Callback = QWidget* (*)();
    using QBoxLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QBoxLayout_WidgetEvent_Callback = void (*)(QBoxLayout*, QEvent*);
    using QBoxLayout_AddChildLayout_Callback = void (*)(QBoxLayout*, QLayout*);
    using QBoxLayout_AddChildWidget_Callback = void (*)(QBoxLayout*, QWidget*);
    using QBoxLayout_AdoptLayout_Callback = bool (*)(QBoxLayout*, QLayout*);
    using QBoxLayout_AlignmentRect_Callback = QRect* (*)(const QBoxLayout*, QRect*);
    using QBoxLayout_Sender_Callback = QObject* (*)();
    using QBoxLayout_SenderSignalIndex_Callback = int (*)();
    using QBoxLayout_Receivers_Callback = int (*)(const QBoxLayout*, const char*);
    using QBoxLayout_IsSignalConnected_Callback = bool (*)(const QBoxLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBoxLayout_Metacall_Callback qboxlayout_metacall_callback = nullptr;
    QBoxLayout_AddItem_Callback qboxlayout_additem_callback = nullptr;
    QBoxLayout_Spacing_Callback qboxlayout_spacing_callback = nullptr;
    QBoxLayout_SetSpacing_Callback qboxlayout_setspacing_callback = nullptr;
    QBoxLayout_SizeHint_Callback qboxlayout_sizehint_callback = nullptr;
    QBoxLayout_MinimumSize_Callback qboxlayout_minimumsize_callback = nullptr;
    QBoxLayout_MaximumSize_Callback qboxlayout_maximumsize_callback = nullptr;
    QBoxLayout_HasHeightForWidth_Callback qboxlayout_hasheightforwidth_callback = nullptr;
    QBoxLayout_HeightForWidth_Callback qboxlayout_heightforwidth_callback = nullptr;
    QBoxLayout_MinimumHeightForWidth_Callback qboxlayout_minimumheightforwidth_callback = nullptr;
    QBoxLayout_ExpandingDirections_Callback qboxlayout_expandingdirections_callback = nullptr;
    QBoxLayout_Invalidate_Callback qboxlayout_invalidate_callback = nullptr;
    QBoxLayout_ItemAt_Callback qboxlayout_itemat_callback = nullptr;
    QBoxLayout_TakeAt_Callback qboxlayout_takeat_callback = nullptr;
    QBoxLayout_Count_Callback qboxlayout_count_callback = nullptr;
    QBoxLayout_SetGeometry_Callback qboxlayout_setgeometry_callback = nullptr;
    QBoxLayout_Geometry_Callback qboxlayout_geometry_callback = nullptr;
    QBoxLayout_IndexOf_Callback qboxlayout_indexof_callback = nullptr;
    QBoxLayout_IsEmpty_Callback qboxlayout_isempty_callback = nullptr;
    QBoxLayout_ControlTypes_Callback qboxlayout_controltypes_callback = nullptr;
    QBoxLayout_ReplaceWidget_Callback qboxlayout_replacewidget_callback = nullptr;
    QBoxLayout_Layout_Callback qboxlayout_layout_callback = nullptr;
    QBoxLayout_ChildEvent_Callback qboxlayout_childevent_callback = nullptr;
    QBoxLayout_Event_Callback qboxlayout_event_callback = nullptr;
    QBoxLayout_EventFilter_Callback qboxlayout_eventfilter_callback = nullptr;
    QBoxLayout_TimerEvent_Callback qboxlayout_timerevent_callback = nullptr;
    QBoxLayout_CustomEvent_Callback qboxlayout_customevent_callback = nullptr;
    QBoxLayout_ConnectNotify_Callback qboxlayout_connectnotify_callback = nullptr;
    QBoxLayout_DisconnectNotify_Callback qboxlayout_disconnectnotify_callback = nullptr;
    QBoxLayout_Widget_Callback qboxlayout_widget_callback = nullptr;
    QBoxLayout_SpacerItem_Callback qboxlayout_spaceritem_callback = nullptr;
    QBoxLayout_WidgetEvent_Callback qboxlayout_widgetevent_callback = nullptr;
    QBoxLayout_AddChildLayout_Callback qboxlayout_addchildlayout_callback = nullptr;
    QBoxLayout_AddChildWidget_Callback qboxlayout_addchildwidget_callback = nullptr;
    QBoxLayout_AdoptLayout_Callback qboxlayout_adoptlayout_callback = nullptr;
    QBoxLayout_AlignmentRect_Callback qboxlayout_alignmentrect_callback = nullptr;
    QBoxLayout_Sender_Callback qboxlayout_sender_callback = nullptr;
    QBoxLayout_SenderSignalIndex_Callback qboxlayout_sendersignalindex_callback = nullptr;
    QBoxLayout_Receivers_Callback qboxlayout_receivers_callback = nullptr;
    QBoxLayout_IsSignalConnected_Callback qboxlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qboxlayout_metacall_isbase = false;
    mutable bool qboxlayout_additem_isbase = false;
    mutable bool qboxlayout_spacing_isbase = false;
    mutable bool qboxlayout_setspacing_isbase = false;
    mutable bool qboxlayout_sizehint_isbase = false;
    mutable bool qboxlayout_minimumsize_isbase = false;
    mutable bool qboxlayout_maximumsize_isbase = false;
    mutable bool qboxlayout_hasheightforwidth_isbase = false;
    mutable bool qboxlayout_heightforwidth_isbase = false;
    mutable bool qboxlayout_minimumheightforwidth_isbase = false;
    mutable bool qboxlayout_expandingdirections_isbase = false;
    mutable bool qboxlayout_invalidate_isbase = false;
    mutable bool qboxlayout_itemat_isbase = false;
    mutable bool qboxlayout_takeat_isbase = false;
    mutable bool qboxlayout_count_isbase = false;
    mutable bool qboxlayout_setgeometry_isbase = false;
    mutable bool qboxlayout_geometry_isbase = false;
    mutable bool qboxlayout_indexof_isbase = false;
    mutable bool qboxlayout_isempty_isbase = false;
    mutable bool qboxlayout_controltypes_isbase = false;
    mutable bool qboxlayout_replacewidget_isbase = false;
    mutable bool qboxlayout_layout_isbase = false;
    mutable bool qboxlayout_childevent_isbase = false;
    mutable bool qboxlayout_event_isbase = false;
    mutable bool qboxlayout_eventfilter_isbase = false;
    mutable bool qboxlayout_timerevent_isbase = false;
    mutable bool qboxlayout_customevent_isbase = false;
    mutable bool qboxlayout_connectnotify_isbase = false;
    mutable bool qboxlayout_disconnectnotify_isbase = false;
    mutable bool qboxlayout_widget_isbase = false;
    mutable bool qboxlayout_spaceritem_isbase = false;
    mutable bool qboxlayout_widgetevent_isbase = false;
    mutable bool qboxlayout_addchildlayout_isbase = false;
    mutable bool qboxlayout_addchildwidget_isbase = false;
    mutable bool qboxlayout_adoptlayout_isbase = false;
    mutable bool qboxlayout_alignmentrect_isbase = false;
    mutable bool qboxlayout_sender_isbase = false;
    mutable bool qboxlayout_sendersignalindex_isbase = false;
    mutable bool qboxlayout_receivers_isbase = false;
    mutable bool qboxlayout_issignalconnected_isbase = false;

  public:
    VirtualQBoxLayout(QBoxLayout::Direction param1) : QBoxLayout(param1) {};
    VirtualQBoxLayout(QBoxLayout::Direction param1, QWidget* parent) : QBoxLayout(param1, parent) {};

    ~VirtualQBoxLayout() {
        qboxlayout_metacall_callback = nullptr;
        qboxlayout_additem_callback = nullptr;
        qboxlayout_spacing_callback = nullptr;
        qboxlayout_setspacing_callback = nullptr;
        qboxlayout_sizehint_callback = nullptr;
        qboxlayout_minimumsize_callback = nullptr;
        qboxlayout_maximumsize_callback = nullptr;
        qboxlayout_hasheightforwidth_callback = nullptr;
        qboxlayout_heightforwidth_callback = nullptr;
        qboxlayout_minimumheightforwidth_callback = nullptr;
        qboxlayout_expandingdirections_callback = nullptr;
        qboxlayout_invalidate_callback = nullptr;
        qboxlayout_itemat_callback = nullptr;
        qboxlayout_takeat_callback = nullptr;
        qboxlayout_count_callback = nullptr;
        qboxlayout_setgeometry_callback = nullptr;
        qboxlayout_geometry_callback = nullptr;
        qboxlayout_indexof_callback = nullptr;
        qboxlayout_isempty_callback = nullptr;
        qboxlayout_controltypes_callback = nullptr;
        qboxlayout_replacewidget_callback = nullptr;
        qboxlayout_layout_callback = nullptr;
        qboxlayout_childevent_callback = nullptr;
        qboxlayout_event_callback = nullptr;
        qboxlayout_eventfilter_callback = nullptr;
        qboxlayout_timerevent_callback = nullptr;
        qboxlayout_customevent_callback = nullptr;
        qboxlayout_connectnotify_callback = nullptr;
        qboxlayout_disconnectnotify_callback = nullptr;
        qboxlayout_widget_callback = nullptr;
        qboxlayout_spaceritem_callback = nullptr;
        qboxlayout_widgetevent_callback = nullptr;
        qboxlayout_addchildlayout_callback = nullptr;
        qboxlayout_addchildwidget_callback = nullptr;
        qboxlayout_adoptlayout_callback = nullptr;
        qboxlayout_alignmentrect_callback = nullptr;
        qboxlayout_sender_callback = nullptr;
        qboxlayout_sendersignalindex_callback = nullptr;
        qboxlayout_receivers_callback = nullptr;
        qboxlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQBoxLayout_Metacall_Callback(QBoxLayout_Metacall_Callback cb) { qboxlayout_metacall_callback = cb; }
    inline void setQBoxLayout_AddItem_Callback(QBoxLayout_AddItem_Callback cb) { qboxlayout_additem_callback = cb; }
    inline void setQBoxLayout_Spacing_Callback(QBoxLayout_Spacing_Callback cb) { qboxlayout_spacing_callback = cb; }
    inline void setQBoxLayout_SetSpacing_Callback(QBoxLayout_SetSpacing_Callback cb) { qboxlayout_setspacing_callback = cb; }
    inline void setQBoxLayout_SizeHint_Callback(QBoxLayout_SizeHint_Callback cb) { qboxlayout_sizehint_callback = cb; }
    inline void setQBoxLayout_MinimumSize_Callback(QBoxLayout_MinimumSize_Callback cb) { qboxlayout_minimumsize_callback = cb; }
    inline void setQBoxLayout_MaximumSize_Callback(QBoxLayout_MaximumSize_Callback cb) { qboxlayout_maximumsize_callback = cb; }
    inline void setQBoxLayout_HasHeightForWidth_Callback(QBoxLayout_HasHeightForWidth_Callback cb) { qboxlayout_hasheightforwidth_callback = cb; }
    inline void setQBoxLayout_HeightForWidth_Callback(QBoxLayout_HeightForWidth_Callback cb) { qboxlayout_heightforwidth_callback = cb; }
    inline void setQBoxLayout_MinimumHeightForWidth_Callback(QBoxLayout_MinimumHeightForWidth_Callback cb) { qboxlayout_minimumheightforwidth_callback = cb; }
    inline void setQBoxLayout_ExpandingDirections_Callback(QBoxLayout_ExpandingDirections_Callback cb) { qboxlayout_expandingdirections_callback = cb; }
    inline void setQBoxLayout_Invalidate_Callback(QBoxLayout_Invalidate_Callback cb) { qboxlayout_invalidate_callback = cb; }
    inline void setQBoxLayout_ItemAt_Callback(QBoxLayout_ItemAt_Callback cb) { qboxlayout_itemat_callback = cb; }
    inline void setQBoxLayout_TakeAt_Callback(QBoxLayout_TakeAt_Callback cb) { qboxlayout_takeat_callback = cb; }
    inline void setQBoxLayout_Count_Callback(QBoxLayout_Count_Callback cb) { qboxlayout_count_callback = cb; }
    inline void setQBoxLayout_SetGeometry_Callback(QBoxLayout_SetGeometry_Callback cb) { qboxlayout_setgeometry_callback = cb; }
    inline void setQBoxLayout_Geometry_Callback(QBoxLayout_Geometry_Callback cb) { qboxlayout_geometry_callback = cb; }
    inline void setQBoxLayout_IndexOf_Callback(QBoxLayout_IndexOf_Callback cb) { qboxlayout_indexof_callback = cb; }
    inline void setQBoxLayout_IsEmpty_Callback(QBoxLayout_IsEmpty_Callback cb) { qboxlayout_isempty_callback = cb; }
    inline void setQBoxLayout_ControlTypes_Callback(QBoxLayout_ControlTypes_Callback cb) { qboxlayout_controltypes_callback = cb; }
    inline void setQBoxLayout_ReplaceWidget_Callback(QBoxLayout_ReplaceWidget_Callback cb) { qboxlayout_replacewidget_callback = cb; }
    inline void setQBoxLayout_Layout_Callback(QBoxLayout_Layout_Callback cb) { qboxlayout_layout_callback = cb; }
    inline void setQBoxLayout_ChildEvent_Callback(QBoxLayout_ChildEvent_Callback cb) { qboxlayout_childevent_callback = cb; }
    inline void setQBoxLayout_Event_Callback(QBoxLayout_Event_Callback cb) { qboxlayout_event_callback = cb; }
    inline void setQBoxLayout_EventFilter_Callback(QBoxLayout_EventFilter_Callback cb) { qboxlayout_eventfilter_callback = cb; }
    inline void setQBoxLayout_TimerEvent_Callback(QBoxLayout_TimerEvent_Callback cb) { qboxlayout_timerevent_callback = cb; }
    inline void setQBoxLayout_CustomEvent_Callback(QBoxLayout_CustomEvent_Callback cb) { qboxlayout_customevent_callback = cb; }
    inline void setQBoxLayout_ConnectNotify_Callback(QBoxLayout_ConnectNotify_Callback cb) { qboxlayout_connectnotify_callback = cb; }
    inline void setQBoxLayout_DisconnectNotify_Callback(QBoxLayout_DisconnectNotify_Callback cb) { qboxlayout_disconnectnotify_callback = cb; }
    inline void setQBoxLayout_Widget_Callback(QBoxLayout_Widget_Callback cb) { qboxlayout_widget_callback = cb; }
    inline void setQBoxLayout_SpacerItem_Callback(QBoxLayout_SpacerItem_Callback cb) { qboxlayout_spaceritem_callback = cb; }
    inline void setQBoxLayout_WidgetEvent_Callback(QBoxLayout_WidgetEvent_Callback cb) { qboxlayout_widgetevent_callback = cb; }
    inline void setQBoxLayout_AddChildLayout_Callback(QBoxLayout_AddChildLayout_Callback cb) { qboxlayout_addchildlayout_callback = cb; }
    inline void setQBoxLayout_AddChildWidget_Callback(QBoxLayout_AddChildWidget_Callback cb) { qboxlayout_addchildwidget_callback = cb; }
    inline void setQBoxLayout_AdoptLayout_Callback(QBoxLayout_AdoptLayout_Callback cb) { qboxlayout_adoptlayout_callback = cb; }
    inline void setQBoxLayout_AlignmentRect_Callback(QBoxLayout_AlignmentRect_Callback cb) { qboxlayout_alignmentrect_callback = cb; }
    inline void setQBoxLayout_Sender_Callback(QBoxLayout_Sender_Callback cb) { qboxlayout_sender_callback = cb; }
    inline void setQBoxLayout_SenderSignalIndex_Callback(QBoxLayout_SenderSignalIndex_Callback cb) { qboxlayout_sendersignalindex_callback = cb; }
    inline void setQBoxLayout_Receivers_Callback(QBoxLayout_Receivers_Callback cb) { qboxlayout_receivers_callback = cb; }
    inline void setQBoxLayout_IsSignalConnected_Callback(QBoxLayout_IsSignalConnected_Callback cb) { qboxlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBoxLayout_Metacall_IsBase(bool value) const { qboxlayout_metacall_isbase = value; }
    inline void setQBoxLayout_AddItem_IsBase(bool value) const { qboxlayout_additem_isbase = value; }
    inline void setQBoxLayout_Spacing_IsBase(bool value) const { qboxlayout_spacing_isbase = value; }
    inline void setQBoxLayout_SetSpacing_IsBase(bool value) const { qboxlayout_setspacing_isbase = value; }
    inline void setQBoxLayout_SizeHint_IsBase(bool value) const { qboxlayout_sizehint_isbase = value; }
    inline void setQBoxLayout_MinimumSize_IsBase(bool value) const { qboxlayout_minimumsize_isbase = value; }
    inline void setQBoxLayout_MaximumSize_IsBase(bool value) const { qboxlayout_maximumsize_isbase = value; }
    inline void setQBoxLayout_HasHeightForWidth_IsBase(bool value) const { qboxlayout_hasheightforwidth_isbase = value; }
    inline void setQBoxLayout_HeightForWidth_IsBase(bool value) const { qboxlayout_heightforwidth_isbase = value; }
    inline void setQBoxLayout_MinimumHeightForWidth_IsBase(bool value) const { qboxlayout_minimumheightforwidth_isbase = value; }
    inline void setQBoxLayout_ExpandingDirections_IsBase(bool value) const { qboxlayout_expandingdirections_isbase = value; }
    inline void setQBoxLayout_Invalidate_IsBase(bool value) const { qboxlayout_invalidate_isbase = value; }
    inline void setQBoxLayout_ItemAt_IsBase(bool value) const { qboxlayout_itemat_isbase = value; }
    inline void setQBoxLayout_TakeAt_IsBase(bool value) const { qboxlayout_takeat_isbase = value; }
    inline void setQBoxLayout_Count_IsBase(bool value) const { qboxlayout_count_isbase = value; }
    inline void setQBoxLayout_SetGeometry_IsBase(bool value) const { qboxlayout_setgeometry_isbase = value; }
    inline void setQBoxLayout_Geometry_IsBase(bool value) const { qboxlayout_geometry_isbase = value; }
    inline void setQBoxLayout_IndexOf_IsBase(bool value) const { qboxlayout_indexof_isbase = value; }
    inline void setQBoxLayout_IsEmpty_IsBase(bool value) const { qboxlayout_isempty_isbase = value; }
    inline void setQBoxLayout_ControlTypes_IsBase(bool value) const { qboxlayout_controltypes_isbase = value; }
    inline void setQBoxLayout_ReplaceWidget_IsBase(bool value) const { qboxlayout_replacewidget_isbase = value; }
    inline void setQBoxLayout_Layout_IsBase(bool value) const { qboxlayout_layout_isbase = value; }
    inline void setQBoxLayout_ChildEvent_IsBase(bool value) const { qboxlayout_childevent_isbase = value; }
    inline void setQBoxLayout_Event_IsBase(bool value) const { qboxlayout_event_isbase = value; }
    inline void setQBoxLayout_EventFilter_IsBase(bool value) const { qboxlayout_eventfilter_isbase = value; }
    inline void setQBoxLayout_TimerEvent_IsBase(bool value) const { qboxlayout_timerevent_isbase = value; }
    inline void setQBoxLayout_CustomEvent_IsBase(bool value) const { qboxlayout_customevent_isbase = value; }
    inline void setQBoxLayout_ConnectNotify_IsBase(bool value) const { qboxlayout_connectnotify_isbase = value; }
    inline void setQBoxLayout_DisconnectNotify_IsBase(bool value) const { qboxlayout_disconnectnotify_isbase = value; }
    inline void setQBoxLayout_Widget_IsBase(bool value) const { qboxlayout_widget_isbase = value; }
    inline void setQBoxLayout_SpacerItem_IsBase(bool value) const { qboxlayout_spaceritem_isbase = value; }
    inline void setQBoxLayout_WidgetEvent_IsBase(bool value) const { qboxlayout_widgetevent_isbase = value; }
    inline void setQBoxLayout_AddChildLayout_IsBase(bool value) const { qboxlayout_addchildlayout_isbase = value; }
    inline void setQBoxLayout_AddChildWidget_IsBase(bool value) const { qboxlayout_addchildwidget_isbase = value; }
    inline void setQBoxLayout_AdoptLayout_IsBase(bool value) const { qboxlayout_adoptlayout_isbase = value; }
    inline void setQBoxLayout_AlignmentRect_IsBase(bool value) const { qboxlayout_alignmentrect_isbase = value; }
    inline void setQBoxLayout_Sender_IsBase(bool value) const { qboxlayout_sender_isbase = value; }
    inline void setQBoxLayout_SenderSignalIndex_IsBase(bool value) const { qboxlayout_sendersignalindex_isbase = value; }
    inline void setQBoxLayout_Receivers_IsBase(bool value) const { qboxlayout_receivers_isbase = value; }
    inline void setQBoxLayout_IsSignalConnected_IsBase(bool value) const { qboxlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxlayout_metacall_isbase) {
            qboxlayout_metacall_isbase = false;
            return QBoxLayout::qt_metacall(param1, param2, param3);
        } else if (qboxlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qboxlayout_additem_isbase) {
            qboxlayout_additem_isbase = false;
            QBoxLayout::addItem(param1);
        } else if (qboxlayout_additem_callback != nullptr) {
            QLayoutItem* cbval1 = param1;

            qboxlayout_additem_callback(this, cbval1);
        } else {
            QBoxLayout::addItem(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qboxlayout_spacing_isbase) {
            qboxlayout_spacing_isbase = false;
            return QBoxLayout::spacing();
        } else if (qboxlayout_spacing_callback != nullptr) {
            int callback_ret = qboxlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qboxlayout_setspacing_isbase) {
            qboxlayout_setspacing_isbase = false;
            QBoxLayout::setSpacing(spacing);
        } else if (qboxlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qboxlayout_setspacing_callback(this, cbval1);
        } else {
            QBoxLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qboxlayout_sizehint_isbase) {
            qboxlayout_sizehint_isbase = false;
            return QBoxLayout::sizeHint();
        } else if (qboxlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qboxlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return QBoxLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qboxlayout_minimumsize_isbase) {
            qboxlayout_minimumsize_isbase = false;
            return QBoxLayout::minimumSize();
        } else if (qboxlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qboxlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QBoxLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qboxlayout_maximumsize_isbase) {
            qboxlayout_maximumsize_isbase = false;
            return QBoxLayout::maximumSize();
        } else if (qboxlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qboxlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QBoxLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qboxlayout_hasheightforwidth_isbase) {
            qboxlayout_hasheightforwidth_isbase = false;
            return QBoxLayout::hasHeightForWidth();
        } else if (qboxlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qboxlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QBoxLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qboxlayout_heightforwidth_isbase) {
            qboxlayout_heightforwidth_isbase = false;
            return QBoxLayout::heightForWidth(param1);
        } else if (qboxlayout_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qboxlayout_minimumheightforwidth_isbase) {
            qboxlayout_minimumheightforwidth_isbase = false;
            return QBoxLayout::minimumHeightForWidth(param1);
        } else if (qboxlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qboxlayout_expandingdirections_isbase) {
            qboxlayout_expandingdirections_isbase = false;
            return QBoxLayout::expandingDirections();
        } else if (qboxlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qboxlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QBoxLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qboxlayout_invalidate_isbase) {
            qboxlayout_invalidate_isbase = false;
            QBoxLayout::invalidate();
        } else if (qboxlayout_invalidate_callback != nullptr) {
            qboxlayout_invalidate_callback();
        } else {
            QBoxLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qboxlayout_itemat_isbase) {
            qboxlayout_itemat_isbase = false;
            return QBoxLayout::itemAt(param1);
        } else if (qboxlayout_itemat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBoxLayout::itemAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qboxlayout_takeat_isbase) {
            qboxlayout_takeat_isbase = false;
            return QBoxLayout::takeAt(param1);
        } else if (qboxlayout_takeat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBoxLayout::takeAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qboxlayout_count_isbase) {
            qboxlayout_count_isbase = false;
            return QBoxLayout::count();
        } else if (qboxlayout_count_callback != nullptr) {
            int callback_ret = qboxlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qboxlayout_setgeometry_isbase) {
            qboxlayout_setgeometry_isbase = false;
            QBoxLayout::setGeometry(geometry);
        } else if (qboxlayout_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qboxlayout_setgeometry_callback(this, cbval1);
        } else {
            QBoxLayout::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qboxlayout_geometry_isbase) {
            qboxlayout_geometry_isbase = false;
            return QBoxLayout::geometry();
        } else if (qboxlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qboxlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QBoxLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qboxlayout_indexof_isbase) {
            qboxlayout_indexof_isbase = false;
            return QBoxLayout::indexOf(param1);
        } else if (qboxlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qboxlayout_isempty_isbase) {
            qboxlayout_isempty_isbase = false;
            return QBoxLayout::isEmpty();
        } else if (qboxlayout_isempty_callback != nullptr) {
            bool callback_ret = qboxlayout_isempty_callback();
            return callback_ret;
        } else {
            return QBoxLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qboxlayout_controltypes_isbase) {
            qboxlayout_controltypes_isbase = false;
            return QBoxLayout::controlTypes();
        } else if (qboxlayout_controltypes_callback != nullptr) {
            int callback_ret = qboxlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QBoxLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qboxlayout_replacewidget_isbase) {
            qboxlayout_replacewidget_isbase = false;
            return QBoxLayout::replaceWidget(from, to, options);
        } else if (qboxlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QBoxLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qboxlayout_layout_isbase) {
            qboxlayout_layout_isbase = false;
            return QBoxLayout::layout();
        } else if (qboxlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qboxlayout_layout_callback();
            return callback_ret;
        } else {
            return QBoxLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qboxlayout_childevent_isbase) {
            qboxlayout_childevent_isbase = false;
            QBoxLayout::childEvent(e);
        } else if (qboxlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qboxlayout_childevent_callback(this, cbval1);
        } else {
            QBoxLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxlayout_event_isbase) {
            qboxlayout_event_isbase = false;
            return QBoxLayout::event(event);
        } else if (qboxlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qboxlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBoxLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxlayout_eventfilter_isbase) {
            qboxlayout_eventfilter_isbase = false;
            return QBoxLayout::eventFilter(watched, event);
        } else if (qboxlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QBoxLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxlayout_timerevent_isbase) {
            qboxlayout_timerevent_isbase = false;
            QBoxLayout::timerEvent(event);
        } else if (qboxlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qboxlayout_timerevent_callback(this, cbval1);
        } else {
            QBoxLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxlayout_customevent_isbase) {
            qboxlayout_customevent_isbase = false;
            QBoxLayout::customEvent(event);
        } else if (qboxlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qboxlayout_customevent_callback(this, cbval1);
        } else {
            QBoxLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxlayout_connectnotify_isbase) {
            qboxlayout_connectnotify_isbase = false;
            QBoxLayout::connectNotify(signal);
        } else if (qboxlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qboxlayout_connectnotify_callback(this, cbval1);
        } else {
            QBoxLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxlayout_disconnectnotify_isbase) {
            qboxlayout_disconnectnotify_isbase = false;
            QBoxLayout::disconnectNotify(signal);
        } else if (qboxlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qboxlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QBoxLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qboxlayout_widget_isbase) {
            qboxlayout_widget_isbase = false;
            return QBoxLayout::widget();
        } else if (qboxlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qboxlayout_widget_callback();
            return callback_ret;
        } else {
            return QBoxLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qboxlayout_spaceritem_isbase) {
            qboxlayout_spaceritem_isbase = false;
            return QBoxLayout::spacerItem();
        } else if (qboxlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qboxlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QBoxLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qboxlayout_widgetevent_isbase) {
            qboxlayout_widgetevent_isbase = false;
            QBoxLayout::widgetEvent(param1);
        } else if (qboxlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qboxlayout_widgetevent_callback(this, cbval1);
        } else {
            QBoxLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qboxlayout_addchildlayout_isbase) {
            qboxlayout_addchildlayout_isbase = false;
            QBoxLayout::addChildLayout(l);
        } else if (qboxlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qboxlayout_addchildlayout_callback(this, cbval1);
        } else {
            QBoxLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qboxlayout_addchildwidget_isbase) {
            qboxlayout_addchildwidget_isbase = false;
            QBoxLayout::addChildWidget(w);
        } else if (qboxlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qboxlayout_addchildwidget_callback(this, cbval1);
        } else {
            QBoxLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qboxlayout_adoptlayout_isbase) {
            qboxlayout_adoptlayout_isbase = false;
            return QBoxLayout::adoptLayout(layout);
        } else if (qboxlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qboxlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBoxLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qboxlayout_alignmentrect_isbase) {
            qboxlayout_alignmentrect_isbase = false;
            return QBoxLayout::alignmentRect(param1);
        } else if (qboxlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qboxlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QBoxLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxlayout_sender_isbase) {
            qboxlayout_sender_isbase = false;
            return QBoxLayout::sender();
        } else if (qboxlayout_sender_callback != nullptr) {
            QObject* callback_ret = qboxlayout_sender_callback();
            return callback_ret;
        } else {
            return QBoxLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxlayout_sendersignalindex_isbase) {
            qboxlayout_sendersignalindex_isbase = false;
            return QBoxLayout::senderSignalIndex();
        } else if (qboxlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qboxlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxlayout_receivers_isbase) {
            qboxlayout_receivers_isbase = false;
            return QBoxLayout::receivers(signal);
        } else if (qboxlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qboxlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBoxLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxlayout_issignalconnected_isbase) {
            qboxlayout_issignalconnected_isbase = false;
            return QBoxLayout::isSignalConnected(signal);
        } else if (qboxlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qboxlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBoxLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QBoxLayout_ChildEvent(QBoxLayout* self, QChildEvent* e);
    friend void QBoxLayout_QBaseChildEvent(QBoxLayout* self, QChildEvent* e);
    friend void QBoxLayout_TimerEvent(QBoxLayout* self, QTimerEvent* event);
    friend void QBoxLayout_QBaseTimerEvent(QBoxLayout* self, QTimerEvent* event);
    friend void QBoxLayout_CustomEvent(QBoxLayout* self, QEvent* event);
    friend void QBoxLayout_QBaseCustomEvent(QBoxLayout* self, QEvent* event);
    friend void QBoxLayout_ConnectNotify(QBoxLayout* self, const QMetaMethod* signal);
    friend void QBoxLayout_QBaseConnectNotify(QBoxLayout* self, const QMetaMethod* signal);
    friend void QBoxLayout_DisconnectNotify(QBoxLayout* self, const QMetaMethod* signal);
    friend void QBoxLayout_QBaseDisconnectNotify(QBoxLayout* self, const QMetaMethod* signal);
    friend void QBoxLayout_WidgetEvent(QBoxLayout* self, QEvent* param1);
    friend void QBoxLayout_QBaseWidgetEvent(QBoxLayout* self, QEvent* param1);
    friend void QBoxLayout_AddChildLayout(QBoxLayout* self, QLayout* l);
    friend void QBoxLayout_QBaseAddChildLayout(QBoxLayout* self, QLayout* l);
    friend void QBoxLayout_AddChildWidget(QBoxLayout* self, QWidget* w);
    friend void QBoxLayout_QBaseAddChildWidget(QBoxLayout* self, QWidget* w);
    friend bool QBoxLayout_AdoptLayout(QBoxLayout* self, QLayout* layout);
    friend bool QBoxLayout_QBaseAdoptLayout(QBoxLayout* self, QLayout* layout);
    friend QRect* QBoxLayout_AlignmentRect(const QBoxLayout* self, const QRect* param1);
    friend QRect* QBoxLayout_QBaseAlignmentRect(const QBoxLayout* self, const QRect* param1);
    friend QObject* QBoxLayout_Sender(const QBoxLayout* self);
    friend QObject* QBoxLayout_QBaseSender(const QBoxLayout* self);
    friend int QBoxLayout_SenderSignalIndex(const QBoxLayout* self);
    friend int QBoxLayout_QBaseSenderSignalIndex(const QBoxLayout* self);
    friend int QBoxLayout_Receivers(const QBoxLayout* self, const char* signal);
    friend int QBoxLayout_QBaseReceivers(const QBoxLayout* self, const char* signal);
    friend bool QBoxLayout_IsSignalConnected(const QBoxLayout* self, const QMetaMethod* signal);
    friend bool QBoxLayout_QBaseIsSignalConnected(const QBoxLayout* self, const QMetaMethod* signal);
};

// This class is a subclass of QHBoxLayout so that we can call protected methods
class VirtualQHBoxLayout final : public QHBoxLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQHBoxLayout = true;

    // Virtual class public types (including callbacks)
    using QHBoxLayout_Metacall_Callback = int (*)(QHBoxLayout*, int, int, void**);
    using QHBoxLayout_AddItem_Callback = void (*)(QHBoxLayout*, QLayoutItem*);
    using QHBoxLayout_Spacing_Callback = int (*)();
    using QHBoxLayout_SetSpacing_Callback = void (*)(QHBoxLayout*, int);
    using QHBoxLayout_SizeHint_Callback = QSize* (*)();
    using QHBoxLayout_MinimumSize_Callback = QSize* (*)();
    using QHBoxLayout_MaximumSize_Callback = QSize* (*)();
    using QHBoxLayout_HasHeightForWidth_Callback = bool (*)();
    using QHBoxLayout_HeightForWidth_Callback = int (*)(const QHBoxLayout*, int);
    using QHBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QHBoxLayout*, int);
    using QHBoxLayout_ExpandingDirections_Callback = int (*)();
    using QHBoxLayout_Invalidate_Callback = void (*)();
    using QHBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QHBoxLayout*, int);
    using QHBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QHBoxLayout*, int);
    using QHBoxLayout_Count_Callback = int (*)();
    using QHBoxLayout_SetGeometry_Callback = void (*)(QHBoxLayout*, QRect*);
    using QHBoxLayout_Geometry_Callback = QRect* (*)();
    using QHBoxLayout_IndexOf_Callback = int (*)(const QHBoxLayout*, QWidget*);
    using QHBoxLayout_IsEmpty_Callback = bool (*)();
    using QHBoxLayout_ControlTypes_Callback = int (*)();
    using QHBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QHBoxLayout*, QWidget*, QWidget*, int);
    using QHBoxLayout_Layout_Callback = QLayout* (*)();
    using QHBoxLayout_ChildEvent_Callback = void (*)(QHBoxLayout*, QChildEvent*);
    using QHBoxLayout_Event_Callback = bool (*)(QHBoxLayout*, QEvent*);
    using QHBoxLayout_EventFilter_Callback = bool (*)(QHBoxLayout*, QObject*, QEvent*);
    using QHBoxLayout_TimerEvent_Callback = void (*)(QHBoxLayout*, QTimerEvent*);
    using QHBoxLayout_CustomEvent_Callback = void (*)(QHBoxLayout*, QEvent*);
    using QHBoxLayout_ConnectNotify_Callback = void (*)(QHBoxLayout*, QMetaMethod*);
    using QHBoxLayout_DisconnectNotify_Callback = void (*)(QHBoxLayout*, QMetaMethod*);
    using QHBoxLayout_Widget_Callback = QWidget* (*)();
    using QHBoxLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QHBoxLayout_WidgetEvent_Callback = void (*)(QHBoxLayout*, QEvent*);
    using QHBoxLayout_AddChildLayout_Callback = void (*)(QHBoxLayout*, QLayout*);
    using QHBoxLayout_AddChildWidget_Callback = void (*)(QHBoxLayout*, QWidget*);
    using QHBoxLayout_AdoptLayout_Callback = bool (*)(QHBoxLayout*, QLayout*);
    using QHBoxLayout_AlignmentRect_Callback = QRect* (*)(const QHBoxLayout*, QRect*);
    using QHBoxLayout_Sender_Callback = QObject* (*)();
    using QHBoxLayout_SenderSignalIndex_Callback = int (*)();
    using QHBoxLayout_Receivers_Callback = int (*)(const QHBoxLayout*, const char*);
    using QHBoxLayout_IsSignalConnected_Callback = bool (*)(const QHBoxLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHBoxLayout_Metacall_Callback qhboxlayout_metacall_callback = nullptr;
    QHBoxLayout_AddItem_Callback qhboxlayout_additem_callback = nullptr;
    QHBoxLayout_Spacing_Callback qhboxlayout_spacing_callback = nullptr;
    QHBoxLayout_SetSpacing_Callback qhboxlayout_setspacing_callback = nullptr;
    QHBoxLayout_SizeHint_Callback qhboxlayout_sizehint_callback = nullptr;
    QHBoxLayout_MinimumSize_Callback qhboxlayout_minimumsize_callback = nullptr;
    QHBoxLayout_MaximumSize_Callback qhboxlayout_maximumsize_callback = nullptr;
    QHBoxLayout_HasHeightForWidth_Callback qhboxlayout_hasheightforwidth_callback = nullptr;
    QHBoxLayout_HeightForWidth_Callback qhboxlayout_heightforwidth_callback = nullptr;
    QHBoxLayout_MinimumHeightForWidth_Callback qhboxlayout_minimumheightforwidth_callback = nullptr;
    QHBoxLayout_ExpandingDirections_Callback qhboxlayout_expandingdirections_callback = nullptr;
    QHBoxLayout_Invalidate_Callback qhboxlayout_invalidate_callback = nullptr;
    QHBoxLayout_ItemAt_Callback qhboxlayout_itemat_callback = nullptr;
    QHBoxLayout_TakeAt_Callback qhboxlayout_takeat_callback = nullptr;
    QHBoxLayout_Count_Callback qhboxlayout_count_callback = nullptr;
    QHBoxLayout_SetGeometry_Callback qhboxlayout_setgeometry_callback = nullptr;
    QHBoxLayout_Geometry_Callback qhboxlayout_geometry_callback = nullptr;
    QHBoxLayout_IndexOf_Callback qhboxlayout_indexof_callback = nullptr;
    QHBoxLayout_IsEmpty_Callback qhboxlayout_isempty_callback = nullptr;
    QHBoxLayout_ControlTypes_Callback qhboxlayout_controltypes_callback = nullptr;
    QHBoxLayout_ReplaceWidget_Callback qhboxlayout_replacewidget_callback = nullptr;
    QHBoxLayout_Layout_Callback qhboxlayout_layout_callback = nullptr;
    QHBoxLayout_ChildEvent_Callback qhboxlayout_childevent_callback = nullptr;
    QHBoxLayout_Event_Callback qhboxlayout_event_callback = nullptr;
    QHBoxLayout_EventFilter_Callback qhboxlayout_eventfilter_callback = nullptr;
    QHBoxLayout_TimerEvent_Callback qhboxlayout_timerevent_callback = nullptr;
    QHBoxLayout_CustomEvent_Callback qhboxlayout_customevent_callback = nullptr;
    QHBoxLayout_ConnectNotify_Callback qhboxlayout_connectnotify_callback = nullptr;
    QHBoxLayout_DisconnectNotify_Callback qhboxlayout_disconnectnotify_callback = nullptr;
    QHBoxLayout_Widget_Callback qhboxlayout_widget_callback = nullptr;
    QHBoxLayout_SpacerItem_Callback qhboxlayout_spaceritem_callback = nullptr;
    QHBoxLayout_WidgetEvent_Callback qhboxlayout_widgetevent_callback = nullptr;
    QHBoxLayout_AddChildLayout_Callback qhboxlayout_addchildlayout_callback = nullptr;
    QHBoxLayout_AddChildWidget_Callback qhboxlayout_addchildwidget_callback = nullptr;
    QHBoxLayout_AdoptLayout_Callback qhboxlayout_adoptlayout_callback = nullptr;
    QHBoxLayout_AlignmentRect_Callback qhboxlayout_alignmentrect_callback = nullptr;
    QHBoxLayout_Sender_Callback qhboxlayout_sender_callback = nullptr;
    QHBoxLayout_SenderSignalIndex_Callback qhboxlayout_sendersignalindex_callback = nullptr;
    QHBoxLayout_Receivers_Callback qhboxlayout_receivers_callback = nullptr;
    QHBoxLayout_IsSignalConnected_Callback qhboxlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhboxlayout_metacall_isbase = false;
    mutable bool qhboxlayout_additem_isbase = false;
    mutable bool qhboxlayout_spacing_isbase = false;
    mutable bool qhboxlayout_setspacing_isbase = false;
    mutable bool qhboxlayout_sizehint_isbase = false;
    mutable bool qhboxlayout_minimumsize_isbase = false;
    mutable bool qhboxlayout_maximumsize_isbase = false;
    mutable bool qhboxlayout_hasheightforwidth_isbase = false;
    mutable bool qhboxlayout_heightforwidth_isbase = false;
    mutable bool qhboxlayout_minimumheightforwidth_isbase = false;
    mutable bool qhboxlayout_expandingdirections_isbase = false;
    mutable bool qhboxlayout_invalidate_isbase = false;
    mutable bool qhboxlayout_itemat_isbase = false;
    mutable bool qhboxlayout_takeat_isbase = false;
    mutable bool qhboxlayout_count_isbase = false;
    mutable bool qhboxlayout_setgeometry_isbase = false;
    mutable bool qhboxlayout_geometry_isbase = false;
    mutable bool qhboxlayout_indexof_isbase = false;
    mutable bool qhboxlayout_isempty_isbase = false;
    mutable bool qhboxlayout_controltypes_isbase = false;
    mutable bool qhboxlayout_replacewidget_isbase = false;
    mutable bool qhboxlayout_layout_isbase = false;
    mutable bool qhboxlayout_childevent_isbase = false;
    mutable bool qhboxlayout_event_isbase = false;
    mutable bool qhboxlayout_eventfilter_isbase = false;
    mutable bool qhboxlayout_timerevent_isbase = false;
    mutable bool qhboxlayout_customevent_isbase = false;
    mutable bool qhboxlayout_connectnotify_isbase = false;
    mutable bool qhboxlayout_disconnectnotify_isbase = false;
    mutable bool qhboxlayout_widget_isbase = false;
    mutable bool qhboxlayout_spaceritem_isbase = false;
    mutable bool qhboxlayout_widgetevent_isbase = false;
    mutable bool qhboxlayout_addchildlayout_isbase = false;
    mutable bool qhboxlayout_addchildwidget_isbase = false;
    mutable bool qhboxlayout_adoptlayout_isbase = false;
    mutable bool qhboxlayout_alignmentrect_isbase = false;
    mutable bool qhboxlayout_sender_isbase = false;
    mutable bool qhboxlayout_sendersignalindex_isbase = false;
    mutable bool qhboxlayout_receivers_isbase = false;
    mutable bool qhboxlayout_issignalconnected_isbase = false;

  public:
    VirtualQHBoxLayout(QWidget* parent) : QHBoxLayout(parent) {};
    VirtualQHBoxLayout() : QHBoxLayout() {};

    ~VirtualQHBoxLayout() {
        qhboxlayout_metacall_callback = nullptr;
        qhboxlayout_additem_callback = nullptr;
        qhboxlayout_spacing_callback = nullptr;
        qhboxlayout_setspacing_callback = nullptr;
        qhboxlayout_sizehint_callback = nullptr;
        qhboxlayout_minimumsize_callback = nullptr;
        qhboxlayout_maximumsize_callback = nullptr;
        qhboxlayout_hasheightforwidth_callback = nullptr;
        qhboxlayout_heightforwidth_callback = nullptr;
        qhboxlayout_minimumheightforwidth_callback = nullptr;
        qhboxlayout_expandingdirections_callback = nullptr;
        qhboxlayout_invalidate_callback = nullptr;
        qhboxlayout_itemat_callback = nullptr;
        qhboxlayout_takeat_callback = nullptr;
        qhboxlayout_count_callback = nullptr;
        qhboxlayout_setgeometry_callback = nullptr;
        qhboxlayout_geometry_callback = nullptr;
        qhboxlayout_indexof_callback = nullptr;
        qhboxlayout_isempty_callback = nullptr;
        qhboxlayout_controltypes_callback = nullptr;
        qhboxlayout_replacewidget_callback = nullptr;
        qhboxlayout_layout_callback = nullptr;
        qhboxlayout_childevent_callback = nullptr;
        qhboxlayout_event_callback = nullptr;
        qhboxlayout_eventfilter_callback = nullptr;
        qhboxlayout_timerevent_callback = nullptr;
        qhboxlayout_customevent_callback = nullptr;
        qhboxlayout_connectnotify_callback = nullptr;
        qhboxlayout_disconnectnotify_callback = nullptr;
        qhboxlayout_widget_callback = nullptr;
        qhboxlayout_spaceritem_callback = nullptr;
        qhboxlayout_widgetevent_callback = nullptr;
        qhboxlayout_addchildlayout_callback = nullptr;
        qhboxlayout_addchildwidget_callback = nullptr;
        qhboxlayout_adoptlayout_callback = nullptr;
        qhboxlayout_alignmentrect_callback = nullptr;
        qhboxlayout_sender_callback = nullptr;
        qhboxlayout_sendersignalindex_callback = nullptr;
        qhboxlayout_receivers_callback = nullptr;
        qhboxlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQHBoxLayout_Metacall_Callback(QHBoxLayout_Metacall_Callback cb) { qhboxlayout_metacall_callback = cb; }
    inline void setQHBoxLayout_AddItem_Callback(QHBoxLayout_AddItem_Callback cb) { qhboxlayout_additem_callback = cb; }
    inline void setQHBoxLayout_Spacing_Callback(QHBoxLayout_Spacing_Callback cb) { qhboxlayout_spacing_callback = cb; }
    inline void setQHBoxLayout_SetSpacing_Callback(QHBoxLayout_SetSpacing_Callback cb) { qhboxlayout_setspacing_callback = cb; }
    inline void setQHBoxLayout_SizeHint_Callback(QHBoxLayout_SizeHint_Callback cb) { qhboxlayout_sizehint_callback = cb; }
    inline void setQHBoxLayout_MinimumSize_Callback(QHBoxLayout_MinimumSize_Callback cb) { qhboxlayout_minimumsize_callback = cb; }
    inline void setQHBoxLayout_MaximumSize_Callback(QHBoxLayout_MaximumSize_Callback cb) { qhboxlayout_maximumsize_callback = cb; }
    inline void setQHBoxLayout_HasHeightForWidth_Callback(QHBoxLayout_HasHeightForWidth_Callback cb) { qhboxlayout_hasheightforwidth_callback = cb; }
    inline void setQHBoxLayout_HeightForWidth_Callback(QHBoxLayout_HeightForWidth_Callback cb) { qhboxlayout_heightforwidth_callback = cb; }
    inline void setQHBoxLayout_MinimumHeightForWidth_Callback(QHBoxLayout_MinimumHeightForWidth_Callback cb) { qhboxlayout_minimumheightforwidth_callback = cb; }
    inline void setQHBoxLayout_ExpandingDirections_Callback(QHBoxLayout_ExpandingDirections_Callback cb) { qhboxlayout_expandingdirections_callback = cb; }
    inline void setQHBoxLayout_Invalidate_Callback(QHBoxLayout_Invalidate_Callback cb) { qhboxlayout_invalidate_callback = cb; }
    inline void setQHBoxLayout_ItemAt_Callback(QHBoxLayout_ItemAt_Callback cb) { qhboxlayout_itemat_callback = cb; }
    inline void setQHBoxLayout_TakeAt_Callback(QHBoxLayout_TakeAt_Callback cb) { qhboxlayout_takeat_callback = cb; }
    inline void setQHBoxLayout_Count_Callback(QHBoxLayout_Count_Callback cb) { qhboxlayout_count_callback = cb; }
    inline void setQHBoxLayout_SetGeometry_Callback(QHBoxLayout_SetGeometry_Callback cb) { qhboxlayout_setgeometry_callback = cb; }
    inline void setQHBoxLayout_Geometry_Callback(QHBoxLayout_Geometry_Callback cb) { qhboxlayout_geometry_callback = cb; }
    inline void setQHBoxLayout_IndexOf_Callback(QHBoxLayout_IndexOf_Callback cb) { qhboxlayout_indexof_callback = cb; }
    inline void setQHBoxLayout_IsEmpty_Callback(QHBoxLayout_IsEmpty_Callback cb) { qhboxlayout_isempty_callback = cb; }
    inline void setQHBoxLayout_ControlTypes_Callback(QHBoxLayout_ControlTypes_Callback cb) { qhboxlayout_controltypes_callback = cb; }
    inline void setQHBoxLayout_ReplaceWidget_Callback(QHBoxLayout_ReplaceWidget_Callback cb) { qhboxlayout_replacewidget_callback = cb; }
    inline void setQHBoxLayout_Layout_Callback(QHBoxLayout_Layout_Callback cb) { qhboxlayout_layout_callback = cb; }
    inline void setQHBoxLayout_ChildEvent_Callback(QHBoxLayout_ChildEvent_Callback cb) { qhboxlayout_childevent_callback = cb; }
    inline void setQHBoxLayout_Event_Callback(QHBoxLayout_Event_Callback cb) { qhboxlayout_event_callback = cb; }
    inline void setQHBoxLayout_EventFilter_Callback(QHBoxLayout_EventFilter_Callback cb) { qhboxlayout_eventfilter_callback = cb; }
    inline void setQHBoxLayout_TimerEvent_Callback(QHBoxLayout_TimerEvent_Callback cb) { qhboxlayout_timerevent_callback = cb; }
    inline void setQHBoxLayout_CustomEvent_Callback(QHBoxLayout_CustomEvent_Callback cb) { qhboxlayout_customevent_callback = cb; }
    inline void setQHBoxLayout_ConnectNotify_Callback(QHBoxLayout_ConnectNotify_Callback cb) { qhboxlayout_connectnotify_callback = cb; }
    inline void setQHBoxLayout_DisconnectNotify_Callback(QHBoxLayout_DisconnectNotify_Callback cb) { qhboxlayout_disconnectnotify_callback = cb; }
    inline void setQHBoxLayout_Widget_Callback(QHBoxLayout_Widget_Callback cb) { qhboxlayout_widget_callback = cb; }
    inline void setQHBoxLayout_SpacerItem_Callback(QHBoxLayout_SpacerItem_Callback cb) { qhboxlayout_spaceritem_callback = cb; }
    inline void setQHBoxLayout_WidgetEvent_Callback(QHBoxLayout_WidgetEvent_Callback cb) { qhboxlayout_widgetevent_callback = cb; }
    inline void setQHBoxLayout_AddChildLayout_Callback(QHBoxLayout_AddChildLayout_Callback cb) { qhboxlayout_addchildlayout_callback = cb; }
    inline void setQHBoxLayout_AddChildWidget_Callback(QHBoxLayout_AddChildWidget_Callback cb) { qhboxlayout_addchildwidget_callback = cb; }
    inline void setQHBoxLayout_AdoptLayout_Callback(QHBoxLayout_AdoptLayout_Callback cb) { qhboxlayout_adoptlayout_callback = cb; }
    inline void setQHBoxLayout_AlignmentRect_Callback(QHBoxLayout_AlignmentRect_Callback cb) { qhboxlayout_alignmentrect_callback = cb; }
    inline void setQHBoxLayout_Sender_Callback(QHBoxLayout_Sender_Callback cb) { qhboxlayout_sender_callback = cb; }
    inline void setQHBoxLayout_SenderSignalIndex_Callback(QHBoxLayout_SenderSignalIndex_Callback cb) { qhboxlayout_sendersignalindex_callback = cb; }
    inline void setQHBoxLayout_Receivers_Callback(QHBoxLayout_Receivers_Callback cb) { qhboxlayout_receivers_callback = cb; }
    inline void setQHBoxLayout_IsSignalConnected_Callback(QHBoxLayout_IsSignalConnected_Callback cb) { qhboxlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHBoxLayout_Metacall_IsBase(bool value) const { qhboxlayout_metacall_isbase = value; }
    inline void setQHBoxLayout_AddItem_IsBase(bool value) const { qhboxlayout_additem_isbase = value; }
    inline void setQHBoxLayout_Spacing_IsBase(bool value) const { qhboxlayout_spacing_isbase = value; }
    inline void setQHBoxLayout_SetSpacing_IsBase(bool value) const { qhboxlayout_setspacing_isbase = value; }
    inline void setQHBoxLayout_SizeHint_IsBase(bool value) const { qhboxlayout_sizehint_isbase = value; }
    inline void setQHBoxLayout_MinimumSize_IsBase(bool value) const { qhboxlayout_minimumsize_isbase = value; }
    inline void setQHBoxLayout_MaximumSize_IsBase(bool value) const { qhboxlayout_maximumsize_isbase = value; }
    inline void setQHBoxLayout_HasHeightForWidth_IsBase(bool value) const { qhboxlayout_hasheightforwidth_isbase = value; }
    inline void setQHBoxLayout_HeightForWidth_IsBase(bool value) const { qhboxlayout_heightforwidth_isbase = value; }
    inline void setQHBoxLayout_MinimumHeightForWidth_IsBase(bool value) const { qhboxlayout_minimumheightforwidth_isbase = value; }
    inline void setQHBoxLayout_ExpandingDirections_IsBase(bool value) const { qhboxlayout_expandingdirections_isbase = value; }
    inline void setQHBoxLayout_Invalidate_IsBase(bool value) const { qhboxlayout_invalidate_isbase = value; }
    inline void setQHBoxLayout_ItemAt_IsBase(bool value) const { qhboxlayout_itemat_isbase = value; }
    inline void setQHBoxLayout_TakeAt_IsBase(bool value) const { qhboxlayout_takeat_isbase = value; }
    inline void setQHBoxLayout_Count_IsBase(bool value) const { qhboxlayout_count_isbase = value; }
    inline void setQHBoxLayout_SetGeometry_IsBase(bool value) const { qhboxlayout_setgeometry_isbase = value; }
    inline void setQHBoxLayout_Geometry_IsBase(bool value) const { qhboxlayout_geometry_isbase = value; }
    inline void setQHBoxLayout_IndexOf_IsBase(bool value) const { qhboxlayout_indexof_isbase = value; }
    inline void setQHBoxLayout_IsEmpty_IsBase(bool value) const { qhboxlayout_isempty_isbase = value; }
    inline void setQHBoxLayout_ControlTypes_IsBase(bool value) const { qhboxlayout_controltypes_isbase = value; }
    inline void setQHBoxLayout_ReplaceWidget_IsBase(bool value) const { qhboxlayout_replacewidget_isbase = value; }
    inline void setQHBoxLayout_Layout_IsBase(bool value) const { qhboxlayout_layout_isbase = value; }
    inline void setQHBoxLayout_ChildEvent_IsBase(bool value) const { qhboxlayout_childevent_isbase = value; }
    inline void setQHBoxLayout_Event_IsBase(bool value) const { qhboxlayout_event_isbase = value; }
    inline void setQHBoxLayout_EventFilter_IsBase(bool value) const { qhboxlayout_eventfilter_isbase = value; }
    inline void setQHBoxLayout_TimerEvent_IsBase(bool value) const { qhboxlayout_timerevent_isbase = value; }
    inline void setQHBoxLayout_CustomEvent_IsBase(bool value) const { qhboxlayout_customevent_isbase = value; }
    inline void setQHBoxLayout_ConnectNotify_IsBase(bool value) const { qhboxlayout_connectnotify_isbase = value; }
    inline void setQHBoxLayout_DisconnectNotify_IsBase(bool value) const { qhboxlayout_disconnectnotify_isbase = value; }
    inline void setQHBoxLayout_Widget_IsBase(bool value) const { qhboxlayout_widget_isbase = value; }
    inline void setQHBoxLayout_SpacerItem_IsBase(bool value) const { qhboxlayout_spaceritem_isbase = value; }
    inline void setQHBoxLayout_WidgetEvent_IsBase(bool value) const { qhboxlayout_widgetevent_isbase = value; }
    inline void setQHBoxLayout_AddChildLayout_IsBase(bool value) const { qhboxlayout_addchildlayout_isbase = value; }
    inline void setQHBoxLayout_AddChildWidget_IsBase(bool value) const { qhboxlayout_addchildwidget_isbase = value; }
    inline void setQHBoxLayout_AdoptLayout_IsBase(bool value) const { qhboxlayout_adoptlayout_isbase = value; }
    inline void setQHBoxLayout_AlignmentRect_IsBase(bool value) const { qhboxlayout_alignmentrect_isbase = value; }
    inline void setQHBoxLayout_Sender_IsBase(bool value) const { qhboxlayout_sender_isbase = value; }
    inline void setQHBoxLayout_SenderSignalIndex_IsBase(bool value) const { qhboxlayout_sendersignalindex_isbase = value; }
    inline void setQHBoxLayout_Receivers_IsBase(bool value) const { qhboxlayout_receivers_isbase = value; }
    inline void setQHBoxLayout_IsSignalConnected_IsBase(bool value) const { qhboxlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhboxlayout_metacall_isbase) {
            qhboxlayout_metacall_isbase = false;
            return QHBoxLayout::qt_metacall(param1, param2, param3);
        } else if (qhboxlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qhboxlayout_additem_isbase) {
            qhboxlayout_additem_isbase = false;
            QHBoxLayout::addItem(param1);
        } else if (qhboxlayout_additem_callback != nullptr) {
            QLayoutItem* cbval1 = param1;

            qhboxlayout_additem_callback(this, cbval1);
        } else {
            QHBoxLayout::addItem(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qhboxlayout_spacing_isbase) {
            qhboxlayout_spacing_isbase = false;
            return QHBoxLayout::spacing();
        } else if (qhboxlayout_spacing_callback != nullptr) {
            int callback_ret = qhboxlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qhboxlayout_setspacing_isbase) {
            qhboxlayout_setspacing_isbase = false;
            QHBoxLayout::setSpacing(spacing);
        } else if (qhboxlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qhboxlayout_setspacing_callback(this, cbval1);
        } else {
            QHBoxLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qhboxlayout_sizehint_isbase) {
            qhboxlayout_sizehint_isbase = false;
            return QHBoxLayout::sizeHint();
        } else if (qhboxlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qhboxlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return QHBoxLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qhboxlayout_minimumsize_isbase) {
            qhboxlayout_minimumsize_isbase = false;
            return QHBoxLayout::minimumSize();
        } else if (qhboxlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qhboxlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QHBoxLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qhboxlayout_maximumsize_isbase) {
            qhboxlayout_maximumsize_isbase = false;
            return QHBoxLayout::maximumSize();
        } else if (qhboxlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qhboxlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QHBoxLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qhboxlayout_hasheightforwidth_isbase) {
            qhboxlayout_hasheightforwidth_isbase = false;
            return QHBoxLayout::hasHeightForWidth();
        } else if (qhboxlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qhboxlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qhboxlayout_heightforwidth_isbase) {
            qhboxlayout_heightforwidth_isbase = false;
            return QHBoxLayout::heightForWidth(param1);
        } else if (qhboxlayout_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qhboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qhboxlayout_minimumheightforwidth_isbase) {
            qhboxlayout_minimumheightforwidth_isbase = false;
            return QHBoxLayout::minimumHeightForWidth(param1);
        } else if (qhboxlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qhboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qhboxlayout_expandingdirections_isbase) {
            qhboxlayout_expandingdirections_isbase = false;
            return QHBoxLayout::expandingDirections();
        } else if (qhboxlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qhboxlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QHBoxLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qhboxlayout_invalidate_isbase) {
            qhboxlayout_invalidate_isbase = false;
            QHBoxLayout::invalidate();
        } else if (qhboxlayout_invalidate_callback != nullptr) {
            qhboxlayout_invalidate_callback();
        } else {
            QHBoxLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qhboxlayout_itemat_isbase) {
            qhboxlayout_itemat_isbase = false;
            return QHBoxLayout::itemAt(param1);
        } else if (qhboxlayout_itemat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qhboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBoxLayout::itemAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qhboxlayout_takeat_isbase) {
            qhboxlayout_takeat_isbase = false;
            return QHBoxLayout::takeAt(param1);
        } else if (qhboxlayout_takeat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qhboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBoxLayout::takeAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qhboxlayout_count_isbase) {
            qhboxlayout_count_isbase = false;
            return QHBoxLayout::count();
        } else if (qhboxlayout_count_callback != nullptr) {
            int callback_ret = qhboxlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qhboxlayout_setgeometry_isbase) {
            qhboxlayout_setgeometry_isbase = false;
            QHBoxLayout::setGeometry(geometry);
        } else if (qhboxlayout_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qhboxlayout_setgeometry_callback(this, cbval1);
        } else {
            QHBoxLayout::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qhboxlayout_geometry_isbase) {
            qhboxlayout_geometry_isbase = false;
            return QHBoxLayout::geometry();
        } else if (qhboxlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qhboxlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QHBoxLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qhboxlayout_indexof_isbase) {
            qhboxlayout_indexof_isbase = false;
            return QHBoxLayout::indexOf(param1);
        } else if (qhboxlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qhboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qhboxlayout_isempty_isbase) {
            qhboxlayout_isempty_isbase = false;
            return QHBoxLayout::isEmpty();
        } else if (qhboxlayout_isempty_callback != nullptr) {
            bool callback_ret = qhboxlayout_isempty_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qhboxlayout_controltypes_isbase) {
            qhboxlayout_controltypes_isbase = false;
            return QHBoxLayout::controlTypes();
        } else if (qhboxlayout_controltypes_callback != nullptr) {
            int callback_ret = qhboxlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QHBoxLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qhboxlayout_replacewidget_isbase) {
            qhboxlayout_replacewidget_isbase = false;
            return QHBoxLayout::replaceWidget(from, to, options);
        } else if (qhboxlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qhboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QHBoxLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qhboxlayout_layout_isbase) {
            qhboxlayout_layout_isbase = false;
            return QHBoxLayout::layout();
        } else if (qhboxlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qhboxlayout_layout_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qhboxlayout_childevent_isbase) {
            qhboxlayout_childevent_isbase = false;
            QHBoxLayout::childEvent(e);
        } else if (qhboxlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qhboxlayout_childevent_callback(this, cbval1);
        } else {
            QHBoxLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhboxlayout_event_isbase) {
            qhboxlayout_event_isbase = false;
            return QHBoxLayout::event(event);
        } else if (qhboxlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qhboxlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBoxLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhboxlayout_eventfilter_isbase) {
            qhboxlayout_eventfilter_isbase = false;
            return QHBoxLayout::eventFilter(watched, event);
        } else if (qhboxlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHBoxLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhboxlayout_timerevent_isbase) {
            qhboxlayout_timerevent_isbase = false;
            QHBoxLayout::timerEvent(event);
        } else if (qhboxlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qhboxlayout_timerevent_callback(this, cbval1);
        } else {
            QHBoxLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhboxlayout_customevent_isbase) {
            qhboxlayout_customevent_isbase = false;
            QHBoxLayout::customEvent(event);
        } else if (qhboxlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qhboxlayout_customevent_callback(this, cbval1);
        } else {
            QHBoxLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhboxlayout_connectnotify_isbase) {
            qhboxlayout_connectnotify_isbase = false;
            QHBoxLayout::connectNotify(signal);
        } else if (qhboxlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhboxlayout_connectnotify_callback(this, cbval1);
        } else {
            QHBoxLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhboxlayout_disconnectnotify_isbase) {
            qhboxlayout_disconnectnotify_isbase = false;
            QHBoxLayout::disconnectNotify(signal);
        } else if (qhboxlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhboxlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QHBoxLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qhboxlayout_widget_isbase) {
            qhboxlayout_widget_isbase = false;
            return QHBoxLayout::widget();
        } else if (qhboxlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qhboxlayout_widget_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qhboxlayout_spaceritem_isbase) {
            qhboxlayout_spaceritem_isbase = false;
            return QHBoxLayout::spacerItem();
        } else if (qhboxlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qhboxlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qhboxlayout_widgetevent_isbase) {
            qhboxlayout_widgetevent_isbase = false;
            QHBoxLayout::widgetEvent(param1);
        } else if (qhboxlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qhboxlayout_widgetevent_callback(this, cbval1);
        } else {
            QHBoxLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qhboxlayout_addchildlayout_isbase) {
            qhboxlayout_addchildlayout_isbase = false;
            QHBoxLayout::addChildLayout(l);
        } else if (qhboxlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qhboxlayout_addchildlayout_callback(this, cbval1);
        } else {
            QHBoxLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qhboxlayout_addchildwidget_isbase) {
            qhboxlayout_addchildwidget_isbase = false;
            QHBoxLayout::addChildWidget(w);
        } else if (qhboxlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qhboxlayout_addchildwidget_callback(this, cbval1);
        } else {
            QHBoxLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qhboxlayout_adoptlayout_isbase) {
            qhboxlayout_adoptlayout_isbase = false;
            return QHBoxLayout::adoptLayout(layout);
        } else if (qhboxlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qhboxlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBoxLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qhboxlayout_alignmentrect_isbase) {
            qhboxlayout_alignmentrect_isbase = false;
            return QHBoxLayout::alignmentRect(param1);
        } else if (qhboxlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qhboxlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHBoxLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhboxlayout_sender_isbase) {
            qhboxlayout_sender_isbase = false;
            return QHBoxLayout::sender();
        } else if (qhboxlayout_sender_callback != nullptr) {
            QObject* callback_ret = qhboxlayout_sender_callback();
            return callback_ret;
        } else {
            return QHBoxLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhboxlayout_sendersignalindex_isbase) {
            qhboxlayout_sendersignalindex_isbase = false;
            return QHBoxLayout::senderSignalIndex();
        } else if (qhboxlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qhboxlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhboxlayout_receivers_isbase) {
            qhboxlayout_receivers_isbase = false;
            return QHBoxLayout::receivers(signal);
        } else if (qhboxlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhboxlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHBoxLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhboxlayout_issignalconnected_isbase) {
            qhboxlayout_issignalconnected_isbase = false;
            return QHBoxLayout::isSignalConnected(signal);
        } else if (qhboxlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhboxlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBoxLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHBoxLayout_ChildEvent(QHBoxLayout* self, QChildEvent* e);
    friend void QHBoxLayout_QBaseChildEvent(QHBoxLayout* self, QChildEvent* e);
    friend void QHBoxLayout_TimerEvent(QHBoxLayout* self, QTimerEvent* event);
    friend void QHBoxLayout_QBaseTimerEvent(QHBoxLayout* self, QTimerEvent* event);
    friend void QHBoxLayout_CustomEvent(QHBoxLayout* self, QEvent* event);
    friend void QHBoxLayout_QBaseCustomEvent(QHBoxLayout* self, QEvent* event);
    friend void QHBoxLayout_ConnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
    friend void QHBoxLayout_QBaseConnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
    friend void QHBoxLayout_DisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
    friend void QHBoxLayout_QBaseDisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
    friend void QHBoxLayout_WidgetEvent(QHBoxLayout* self, QEvent* param1);
    friend void QHBoxLayout_QBaseWidgetEvent(QHBoxLayout* self, QEvent* param1);
    friend void QHBoxLayout_AddChildLayout(QHBoxLayout* self, QLayout* l);
    friend void QHBoxLayout_QBaseAddChildLayout(QHBoxLayout* self, QLayout* l);
    friend void QHBoxLayout_AddChildWidget(QHBoxLayout* self, QWidget* w);
    friend void QHBoxLayout_QBaseAddChildWidget(QHBoxLayout* self, QWidget* w);
    friend bool QHBoxLayout_AdoptLayout(QHBoxLayout* self, QLayout* layout);
    friend bool QHBoxLayout_QBaseAdoptLayout(QHBoxLayout* self, QLayout* layout);
    friend QRect* QHBoxLayout_AlignmentRect(const QHBoxLayout* self, const QRect* param1);
    friend QRect* QHBoxLayout_QBaseAlignmentRect(const QHBoxLayout* self, const QRect* param1);
    friend QObject* QHBoxLayout_Sender(const QHBoxLayout* self);
    friend QObject* QHBoxLayout_QBaseSender(const QHBoxLayout* self);
    friend int QHBoxLayout_SenderSignalIndex(const QHBoxLayout* self);
    friend int QHBoxLayout_QBaseSenderSignalIndex(const QHBoxLayout* self);
    friend int QHBoxLayout_Receivers(const QHBoxLayout* self, const char* signal);
    friend int QHBoxLayout_QBaseReceivers(const QHBoxLayout* self, const char* signal);
    friend bool QHBoxLayout_IsSignalConnected(const QHBoxLayout* self, const QMetaMethod* signal);
    friend bool QHBoxLayout_QBaseIsSignalConnected(const QHBoxLayout* self, const QMetaMethod* signal);
};

// This class is a subclass of QVBoxLayout so that we can call protected methods
class VirtualQVBoxLayout final : public QVBoxLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQVBoxLayout = true;

    // Virtual class public types (including callbacks)
    using QVBoxLayout_Metacall_Callback = int (*)(QVBoxLayout*, int, int, void**);
    using QVBoxLayout_AddItem_Callback = void (*)(QVBoxLayout*, QLayoutItem*);
    using QVBoxLayout_Spacing_Callback = int (*)();
    using QVBoxLayout_SetSpacing_Callback = void (*)(QVBoxLayout*, int);
    using QVBoxLayout_SizeHint_Callback = QSize* (*)();
    using QVBoxLayout_MinimumSize_Callback = QSize* (*)();
    using QVBoxLayout_MaximumSize_Callback = QSize* (*)();
    using QVBoxLayout_HasHeightForWidth_Callback = bool (*)();
    using QVBoxLayout_HeightForWidth_Callback = int (*)(const QVBoxLayout*, int);
    using QVBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QVBoxLayout*, int);
    using QVBoxLayout_ExpandingDirections_Callback = int (*)();
    using QVBoxLayout_Invalidate_Callback = void (*)();
    using QVBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QVBoxLayout*, int);
    using QVBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QVBoxLayout*, int);
    using QVBoxLayout_Count_Callback = int (*)();
    using QVBoxLayout_SetGeometry_Callback = void (*)(QVBoxLayout*, QRect*);
    using QVBoxLayout_Geometry_Callback = QRect* (*)();
    using QVBoxLayout_IndexOf_Callback = int (*)(const QVBoxLayout*, QWidget*);
    using QVBoxLayout_IsEmpty_Callback = bool (*)();
    using QVBoxLayout_ControlTypes_Callback = int (*)();
    using QVBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QVBoxLayout*, QWidget*, QWidget*, int);
    using QVBoxLayout_Layout_Callback = QLayout* (*)();
    using QVBoxLayout_ChildEvent_Callback = void (*)(QVBoxLayout*, QChildEvent*);
    using QVBoxLayout_Event_Callback = bool (*)(QVBoxLayout*, QEvent*);
    using QVBoxLayout_EventFilter_Callback = bool (*)(QVBoxLayout*, QObject*, QEvent*);
    using QVBoxLayout_TimerEvent_Callback = void (*)(QVBoxLayout*, QTimerEvent*);
    using QVBoxLayout_CustomEvent_Callback = void (*)(QVBoxLayout*, QEvent*);
    using QVBoxLayout_ConnectNotify_Callback = void (*)(QVBoxLayout*, QMetaMethod*);
    using QVBoxLayout_DisconnectNotify_Callback = void (*)(QVBoxLayout*, QMetaMethod*);
    using QVBoxLayout_Widget_Callback = QWidget* (*)();
    using QVBoxLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QVBoxLayout_WidgetEvent_Callback = void (*)(QVBoxLayout*, QEvent*);
    using QVBoxLayout_AddChildLayout_Callback = void (*)(QVBoxLayout*, QLayout*);
    using QVBoxLayout_AddChildWidget_Callback = void (*)(QVBoxLayout*, QWidget*);
    using QVBoxLayout_AdoptLayout_Callback = bool (*)(QVBoxLayout*, QLayout*);
    using QVBoxLayout_AlignmentRect_Callback = QRect* (*)(const QVBoxLayout*, QRect*);
    using QVBoxLayout_Sender_Callback = QObject* (*)();
    using QVBoxLayout_SenderSignalIndex_Callback = int (*)();
    using QVBoxLayout_Receivers_Callback = int (*)(const QVBoxLayout*, const char*);
    using QVBoxLayout_IsSignalConnected_Callback = bool (*)(const QVBoxLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVBoxLayout_Metacall_Callback qvboxlayout_metacall_callback = nullptr;
    QVBoxLayout_AddItem_Callback qvboxlayout_additem_callback = nullptr;
    QVBoxLayout_Spacing_Callback qvboxlayout_spacing_callback = nullptr;
    QVBoxLayout_SetSpacing_Callback qvboxlayout_setspacing_callback = nullptr;
    QVBoxLayout_SizeHint_Callback qvboxlayout_sizehint_callback = nullptr;
    QVBoxLayout_MinimumSize_Callback qvboxlayout_minimumsize_callback = nullptr;
    QVBoxLayout_MaximumSize_Callback qvboxlayout_maximumsize_callback = nullptr;
    QVBoxLayout_HasHeightForWidth_Callback qvboxlayout_hasheightforwidth_callback = nullptr;
    QVBoxLayout_HeightForWidth_Callback qvboxlayout_heightforwidth_callback = nullptr;
    QVBoxLayout_MinimumHeightForWidth_Callback qvboxlayout_minimumheightforwidth_callback = nullptr;
    QVBoxLayout_ExpandingDirections_Callback qvboxlayout_expandingdirections_callback = nullptr;
    QVBoxLayout_Invalidate_Callback qvboxlayout_invalidate_callback = nullptr;
    QVBoxLayout_ItemAt_Callback qvboxlayout_itemat_callback = nullptr;
    QVBoxLayout_TakeAt_Callback qvboxlayout_takeat_callback = nullptr;
    QVBoxLayout_Count_Callback qvboxlayout_count_callback = nullptr;
    QVBoxLayout_SetGeometry_Callback qvboxlayout_setgeometry_callback = nullptr;
    QVBoxLayout_Geometry_Callback qvboxlayout_geometry_callback = nullptr;
    QVBoxLayout_IndexOf_Callback qvboxlayout_indexof_callback = nullptr;
    QVBoxLayout_IsEmpty_Callback qvboxlayout_isempty_callback = nullptr;
    QVBoxLayout_ControlTypes_Callback qvboxlayout_controltypes_callback = nullptr;
    QVBoxLayout_ReplaceWidget_Callback qvboxlayout_replacewidget_callback = nullptr;
    QVBoxLayout_Layout_Callback qvboxlayout_layout_callback = nullptr;
    QVBoxLayout_ChildEvent_Callback qvboxlayout_childevent_callback = nullptr;
    QVBoxLayout_Event_Callback qvboxlayout_event_callback = nullptr;
    QVBoxLayout_EventFilter_Callback qvboxlayout_eventfilter_callback = nullptr;
    QVBoxLayout_TimerEvent_Callback qvboxlayout_timerevent_callback = nullptr;
    QVBoxLayout_CustomEvent_Callback qvboxlayout_customevent_callback = nullptr;
    QVBoxLayout_ConnectNotify_Callback qvboxlayout_connectnotify_callback = nullptr;
    QVBoxLayout_DisconnectNotify_Callback qvboxlayout_disconnectnotify_callback = nullptr;
    QVBoxLayout_Widget_Callback qvboxlayout_widget_callback = nullptr;
    QVBoxLayout_SpacerItem_Callback qvboxlayout_spaceritem_callback = nullptr;
    QVBoxLayout_WidgetEvent_Callback qvboxlayout_widgetevent_callback = nullptr;
    QVBoxLayout_AddChildLayout_Callback qvboxlayout_addchildlayout_callback = nullptr;
    QVBoxLayout_AddChildWidget_Callback qvboxlayout_addchildwidget_callback = nullptr;
    QVBoxLayout_AdoptLayout_Callback qvboxlayout_adoptlayout_callback = nullptr;
    QVBoxLayout_AlignmentRect_Callback qvboxlayout_alignmentrect_callback = nullptr;
    QVBoxLayout_Sender_Callback qvboxlayout_sender_callback = nullptr;
    QVBoxLayout_SenderSignalIndex_Callback qvboxlayout_sendersignalindex_callback = nullptr;
    QVBoxLayout_Receivers_Callback qvboxlayout_receivers_callback = nullptr;
    QVBoxLayout_IsSignalConnected_Callback qvboxlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvboxlayout_metacall_isbase = false;
    mutable bool qvboxlayout_additem_isbase = false;
    mutable bool qvboxlayout_spacing_isbase = false;
    mutable bool qvboxlayout_setspacing_isbase = false;
    mutable bool qvboxlayout_sizehint_isbase = false;
    mutable bool qvboxlayout_minimumsize_isbase = false;
    mutable bool qvboxlayout_maximumsize_isbase = false;
    mutable bool qvboxlayout_hasheightforwidth_isbase = false;
    mutable bool qvboxlayout_heightforwidth_isbase = false;
    mutable bool qvboxlayout_minimumheightforwidth_isbase = false;
    mutable bool qvboxlayout_expandingdirections_isbase = false;
    mutable bool qvboxlayout_invalidate_isbase = false;
    mutable bool qvboxlayout_itemat_isbase = false;
    mutable bool qvboxlayout_takeat_isbase = false;
    mutable bool qvboxlayout_count_isbase = false;
    mutable bool qvboxlayout_setgeometry_isbase = false;
    mutable bool qvboxlayout_geometry_isbase = false;
    mutable bool qvboxlayout_indexof_isbase = false;
    mutable bool qvboxlayout_isempty_isbase = false;
    mutable bool qvboxlayout_controltypes_isbase = false;
    mutable bool qvboxlayout_replacewidget_isbase = false;
    mutable bool qvboxlayout_layout_isbase = false;
    mutable bool qvboxlayout_childevent_isbase = false;
    mutable bool qvboxlayout_event_isbase = false;
    mutable bool qvboxlayout_eventfilter_isbase = false;
    mutable bool qvboxlayout_timerevent_isbase = false;
    mutable bool qvboxlayout_customevent_isbase = false;
    mutable bool qvboxlayout_connectnotify_isbase = false;
    mutable bool qvboxlayout_disconnectnotify_isbase = false;
    mutable bool qvboxlayout_widget_isbase = false;
    mutable bool qvboxlayout_spaceritem_isbase = false;
    mutable bool qvboxlayout_widgetevent_isbase = false;
    mutable bool qvboxlayout_addchildlayout_isbase = false;
    mutable bool qvboxlayout_addchildwidget_isbase = false;
    mutable bool qvboxlayout_adoptlayout_isbase = false;
    mutable bool qvboxlayout_alignmentrect_isbase = false;
    mutable bool qvboxlayout_sender_isbase = false;
    mutable bool qvboxlayout_sendersignalindex_isbase = false;
    mutable bool qvboxlayout_receivers_isbase = false;
    mutable bool qvboxlayout_issignalconnected_isbase = false;

  public:
    VirtualQVBoxLayout(QWidget* parent) : QVBoxLayout(parent) {};
    VirtualQVBoxLayout() : QVBoxLayout() {};

    ~VirtualQVBoxLayout() {
        qvboxlayout_metacall_callback = nullptr;
        qvboxlayout_additem_callback = nullptr;
        qvboxlayout_spacing_callback = nullptr;
        qvboxlayout_setspacing_callback = nullptr;
        qvboxlayout_sizehint_callback = nullptr;
        qvboxlayout_minimumsize_callback = nullptr;
        qvboxlayout_maximumsize_callback = nullptr;
        qvboxlayout_hasheightforwidth_callback = nullptr;
        qvboxlayout_heightforwidth_callback = nullptr;
        qvboxlayout_minimumheightforwidth_callback = nullptr;
        qvboxlayout_expandingdirections_callback = nullptr;
        qvboxlayout_invalidate_callback = nullptr;
        qvboxlayout_itemat_callback = nullptr;
        qvboxlayout_takeat_callback = nullptr;
        qvboxlayout_count_callback = nullptr;
        qvboxlayout_setgeometry_callback = nullptr;
        qvboxlayout_geometry_callback = nullptr;
        qvboxlayout_indexof_callback = nullptr;
        qvboxlayout_isempty_callback = nullptr;
        qvboxlayout_controltypes_callback = nullptr;
        qvboxlayout_replacewidget_callback = nullptr;
        qvboxlayout_layout_callback = nullptr;
        qvboxlayout_childevent_callback = nullptr;
        qvboxlayout_event_callback = nullptr;
        qvboxlayout_eventfilter_callback = nullptr;
        qvboxlayout_timerevent_callback = nullptr;
        qvboxlayout_customevent_callback = nullptr;
        qvboxlayout_connectnotify_callback = nullptr;
        qvboxlayout_disconnectnotify_callback = nullptr;
        qvboxlayout_widget_callback = nullptr;
        qvboxlayout_spaceritem_callback = nullptr;
        qvboxlayout_widgetevent_callback = nullptr;
        qvboxlayout_addchildlayout_callback = nullptr;
        qvboxlayout_addchildwidget_callback = nullptr;
        qvboxlayout_adoptlayout_callback = nullptr;
        qvboxlayout_alignmentrect_callback = nullptr;
        qvboxlayout_sender_callback = nullptr;
        qvboxlayout_sendersignalindex_callback = nullptr;
        qvboxlayout_receivers_callback = nullptr;
        qvboxlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQVBoxLayout_Metacall_Callback(QVBoxLayout_Metacall_Callback cb) { qvboxlayout_metacall_callback = cb; }
    inline void setQVBoxLayout_AddItem_Callback(QVBoxLayout_AddItem_Callback cb) { qvboxlayout_additem_callback = cb; }
    inline void setQVBoxLayout_Spacing_Callback(QVBoxLayout_Spacing_Callback cb) { qvboxlayout_spacing_callback = cb; }
    inline void setQVBoxLayout_SetSpacing_Callback(QVBoxLayout_SetSpacing_Callback cb) { qvboxlayout_setspacing_callback = cb; }
    inline void setQVBoxLayout_SizeHint_Callback(QVBoxLayout_SizeHint_Callback cb) { qvboxlayout_sizehint_callback = cb; }
    inline void setQVBoxLayout_MinimumSize_Callback(QVBoxLayout_MinimumSize_Callback cb) { qvboxlayout_minimumsize_callback = cb; }
    inline void setQVBoxLayout_MaximumSize_Callback(QVBoxLayout_MaximumSize_Callback cb) { qvboxlayout_maximumsize_callback = cb; }
    inline void setQVBoxLayout_HasHeightForWidth_Callback(QVBoxLayout_HasHeightForWidth_Callback cb) { qvboxlayout_hasheightforwidth_callback = cb; }
    inline void setQVBoxLayout_HeightForWidth_Callback(QVBoxLayout_HeightForWidth_Callback cb) { qvboxlayout_heightforwidth_callback = cb; }
    inline void setQVBoxLayout_MinimumHeightForWidth_Callback(QVBoxLayout_MinimumHeightForWidth_Callback cb) { qvboxlayout_minimumheightforwidth_callback = cb; }
    inline void setQVBoxLayout_ExpandingDirections_Callback(QVBoxLayout_ExpandingDirections_Callback cb) { qvboxlayout_expandingdirections_callback = cb; }
    inline void setQVBoxLayout_Invalidate_Callback(QVBoxLayout_Invalidate_Callback cb) { qvboxlayout_invalidate_callback = cb; }
    inline void setQVBoxLayout_ItemAt_Callback(QVBoxLayout_ItemAt_Callback cb) { qvboxlayout_itemat_callback = cb; }
    inline void setQVBoxLayout_TakeAt_Callback(QVBoxLayout_TakeAt_Callback cb) { qvboxlayout_takeat_callback = cb; }
    inline void setQVBoxLayout_Count_Callback(QVBoxLayout_Count_Callback cb) { qvboxlayout_count_callback = cb; }
    inline void setQVBoxLayout_SetGeometry_Callback(QVBoxLayout_SetGeometry_Callback cb) { qvboxlayout_setgeometry_callback = cb; }
    inline void setQVBoxLayout_Geometry_Callback(QVBoxLayout_Geometry_Callback cb) { qvboxlayout_geometry_callback = cb; }
    inline void setQVBoxLayout_IndexOf_Callback(QVBoxLayout_IndexOf_Callback cb) { qvboxlayout_indexof_callback = cb; }
    inline void setQVBoxLayout_IsEmpty_Callback(QVBoxLayout_IsEmpty_Callback cb) { qvboxlayout_isempty_callback = cb; }
    inline void setQVBoxLayout_ControlTypes_Callback(QVBoxLayout_ControlTypes_Callback cb) { qvboxlayout_controltypes_callback = cb; }
    inline void setQVBoxLayout_ReplaceWidget_Callback(QVBoxLayout_ReplaceWidget_Callback cb) { qvboxlayout_replacewidget_callback = cb; }
    inline void setQVBoxLayout_Layout_Callback(QVBoxLayout_Layout_Callback cb) { qvboxlayout_layout_callback = cb; }
    inline void setQVBoxLayout_ChildEvent_Callback(QVBoxLayout_ChildEvent_Callback cb) { qvboxlayout_childevent_callback = cb; }
    inline void setQVBoxLayout_Event_Callback(QVBoxLayout_Event_Callback cb) { qvboxlayout_event_callback = cb; }
    inline void setQVBoxLayout_EventFilter_Callback(QVBoxLayout_EventFilter_Callback cb) { qvboxlayout_eventfilter_callback = cb; }
    inline void setQVBoxLayout_TimerEvent_Callback(QVBoxLayout_TimerEvent_Callback cb) { qvboxlayout_timerevent_callback = cb; }
    inline void setQVBoxLayout_CustomEvent_Callback(QVBoxLayout_CustomEvent_Callback cb) { qvboxlayout_customevent_callback = cb; }
    inline void setQVBoxLayout_ConnectNotify_Callback(QVBoxLayout_ConnectNotify_Callback cb) { qvboxlayout_connectnotify_callback = cb; }
    inline void setQVBoxLayout_DisconnectNotify_Callback(QVBoxLayout_DisconnectNotify_Callback cb) { qvboxlayout_disconnectnotify_callback = cb; }
    inline void setQVBoxLayout_Widget_Callback(QVBoxLayout_Widget_Callback cb) { qvboxlayout_widget_callback = cb; }
    inline void setQVBoxLayout_SpacerItem_Callback(QVBoxLayout_SpacerItem_Callback cb) { qvboxlayout_spaceritem_callback = cb; }
    inline void setQVBoxLayout_WidgetEvent_Callback(QVBoxLayout_WidgetEvent_Callback cb) { qvboxlayout_widgetevent_callback = cb; }
    inline void setQVBoxLayout_AddChildLayout_Callback(QVBoxLayout_AddChildLayout_Callback cb) { qvboxlayout_addchildlayout_callback = cb; }
    inline void setQVBoxLayout_AddChildWidget_Callback(QVBoxLayout_AddChildWidget_Callback cb) { qvboxlayout_addchildwidget_callback = cb; }
    inline void setQVBoxLayout_AdoptLayout_Callback(QVBoxLayout_AdoptLayout_Callback cb) { qvboxlayout_adoptlayout_callback = cb; }
    inline void setQVBoxLayout_AlignmentRect_Callback(QVBoxLayout_AlignmentRect_Callback cb) { qvboxlayout_alignmentrect_callback = cb; }
    inline void setQVBoxLayout_Sender_Callback(QVBoxLayout_Sender_Callback cb) { qvboxlayout_sender_callback = cb; }
    inline void setQVBoxLayout_SenderSignalIndex_Callback(QVBoxLayout_SenderSignalIndex_Callback cb) { qvboxlayout_sendersignalindex_callback = cb; }
    inline void setQVBoxLayout_Receivers_Callback(QVBoxLayout_Receivers_Callback cb) { qvboxlayout_receivers_callback = cb; }
    inline void setQVBoxLayout_IsSignalConnected_Callback(QVBoxLayout_IsSignalConnected_Callback cb) { qvboxlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVBoxLayout_Metacall_IsBase(bool value) const { qvboxlayout_metacall_isbase = value; }
    inline void setQVBoxLayout_AddItem_IsBase(bool value) const { qvboxlayout_additem_isbase = value; }
    inline void setQVBoxLayout_Spacing_IsBase(bool value) const { qvboxlayout_spacing_isbase = value; }
    inline void setQVBoxLayout_SetSpacing_IsBase(bool value) const { qvboxlayout_setspacing_isbase = value; }
    inline void setQVBoxLayout_SizeHint_IsBase(bool value) const { qvboxlayout_sizehint_isbase = value; }
    inline void setQVBoxLayout_MinimumSize_IsBase(bool value) const { qvboxlayout_minimumsize_isbase = value; }
    inline void setQVBoxLayout_MaximumSize_IsBase(bool value) const { qvboxlayout_maximumsize_isbase = value; }
    inline void setQVBoxLayout_HasHeightForWidth_IsBase(bool value) const { qvboxlayout_hasheightforwidth_isbase = value; }
    inline void setQVBoxLayout_HeightForWidth_IsBase(bool value) const { qvboxlayout_heightforwidth_isbase = value; }
    inline void setQVBoxLayout_MinimumHeightForWidth_IsBase(bool value) const { qvboxlayout_minimumheightforwidth_isbase = value; }
    inline void setQVBoxLayout_ExpandingDirections_IsBase(bool value) const { qvboxlayout_expandingdirections_isbase = value; }
    inline void setQVBoxLayout_Invalidate_IsBase(bool value) const { qvboxlayout_invalidate_isbase = value; }
    inline void setQVBoxLayout_ItemAt_IsBase(bool value) const { qvboxlayout_itemat_isbase = value; }
    inline void setQVBoxLayout_TakeAt_IsBase(bool value) const { qvboxlayout_takeat_isbase = value; }
    inline void setQVBoxLayout_Count_IsBase(bool value) const { qvboxlayout_count_isbase = value; }
    inline void setQVBoxLayout_SetGeometry_IsBase(bool value) const { qvboxlayout_setgeometry_isbase = value; }
    inline void setQVBoxLayout_Geometry_IsBase(bool value) const { qvboxlayout_geometry_isbase = value; }
    inline void setQVBoxLayout_IndexOf_IsBase(bool value) const { qvboxlayout_indexof_isbase = value; }
    inline void setQVBoxLayout_IsEmpty_IsBase(bool value) const { qvboxlayout_isempty_isbase = value; }
    inline void setQVBoxLayout_ControlTypes_IsBase(bool value) const { qvboxlayout_controltypes_isbase = value; }
    inline void setQVBoxLayout_ReplaceWidget_IsBase(bool value) const { qvboxlayout_replacewidget_isbase = value; }
    inline void setQVBoxLayout_Layout_IsBase(bool value) const { qvboxlayout_layout_isbase = value; }
    inline void setQVBoxLayout_ChildEvent_IsBase(bool value) const { qvboxlayout_childevent_isbase = value; }
    inline void setQVBoxLayout_Event_IsBase(bool value) const { qvboxlayout_event_isbase = value; }
    inline void setQVBoxLayout_EventFilter_IsBase(bool value) const { qvboxlayout_eventfilter_isbase = value; }
    inline void setQVBoxLayout_TimerEvent_IsBase(bool value) const { qvboxlayout_timerevent_isbase = value; }
    inline void setQVBoxLayout_CustomEvent_IsBase(bool value) const { qvboxlayout_customevent_isbase = value; }
    inline void setQVBoxLayout_ConnectNotify_IsBase(bool value) const { qvboxlayout_connectnotify_isbase = value; }
    inline void setQVBoxLayout_DisconnectNotify_IsBase(bool value) const { qvboxlayout_disconnectnotify_isbase = value; }
    inline void setQVBoxLayout_Widget_IsBase(bool value) const { qvboxlayout_widget_isbase = value; }
    inline void setQVBoxLayout_SpacerItem_IsBase(bool value) const { qvboxlayout_spaceritem_isbase = value; }
    inline void setQVBoxLayout_WidgetEvent_IsBase(bool value) const { qvboxlayout_widgetevent_isbase = value; }
    inline void setQVBoxLayout_AddChildLayout_IsBase(bool value) const { qvboxlayout_addchildlayout_isbase = value; }
    inline void setQVBoxLayout_AddChildWidget_IsBase(bool value) const { qvboxlayout_addchildwidget_isbase = value; }
    inline void setQVBoxLayout_AdoptLayout_IsBase(bool value) const { qvboxlayout_adoptlayout_isbase = value; }
    inline void setQVBoxLayout_AlignmentRect_IsBase(bool value) const { qvboxlayout_alignmentrect_isbase = value; }
    inline void setQVBoxLayout_Sender_IsBase(bool value) const { qvboxlayout_sender_isbase = value; }
    inline void setQVBoxLayout_SenderSignalIndex_IsBase(bool value) const { qvboxlayout_sendersignalindex_isbase = value; }
    inline void setQVBoxLayout_Receivers_IsBase(bool value) const { qvboxlayout_receivers_isbase = value; }
    inline void setQVBoxLayout_IsSignalConnected_IsBase(bool value) const { qvboxlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvboxlayout_metacall_isbase) {
            qvboxlayout_metacall_isbase = false;
            return QVBoxLayout::qt_metacall(param1, param2, param3);
        } else if (qvboxlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qvboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qvboxlayout_additem_isbase) {
            qvboxlayout_additem_isbase = false;
            QVBoxLayout::addItem(param1);
        } else if (qvboxlayout_additem_callback != nullptr) {
            QLayoutItem* cbval1 = param1;

            qvboxlayout_additem_callback(this, cbval1);
        } else {
            QVBoxLayout::addItem(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qvboxlayout_spacing_isbase) {
            qvboxlayout_spacing_isbase = false;
            return QVBoxLayout::spacing();
        } else if (qvboxlayout_spacing_callback != nullptr) {
            int callback_ret = qvboxlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qvboxlayout_setspacing_isbase) {
            qvboxlayout_setspacing_isbase = false;
            QVBoxLayout::setSpacing(spacing);
        } else if (qvboxlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qvboxlayout_setspacing_callback(this, cbval1);
        } else {
            QVBoxLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qvboxlayout_sizehint_isbase) {
            qvboxlayout_sizehint_isbase = false;
            return QVBoxLayout::sizeHint();
        } else if (qvboxlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qvboxlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return QVBoxLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qvboxlayout_minimumsize_isbase) {
            qvboxlayout_minimumsize_isbase = false;
            return QVBoxLayout::minimumSize();
        } else if (qvboxlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qvboxlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QVBoxLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qvboxlayout_maximumsize_isbase) {
            qvboxlayout_maximumsize_isbase = false;
            return QVBoxLayout::maximumSize();
        } else if (qvboxlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qvboxlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QVBoxLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qvboxlayout_hasheightforwidth_isbase) {
            qvboxlayout_hasheightforwidth_isbase = false;
            return QVBoxLayout::hasHeightForWidth();
        } else if (qvboxlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qvboxlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qvboxlayout_heightforwidth_isbase) {
            qvboxlayout_heightforwidth_isbase = false;
            return QVBoxLayout::heightForWidth(param1);
        } else if (qvboxlayout_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qvboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qvboxlayout_minimumheightforwidth_isbase) {
            qvboxlayout_minimumheightforwidth_isbase = false;
            return QVBoxLayout::minimumHeightForWidth(param1);
        } else if (qvboxlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qvboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qvboxlayout_expandingdirections_isbase) {
            qvboxlayout_expandingdirections_isbase = false;
            return QVBoxLayout::expandingDirections();
        } else if (qvboxlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qvboxlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QVBoxLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qvboxlayout_invalidate_isbase) {
            qvboxlayout_invalidate_isbase = false;
            QVBoxLayout::invalidate();
        } else if (qvboxlayout_invalidate_callback != nullptr) {
            qvboxlayout_invalidate_callback();
        } else {
            QVBoxLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qvboxlayout_itemat_isbase) {
            qvboxlayout_itemat_isbase = false;
            return QVBoxLayout::itemAt(param1);
        } else if (qvboxlayout_itemat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qvboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBoxLayout::itemAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qvboxlayout_takeat_isbase) {
            qvboxlayout_takeat_isbase = false;
            return QVBoxLayout::takeAt(param1);
        } else if (qvboxlayout_takeat_callback != nullptr) {
            int cbval1 = param1;

            QLayoutItem* callback_ret = qvboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBoxLayout::takeAt(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qvboxlayout_count_isbase) {
            qvboxlayout_count_isbase = false;
            return QVBoxLayout::count();
        } else if (qvboxlayout_count_callback != nullptr) {
            int callback_ret = qvboxlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qvboxlayout_setgeometry_isbase) {
            qvboxlayout_setgeometry_isbase = false;
            QVBoxLayout::setGeometry(geometry);
        } else if (qvboxlayout_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qvboxlayout_setgeometry_callback(this, cbval1);
        } else {
            QVBoxLayout::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qvboxlayout_geometry_isbase) {
            qvboxlayout_geometry_isbase = false;
            return QVBoxLayout::geometry();
        } else if (qvboxlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qvboxlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QVBoxLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qvboxlayout_indexof_isbase) {
            qvboxlayout_indexof_isbase = false;
            return QVBoxLayout::indexOf(param1);
        } else if (qvboxlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qvboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qvboxlayout_isempty_isbase) {
            qvboxlayout_isempty_isbase = false;
            return QVBoxLayout::isEmpty();
        } else if (qvboxlayout_isempty_callback != nullptr) {
            bool callback_ret = qvboxlayout_isempty_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qvboxlayout_controltypes_isbase) {
            qvboxlayout_controltypes_isbase = false;
            return QVBoxLayout::controlTypes();
        } else if (qvboxlayout_controltypes_callback != nullptr) {
            int callback_ret = qvboxlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QVBoxLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qvboxlayout_replacewidget_isbase) {
            qvboxlayout_replacewidget_isbase = false;
            return QVBoxLayout::replaceWidget(from, to, options);
        } else if (qvboxlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qvboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QVBoxLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qvboxlayout_layout_isbase) {
            qvboxlayout_layout_isbase = false;
            return QVBoxLayout::layout();
        } else if (qvboxlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qvboxlayout_layout_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qvboxlayout_childevent_isbase) {
            qvboxlayout_childevent_isbase = false;
            QVBoxLayout::childEvent(e);
        } else if (qvboxlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qvboxlayout_childevent_callback(this, cbval1);
        } else {
            QVBoxLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvboxlayout_event_isbase) {
            qvboxlayout_event_isbase = false;
            return QVBoxLayout::event(event);
        } else if (qvboxlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qvboxlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBoxLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvboxlayout_eventfilter_isbase) {
            qvboxlayout_eventfilter_isbase = false;
            return QVBoxLayout::eventFilter(watched, event);
        } else if (qvboxlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qvboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QVBoxLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvboxlayout_timerevent_isbase) {
            qvboxlayout_timerevent_isbase = false;
            QVBoxLayout::timerEvent(event);
        } else if (qvboxlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qvboxlayout_timerevent_callback(this, cbval1);
        } else {
            QVBoxLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvboxlayout_customevent_isbase) {
            qvboxlayout_customevent_isbase = false;
            QVBoxLayout::customEvent(event);
        } else if (qvboxlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qvboxlayout_customevent_callback(this, cbval1);
        } else {
            QVBoxLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvboxlayout_connectnotify_isbase) {
            qvboxlayout_connectnotify_isbase = false;
            QVBoxLayout::connectNotify(signal);
        } else if (qvboxlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvboxlayout_connectnotify_callback(this, cbval1);
        } else {
            QVBoxLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvboxlayout_disconnectnotify_isbase) {
            qvboxlayout_disconnectnotify_isbase = false;
            QVBoxLayout::disconnectNotify(signal);
        } else if (qvboxlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvboxlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QVBoxLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qvboxlayout_widget_isbase) {
            qvboxlayout_widget_isbase = false;
            return QVBoxLayout::widget();
        } else if (qvboxlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qvboxlayout_widget_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qvboxlayout_spaceritem_isbase) {
            qvboxlayout_spaceritem_isbase = false;
            return QVBoxLayout::spacerItem();
        } else if (qvboxlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qvboxlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qvboxlayout_widgetevent_isbase) {
            qvboxlayout_widgetevent_isbase = false;
            QVBoxLayout::widgetEvent(param1);
        } else if (qvboxlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qvboxlayout_widgetevent_callback(this, cbval1);
        } else {
            QVBoxLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qvboxlayout_addchildlayout_isbase) {
            qvboxlayout_addchildlayout_isbase = false;
            QVBoxLayout::addChildLayout(l);
        } else if (qvboxlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qvboxlayout_addchildlayout_callback(this, cbval1);
        } else {
            QVBoxLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qvboxlayout_addchildwidget_isbase) {
            qvboxlayout_addchildwidget_isbase = false;
            QVBoxLayout::addChildWidget(w);
        } else if (qvboxlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qvboxlayout_addchildwidget_callback(this, cbval1);
        } else {
            QVBoxLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qvboxlayout_adoptlayout_isbase) {
            qvboxlayout_adoptlayout_isbase = false;
            return QVBoxLayout::adoptLayout(layout);
        } else if (qvboxlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qvboxlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBoxLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qvboxlayout_alignmentrect_isbase) {
            qvboxlayout_alignmentrect_isbase = false;
            return QVBoxLayout::alignmentRect(param1);
        } else if (qvboxlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qvboxlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QVBoxLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvboxlayout_sender_isbase) {
            qvboxlayout_sender_isbase = false;
            return QVBoxLayout::sender();
        } else if (qvboxlayout_sender_callback != nullptr) {
            QObject* callback_ret = qvboxlayout_sender_callback();
            return callback_ret;
        } else {
            return QVBoxLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvboxlayout_sendersignalindex_isbase) {
            qvboxlayout_sendersignalindex_isbase = false;
            return QVBoxLayout::senderSignalIndex();
        } else if (qvboxlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qvboxlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvboxlayout_receivers_isbase) {
            qvboxlayout_receivers_isbase = false;
            return QVBoxLayout::receivers(signal);
        } else if (qvboxlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qvboxlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVBoxLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvboxlayout_issignalconnected_isbase) {
            qvboxlayout_issignalconnected_isbase = false;
            return QVBoxLayout::isSignalConnected(signal);
        } else if (qvboxlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qvboxlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBoxLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QVBoxLayout_ChildEvent(QVBoxLayout* self, QChildEvent* e);
    friend void QVBoxLayout_QBaseChildEvent(QVBoxLayout* self, QChildEvent* e);
    friend void QVBoxLayout_TimerEvent(QVBoxLayout* self, QTimerEvent* event);
    friend void QVBoxLayout_QBaseTimerEvent(QVBoxLayout* self, QTimerEvent* event);
    friend void QVBoxLayout_CustomEvent(QVBoxLayout* self, QEvent* event);
    friend void QVBoxLayout_QBaseCustomEvent(QVBoxLayout* self, QEvent* event);
    friend void QVBoxLayout_ConnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
    friend void QVBoxLayout_QBaseConnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
    friend void QVBoxLayout_DisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
    friend void QVBoxLayout_QBaseDisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
    friend void QVBoxLayout_WidgetEvent(QVBoxLayout* self, QEvent* param1);
    friend void QVBoxLayout_QBaseWidgetEvent(QVBoxLayout* self, QEvent* param1);
    friend void QVBoxLayout_AddChildLayout(QVBoxLayout* self, QLayout* l);
    friend void QVBoxLayout_QBaseAddChildLayout(QVBoxLayout* self, QLayout* l);
    friend void QVBoxLayout_AddChildWidget(QVBoxLayout* self, QWidget* w);
    friend void QVBoxLayout_QBaseAddChildWidget(QVBoxLayout* self, QWidget* w);
    friend bool QVBoxLayout_AdoptLayout(QVBoxLayout* self, QLayout* layout);
    friend bool QVBoxLayout_QBaseAdoptLayout(QVBoxLayout* self, QLayout* layout);
    friend QRect* QVBoxLayout_AlignmentRect(const QVBoxLayout* self, const QRect* param1);
    friend QRect* QVBoxLayout_QBaseAlignmentRect(const QVBoxLayout* self, const QRect* param1);
    friend QObject* QVBoxLayout_Sender(const QVBoxLayout* self);
    friend QObject* QVBoxLayout_QBaseSender(const QVBoxLayout* self);
    friend int QVBoxLayout_SenderSignalIndex(const QVBoxLayout* self);
    friend int QVBoxLayout_QBaseSenderSignalIndex(const QVBoxLayout* self);
    friend int QVBoxLayout_Receivers(const QVBoxLayout* self, const char* signal);
    friend int QVBoxLayout_QBaseReceivers(const QVBoxLayout* self, const char* signal);
    friend bool QVBoxLayout_IsSignalConnected(const QVBoxLayout* self, const QMetaMethod* signal);
    friend bool QVBoxLayout_QBaseIsSignalConnected(const QVBoxLayout* self, const QMetaMethod* signal);
};

#endif
