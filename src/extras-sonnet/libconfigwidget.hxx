#pragma once
#ifndef EXTRAS_SONNET_LIBCONFIGWIDGET_HXX
#define EXTRAS_SONNET_LIBCONFIGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigWidget
class VirtualSonnetConfigWidget final : public Sonnet::ConfigWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__ConfigWidget_MetaObject_Callback = QMetaObject* (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_Metacast_Callback = void* (*)(Sonnet__ConfigWidget*, const char*);
    using Sonnet__ConfigWidget_Metacall_Callback = int (*)(Sonnet__ConfigWidget*, int, int, void**);
    using Sonnet__ConfigWidget_DevType_Callback = int (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_SetVisible_Callback = void (*)(Sonnet__ConfigWidget*, bool);
    using Sonnet__ConfigWidget_SizeHint_Callback = QSize* (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_MinimumSizeHint_Callback = QSize* (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_HeightForWidth_Callback = int (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_HasHeightForWidth_Callback = bool (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_PaintEngine_Callback = QPaintEngine* (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_Event_Callback = bool (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_MousePressEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_WheelEvent_Callback = void (*)(Sonnet__ConfigWidget*, QWheelEvent*);
    using Sonnet__ConfigWidget_KeyPressEvent_Callback = void (*)(Sonnet__ConfigWidget*, QKeyEvent*);
    using Sonnet__ConfigWidget_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QKeyEvent*);
    using Sonnet__ConfigWidget_FocusInEvent_Callback = void (*)(Sonnet__ConfigWidget*, QFocusEvent*);
    using Sonnet__ConfigWidget_FocusOutEvent_Callback = void (*)(Sonnet__ConfigWidget*, QFocusEvent*);
    using Sonnet__ConfigWidget_EnterEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEnterEvent*);
    using Sonnet__ConfigWidget_LeaveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_PaintEvent_Callback = void (*)(Sonnet__ConfigWidget*, QPaintEvent*);
    using Sonnet__ConfigWidget_MoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMoveEvent*);
    using Sonnet__ConfigWidget_ResizeEvent_Callback = void (*)(Sonnet__ConfigWidget*, QResizeEvent*);
    using Sonnet__ConfigWidget_CloseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QCloseEvent*);
    using Sonnet__ConfigWidget_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigWidget*, QContextMenuEvent*);
    using Sonnet__ConfigWidget_TabletEvent_Callback = void (*)(Sonnet__ConfigWidget*, QTabletEvent*);
    using Sonnet__ConfigWidget_ActionEvent_Callback = void (*)(Sonnet__ConfigWidget*, QActionEvent*);
    using Sonnet__ConfigWidget_DragEnterEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragEnterEvent*);
    using Sonnet__ConfigWidget_DragMoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragMoveEvent*);
    using Sonnet__ConfigWidget_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragLeaveEvent*);
    using Sonnet__ConfigWidget_DropEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDropEvent*);
    using Sonnet__ConfigWidget_ShowEvent_Callback = void (*)(Sonnet__ConfigWidget*, QShowEvent*);
    using Sonnet__ConfigWidget_HideEvent_Callback = void (*)(Sonnet__ConfigWidget*, QHideEvent*);
    using Sonnet__ConfigWidget_NativeEvent_Callback = bool (*)(Sonnet__ConfigWidget*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigWidget_ChangeEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_Metric_Callback = int (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_InitPainter_Callback = void (*)(const Sonnet__ConfigWidget*, QPainter*);
    using Sonnet__ConfigWidget_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigWidget*, QPoint*);
    using Sonnet__ConfigWidget_SharedPainter_Callback = QPainter* (*)(const Sonnet__ConfigWidget*);
    using Sonnet__ConfigWidget_InputMethodEvent_Callback = void (*)(Sonnet__ConfigWidget*, QInputMethodEvent*);
    using Sonnet__ConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigWidget*, bool);
    using Sonnet__ConfigWidget_EventFilter_Callback = bool (*)(Sonnet__ConfigWidget*, QObject*, QEvent*);
    using Sonnet__ConfigWidget_TimerEvent_Callback = void (*)(Sonnet__ConfigWidget*, QTimerEvent*);
    using Sonnet__ConfigWidget_ChildEvent_Callback = void (*)(Sonnet__ConfigWidget*, QChildEvent*);
    using Sonnet__ConfigWidget_CustomEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_ConnectNotify_Callback = void (*)(Sonnet__ConfigWidget*, QMetaMethod*);
    using Sonnet__ConfigWidget_DisconnectNotify_Callback = void (*)(Sonnet__ConfigWidget*, QMetaMethod*);
    using Sonnet::ConfigWidget::create;
    using Sonnet::ConfigWidget::destroy;
    using Sonnet::ConfigWidget::focusNextChild;
    using Sonnet::ConfigWidget::focusPreviousChild;
    using Sonnet::ConfigWidget::getDecodedMetricF;
    using Sonnet::ConfigWidget::isSignalConnected;
    using Sonnet::ConfigWidget::receivers;
    using Sonnet::ConfigWidget::sender;
    using Sonnet::ConfigWidget::senderSignalIndex;
    using Sonnet::ConfigWidget::slotIgnoreWordAdded;
    using Sonnet::ConfigWidget::slotIgnoreWordRemoved;
    using Sonnet::ConfigWidget::updateMicroFocus;

    // Instance callback storage
    Sonnet__ConfigWidget_MetaObject_Callback sonnet__configwidget_metaobject_callback = nullptr;
    Sonnet__ConfigWidget_Metacast_Callback sonnet__configwidget_metacast_callback = nullptr;
    Sonnet__ConfigWidget_Metacall_Callback sonnet__configwidget_metacall_callback = nullptr;
    Sonnet__ConfigWidget_DevType_Callback sonnet__configwidget_devtype_callback = nullptr;
    Sonnet__ConfigWidget_SetVisible_Callback sonnet__configwidget_setvisible_callback = nullptr;
    Sonnet__ConfigWidget_SizeHint_Callback sonnet__configwidget_sizehint_callback = nullptr;
    Sonnet__ConfigWidget_MinimumSizeHint_Callback sonnet__configwidget_minimumsizehint_callback = nullptr;
    Sonnet__ConfigWidget_HeightForWidth_Callback sonnet__configwidget_heightforwidth_callback = nullptr;
    Sonnet__ConfigWidget_HasHeightForWidth_Callback sonnet__configwidget_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigWidget_PaintEngine_Callback sonnet__configwidget_paintengine_callback = nullptr;
    Sonnet__ConfigWidget_Event_Callback sonnet__configwidget_event_callback = nullptr;
    Sonnet__ConfigWidget_MousePressEvent_Callback sonnet__configwidget_mousepressevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseReleaseEvent_Callback sonnet__configwidget_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback sonnet__configwidget_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseMoveEvent_Callback sonnet__configwidget_mousemoveevent_callback = nullptr;
    Sonnet__ConfigWidget_WheelEvent_Callback sonnet__configwidget_wheelevent_callback = nullptr;
    Sonnet__ConfigWidget_KeyPressEvent_Callback sonnet__configwidget_keypressevent_callback = nullptr;
    Sonnet__ConfigWidget_KeyReleaseEvent_Callback sonnet__configwidget_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigWidget_FocusInEvent_Callback sonnet__configwidget_focusinevent_callback = nullptr;
    Sonnet__ConfigWidget_FocusOutEvent_Callback sonnet__configwidget_focusoutevent_callback = nullptr;
    Sonnet__ConfigWidget_EnterEvent_Callback sonnet__configwidget_enterevent_callback = nullptr;
    Sonnet__ConfigWidget_LeaveEvent_Callback sonnet__configwidget_leaveevent_callback = nullptr;
    Sonnet__ConfigWidget_PaintEvent_Callback sonnet__configwidget_paintevent_callback = nullptr;
    Sonnet__ConfigWidget_MoveEvent_Callback sonnet__configwidget_moveevent_callback = nullptr;
    Sonnet__ConfigWidget_ResizeEvent_Callback sonnet__configwidget_resizeevent_callback = nullptr;
    Sonnet__ConfigWidget_CloseEvent_Callback sonnet__configwidget_closeevent_callback = nullptr;
    Sonnet__ConfigWidget_ContextMenuEvent_Callback sonnet__configwidget_contextmenuevent_callback = nullptr;
    Sonnet__ConfigWidget_TabletEvent_Callback sonnet__configwidget_tabletevent_callback = nullptr;
    Sonnet__ConfigWidget_ActionEvent_Callback sonnet__configwidget_actionevent_callback = nullptr;
    Sonnet__ConfigWidget_DragEnterEvent_Callback sonnet__configwidget_dragenterevent_callback = nullptr;
    Sonnet__ConfigWidget_DragMoveEvent_Callback sonnet__configwidget_dragmoveevent_callback = nullptr;
    Sonnet__ConfigWidget_DragLeaveEvent_Callback sonnet__configwidget_dragleaveevent_callback = nullptr;
    Sonnet__ConfigWidget_DropEvent_Callback sonnet__configwidget_dropevent_callback = nullptr;
    Sonnet__ConfigWidget_ShowEvent_Callback sonnet__configwidget_showevent_callback = nullptr;
    Sonnet__ConfigWidget_HideEvent_Callback sonnet__configwidget_hideevent_callback = nullptr;
    Sonnet__ConfigWidget_NativeEvent_Callback sonnet__configwidget_nativeevent_callback = nullptr;
    Sonnet__ConfigWidget_ChangeEvent_Callback sonnet__configwidget_changeevent_callback = nullptr;
    Sonnet__ConfigWidget_Metric_Callback sonnet__configwidget_metric_callback = nullptr;
    Sonnet__ConfigWidget_InitPainter_Callback sonnet__configwidget_initpainter_callback = nullptr;
    Sonnet__ConfigWidget_Redirected_Callback sonnet__configwidget_redirected_callback = nullptr;
    Sonnet__ConfigWidget_SharedPainter_Callback sonnet__configwidget_sharedpainter_callback = nullptr;
    Sonnet__ConfigWidget_InputMethodEvent_Callback sonnet__configwidget_inputmethodevent_callback = nullptr;
    Sonnet__ConfigWidget_InputMethodQuery_Callback sonnet__configwidget_inputmethodquery_callback = nullptr;
    Sonnet__ConfigWidget_FocusNextPrevChild_Callback sonnet__configwidget_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigWidget_EventFilter_Callback sonnet__configwidget_eventfilter_callback = nullptr;
    Sonnet__ConfigWidget_TimerEvent_Callback sonnet__configwidget_timerevent_callback = nullptr;
    Sonnet__ConfigWidget_ChildEvent_Callback sonnet__configwidget_childevent_callback = nullptr;
    Sonnet__ConfigWidget_CustomEvent_Callback sonnet__configwidget_customevent_callback = nullptr;
    Sonnet__ConfigWidget_ConnectNotify_Callback sonnet__configwidget_connectnotify_callback = nullptr;
    Sonnet__ConfigWidget_DisconnectNotify_Callback sonnet__configwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::ConfigWidget {
        using Sonnet::ConfigWidget::actionEvent;
        using Sonnet::ConfigWidget::changeEvent;
        using Sonnet::ConfigWidget::childEvent;
        using Sonnet::ConfigWidget::closeEvent;
        using Sonnet::ConfigWidget::connectNotify;
        using Sonnet::ConfigWidget::contextMenuEvent;
        using Sonnet::ConfigWidget::customEvent;
        using Sonnet::ConfigWidget::disconnectNotify;
        using Sonnet::ConfigWidget::dragEnterEvent;
        using Sonnet::ConfigWidget::dragLeaveEvent;
        using Sonnet::ConfigWidget::dragMoveEvent;
        using Sonnet::ConfigWidget::dropEvent;
        using Sonnet::ConfigWidget::enterEvent;
        using Sonnet::ConfigWidget::event;
        using Sonnet::ConfigWidget::focusInEvent;
        using Sonnet::ConfigWidget::focusNextPrevChild;
        using Sonnet::ConfigWidget::focusOutEvent;
        using Sonnet::ConfigWidget::hideEvent;
        using Sonnet::ConfigWidget::initPainter;
        using Sonnet::ConfigWidget::inputMethodEvent;
        using Sonnet::ConfigWidget::keyPressEvent;
        using Sonnet::ConfigWidget::keyReleaseEvent;
        using Sonnet::ConfigWidget::leaveEvent;
        using Sonnet::ConfigWidget::metric;
        using Sonnet::ConfigWidget::mouseDoubleClickEvent;
        using Sonnet::ConfigWidget::mouseMoveEvent;
        using Sonnet::ConfigWidget::mousePressEvent;
        using Sonnet::ConfigWidget::mouseReleaseEvent;
        using Sonnet::ConfigWidget::moveEvent;
        using Sonnet::ConfigWidget::nativeEvent;
        using Sonnet::ConfigWidget::paintEvent;
        using Sonnet::ConfigWidget::redirected;
        using Sonnet::ConfigWidget::resizeEvent;
        using Sonnet::ConfigWidget::sharedPainter;
        using Sonnet::ConfigWidget::showEvent;
        using Sonnet::ConfigWidget::tabletEvent;
        using Sonnet::ConfigWidget::timerEvent;
        using Sonnet::ConfigWidget::wheelEvent;
    };

    VirtualSonnetConfigWidget(QWidget* parent) : Sonnet::ConfigWidget(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__configwidget_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__configwidget_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__configwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__configwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__configwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configwidget_devtype_callback) {
            int callback_ret = sonnet__configwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configwidget_setvisible_callback) {
            bool cbval1 = visible;
            sonnet__configwidget_setvisible_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configwidget_sizehint_callback) {
            QSize* callback_ret = sonnet__configwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configwidget_minimumsizehint_callback) {
            QSize* callback_ret = sonnet__configwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = sonnet__configwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configwidget_hasheightforwidth_callback) {
            bool callback_ret = sonnet__configwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configwidget_paintengine_callback) {
            QPaintEngine* callback_ret = sonnet__configwidget_paintengine_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__configwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            sonnet__configwidget_wheelevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (sonnet__configwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__configwidget_keypressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__configwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configwidget_focusinevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            sonnet__configwidget_enterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configwidget_leaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            sonnet__configwidget_paintevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            sonnet__configwidget_moveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (sonnet__configwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            sonnet__configwidget_resizeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__configwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            sonnet__configwidget_closeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (sonnet__configwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            sonnet__configwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            sonnet__configwidget_tabletevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            sonnet__configwidget_actionevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            sonnet__configwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            sonnet__configwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            sonnet__configwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            sonnet__configwidget_dropevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (sonnet__configwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            sonnet__configwidget_showevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            sonnet__configwidget_hideevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = sonnet__configwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            sonnet__configwidget_changeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = sonnet__configwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            sonnet__configwidget_initpainter_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = sonnet__configwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configwidget_sharedpainter_callback) {
            QPainter* callback_ret = sonnet__configwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            sonnet__configwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = sonnet__configwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = sonnet__configwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__configwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__configwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__ConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__configwidget_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__configwidget_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configwidget_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configwidget_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configwidget_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Sonnet__ConfigWidget_SuperEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_SuperMousePressEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_SuperMouseReleaseEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_SuperMouseDoubleClickEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_SuperMouseMoveEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_SuperWheelEvent(Sonnet::ConfigWidget* self, QWheelEvent* event);
    friend void Sonnet__ConfigWidget_SuperKeyPressEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_SuperKeyReleaseEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_SuperFocusInEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_SuperFocusOutEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_SuperEnterEvent(Sonnet::ConfigWidget* self, QEnterEvent* event);
    friend void Sonnet__ConfigWidget_SuperLeaveEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_SuperPaintEvent(Sonnet::ConfigWidget* self, QPaintEvent* event);
    friend void Sonnet__ConfigWidget_SuperMoveEvent(Sonnet::ConfigWidget* self, QMoveEvent* event);
    friend void Sonnet__ConfigWidget_SuperResizeEvent(Sonnet::ConfigWidget* self, QResizeEvent* event);
    friend void Sonnet__ConfigWidget_SuperCloseEvent(Sonnet::ConfigWidget* self, QCloseEvent* event);
    friend void Sonnet__ConfigWidget_SuperContextMenuEvent(Sonnet::ConfigWidget* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigWidget_SuperTabletEvent(Sonnet::ConfigWidget* self, QTabletEvent* event);
    friend void Sonnet__ConfigWidget_SuperActionEvent(Sonnet::ConfigWidget* self, QActionEvent* event);
    friend void Sonnet__ConfigWidget_SuperDragEnterEvent(Sonnet::ConfigWidget* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigWidget_SuperDragMoveEvent(Sonnet::ConfigWidget* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigWidget_SuperDragLeaveEvent(Sonnet::ConfigWidget* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigWidget_SuperDropEvent(Sonnet::ConfigWidget* self, QDropEvent* event);
    friend void Sonnet__ConfigWidget_SuperShowEvent(Sonnet::ConfigWidget* self, QShowEvent* event);
    friend void Sonnet__ConfigWidget_SuperHideEvent(Sonnet::ConfigWidget* self, QHideEvent* event);
    friend bool Sonnet__ConfigWidget_SuperNativeEvent(Sonnet::ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigWidget_SuperChangeEvent(Sonnet::ConfigWidget* self, QEvent* param1);
    friend int Sonnet__ConfigWidget_SuperMetric(const Sonnet::ConfigWidget* self, int param1);
    friend void Sonnet__ConfigWidget_SuperInitPainter(const Sonnet::ConfigWidget* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigWidget_SuperRedirected(const Sonnet::ConfigWidget* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigWidget_SuperSharedPainter(const Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_SuperInputMethodEvent(Sonnet::ConfigWidget* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigWidget_SuperFocusNextPrevChild(Sonnet::ConfigWidget* self, bool next);
    friend void Sonnet__ConfigWidget_SuperTimerEvent(Sonnet::ConfigWidget* self, QTimerEvent* event);
    friend void Sonnet__ConfigWidget_SuperChildEvent(Sonnet::ConfigWidget* self, QChildEvent* event);
    friend void Sonnet__ConfigWidget_SuperCustomEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_SuperConnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigWidget_SuperDisconnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
};

#endif
