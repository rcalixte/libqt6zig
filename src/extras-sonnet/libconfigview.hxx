#pragma once
#ifndef EXTRAS_SONNET_LIBCONFIGVIEW_HXX
#define EXTRAS_SONNET_LIBCONFIGVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigView
class VirtualSonnetConfigView final : public Sonnet::ConfigView {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__ConfigView_MetaObject_Callback = QMetaObject* (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_Metacast_Callback = void* (*)(Sonnet__ConfigView*, const char*);
    using Sonnet__ConfigView_Metacall_Callback = int (*)(Sonnet__ConfigView*, int, int, void**);
    using Sonnet__ConfigView_DevType_Callback = int (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_SetVisible_Callback = void (*)(Sonnet__ConfigView*, bool);
    using Sonnet__ConfigView_SizeHint_Callback = QSize* (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_MinimumSizeHint_Callback = QSize* (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_HeightForWidth_Callback = int (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_HasHeightForWidth_Callback = bool (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_PaintEngine_Callback = QPaintEngine* (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_Event_Callback = bool (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_MousePressEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_WheelEvent_Callback = void (*)(Sonnet__ConfigView*, QWheelEvent*);
    using Sonnet__ConfigView_KeyPressEvent_Callback = void (*)(Sonnet__ConfigView*, QKeyEvent*);
    using Sonnet__ConfigView_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigView*, QKeyEvent*);
    using Sonnet__ConfigView_FocusInEvent_Callback = void (*)(Sonnet__ConfigView*, QFocusEvent*);
    using Sonnet__ConfigView_FocusOutEvent_Callback = void (*)(Sonnet__ConfigView*, QFocusEvent*);
    using Sonnet__ConfigView_EnterEvent_Callback = void (*)(Sonnet__ConfigView*, QEnterEvent*);
    using Sonnet__ConfigView_LeaveEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_PaintEvent_Callback = void (*)(Sonnet__ConfigView*, QPaintEvent*);
    using Sonnet__ConfigView_MoveEvent_Callback = void (*)(Sonnet__ConfigView*, QMoveEvent*);
    using Sonnet__ConfigView_ResizeEvent_Callback = void (*)(Sonnet__ConfigView*, QResizeEvent*);
    using Sonnet__ConfigView_CloseEvent_Callback = void (*)(Sonnet__ConfigView*, QCloseEvent*);
    using Sonnet__ConfigView_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigView*, QContextMenuEvent*);
    using Sonnet__ConfigView_TabletEvent_Callback = void (*)(Sonnet__ConfigView*, QTabletEvent*);
    using Sonnet__ConfigView_ActionEvent_Callback = void (*)(Sonnet__ConfigView*, QActionEvent*);
    using Sonnet__ConfigView_DragEnterEvent_Callback = void (*)(Sonnet__ConfigView*, QDragEnterEvent*);
    using Sonnet__ConfigView_DragMoveEvent_Callback = void (*)(Sonnet__ConfigView*, QDragMoveEvent*);
    using Sonnet__ConfigView_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigView*, QDragLeaveEvent*);
    using Sonnet__ConfigView_DropEvent_Callback = void (*)(Sonnet__ConfigView*, QDropEvent*);
    using Sonnet__ConfigView_ShowEvent_Callback = void (*)(Sonnet__ConfigView*, QShowEvent*);
    using Sonnet__ConfigView_HideEvent_Callback = void (*)(Sonnet__ConfigView*, QHideEvent*);
    using Sonnet__ConfigView_NativeEvent_Callback = bool (*)(Sonnet__ConfigView*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigView_ChangeEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_Metric_Callback = int (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_InitPainter_Callback = void (*)(const Sonnet__ConfigView*, QPainter*);
    using Sonnet__ConfigView_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigView*, QPoint*);
    using Sonnet__ConfigView_SharedPainter_Callback = QPainter* (*)(const Sonnet__ConfigView*);
    using Sonnet__ConfigView_InputMethodEvent_Callback = void (*)(Sonnet__ConfigView*, QInputMethodEvent*);
    using Sonnet__ConfigView_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigView*, bool);
    using Sonnet__ConfigView_EventFilter_Callback = bool (*)(Sonnet__ConfigView*, QObject*, QEvent*);
    using Sonnet__ConfigView_TimerEvent_Callback = void (*)(Sonnet__ConfigView*, QTimerEvent*);
    using Sonnet__ConfigView_ChildEvent_Callback = void (*)(Sonnet__ConfigView*, QChildEvent*);
    using Sonnet__ConfigView_CustomEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_ConnectNotify_Callback = void (*)(Sonnet__ConfigView*, QMetaMethod*);
    using Sonnet__ConfigView_DisconnectNotify_Callback = void (*)(Sonnet__ConfigView*, QMetaMethod*);
    using Sonnet::ConfigView::create;
    using Sonnet::ConfigView::destroy;
    using Sonnet::ConfigView::focusNextChild;
    using Sonnet::ConfigView::focusPreviousChild;
    using Sonnet::ConfigView::getDecodedMetricF;
    using Sonnet::ConfigView::isSignalConnected;
    using Sonnet::ConfigView::receivers;
    using Sonnet::ConfigView::sender;
    using Sonnet::ConfigView::senderSignalIndex;
    using Sonnet::ConfigView::updateMicroFocus;

    // Instance callback storage
    Sonnet__ConfigView_MetaObject_Callback sonnet__configview_metaobject_callback = nullptr;
    Sonnet__ConfigView_Metacast_Callback sonnet__configview_metacast_callback = nullptr;
    Sonnet__ConfigView_Metacall_Callback sonnet__configview_metacall_callback = nullptr;
    Sonnet__ConfigView_DevType_Callback sonnet__configview_devtype_callback = nullptr;
    Sonnet__ConfigView_SetVisible_Callback sonnet__configview_setvisible_callback = nullptr;
    Sonnet__ConfigView_SizeHint_Callback sonnet__configview_sizehint_callback = nullptr;
    Sonnet__ConfigView_MinimumSizeHint_Callback sonnet__configview_minimumsizehint_callback = nullptr;
    Sonnet__ConfigView_HeightForWidth_Callback sonnet__configview_heightforwidth_callback = nullptr;
    Sonnet__ConfigView_HasHeightForWidth_Callback sonnet__configview_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigView_PaintEngine_Callback sonnet__configview_paintengine_callback = nullptr;
    Sonnet__ConfigView_Event_Callback sonnet__configview_event_callback = nullptr;
    Sonnet__ConfigView_MousePressEvent_Callback sonnet__configview_mousepressevent_callback = nullptr;
    Sonnet__ConfigView_MouseReleaseEvent_Callback sonnet__configview_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigView_MouseDoubleClickEvent_Callback sonnet__configview_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigView_MouseMoveEvent_Callback sonnet__configview_mousemoveevent_callback = nullptr;
    Sonnet__ConfigView_WheelEvent_Callback sonnet__configview_wheelevent_callback = nullptr;
    Sonnet__ConfigView_KeyPressEvent_Callback sonnet__configview_keypressevent_callback = nullptr;
    Sonnet__ConfigView_KeyReleaseEvent_Callback sonnet__configview_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigView_FocusInEvent_Callback sonnet__configview_focusinevent_callback = nullptr;
    Sonnet__ConfigView_FocusOutEvent_Callback sonnet__configview_focusoutevent_callback = nullptr;
    Sonnet__ConfigView_EnterEvent_Callback sonnet__configview_enterevent_callback = nullptr;
    Sonnet__ConfigView_LeaveEvent_Callback sonnet__configview_leaveevent_callback = nullptr;
    Sonnet__ConfigView_PaintEvent_Callback sonnet__configview_paintevent_callback = nullptr;
    Sonnet__ConfigView_MoveEvent_Callback sonnet__configview_moveevent_callback = nullptr;
    Sonnet__ConfigView_ResizeEvent_Callback sonnet__configview_resizeevent_callback = nullptr;
    Sonnet__ConfigView_CloseEvent_Callback sonnet__configview_closeevent_callback = nullptr;
    Sonnet__ConfigView_ContextMenuEvent_Callback sonnet__configview_contextmenuevent_callback = nullptr;
    Sonnet__ConfigView_TabletEvent_Callback sonnet__configview_tabletevent_callback = nullptr;
    Sonnet__ConfigView_ActionEvent_Callback sonnet__configview_actionevent_callback = nullptr;
    Sonnet__ConfigView_DragEnterEvent_Callback sonnet__configview_dragenterevent_callback = nullptr;
    Sonnet__ConfigView_DragMoveEvent_Callback sonnet__configview_dragmoveevent_callback = nullptr;
    Sonnet__ConfigView_DragLeaveEvent_Callback sonnet__configview_dragleaveevent_callback = nullptr;
    Sonnet__ConfigView_DropEvent_Callback sonnet__configview_dropevent_callback = nullptr;
    Sonnet__ConfigView_ShowEvent_Callback sonnet__configview_showevent_callback = nullptr;
    Sonnet__ConfigView_HideEvent_Callback sonnet__configview_hideevent_callback = nullptr;
    Sonnet__ConfigView_NativeEvent_Callback sonnet__configview_nativeevent_callback = nullptr;
    Sonnet__ConfigView_ChangeEvent_Callback sonnet__configview_changeevent_callback = nullptr;
    Sonnet__ConfigView_Metric_Callback sonnet__configview_metric_callback = nullptr;
    Sonnet__ConfigView_InitPainter_Callback sonnet__configview_initpainter_callback = nullptr;
    Sonnet__ConfigView_Redirected_Callback sonnet__configview_redirected_callback = nullptr;
    Sonnet__ConfigView_SharedPainter_Callback sonnet__configview_sharedpainter_callback = nullptr;
    Sonnet__ConfigView_InputMethodEvent_Callback sonnet__configview_inputmethodevent_callback = nullptr;
    Sonnet__ConfigView_InputMethodQuery_Callback sonnet__configview_inputmethodquery_callback = nullptr;
    Sonnet__ConfigView_FocusNextPrevChild_Callback sonnet__configview_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigView_EventFilter_Callback sonnet__configview_eventfilter_callback = nullptr;
    Sonnet__ConfigView_TimerEvent_Callback sonnet__configview_timerevent_callback = nullptr;
    Sonnet__ConfigView_ChildEvent_Callback sonnet__configview_childevent_callback = nullptr;
    Sonnet__ConfigView_CustomEvent_Callback sonnet__configview_customevent_callback = nullptr;
    Sonnet__ConfigView_ConnectNotify_Callback sonnet__configview_connectnotify_callback = nullptr;
    Sonnet__ConfigView_DisconnectNotify_Callback sonnet__configview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::ConfigView {
        using Sonnet::ConfigView::actionEvent;
        using Sonnet::ConfigView::changeEvent;
        using Sonnet::ConfigView::childEvent;
        using Sonnet::ConfigView::closeEvent;
        using Sonnet::ConfigView::connectNotify;
        using Sonnet::ConfigView::contextMenuEvent;
        using Sonnet::ConfigView::customEvent;
        using Sonnet::ConfigView::disconnectNotify;
        using Sonnet::ConfigView::dragEnterEvent;
        using Sonnet::ConfigView::dragLeaveEvent;
        using Sonnet::ConfigView::dragMoveEvent;
        using Sonnet::ConfigView::dropEvent;
        using Sonnet::ConfigView::enterEvent;
        using Sonnet::ConfigView::event;
        using Sonnet::ConfigView::focusInEvent;
        using Sonnet::ConfigView::focusNextPrevChild;
        using Sonnet::ConfigView::focusOutEvent;
        using Sonnet::ConfigView::hideEvent;
        using Sonnet::ConfigView::initPainter;
        using Sonnet::ConfigView::inputMethodEvent;
        using Sonnet::ConfigView::keyPressEvent;
        using Sonnet::ConfigView::keyReleaseEvent;
        using Sonnet::ConfigView::leaveEvent;
        using Sonnet::ConfigView::metric;
        using Sonnet::ConfigView::mouseDoubleClickEvent;
        using Sonnet::ConfigView::mouseMoveEvent;
        using Sonnet::ConfigView::mousePressEvent;
        using Sonnet::ConfigView::mouseReleaseEvent;
        using Sonnet::ConfigView::moveEvent;
        using Sonnet::ConfigView::nativeEvent;
        using Sonnet::ConfigView::paintEvent;
        using Sonnet::ConfigView::redirected;
        using Sonnet::ConfigView::resizeEvent;
        using Sonnet::ConfigView::sharedPainter;
        using Sonnet::ConfigView::showEvent;
        using Sonnet::ConfigView::tabletEvent;
        using Sonnet::ConfigView::timerEvent;
        using Sonnet::ConfigView::wheelEvent;
    };

    VirtualSonnetConfigView(QWidget* parent) : Sonnet::ConfigView(parent) {};
    VirtualSonnetConfigView() : Sonnet::ConfigView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__configview_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__configview_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__configview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__configview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__configview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configview_devtype_callback) {
            int callback_ret = sonnet__configview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configview_setvisible_callback) {
            bool cbval1 = visible;
            sonnet__configview_setvisible_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configview_sizehint_callback) {
            QSize* callback_ret = sonnet__configview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configview_minimumsizehint_callback) {
            QSize* callback_ret = sonnet__configview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = sonnet__configview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configview_hasheightforwidth_callback) {
            bool callback_ret = sonnet__configview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configview_paintengine_callback) {
            QPaintEngine* callback_ret = sonnet__configview_paintengine_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__configview_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configview_mousepressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configview_mousemoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            sonnet__configview_wheelevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (sonnet__configview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__configview_keypressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__configview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configview_focusinevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configview_focusoutevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            sonnet__configview_enterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configview_leaveevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configview_leaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            sonnet__configview_paintevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            sonnet__configview_moveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (sonnet__configview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            sonnet__configview_resizeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__configview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            sonnet__configview_closeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (sonnet__configview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            sonnet__configview_contextmenuevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            sonnet__configview_tabletevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            sonnet__configview_actionevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            sonnet__configview_dragenterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            sonnet__configview_dragmoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            sonnet__configview_dragleaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            sonnet__configview_dropevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (sonnet__configview_showevent_callback) {
            QShowEvent* cbval1 = event;
            sonnet__configview_showevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            sonnet__configview_hideevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = sonnet__configview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Sonnet__ConfigView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configview_changeevent_callback) {
            QEvent* cbval1 = param1;
            sonnet__configview_changeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = sonnet__configview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configview_initpainter_callback) {
            QPainter* cbval1 = painter;
            sonnet__configview_initpainter_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = sonnet__configview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configview_sharedpainter_callback) {
            QPainter* callback_ret = sonnet__configview_sharedpainter_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            sonnet__configview_inputmethodevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = sonnet__configview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigView::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = sonnet__configview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__configview_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__configview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__ConfigView::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__configview_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configview_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__configview_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configview_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configview_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configview_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configview_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigView::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Sonnet__ConfigView_SuperEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_SuperMousePressEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_SuperMouseReleaseEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_SuperMouseDoubleClickEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_SuperMouseMoveEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_SuperWheelEvent(Sonnet::ConfigView* self, QWheelEvent* event);
    friend void Sonnet__ConfigView_SuperKeyPressEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_SuperKeyReleaseEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_SuperFocusInEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_SuperFocusOutEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_SuperEnterEvent(Sonnet::ConfigView* self, QEnterEvent* event);
    friend void Sonnet__ConfigView_SuperLeaveEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_SuperPaintEvent(Sonnet::ConfigView* self, QPaintEvent* event);
    friend void Sonnet__ConfigView_SuperMoveEvent(Sonnet::ConfigView* self, QMoveEvent* event);
    friend void Sonnet__ConfigView_SuperResizeEvent(Sonnet::ConfigView* self, QResizeEvent* event);
    friend void Sonnet__ConfigView_SuperCloseEvent(Sonnet::ConfigView* self, QCloseEvent* event);
    friend void Sonnet__ConfigView_SuperContextMenuEvent(Sonnet::ConfigView* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigView_SuperTabletEvent(Sonnet::ConfigView* self, QTabletEvent* event);
    friend void Sonnet__ConfigView_SuperActionEvent(Sonnet::ConfigView* self, QActionEvent* event);
    friend void Sonnet__ConfigView_SuperDragEnterEvent(Sonnet::ConfigView* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigView_SuperDragMoveEvent(Sonnet::ConfigView* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigView_SuperDragLeaveEvent(Sonnet::ConfigView* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigView_SuperDropEvent(Sonnet::ConfigView* self, QDropEvent* event);
    friend void Sonnet__ConfigView_SuperShowEvent(Sonnet::ConfigView* self, QShowEvent* event);
    friend void Sonnet__ConfigView_SuperHideEvent(Sonnet::ConfigView* self, QHideEvent* event);
    friend bool Sonnet__ConfigView_SuperNativeEvent(Sonnet::ConfigView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigView_SuperChangeEvent(Sonnet::ConfigView* self, QEvent* param1);
    friend int Sonnet__ConfigView_SuperMetric(const Sonnet::ConfigView* self, int param1);
    friend void Sonnet__ConfigView_SuperInitPainter(const Sonnet::ConfigView* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigView_SuperRedirected(const Sonnet::ConfigView* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigView_SuperSharedPainter(const Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_SuperInputMethodEvent(Sonnet::ConfigView* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigView_SuperFocusNextPrevChild(Sonnet::ConfigView* self, bool next);
    friend void Sonnet__ConfigView_SuperTimerEvent(Sonnet::ConfigView* self, QTimerEvent* event);
    friend void Sonnet__ConfigView_SuperChildEvent(Sonnet::ConfigView* self, QChildEvent* event);
    friend void Sonnet__ConfigView_SuperCustomEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_SuperConnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigView_SuperDisconnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
};

#endif
