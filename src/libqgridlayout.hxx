#pragma once
#ifndef SRCC_LIBVIRTUALQGRIDLAYOUT_H
#define SRCC_LIBVIRTUALQGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGridLayout so that we can call protected methods
class VirtualQGridLayout final : public QGridLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQGridLayout = true;

    // Virtual class public types (including callbacks)
    using QGridLayout_MetaObject_Callback = QMetaObject* (*)();
    using QGridLayout_Metacast_Callback = void* (*)(QGridLayout*, const char*);
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
    using QGridLayout_AddItem2_Callback = void (*)(QGridLayout*, QLayoutItem*);
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
    QGridLayout_MetaObject_Callback qgridlayout_metaobject_callback = nullptr;
    QGridLayout_Metacast_Callback qgridlayout_metacast_callback = nullptr;
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
    QGridLayout_AddItem2_Callback qgridlayout_additem2_callback = nullptr;
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
    mutable bool qgridlayout_metaobject_isbase = false;
    mutable bool qgridlayout_metacast_isbase = false;
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
    mutable bool qgridlayout_additem2_isbase = false;
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
    VirtualQGridLayout(QWidget* parent) : QGridLayout(parent) {};
    VirtualQGridLayout() : QGridLayout() {};

    // Callback setters
    inline void setQGridLayout_MetaObject_Callback(QGridLayout_MetaObject_Callback cb) { qgridlayout_metaobject_callback = cb; }
    inline void setQGridLayout_Metacast_Callback(QGridLayout_Metacast_Callback cb) { qgridlayout_metacast_callback = cb; }
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
    inline void setQGridLayout_AddItem2_Callback(QGridLayout_AddItem2_Callback cb) { qgridlayout_additem2_callback = cb; }
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
    inline void setQGridLayout_MetaObject_IsBase(bool value) const { qgridlayout_metaobject_isbase = value; }
    inline void setQGridLayout_Metacast_IsBase(bool value) const { qgridlayout_metacast_isbase = value; }
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
    inline void setQGridLayout_AddItem2_IsBase(bool value) const { qgridlayout_additem2_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qgridlayout_metaobject_isbase) {
            qgridlayout_metaobject_isbase = false;
            return QGridLayout::metaObject();
        }
        auto metaobject_cb = qgridlayout_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGridLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgridlayout_metacast_isbase) {
            qgridlayout_metacast_isbase = false;
            return QGridLayout::qt_metacast(param1);
        }
        auto metacast_cb = qgridlayout_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgridlayout_metacall_isbase) {
            qgridlayout_metacall_isbase = false;
            return QGridLayout::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgridlayout_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgridlayout_sizehint_isbase) {
            qgridlayout_sizehint_isbase = false;
            return QGridLayout::sizeHint();
        }
        auto sizehint_cb = qgridlayout_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QGridLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qgridlayout_minimumsize_isbase) {
            qgridlayout_minimumsize_isbase = false;
            return QGridLayout::minimumSize();
        }
        auto minimumsize_cb = qgridlayout_minimumsize_callback;
        if (minimumsize_cb) {
            QSize* callback_ret = minimumsize_cb();
            return *callback_ret;
        }
        return QGridLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qgridlayout_maximumsize_isbase) {
            qgridlayout_maximumsize_isbase = false;
            return QGridLayout::maximumSize();
        }
        auto maximumsize_cb = qgridlayout_maximumsize_callback;
        if (maximumsize_cb) {
            QSize* callback_ret = maximumsize_cb();
            return *callback_ret;
        }
        return QGridLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qgridlayout_setspacing_isbase) {
            qgridlayout_setspacing_isbase = false;
            QGridLayout::setSpacing(spacing);
            return;
        }
        auto setspacing_cb = qgridlayout_setspacing_callback;
        if (setspacing_cb) {
            int cbval1 = spacing;

            setspacing_cb(this, cbval1);
            return;
        }
        QGridLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qgridlayout_spacing_isbase) {
            qgridlayout_spacing_isbase = false;
            return QGridLayout::spacing();
        }
        auto spacing_cb = qgridlayout_spacing_callback;
        if (spacing_cb) {
            int callback_ret = spacing_cb();
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgridlayout_hasheightforwidth_isbase) {
            qgridlayout_hasheightforwidth_isbase = false;
            return QGridLayout::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qgridlayout_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QGridLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgridlayout_heightforwidth_isbase) {
            qgridlayout_heightforwidth_isbase = false;
            return QGridLayout::heightForWidth(param1);
        }
        auto heightforwidth_cb = qgridlayout_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qgridlayout_minimumheightforwidth_isbase) {
            qgridlayout_minimumheightforwidth_isbase = false;
            return QGridLayout::minimumHeightForWidth(param1);
        }
        auto minimumheightforwidth_cb = qgridlayout_minimumheightforwidth_callback;
        if (minimumheightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = minimumheightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qgridlayout_expandingdirections_isbase) {
            qgridlayout_expandingdirections_isbase = false;
            return QGridLayout::expandingDirections();
        }
        auto expandingdirections_cb = qgridlayout_expandingdirections_callback;
        if (expandingdirections_cb) {
            int callback_ret = expandingdirections_cb();
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QGridLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgridlayout_invalidate_isbase) {
            qgridlayout_invalidate_isbase = false;
            QGridLayout::invalidate();
            return;
        }
        auto invalidate_cb = qgridlayout_invalidate_callback;
        if (invalidate_cb) {
            invalidate_cb();
            return;
        }
        QGridLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qgridlayout_itemat_isbase) {
            qgridlayout_itemat_isbase = false;
            return QGridLayout::itemAt(index);
        }
        auto itemat_cb = qgridlayout_itemat_callback;
        if (itemat_cb) {
            int cbval1 = index;

            QLayoutItem* callback_ret = itemat_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qgridlayout_takeat_isbase) {
            qgridlayout_takeat_isbase = false;
            return QGridLayout::takeAt(index);
        }
        auto takeat_cb = qgridlayout_takeat_callback;
        if (takeat_cb) {
            int cbval1 = index;

            QLayoutItem* callback_ret = takeat_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::takeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgridlayout_count_isbase) {
            qgridlayout_count_isbase = false;
            return QGridLayout::count();
        }
        auto count_cb = qgridlayout_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qgridlayout_setgeometry_isbase) {
            qgridlayout_setgeometry_isbase = false;
            QGridLayout::setGeometry(geometry);
            return;
        }
        auto setgeometry_cb = qgridlayout_setgeometry_callback;
        if (setgeometry_cb) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QGridLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qgridlayout_additem2_isbase) {
            qgridlayout_additem2_isbase = false;
            QGridLayout::addItem(param1);
            return;
        }
        auto additem2_cb = qgridlayout_additem2_callback;
        if (additem2_cb) {
            QLayoutItem* cbval1 = param1;

            additem2_cb(this, cbval1);
            return;
        }
        QGridLayout::addItem(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qgridlayout_geometry_isbase) {
            qgridlayout_geometry_isbase = false;
            return QGridLayout::geometry();
        }
        auto geometry_cb = qgridlayout_geometry_callback;
        if (geometry_cb) {
            QRect* callback_ret = geometry_cb();
            return *callback_ret;
        }
        return QGridLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qgridlayout_indexof_isbase) {
            qgridlayout_indexof_isbase = false;
            return QGridLayout::indexOf(param1);
        }
        auto indexof_cb = qgridlayout_indexof_callback;
        if (indexof_cb) {
            QWidget* cbval1 = (QWidget*)param1;

            int callback_ret = indexof_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgridlayout_isempty_isbase) {
            qgridlayout_isempty_isbase = false;
            return QGridLayout::isEmpty();
        }
        auto isempty_cb = qgridlayout_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QGridLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qgridlayout_controltypes_isbase) {
            qgridlayout_controltypes_isbase = false;
            return QGridLayout::controlTypes();
        }
        auto controltypes_cb = qgridlayout_controltypes_callback;
        if (controltypes_cb) {
            int callback_ret = controltypes_cb();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QGridLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qgridlayout_replacewidget_isbase) {
            qgridlayout_replacewidget_isbase = false;
            return QGridLayout::replaceWidget(from, to, options);
        }
        auto replacewidget_cb = qgridlayout_replacewidget_callback;
        if (replacewidget_cb) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);

            QLayoutItem* callback_ret = replacewidget_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QGridLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qgridlayout_layout_isbase) {
            qgridlayout_layout_isbase = false;
            return QGridLayout::layout();
        }
        auto layout_cb = qgridlayout_layout_callback;
        if (layout_cb) {
            QLayout* callback_ret = layout_cb();
            return callback_ret;
        }
        return QGridLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qgridlayout_childevent_isbase) {
            qgridlayout_childevent_isbase = false;
            QGridLayout::childEvent(e);
            return;
        }
        auto childevent_cb = qgridlayout_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = e;

            childevent_cb(this, cbval1);
            return;
        }
        QGridLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgridlayout_event_isbase) {
            qgridlayout_event_isbase = false;
            return QGridLayout::event(event);
        }
        auto event_cb = qgridlayout_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgridlayout_eventfilter_isbase) {
            qgridlayout_eventfilter_isbase = false;
            return QGridLayout::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgridlayout_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGridLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgridlayout_timerevent_isbase) {
            qgridlayout_timerevent_isbase = false;
            QGridLayout::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgridlayout_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGridLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgridlayout_customevent_isbase) {
            qgridlayout_customevent_isbase = false;
            QGridLayout::customEvent(event);
            return;
        }
        auto customevent_cb = qgridlayout_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGridLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_connectnotify_isbase) {
            qgridlayout_connectnotify_isbase = false;
            QGridLayout::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgridlayout_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGridLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_disconnectnotify_isbase) {
            qgridlayout_disconnectnotify_isbase = false;
            QGridLayout::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgridlayout_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGridLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qgridlayout_widget_isbase) {
            qgridlayout_widget_isbase = false;
            return QGridLayout::widget();
        }
        auto widget_cb = qgridlayout_widget_callback;
        if (widget_cb) {
            QWidget* callback_ret = widget_cb();
            return callback_ret;
        }
        return QGridLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qgridlayout_spaceritem_isbase) {
            qgridlayout_spaceritem_isbase = false;
            return QGridLayout::spacerItem();
        }
        auto spaceritem_cb = qgridlayout_spaceritem_callback;
        if (spaceritem_cb) {
            QSpacerItem* callback_ret = spaceritem_cb();
            return callback_ret;
        }
        return QGridLayout::spacerItem();
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qgridlayout_widgetevent_isbase) {
            qgridlayout_widgetevent_isbase = false;
            QGridLayout::widgetEvent(param1);
            return;
        }
        auto widgetevent_cb = qgridlayout_widgetevent_callback;
        if (widgetevent_cb) {
            QEvent* cbval1 = param1;

            widgetevent_cb(this, cbval1);
            return;
        }
        QGridLayout::widgetEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qgridlayout_addchildlayout_isbase) {
            qgridlayout_addchildlayout_isbase = false;
            QGridLayout::addChildLayout(l);
            return;
        }
        auto addchildlayout_cb = qgridlayout_addchildlayout_callback;
        if (addchildlayout_cb) {
            QLayout* cbval1 = l;

            addchildlayout_cb(this, cbval1);
            return;
        }
        QGridLayout::addChildLayout(l);
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qgridlayout_addchildwidget_isbase) {
            qgridlayout_addchildwidget_isbase = false;
            QGridLayout::addChildWidget(w);
            return;
        }
        auto addchildwidget_cb = qgridlayout_addchildwidget_callback;
        if (addchildwidget_cb) {
            QWidget* cbval1 = w;

            addchildwidget_cb(this, cbval1);
            return;
        }
        QGridLayout::addChildWidget(w);
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qgridlayout_adoptlayout_isbase) {
            qgridlayout_adoptlayout_isbase = false;
            return QGridLayout::adoptLayout(layout);
        }
        auto adoptlayout_cb = qgridlayout_adoptlayout_callback;
        if (adoptlayout_cb) {
            QLayout* cbval1 = layout;

            bool callback_ret = adoptlayout_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::adoptLayout(layout);
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qgridlayout_alignmentrect_isbase) {
            qgridlayout_alignmentrect_isbase = false;
            return QGridLayout::alignmentRect(param1);
        }
        auto alignmentrect_cb = qgridlayout_alignmentrect_callback;
        if (alignmentrect_cb) {
            const QRect& param1_ret = param1;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&param1_ret);

            QRect* callback_ret = alignmentrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QGridLayout::alignmentRect(param1);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgridlayout_sender_isbase) {
            qgridlayout_sender_isbase = false;
            return QGridLayout::sender();
        }
        auto sender_cb = qgridlayout_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGridLayout::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgridlayout_sendersignalindex_isbase) {
            qgridlayout_sendersignalindex_isbase = false;
            return QGridLayout::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgridlayout_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgridlayout_receivers_isbase) {
            qgridlayout_receivers_isbase = false;
            return QGridLayout::receivers(signal);
        }
        auto receivers_cb = qgridlayout_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgridlayout_issignalconnected_isbase) {
            qgridlayout_issignalconnected_isbase = false;
            return QGridLayout::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgridlayout_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::isSignalConnected(signal);
    }

    // Friend functions
    friend void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1);
    friend void QGridLayout_SuperAddItem2(QGridLayout* self, QLayoutItem* param1);
    friend void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e);
    friend void QGridLayout_SuperChildEvent(QGridLayout* self, QChildEvent* e);
    friend void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event);
    friend void QGridLayout_SuperTimerEvent(QGridLayout* self, QTimerEvent* event);
    friend void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event);
    friend void QGridLayout_SuperCustomEvent(QGridLayout* self, QEvent* event);
    friend void QGridLayout_ConnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_SuperConnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_DisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_SuperDisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1);
    friend void QGridLayout_SuperWidgetEvent(QGridLayout* self, QEvent* param1);
    friend void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l);
    friend void QGridLayout_SuperAddChildLayout(QGridLayout* self, QLayout* l);
    friend void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w);
    friend void QGridLayout_SuperAddChildWidget(QGridLayout* self, QWidget* w);
    friend bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout);
    friend bool QGridLayout_SuperAdoptLayout(QGridLayout* self, QLayout* layout);
    friend QRect* QGridLayout_AlignmentRect(const QGridLayout* self, const QRect* param1);
    friend QRect* QGridLayout_SuperAlignmentRect(const QGridLayout* self, const QRect* param1);
    friend QObject* QGridLayout_Sender(const QGridLayout* self);
    friend QObject* QGridLayout_SuperSender(const QGridLayout* self);
    friend int QGridLayout_SenderSignalIndex(const QGridLayout* self);
    friend int QGridLayout_SuperSenderSignalIndex(const QGridLayout* self);
    friend int QGridLayout_Receivers(const QGridLayout* self, const char* signal);
    friend int QGridLayout_SuperReceivers(const QGridLayout* self, const char* signal);
    friend bool QGridLayout_IsSignalConnected(const QGridLayout* self, const QMetaMethod* signal);
    friend bool QGridLayout_SuperIsSignalConnected(const QGridLayout* self, const QMetaMethod* signal);
};

#endif
