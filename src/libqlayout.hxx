#pragma once
#ifndef SRCC_LIBVIRTUALQLAYOUT_H
#define SRCC_LIBVIRTUALQLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLayout so that we can call protected methods
class VirtualQLayout final : public QLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQLayout = true;

    // Virtual class public types (including callbacks)
    using QLayout_Metacall_Callback = int (*)(QLayout*, int, int, void**);
    using QLayout_Spacing_Callback = int (*)();
    using QLayout_SetSpacing_Callback = void (*)(QLayout*, int);
    using QLayout_Invalidate_Callback = void (*)();
    using QLayout_Geometry_Callback = QRect* (*)();
    using QLayout_AddItem_Callback = void (*)(QLayout*, QLayoutItem*);
    using QLayout_ExpandingDirections_Callback = int (*)();
    using QLayout_MinimumSize_Callback = QSize* (*)();
    using QLayout_MaximumSize_Callback = QSize* (*)();
    using QLayout_SetGeometry_Callback = void (*)(QLayout*, QRect*);
    using QLayout_ItemAt_Callback = QLayoutItem* (*)(const QLayout*, int);
    using QLayout_TakeAt_Callback = QLayoutItem* (*)(QLayout*, int);
    using QLayout_IndexOf_Callback = int (*)(const QLayout*, QWidget*);
    using QLayout_IndexOf2_Callback = int (*)(const QLayout*, QLayoutItem*);
    using QLayout_Count_Callback = int (*)();
    using QLayout_IsEmpty_Callback = bool (*)();
    using QLayout_ControlTypes_Callback = int (*)();
    using QLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QLayout*, QWidget*, QWidget*, int);
    using QLayout_Layout_Callback = QLayout* (*)();
    using QLayout_ChildEvent_Callback = void (*)(QLayout*, QChildEvent*);
    using QLayout_Event_Callback = bool (*)(QLayout*, QEvent*);
    using QLayout_EventFilter_Callback = bool (*)(QLayout*, QObject*, QEvent*);
    using QLayout_TimerEvent_Callback = void (*)(QLayout*, QTimerEvent*);
    using QLayout_CustomEvent_Callback = void (*)(QLayout*, QEvent*);
    using QLayout_ConnectNotify_Callback = void (*)(QLayout*, QMetaMethod*);
    using QLayout_DisconnectNotify_Callback = void (*)(QLayout*, QMetaMethod*);
    using QLayout_SizeHint_Callback = QSize* (*)();
    using QLayout_HasHeightForWidth_Callback = bool (*)();
    using QLayout_HeightForWidth_Callback = int (*)(const QLayout*, int);
    using QLayout_MinimumHeightForWidth_Callback = int (*)(const QLayout*, int);
    using QLayout_Widget_Callback = QWidget* (*)();
    using QLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QLayout_WidgetEvent_Callback = void (*)(QLayout*, QEvent*);
    using QLayout_AddChildLayout_Callback = void (*)(QLayout*, QLayout*);
    using QLayout_AddChildWidget_Callback = void (*)(QLayout*, QWidget*);
    using QLayout_AdoptLayout_Callback = bool (*)(QLayout*, QLayout*);
    using QLayout_AlignmentRect_Callback = QRect* (*)(const QLayout*, QRect*);
    using QLayout_Sender_Callback = QObject* (*)();
    using QLayout_SenderSignalIndex_Callback = int (*)();
    using QLayout_Receivers_Callback = int (*)(const QLayout*, const char*);
    using QLayout_IsSignalConnected_Callback = bool (*)(const QLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLayout_Metacall_Callback qlayout_metacall_callback = nullptr;
    QLayout_Spacing_Callback qlayout_spacing_callback = nullptr;
    QLayout_SetSpacing_Callback qlayout_setspacing_callback = nullptr;
    QLayout_Invalidate_Callback qlayout_invalidate_callback = nullptr;
    QLayout_Geometry_Callback qlayout_geometry_callback = nullptr;
    QLayout_AddItem_Callback qlayout_additem_callback = nullptr;
    QLayout_ExpandingDirections_Callback qlayout_expandingdirections_callback = nullptr;
    QLayout_MinimumSize_Callback qlayout_minimumsize_callback = nullptr;
    QLayout_MaximumSize_Callback qlayout_maximumsize_callback = nullptr;
    QLayout_SetGeometry_Callback qlayout_setgeometry_callback = nullptr;
    QLayout_ItemAt_Callback qlayout_itemat_callback = nullptr;
    QLayout_TakeAt_Callback qlayout_takeat_callback = nullptr;
    QLayout_IndexOf_Callback qlayout_indexof_callback = nullptr;
    QLayout_IndexOf2_Callback qlayout_indexof2_callback = nullptr;
    QLayout_Count_Callback qlayout_count_callback = nullptr;
    QLayout_IsEmpty_Callback qlayout_isempty_callback = nullptr;
    QLayout_ControlTypes_Callback qlayout_controltypes_callback = nullptr;
    QLayout_ReplaceWidget_Callback qlayout_replacewidget_callback = nullptr;
    QLayout_Layout_Callback qlayout_layout_callback = nullptr;
    QLayout_ChildEvent_Callback qlayout_childevent_callback = nullptr;
    QLayout_Event_Callback qlayout_event_callback = nullptr;
    QLayout_EventFilter_Callback qlayout_eventfilter_callback = nullptr;
    QLayout_TimerEvent_Callback qlayout_timerevent_callback = nullptr;
    QLayout_CustomEvent_Callback qlayout_customevent_callback = nullptr;
    QLayout_ConnectNotify_Callback qlayout_connectnotify_callback = nullptr;
    QLayout_DisconnectNotify_Callback qlayout_disconnectnotify_callback = nullptr;
    QLayout_SizeHint_Callback qlayout_sizehint_callback = nullptr;
    QLayout_HasHeightForWidth_Callback qlayout_hasheightforwidth_callback = nullptr;
    QLayout_HeightForWidth_Callback qlayout_heightforwidth_callback = nullptr;
    QLayout_MinimumHeightForWidth_Callback qlayout_minimumheightforwidth_callback = nullptr;
    QLayout_Widget_Callback qlayout_widget_callback = nullptr;
    QLayout_SpacerItem_Callback qlayout_spaceritem_callback = nullptr;
    QLayout_WidgetEvent_Callback qlayout_widgetevent_callback = nullptr;
    QLayout_AddChildLayout_Callback qlayout_addchildlayout_callback = nullptr;
    QLayout_AddChildWidget_Callback qlayout_addchildwidget_callback = nullptr;
    QLayout_AdoptLayout_Callback qlayout_adoptlayout_callback = nullptr;
    QLayout_AlignmentRect_Callback qlayout_alignmentrect_callback = nullptr;
    QLayout_Sender_Callback qlayout_sender_callback = nullptr;
    QLayout_SenderSignalIndex_Callback qlayout_sendersignalindex_callback = nullptr;
    QLayout_Receivers_Callback qlayout_receivers_callback = nullptr;
    QLayout_IsSignalConnected_Callback qlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlayout_metacall_isbase = false;
    mutable bool qlayout_spacing_isbase = false;
    mutable bool qlayout_setspacing_isbase = false;
    mutable bool qlayout_invalidate_isbase = false;
    mutable bool qlayout_geometry_isbase = false;
    mutable bool qlayout_additem_isbase = false;
    mutable bool qlayout_expandingdirections_isbase = false;
    mutable bool qlayout_minimumsize_isbase = false;
    mutable bool qlayout_maximumsize_isbase = false;
    mutable bool qlayout_setgeometry_isbase = false;
    mutable bool qlayout_itemat_isbase = false;
    mutable bool qlayout_takeat_isbase = false;
    mutable bool qlayout_indexof_isbase = false;
    mutable bool qlayout_indexof2_isbase = false;
    mutable bool qlayout_count_isbase = false;
    mutable bool qlayout_isempty_isbase = false;
    mutable bool qlayout_controltypes_isbase = false;
    mutable bool qlayout_replacewidget_isbase = false;
    mutable bool qlayout_layout_isbase = false;
    mutable bool qlayout_childevent_isbase = false;
    mutable bool qlayout_event_isbase = false;
    mutable bool qlayout_eventfilter_isbase = false;
    mutable bool qlayout_timerevent_isbase = false;
    mutable bool qlayout_customevent_isbase = false;
    mutable bool qlayout_connectnotify_isbase = false;
    mutable bool qlayout_disconnectnotify_isbase = false;
    mutable bool qlayout_sizehint_isbase = false;
    mutable bool qlayout_hasheightforwidth_isbase = false;
    mutable bool qlayout_heightforwidth_isbase = false;
    mutable bool qlayout_minimumheightforwidth_isbase = false;
    mutable bool qlayout_widget_isbase = false;
    mutable bool qlayout_spaceritem_isbase = false;
    mutable bool qlayout_widgetevent_isbase = false;
    mutable bool qlayout_addchildlayout_isbase = false;
    mutable bool qlayout_addchildwidget_isbase = false;
    mutable bool qlayout_adoptlayout_isbase = false;
    mutable bool qlayout_alignmentrect_isbase = false;
    mutable bool qlayout_sender_isbase = false;
    mutable bool qlayout_sendersignalindex_isbase = false;
    mutable bool qlayout_receivers_isbase = false;
    mutable bool qlayout_issignalconnected_isbase = false;

  public:
    VirtualQLayout(QWidget* parent) : QLayout(parent) {};
    VirtualQLayout() : QLayout() {};

    ~VirtualQLayout() {
        qlayout_metacall_callback = nullptr;
        qlayout_spacing_callback = nullptr;
        qlayout_setspacing_callback = nullptr;
        qlayout_invalidate_callback = nullptr;
        qlayout_geometry_callback = nullptr;
        qlayout_additem_callback = nullptr;
        qlayout_expandingdirections_callback = nullptr;
        qlayout_minimumsize_callback = nullptr;
        qlayout_maximumsize_callback = nullptr;
        qlayout_setgeometry_callback = nullptr;
        qlayout_itemat_callback = nullptr;
        qlayout_takeat_callback = nullptr;
        qlayout_indexof_callback = nullptr;
        qlayout_indexof2_callback = nullptr;
        qlayout_count_callback = nullptr;
        qlayout_isempty_callback = nullptr;
        qlayout_controltypes_callback = nullptr;
        qlayout_replacewidget_callback = nullptr;
        qlayout_layout_callback = nullptr;
        qlayout_childevent_callback = nullptr;
        qlayout_event_callback = nullptr;
        qlayout_eventfilter_callback = nullptr;
        qlayout_timerevent_callback = nullptr;
        qlayout_customevent_callback = nullptr;
        qlayout_connectnotify_callback = nullptr;
        qlayout_disconnectnotify_callback = nullptr;
        qlayout_sizehint_callback = nullptr;
        qlayout_hasheightforwidth_callback = nullptr;
        qlayout_heightforwidth_callback = nullptr;
        qlayout_minimumheightforwidth_callback = nullptr;
        qlayout_widget_callback = nullptr;
        qlayout_spaceritem_callback = nullptr;
        qlayout_widgetevent_callback = nullptr;
        qlayout_addchildlayout_callback = nullptr;
        qlayout_addchildwidget_callback = nullptr;
        qlayout_adoptlayout_callback = nullptr;
        qlayout_alignmentrect_callback = nullptr;
        qlayout_sender_callback = nullptr;
        qlayout_sendersignalindex_callback = nullptr;
        qlayout_receivers_callback = nullptr;
        qlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQLayout_Metacall_Callback(QLayout_Metacall_Callback cb) { qlayout_metacall_callback = cb; }
    inline void setQLayout_Spacing_Callback(QLayout_Spacing_Callback cb) { qlayout_spacing_callback = cb; }
    inline void setQLayout_SetSpacing_Callback(QLayout_SetSpacing_Callback cb) { qlayout_setspacing_callback = cb; }
    inline void setQLayout_Invalidate_Callback(QLayout_Invalidate_Callback cb) { qlayout_invalidate_callback = cb; }
    inline void setQLayout_Geometry_Callback(QLayout_Geometry_Callback cb) { qlayout_geometry_callback = cb; }
    inline void setQLayout_AddItem_Callback(QLayout_AddItem_Callback cb) { qlayout_additem_callback = cb; }
    inline void setQLayout_ExpandingDirections_Callback(QLayout_ExpandingDirections_Callback cb) { qlayout_expandingdirections_callback = cb; }
    inline void setQLayout_MinimumSize_Callback(QLayout_MinimumSize_Callback cb) { qlayout_minimumsize_callback = cb; }
    inline void setQLayout_MaximumSize_Callback(QLayout_MaximumSize_Callback cb) { qlayout_maximumsize_callback = cb; }
    inline void setQLayout_SetGeometry_Callback(QLayout_SetGeometry_Callback cb) { qlayout_setgeometry_callback = cb; }
    inline void setQLayout_ItemAt_Callback(QLayout_ItemAt_Callback cb) { qlayout_itemat_callback = cb; }
    inline void setQLayout_TakeAt_Callback(QLayout_TakeAt_Callback cb) { qlayout_takeat_callback = cb; }
    inline void setQLayout_IndexOf_Callback(QLayout_IndexOf_Callback cb) { qlayout_indexof_callback = cb; }
    inline void setQLayout_IndexOf2_Callback(QLayout_IndexOf2_Callback cb) { qlayout_indexof2_callback = cb; }
    inline void setQLayout_Count_Callback(QLayout_Count_Callback cb) { qlayout_count_callback = cb; }
    inline void setQLayout_IsEmpty_Callback(QLayout_IsEmpty_Callback cb) { qlayout_isempty_callback = cb; }
    inline void setQLayout_ControlTypes_Callback(QLayout_ControlTypes_Callback cb) { qlayout_controltypes_callback = cb; }
    inline void setQLayout_ReplaceWidget_Callback(QLayout_ReplaceWidget_Callback cb) { qlayout_replacewidget_callback = cb; }
    inline void setQLayout_Layout_Callback(QLayout_Layout_Callback cb) { qlayout_layout_callback = cb; }
    inline void setQLayout_ChildEvent_Callback(QLayout_ChildEvent_Callback cb) { qlayout_childevent_callback = cb; }
    inline void setQLayout_Event_Callback(QLayout_Event_Callback cb) { qlayout_event_callback = cb; }
    inline void setQLayout_EventFilter_Callback(QLayout_EventFilter_Callback cb) { qlayout_eventfilter_callback = cb; }
    inline void setQLayout_TimerEvent_Callback(QLayout_TimerEvent_Callback cb) { qlayout_timerevent_callback = cb; }
    inline void setQLayout_CustomEvent_Callback(QLayout_CustomEvent_Callback cb) { qlayout_customevent_callback = cb; }
    inline void setQLayout_ConnectNotify_Callback(QLayout_ConnectNotify_Callback cb) { qlayout_connectnotify_callback = cb; }
    inline void setQLayout_DisconnectNotify_Callback(QLayout_DisconnectNotify_Callback cb) { qlayout_disconnectnotify_callback = cb; }
    inline void setQLayout_SizeHint_Callback(QLayout_SizeHint_Callback cb) { qlayout_sizehint_callback = cb; }
    inline void setQLayout_HasHeightForWidth_Callback(QLayout_HasHeightForWidth_Callback cb) { qlayout_hasheightforwidth_callback = cb; }
    inline void setQLayout_HeightForWidth_Callback(QLayout_HeightForWidth_Callback cb) { qlayout_heightforwidth_callback = cb; }
    inline void setQLayout_MinimumHeightForWidth_Callback(QLayout_MinimumHeightForWidth_Callback cb) { qlayout_minimumheightforwidth_callback = cb; }
    inline void setQLayout_Widget_Callback(QLayout_Widget_Callback cb) { qlayout_widget_callback = cb; }
    inline void setQLayout_SpacerItem_Callback(QLayout_SpacerItem_Callback cb) { qlayout_spaceritem_callback = cb; }
    inline void setQLayout_WidgetEvent_Callback(QLayout_WidgetEvent_Callback cb) { qlayout_widgetevent_callback = cb; }
    inline void setQLayout_AddChildLayout_Callback(QLayout_AddChildLayout_Callback cb) { qlayout_addchildlayout_callback = cb; }
    inline void setQLayout_AddChildWidget_Callback(QLayout_AddChildWidget_Callback cb) { qlayout_addchildwidget_callback = cb; }
    inline void setQLayout_AdoptLayout_Callback(QLayout_AdoptLayout_Callback cb) { qlayout_adoptlayout_callback = cb; }
    inline void setQLayout_AlignmentRect_Callback(QLayout_AlignmentRect_Callback cb) { qlayout_alignmentrect_callback = cb; }
    inline void setQLayout_Sender_Callback(QLayout_Sender_Callback cb) { qlayout_sender_callback = cb; }
    inline void setQLayout_SenderSignalIndex_Callback(QLayout_SenderSignalIndex_Callback cb) { qlayout_sendersignalindex_callback = cb; }
    inline void setQLayout_Receivers_Callback(QLayout_Receivers_Callback cb) { qlayout_receivers_callback = cb; }
    inline void setQLayout_IsSignalConnected_Callback(QLayout_IsSignalConnected_Callback cb) { qlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLayout_Metacall_IsBase(bool value) const { qlayout_metacall_isbase = value; }
    inline void setQLayout_Spacing_IsBase(bool value) const { qlayout_spacing_isbase = value; }
    inline void setQLayout_SetSpacing_IsBase(bool value) const { qlayout_setspacing_isbase = value; }
    inline void setQLayout_Invalidate_IsBase(bool value) const { qlayout_invalidate_isbase = value; }
    inline void setQLayout_Geometry_IsBase(bool value) const { qlayout_geometry_isbase = value; }
    inline void setQLayout_AddItem_IsBase(bool value) const { qlayout_additem_isbase = value; }
    inline void setQLayout_ExpandingDirections_IsBase(bool value) const { qlayout_expandingdirections_isbase = value; }
    inline void setQLayout_MinimumSize_IsBase(bool value) const { qlayout_minimumsize_isbase = value; }
    inline void setQLayout_MaximumSize_IsBase(bool value) const { qlayout_maximumsize_isbase = value; }
    inline void setQLayout_SetGeometry_IsBase(bool value) const { qlayout_setgeometry_isbase = value; }
    inline void setQLayout_ItemAt_IsBase(bool value) const { qlayout_itemat_isbase = value; }
    inline void setQLayout_TakeAt_IsBase(bool value) const { qlayout_takeat_isbase = value; }
    inline void setQLayout_IndexOf_IsBase(bool value) const { qlayout_indexof_isbase = value; }
    inline void setQLayout_IndexOf2_IsBase(bool value) const { qlayout_indexof2_isbase = value; }
    inline void setQLayout_Count_IsBase(bool value) const { qlayout_count_isbase = value; }
    inline void setQLayout_IsEmpty_IsBase(bool value) const { qlayout_isempty_isbase = value; }
    inline void setQLayout_ControlTypes_IsBase(bool value) const { qlayout_controltypes_isbase = value; }
    inline void setQLayout_ReplaceWidget_IsBase(bool value) const { qlayout_replacewidget_isbase = value; }
    inline void setQLayout_Layout_IsBase(bool value) const { qlayout_layout_isbase = value; }
    inline void setQLayout_ChildEvent_IsBase(bool value) const { qlayout_childevent_isbase = value; }
    inline void setQLayout_Event_IsBase(bool value) const { qlayout_event_isbase = value; }
    inline void setQLayout_EventFilter_IsBase(bool value) const { qlayout_eventfilter_isbase = value; }
    inline void setQLayout_TimerEvent_IsBase(bool value) const { qlayout_timerevent_isbase = value; }
    inline void setQLayout_CustomEvent_IsBase(bool value) const { qlayout_customevent_isbase = value; }
    inline void setQLayout_ConnectNotify_IsBase(bool value) const { qlayout_connectnotify_isbase = value; }
    inline void setQLayout_DisconnectNotify_IsBase(bool value) const { qlayout_disconnectnotify_isbase = value; }
    inline void setQLayout_SizeHint_IsBase(bool value) const { qlayout_sizehint_isbase = value; }
    inline void setQLayout_HasHeightForWidth_IsBase(bool value) const { qlayout_hasheightforwidth_isbase = value; }
    inline void setQLayout_HeightForWidth_IsBase(bool value) const { qlayout_heightforwidth_isbase = value; }
    inline void setQLayout_MinimumHeightForWidth_IsBase(bool value) const { qlayout_minimumheightforwidth_isbase = value; }
    inline void setQLayout_Widget_IsBase(bool value) const { qlayout_widget_isbase = value; }
    inline void setQLayout_SpacerItem_IsBase(bool value) const { qlayout_spaceritem_isbase = value; }
    inline void setQLayout_WidgetEvent_IsBase(bool value) const { qlayout_widgetevent_isbase = value; }
    inline void setQLayout_AddChildLayout_IsBase(bool value) const { qlayout_addchildlayout_isbase = value; }
    inline void setQLayout_AddChildWidget_IsBase(bool value) const { qlayout_addchildwidget_isbase = value; }
    inline void setQLayout_AdoptLayout_IsBase(bool value) const { qlayout_adoptlayout_isbase = value; }
    inline void setQLayout_AlignmentRect_IsBase(bool value) const { qlayout_alignmentrect_isbase = value; }
    inline void setQLayout_Sender_IsBase(bool value) const { qlayout_sender_isbase = value; }
    inline void setQLayout_SenderSignalIndex_IsBase(bool value) const { qlayout_sendersignalindex_isbase = value; }
    inline void setQLayout_Receivers_IsBase(bool value) const { qlayout_receivers_isbase = value; }
    inline void setQLayout_IsSignalConnected_IsBase(bool value) const { qlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlayout_metacall_isbase) {
            qlayout_metacall_isbase = false;
            return QLayout::qt_metacall(param1, param2, param3);
        } else if (qlayout_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qlayout_spacing_isbase) {
            qlayout_spacing_isbase = false;
            return QLayout::spacing();
        } else if (qlayout_spacing_callback != nullptr) {
            int callback_ret = qlayout_spacing_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qlayout_setspacing_isbase) {
            qlayout_setspacing_isbase = false;
            QLayout::setSpacing(spacing);
        } else if (qlayout_setspacing_callback != nullptr) {
            int cbval1 = spacing;

            qlayout_setspacing_callback(this, cbval1);
        } else {
            QLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qlayout_invalidate_isbase) {
            qlayout_invalidate_isbase = false;
            QLayout::invalidate();
        } else if (qlayout_invalidate_callback != nullptr) {
            qlayout_invalidate_callback();
        } else {
            QLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qlayout_geometry_isbase) {
            qlayout_geometry_isbase = false;
            return QLayout::geometry();
        } else if (qlayout_geometry_callback != nullptr) {
            QRect* callback_ret = qlayout_geometry_callback();
            return *callback_ret;
        } else {
            return QLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qlayout_additem_callback != nullptr) {
            QLayoutItem* cbval1 = param1;

            qlayout_additem_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qlayout_expandingdirections_isbase) {
            qlayout_expandingdirections_isbase = false;
            return QLayout::expandingDirections();
        } else if (qlayout_expandingdirections_callback != nullptr) {
            int callback_ret = qlayout_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qlayout_minimumsize_isbase) {
            qlayout_minimumsize_isbase = false;
            return QLayout::minimumSize();
        } else if (qlayout_minimumsize_callback != nullptr) {
            QSize* callback_ret = qlayout_minimumsize_callback();
            return *callback_ret;
        } else {
            return QLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qlayout_maximumsize_isbase) {
            qlayout_maximumsize_isbase = false;
            return QLayout::maximumSize();
        } else if (qlayout_maximumsize_callback != nullptr) {
            QSize* callback_ret = qlayout_maximumsize_callback();
            return *callback_ret;
        } else {
            return QLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qlayout_setgeometry_isbase) {
            qlayout_setgeometry_isbase = false;
            QLayout::setGeometry(geometry);
        } else if (qlayout_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qlayout_setgeometry_callback(this, cbval1);
        } else {
            QLayout::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qlayout_itemat_callback != nullptr) {
            int cbval1 = index;

            QLayoutItem* callback_ret = qlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qlayout_takeat_callback != nullptr) {
            int cbval1 = index;

            QLayoutItem* callback_ret = qlayout_takeat_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qlayout_indexof_isbase) {
            qlayout_indexof_isbase = false;
            return QLayout::indexOf(param1);
        } else if (qlayout_indexof_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = qlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QLayoutItem* param1) const override {
        if (qlayout_indexof2_isbase) {
            qlayout_indexof2_isbase = false;
            return QLayout::indexOf(param1);
        } else if (qlayout_indexof2_callback != nullptr) {
            QLayoutItem* cbval1 = (QLayoutItem*)param1;

            int callback_ret = qlayout_indexof2_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qlayout_count_callback != nullptr) {
            int callback_ret = qlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qlayout_isempty_isbase) {
            qlayout_isempty_isbase = false;
            return QLayout::isEmpty();
        } else if (qlayout_isempty_callback != nullptr) {
            bool callback_ret = qlayout_isempty_callback();
            return callback_ret;
        } else {
            return QLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qlayout_controltypes_isbase) {
            qlayout_controltypes_isbase = false;
            return QLayout::controlTypes();
        } else if (qlayout_controltypes_callback != nullptr) {
            int callback_ret = qlayout_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qlayout_replacewidget_isbase) {
            qlayout_replacewidget_isbase = false;
            return QLayout::replaceWidget(from, to, options);
        } else if (qlayout_replacewidget_callback != nullptr) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = qlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qlayout_layout_isbase) {
            qlayout_layout_isbase = false;
            return QLayout::layout();
        } else if (qlayout_layout_callback != nullptr) {
            QLayout* callback_ret = qlayout_layout_callback();
            return callback_ret;
        } else {
            return QLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qlayout_childevent_isbase) {
            qlayout_childevent_isbase = false;
            QLayout::childEvent(e);
        } else if (qlayout_childevent_callback != nullptr) {
            QChildEvent* cbval1 = e;

            qlayout_childevent_callback(this, cbval1);
        } else {
            QLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlayout_event_isbase) {
            qlayout_event_isbase = false;
            return QLayout::event(event);
        } else if (qlayout_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlayout_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlayout_eventfilter_isbase) {
            qlayout_eventfilter_isbase = false;
            return QLayout::eventFilter(watched, event);
        } else if (qlayout_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlayout_timerevent_isbase) {
            qlayout_timerevent_isbase = false;
            QLayout::timerEvent(event);
        } else if (qlayout_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlayout_timerevent_callback(this, cbval1);
        } else {
            QLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlayout_customevent_isbase) {
            qlayout_customevent_isbase = false;
            QLayout::customEvent(event);
        } else if (qlayout_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlayout_customevent_callback(this, cbval1);
        } else {
            QLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlayout_connectnotify_isbase) {
            qlayout_connectnotify_isbase = false;
            QLayout::connectNotify(signal);
        } else if (qlayout_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlayout_connectnotify_callback(this, cbval1);
        } else {
            QLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlayout_disconnectnotify_isbase) {
            qlayout_disconnectnotify_isbase = false;
            QLayout::disconnectNotify(signal);
        } else if (qlayout_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlayout_disconnectnotify_callback(this, cbval1);
        } else {
            QLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlayout_sizehint_callback != nullptr) {
            QSize* callback_ret = qlayout_sizehint_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlayout_hasheightforwidth_isbase) {
            qlayout_hasheightforwidth_isbase = false;
            return QLayout::hasHeightForWidth();
        } else if (qlayout_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qlayout_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlayout_heightforwidth_isbase) {
            qlayout_heightforwidth_isbase = false;
            return QLayout::heightForWidth(param1);
        } else if (qlayout_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qlayout_minimumheightforwidth_isbase) {
            qlayout_minimumheightforwidth_isbase = false;
            return QLayout::minimumHeightForWidth(param1);
        } else if (qlayout_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qlayout_widget_isbase) {
            qlayout_widget_isbase = false;
            return QLayout::widget();
        } else if (qlayout_widget_callback != nullptr) {
            QWidget* callback_ret = qlayout_widget_callback();
            return callback_ret;
        } else {
            return QLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qlayout_spaceritem_isbase) {
            qlayout_spaceritem_isbase = false;
            return QLayout::spacerItem();
        } else if (qlayout_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qlayout_spaceritem_callback();
            return callback_ret;
        } else {
            return QLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qlayout_widgetevent_isbase) {
            qlayout_widgetevent_isbase = false;
            QLayout::widgetEvent(param1);
        } else if (qlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qlayout_widgetevent_callback(this, cbval1);
        } else {
            QLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qlayout_addchildlayout_isbase) {
            qlayout_addchildlayout_isbase = false;
            QLayout::addChildLayout(l);
        } else if (qlayout_addchildlayout_callback != nullptr) {
            QLayout* cbval1 = l;

            qlayout_addchildlayout_callback(this, cbval1);
        } else {
            QLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qlayout_addchildwidget_isbase) {
            qlayout_addchildwidget_isbase = false;
            QLayout::addChildWidget(w);
        } else if (qlayout_addchildwidget_callback != nullptr) {
            QWidget* cbval1 = w;

            qlayout_addchildwidget_callback(this, cbval1);
        } else {
            QLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qlayout_adoptlayout_isbase) {
            qlayout_adoptlayout_isbase = false;
            return QLayout::adoptLayout(layout);
        } else if (qlayout_adoptlayout_callback != nullptr) {
            QLayout* cbval1 = layout;

            bool callback_ret = qlayout_adoptlayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qlayout_alignmentrect_isbase) {
            qlayout_alignmentrect_isbase = false;
            return QLayout::alignmentRect(param1);
        } else if (qlayout_alignmentrect_callback != nullptr) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = qlayout_alignmentrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlayout_sender_isbase) {
            qlayout_sender_isbase = false;
            return QLayout::sender();
        } else if (qlayout_sender_callback != nullptr) {
            QObject* callback_ret = qlayout_sender_callback();
            return callback_ret;
        } else {
            return QLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlayout_sendersignalindex_isbase) {
            qlayout_sendersignalindex_isbase = false;
            return QLayout::senderSignalIndex();
        } else if (qlayout_sendersignalindex_callback != nullptr) {
            int callback_ret = qlayout_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlayout_receivers_isbase) {
            qlayout_receivers_isbase = false;
            return QLayout::receivers(signal);
        } else if (qlayout_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlayout_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlayout_issignalconnected_isbase) {
            qlayout_issignalconnected_isbase = false;
            return QLayout::isSignalConnected(signal);
        } else if (qlayout_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlayout_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLayout::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QLayout_ChildEvent(QLayout* self, QChildEvent* e);
    friend void QLayout_QBaseChildEvent(QLayout* self, QChildEvent* e);
    friend void QLayout_TimerEvent(QLayout* self, QTimerEvent* event);
    friend void QLayout_QBaseTimerEvent(QLayout* self, QTimerEvent* event);
    friend void QLayout_CustomEvent(QLayout* self, QEvent* event);
    friend void QLayout_QBaseCustomEvent(QLayout* self, QEvent* event);
    friend void QLayout_ConnectNotify(QLayout* self, const QMetaMethod* signal);
    friend void QLayout_QBaseConnectNotify(QLayout* self, const QMetaMethod* signal);
    friend void QLayout_DisconnectNotify(QLayout* self, const QMetaMethod* signal);
    friend void QLayout_QBaseDisconnectNotify(QLayout* self, const QMetaMethod* signal);
    friend void QLayout_WidgetEvent(QLayout* self, QEvent* param1);
    friend void QLayout_QBaseWidgetEvent(QLayout* self, QEvent* param1);
    friend void QLayout_AddChildLayout(QLayout* self, QLayout* l);
    friend void QLayout_QBaseAddChildLayout(QLayout* self, QLayout* l);
    friend void QLayout_AddChildWidget(QLayout* self, QWidget* w);
    friend void QLayout_QBaseAddChildWidget(QLayout* self, QWidget* w);
    friend bool QLayout_AdoptLayout(QLayout* self, QLayout* layout);
    friend bool QLayout_QBaseAdoptLayout(QLayout* self, QLayout* layout);
    friend QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1);
    friend QRect* QLayout_QBaseAlignmentRect(const QLayout* self, const QRect* param1);
    friend QObject* QLayout_Sender(const QLayout* self);
    friend QObject* QLayout_QBaseSender(const QLayout* self);
    friend int QLayout_SenderSignalIndex(const QLayout* self);
    friend int QLayout_QBaseSenderSignalIndex(const QLayout* self);
    friend int QLayout_Receivers(const QLayout* self, const char* signal);
    friend int QLayout_QBaseReceivers(const QLayout* self, const char* signal);
    friend bool QLayout_IsSignalConnected(const QLayout* self, const QMetaMethod* signal);
    friend bool QLayout_QBaseIsSignalConnected(const QLayout* self, const QMetaMethod* signal);
};

#endif
