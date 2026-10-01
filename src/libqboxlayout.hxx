#pragma once
#ifndef LIBQBOXLAYOUT_HXX
#define LIBQBOXLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBoxLayout
class VirtualQBoxLayout final : public QBoxLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBoxLayout_MetaObject_Callback = QMetaObject* (*)(const QBoxLayout*);
    using QBoxLayout_Metacast_Callback = void* (*)(QBoxLayout*, const char*);
    using QBoxLayout_Metacall_Callback = int (*)(QBoxLayout*, int, int, void**);
    using QBoxLayout_AddItem_Callback = void (*)(QBoxLayout*, QLayoutItem*);
    using QBoxLayout_Spacing_Callback = int (*)(const QBoxLayout*);
    using QBoxLayout_SetSpacing_Callback = void (*)(QBoxLayout*, int);
    using QBoxLayout_SizeHint_Callback = QSize* (*)(const QBoxLayout*);
    using QBoxLayout_MinimumSize_Callback = QSize* (*)(const QBoxLayout*);
    using QBoxLayout_MaximumSize_Callback = QSize* (*)(const QBoxLayout*);
    using QBoxLayout_HasHeightForWidth_Callback = bool (*)(const QBoxLayout*);
    using QBoxLayout_HeightForWidth_Callback = int (*)(const QBoxLayout*, int);
    using QBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QBoxLayout*, int);
    using QBoxLayout_ExpandingDirections_Callback = int (*)(const QBoxLayout*);
    using QBoxLayout_Invalidate_Callback = void (*)(QBoxLayout*);
    using QBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QBoxLayout*, int);
    using QBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QBoxLayout*, int);
    using QBoxLayout_Count_Callback = int (*)(const QBoxLayout*);
    using QBoxLayout_SetGeometry_Callback = void (*)(QBoxLayout*, QRect*);
    using QBoxLayout_Geometry_Callback = QRect* (*)(const QBoxLayout*);
    using QBoxLayout_IndexOf_Callback = int (*)(const QBoxLayout*, QWidget*);
    using QBoxLayout_IsEmpty_Callback = bool (*)(const QBoxLayout*);
    using QBoxLayout_ControlTypes_Callback = int (*)(const QBoxLayout*);
    using QBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QBoxLayout*, QWidget*, QWidget*, int);
    using QBoxLayout_Layout_Callback = QLayout* (*)(QBoxLayout*);
    using QBoxLayout_ChildEvent_Callback = void (*)(QBoxLayout*, QChildEvent*);
    using QBoxLayout_Event_Callback = bool (*)(QBoxLayout*, QEvent*);
    using QBoxLayout_EventFilter_Callback = bool (*)(QBoxLayout*, QObject*, QEvent*);
    using QBoxLayout_TimerEvent_Callback = void (*)(QBoxLayout*, QTimerEvent*);
    using QBoxLayout_CustomEvent_Callback = void (*)(QBoxLayout*, QEvent*);
    using QBoxLayout_ConnectNotify_Callback = void (*)(QBoxLayout*, QMetaMethod*);
    using QBoxLayout_DisconnectNotify_Callback = void (*)(QBoxLayout*, QMetaMethod*);
    using QBoxLayout_Widget_Callback = QWidget* (*)(const QBoxLayout*);
    using QBoxLayout_SpacerItem_Callback = QSpacerItem* (*)(QBoxLayout*);
    using QBoxLayout::addChildLayout;
    using QBoxLayout::addChildWidget;
    using QBoxLayout::adoptLayout;
    using QBoxLayout::alignmentRect;
    using QBoxLayout::isSignalConnected;
    using QBoxLayout::receivers;
    using QBoxLayout::sender;
    using QBoxLayout::senderSignalIndex;
    using QBoxLayout::widgetEvent;

    // Instance callback storage
    QBoxLayout_MetaObject_Callback qboxlayout_metaobject_callback = nullptr;
    QBoxLayout_Metacast_Callback qboxlayout_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QBoxLayout {
        using QBoxLayout::childEvent;
        using QBoxLayout::connectNotify;
        using QBoxLayout::customEvent;
        using QBoxLayout::disconnectNotify;
        using QBoxLayout::timerEvent;
    };

    VirtualQBoxLayout(QBoxLayout::Direction param1) : QBoxLayout(param1) {};
    VirtualQBoxLayout(QBoxLayout::Direction param1, QWidget* parent) : QBoxLayout(param1, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxlayout_metaobject_callback) {
            QMetaObject* callback_ret = qboxlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QBoxLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qboxlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qboxlayout_additem_callback) {
            QLayoutItem* cbval1 = param1;
            qboxlayout_additem_callback(this, cbval1);
            return;
        }
        QBoxLayout::addItem(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qboxlayout_spacing_callback) {
            int callback_ret = qboxlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qboxlayout_setspacing_callback) {
            int cbval1 = spacing;
            qboxlayout_setspacing_callback(this, cbval1);
            return;
        }
        QBoxLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qboxlayout_sizehint_callback) {
            QSize* callback_ret = qboxlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QBoxLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qboxlayout_minimumsize_callback) {
            QSize* callback_ret = qboxlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QBoxLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qboxlayout_maximumsize_callback) {
            QSize* callback_ret = qboxlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QBoxLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qboxlayout_hasheightforwidth_callback) {
            bool callback_ret = qboxlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QBoxLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qboxlayout_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qboxlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qboxlayout_expandingdirections_callback) {
            int callback_ret = qboxlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QBoxLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qboxlayout_invalidate_callback) {
            qboxlayout_invalidate_callback(this);
            return;
        }
        QBoxLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qboxlayout_itemat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxLayout::itemAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qboxlayout_takeat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxLayout::takeAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qboxlayout_count_callback) {
            int callback_ret = qboxlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qboxlayout_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qboxlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QBoxLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qboxlayout_geometry_callback) {
            QRect* callback_ret = qboxlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QBoxLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qboxlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBoxLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qboxlayout_isempty_callback) {
            bool callback_ret = qboxlayout_isempty_callback(this);
            return callback_ret;
        }
        return QBoxLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qboxlayout_controltypes_callback) {
            int callback_ret = qboxlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QBoxLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qboxlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QBoxLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qboxlayout_layout_callback) {
            QLayout* callback_ret = qboxlayout_layout_callback(this);
            return callback_ret;
        }
        return QBoxLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qboxlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qboxlayout_childevent_callback(this, cbval1);
            return;
        }
        QBoxLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qboxlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qboxlayout_timerevent_callback(this, cbval1);
            return;
        }
        QBoxLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qboxlayout_customevent_callback(this, cbval1);
            return;
        }
        QBoxLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QBoxLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBoxLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qboxlayout_widget_callback) {
            QWidget* callback_ret = qboxlayout_widget_callback(this);
            return callback_ret;
        }
        return QBoxLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qboxlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qboxlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QBoxLayout::spacerItem();
    }

    // Friend functions
    friend void QBoxLayout_SuperChildEvent(QBoxLayout* self, QChildEvent* e);
    friend void QBoxLayout_SuperTimerEvent(QBoxLayout* self, QTimerEvent* event);
    friend void QBoxLayout_SuperCustomEvent(QBoxLayout* self, QEvent* event);
    friend void QBoxLayout_SuperConnectNotify(QBoxLayout* self, const QMetaMethod* signal);
    friend void QBoxLayout_SuperDisconnectNotify(QBoxLayout* self, const QMetaMethod* signal);
};

