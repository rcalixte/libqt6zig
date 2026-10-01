#pragma once
#ifndef LIBQSTACKEDLAYOUT_HXX
#define LIBQSTACKEDLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedLayout
class VirtualQStackedLayout final : public QStackedLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStackedLayout_MetaObject_Callback = QMetaObject* (*)(const QStackedLayout*);
    using QStackedLayout_Metacast_Callback = void* (*)(QStackedLayout*, const char*);
    using QStackedLayout_Metacall_Callback = int (*)(QStackedLayout*, int, int, void**);
    using QStackedLayout_Count_Callback = int (*)(const QStackedLayout*);
    using QStackedLayout_AddItem_Callback = void (*)(QStackedLayout*, QLayoutItem*);
    using QStackedLayout_SizeHint_Callback = QSize* (*)(const QStackedLayout*);
    using QStackedLayout_MinimumSize_Callback = QSize* (*)(const QStackedLayout*);
    using QStackedLayout_ItemAt_Callback = QLayoutItem* (*)(const QStackedLayout*, int);
    using QStackedLayout_TakeAt_Callback = QLayoutItem* (*)(QStackedLayout*, int);
    using QStackedLayout_SetGeometry_Callback = void (*)(QStackedLayout*, QRect*);
    using QStackedLayout_HasHeightForWidth_Callback = bool (*)(const QStackedLayout*);
    using QStackedLayout_HeightForWidth_Callback = int (*)(const QStackedLayout*, int);
    using QStackedLayout_Spacing_Callback = int (*)(const QStackedLayout*);
    using QStackedLayout_SetSpacing_Callback = void (*)(QStackedLayout*, int);
    using QStackedLayout_Invalidate_Callback = void (*)(QStackedLayout*);
    using QStackedLayout_Geometry_Callback = QRect* (*)(const QStackedLayout*);
    using QStackedLayout_ExpandingDirections_Callback = int (*)(const QStackedLayout*);
    using QStackedLayout_MaximumSize_Callback = QSize* (*)(const QStackedLayout*);
    using QStackedLayout_IndexOf_Callback = int (*)(const QStackedLayout*, QWidget*);
    using QStackedLayout_IsEmpty_Callback = bool (*)(const QStackedLayout*);
    using QStackedLayout_ControlTypes_Callback = int (*)(const QStackedLayout*);
    using QStackedLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QStackedLayout*, QWidget*, QWidget*, int);
    using QStackedLayout_Layout_Callback = QLayout* (*)(QStackedLayout*);
    using QStackedLayout_ChildEvent_Callback = void (*)(QStackedLayout*, QChildEvent*);
    using QStackedLayout_Event_Callback = bool (*)(QStackedLayout*, QEvent*);
    using QStackedLayout_EventFilter_Callback = bool (*)(QStackedLayout*, QObject*, QEvent*);
    using QStackedLayout_TimerEvent_Callback = void (*)(QStackedLayout*, QTimerEvent*);
    using QStackedLayout_CustomEvent_Callback = void (*)(QStackedLayout*, QEvent*);
    using QStackedLayout_ConnectNotify_Callback = void (*)(QStackedLayout*, QMetaMethod*);
    using QStackedLayout_DisconnectNotify_Callback = void (*)(QStackedLayout*, QMetaMethod*);
    using QStackedLayout_MinimumHeightForWidth_Callback = int (*)(const QStackedLayout*, int);
    using QStackedLayout_Widget_Callback = QWidget* (*)(const QStackedLayout*);
    using QStackedLayout_SpacerItem_Callback = QSpacerItem* (*)(QStackedLayout*);
    using QStackedLayout::addChildLayout;
    using QStackedLayout::addChildWidget;
    using QStackedLayout::adoptLayout;
    using QStackedLayout::alignmentRect;
    using QStackedLayout::isSignalConnected;
    using QStackedLayout::receivers;
    using QStackedLayout::sender;
    using QStackedLayout::senderSignalIndex;
    using QStackedLayout::widgetEvent;

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

    // Access struct
    struct Base : QStackedLayout {
        using QStackedLayout::childEvent;
        using QStackedLayout::connectNotify;
        using QStackedLayout::customEvent;
        using QStackedLayout::disconnectNotify;
        using QStackedLayout::timerEvent;
    };

    VirtualQStackedLayout(QWidget* parent) : QStackedLayout(parent) {};
    VirtualQStackedLayout() : QStackedLayout() {};
    VirtualQStackedLayout(QLayout* parentLayout) : QStackedLayout(parentLayout) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstackedlayout_metaobject_callback) {
            QMetaObject* callback_ret = qstackedlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QStackedLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstackedlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstackedlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstackedlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qstackedlayout_count_callback) {
            int callback_ret = qstackedlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* item) override {
        if (qstackedlayout_additem_callback) {
            QLayoutItem* cbval1 = item;
            qstackedlayout_additem_callback(this, cbval1);
            return;
        }
        QStackedLayout::addItem(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedlayout_sizehint_callback) {
            QSize* callback_ret = qstackedlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedLayout::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qstackedlayout_minimumsize_callback) {
            QSize* callback_ret = qstackedlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int param1) const override {
        if (qstackedlayout_itemat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qstackedlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::itemAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int param1) override {
        if (qstackedlayout_takeat_callback) {
            int cbval1 = param1;
            QLayoutItem* callback_ret = qstackedlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::takeAt(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& rect) override {
        if (qstackedlayout_setgeometry_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            qstackedlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QStackedLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedlayout_hasheightforwidth_callback) {
            bool callback_ret = qstackedlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QStackedLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qstackedlayout_heightforwidth_callback) {
            int cbval1 = width;
            int callback_ret = qstackedlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qstackedlayout_spacing_callback) {
            int callback_ret = qstackedlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qstackedlayout_setspacing_callback) {
            int cbval1 = spacing;
            qstackedlayout_setspacing_callback(this, cbval1);
            return;
        }
        QStackedLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qstackedlayout_invalidate_callback) {
            qstackedlayout_invalidate_callback(this);
            return;
        }
        QStackedLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qstackedlayout_geometry_callback) {
            QRect* callback_ret = qstackedlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qstackedlayout_expandingdirections_callback) {
            int callback_ret = qstackedlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QStackedLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qstackedlayout_maximumsize_callback) {
            QSize* callback_ret = qstackedlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qstackedlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qstackedlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qstackedlayout_isempty_callback) {
            bool callback_ret = qstackedlayout_isempty_callback(this);
            return callback_ret;
        }
        return QStackedLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qstackedlayout_controltypes_callback) {
            int callback_ret = qstackedlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QStackedLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qstackedlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qstackedlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStackedLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qstackedlayout_layout_callback) {
            QLayout* callback_ret = qstackedlayout_layout_callback(this);
            return callback_ret;
        }
        return QStackedLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qstackedlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qstackedlayout_childevent_callback(this, cbval1);
            return;
        }
        QStackedLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstackedlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstackedlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstackedlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStackedLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstackedlayout_timerevent_callback(this, cbval1);
            return;
        }
        QStackedLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qstackedlayout_customevent_callback(this, cbval1);
            return;
        }
        QStackedLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QStackedLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStackedLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qstackedlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qstackedlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qstackedlayout_widget_callback) {
            QWidget* callback_ret = qstackedlayout_widget_callback(this);
            return callback_ret;
        }
        return QStackedLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qstackedlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qstackedlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QStackedLayout::spacerItem();
    }

    // Friend functions
    friend void QStackedLayout_SuperChildEvent(QStackedLayout* self, QChildEvent* e);
    friend void QStackedLayout_SuperTimerEvent(QStackedLayout* self, QTimerEvent* event);
    friend void QStackedLayout_SuperCustomEvent(QStackedLayout* self, QEvent* event);
    friend void QStackedLayout_SuperConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
    friend void QStackedLayout_SuperDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
};

#endif
