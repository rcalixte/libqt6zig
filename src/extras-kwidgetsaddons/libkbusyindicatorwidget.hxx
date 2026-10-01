#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKBUSYINDICATORWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKBUSYINDICATORWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBusyIndicatorWidget
class VirtualKBusyIndicatorWidget final : public KBusyIndicatorWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBusyIndicatorWidget_MetaObject_Callback = QMetaObject* (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_Metacast_Callback = void* (*)(KBusyIndicatorWidget*, const char*);
    using KBusyIndicatorWidget_Metacall_Callback = int (*)(KBusyIndicatorWidget*, int, int, void**);
    using KBusyIndicatorWidget_MinimumSizeHint_Callback = QSize* (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_ShowEvent_Callback = void (*)(KBusyIndicatorWidget*, QShowEvent*);
    using KBusyIndicatorWidget_HideEvent_Callback = void (*)(KBusyIndicatorWidget*, QHideEvent*);
    using KBusyIndicatorWidget_ResizeEvent_Callback = void (*)(KBusyIndicatorWidget*, QResizeEvent*);
    using KBusyIndicatorWidget_PaintEvent_Callback = void (*)(KBusyIndicatorWidget*, QPaintEvent*);
    using KBusyIndicatorWidget_Event_Callback = bool (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_DevType_Callback = int (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_SetVisible_Callback = void (*)(KBusyIndicatorWidget*, bool);
    using KBusyIndicatorWidget_SizeHint_Callback = QSize* (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_HeightForWidth_Callback = int (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_HasHeightForWidth_Callback = bool (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_PaintEngine_Callback = QPaintEngine* (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_MousePressEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseReleaseEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseDoubleClickEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseMoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_WheelEvent_Callback = void (*)(KBusyIndicatorWidget*, QWheelEvent*);
    using KBusyIndicatorWidget_KeyPressEvent_Callback = void (*)(KBusyIndicatorWidget*, QKeyEvent*);
    using KBusyIndicatorWidget_KeyReleaseEvent_Callback = void (*)(KBusyIndicatorWidget*, QKeyEvent*);
    using KBusyIndicatorWidget_FocusInEvent_Callback = void (*)(KBusyIndicatorWidget*, QFocusEvent*);
    using KBusyIndicatorWidget_FocusOutEvent_Callback = void (*)(KBusyIndicatorWidget*, QFocusEvent*);
    using KBusyIndicatorWidget_EnterEvent_Callback = void (*)(KBusyIndicatorWidget*, QEnterEvent*);
    using KBusyIndicatorWidget_LeaveEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_MoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QMoveEvent*);
    using KBusyIndicatorWidget_CloseEvent_Callback = void (*)(KBusyIndicatorWidget*, QCloseEvent*);
    using KBusyIndicatorWidget_ContextMenuEvent_Callback = void (*)(KBusyIndicatorWidget*, QContextMenuEvent*);
    using KBusyIndicatorWidget_TabletEvent_Callback = void (*)(KBusyIndicatorWidget*, QTabletEvent*);
    using KBusyIndicatorWidget_ActionEvent_Callback = void (*)(KBusyIndicatorWidget*, QActionEvent*);
    using KBusyIndicatorWidget_DragEnterEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragEnterEvent*);
    using KBusyIndicatorWidget_DragMoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragMoveEvent*);
    using KBusyIndicatorWidget_DragLeaveEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragLeaveEvent*);
    using KBusyIndicatorWidget_DropEvent_Callback = void (*)(KBusyIndicatorWidget*, QDropEvent*);
    using KBusyIndicatorWidget_NativeEvent_Callback = bool (*)(KBusyIndicatorWidget*, libqt_string, void*, intptr_t*);
    using KBusyIndicatorWidget_ChangeEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_Metric_Callback = int (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_InitPainter_Callback = void (*)(const KBusyIndicatorWidget*, QPainter*);
    using KBusyIndicatorWidget_Redirected_Callback = QPaintDevice* (*)(const KBusyIndicatorWidget*, QPoint*);
    using KBusyIndicatorWidget_SharedPainter_Callback = QPainter* (*)(const KBusyIndicatorWidget*);
    using KBusyIndicatorWidget_InputMethodEvent_Callback = void (*)(KBusyIndicatorWidget*, QInputMethodEvent*);
    using KBusyIndicatorWidget_InputMethodQuery_Callback = QVariant* (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_FocusNextPrevChild_Callback = bool (*)(KBusyIndicatorWidget*, bool);
    using KBusyIndicatorWidget_EventFilter_Callback = bool (*)(KBusyIndicatorWidget*, QObject*, QEvent*);
    using KBusyIndicatorWidget_TimerEvent_Callback = void (*)(KBusyIndicatorWidget*, QTimerEvent*);
    using KBusyIndicatorWidget_ChildEvent_Callback = void (*)(KBusyIndicatorWidget*, QChildEvent*);
    using KBusyIndicatorWidget_CustomEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_ConnectNotify_Callback = void (*)(KBusyIndicatorWidget*, QMetaMethod*);
    using KBusyIndicatorWidget_DisconnectNotify_Callback = void (*)(KBusyIndicatorWidget*, QMetaMethod*);
    using KBusyIndicatorWidget::create;
    using KBusyIndicatorWidget::destroy;
    using KBusyIndicatorWidget::focusNextChild;
    using KBusyIndicatorWidget::focusPreviousChild;
    using KBusyIndicatorWidget::getDecodedMetricF;
    using KBusyIndicatorWidget::isSignalConnected;
    using KBusyIndicatorWidget::receivers;
    using KBusyIndicatorWidget::sender;
    using KBusyIndicatorWidget::senderSignalIndex;
    using KBusyIndicatorWidget::updateMicroFocus;

    // Instance callback storage
    KBusyIndicatorWidget_MetaObject_Callback kbusyindicatorwidget_metaobject_callback = nullptr;
    KBusyIndicatorWidget_Metacast_Callback kbusyindicatorwidget_metacast_callback = nullptr;
    KBusyIndicatorWidget_Metacall_Callback kbusyindicatorwidget_metacall_callback = nullptr;
    KBusyIndicatorWidget_MinimumSizeHint_Callback kbusyindicatorwidget_minimumsizehint_callback = nullptr;
    KBusyIndicatorWidget_ShowEvent_Callback kbusyindicatorwidget_showevent_callback = nullptr;
    KBusyIndicatorWidget_HideEvent_Callback kbusyindicatorwidget_hideevent_callback = nullptr;
    KBusyIndicatorWidget_ResizeEvent_Callback kbusyindicatorwidget_resizeevent_callback = nullptr;
    KBusyIndicatorWidget_PaintEvent_Callback kbusyindicatorwidget_paintevent_callback = nullptr;
    KBusyIndicatorWidget_Event_Callback kbusyindicatorwidget_event_callback = nullptr;
    KBusyIndicatorWidget_DevType_Callback kbusyindicatorwidget_devtype_callback = nullptr;
    KBusyIndicatorWidget_SetVisible_Callback kbusyindicatorwidget_setvisible_callback = nullptr;
    KBusyIndicatorWidget_SizeHint_Callback kbusyindicatorwidget_sizehint_callback = nullptr;
    KBusyIndicatorWidget_HeightForWidth_Callback kbusyindicatorwidget_heightforwidth_callback = nullptr;
    KBusyIndicatorWidget_HasHeightForWidth_Callback kbusyindicatorwidget_hasheightforwidth_callback = nullptr;
    KBusyIndicatorWidget_PaintEngine_Callback kbusyindicatorwidget_paintengine_callback = nullptr;
    KBusyIndicatorWidget_MousePressEvent_Callback kbusyindicatorwidget_mousepressevent_callback = nullptr;
    KBusyIndicatorWidget_MouseReleaseEvent_Callback kbusyindicatorwidget_mousereleaseevent_callback = nullptr;
    KBusyIndicatorWidget_MouseDoubleClickEvent_Callback kbusyindicatorwidget_mousedoubleclickevent_callback = nullptr;
    KBusyIndicatorWidget_MouseMoveEvent_Callback kbusyindicatorwidget_mousemoveevent_callback = nullptr;
    KBusyIndicatorWidget_WheelEvent_Callback kbusyindicatorwidget_wheelevent_callback = nullptr;
    KBusyIndicatorWidget_KeyPressEvent_Callback kbusyindicatorwidget_keypressevent_callback = nullptr;
    KBusyIndicatorWidget_KeyReleaseEvent_Callback kbusyindicatorwidget_keyreleaseevent_callback = nullptr;
    KBusyIndicatorWidget_FocusInEvent_Callback kbusyindicatorwidget_focusinevent_callback = nullptr;
    KBusyIndicatorWidget_FocusOutEvent_Callback kbusyindicatorwidget_focusoutevent_callback = nullptr;
    KBusyIndicatorWidget_EnterEvent_Callback kbusyindicatorwidget_enterevent_callback = nullptr;
    KBusyIndicatorWidget_LeaveEvent_Callback kbusyindicatorwidget_leaveevent_callback = nullptr;
    KBusyIndicatorWidget_MoveEvent_Callback kbusyindicatorwidget_moveevent_callback = nullptr;
    KBusyIndicatorWidget_CloseEvent_Callback kbusyindicatorwidget_closeevent_callback = nullptr;
    KBusyIndicatorWidget_ContextMenuEvent_Callback kbusyindicatorwidget_contextmenuevent_callback = nullptr;
    KBusyIndicatorWidget_TabletEvent_Callback kbusyindicatorwidget_tabletevent_callback = nullptr;
    KBusyIndicatorWidget_ActionEvent_Callback kbusyindicatorwidget_actionevent_callback = nullptr;
    KBusyIndicatorWidget_DragEnterEvent_Callback kbusyindicatorwidget_dragenterevent_callback = nullptr;
    KBusyIndicatorWidget_DragMoveEvent_Callback kbusyindicatorwidget_dragmoveevent_callback = nullptr;
    KBusyIndicatorWidget_DragLeaveEvent_Callback kbusyindicatorwidget_dragleaveevent_callback = nullptr;
    KBusyIndicatorWidget_DropEvent_Callback kbusyindicatorwidget_dropevent_callback = nullptr;
    KBusyIndicatorWidget_NativeEvent_Callback kbusyindicatorwidget_nativeevent_callback = nullptr;
    KBusyIndicatorWidget_ChangeEvent_Callback kbusyindicatorwidget_changeevent_callback = nullptr;
    KBusyIndicatorWidget_Metric_Callback kbusyindicatorwidget_metric_callback = nullptr;
    KBusyIndicatorWidget_InitPainter_Callback kbusyindicatorwidget_initpainter_callback = nullptr;
    KBusyIndicatorWidget_Redirected_Callback kbusyindicatorwidget_redirected_callback = nullptr;
    KBusyIndicatorWidget_SharedPainter_Callback kbusyindicatorwidget_sharedpainter_callback = nullptr;
    KBusyIndicatorWidget_InputMethodEvent_Callback kbusyindicatorwidget_inputmethodevent_callback = nullptr;
    KBusyIndicatorWidget_InputMethodQuery_Callback kbusyindicatorwidget_inputmethodquery_callback = nullptr;
    KBusyIndicatorWidget_FocusNextPrevChild_Callback kbusyindicatorwidget_focusnextprevchild_callback = nullptr;
    KBusyIndicatorWidget_EventFilter_Callback kbusyindicatorwidget_eventfilter_callback = nullptr;
    KBusyIndicatorWidget_TimerEvent_Callback kbusyindicatorwidget_timerevent_callback = nullptr;
    KBusyIndicatorWidget_ChildEvent_Callback kbusyindicatorwidget_childevent_callback = nullptr;
    KBusyIndicatorWidget_CustomEvent_Callback kbusyindicatorwidget_customevent_callback = nullptr;
    KBusyIndicatorWidget_ConnectNotify_Callback kbusyindicatorwidget_connectnotify_callback = nullptr;
    KBusyIndicatorWidget_DisconnectNotify_Callback kbusyindicatorwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBusyIndicatorWidget {
        using KBusyIndicatorWidget::actionEvent;
        using KBusyIndicatorWidget::changeEvent;
        using KBusyIndicatorWidget::childEvent;
        using KBusyIndicatorWidget::closeEvent;
        using KBusyIndicatorWidget::connectNotify;
        using KBusyIndicatorWidget::contextMenuEvent;
        using KBusyIndicatorWidget::customEvent;
        using KBusyIndicatorWidget::disconnectNotify;
        using KBusyIndicatorWidget::dragEnterEvent;
        using KBusyIndicatorWidget::dragLeaveEvent;
        using KBusyIndicatorWidget::dragMoveEvent;
        using KBusyIndicatorWidget::dropEvent;
        using KBusyIndicatorWidget::enterEvent;
        using KBusyIndicatorWidget::event;
        using KBusyIndicatorWidget::focusInEvent;
        using KBusyIndicatorWidget::focusNextPrevChild;
        using KBusyIndicatorWidget::focusOutEvent;
        using KBusyIndicatorWidget::hideEvent;
        using KBusyIndicatorWidget::initPainter;
        using KBusyIndicatorWidget::inputMethodEvent;
        using KBusyIndicatorWidget::keyPressEvent;
        using KBusyIndicatorWidget::keyReleaseEvent;
        using KBusyIndicatorWidget::leaveEvent;
        using KBusyIndicatorWidget::metric;
        using KBusyIndicatorWidget::mouseDoubleClickEvent;
        using KBusyIndicatorWidget::mouseMoveEvent;
        using KBusyIndicatorWidget::mousePressEvent;
        using KBusyIndicatorWidget::mouseReleaseEvent;
        using KBusyIndicatorWidget::moveEvent;
        using KBusyIndicatorWidget::nativeEvent;
        using KBusyIndicatorWidget::paintEvent;
        using KBusyIndicatorWidget::redirected;
        using KBusyIndicatorWidget::resizeEvent;
        using KBusyIndicatorWidget::sharedPainter;
        using KBusyIndicatorWidget::showEvent;
        using KBusyIndicatorWidget::tabletEvent;
        using KBusyIndicatorWidget::timerEvent;
        using KBusyIndicatorWidget::wheelEvent;
    };

    VirtualKBusyIndicatorWidget(QWidget* parent) : KBusyIndicatorWidget(parent) {};
    VirtualKBusyIndicatorWidget() : KBusyIndicatorWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbusyindicatorwidget_metaobject_callback) {
            QMetaObject* callback_ret = kbusyindicatorwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KBusyIndicatorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbusyindicatorwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbusyindicatorwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBusyIndicatorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbusyindicatorwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbusyindicatorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBusyIndicatorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbusyindicatorwidget_minimumsizehint_callback) {
            QSize* callback_ret = kbusyindicatorwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBusyIndicatorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kbusyindicatorwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kbusyindicatorwidget_showevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbusyindicatorwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kbusyindicatorwidget_hideevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kbusyindicatorwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kbusyindicatorwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kbusyindicatorwidget_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kbusyindicatorwidget_paintevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbusyindicatorwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbusyindicatorwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBusyIndicatorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbusyindicatorwidget_devtype_callback) {
            int callback_ret = kbusyindicatorwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBusyIndicatorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbusyindicatorwidget_setvisible_callback) {
            bool cbval1 = visible;
            kbusyindicatorwidget_setvisible_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbusyindicatorwidget_sizehint_callback) {
            QSize* callback_ret = kbusyindicatorwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBusyIndicatorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbusyindicatorwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kbusyindicatorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBusyIndicatorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbusyindicatorwidget_hasheightforwidth_callback) {
            bool callback_ret = kbusyindicatorwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KBusyIndicatorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbusyindicatorwidget_paintengine_callback) {
            QPaintEngine* callback_ret = kbusyindicatorwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KBusyIndicatorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kbusyindicatorwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kbusyindicatorwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kbusyindicatorwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kbusyindicatorwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbusyindicatorwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kbusyindicatorwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kbusyindicatorwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kbusyindicatorwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbusyindicatorwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kbusyindicatorwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbusyindicatorwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kbusyindicatorwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbusyindicatorwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kbusyindicatorwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbusyindicatorwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kbusyindicatorwidget_enterevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbusyindicatorwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kbusyindicatorwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbusyindicatorwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kbusyindicatorwidget_moveevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kbusyindicatorwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kbusyindicatorwidget_closeevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kbusyindicatorwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kbusyindicatorwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbusyindicatorwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kbusyindicatorwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbusyindicatorwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kbusyindicatorwidget_actionevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbusyindicatorwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kbusyindicatorwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbusyindicatorwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kbusyindicatorwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbusyindicatorwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kbusyindicatorwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbusyindicatorwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kbusyindicatorwidget_dropevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbusyindicatorwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kbusyindicatorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KBusyIndicatorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbusyindicatorwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kbusyindicatorwidget_changeevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbusyindicatorwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kbusyindicatorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBusyIndicatorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbusyindicatorwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kbusyindicatorwidget_initpainter_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbusyindicatorwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kbusyindicatorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KBusyIndicatorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbusyindicatorwidget_sharedpainter_callback) {
            QPainter* callback_ret = kbusyindicatorwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KBusyIndicatorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbusyindicatorwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kbusyindicatorwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbusyindicatorwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kbusyindicatorwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBusyIndicatorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbusyindicatorwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kbusyindicatorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KBusyIndicatorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbusyindicatorwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbusyindicatorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBusyIndicatorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbusyindicatorwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbusyindicatorwidget_timerevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbusyindicatorwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbusyindicatorwidget_childevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbusyindicatorwidget_customevent_callback) {
            QEvent* cbval1 = event;
            kbusyindicatorwidget_customevent_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbusyindicatorwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbusyindicatorwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbusyindicatorwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbusyindicatorwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBusyIndicatorWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBusyIndicatorWidget_SuperShowEvent(KBusyIndicatorWidget* self, QShowEvent* event);
    friend void KBusyIndicatorWidget_SuperHideEvent(KBusyIndicatorWidget* self, QHideEvent* event);
    friend void KBusyIndicatorWidget_SuperResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event);
    friend void KBusyIndicatorWidget_SuperPaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1);
    friend bool KBusyIndicatorWidget_SuperEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_SuperMousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_SuperMouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_SuperMouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_SuperMouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_SuperWheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event);
    friend void KBusyIndicatorWidget_SuperKeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_SuperKeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_SuperFocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_SuperFocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_SuperEnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event);
    friend void KBusyIndicatorWidget_SuperLeaveEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_SuperMoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event);
    friend void KBusyIndicatorWidget_SuperCloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event);
    friend void KBusyIndicatorWidget_SuperContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event);
    friend void KBusyIndicatorWidget_SuperTabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event);
    friend void KBusyIndicatorWidget_SuperActionEvent(KBusyIndicatorWidget* self, QActionEvent* event);
    friend void KBusyIndicatorWidget_SuperDragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event);
    friend void KBusyIndicatorWidget_SuperDragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event);
    friend void KBusyIndicatorWidget_SuperDragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event);
    friend void KBusyIndicatorWidget_SuperDropEvent(KBusyIndicatorWidget* self, QDropEvent* event);
    friend bool KBusyIndicatorWidget_SuperNativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBusyIndicatorWidget_SuperChangeEvent(KBusyIndicatorWidget* self, QEvent* param1);
    friend int KBusyIndicatorWidget_SuperMetric(const KBusyIndicatorWidget* self, int param1);
    friend void KBusyIndicatorWidget_SuperInitPainter(const KBusyIndicatorWidget* self, QPainter* painter);
    friend QPaintDevice* KBusyIndicatorWidget_SuperRedirected(const KBusyIndicatorWidget* self, QPoint* offset);
    friend QPainter* KBusyIndicatorWidget_SuperSharedPainter(const KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_SuperInputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1);
    friend bool KBusyIndicatorWidget_SuperFocusNextPrevChild(KBusyIndicatorWidget* self, bool next);
    friend void KBusyIndicatorWidget_SuperTimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event);
    friend void KBusyIndicatorWidget_SuperChildEvent(KBusyIndicatorWidget* self, QChildEvent* event);
    friend void KBusyIndicatorWidget_SuperCustomEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_SuperConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend void KBusyIndicatorWidget_SuperDisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
};

#endif
