#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKTREEWIDGETSEARCHLINEWIDGET_HXX
#define EXTRAS_KITEMVIEWS_LIBKTREEWIDGETSEARCHLINEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTreeWidgetSearchLineWidget
class VirtualKTreeWidgetSearchLineWidget final : public KTreeWidgetSearchLineWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTreeWidgetSearchLineWidget_MetaObject_Callback = QMetaObject* (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_Metacast_Callback = void* (*)(KTreeWidgetSearchLineWidget*, const char*);
    using KTreeWidgetSearchLineWidget_Metacall_Callback = int (*)(KTreeWidgetSearchLineWidget*, int, int, void**);
    using KTreeWidgetSearchLineWidget_CreateWidgets_Callback = void (*)(KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_CreateSearchLine_Callback = KTreeWidgetSearchLine* (*)(const KTreeWidgetSearchLineWidget*, QTreeWidget*);
    using KTreeWidgetSearchLineWidget_DevType_Callback = int (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_SetVisible_Callback = void (*)(KTreeWidgetSearchLineWidget*, bool);
    using KTreeWidgetSearchLineWidget_SizeHint_Callback = QSize* (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback = QSize* (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_HeightForWidth_Callback = int (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback = bool (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_PaintEngine_Callback = QPaintEngine* (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_Event_Callback = bool (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_MousePressEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_WheelEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QWheelEvent*);
    using KTreeWidgetSearchLineWidget_KeyPressEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QKeyEvent*);
    using KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QKeyEvent*);
    using KTreeWidgetSearchLineWidget_FocusInEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QFocusEvent*);
    using KTreeWidgetSearchLineWidget_FocusOutEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QFocusEvent*);
    using KTreeWidgetSearchLineWidget_EnterEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEnterEvent*);
    using KTreeWidgetSearchLineWidget_LeaveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_PaintEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QPaintEvent*);
    using KTreeWidgetSearchLineWidget_MoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMoveEvent*);
    using KTreeWidgetSearchLineWidget_ResizeEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QResizeEvent*);
    using KTreeWidgetSearchLineWidget_CloseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QCloseEvent*);
    using KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QContextMenuEvent*);
    using KTreeWidgetSearchLineWidget_TabletEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QTabletEvent*);
    using KTreeWidgetSearchLineWidget_ActionEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QActionEvent*);
    using KTreeWidgetSearchLineWidget_DragEnterEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragEnterEvent*);
    using KTreeWidgetSearchLineWidget_DragMoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragMoveEvent*);
    using KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragLeaveEvent*);
    using KTreeWidgetSearchLineWidget_DropEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDropEvent*);
    using KTreeWidgetSearchLineWidget_ShowEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QShowEvent*);
    using KTreeWidgetSearchLineWidget_HideEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QHideEvent*);
    using KTreeWidgetSearchLineWidget_NativeEvent_Callback = bool (*)(KTreeWidgetSearchLineWidget*, libqt_string, void*, intptr_t*);
    using KTreeWidgetSearchLineWidget_ChangeEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_Metric_Callback = int (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_InitPainter_Callback = void (*)(const KTreeWidgetSearchLineWidget*, QPainter*);
    using KTreeWidgetSearchLineWidget_Redirected_Callback = QPaintDevice* (*)(const KTreeWidgetSearchLineWidget*, QPoint*);
    using KTreeWidgetSearchLineWidget_SharedPainter_Callback = QPainter* (*)(const KTreeWidgetSearchLineWidget*);
    using KTreeWidgetSearchLineWidget_InputMethodEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QInputMethodEvent*);
    using KTreeWidgetSearchLineWidget_InputMethodQuery_Callback = QVariant* (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback = bool (*)(KTreeWidgetSearchLineWidget*, bool);
    using KTreeWidgetSearchLineWidget_EventFilter_Callback = bool (*)(KTreeWidgetSearchLineWidget*, QObject*, QEvent*);
    using KTreeWidgetSearchLineWidget_TimerEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QTimerEvent*);
    using KTreeWidgetSearchLineWidget_ChildEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QChildEvent*);
    using KTreeWidgetSearchLineWidget_CustomEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_ConnectNotify_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMetaMethod*);
    using KTreeWidgetSearchLineWidget_DisconnectNotify_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMetaMethod*);
    using KTreeWidgetSearchLineWidget::create;
    using KTreeWidgetSearchLineWidget::destroy;
    using KTreeWidgetSearchLineWidget::focusNextChild;
    using KTreeWidgetSearchLineWidget::focusPreviousChild;
    using KTreeWidgetSearchLineWidget::getDecodedMetricF;
    using KTreeWidgetSearchLineWidget::isSignalConnected;
    using KTreeWidgetSearchLineWidget::receivers;
    using KTreeWidgetSearchLineWidget::sender;
    using KTreeWidgetSearchLineWidget::senderSignalIndex;
    using KTreeWidgetSearchLineWidget::updateMicroFocus;

    // Instance callback storage
    KTreeWidgetSearchLineWidget_MetaObject_Callback ktreewidgetsearchlinewidget_metaobject_callback = nullptr;
    KTreeWidgetSearchLineWidget_Metacast_Callback ktreewidgetsearchlinewidget_metacast_callback = nullptr;
    KTreeWidgetSearchLineWidget_Metacall_Callback ktreewidgetsearchlinewidget_metacall_callback = nullptr;
    KTreeWidgetSearchLineWidget_CreateWidgets_Callback ktreewidgetsearchlinewidget_createwidgets_callback = nullptr;
    KTreeWidgetSearchLineWidget_CreateSearchLine_Callback ktreewidgetsearchlinewidget_createsearchline_callback = nullptr;
    KTreeWidgetSearchLineWidget_DevType_Callback ktreewidgetsearchlinewidget_devtype_callback = nullptr;
    KTreeWidgetSearchLineWidget_SetVisible_Callback ktreewidgetsearchlinewidget_setvisible_callback = nullptr;
    KTreeWidgetSearchLineWidget_SizeHint_Callback ktreewidgetsearchlinewidget_sizehint_callback = nullptr;
    KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback ktreewidgetsearchlinewidget_minimumsizehint_callback = nullptr;
    KTreeWidgetSearchLineWidget_HeightForWidth_Callback ktreewidgetsearchlinewidget_heightforwidth_callback = nullptr;
    KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback ktreewidgetsearchlinewidget_hasheightforwidth_callback = nullptr;
    KTreeWidgetSearchLineWidget_PaintEngine_Callback ktreewidgetsearchlinewidget_paintengine_callback = nullptr;
    KTreeWidgetSearchLineWidget_Event_Callback ktreewidgetsearchlinewidget_event_callback = nullptr;
    KTreeWidgetSearchLineWidget_MousePressEvent_Callback ktreewidgetsearchlinewidget_mousepressevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback ktreewidgetsearchlinewidget_mousereleaseevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback ktreewidgetsearchlinewidget_mousedoubleclickevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback ktreewidgetsearchlinewidget_mousemoveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_WheelEvent_Callback ktreewidgetsearchlinewidget_wheelevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_KeyPressEvent_Callback ktreewidgetsearchlinewidget_keypressevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback ktreewidgetsearchlinewidget_keyreleaseevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusInEvent_Callback ktreewidgetsearchlinewidget_focusinevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusOutEvent_Callback ktreewidgetsearchlinewidget_focusoutevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_EnterEvent_Callback ktreewidgetsearchlinewidget_enterevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_LeaveEvent_Callback ktreewidgetsearchlinewidget_leaveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_PaintEvent_Callback ktreewidgetsearchlinewidget_paintevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MoveEvent_Callback ktreewidgetsearchlinewidget_moveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ResizeEvent_Callback ktreewidgetsearchlinewidget_resizeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_CloseEvent_Callback ktreewidgetsearchlinewidget_closeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback ktreewidgetsearchlinewidget_contextmenuevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_TabletEvent_Callback ktreewidgetsearchlinewidget_tabletevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ActionEvent_Callback ktreewidgetsearchlinewidget_actionevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragEnterEvent_Callback ktreewidgetsearchlinewidget_dragenterevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragMoveEvent_Callback ktreewidgetsearchlinewidget_dragmoveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback ktreewidgetsearchlinewidget_dragleaveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DropEvent_Callback ktreewidgetsearchlinewidget_dropevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ShowEvent_Callback ktreewidgetsearchlinewidget_showevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_HideEvent_Callback ktreewidgetsearchlinewidget_hideevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_NativeEvent_Callback ktreewidgetsearchlinewidget_nativeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ChangeEvent_Callback ktreewidgetsearchlinewidget_changeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_Metric_Callback ktreewidgetsearchlinewidget_metric_callback = nullptr;
    KTreeWidgetSearchLineWidget_InitPainter_Callback ktreewidgetsearchlinewidget_initpainter_callback = nullptr;
    KTreeWidgetSearchLineWidget_Redirected_Callback ktreewidgetsearchlinewidget_redirected_callback = nullptr;
    KTreeWidgetSearchLineWidget_SharedPainter_Callback ktreewidgetsearchlinewidget_sharedpainter_callback = nullptr;
    KTreeWidgetSearchLineWidget_InputMethodEvent_Callback ktreewidgetsearchlinewidget_inputmethodevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_InputMethodQuery_Callback ktreewidgetsearchlinewidget_inputmethodquery_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback ktreewidgetsearchlinewidget_focusnextprevchild_callback = nullptr;
    KTreeWidgetSearchLineWidget_EventFilter_Callback ktreewidgetsearchlinewidget_eventfilter_callback = nullptr;
    KTreeWidgetSearchLineWidget_TimerEvent_Callback ktreewidgetsearchlinewidget_timerevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ChildEvent_Callback ktreewidgetsearchlinewidget_childevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_CustomEvent_Callback ktreewidgetsearchlinewidget_customevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ConnectNotify_Callback ktreewidgetsearchlinewidget_connectnotify_callback = nullptr;
    KTreeWidgetSearchLineWidget_DisconnectNotify_Callback ktreewidgetsearchlinewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTreeWidgetSearchLineWidget {
        using KTreeWidgetSearchLineWidget::actionEvent;
        using KTreeWidgetSearchLineWidget::changeEvent;
        using KTreeWidgetSearchLineWidget::childEvent;
        using KTreeWidgetSearchLineWidget::closeEvent;
        using KTreeWidgetSearchLineWidget::connectNotify;
        using KTreeWidgetSearchLineWidget::contextMenuEvent;
        using KTreeWidgetSearchLineWidget::createSearchLine;
        using KTreeWidgetSearchLineWidget::createWidgets;
        using KTreeWidgetSearchLineWidget::customEvent;
        using KTreeWidgetSearchLineWidget::disconnectNotify;
        using KTreeWidgetSearchLineWidget::dragEnterEvent;
        using KTreeWidgetSearchLineWidget::dragLeaveEvent;
        using KTreeWidgetSearchLineWidget::dragMoveEvent;
        using KTreeWidgetSearchLineWidget::dropEvent;
        using KTreeWidgetSearchLineWidget::enterEvent;
        using KTreeWidgetSearchLineWidget::event;
        using KTreeWidgetSearchLineWidget::focusInEvent;
        using KTreeWidgetSearchLineWidget::focusNextPrevChild;
        using KTreeWidgetSearchLineWidget::focusOutEvent;
        using KTreeWidgetSearchLineWidget::hideEvent;
        using KTreeWidgetSearchLineWidget::initPainter;
        using KTreeWidgetSearchLineWidget::inputMethodEvent;
        using KTreeWidgetSearchLineWidget::keyPressEvent;
        using KTreeWidgetSearchLineWidget::keyReleaseEvent;
        using KTreeWidgetSearchLineWidget::leaveEvent;
        using KTreeWidgetSearchLineWidget::metric;
        using KTreeWidgetSearchLineWidget::mouseDoubleClickEvent;
        using KTreeWidgetSearchLineWidget::mouseMoveEvent;
        using KTreeWidgetSearchLineWidget::mousePressEvent;
        using KTreeWidgetSearchLineWidget::mouseReleaseEvent;
        using KTreeWidgetSearchLineWidget::moveEvent;
        using KTreeWidgetSearchLineWidget::nativeEvent;
        using KTreeWidgetSearchLineWidget::paintEvent;
        using KTreeWidgetSearchLineWidget::redirected;
        using KTreeWidgetSearchLineWidget::resizeEvent;
        using KTreeWidgetSearchLineWidget::sharedPainter;
        using KTreeWidgetSearchLineWidget::showEvent;
        using KTreeWidgetSearchLineWidget::tabletEvent;
        using KTreeWidgetSearchLineWidget::timerEvent;
        using KTreeWidgetSearchLineWidget::wheelEvent;
    };

    VirtualKTreeWidgetSearchLineWidget(QWidget* parent) : KTreeWidgetSearchLineWidget(parent) {};
    VirtualKTreeWidgetSearchLineWidget() : KTreeWidgetSearchLineWidget() {};
    VirtualKTreeWidgetSearchLineWidget(QWidget* parent, QTreeWidget* treeWidget) : KTreeWidgetSearchLineWidget(parent, treeWidget) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktreewidgetsearchlinewidget_metaobject_callback) {
            QMetaObject* callback_ret = ktreewidgetsearchlinewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktreewidgetsearchlinewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktreewidgetsearchlinewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktreewidgetsearchlinewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktreewidgetsearchlinewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createWidgets() override {
        if (ktreewidgetsearchlinewidget_createwidgets_callback) {
            ktreewidgetsearchlinewidget_createwidgets_callback(this);
            return;
        }
        KTreeWidgetSearchLineWidget::createWidgets();
    }

    // Virtual method for C ABI access and custom callback
    virtual KTreeWidgetSearchLine* createSearchLine(QTreeWidget* treeWidget) const override {
        if (ktreewidgetsearchlinewidget_createsearchline_callback) {
            QTreeWidget* cbval1 = treeWidget;
            KTreeWidgetSearchLine* callback_ret = ktreewidgetsearchlinewidget_createsearchline_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktreewidgetsearchlinewidget_devtype_callback) {
            int callback_ret = ktreewidgetsearchlinewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktreewidgetsearchlinewidget_setvisible_callback) {
            bool cbval1 = visible;
            ktreewidgetsearchlinewidget_setvisible_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktreewidgetsearchlinewidget_sizehint_callback) {
            QSize* callback_ret = ktreewidgetsearchlinewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLineWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktreewidgetsearchlinewidget_minimumsizehint_callback) {
            QSize* callback_ret = ktreewidgetsearchlinewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLineWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktreewidgetsearchlinewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktreewidgetsearchlinewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktreewidgetsearchlinewidget_hasheightforwidth_callback) {
            bool callback_ret = ktreewidgetsearchlinewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktreewidgetsearchlinewidget_paintengine_callback) {
            QPaintEngine* callback_ret = ktreewidgetsearchlinewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktreewidgetsearchlinewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktreewidgetsearchlinewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_enterevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktreewidgetsearchlinewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_paintevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_moveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktreewidgetsearchlinewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktreewidgetsearchlinewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_closeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktreewidgetsearchlinewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktreewidgetsearchlinewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktreewidgetsearchlinewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_actionevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktreewidgetsearchlinewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_dropevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktreewidgetsearchlinewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_showevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktreewidgetsearchlinewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_hideevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktreewidgetsearchlinewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktreewidgetsearchlinewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktreewidgetsearchlinewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            ktreewidgetsearchlinewidget_changeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktreewidgetsearchlinewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktreewidgetsearchlinewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktreewidgetsearchlinewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktreewidgetsearchlinewidget_initpainter_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktreewidgetsearchlinewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktreewidgetsearchlinewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktreewidgetsearchlinewidget_sharedpainter_callback) {
            QPainter* callback_ret = ktreewidgetsearchlinewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktreewidgetsearchlinewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktreewidgetsearchlinewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktreewidgetsearchlinewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktreewidgetsearchlinewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLineWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktreewidgetsearchlinewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktreewidgetsearchlinewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktreewidgetsearchlinewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktreewidgetsearchlinewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktreewidgetsearchlinewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_timerevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktreewidgetsearchlinewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_childevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_customevent_callback) {
            QEvent* cbval1 = event;
            ktreewidgetsearchlinewidget_customevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktreewidgetsearchlinewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktreewidgetsearchlinewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTreeWidgetSearchLineWidget_SuperCreateWidgets(KTreeWidgetSearchLineWidget* self);
    friend KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_SuperCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
    friend bool KTreeWidgetSearchLineWidget_SuperEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperPaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
    friend bool KTreeWidgetSearchLineWidget_SuperNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KTreeWidgetSearchLineWidget_SuperChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
    friend int KTreeWidgetSearchLineWidget_SuperMetric(const KTreeWidgetSearchLineWidget* self, int param1);
    friend void KTreeWidgetSearchLineWidget_SuperInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
    friend QPaintDevice* KTreeWidgetSearchLineWidget_SuperRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
    friend QPainter* KTreeWidgetSearchLineWidget_SuperSharedPainter(const KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_SuperInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
    friend bool KTreeWidgetSearchLineWidget_SuperFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
    friend void KTreeWidgetSearchLineWidget_SuperTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_SuperDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
};

#endif
