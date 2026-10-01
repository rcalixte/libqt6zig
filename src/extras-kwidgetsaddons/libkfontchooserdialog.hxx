#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTCHOOSERDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKFONTCHOOSERDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontChooserDialog
class VirtualKFontChooserDialog final : public KFontChooserDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFontChooserDialog_MetaObject_Callback = QMetaObject* (*)(const KFontChooserDialog*);
    using KFontChooserDialog_Metacast_Callback = void* (*)(KFontChooserDialog*, const char*);
    using KFontChooserDialog_Metacall_Callback = int (*)(KFontChooserDialog*, int, int, void**);
    using KFontChooserDialog_SetVisible_Callback = void (*)(KFontChooserDialog*, bool);
    using KFontChooserDialog_SizeHint_Callback = QSize* (*)(const KFontChooserDialog*);
    using KFontChooserDialog_MinimumSizeHint_Callback = QSize* (*)(const KFontChooserDialog*);
    using KFontChooserDialog_Open_Callback = void (*)(KFontChooserDialog*);
    using KFontChooserDialog_Exec_Callback = int (*)(KFontChooserDialog*);
    using KFontChooserDialog_Done_Callback = void (*)(KFontChooserDialog*, int);
    using KFontChooserDialog_Accept_Callback = void (*)(KFontChooserDialog*);
    using KFontChooserDialog_Reject_Callback = void (*)(KFontChooserDialog*);
    using KFontChooserDialog_KeyPressEvent_Callback = void (*)(KFontChooserDialog*, QKeyEvent*);
    using KFontChooserDialog_CloseEvent_Callback = void (*)(KFontChooserDialog*, QCloseEvent*);
    using KFontChooserDialog_ShowEvent_Callback = void (*)(KFontChooserDialog*, QShowEvent*);
    using KFontChooserDialog_ResizeEvent_Callback = void (*)(KFontChooserDialog*, QResizeEvent*);
    using KFontChooserDialog_ContextMenuEvent_Callback = void (*)(KFontChooserDialog*, QContextMenuEvent*);
    using KFontChooserDialog_EventFilter_Callback = bool (*)(KFontChooserDialog*, QObject*, QEvent*);
    using KFontChooserDialog_DevType_Callback = int (*)(const KFontChooserDialog*);
    using KFontChooserDialog_HeightForWidth_Callback = int (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_HasHeightForWidth_Callback = bool (*)(const KFontChooserDialog*);
    using KFontChooserDialog_PaintEngine_Callback = QPaintEngine* (*)(const KFontChooserDialog*);
    using KFontChooserDialog_Event_Callback = bool (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_MousePressEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseReleaseEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseDoubleClickEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseMoveEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_WheelEvent_Callback = void (*)(KFontChooserDialog*, QWheelEvent*);
    using KFontChooserDialog_KeyReleaseEvent_Callback = void (*)(KFontChooserDialog*, QKeyEvent*);
    using KFontChooserDialog_FocusInEvent_Callback = void (*)(KFontChooserDialog*, QFocusEvent*);
    using KFontChooserDialog_FocusOutEvent_Callback = void (*)(KFontChooserDialog*, QFocusEvent*);
    using KFontChooserDialog_EnterEvent_Callback = void (*)(KFontChooserDialog*, QEnterEvent*);
    using KFontChooserDialog_LeaveEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_PaintEvent_Callback = void (*)(KFontChooserDialog*, QPaintEvent*);
    using KFontChooserDialog_MoveEvent_Callback = void (*)(KFontChooserDialog*, QMoveEvent*);
    using KFontChooserDialog_TabletEvent_Callback = void (*)(KFontChooserDialog*, QTabletEvent*);
    using KFontChooserDialog_ActionEvent_Callback = void (*)(KFontChooserDialog*, QActionEvent*);
    using KFontChooserDialog_DragEnterEvent_Callback = void (*)(KFontChooserDialog*, QDragEnterEvent*);
    using KFontChooserDialog_DragMoveEvent_Callback = void (*)(KFontChooserDialog*, QDragMoveEvent*);
    using KFontChooserDialog_DragLeaveEvent_Callback = void (*)(KFontChooserDialog*, QDragLeaveEvent*);
    using KFontChooserDialog_DropEvent_Callback = void (*)(KFontChooserDialog*, QDropEvent*);
    using KFontChooserDialog_HideEvent_Callback = void (*)(KFontChooserDialog*, QHideEvent*);
    using KFontChooserDialog_NativeEvent_Callback = bool (*)(KFontChooserDialog*, libqt_string, void*, intptr_t*);
    using KFontChooserDialog_ChangeEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_Metric_Callback = int (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_InitPainter_Callback = void (*)(const KFontChooserDialog*, QPainter*);
    using KFontChooserDialog_Redirected_Callback = QPaintDevice* (*)(const KFontChooserDialog*, QPoint*);
    using KFontChooserDialog_SharedPainter_Callback = QPainter* (*)(const KFontChooserDialog*);
    using KFontChooserDialog_InputMethodEvent_Callback = void (*)(KFontChooserDialog*, QInputMethodEvent*);
    using KFontChooserDialog_InputMethodQuery_Callback = QVariant* (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_FocusNextPrevChild_Callback = bool (*)(KFontChooserDialog*, bool);
    using KFontChooserDialog_TimerEvent_Callback = void (*)(KFontChooserDialog*, QTimerEvent*);
    using KFontChooserDialog_ChildEvent_Callback = void (*)(KFontChooserDialog*, QChildEvent*);
    using KFontChooserDialog_CustomEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_ConnectNotify_Callback = void (*)(KFontChooserDialog*, QMetaMethod*);
    using KFontChooserDialog_DisconnectNotify_Callback = void (*)(KFontChooserDialog*, QMetaMethod*);
    using KFontChooserDialog::adjustPosition;
    using KFontChooserDialog::create;
    using KFontChooserDialog::destroy;
    using KFontChooserDialog::focusNextChild;
    using KFontChooserDialog::focusPreviousChild;
    using KFontChooserDialog::getDecodedMetricF;
    using KFontChooserDialog::isSignalConnected;
    using KFontChooserDialog::receivers;
    using KFontChooserDialog::sender;
    using KFontChooserDialog::senderSignalIndex;
    using KFontChooserDialog::updateMicroFocus;

    // Instance callback storage
    KFontChooserDialog_MetaObject_Callback kfontchooserdialog_metaobject_callback = nullptr;
    KFontChooserDialog_Metacast_Callback kfontchooserdialog_metacast_callback = nullptr;
    KFontChooserDialog_Metacall_Callback kfontchooserdialog_metacall_callback = nullptr;
    KFontChooserDialog_SetVisible_Callback kfontchooserdialog_setvisible_callback = nullptr;
    KFontChooserDialog_SizeHint_Callback kfontchooserdialog_sizehint_callback = nullptr;
    KFontChooserDialog_MinimumSizeHint_Callback kfontchooserdialog_minimumsizehint_callback = nullptr;
    KFontChooserDialog_Open_Callback kfontchooserdialog_open_callback = nullptr;
    KFontChooserDialog_Exec_Callback kfontchooserdialog_exec_callback = nullptr;
    KFontChooserDialog_Done_Callback kfontchooserdialog_done_callback = nullptr;
    KFontChooserDialog_Accept_Callback kfontchooserdialog_accept_callback = nullptr;
    KFontChooserDialog_Reject_Callback kfontchooserdialog_reject_callback = nullptr;
    KFontChooserDialog_KeyPressEvent_Callback kfontchooserdialog_keypressevent_callback = nullptr;
    KFontChooserDialog_CloseEvent_Callback kfontchooserdialog_closeevent_callback = nullptr;
    KFontChooserDialog_ShowEvent_Callback kfontchooserdialog_showevent_callback = nullptr;
    KFontChooserDialog_ResizeEvent_Callback kfontchooserdialog_resizeevent_callback = nullptr;
    KFontChooserDialog_ContextMenuEvent_Callback kfontchooserdialog_contextmenuevent_callback = nullptr;
    KFontChooserDialog_EventFilter_Callback kfontchooserdialog_eventfilter_callback = nullptr;
    KFontChooserDialog_DevType_Callback kfontchooserdialog_devtype_callback = nullptr;
    KFontChooserDialog_HeightForWidth_Callback kfontchooserdialog_heightforwidth_callback = nullptr;
    KFontChooserDialog_HasHeightForWidth_Callback kfontchooserdialog_hasheightforwidth_callback = nullptr;
    KFontChooserDialog_PaintEngine_Callback kfontchooserdialog_paintengine_callback = nullptr;
    KFontChooserDialog_Event_Callback kfontchooserdialog_event_callback = nullptr;
    KFontChooserDialog_MousePressEvent_Callback kfontchooserdialog_mousepressevent_callback = nullptr;
    KFontChooserDialog_MouseReleaseEvent_Callback kfontchooserdialog_mousereleaseevent_callback = nullptr;
    KFontChooserDialog_MouseDoubleClickEvent_Callback kfontchooserdialog_mousedoubleclickevent_callback = nullptr;
    KFontChooserDialog_MouseMoveEvent_Callback kfontchooserdialog_mousemoveevent_callback = nullptr;
    KFontChooserDialog_WheelEvent_Callback kfontchooserdialog_wheelevent_callback = nullptr;
    KFontChooserDialog_KeyReleaseEvent_Callback kfontchooserdialog_keyreleaseevent_callback = nullptr;
    KFontChooserDialog_FocusInEvent_Callback kfontchooserdialog_focusinevent_callback = nullptr;
    KFontChooserDialog_FocusOutEvent_Callback kfontchooserdialog_focusoutevent_callback = nullptr;
    KFontChooserDialog_EnterEvent_Callback kfontchooserdialog_enterevent_callback = nullptr;
    KFontChooserDialog_LeaveEvent_Callback kfontchooserdialog_leaveevent_callback = nullptr;
    KFontChooserDialog_PaintEvent_Callback kfontchooserdialog_paintevent_callback = nullptr;
    KFontChooserDialog_MoveEvent_Callback kfontchooserdialog_moveevent_callback = nullptr;
    KFontChooserDialog_TabletEvent_Callback kfontchooserdialog_tabletevent_callback = nullptr;
    KFontChooserDialog_ActionEvent_Callback kfontchooserdialog_actionevent_callback = nullptr;
    KFontChooserDialog_DragEnterEvent_Callback kfontchooserdialog_dragenterevent_callback = nullptr;
    KFontChooserDialog_DragMoveEvent_Callback kfontchooserdialog_dragmoveevent_callback = nullptr;
    KFontChooserDialog_DragLeaveEvent_Callback kfontchooserdialog_dragleaveevent_callback = nullptr;
    KFontChooserDialog_DropEvent_Callback kfontchooserdialog_dropevent_callback = nullptr;
    KFontChooserDialog_HideEvent_Callback kfontchooserdialog_hideevent_callback = nullptr;
    KFontChooserDialog_NativeEvent_Callback kfontchooserdialog_nativeevent_callback = nullptr;
    KFontChooserDialog_ChangeEvent_Callback kfontchooserdialog_changeevent_callback = nullptr;
    KFontChooserDialog_Metric_Callback kfontchooserdialog_metric_callback = nullptr;
    KFontChooserDialog_InitPainter_Callback kfontchooserdialog_initpainter_callback = nullptr;
    KFontChooserDialog_Redirected_Callback kfontchooserdialog_redirected_callback = nullptr;
    KFontChooserDialog_SharedPainter_Callback kfontchooserdialog_sharedpainter_callback = nullptr;
    KFontChooserDialog_InputMethodEvent_Callback kfontchooserdialog_inputmethodevent_callback = nullptr;
    KFontChooserDialog_InputMethodQuery_Callback kfontchooserdialog_inputmethodquery_callback = nullptr;
    KFontChooserDialog_FocusNextPrevChild_Callback kfontchooserdialog_focusnextprevchild_callback = nullptr;
    KFontChooserDialog_TimerEvent_Callback kfontchooserdialog_timerevent_callback = nullptr;
    KFontChooserDialog_ChildEvent_Callback kfontchooserdialog_childevent_callback = nullptr;
    KFontChooserDialog_CustomEvent_Callback kfontchooserdialog_customevent_callback = nullptr;
    KFontChooserDialog_ConnectNotify_Callback kfontchooserdialog_connectnotify_callback = nullptr;
    KFontChooserDialog_DisconnectNotify_Callback kfontchooserdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFontChooserDialog {
        using KFontChooserDialog::actionEvent;
        using KFontChooserDialog::changeEvent;
        using KFontChooserDialog::childEvent;
        using KFontChooserDialog::closeEvent;
        using KFontChooserDialog::connectNotify;
        using KFontChooserDialog::contextMenuEvent;
        using KFontChooserDialog::customEvent;
        using KFontChooserDialog::disconnectNotify;
        using KFontChooserDialog::dragEnterEvent;
        using KFontChooserDialog::dragLeaveEvent;
        using KFontChooserDialog::dragMoveEvent;
        using KFontChooserDialog::dropEvent;
        using KFontChooserDialog::enterEvent;
        using KFontChooserDialog::event;
        using KFontChooserDialog::eventFilter;
        using KFontChooserDialog::focusInEvent;
        using KFontChooserDialog::focusNextPrevChild;
        using KFontChooserDialog::focusOutEvent;
        using KFontChooserDialog::hideEvent;
        using KFontChooserDialog::initPainter;
        using KFontChooserDialog::inputMethodEvent;
        using KFontChooserDialog::keyPressEvent;
        using KFontChooserDialog::keyReleaseEvent;
        using KFontChooserDialog::leaveEvent;
        using KFontChooserDialog::metric;
        using KFontChooserDialog::mouseDoubleClickEvent;
        using KFontChooserDialog::mouseMoveEvent;
        using KFontChooserDialog::mousePressEvent;
        using KFontChooserDialog::mouseReleaseEvent;
        using KFontChooserDialog::moveEvent;
        using KFontChooserDialog::nativeEvent;
        using KFontChooserDialog::paintEvent;
        using KFontChooserDialog::redirected;
        using KFontChooserDialog::resizeEvent;
        using KFontChooserDialog::sharedPainter;
        using KFontChooserDialog::showEvent;
        using KFontChooserDialog::tabletEvent;
        using KFontChooserDialog::timerEvent;
        using KFontChooserDialog::wheelEvent;
    };

    VirtualKFontChooserDialog() : KFontChooserDialog() {};
    VirtualKFontChooserDialog(const KFontChooser::DisplayFlags& flags) : KFontChooserDialog(flags) {};
    VirtualKFontChooserDialog(const KFontChooser::DisplayFlags& flags, QWidget* parent) : KFontChooserDialog(flags, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontchooserdialog_metaobject_callback) {
            QMetaObject* callback_ret = kfontchooserdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KFontChooserDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontchooserdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfontchooserdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontchooserdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfontchooserdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontchooserdialog_setvisible_callback) {
            bool cbval1 = visible;
            kfontchooserdialog_setvisible_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontchooserdialog_sizehint_callback) {
            QSize* callback_ret = kfontchooserdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooserDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontchooserdialog_minimumsizehint_callback) {
            QSize* callback_ret = kfontchooserdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooserDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfontchooserdialog_open_callback) {
            kfontchooserdialog_open_callback(this);
            return;
        }
        KFontChooserDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfontchooserdialog_exec_callback) {
            int callback_ret = kfontchooserdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfontchooserdialog_done_callback) {
            int cbval1 = param1;
            kfontchooserdialog_done_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfontchooserdialog_accept_callback) {
            kfontchooserdialog_accept_callback(this);
            return;
        }
        KFontChooserDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfontchooserdialog_reject_callback) {
            kfontchooserdialog_reject_callback(this);
            return;
        }
        KFontChooserDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfontchooserdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kfontchooserdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfontchooserdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kfontchooserdialog_closeevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfontchooserdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kfontchooserdialog_showevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfontchooserdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kfontchooserdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfontchooserdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kfontchooserdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfontchooserdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kfontchooserdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontChooserDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontchooserdialog_devtype_callback) {
            int callback_ret = kfontchooserdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontchooserdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfontchooserdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontchooserdialog_hasheightforwidth_callback) {
            bool callback_ret = kfontchooserdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFontChooserDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontchooserdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kfontchooserdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KFontChooserDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontchooserdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfontchooserdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooserdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooserdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooserdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooserdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontchooserdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfontchooserdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontchooserdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfontchooserdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontchooserdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontchooserdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontchooserdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontchooserdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontchooserdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfontchooserdialog_enterevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontchooserdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfontchooserdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontchooserdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfontchooserdialog_paintevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontchooserdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfontchooserdialog_moveevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontchooserdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfontchooserdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontchooserdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfontchooserdialog_actionevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontchooserdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfontchooserdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontchooserdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfontchooserdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontchooserdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfontchooserdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontchooserdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfontchooserdialog_dropevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontchooserdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfontchooserdialog_hideevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontchooserdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfontchooserdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFontChooserDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontchooserdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfontchooserdialog_changeevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontchooserdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfontchooserdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontchooserdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfontchooserdialog_initpainter_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontchooserdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfontchooserdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontchooserdialog_sharedpainter_callback) {
            QPainter* callback_ret = kfontchooserdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFontChooserDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontchooserdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfontchooserdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontchooserdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfontchooserdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooserDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontchooserdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfontchooserdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontchooserdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfontchooserdialog_timerevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontchooserdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfontchooserdialog_childevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontchooserdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kfontchooserdialog_customevent_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontchooserdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontchooserdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontchooserdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontchooserdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFontChooserDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFontChooserDialog_SuperKeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1);
    friend void KFontChooserDialog_SuperCloseEvent(KFontChooserDialog* self, QCloseEvent* param1);
    friend void KFontChooserDialog_SuperShowEvent(KFontChooserDialog* self, QShowEvent* param1);
    friend void KFontChooserDialog_SuperResizeEvent(KFontChooserDialog* self, QResizeEvent* param1);
    friend void KFontChooserDialog_SuperContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1);
    friend bool KFontChooserDialog_SuperEventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KFontChooserDialog_SuperEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_SuperMousePressEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperWheelEvent(KFontChooserDialog* self, QWheelEvent* event);
    friend void KFontChooserDialog_SuperKeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event);
    friend void KFontChooserDialog_SuperFocusInEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_SuperFocusOutEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_SuperEnterEvent(KFontChooserDialog* self, QEnterEvent* event);
    friend void KFontChooserDialog_SuperLeaveEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_SuperPaintEvent(KFontChooserDialog* self, QPaintEvent* event);
    friend void KFontChooserDialog_SuperMoveEvent(KFontChooserDialog* self, QMoveEvent* event);
    friend void KFontChooserDialog_SuperTabletEvent(KFontChooserDialog* self, QTabletEvent* event);
    friend void KFontChooserDialog_SuperActionEvent(KFontChooserDialog* self, QActionEvent* event);
    friend void KFontChooserDialog_SuperDragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event);
    friend void KFontChooserDialog_SuperDragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event);
    friend void KFontChooserDialog_SuperDragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event);
    friend void KFontChooserDialog_SuperDropEvent(KFontChooserDialog* self, QDropEvent* event);
    friend void KFontChooserDialog_SuperHideEvent(KFontChooserDialog* self, QHideEvent* event);
    friend bool KFontChooserDialog_SuperNativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontChooserDialog_SuperChangeEvent(KFontChooserDialog* self, QEvent* param1);
    friend int KFontChooserDialog_SuperMetric(const KFontChooserDialog* self, int param1);
    friend void KFontChooserDialog_SuperInitPainter(const KFontChooserDialog* self, QPainter* painter);
    friend QPaintDevice* KFontChooserDialog_SuperRedirected(const KFontChooserDialog* self, QPoint* offset);
    friend QPainter* KFontChooserDialog_SuperSharedPainter(const KFontChooserDialog* self);
    friend void KFontChooserDialog_SuperInputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1);
    friend bool KFontChooserDialog_SuperFocusNextPrevChild(KFontChooserDialog* self, bool next);
    friend void KFontChooserDialog_SuperTimerEvent(KFontChooserDialog* self, QTimerEvent* event);
    friend void KFontChooserDialog_SuperChildEvent(KFontChooserDialog* self, QChildEvent* event);
    friend void KFontChooserDialog_SuperCustomEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_SuperConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
    friend void KFontChooserDialog_SuperDisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
};

#endif