// This class is a subclass of QHBoxLayout
class VirtualQHBoxLayout final : public QHBoxLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHBoxLayout_MetaObject_Callback = QMetaObject* (*)(const QHBoxLayout*);
    using QHBoxLayout_Metacast_Callback = void* (*)(QHBoxLayout*, const char*);
    using QHBoxLayout_Metacall_Callback = int (*)(QHBoxLayout*, int, int, void**);
    using QHBoxLayout_AddItem_Callback = void (*)(QHBoxLayout*, QLayoutItem*);
    using QHBoxLayout_Spacing_Callback = int (*)(const QHBoxLayout*);
    using QHBoxLayout_SetSpacing_Callback = void (*)(QHBoxLayout*, int);
    using QHBoxLayout_SizeHint_Callback = QSize* (*)(const QHBoxLayout*);
    using QHBoxLayout_MinimumSize_Callback = QSize* (*)(const QHBoxLayout*);
    using QHBoxLayout_MaximumSize_Callback = QSize* (*)(const QHBoxLayout*);
    using QHBoxLayout_HasHeightForWidth_Callback = bool (*)(const QHBoxLayout*);
    using QHBoxLayout_HeightForWidth_Callback = int (*)(const QHBoxLayout*, int);
    using QHBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QHBoxLayout*, int);
    using QHBoxLayout_ExpandingDirections_Callback = int (*)(const QHBoxLayout*);
    using QHBoxLayout_Invalidate_Callback = void (*)(QHBoxLayout*);
    using QHBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QHBoxLayout*, int);
    using QHBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QHBoxLayout*, int);
    using QHBoxLayout_Count_Callback = int (*)(const QHBoxLayout*);
    using QHBoxLayout_SetGeometry_Callback = void (*)(QHBoxLayout*, QRect*);
    using QHBoxLayout_Geometry_Callback = QRect* (*)(const QHBoxLayout*);
    using QHBoxLayout_IndexOf_Callback = int (*)(const QHBoxLayout*, QWidget*);
    using QHBoxLayout_IsEmpty_Callback = bool (*)(const QHBoxLayout*);
    using QHBoxLayout_ControlTypes_Callback = int (*)(const QHBoxLayout*);
    using QHBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QHBoxLayout*, QWidget*, QWidget*, int);
    using QHBoxLayout_Layout_Callback = QLayout* (*)(QHBoxLayout*);
    using QHBoxLayout_ChildEvent_Callback = void (*)(QHBoxLayout*, QChildEvent*);
    using QHBoxLayout_Event_Callback = bool (*)(QHBoxLayout*, QEvent*);
    using QHBoxLayout_EventFilter_Callback = bool (*)(QHBoxLayout*, QObject*, QEvent*);
    using QHBoxLayout_TimerEvent_Callback = void (*)(QHBoxLayout*, QTimerEvent*);
    using QHBoxLayout_CustomEvent_Callback = void (*)(QHBoxLayout*, QEvent*);
    using QHBoxLayout_ConnectNotify_Callback = void (*)(QHBoxLayout*, QMetaMethod*);
    using QHBoxLayout_DisconnectNotify_Callback = void (*)(QHBoxLayout*, QMetaMethod*);
    using QHBoxLayout_Widget_Callback = QWidget* (*)(const QHBoxLayout*);
    using QHBoxLayout_SpacerItem_Callback = QSpacerItem* (*)(QHBoxLayout*);
    using QHBoxLayout::addChildLayout;
    using QHBoxLayout::addChildWidget;
    using QHBoxLayout::adoptLayout;
    using QHBoxLayout::alignmentRect;
    using QHBoxLayout::isSignalConnected;
    using QHBoxLayout::receivers;
    using QHBoxLayout::sender;
    using QHBoxLayout::senderSignalIndex;
    using QHBoxLayout::widgetEvent;

    // Instance callback storage
    QHBoxLayout_MetaObject_Callback qhboxlayout_metaobject_callback = nullptr;
    QHBoxLayout_Metacast_Callback qhboxlayout_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QHBoxLayout {
        using QHBoxLayout::childEvent;
        using QHBoxLayout::connectNotify;
        using QHBoxLayout::customEvent;
        using QHBoxLayout::disconnectNotify;
        using QHBoxLayout::timerEvent;
    };

    VirtualQHBoxLayout(QWidget* parent) : QHBoxLayout(parent) {};
    VirtualQHBoxLayout() : QHBoxLayout() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhboxlayout_metaobject_callback) {
            QMetaObject* callback_ret = qhboxlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhboxlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhboxlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhboxlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qhboxlayout_additem_callback) {
            QLayoutItem* cbval1 = param1;
            qhboxlayout_additem_callback(this, cbval1);
            return;
        }
        QHBoxLayout::addItem(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qhboxlayout_spacing_callback) {
            int callback_ret = qhboxlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qhboxlayout_setspacing_callback) {
            int cbval1 = spacing;
            qhboxlayout_setspacing_callback(this, cbval1);
            return;
        }
        QHBoxLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qhboxlayout_sizehint_callback) {
            QSize* callback_ret = qhboxlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHBoxLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qhboxlayout_minimumsize_callback) {
            QSize* callback_ret = qhboxlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHBoxLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qhboxlayout_maximumsize_callback) {
            QSize* callback_ret = qhboxlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHBoxLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qhboxlayout_hasheightforwidth_callback) {
            bool callback_ret = qhboxlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qhboxlayout_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qhboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qhboxlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qhboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qhboxlayout_expandingdirections_callback) {
            int callback_ret = qhboxlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QHBoxLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qhboxlayout_invalidate_callback) {
            qhboxlayout_invalidate_callback(this);
            return;
        }
        QHBoxLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qhboxlayout_itemat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qhboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxLayout::itemAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qhboxlayout_takeat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qhboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxLayout::takeAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qhboxlayout_count_callback) {
            int callback_ret = qhboxlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qhboxlayout_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qhboxlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QHBoxLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qhboxlayout_geometry_callback) {
            QRect* callback_ret = qhboxlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHBoxLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qhboxlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qhboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHBoxLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qhboxlayout_isempty_callback) {
            bool callback_ret = qhboxlayout_isempty_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qhboxlayout_controltypes_callback) {
            int callback_ret = qhboxlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QHBoxLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qhboxlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qhboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QHBoxLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qhboxlayout_layout_callback) {
            QLayout* callback_ret = qhboxlayout_layout_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qhboxlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qhboxlayout_childevent_callback(this, cbval1);
            return;
        }
        QHBoxLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhboxlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhboxlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhboxlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHBoxLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhboxlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhboxlayout_timerevent_callback(this, cbval1);
            return;
        }
        QHBoxLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhboxlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qhboxlayout_customevent_callback(this, cbval1);
            return;
        }
        QHBoxLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhboxlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhboxlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QHBoxLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhboxlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhboxlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHBoxLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qhboxlayout_widget_callback) {
            QWidget* callback_ret = qhboxlayout_widget_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qhboxlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qhboxlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QHBoxLayout::spacerItem();
    }

    // Friend functions
    friend void QHBoxLayout_SuperChildEvent(QHBoxLayout* self, QChildEvent* e);
    friend void QHBoxLayout_SuperTimerEvent(QHBoxLayout* self, QTimerEvent* event);
    friend void QHBoxLayout_SuperCustomEvent(QHBoxLayout* self, QEvent* event);
    friend void QHBoxLayout_SuperConnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
    friend void QHBoxLayout_SuperDisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal);
};

