#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKNEWPASSWORDWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKNEWPASSWORDWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewPasswordWidget
class VirtualKNewPasswordWidget final : public KNewPasswordWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNewPasswordWidget_MetaObject_Callback = QMetaObject* (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_Metacast_Callback = void* (*)(KNewPasswordWidget*, const char*);
    using KNewPasswordWidget_Metacall_Callback = int (*)(KNewPasswordWidget*, int, int, void**);
    using KNewPasswordWidget_DevType_Callback = int (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_SetVisible_Callback = void (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_SizeHint_Callback = QSize* (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_MinimumSizeHint_Callback = QSize* (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_HeightForWidth_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_HasHeightForWidth_Callback = bool (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_PaintEngine_Callback = QPaintEngine* (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_Event_Callback = bool (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_MousePressEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseDoubleClickEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseMoveEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_WheelEvent_Callback = void (*)(KNewPasswordWidget*, QWheelEvent*);
    using KNewPasswordWidget_KeyPressEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_KeyReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_FocusInEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_FocusOutEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_EnterEvent_Callback = void (*)(KNewPasswordWidget*, QEnterEvent*);
    using KNewPasswordWidget_LeaveEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_PaintEvent_Callback = void (*)(KNewPasswordWidget*, QPaintEvent*);
    using KNewPasswordWidget_MoveEvent_Callback = void (*)(KNewPasswordWidget*, QMoveEvent*);
    using KNewPasswordWidget_ResizeEvent_Callback = void (*)(KNewPasswordWidget*, QResizeEvent*);
    using KNewPasswordWidget_CloseEvent_Callback = void (*)(KNewPasswordWidget*, QCloseEvent*);
    using KNewPasswordWidget_ContextMenuEvent_Callback = void (*)(KNewPasswordWidget*, QContextMenuEvent*);
    using KNewPasswordWidget_TabletEvent_Callback = void (*)(KNewPasswordWidget*, QTabletEvent*);
    using KNewPasswordWidget_ActionEvent_Callback = void (*)(KNewPasswordWidget*, QActionEvent*);
    using KNewPasswordWidget_DragEnterEvent_Callback = void (*)(KNewPasswordWidget*, QDragEnterEvent*);
    using KNewPasswordWidget_DragMoveEvent_Callback = void (*)(KNewPasswordWidget*, QDragMoveEvent*);
    using KNewPasswordWidget_DragLeaveEvent_Callback = void (*)(KNewPasswordWidget*, QDragLeaveEvent*);
    using KNewPasswordWidget_DropEvent_Callback = void (*)(KNewPasswordWidget*, QDropEvent*);
    using KNewPasswordWidget_ShowEvent_Callback = void (*)(KNewPasswordWidget*, QShowEvent*);
    using KNewPasswordWidget_HideEvent_Callback = void (*)(KNewPasswordWidget*, QHideEvent*);
    using KNewPasswordWidget_NativeEvent_Callback = bool (*)(KNewPasswordWidget*, libqt_string, void*, intptr_t*);
    using KNewPasswordWidget_ChangeEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_Metric_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_InitPainter_Callback = void (*)(const KNewPasswordWidget*, QPainter*);
    using KNewPasswordWidget_Redirected_Callback = QPaintDevice* (*)(const KNewPasswordWidget*, QPoint*);
    using KNewPasswordWidget_SharedPainter_Callback = QPainter* (*)(const KNewPasswordWidget*);
    using KNewPasswordWidget_InputMethodEvent_Callback = void (*)(KNewPasswordWidget*, QInputMethodEvent*);
    using KNewPasswordWidget_InputMethodQuery_Callback = QVariant* (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_FocusNextPrevChild_Callback = bool (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_EventFilter_Callback = bool (*)(KNewPasswordWidget*, QObject*, QEvent*);
    using KNewPasswordWidget_TimerEvent_Callback = void (*)(KNewPasswordWidget*, QTimerEvent*);
    using KNewPasswordWidget_ChildEvent_Callback = void (*)(KNewPasswordWidget*, QChildEvent*);
    using KNewPasswordWidget_CustomEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_ConnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_DisconnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget::create;
    using KNewPasswordWidget::destroy;
    using KNewPasswordWidget::focusNextChild;
    using KNewPasswordWidget::focusPreviousChild;
    using KNewPasswordWidget::getDecodedMetricF;
    using KNewPasswordWidget::isSignalConnected;
    using KNewPasswordWidget::receivers;
    using KNewPasswordWidget::sender;
    using KNewPasswordWidget::senderSignalIndex;
    using KNewPasswordWidget::updateMicroFocus;

    // Instance callback storage
    KNewPasswordWidget_MetaObject_Callback knewpasswordwidget_metaobject_callback = nullptr;
    KNewPasswordWidget_Metacast_Callback knewpasswordwidget_metacast_callback = nullptr;
    KNewPasswordWidget_Metacall_Callback knewpasswordwidget_metacall_callback = nullptr;
    KNewPasswordWidget_DevType_Callback knewpasswordwidget_devtype_callback = nullptr;
    KNewPasswordWidget_SetVisible_Callback knewpasswordwidget_setvisible_callback = nullptr;
    KNewPasswordWidget_SizeHint_Callback knewpasswordwidget_sizehint_callback = nullptr;
    KNewPasswordWidget_MinimumSizeHint_Callback knewpasswordwidget_minimumsizehint_callback = nullptr;
    KNewPasswordWidget_HeightForWidth_Callback knewpasswordwidget_heightforwidth_callback = nullptr;
    KNewPasswordWidget_HasHeightForWidth_Callback knewpasswordwidget_hasheightforwidth_callback = nullptr;
    KNewPasswordWidget_PaintEngine_Callback knewpasswordwidget_paintengine_callback = nullptr;
    KNewPasswordWidget_Event_Callback knewpasswordwidget_event_callback = nullptr;
    KNewPasswordWidget_MousePressEvent_Callback knewpasswordwidget_mousepressevent_callback = nullptr;
    KNewPasswordWidget_MouseReleaseEvent_Callback knewpasswordwidget_mousereleaseevent_callback = nullptr;
    KNewPasswordWidget_MouseDoubleClickEvent_Callback knewpasswordwidget_mousedoubleclickevent_callback = nullptr;
    KNewPasswordWidget_MouseMoveEvent_Callback knewpasswordwidget_mousemoveevent_callback = nullptr;
    KNewPasswordWidget_WheelEvent_Callback knewpasswordwidget_wheelevent_callback = nullptr;
    KNewPasswordWidget_KeyPressEvent_Callback knewpasswordwidget_keypressevent_callback = nullptr;
    KNewPasswordWidget_KeyReleaseEvent_Callback knewpasswordwidget_keyreleaseevent_callback = nullptr;
    KNewPasswordWidget_FocusInEvent_Callback knewpasswordwidget_focusinevent_callback = nullptr;
    KNewPasswordWidget_FocusOutEvent_Callback knewpasswordwidget_focusoutevent_callback = nullptr;
    KNewPasswordWidget_EnterEvent_Callback knewpasswordwidget_enterevent_callback = nullptr;
    KNewPasswordWidget_LeaveEvent_Callback knewpasswordwidget_leaveevent_callback = nullptr;
    KNewPasswordWidget_PaintEvent_Callback knewpasswordwidget_paintevent_callback = nullptr;
    KNewPasswordWidget_MoveEvent_Callback knewpasswordwidget_moveevent_callback = nullptr;
    KNewPasswordWidget_ResizeEvent_Callback knewpasswordwidget_resizeevent_callback = nullptr;
    KNewPasswordWidget_CloseEvent_Callback knewpasswordwidget_closeevent_callback = nullptr;
    KNewPasswordWidget_ContextMenuEvent_Callback knewpasswordwidget_contextmenuevent_callback = nullptr;
    KNewPasswordWidget_TabletEvent_Callback knewpasswordwidget_tabletevent_callback = nullptr;
    KNewPasswordWidget_ActionEvent_Callback knewpasswordwidget_actionevent_callback = nullptr;
    KNewPasswordWidget_DragEnterEvent_Callback knewpasswordwidget_dragenterevent_callback = nullptr;
    KNewPasswordWidget_DragMoveEvent_Callback knewpasswordwidget_dragmoveevent_callback = nullptr;
    KNewPasswordWidget_DragLeaveEvent_Callback knewpasswordwidget_dragleaveevent_callback = nullptr;
    KNewPasswordWidget_DropEvent_Callback knewpasswordwidget_dropevent_callback = nullptr;
    KNewPasswordWidget_ShowEvent_Callback knewpasswordwidget_showevent_callback = nullptr;
    KNewPasswordWidget_HideEvent_Callback knewpasswordwidget_hideevent_callback = nullptr;
    KNewPasswordWidget_NativeEvent_Callback knewpasswordwidget_nativeevent_callback = nullptr;
    KNewPasswordWidget_ChangeEvent_Callback knewpasswordwidget_changeevent_callback = nullptr;
    KNewPasswordWidget_Metric_Callback knewpasswordwidget_metric_callback = nullptr;
    KNewPasswordWidget_InitPainter_Callback knewpasswordwidget_initpainter_callback = nullptr;
    KNewPasswordWidget_Redirected_Callback knewpasswordwidget_redirected_callback = nullptr;
    KNewPasswordWidget_SharedPainter_Callback knewpasswordwidget_sharedpainter_callback = nullptr;
    KNewPasswordWidget_InputMethodEvent_Callback knewpasswordwidget_inputmethodevent_callback = nullptr;
    KNewPasswordWidget_InputMethodQuery_Callback knewpasswordwidget_inputmethodquery_callback = nullptr;
    KNewPasswordWidget_FocusNextPrevChild_Callback knewpasswordwidget_focusnextprevchild_callback = nullptr;
    KNewPasswordWidget_EventFilter_Callback knewpasswordwidget_eventfilter_callback = nullptr;
    KNewPasswordWidget_TimerEvent_Callback knewpasswordwidget_timerevent_callback = nullptr;
    KNewPasswordWidget_ChildEvent_Callback knewpasswordwidget_childevent_callback = nullptr;
    KNewPasswordWidget_CustomEvent_Callback knewpasswordwidget_customevent_callback = nullptr;
    KNewPasswordWidget_ConnectNotify_Callback knewpasswordwidget_connectnotify_callback = nullptr;
    KNewPasswordWidget_DisconnectNotify_Callback knewpasswordwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNewPasswordWidget {
        using KNewPasswordWidget::actionEvent;
        using KNewPasswordWidget::changeEvent;
        using KNewPasswordWidget::childEvent;
        using KNewPasswordWidget::closeEvent;
        using KNewPasswordWidget::connectNotify;
        using KNewPasswordWidget::contextMenuEvent;
        using KNewPasswordWidget::customEvent;
        using KNewPasswordWidget::disconnectNotify;
        using KNewPasswordWidget::dragEnterEvent;
        using KNewPasswordWidget::dragLeaveEvent;
        using KNewPasswordWidget::dragMoveEvent;
        using KNewPasswordWidget::dropEvent;
        using KNewPasswordWidget::enterEvent;
        using KNewPasswordWidget::event;
        using KNewPasswordWidget::focusInEvent;
        using KNewPasswordWidget::focusNextPrevChild;
        using KNewPasswordWidget::focusOutEvent;
        using KNewPasswordWidget::hideEvent;
        using KNewPasswordWidget::initPainter;
        using KNewPasswordWidget::inputMethodEvent;
        using KNewPasswordWidget::keyPressEvent;
        using KNewPasswordWidget::keyReleaseEvent;
        using KNewPasswordWidget::leaveEvent;
        using KNewPasswordWidget::metric;
        using KNewPasswordWidget::mouseDoubleClickEvent;
        using KNewPasswordWidget::mouseMoveEvent;
        using KNewPasswordWidget::mousePressEvent;
        using KNewPasswordWidget::mouseReleaseEvent;
        using KNewPasswordWidget::moveEvent;
        using KNewPasswordWidget::nativeEvent;
        using KNewPasswordWidget::paintEvent;
        using KNewPasswordWidget::redirected;
        using KNewPasswordWidget::resizeEvent;
        using KNewPasswordWidget::sharedPainter;
        using KNewPasswordWidget::showEvent;
        using KNewPasswordWidget::tabletEvent;
        using KNewPasswordWidget::timerEvent;
        using KNewPasswordWidget::wheelEvent;
    };

    VirtualKNewPasswordWidget(QWidget* parent) : KNewPasswordWidget(parent) {};
    VirtualKNewPasswordWidget() : KNewPasswordWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knewpasswordwidget_metaobject_callback) {
            QMetaObject* callback_ret = knewpasswordwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KNewPasswordWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knewpasswordwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knewpasswordwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewpasswordwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knewpasswordwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knewpasswordwidget_devtype_callback) {
            int callback_ret = knewpasswordwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knewpasswordwidget_setvisible_callback) {
            bool cbval1 = visible;
            knewpasswordwidget_setvisible_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knewpasswordwidget_sizehint_callback) {
            QSize* callback_ret = knewpasswordwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knewpasswordwidget_minimumsizehint_callback) {
            QSize* callback_ret = knewpasswordwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knewpasswordwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = knewpasswordwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knewpasswordwidget_hasheightforwidth_callback) {
            bool callback_ret = knewpasswordwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KNewPasswordWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knewpasswordwidget_paintengine_callback) {
            QPaintEngine* callback_ret = knewpasswordwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KNewPasswordWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knewpasswordwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knewpasswordwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpasswordwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpasswordwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpasswordwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpasswordwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knewpasswordwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            knewpasswordwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            knewpasswordwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            knewpasswordwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            knewpasswordwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            knewpasswordwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knewpasswordwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            knewpasswordwidget_enterevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knewpasswordwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            knewpasswordwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knewpasswordwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            knewpasswordwidget_paintevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knewpasswordwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            knewpasswordwidget_moveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (knewpasswordwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            knewpasswordwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (knewpasswordwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            knewpasswordwidget_closeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (knewpasswordwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            knewpasswordwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knewpasswordwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            knewpasswordwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knewpasswordwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            knewpasswordwidget_actionevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knewpasswordwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            knewpasswordwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knewpasswordwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            knewpasswordwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knewpasswordwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            knewpasswordwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knewpasswordwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            knewpasswordwidget_dropevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (knewpasswordwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            knewpasswordwidget_showevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knewpasswordwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            knewpasswordwidget_hideevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knewpasswordwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = knewpasswordwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KNewPasswordWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knewpasswordwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            knewpasswordwidget_changeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knewpasswordwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = knewpasswordwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knewpasswordwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            knewpasswordwidget_initpainter_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knewpasswordwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = knewpasswordwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knewpasswordwidget_sharedpainter_callback) {
            QPainter* callback_ret = knewpasswordwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KNewPasswordWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knewpasswordwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            knewpasswordwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knewpasswordwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = knewpasswordwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knewpasswordwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = knewpasswordwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knewpasswordwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knewpasswordwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNewPasswordWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewpasswordwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knewpasswordwidget_timerevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewpasswordwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            knewpasswordwidget_childevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewpasswordwidget_customevent_callback) {
            QEvent* cbval1 = event;
            knewpasswordwidget_customevent_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewpasswordwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewpasswordwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNewPasswordWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KNewPasswordWidget_SuperEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_SuperMousePressEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperWheelEvent(KNewPasswordWidget* self, QWheelEvent* event);
    friend void KNewPasswordWidget_SuperKeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_SuperKeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_SuperFocusInEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_SuperFocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_SuperEnterEvent(KNewPasswordWidget* self, QEnterEvent* event);
    friend void KNewPasswordWidget_SuperLeaveEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_SuperPaintEvent(KNewPasswordWidget* self, QPaintEvent* event);
    friend void KNewPasswordWidget_SuperMoveEvent(KNewPasswordWidget* self, QMoveEvent* event);
    friend void KNewPasswordWidget_SuperResizeEvent(KNewPasswordWidget* self, QResizeEvent* event);
    friend void KNewPasswordWidget_SuperCloseEvent(KNewPasswordWidget* self, QCloseEvent* event);
    friend void KNewPasswordWidget_SuperContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event);
    friend void KNewPasswordWidget_SuperTabletEvent(KNewPasswordWidget* self, QTabletEvent* event);
    friend void KNewPasswordWidget_SuperActionEvent(KNewPasswordWidget* self, QActionEvent* event);
    friend void KNewPasswordWidget_SuperDragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event);
    friend void KNewPasswordWidget_SuperDragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event);
    friend void KNewPasswordWidget_SuperDragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event);
    friend void KNewPasswordWidget_SuperDropEvent(KNewPasswordWidget* self, QDropEvent* event);
    friend void KNewPasswordWidget_SuperShowEvent(KNewPasswordWidget* self, QShowEvent* event);
    friend void KNewPasswordWidget_SuperHideEvent(KNewPasswordWidget* self, QHideEvent* event);
    friend bool KNewPasswordWidget_SuperNativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNewPasswordWidget_SuperChangeEvent(KNewPasswordWidget* self, QEvent* param1);
    friend int KNewPasswordWidget_SuperMetric(const KNewPasswordWidget* self, int param1);
    friend void KNewPasswordWidget_SuperInitPainter(const KNewPasswordWidget* self, QPainter* painter);
    friend QPaintDevice* KNewPasswordWidget_SuperRedirected(const KNewPasswordWidget* self, QPoint* offset);
    friend QPainter* KNewPasswordWidget_SuperSharedPainter(const KNewPasswordWidget* self);
    friend void KNewPasswordWidget_SuperInputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1);
    friend bool KNewPasswordWidget_SuperFocusNextPrevChild(KNewPasswordWidget* self, bool next);
    friend void KNewPasswordWidget_SuperTimerEvent(KNewPasswordWidget* self, QTimerEvent* event);
    friend void KNewPasswordWidget_SuperChildEvent(KNewPasswordWidget* self, QChildEvent* event);
    friend void KNewPasswordWidget_SuperCustomEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_SuperConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_SuperDisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
};

#endif
