#pragma once
#ifndef LIBQFORMLAYOUT_HXX
#define LIBQFORMLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFormLayout
class VirtualQFormLayout final : public QFormLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFormLayout_MetaObject_Callback = QMetaObject* (*)(const QFormLayout*);
    using QFormLayout_Metacast_Callback = void* (*)(QFormLayout*, const char*);
    using QFormLayout_Metacall_Callback = int (*)(QFormLayout*, int, int, void**);
    using QFormLayout_Spacing_Callback = int (*)(const QFormLayout*);
    using QFormLayout_SetSpacing_Callback = void (*)(QFormLayout*, int);
    using QFormLayout_AddItem_Callback = void (*)(QFormLayout*, QLayoutItem*);
    using QFormLayout_ItemAt2_Callback = QLayoutItem* (*)(const QFormLayout*, int);
    using QFormLayout_TakeAt_Callback = QLayoutItem* (*)(QFormLayout*, int);
    using QFormLayout_SetGeometry_Callback = void (*)(QFormLayout*, QRect*);
    using QFormLayout_MinimumSize_Callback = QSize* (*)(const QFormLayout*);
    using QFormLayout_SizeHint_Callback = QSize* (*)(const QFormLayout*);
    using QFormLayout_Invalidate_Callback = void (*)(QFormLayout*);
    using QFormLayout_HasHeightForWidth_Callback = bool (*)(const QFormLayout*);
    using QFormLayout_HeightForWidth_Callback = int (*)(const QFormLayout*, int);
    using QFormLayout_ExpandingDirections_Callback = int (*)(const QFormLayout*);
    using QFormLayout_Count_Callback = int (*)(const QFormLayout*);
    using QFormLayout_Geometry_Callback = QRect* (*)(const QFormLayout*);
    using QFormLayout_MaximumSize_Callback = QSize* (*)(const QFormLayout*);
    using QFormLayout_IndexOf_Callback = int (*)(const QFormLayout*, QWidget*);
    using QFormLayout_IsEmpty_Callback = bool (*)(const QFormLayout*);
    using QFormLayout_ControlTypes_Callback = int (*)(const QFormLayout*);
    using QFormLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QFormLayout*, QWidget*, QWidget*, int);
    using QFormLayout_Layout_Callback = QLayout* (*)(QFormLayout*);
    using QFormLayout_ChildEvent_Callback = void (*)(QFormLayout*, QChildEvent*);
    using QFormLayout_Event_Callback = bool (*)(QFormLayout*, QEvent*);
    using QFormLayout_EventFilter_Callback = bool (*)(QFormLayout*, QObject*, QEvent*);
    using QFormLayout_TimerEvent_Callback = void (*)(QFormLayout*, QTimerEvent*);
    using QFormLayout_CustomEvent_Callback = void (*)(QFormLayout*, QEvent*);
    using QFormLayout_ConnectNotify_Callback = void (*)(QFormLayout*, QMetaMethod*);
    using QFormLayout_DisconnectNotify_Callback = void (*)(QFormLayout*, QMetaMethod*);
    using QFormLayout_MinimumHeightForWidth_Callback = int (*)(const QFormLayout*, int);
    using QFormLayout_Widget_Callback = QWidget* (*)(const QFormLayout*);
    using QFormLayout_SpacerItem_Callback = QSpacerItem* (*)(QFormLayout*);
    using QFormLayout::addChildLayout;
    using QFormLayout::addChildWidget;
    using QFormLayout::adoptLayout;
    using QFormLayout::alignmentRect;
    using QFormLayout::isSignalConnected;
    using QFormLayout::receivers;
    using QFormLayout::sender;
    using QFormLayout::senderSignalIndex;
    using QFormLayout::widgetEvent;

    // Instance callback storage
    QFormLayout_MetaObject_Callback qformlayout_metaobject_callback = nullptr;
    QFormLayout_Metacast_Callback qformlayout_metacast_callback = nullptr;
    QFormLayout_Metacall_Callback qformlayout_metacall_callback = nullptr;
    QFormLayout_Spacing_Callback qformlayout_spacing_callback = nullptr;
    QFormLayout_SetSpacing_Callback qformlayout_setspacing_callback = nullptr;
    QFormLayout_AddItem_Callback qformlayout_additem_callback = nullptr;
    QFormLayout_ItemAt2_Callback qformlayout_itemat2_callback = nullptr;
    QFormLayout_TakeAt_Callback qformlayout_takeat_callback = nullptr;
    QFormLayout_SetGeometry_Callback qformlayout_setgeometry_callback = nullptr;
    QFormLayout_MinimumSize_Callback qformlayout_minimumsize_callback = nullptr;
    QFormLayout_SizeHint_Callback qformlayout_sizehint_callback = nullptr;
    QFormLayout_Invalidate_Callback qformlayout_invalidate_callback = nullptr;
    QFormLayout_HasHeightForWidth_Callback qformlayout_hasheightforwidth_callback = nullptr;
    QFormLayout_HeightForWidth_Callback qformlayout_heightforwidth_callback = nullptr;
    QFormLayout_ExpandingDirections_Callback qformlayout_expandingdirections_callback = nullptr;
    QFormLayout_Count_Callback qformlayout_count_callback = nullptr;
    QFormLayout_Geometry_Callback qformlayout_geometry_callback = nullptr;
    QFormLayout_MaximumSize_Callback qformlayout_maximumsize_callback = nullptr;
    QFormLayout_IndexOf_Callback qformlayout_indexof_callback = nullptr;
    QFormLayout_IsEmpty_Callback qformlayout_isempty_callback = nullptr;
    QFormLayout_ControlTypes_Callback qformlayout_controltypes_callback = nullptr;
    QFormLayout_ReplaceWidget_Callback qformlayout_replacewidget_callback = nullptr;
    QFormLayout_Layout_Callback qformlayout_layout_callback = nullptr;
    QFormLayout_ChildEvent_Callback qformlayout_childevent_callback = nullptr;
    QFormLayout_Event_Callback qformlayout_event_callback = nullptr;
    QFormLayout_EventFilter_Callback qformlayout_eventfilter_callback = nullptr;
    QFormLayout_TimerEvent_Callback qformlayout_timerevent_callback = nullptr;
    QFormLayout_CustomEvent_Callback qformlayout_customevent_callback = nullptr;
    QFormLayout_ConnectNotify_Callback qformlayout_connectnotify_callback = nullptr;
    QFormLayout_DisconnectNotify_Callback qformlayout_disconnectnotify_callback = nullptr;
    QFormLayout_MinimumHeightForWidth_Callback qformlayout_minimumheightforwidth_callback = nullptr;
    QFormLayout_Widget_Callback qformlayout_widget_callback = nullptr;
    QFormLayout_SpacerItem_Callback qformlayout_spaceritem_callback = nullptr;

    // Access struct
    struct Base : QFormLayout {
        using QFormLayout::childEvent;
        using QFormLayout::connectNotify;
        using QFormLayout::customEvent;
        using QFormLayout::disconnectNotify;
        using QFormLayout::timerEvent;
    };

    VirtualQFormLayout(QWidget* parent) : QFormLayout(parent) {};
    VirtualQFormLayout() : QFormLayout() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qformlayout_metaobject_callback) {
            QMetaObject* callback_ret = qformlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QFormLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qformlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qformlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFormLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qformlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qformlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qformlayout_spacing_callback) {
            int callback_ret = qformlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qformlayout_setspacing_callback) {
            int cbval1 = spacing;
            qformlayout_setspacing_callback(this, cbval1);
            return;
        }
        QFormLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* item) override {
        if (qformlayout_additem_callback) {
            QLayoutItem* cbval1 = item;
            qformlayout_additem_callback(this, cbval1);
            return;
        }
        QFormLayout::addItem(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qformlayout_itemat2_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qformlayout_itemat2_callback(this, cbval1);
            return callback_ret;
        }
        return QFormLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qformlayout_takeat_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qformlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QFormLayout::takeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& rect) override {
        if (qformlayout_setgeometry_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            qformlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QFormLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qformlayout_minimumsize_callback) {
            QSize* callback_ret = qformlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFormLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qformlayout_sizehint_callback) {
            QSize* callback_ret = qformlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFormLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qformlayout_invalidate_callback) {
            qformlayout_invalidate_callback(this);
            return;
        }
        QFormLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qformlayout_hasheightforwidth_callback) {
            bool callback_ret = qformlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFormLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qformlayout_heightforwidth_callback) {
            int cbval1 = width;
            int callback_ret = qformlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qformlayout_expandingdirections_callback) {
            int callback_ret = qformlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QFormLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qformlayout_count_callback) {
            int callback_ret = qformlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qformlayout_geometry_callback) {
            QRect* callback_ret = qformlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFormLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qformlayout_maximumsize_callback) {
            QSize* callback_ret = qformlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFormLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qformlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qformlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qformlayout_isempty_callback) {
            bool callback_ret = qformlayout_isempty_callback(this);
            return callback_ret;
        }
        return QFormLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qformlayout_controltypes_callback) {
            int callback_ret = qformlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QFormLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qformlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qformlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFormLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qformlayout_layout_callback) {
            QLayout* callback_ret = qformlayout_layout_callback(this);
            return callback_ret;
        }
        return QFormLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qformlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qformlayout_childevent_callback(this, cbval1);
            return;
        }
        QFormLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qformlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qformlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFormLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qformlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qformlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFormLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qformlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qformlayout_timerevent_callback(this, cbval1);
            return;
        }
        QFormLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qformlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qformlayout_customevent_callback(this, cbval1);
            return;
        }
        QFormLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qformlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qformlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QFormLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qformlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qformlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFormLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qformlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qformlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFormLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qformlayout_widget_callback) {
            QWidget* callback_ret = qformlayout_widget_callback(this);
            return callback_ret;
        }
        return QFormLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qformlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qformlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QFormLayout::spacerItem();
    }

    // Friend functions
    friend void QFormLayout_SuperChildEvent(QFormLayout* self, QChildEvent* e);
    friend void QFormLayout_SuperTimerEvent(QFormLayout* self, QTimerEvent* event);
    friend void QFormLayout_SuperCustomEvent(QFormLayout* self, QEvent* event);
    friend void QFormLayout_SuperConnectNotify(QFormLayout* self, const QMetaMethod* signal);
    friend void QFormLayout_SuperDisconnectNotify(QFormLayout* self, const QMetaMethod* signal);
};

#endif