// This class is a subclass of QVBoxLayout
class VirtualQVBoxLayout final : public QVBoxLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVBoxLayout_MetaObject_Callback = QMetaObject* (*)(const QVBoxLayout*);
    using QVBoxLayout_Metacast_Callback = void* (*)(QVBoxLayout*, const char*);
    using QVBoxLayout_Metacall_Callback = int (*)(QVBoxLayout*, int, int, void**);
    using QVBoxLayout_AddItem_Callback = void (*)(QVBoxLayout*, QLayoutItem*);
    using QVBoxLayout_Spacing_Callback = int (*)(const QVBoxLayout*);
    using QVBoxLayout_SetSpacing_Callback = void (*)(QVBoxLayout*, int);
    using QVBoxLayout_SizeHint_Callback = QSize* (*)(const QVBoxLayout*);
    using QVBoxLayout_MinimumSize_Callback = QSize* (*)(const QVBoxLayout*);
    using QVBoxLayout_MaximumSize_Callback = QSize* (*)(const QVBoxLayout*);
    using QVBoxLayout_HasHeightForWidth_Callback = bool (*)(const QVBoxLayout*);
    using QVBoxLayout_HeightForWidth_Callback = int (*)(const QVBoxLayout*, int);
    using QVBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QVBoxLayout*, int);
    using QVBoxLayout_ExpandingDirections_Callback = int (*)(const QVBoxLayout*);
    using QVBoxLayout_Invalidate_Callback = void (*)(QVBoxLayout*);
    using QVBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QVBoxLayout*, int);
    using QVBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QVBoxLayout*, int);
    using QVBoxLayout_Count_Callback = int (*)(const QVBoxLayout*);
    using QVBoxLayout_SetGeometry_Callback = void (*)(QVBoxLayout*, QRect*);
    using QVBoxLayout_Geometry_Callback = QRect* (*)(const QVBoxLayout*);
    using QVBoxLayout_IndexOf_Callback = int (*)(const QVBoxLayout*, QWidget*);
    using QVBoxLayout_IsEmpty_Callback = bool (*)(const QVBoxLayout*);
    using QVBoxLayout_ControlTypes_Callback = int (*)(const QVBoxLayout*);
    using QVBoxLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QVBoxLayout*, QWidget*, QWidget*, int);
    using QVBoxLayout_Layout_Callback = QLayout* (*)(QVBoxLayout*);
    using QVBoxLayout_ChildEvent_Callback = void (*)(QVBoxLayout*, QChildEvent*);
    using QVBoxLayout_Event_Callback = bool (*)(QVBoxLayout*, QEvent*);
    using QVBoxLayout_EventFilter_Callback = bool (*)(QVBoxLayout*, QObject*, QEvent*);
    using QVBoxLayout_TimerEvent_Callback = void (*)(QVBoxLayout*, QTimerEvent*);
    using QVBoxLayout_CustomEvent_Callback = void (*)(QVBoxLayout*, QEvent*);
    using QVBoxLayout_ConnectNotify_Callback = void (*)(QVBoxLayout*, QMetaMethod*);
    using QVBoxLayout_DisconnectNotify_Callback = void (*)(QVBoxLayout*, QMetaMethod*);
    using QVBoxLayout_Widget_Callback = QWidget* (*)(const QVBoxLayout*);
    using QVBoxLayout_SpacerItem_Callback = QSpacerItem* (*)(QVBoxLayout*);
    using QVBoxLayout::addChildLayout;
    using QVBoxLayout::addChildWidget;
    using QVBoxLayout::adoptLayout;
    using QVBoxLayout::alignmentRect;
    using QVBoxLayout::isSignalConnected;
    using QVBoxLayout::receivers;
    using QVBoxLayout::sender;
    using QVBoxLayout::senderSignalIndex;
    using QVBoxLayout::widgetEvent;

    // Instance callback storage
    QVBoxLayout_MetaObject_Callback qvboxlayout_metaobject_callback = nullptr;
    QVBoxLayout_Metacast_Callback qvboxlayout_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QVBoxLayout {
        using QVBoxLayout::childEvent;
        using QVBoxLayout::connectNotify;
        using QVBoxLayout::customEvent;
        using QVBoxLayout::disconnectNotify;
        using QVBoxLayout::timerEvent;
    };

    VirtualQVBoxLayout(QWidget* parent) : QVBoxLayout(parent) {};
    VirtualQVBoxLayout() : QVBoxLayout() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvboxlayout_metaobject_callback) {
            QMetaObject* callback_ret = qvboxlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvboxlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvboxlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvboxlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvboxlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qvboxlayout_additem_callback) {
            QLayoutItem* cbval1 = param1;
            qvboxlayout_additem_callback(this, cbval1);
            return;
        }
        QVBoxLayout::addItem(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qvboxlayout_spacing_callback) {
            int callback_ret = qvboxlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qvboxlayout_setspacing_callback) {
            int cbval1 = spacing;
            qvboxlayout_setspacing_callback(this, cbval1);
            return;
        }
        QVBoxLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qvboxlayout_sizehint_callback) {
            QSize* callback_ret = qvboxlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVBoxLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qvboxlayout_minimumsize_callback) {
            QSize* callback_ret = qvboxlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVBoxLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qvboxlayout_maximumsize_callback) {
            QSize* callback_ret = qvboxlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVBoxLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qvboxlayout_hasheightforwidth_callback) {
            bool callback_ret = qvboxlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qvboxlayout_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qvboxlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qvboxlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qvboxlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qvboxlayout_expandingdirections_callback) {
            int callback_ret = qvboxlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QVBoxLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qvboxlayout_invalidate_callback) {
            qvboxlayout_invalidate_callback(this);
            return;
        }
        QVBoxLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qvboxlayout_itemat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qvboxlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxLayout::itemAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qvboxlayout_takeat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qvboxlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxLayout::takeAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qvboxlayout_count_callback) {
            int callback_ret = qvboxlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qvboxlayout_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qvboxlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QVBoxLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qvboxlayout_geometry_callback) {
            QRect* callback_ret = qvboxlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVBoxLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qvboxlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qvboxlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVBoxLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qvboxlayout_isempty_callback) {
            bool callback_ret = qvboxlayout_isempty_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qvboxlayout_controltypes_callback) {
            int callback_ret = qvboxlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QVBoxLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qvboxlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qvboxlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QVBoxLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qvboxlayout_layout_callback) {
            QLayout* callback_ret = qvboxlayout_layout_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qvboxlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qvboxlayout_childevent_callback(this, cbval1);
            return;
        }
        QVBoxLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvboxlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvboxlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvboxlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvboxlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVBoxLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvboxlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvboxlayout_timerevent_callback(this, cbval1);
            return;
        }
        QVBoxLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvboxlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qvboxlayout_customevent_callback(this, cbval1);
            return;
        }
        QVBoxLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvboxlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvboxlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QVBoxLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvboxlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvboxlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVBoxLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qvboxlayout_widget_callback) {
            QWidget* callback_ret = qvboxlayout_widget_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qvboxlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qvboxlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QVBoxLayout::spacerItem();
    }

    // Friend functions
    friend void QVBoxLayout_SuperChildEvent(QVBoxLayout* self, QChildEvent* e);
    friend void QVBoxLayout_SuperTimerEvent(QVBoxLayout* self, QTimerEvent* event);
    friend void QVBoxLayout_SuperCustomEvent(QVBoxLayout* self, QEvent* event);
    friend void QVBoxLayout_SuperConnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
    friend void QVBoxLayout_SuperDisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal);
};

#endif
