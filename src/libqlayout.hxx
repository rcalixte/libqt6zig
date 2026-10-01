#pragma once
#ifndef LIBQLAYOUT_HXX
#define LIBQLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLayout
class VirtualQLayout : public QLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLayout_MetaObject_Callback = QMetaObject* (*)(const QLayout*);
    using QLayout_Metacast_Callback = void* (*)(QLayout*, const char*);
    using QLayout_Metacall_Callback = int (*)(QLayout*, int, int, void**);
    using QLayout_Spacing_Callback = int (*)(const QLayout*);
    using QLayout_SetSpacing_Callback = void (*)(QLayout*, int);
    using QLayout_Invalidate_Callback = void (*)(QLayout*);
    using QLayout_Geometry_Callback = QRect* (*)(const QLayout*);
    using QLayout_AddItem_Callback = void (*)(QLayout*, QLayoutItem*);
    using QLayout_ExpandingDirections_Callback = int (*)(const QLayout*);
    using QLayout_MinimumSize_Callback = QSize* (*)(const QLayout*);
    using QLayout_MaximumSize_Callback = QSize* (*)(const QLayout*);
    using QLayout_SetGeometry_Callback = void (*)(QLayout*, QRect*);
    using QLayout_ItemAt_Callback = QLayoutItem* (*)(const QLayout*, int);
    using QLayout_TakeAt_Callback = QLayoutItem* (*)(QLayout*, int);
    using QLayout_IndexOf_Callback = int (*)(const QLayout*, QWidget*);
    using QLayout_IndexOf2_Callback = int (*)(const QLayout*, QLayoutItem*);
    using QLayout_Count_Callback = int (*)(const QLayout*);
    using QLayout_IsEmpty_Callback = bool (*)(const QLayout*);
    using QLayout_ControlTypes_Callback = int (*)(const QLayout*);
    using QLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QLayout*, QWidget*, QWidget*, int);
    using QLayout_Layout_Callback = QLayout* (*)(QLayout*);
    using QLayout_ChildEvent_Callback = void (*)(QLayout*, QChildEvent*);
    using QLayout_Event_Callback = bool (*)(QLayout*, QEvent*);
    using QLayout_EventFilter_Callback = bool (*)(QLayout*, QObject*, QEvent*);
    using QLayout_TimerEvent_Callback = void (*)(QLayout*, QTimerEvent*);
    using QLayout_CustomEvent_Callback = void (*)(QLayout*, QEvent*);
    using QLayout_ConnectNotify_Callback = void (*)(QLayout*, QMetaMethod*);
    using QLayout_DisconnectNotify_Callback = void (*)(QLayout*, QMetaMethod*);
    using QLayout_SizeHint_Callback = QSize* (*)(const QLayout*);
    using QLayout_HasHeightForWidth_Callback = bool (*)(const QLayout*);
    using QLayout_HeightForWidth_Callback = int (*)(const QLayout*, int);
    using QLayout_MinimumHeightForWidth_Callback = int (*)(const QLayout*, int);
    using QLayout_Widget_Callback = QWidget* (*)(const QLayout*);
    using QLayout_SpacerItem_Callback = QSpacerItem* (*)(QLayout*);
    using QLayout::addChildLayout;
    using QLayout::addChildWidget;
    using QLayout::adoptLayout;
    using QLayout::alignmentRect;
    using QLayout::isSignalConnected;
    using QLayout::receivers;
    using QLayout::sender;
    using QLayout::senderSignalIndex;
    using QLayout::widgetEvent;

    // Instance callback storage
    QLayout_MetaObject_Callback qlayout_metaobject_callback = nullptr;
    QLayout_Metacast_Callback qlayout_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QLayout {
        using QLayout::childEvent;
        using QLayout::connectNotify;
        using QLayout::customEvent;
        using QLayout::disconnectNotify;
        using QLayout::timerEvent;
    };

    VirtualQLayout(QWidget* parent) : QLayout(parent) {};
    VirtualQLayout() : QLayout() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlayout_metaobject_callback) {
            QMetaObject* callback_ret = qlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qlayout_spacing_callback) {
            int callback_ret = qlayout_spacing_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QLayout::spacing();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qlayout_setspacing_callback) {
            int cbval1 = spacing;
            qlayout_setspacing_callback(this, cbval1);
            return;
        }
        QLayout::setSpacing(spacing);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qlayout_invalidate_callback) {
            qlayout_invalidate_callback(this);
            return;
        }
        QLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qlayout_geometry_callback) {
            QRect* callback_ret = qlayout_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLayout::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* param1) override {
        if (qlayout_additem_callback) {
            QLayoutItem* cbval1 = param1;
            qlayout_additem_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayout::addItem called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qlayout_expandingdirections_callback) {
            int callback_ret = qlayout_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QLayout::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qlayout_minimumsize_callback) {
            QSize* callback_ret = qlayout_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLayout::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qlayout_maximumsize_callback) {
            QSize* callback_ret = qlayout_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLayout::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qlayout_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QLayout::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qlayout_itemat_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayout::itemAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qlayout_takeat_callback) {
            int cbval1 = index;
            QLayoutItem* callback_ret = qlayout_takeat_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayout::takeAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qlayout_indexof_callback) {
            QWidget* cbval1 = (QWidget*)param1;
            int callback_ret = qlayout_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QLayoutItem* param1) const override {
        if (qlayout_indexof2_callback) {
            QLayoutItem* cbval1 = (QLayoutItem*)param1;
            int callback_ret = qlayout_indexof2_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayout::indexOf(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qlayout_count_callback) {
            int callback_ret = qlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayout::count called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qlayout_isempty_callback) {
            bool callback_ret = qlayout_isempty_callback(this);
            return callback_ret;
        }
        return QLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qlayout_controltypes_callback) {
            int callback_ret = qlayout_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QLayout::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qlayout_replacewidget_callback) {
            QWidget* cbval1 = from;
            QWidget* cbval2 = to;
            int cbval3 = static_cast<int>(options);
            QLayoutItem* callback_ret = qlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QLayout::replaceWidget(from, to, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qlayout_layout_callback) {
            QLayout* callback_ret = qlayout_layout_callback(this);
            return callback_ret;
        }
        return QLayout::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qlayout_childevent_callback) {
            QChildEvent* cbval1 = e;
            qlayout_childevent_callback(this, cbval1);
            return;
        }
        QLayout::childEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlayout_timerevent_callback(this, cbval1);
            return;
        }
        QLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qlayout_customevent_callback(this, cbval1);
            return;
        }
        QLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlayout_sizehint_callback) {
            QSize* callback_ret = qlayout_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayout::sizeHint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlayout_hasheightforwidth_callback) {
            bool callback_ret = qlayout_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QLayout::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlayout_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlayout_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayout::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qlayout_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlayout_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayout::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qlayout_widget_callback) {
            QWidget* callback_ret = qlayout_widget_callback(this);
            return callback_ret;
        }
        return QLayout::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qlayout_spaceritem_callback) {
            QSpacerItem* callback_ret = qlayout_spaceritem_callback(this);
            return callback_ret;
        }
        return QLayout::spacerItem();
    }

    // Friend functions
    friend void QLayout_SuperChildEvent(QLayout* self, QChildEvent* e);
    friend void QLayout_SuperTimerEvent(QLayout* self, QTimerEvent* event);
    friend void QLayout_SuperCustomEvent(QLayout* self, QEvent* event);
    friend void QLayout_SuperConnectNotify(QLayout* self, const QMetaMethod* signal);
    friend void QLayout_SuperDisconnectNotify(QLayout* self, const QMetaMethod* signal);
};

#endif
