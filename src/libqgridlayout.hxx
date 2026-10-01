#pragma once
#ifndef LIBQGRIDLAYOUT_HXX
#define LIBQGRIDLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGridLayout
class VirtualQGridLayout final : public QGridLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGridLayout_MetaObject_Callback = QMetaObject* (*)(const QGridLayout*);
    using QGridLayout_Metacast_Callback = void* (*)(QGridLayout*, const char*);
    using QGridLayout_Metacall_Callback = int (*)(QGridLayout*, int, int, void**);
    using QGridLayout_SizeHint_Callback = QSize* (*)(const QGridLayout*);
    using QGridLayout_MinimumSize_Callback = QSize* (*)(const QGridLayout*);
    using QGridLayout_MaximumSize_Callback = QSize* (*)(const QGridLayout*);
    using QGridLayout_SetSpacing_Callback = void (*)(QGridLayout*, int);
    using QGridLayout_Spacing_Callback = int (*)(const QGridLayout*);
    using QGridLayout_HasHeightForWidth_Callback = bool (*)(const QGridLayout*);
    using QGridLayout_HeightForWidth_Callback = int (*)(const QGridLayout*, int);
    using QGridLayout_MinimumHeightForWidth_Callback = int (*)(const QGridLayout*, int);
    using QGridLayout_ExpandingDirections_Callback = int (*)(const QGridLayout*);
    using QGridLayout_Invalidate_Callback = void (*)(QGridLayout*);
    using QGridLayout_ItemAt_Callback = QLayoutItem* (*)(const QGridLayout*, int);
    using QGridLayout_TakeAt_Callback = QLayoutItem* (*)(QGridLayout*, int);
    using QGridLayout_Count_Callback = int (*)(const QGridLayout*);
    using QGridLayout_SetGeometry_Callback = void (*)(QGridLayout*, QRect*);
    using QGridLayout_AddItem2_Callback = void (*)(QGridLayout*, QLayoutItem*);
    using QGridLayout_Geometry_Callback = QRect* (*)(const QGridLayout*);
    using QGridLayout_IndexOf_Callback = int (*)(const QGridLayout*, QWidget*);
    using QGridLayout_IsEmpty_Callback = bool (*)(const QGridLayout*);
    using QGridLayout_ControlTypes_Callback = int (*)(const QGridLayout*);
    using QGridLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QGridLayout*, QWidget*, QWidget*, int);
    using QGridLayout_Layout_Callback = QLayout* (*)(QGridLayout*);
    using QGridLayout_ChildEvent_Callback = void (*)(QGridLayout*, QChildEvent*);
    using QGridLayout_Event_Callback = bool (*)(QGridLayout*, QEvent*);
    using QGridLayout_EventFilter_Callback = bool (*)(QGridLayout*, QObject*, QEvent*);
    using QGridLayout_TimerEvent_Callback = void (*)(QGridLayout*, QTimerEvent*);
    using QGridLayout_CustomEvent_Callback = void (*)(QGridLayout*, QEvent*);
    using QGridLayout_ConnectNotify_Callback = void (*)(QGridLayout*, QMetaMethod*);
    using QGridLayout_DisconnectNotify_Callback = void (*)(QGridLayout*, QMetaMethod*);
    using QGridLayout_Widget_Callback = QWidget* (*)(const QGridLayout*);
    using QGridLayout_SpacerItem_Callback = QSpacerItem* (*)(QGridLayout*);
    using QGridLayout::addChildLayout;
    using QGridLayout::addChildWidget;
    using QGridLayout::adoptLayout;
    using QGridLayout::alignmentRect;
    using QGridLayout::isSignalConnected;
    using QGridLayout::receivers;
    using QGridLayout::sender;
    using QGridLayout::senderSignalIndex;
    using QGridLayout::widgetEvent;

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

    // Access struct
    struct Base : QGridLayout {
        using QGridLayout::addItem;
        using QGridLayout::childEvent;
        using QGridLayout::connectNotify;
        using QGridLayout::customEvent;
        using QGridLayout::disconnectNotify;
        using QGridLayout::timerEvent;
    };

    VirtualQGridLayout(QWidget* parent) : QGridLayout(parent) {};
    VirtualQGridLayout() : QGridLayout() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgridlayout_metaobject_callback) {
            QMetaObject* callback_ret = qgridlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QGridLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgridlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgridlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgridlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgridlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgridlayout_sizehint_callback) {
            QSize* callback_ret = qgridlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGridLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qgridlayout_minimumsize_callback) {
            QSize* callback_ret = qgridlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGridLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qgridlayout_maximumsize_callback) {
            QSize* callback_ret = qgridlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGridLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qgridlayout_setspacing_callback) {
            int cbval1 = spacing;
            qgridlayout_setspacing_callback(this, cbval1);
            return;
        }
        QGridLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qgridlayout_spacing_callback) {
            int callback_ret = qgridlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgridlayout_hasheightforwidth_callback) {
            bool callback_ret = qgridlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QGridLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgridlayout_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qgridlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qgridlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qgridlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qgridlayout_expandingdirections_callback) {
            int callback_ret = qgridlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QGridLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgridlayout_invalidate_callback) {
            qgridlayout_invalidate_callback(this);
            return;
        }
        QGridLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qgridlayout_itemat_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qgridlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qgridlayout_takeat_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qgridlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::takeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgridlayout_count_callback) {
            int callback_ret = qgridlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qgridlayout_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qgridlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QGridLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qgridlayout_additem2_callback) {
            QLayoutItem* cbval1 = param1;
            qgridlayout_additem2_callback(this, cbval1);
            return;
        }
        QGridLayout::addItem(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qgridlayout_geometry_callback) {
            QRect* callback_ret = qgridlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGridLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qgridlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qgridlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGridLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgridlayout_isempty_callback) {
            bool callback_ret = qgridlayout_isempty_callback(this);
            return callback_ret;
        }
        return QGridLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qgridlayout_controltypes_callback) {
            int callback_ret = qgridlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QGridLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qgridlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qgridlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QGridLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qgridlayout_layout_callback) {
            QLayout* callback_ret = qgridlayout_layout_callback(this);
            return callback_ret;
        }
        return QGridLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qgridlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qgridlayout_childevent_callback(this, cbval1);
            return;
        }
        QGridLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgridlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgridlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGridLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgridlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgridlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGridLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgridlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgridlayout_timerevent_callback(this, cbval1);
            return;
        }
        QGridLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgridlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qgridlayout_customevent_callback(this, cbval1);
            return;
        }
        QGridLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgridlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QGridLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgridlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgridlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGridLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qgridlayout_widget_callback) {
            QWidget* callback_ret = qgridlayout_widget_callback(this);
            return callback_ret;
        }
        return QGridLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qgridlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qgridlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QGridLayout::spacerItem();
    }

    // Friend functions
    friend void QGridLayout_SuperAddItem2(QGridLayout* self, QLayoutItem* param1);
    friend void QGridLayout_SuperChildEvent(QGridLayout* self, QChildEvent* e);
    friend void QGridLayout_SuperTimerEvent(QGridLayout* self, QTimerEvent* event);
    friend void QGridLayout_SuperCustomEvent(QGridLayout* self, QEvent* event);
    friend void QGridLayout_SuperConnectNotify(QGridLayout* self, const QMetaMethod* signal);
    friend void QGridLayout_SuperDisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
};

#endif
