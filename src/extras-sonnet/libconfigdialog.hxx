#pragma once
#ifndef EXTRAS_SONNET_LIBCONFIGDIALOG_HXX
#define EXTRAS_SONNET_LIBCONFIGDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigDialog
class VirtualSonnetConfigDialog final : public Sonnet::ConfigDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__ConfigDialog_MetaObject_Callback = QMetaObject* (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Metacast_Callback = void* (*)(Sonnet__ConfigDialog*, const char*);
    using Sonnet__ConfigDialog_Metacall_Callback = int (*)(Sonnet__ConfigDialog*, int, int, void**);
    using Sonnet__ConfigDialog_SlotOk_Callback = void (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_SlotApply_Callback = void (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_SetVisible_Callback = void (*)(Sonnet__ConfigDialog*, bool);
    using Sonnet__ConfigDialog_SizeHint_Callback = QSize* (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_MinimumSizeHint_Callback = QSize* (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Open_Callback = void (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Exec_Callback = int (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Done_Callback = void (*)(Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_Accept_Callback = void (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Reject_Callback = void (*)(Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_KeyPressEvent_Callback = void (*)(Sonnet__ConfigDialog*, QKeyEvent*);
    using Sonnet__ConfigDialog_CloseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QCloseEvent*);
    using Sonnet__ConfigDialog_ShowEvent_Callback = void (*)(Sonnet__ConfigDialog*, QShowEvent*);
    using Sonnet__ConfigDialog_ResizeEvent_Callback = void (*)(Sonnet__ConfigDialog*, QResizeEvent*);
    using Sonnet__ConfigDialog_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigDialog*, QContextMenuEvent*);
    using Sonnet__ConfigDialog_EventFilter_Callback = bool (*)(Sonnet__ConfigDialog*, QObject*, QEvent*);
    using Sonnet__ConfigDialog_DevType_Callback = int (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_HeightForWidth_Callback = int (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_HasHeightForWidth_Callback = bool (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_PaintEngine_Callback = QPaintEngine* (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_Event_Callback = bool (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_MousePressEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_WheelEvent_Callback = void (*)(Sonnet__ConfigDialog*, QWheelEvent*);
    using Sonnet__ConfigDialog_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QKeyEvent*);
    using Sonnet__ConfigDialog_FocusInEvent_Callback = void (*)(Sonnet__ConfigDialog*, QFocusEvent*);
    using Sonnet__ConfigDialog_FocusOutEvent_Callback = void (*)(Sonnet__ConfigDialog*, QFocusEvent*);
    using Sonnet__ConfigDialog_EnterEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEnterEvent*);
    using Sonnet__ConfigDialog_LeaveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_PaintEvent_Callback = void (*)(Sonnet__ConfigDialog*, QPaintEvent*);
    using Sonnet__ConfigDialog_MoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMoveEvent*);
    using Sonnet__ConfigDialog_TabletEvent_Callback = void (*)(Sonnet__ConfigDialog*, QTabletEvent*);
    using Sonnet__ConfigDialog_ActionEvent_Callback = void (*)(Sonnet__ConfigDialog*, QActionEvent*);
    using Sonnet__ConfigDialog_DragEnterEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragEnterEvent*);
    using Sonnet__ConfigDialog_DragMoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragMoveEvent*);
    using Sonnet__ConfigDialog_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragLeaveEvent*);
    using Sonnet__ConfigDialog_DropEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDropEvent*);
    using Sonnet__ConfigDialog_HideEvent_Callback = void (*)(Sonnet__ConfigDialog*, QHideEvent*);
    using Sonnet__ConfigDialog_NativeEvent_Callback = bool (*)(Sonnet__ConfigDialog*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigDialog_ChangeEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_Metric_Callback = int (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_InitPainter_Callback = void (*)(const Sonnet__ConfigDialog*, QPainter*);
    using Sonnet__ConfigDialog_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigDialog*, QPoint*);
    using Sonnet__ConfigDialog_SharedPainter_Callback = QPainter* (*)(const Sonnet__ConfigDialog*);
    using Sonnet__ConfigDialog_InputMethodEvent_Callback = void (*)(Sonnet__ConfigDialog*, QInputMethodEvent*);
    using Sonnet__ConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigDialog*, bool);
    using Sonnet__ConfigDialog_TimerEvent_Callback = void (*)(Sonnet__ConfigDialog*, QTimerEvent*);
    using Sonnet__ConfigDialog_ChildEvent_Callback = void (*)(Sonnet__ConfigDialog*, QChildEvent*);
    using Sonnet__ConfigDialog_CustomEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_ConnectNotify_Callback = void (*)(Sonnet__ConfigDialog*, QMetaMethod*);
    using Sonnet__ConfigDialog_DisconnectNotify_Callback = void (*)(Sonnet__ConfigDialog*, QMetaMethod*);
    using Sonnet::ConfigDialog::adjustPosition;
    using Sonnet::ConfigDialog::create;
    using Sonnet::ConfigDialog::destroy;
    using Sonnet::ConfigDialog::focusNextChild;
    using Sonnet::ConfigDialog::focusPreviousChild;
    using Sonnet::ConfigDialog::getDecodedMetricF;
    using Sonnet::ConfigDialog::isSignalConnected;
    using Sonnet::ConfigDialog::receivers;
    using Sonnet::ConfigDialog::sender;
    using Sonnet::ConfigDialog::senderSignalIndex;
    using Sonnet::ConfigDialog::updateMicroFocus;

    // Instance callback storage
    Sonnet__ConfigDialog_MetaObject_Callback sonnet__configdialog_metaobject_callback = nullptr;
    Sonnet__ConfigDialog_Metacast_Callback sonnet__configdialog_metacast_callback = nullptr;
    Sonnet__ConfigDialog_Metacall_Callback sonnet__configdialog_metacall_callback = nullptr;
    Sonnet__ConfigDialog_SlotOk_Callback sonnet__configdialog_slotok_callback = nullptr;
    Sonnet__ConfigDialog_SlotApply_Callback sonnet__configdialog_slotapply_callback = nullptr;
    Sonnet__ConfigDialog_SetVisible_Callback sonnet__configdialog_setvisible_callback = nullptr;
    Sonnet__ConfigDialog_SizeHint_Callback sonnet__configdialog_sizehint_callback = nullptr;
    Sonnet__ConfigDialog_MinimumSizeHint_Callback sonnet__configdialog_minimumsizehint_callback = nullptr;
    Sonnet__ConfigDialog_Open_Callback sonnet__configdialog_open_callback = nullptr;
    Sonnet__ConfigDialog_Exec_Callback sonnet__configdialog_exec_callback = nullptr;
    Sonnet__ConfigDialog_Done_Callback sonnet__configdialog_done_callback = nullptr;
    Sonnet__ConfigDialog_Accept_Callback sonnet__configdialog_accept_callback = nullptr;
    Sonnet__ConfigDialog_Reject_Callback sonnet__configdialog_reject_callback = nullptr;
    Sonnet__ConfigDialog_KeyPressEvent_Callback sonnet__configdialog_keypressevent_callback = nullptr;
    Sonnet__ConfigDialog_CloseEvent_Callback sonnet__configdialog_closeevent_callback = nullptr;
    Sonnet__ConfigDialog_ShowEvent_Callback sonnet__configdialog_showevent_callback = nullptr;
    Sonnet__ConfigDialog_ResizeEvent_Callback sonnet__configdialog_resizeevent_callback = nullptr;
    Sonnet__ConfigDialog_ContextMenuEvent_Callback sonnet__configdialog_contextmenuevent_callback = nullptr;
    Sonnet__ConfigDialog_EventFilter_Callback sonnet__configdialog_eventfilter_callback = nullptr;
    Sonnet__ConfigDialog_DevType_Callback sonnet__configdialog_devtype_callback = nullptr;
    Sonnet__ConfigDialog_HeightForWidth_Callback sonnet__configdialog_heightforwidth_callback = nullptr;
    Sonnet__ConfigDialog_HasHeightForWidth_Callback sonnet__configdialog_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigDialog_PaintEngine_Callback sonnet__configdialog_paintengine_callback = nullptr;
    Sonnet__ConfigDialog_Event_Callback sonnet__configdialog_event_callback = nullptr;
    Sonnet__ConfigDialog_MousePressEvent_Callback sonnet__configdialog_mousepressevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseReleaseEvent_Callback sonnet__configdialog_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback sonnet__configdialog_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseMoveEvent_Callback sonnet__configdialog_mousemoveevent_callback = nullptr;
    Sonnet__ConfigDialog_WheelEvent_Callback sonnet__configdialog_wheelevent_callback = nullptr;
    Sonnet__ConfigDialog_KeyReleaseEvent_Callback sonnet__configdialog_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigDialog_FocusInEvent_Callback sonnet__configdialog_focusinevent_callback = nullptr;
    Sonnet__ConfigDialog_FocusOutEvent_Callback sonnet__configdialog_focusoutevent_callback = nullptr;
    Sonnet__ConfigDialog_EnterEvent_Callback sonnet__configdialog_enterevent_callback = nullptr;
    Sonnet__ConfigDialog_LeaveEvent_Callback sonnet__configdialog_leaveevent_callback = nullptr;
    Sonnet__ConfigDialog_PaintEvent_Callback sonnet__configdialog_paintevent_callback = nullptr;
    Sonnet__ConfigDialog_MoveEvent_Callback sonnet__configdialog_moveevent_callback = nullptr;
    Sonnet__ConfigDialog_TabletEvent_Callback sonnet__configdialog_tabletevent_callback = nullptr;
    Sonnet__ConfigDialog_ActionEvent_Callback sonnet__configdialog_actionevent_callback = nullptr;
    Sonnet__ConfigDialog_DragEnterEvent_Callback sonnet__configdialog_dragenterevent_callback = nullptr;
    Sonnet__ConfigDialog_DragMoveEvent_Callback sonnet__configdialog_dragmoveevent_callback = nullptr;
    Sonnet__ConfigDialog_DragLeaveEvent_Callback sonnet__configdialog_dragleaveevent_callback = nullptr;
    Sonnet__ConfigDialog_DropEvent_Callback sonnet__configdialog_dropevent_callback = nullptr;
    Sonnet__ConfigDialog_HideEvent_Callback sonnet__configdialog_hideevent_callback = nullptr;
    Sonnet__ConfigDialog_NativeEvent_Callback sonnet__configdialog_nativeevent_callback = nullptr;
    Sonnet__ConfigDialog_ChangeEvent_Callback sonnet__configdialog_changeevent_callback = nullptr;
    Sonnet__ConfigDialog_Metric_Callback sonnet__configdialog_metric_callback = nullptr;
    Sonnet__ConfigDialog_InitPainter_Callback sonnet__configdialog_initpainter_callback = nullptr;
    Sonnet__ConfigDialog_Redirected_Callback sonnet__configdialog_redirected_callback = nullptr;
    Sonnet__ConfigDialog_SharedPainter_Callback sonnet__configdialog_sharedpainter_callback = nullptr;
    Sonnet__ConfigDialog_InputMethodEvent_Callback sonnet__configdialog_inputmethodevent_callback = nullptr;
    Sonnet__ConfigDialog_InputMethodQuery_Callback sonnet__configdialog_inputmethodquery_callback = nullptr;
    Sonnet__ConfigDialog_FocusNextPrevChild_Callback sonnet__configdialog_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigDialog_TimerEvent_Callback sonnet__configdialog_timerevent_callback = nullptr;
    Sonnet__ConfigDialog_ChildEvent_Callback sonnet__configdialog_childevent_callback = nullptr;
    Sonnet__ConfigDialog_CustomEvent_Callback sonnet__configdialog_customevent_callback = nullptr;
    Sonnet__ConfigDialog_ConnectNotify_Callback sonnet__configdialog_connectnotify_callback = nullptr;
    Sonnet__ConfigDialog_DisconnectNotify_Callback sonnet__configdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::ConfigDialog {
        using Sonnet::ConfigDialog::actionEvent;
        using Sonnet::ConfigDialog::changeEvent;
        using Sonnet::ConfigDialog::childEvent;
        using Sonnet::ConfigDialog::closeEvent;
        using Sonnet::ConfigDialog::connectNotify;
        using Sonnet::ConfigDialog::contextMenuEvent;
        using Sonnet::ConfigDialog::customEvent;
        using Sonnet::ConfigDialog::disconnectNotify;
        using Sonnet::ConfigDialog::dragEnterEvent;
        using Sonnet::ConfigDialog::dragLeaveEvent;
        using Sonnet::ConfigDialog::dragMoveEvent;
        using Sonnet::ConfigDialog::dropEvent;
        using Sonnet::ConfigDialog::enterEvent;
        using Sonnet::ConfigDialog::event;
        using Sonnet::ConfigDialog::eventFilter;
        using Sonnet::ConfigDialog::focusInEvent;
        using Sonnet::ConfigDialog::focusNextPrevChild;
        using Sonnet::ConfigDialog::focusOutEvent;
        using Sonnet::ConfigDialog::hideEvent;
        using Sonnet::ConfigDialog::initPainter;
        using Sonnet::ConfigDialog::inputMethodEvent;
        using Sonnet::ConfigDialog::keyPressEvent;
        using Sonnet::ConfigDialog::keyReleaseEvent;
        using Sonnet::ConfigDialog::leaveEvent;
        using Sonnet::ConfigDialog::metric;
        using Sonnet::ConfigDialog::mouseDoubleClickEvent;
        using Sonnet::ConfigDialog::mouseMoveEvent;
        using Sonnet::ConfigDialog::mousePressEvent;
        using Sonnet::ConfigDialog::mouseReleaseEvent;
        using Sonnet::ConfigDialog::moveEvent;
        using Sonnet::ConfigDialog::nativeEvent;
        using Sonnet::ConfigDialog::paintEvent;
        using Sonnet::ConfigDialog::redirected;
        using Sonnet::ConfigDialog::resizeEvent;
        using Sonnet::ConfigDialog::sharedPainter;
        using Sonnet::ConfigDialog::showEvent;
        using Sonnet::ConfigDialog::slotApply;
        using Sonnet::ConfigDialog::slotOk;
        using Sonnet::ConfigDialog::tabletEvent;
        using Sonnet::ConfigDialog::timerEvent;
        using Sonnet::ConfigDialog::wheelEvent;
    };

    VirtualSonnetConfigDialog(QWidget* parent) : Sonnet::ConfigDialog(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__configdialog_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__configdialog_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__configdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__configdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__configdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotOk() override {
        if (sonnet__configdialog_slotok_callback) {
            sonnet__configdialog_slotok_callback(this);
            return;
        }
        Sonnet__ConfigDialog::slotOk();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotApply() override {
        if (sonnet__configdialog_slotapply_callback) {
            sonnet__configdialog_slotapply_callback(this);
            return;
        }
        Sonnet__ConfigDialog::slotApply();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configdialog_setvisible_callback) {
            bool cbval1 = visible;
            sonnet__configdialog_setvisible_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configdialog_sizehint_callback) {
            QSize* callback_ret = sonnet__configdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configdialog_minimumsizehint_callback) {
            QSize* callback_ret = sonnet__configdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (sonnet__configdialog_open_callback) {
            sonnet__configdialog_open_callback(this);
            return;
        }
        Sonnet__ConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (sonnet__configdialog_exec_callback) {
            int callback_ret = sonnet__configdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (sonnet__configdialog_done_callback) {
            int cbval1 = param1;
            sonnet__configdialog_done_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (sonnet__configdialog_accept_callback) {
            sonnet__configdialog_accept_callback(this);
            return;
        }
        Sonnet__ConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (sonnet__configdialog_reject_callback) {
            sonnet__configdialog_reject_callback(this);
            return;
        }
        Sonnet__ConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (sonnet__configdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            sonnet__configdialog_keypressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (sonnet__configdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            sonnet__configdialog_closeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (sonnet__configdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            sonnet__configdialog_showevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (sonnet__configdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            sonnet__configdialog_resizeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (sonnet__configdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            sonnet__configdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (sonnet__configdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = sonnet__configdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configdialog_devtype_callback) {
            int callback_ret = sonnet__configdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = sonnet__configdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configdialog_hasheightforwidth_callback) {
            bool callback_ret = sonnet__configdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configdialog_paintengine_callback) {
            QPaintEngine* callback_ret = sonnet__configdialog_paintengine_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__configdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__configdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            sonnet__configdialog_wheelevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            sonnet__configdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configdialog_focusinevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            sonnet__configdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            sonnet__configdialog_enterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configdialog_leaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            sonnet__configdialog_paintevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            sonnet__configdialog_moveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            sonnet__configdialog_tabletevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            sonnet__configdialog_actionevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            sonnet__configdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            sonnet__configdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            sonnet__configdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            sonnet__configdialog_dropevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            sonnet__configdialog_hideevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = sonnet__configdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            sonnet__configdialog_changeevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = sonnet__configdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__ConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            sonnet__configdialog_initpainter_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = sonnet__configdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configdialog_sharedpainter_callback) {
            QPainter* callback_ret = sonnet__configdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            sonnet__configdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = sonnet__configdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__ConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = sonnet__configdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__ConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__configdialog_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__configdialog_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configdialog_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__configdialog_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configdialog_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__configdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__ConfigDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void Sonnet__ConfigDialog_SuperSlotOk(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_SuperSlotApply(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_SuperKeyPressEvent(Sonnet::ConfigDialog* self, QKeyEvent* param1);
    friend void Sonnet__ConfigDialog_SuperCloseEvent(Sonnet::ConfigDialog* self, QCloseEvent* param1);
    friend void Sonnet__ConfigDialog_SuperShowEvent(Sonnet::ConfigDialog* self, QShowEvent* param1);
    friend void Sonnet__ConfigDialog_SuperResizeEvent(Sonnet::ConfigDialog* self, QResizeEvent* param1);
    friend void Sonnet__ConfigDialog_SuperContextMenuEvent(Sonnet::ConfigDialog* self, QContextMenuEvent* param1);
    friend bool Sonnet__ConfigDialog_SuperEventFilter(Sonnet::ConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__ConfigDialog_SuperEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_SuperMousePressEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_SuperMouseReleaseEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_SuperMouseDoubleClickEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_SuperMouseMoveEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_SuperWheelEvent(Sonnet::ConfigDialog* self, QWheelEvent* event);
    friend void Sonnet__ConfigDialog_SuperKeyReleaseEvent(Sonnet::ConfigDialog* self, QKeyEvent* event);
    friend void Sonnet__ConfigDialog_SuperFocusInEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_SuperFocusOutEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_SuperEnterEvent(Sonnet::ConfigDialog* self, QEnterEvent* event);
    friend void Sonnet__ConfigDialog_SuperLeaveEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_SuperPaintEvent(Sonnet::ConfigDialog* self, QPaintEvent* event);
    friend void Sonnet__ConfigDialog_SuperMoveEvent(Sonnet::ConfigDialog* self, QMoveEvent* event);
    friend void Sonnet__ConfigDialog_SuperTabletEvent(Sonnet::ConfigDialog* self, QTabletEvent* event);
    friend void Sonnet__ConfigDialog_SuperActionEvent(Sonnet::ConfigDialog* self, QActionEvent* event);
    friend void Sonnet__ConfigDialog_SuperDragEnterEvent(Sonnet::ConfigDialog* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigDialog_SuperDragMoveEvent(Sonnet::ConfigDialog* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigDialog_SuperDragLeaveEvent(Sonnet::ConfigDialog* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigDialog_SuperDropEvent(Sonnet::ConfigDialog* self, QDropEvent* event);
    friend void Sonnet__ConfigDialog_SuperHideEvent(Sonnet::ConfigDialog* self, QHideEvent* event);
    friend bool Sonnet__ConfigDialog_SuperNativeEvent(Sonnet::ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigDialog_SuperChangeEvent(Sonnet::ConfigDialog* self, QEvent* param1);
    friend int Sonnet__ConfigDialog_SuperMetric(const Sonnet::ConfigDialog* self, int param1);
    friend void Sonnet__ConfigDialog_SuperInitPainter(const Sonnet::ConfigDialog* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigDialog_SuperRedirected(const Sonnet::ConfigDialog* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigDialog_SuperSharedPainter(const Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_SuperInputMethodEvent(Sonnet::ConfigDialog* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigDialog_SuperFocusNextPrevChild(Sonnet::ConfigDialog* self, bool next);
    friend void Sonnet__ConfigDialog_SuperTimerEvent(Sonnet::ConfigDialog* self, QTimerEvent* event);
    friend void Sonnet__ConfigDialog_SuperChildEvent(Sonnet::ConfigDialog* self, QChildEvent* event);
    friend void Sonnet__ConfigDialog_SuperCustomEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_SuperConnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigDialog_SuperDisconnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
};

#endif
