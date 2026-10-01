#pragma once
#ifndef EXTRAS_SONNET_LIBDIALOG_HXX
#define EXTRAS_SONNET_LIBDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Dialog
class VirtualSonnetDialog final : public Sonnet::Dialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__Dialog_MetaObject_Callback = QMetaObject* (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_Metacast_Callback = void* (*)(Sonnet__Dialog*, const char*);
    using Sonnet__Dialog_Metacall_Callback = int (*)(Sonnet__Dialog*, int, int, void**);
    using Sonnet__Dialog_SetVisible_Callback = void (*)(Sonnet__Dialog*, bool);
    using Sonnet__Dialog_SizeHint_Callback = QSize* (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_MinimumSizeHint_Callback = QSize* (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_Open_Callback = void (*)(Sonnet__Dialog*);
    using Sonnet__Dialog_Exec_Callback = int (*)(Sonnet__Dialog*);
    using Sonnet__Dialog_Done_Callback = void (*)(Sonnet__Dialog*, int);
    using Sonnet__Dialog_Accept_Callback = void (*)(Sonnet__Dialog*);
    using Sonnet__Dialog_Reject_Callback = void (*)(Sonnet__Dialog*);
    using Sonnet__Dialog_KeyPressEvent_Callback = void (*)(Sonnet__Dialog*, QKeyEvent*);
    using Sonnet__Dialog_CloseEvent_Callback = void (*)(Sonnet__Dialog*, QCloseEvent*);
    using Sonnet__Dialog_ShowEvent_Callback = void (*)(Sonnet__Dialog*, QShowEvent*);
    using Sonnet__Dialog_ResizeEvent_Callback = void (*)(Sonnet__Dialog*, QResizeEvent*);
    using Sonnet__Dialog_ContextMenuEvent_Callback = void (*)(Sonnet__Dialog*, QContextMenuEvent*);
    using Sonnet__Dialog_EventFilter_Callback = bool (*)(Sonnet__Dialog*, QObject*, QEvent*);
    using Sonnet__Dialog_DevType_Callback = int (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_HeightForWidth_Callback = int (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_HasHeightForWidth_Callback = bool (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_PaintEngine_Callback = QPaintEngine* (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_Event_Callback = bool (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_MousePressEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseReleaseEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseDoubleClickEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseMoveEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_WheelEvent_Callback = void (*)(Sonnet__Dialog*, QWheelEvent*);
    using Sonnet__Dialog_KeyReleaseEvent_Callback = void (*)(Sonnet__Dialog*, QKeyEvent*);
    using Sonnet__Dialog_FocusInEvent_Callback = void (*)(Sonnet__Dialog*, QFocusEvent*);
    using Sonnet__Dialog_FocusOutEvent_Callback = void (*)(Sonnet__Dialog*, QFocusEvent*);
    using Sonnet__Dialog_EnterEvent_Callback = void (*)(Sonnet__Dialog*, QEnterEvent*);
    using Sonnet__Dialog_LeaveEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_PaintEvent_Callback = void (*)(Sonnet__Dialog*, QPaintEvent*);
    using Sonnet__Dialog_MoveEvent_Callback = void (*)(Sonnet__Dialog*, QMoveEvent*);
    using Sonnet__Dialog_TabletEvent_Callback = void (*)(Sonnet__Dialog*, QTabletEvent*);
    using Sonnet__Dialog_ActionEvent_Callback = void (*)(Sonnet__Dialog*, QActionEvent*);
    using Sonnet__Dialog_DragEnterEvent_Callback = void (*)(Sonnet__Dialog*, QDragEnterEvent*);
    using Sonnet__Dialog_DragMoveEvent_Callback = void (*)(Sonnet__Dialog*, QDragMoveEvent*);
    using Sonnet__Dialog_DragLeaveEvent_Callback = void (*)(Sonnet__Dialog*, QDragLeaveEvent*);
    using Sonnet__Dialog_DropEvent_Callback = void (*)(Sonnet__Dialog*, QDropEvent*);
    using Sonnet__Dialog_HideEvent_Callback = void (*)(Sonnet__Dialog*, QHideEvent*);
    using Sonnet__Dialog_NativeEvent_Callback = bool (*)(Sonnet__Dialog*, libqt_string, void*, intptr_t*);
    using Sonnet__Dialog_ChangeEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_Metric_Callback = int (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_InitPainter_Callback = void (*)(const Sonnet__Dialog*, QPainter*);
    using Sonnet__Dialog_Redirected_Callback = QPaintDevice* (*)(const Sonnet__Dialog*, QPoint*);
    using Sonnet__Dialog_SharedPainter_Callback = QPainter* (*)(const Sonnet__Dialog*);
    using Sonnet__Dialog_InputMethodEvent_Callback = void (*)(Sonnet__Dialog*, QInputMethodEvent*);
    using Sonnet__Dialog_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_FocusNextPrevChild_Callback = bool (*)(Sonnet__Dialog*, bool);
    using Sonnet__Dialog_TimerEvent_Callback = void (*)(Sonnet__Dialog*, QTimerEvent*);
    using Sonnet__Dialog_ChildEvent_Callback = void (*)(Sonnet__Dialog*, QChildEvent*);
    using Sonnet__Dialog_CustomEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_ConnectNotify_Callback = void (*)(Sonnet__Dialog*, QMetaMethod*);
    using Sonnet__Dialog_DisconnectNotify_Callback = void (*)(Sonnet__Dialog*, QMetaMethod*);
    using Sonnet::Dialog::adjustPosition;
    using Sonnet::Dialog::create;
    using Sonnet::Dialog::destroy;
    using Sonnet::Dialog::focusNextChild;
    using Sonnet::Dialog::focusPreviousChild;
    using Sonnet::Dialog::getDecodedMetricF;
    using Sonnet::Dialog::isSignalConnected;
    using Sonnet::Dialog::receivers;
    using Sonnet::Dialog::sender;
    using Sonnet::Dialog::senderSignalIndex;
    using Sonnet::Dialog::updateMicroFocus;

    // Instance callback storage
    Sonnet__Dialog_MetaObject_Callback sonnet__dialog_metaobject_callback = nullptr;
    Sonnet__Dialog_Metacast_Callback sonnet__dialog_metacast_callback = nullptr;
    Sonnet__Dialog_Metacall_Callback sonnet__dialog_metacall_callback = nullptr;
    Sonnet__Dialog_SetVisible_Callback sonnet__dialog_setvisible_callback = nullptr;
    Sonnet__Dialog_SizeHint_Callback sonnet__dialog_sizehint_callback = nullptr;
    Sonnet__Dialog_MinimumSizeHint_Callback sonnet__dialog_minimumsizehint_callback = nullptr;
    Sonnet__Dialog_Open_Callback sonnet__dialog_open_callback = nullptr;
    Sonnet__Dialog_Exec_Callback sonnet__dialog_exec_callback = nullptr;
    Sonnet__Dialog_Done_Callback sonnet__dialog_done_callback = nullptr;
    Sonnet__Dialog_Accept_Callback sonnet__dialog_accept_callback = nullptr;
    Sonnet__Dialog_Reject_Callback sonnet__dialog_reject_callback = nullptr;
    Sonnet__Dialog_KeyPressEvent_Callback sonnet__dialog_keypressevent_callback = nullptr;
    Sonnet__Dialog_CloseEvent_Callback sonnet__dialog_closeevent_callback = nullptr;
    Sonnet__Dialog_ShowEvent_Callback sonnet__dialog_showevent_callback = nullptr;
    Sonnet__Dialog_ResizeEvent_Callback sonnet__dialog_resizeevent_callback = nullptr;
    Sonnet__Dialog_ContextMenuEvent_Callback sonnet__dialog_contextmenuevent_callback = nullptr;
    Sonnet__Dialog_EventFilter_Callback sonnet__dialog_eventfilter_callback = nullptr;
    Sonnet__Dialog_DevType_Callback sonnet__dialog_devtype_callback = nullptr;
    Sonnet__Dialog_HeightForWidth_Callback sonnet__dialog_heightforwidth_callback = nullptr;
    Sonnet__Dialog_HasHeightForWidth_Callback sonnet__dialog_hasheightforwidth_callback = nullptr;
    Sonnet__Dialog_PaintEngine_Callback sonnet__dialog_paintengine_callback = nullptr;
    Sonnet__Dialog_Event_Callback sonnet__dialog_event_callback = nullptr;
    Sonnet__Dialog_MousePressEvent_Callback sonnet__dialog_mousepressevent_callback = nullptr;
    Sonnet__Dialog_MouseReleaseEvent_Callback sonnet__dialog_mousereleaseevent_callback = nullptr;
    Sonnet__Dialog_MouseDoubleClickEvent_Callback sonnet__dialog_mousedoubleclickevent_callback = nullptr;
    Sonnet__Dialog_MouseMoveEvent_Callback sonnet__dialog_mousemoveevent_callback = nullptr;
    Sonnet__Dialog_WheelEvent_Callback sonnet__dialog_wheelevent_callback = nullptr;
    Sonnet__Dialog_KeyReleaseEvent_Callback sonnet__dialog_keyreleaseevent_callback = nullptr;
    Sonnet__Dialog_FocusInEvent_Callback sonnet__dialog_focusinevent_callback = nullptr;
    Sonnet__Dialog_FocusOutEvent_Callback sonnet__dialog_focusoutevent_callback = nullptr;
    Sonnet__Dialog_EnterEvent_Callback sonnet__dialog_enterevent_callback = nullptr;
    Sonnet__Dialog_LeaveEvent_Callback sonnet__dialog_leaveevent_callback = nullptr;
    Sonnet__Dialog_PaintEvent_Callback sonnet__dialog_paintevent_callback = nullptr;
    Sonnet__Dialog_MoveEvent_Callback sonnet__dialog_moveevent_callback = nullptr;
    Sonnet__Dialog_TabletEvent_Callback sonnet__dialog_tabletevent_callback = nullptr;
    Sonnet__Dialog_ActionEvent_Callback sonnet__dialog_actionevent_callback = nullptr;
    Sonnet__Dialog_DragEnterEvent_Callback sonnet__dialog_dragenterevent_callback = nullptr;
    Sonnet__Dialog_DragMoveEvent_Callback sonnet__dialog_dragmoveevent_callback = nullptr;
    Sonnet__Dialog_DragLeaveEvent_Callback sonnet__dialog_dragleaveevent_callback = nullptr;
    Sonnet__Dialog_DropEvent_Callback sonnet__dialog_dropevent_callback = nullptr;
    Sonnet__Dialog_HideEvent_Callback sonnet__dialog_hideevent_callback = nullptr;
    Sonnet__Dialog_NativeEvent_Callback sonnet__dialog_nativeevent_callback = nullptr;
    Sonnet__Dialog_ChangeEvent_Callback sonnet__dialog_changeevent_callback = nullptr;
    Sonnet__Dialog_Metric_Callback sonnet__dialog_metric_callback = nullptr;
    Sonnet__Dialog_InitPainter_Callback sonnet__dialog_initpainter_callback = nullptr;
    Sonnet__Dialog_Redirected_Callback sonnet__dialog_redirected_callback = nullptr;
    Sonnet__Dialog_SharedPainter_Callback sonnet__dialog_sharedpainter_callback = nullptr;
    Sonnet__Dialog_InputMethodEvent_Callback sonnet__dialog_inputmethodevent_callback = nullptr;
    Sonnet__Dialog_InputMethodQuery_Callback sonnet__dialog_inputmethodquery_callback = nullptr;
    Sonnet__Dialog_FocusNextPrevChild_Callback sonnet__dialog_focusnextprevchild_callback = nullptr;
    Sonnet__Dialog_TimerEvent_Callback sonnet__dialog_timerevent_callback = nullptr;
    Sonnet__Dialog_ChildEvent_Callback sonnet__dialog_childevent_callback = nullptr;
    Sonnet__Dialog_CustomEvent_Callback sonnet__dialog_customevent_callback = nullptr;
    Sonnet__Dialog_ConnectNotify_Callback sonnet__dialog_connectnotify_callback = nullptr;
    Sonnet__Dialog_DisconnectNotify_Callback sonnet__dialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::Dialog {
        using Sonnet::Dialog::actionEvent;
        using Sonnet::Dialog::changeEvent;
        using Sonnet::Dialog::childEvent;
        using Sonnet::Dialog::closeEvent;
        using Sonnet::Dialog::connectNotify;
        using Sonnet::Dialog::contextMenuEvent;
        using Sonnet::Dialog::customEvent;
        using Sonnet::Dialog::disconnectNotify;
        using Sonnet::Dialog::dragEnterEvent;
        using Sonnet::Dialog::dragLeaveEvent;
        using Sonnet::Dialog::dragMoveEvent;
        using Sonnet::Dialog::dropEvent;
        using Sonnet::Dialog::enterEvent;
        using Sonnet::Dialog::event;
        using Sonnet::Dialog::eventFilter;
        using Sonnet::Dialog::focusInEvent;
        using Sonnet::Dialog::focusNextPrevChild;
        using Sonnet::Dialog::focusOutEvent;
        using Sonnet::Dialog::hideEvent;
        using Sonnet::Dialog::initPainter;
        using Sonnet::Dialog::inputMethodEvent;
        using Sonnet::Dialog::keyPressEvent;
        using Sonnet::Dialog::keyReleaseEvent;
        using Sonnet::Dialog::leaveEvent;
        using Sonnet::Dialog::metric;
        using Sonnet::Dialog::mouseDoubleClickEvent;
        using Sonnet::Dialog::mouseMoveEvent;
        using Sonnet::Dialog::mousePressEvent;
        using Sonnet::Dialog::mouseReleaseEvent;
        using Sonnet::Dialog::moveEvent;
        using Sonnet::Dialog::nativeEvent;
        using Sonnet::Dialog::paintEvent;
        using Sonnet::Dialog::redirected;
        using Sonnet::Dialog::resizeEvent;
        using Sonnet::Dialog::sharedPainter;
        using Sonnet::Dialog::showEvent;
        using Sonnet::Dialog::tabletEvent;
        using Sonnet::Dialog::timerEvent;
        using Sonnet::Dialog::wheelEvent;
    };

    VirtualSonnetDialog(Sonnet::BackgroundChecker* checker, QWidget* parent) : Sonnet::Dialog(checker, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__dialog_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__dialog_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__Dialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__dialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__dialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Dialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__dialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__dialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Dialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__dialog_setvisible_callback) {
            bool cbval1 = visible;
            sonnet__dialog_setvisible_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__dialog_sizehint_callback) {
            QSize* callback_ret = sonnet__dialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__Dialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__dialog_minimumsizehint_callback) {
            QSize* callback_ret = sonnet__dialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__Dialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (sonnet__dialog_open_callback) {
            sonnet__dialog_open_callback(this);
            return;
        }
        Sonnet__Dialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (sonnet__dialog_exec_callback) {
            int callback_ret = sonnet__dialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Dialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (sonnet__dialog_done_callback) {
            int cbval1 = param1;
            sonnet__dialog_done_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (sonnet__dialog_accept_callback) {
            sonnet__dialog_accept_callback(this);
            return;
        }
        Sonnet__Dialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (sonnet__dialog_reject_callback) {
            sonnet__dialog_reject_callback(this);
            return;
        }
        Sonnet__Dialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (sonnet__dialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            sonnet__dialog_keypressevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (sonnet__dialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            sonnet__dialog_closeevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (sonnet__dialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            sonnet__dialog_showevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (sonnet__dialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            sonnet__dialog_resizeevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (sonnet__dialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            sonnet__dialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (sonnet__dialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = sonnet__dialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__Dialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__dialog_devtype_callback) {
            int callback_ret = sonnet__dialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Dialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__dialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = sonnet__dialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Dialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__dialog_hasheightforwidth_callback) {
            bool callback_ret = sonnet__dialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return Sonnet__Dialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__dialog_paintengine_callback) {
            QPaintEngine* callback_ret = sonnet__dialog_paintengine_callback(this);
            return callback_ret;
        }
        return Sonnet__Dialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__dialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__dialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Dialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dialog_mousepressevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__dialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            sonnet__dialog_wheelevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__dialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__dialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__dialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__dialog_focusinevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__dialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__dialog_focusoutevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__dialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            sonnet__dialog_enterevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__dialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            sonnet__dialog_leaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__dialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            sonnet__dialog_paintevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__dialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            sonnet__dialog_moveevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__dialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            sonnet__dialog_tabletevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__dialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            sonnet__dialog_actionevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__dialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            sonnet__dialog_dragenterevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__dialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            sonnet__dialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__dialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            sonnet__dialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__dialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            sonnet__dialog_dropevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__dialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            sonnet__dialog_hideevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__dialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = sonnet__dialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Sonnet__Dialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__dialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            sonnet__dialog_changeevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__dialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = sonnet__dialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Dialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__dialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            sonnet__dialog_initpainter_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__dialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = sonnet__dialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Dialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__dialog_sharedpainter_callback) {
            QPainter* callback_ret = sonnet__dialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return Sonnet__Dialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__dialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            sonnet__dialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__dialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = sonnet__dialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__Dialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__dialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = sonnet__dialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Dialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__dialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__dialog_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__dialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__dialog_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__dialog_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__dialog_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__dialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__dialog_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__dialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__dialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Dialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void Sonnet__Dialog_SuperKeyPressEvent(Sonnet::Dialog* self, QKeyEvent* param1);
    friend void Sonnet__Dialog_SuperCloseEvent(Sonnet::Dialog* self, QCloseEvent* param1);
    friend void Sonnet__Dialog_SuperShowEvent(Sonnet::Dialog* self, QShowEvent* param1);
    friend void Sonnet__Dialog_SuperResizeEvent(Sonnet::Dialog* self, QResizeEvent* param1);
    friend void Sonnet__Dialog_SuperContextMenuEvent(Sonnet::Dialog* self, QContextMenuEvent* param1);
    friend bool Sonnet__Dialog_SuperEventFilter(Sonnet::Dialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__Dialog_SuperEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_SuperMousePressEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_SuperMouseReleaseEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_SuperMouseDoubleClickEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_SuperMouseMoveEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_SuperWheelEvent(Sonnet::Dialog* self, QWheelEvent* event);
    friend void Sonnet__Dialog_SuperKeyReleaseEvent(Sonnet::Dialog* self, QKeyEvent* event);
    friend void Sonnet__Dialog_SuperFocusInEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_SuperFocusOutEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_SuperEnterEvent(Sonnet::Dialog* self, QEnterEvent* event);
    friend void Sonnet__Dialog_SuperLeaveEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_SuperPaintEvent(Sonnet::Dialog* self, QPaintEvent* event);
    friend void Sonnet__Dialog_SuperMoveEvent(Sonnet::Dialog* self, QMoveEvent* event);
    friend void Sonnet__Dialog_SuperTabletEvent(Sonnet::Dialog* self, QTabletEvent* event);
    friend void Sonnet__Dialog_SuperActionEvent(Sonnet::Dialog* self, QActionEvent* event);
    friend void Sonnet__Dialog_SuperDragEnterEvent(Sonnet::Dialog* self, QDragEnterEvent* event);
    friend void Sonnet__Dialog_SuperDragMoveEvent(Sonnet::Dialog* self, QDragMoveEvent* event);
    friend void Sonnet__Dialog_SuperDragLeaveEvent(Sonnet::Dialog* self, QDragLeaveEvent* event);
    friend void Sonnet__Dialog_SuperDropEvent(Sonnet::Dialog* self, QDropEvent* event);
    friend void Sonnet__Dialog_SuperHideEvent(Sonnet::Dialog* self, QHideEvent* event);
    friend bool Sonnet__Dialog_SuperNativeEvent(Sonnet::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__Dialog_SuperChangeEvent(Sonnet::Dialog* self, QEvent* param1);
    friend int Sonnet__Dialog_SuperMetric(const Sonnet::Dialog* self, int param1);
    friend void Sonnet__Dialog_SuperInitPainter(const Sonnet::Dialog* self, QPainter* painter);
    friend QPaintDevice* Sonnet__Dialog_SuperRedirected(const Sonnet::Dialog* self, QPoint* offset);
    friend QPainter* Sonnet__Dialog_SuperSharedPainter(const Sonnet::Dialog* self);
    friend void Sonnet__Dialog_SuperInputMethodEvent(Sonnet::Dialog* self, QInputMethodEvent* param1);
    friend bool Sonnet__Dialog_SuperFocusNextPrevChild(Sonnet::Dialog* self, bool next);
    friend void Sonnet__Dialog_SuperTimerEvent(Sonnet::Dialog* self, QTimerEvent* event);
    friend void Sonnet__Dialog_SuperChildEvent(Sonnet::Dialog* self, QChildEvent* event);
    friend void Sonnet__Dialog_SuperCustomEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_SuperConnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
    friend void Sonnet__Dialog_SuperDisconnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
};

#endif
