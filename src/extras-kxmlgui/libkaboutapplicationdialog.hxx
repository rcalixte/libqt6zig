#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKABOUTAPPLICATIONDIALOG_HXX
#define EXTRAS_KXMLGUI_LIBKABOUTAPPLICATIONDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAboutApplicationDialog
class VirtualKAboutApplicationDialog final : public KAboutApplicationDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAboutApplicationDialog_MetaObject_Callback = QMetaObject* (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_Metacast_Callback = void* (*)(KAboutApplicationDialog*, const char*);
    using KAboutApplicationDialog_Metacall_Callback = int (*)(KAboutApplicationDialog*, int, int, void**);
    using KAboutApplicationDialog_SetVisible_Callback = void (*)(KAboutApplicationDialog*, bool);
    using KAboutApplicationDialog_SizeHint_Callback = QSize* (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_MinimumSizeHint_Callback = QSize* (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_Open_Callback = void (*)(KAboutApplicationDialog*);
    using KAboutApplicationDialog_Exec_Callback = int (*)(KAboutApplicationDialog*);
    using KAboutApplicationDialog_Done_Callback = void (*)(KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_Accept_Callback = void (*)(KAboutApplicationDialog*);
    using KAboutApplicationDialog_Reject_Callback = void (*)(KAboutApplicationDialog*);
    using KAboutApplicationDialog_KeyPressEvent_Callback = void (*)(KAboutApplicationDialog*, QKeyEvent*);
    using KAboutApplicationDialog_CloseEvent_Callback = void (*)(KAboutApplicationDialog*, QCloseEvent*);
    using KAboutApplicationDialog_ShowEvent_Callback = void (*)(KAboutApplicationDialog*, QShowEvent*);
    using KAboutApplicationDialog_ResizeEvent_Callback = void (*)(KAboutApplicationDialog*, QResizeEvent*);
    using KAboutApplicationDialog_ContextMenuEvent_Callback = void (*)(KAboutApplicationDialog*, QContextMenuEvent*);
    using KAboutApplicationDialog_EventFilter_Callback = bool (*)(KAboutApplicationDialog*, QObject*, QEvent*);
    using KAboutApplicationDialog_DevType_Callback = int (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_HeightForWidth_Callback = int (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_HasHeightForWidth_Callback = bool (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_PaintEngine_Callback = QPaintEngine* (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_Event_Callback = bool (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_MousePressEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseReleaseEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseDoubleClickEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseMoveEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_WheelEvent_Callback = void (*)(KAboutApplicationDialog*, QWheelEvent*);
    using KAboutApplicationDialog_KeyReleaseEvent_Callback = void (*)(KAboutApplicationDialog*, QKeyEvent*);
    using KAboutApplicationDialog_FocusInEvent_Callback = void (*)(KAboutApplicationDialog*, QFocusEvent*);
    using KAboutApplicationDialog_FocusOutEvent_Callback = void (*)(KAboutApplicationDialog*, QFocusEvent*);
    using KAboutApplicationDialog_EnterEvent_Callback = void (*)(KAboutApplicationDialog*, QEnterEvent*);
    using KAboutApplicationDialog_LeaveEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_PaintEvent_Callback = void (*)(KAboutApplicationDialog*, QPaintEvent*);
    using KAboutApplicationDialog_MoveEvent_Callback = void (*)(KAboutApplicationDialog*, QMoveEvent*);
    using KAboutApplicationDialog_TabletEvent_Callback = void (*)(KAboutApplicationDialog*, QTabletEvent*);
    using KAboutApplicationDialog_ActionEvent_Callback = void (*)(KAboutApplicationDialog*, QActionEvent*);
    using KAboutApplicationDialog_DragEnterEvent_Callback = void (*)(KAboutApplicationDialog*, QDragEnterEvent*);
    using KAboutApplicationDialog_DragMoveEvent_Callback = void (*)(KAboutApplicationDialog*, QDragMoveEvent*);
    using KAboutApplicationDialog_DragLeaveEvent_Callback = void (*)(KAboutApplicationDialog*, QDragLeaveEvent*);
    using KAboutApplicationDialog_DropEvent_Callback = void (*)(KAboutApplicationDialog*, QDropEvent*);
    using KAboutApplicationDialog_HideEvent_Callback = void (*)(KAboutApplicationDialog*, QHideEvent*);
    using KAboutApplicationDialog_NativeEvent_Callback = bool (*)(KAboutApplicationDialog*, libqt_string, void*, intptr_t*);
    using KAboutApplicationDialog_ChangeEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_Metric_Callback = int (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_InitPainter_Callback = void (*)(const KAboutApplicationDialog*, QPainter*);
    using KAboutApplicationDialog_Redirected_Callback = QPaintDevice* (*)(const KAboutApplicationDialog*, QPoint*);
    using KAboutApplicationDialog_SharedPainter_Callback = QPainter* (*)(const KAboutApplicationDialog*);
    using KAboutApplicationDialog_InputMethodEvent_Callback = void (*)(KAboutApplicationDialog*, QInputMethodEvent*);
    using KAboutApplicationDialog_InputMethodQuery_Callback = QVariant* (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_FocusNextPrevChild_Callback = bool (*)(KAboutApplicationDialog*, bool);
    using KAboutApplicationDialog_TimerEvent_Callback = void (*)(KAboutApplicationDialog*, QTimerEvent*);
    using KAboutApplicationDialog_ChildEvent_Callback = void (*)(KAboutApplicationDialog*, QChildEvent*);
    using KAboutApplicationDialog_CustomEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_ConnectNotify_Callback = void (*)(KAboutApplicationDialog*, QMetaMethod*);
    using KAboutApplicationDialog_DisconnectNotify_Callback = void (*)(KAboutApplicationDialog*, QMetaMethod*);
    using KAboutApplicationDialog::adjustPosition;
    using KAboutApplicationDialog::create;
    using KAboutApplicationDialog::destroy;
    using KAboutApplicationDialog::focusNextChild;
    using KAboutApplicationDialog::focusPreviousChild;
    using KAboutApplicationDialog::getDecodedMetricF;
    using KAboutApplicationDialog::isSignalConnected;
    using KAboutApplicationDialog::receivers;
    using KAboutApplicationDialog::sender;
    using KAboutApplicationDialog::senderSignalIndex;
    using KAboutApplicationDialog::updateMicroFocus;

    // Instance callback storage
    KAboutApplicationDialog_MetaObject_Callback kaboutapplicationdialog_metaobject_callback = nullptr;
    KAboutApplicationDialog_Metacast_Callback kaboutapplicationdialog_metacast_callback = nullptr;
    KAboutApplicationDialog_Metacall_Callback kaboutapplicationdialog_metacall_callback = nullptr;
    KAboutApplicationDialog_SetVisible_Callback kaboutapplicationdialog_setvisible_callback = nullptr;
    KAboutApplicationDialog_SizeHint_Callback kaboutapplicationdialog_sizehint_callback = nullptr;
    KAboutApplicationDialog_MinimumSizeHint_Callback kaboutapplicationdialog_minimumsizehint_callback = nullptr;
    KAboutApplicationDialog_Open_Callback kaboutapplicationdialog_open_callback = nullptr;
    KAboutApplicationDialog_Exec_Callback kaboutapplicationdialog_exec_callback = nullptr;
    KAboutApplicationDialog_Done_Callback kaboutapplicationdialog_done_callback = nullptr;
    KAboutApplicationDialog_Accept_Callback kaboutapplicationdialog_accept_callback = nullptr;
    KAboutApplicationDialog_Reject_Callback kaboutapplicationdialog_reject_callback = nullptr;
    KAboutApplicationDialog_KeyPressEvent_Callback kaboutapplicationdialog_keypressevent_callback = nullptr;
    KAboutApplicationDialog_CloseEvent_Callback kaboutapplicationdialog_closeevent_callback = nullptr;
    KAboutApplicationDialog_ShowEvent_Callback kaboutapplicationdialog_showevent_callback = nullptr;
    KAboutApplicationDialog_ResizeEvent_Callback kaboutapplicationdialog_resizeevent_callback = nullptr;
    KAboutApplicationDialog_ContextMenuEvent_Callback kaboutapplicationdialog_contextmenuevent_callback = nullptr;
    KAboutApplicationDialog_EventFilter_Callback kaboutapplicationdialog_eventfilter_callback = nullptr;
    KAboutApplicationDialog_DevType_Callback kaboutapplicationdialog_devtype_callback = nullptr;
    KAboutApplicationDialog_HeightForWidth_Callback kaboutapplicationdialog_heightforwidth_callback = nullptr;
    KAboutApplicationDialog_HasHeightForWidth_Callback kaboutapplicationdialog_hasheightforwidth_callback = nullptr;
    KAboutApplicationDialog_PaintEngine_Callback kaboutapplicationdialog_paintengine_callback = nullptr;
    KAboutApplicationDialog_Event_Callback kaboutapplicationdialog_event_callback = nullptr;
    KAboutApplicationDialog_MousePressEvent_Callback kaboutapplicationdialog_mousepressevent_callback = nullptr;
    KAboutApplicationDialog_MouseReleaseEvent_Callback kaboutapplicationdialog_mousereleaseevent_callback = nullptr;
    KAboutApplicationDialog_MouseDoubleClickEvent_Callback kaboutapplicationdialog_mousedoubleclickevent_callback = nullptr;
    KAboutApplicationDialog_MouseMoveEvent_Callback kaboutapplicationdialog_mousemoveevent_callback = nullptr;
    KAboutApplicationDialog_WheelEvent_Callback kaboutapplicationdialog_wheelevent_callback = nullptr;
    KAboutApplicationDialog_KeyReleaseEvent_Callback kaboutapplicationdialog_keyreleaseevent_callback = nullptr;
    KAboutApplicationDialog_FocusInEvent_Callback kaboutapplicationdialog_focusinevent_callback = nullptr;
    KAboutApplicationDialog_FocusOutEvent_Callback kaboutapplicationdialog_focusoutevent_callback = nullptr;
    KAboutApplicationDialog_EnterEvent_Callback kaboutapplicationdialog_enterevent_callback = nullptr;
    KAboutApplicationDialog_LeaveEvent_Callback kaboutapplicationdialog_leaveevent_callback = nullptr;
    KAboutApplicationDialog_PaintEvent_Callback kaboutapplicationdialog_paintevent_callback = nullptr;
    KAboutApplicationDialog_MoveEvent_Callback kaboutapplicationdialog_moveevent_callback = nullptr;
    KAboutApplicationDialog_TabletEvent_Callback kaboutapplicationdialog_tabletevent_callback = nullptr;
    KAboutApplicationDialog_ActionEvent_Callback kaboutapplicationdialog_actionevent_callback = nullptr;
    KAboutApplicationDialog_DragEnterEvent_Callback kaboutapplicationdialog_dragenterevent_callback = nullptr;
    KAboutApplicationDialog_DragMoveEvent_Callback kaboutapplicationdialog_dragmoveevent_callback = nullptr;
    KAboutApplicationDialog_DragLeaveEvent_Callback kaboutapplicationdialog_dragleaveevent_callback = nullptr;
    KAboutApplicationDialog_DropEvent_Callback kaboutapplicationdialog_dropevent_callback = nullptr;
    KAboutApplicationDialog_HideEvent_Callback kaboutapplicationdialog_hideevent_callback = nullptr;
    KAboutApplicationDialog_NativeEvent_Callback kaboutapplicationdialog_nativeevent_callback = nullptr;
    KAboutApplicationDialog_ChangeEvent_Callback kaboutapplicationdialog_changeevent_callback = nullptr;
    KAboutApplicationDialog_Metric_Callback kaboutapplicationdialog_metric_callback = nullptr;
    KAboutApplicationDialog_InitPainter_Callback kaboutapplicationdialog_initpainter_callback = nullptr;
    KAboutApplicationDialog_Redirected_Callback kaboutapplicationdialog_redirected_callback = nullptr;
    KAboutApplicationDialog_SharedPainter_Callback kaboutapplicationdialog_sharedpainter_callback = nullptr;
    KAboutApplicationDialog_InputMethodEvent_Callback kaboutapplicationdialog_inputmethodevent_callback = nullptr;
    KAboutApplicationDialog_InputMethodQuery_Callback kaboutapplicationdialog_inputmethodquery_callback = nullptr;
    KAboutApplicationDialog_FocusNextPrevChild_Callback kaboutapplicationdialog_focusnextprevchild_callback = nullptr;
    KAboutApplicationDialog_TimerEvent_Callback kaboutapplicationdialog_timerevent_callback = nullptr;
    KAboutApplicationDialog_ChildEvent_Callback kaboutapplicationdialog_childevent_callback = nullptr;
    KAboutApplicationDialog_CustomEvent_Callback kaboutapplicationdialog_customevent_callback = nullptr;
    KAboutApplicationDialog_ConnectNotify_Callback kaboutapplicationdialog_connectnotify_callback = nullptr;
    KAboutApplicationDialog_DisconnectNotify_Callback kaboutapplicationdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAboutApplicationDialog {
        using KAboutApplicationDialog::actionEvent;
        using KAboutApplicationDialog::changeEvent;
        using KAboutApplicationDialog::childEvent;
        using KAboutApplicationDialog::closeEvent;
        using KAboutApplicationDialog::connectNotify;
        using KAboutApplicationDialog::contextMenuEvent;
        using KAboutApplicationDialog::customEvent;
        using KAboutApplicationDialog::disconnectNotify;
        using KAboutApplicationDialog::dragEnterEvent;
        using KAboutApplicationDialog::dragLeaveEvent;
        using KAboutApplicationDialog::dragMoveEvent;
        using KAboutApplicationDialog::dropEvent;
        using KAboutApplicationDialog::enterEvent;
        using KAboutApplicationDialog::event;
        using KAboutApplicationDialog::eventFilter;
        using KAboutApplicationDialog::focusInEvent;
        using KAboutApplicationDialog::focusNextPrevChild;
        using KAboutApplicationDialog::focusOutEvent;
        using KAboutApplicationDialog::hideEvent;
        using KAboutApplicationDialog::initPainter;
        using KAboutApplicationDialog::inputMethodEvent;
        using KAboutApplicationDialog::keyPressEvent;
        using KAboutApplicationDialog::keyReleaseEvent;
        using KAboutApplicationDialog::leaveEvent;
        using KAboutApplicationDialog::metric;
        using KAboutApplicationDialog::mouseDoubleClickEvent;
        using KAboutApplicationDialog::mouseMoveEvent;
        using KAboutApplicationDialog::mousePressEvent;
        using KAboutApplicationDialog::mouseReleaseEvent;
        using KAboutApplicationDialog::moveEvent;
        using KAboutApplicationDialog::nativeEvent;
        using KAboutApplicationDialog::paintEvent;
        using KAboutApplicationDialog::redirected;
        using KAboutApplicationDialog::resizeEvent;
        using KAboutApplicationDialog::sharedPainter;
        using KAboutApplicationDialog::showEvent;
        using KAboutApplicationDialog::tabletEvent;
        using KAboutApplicationDialog::timerEvent;
        using KAboutApplicationDialog::wheelEvent;
    };

    VirtualKAboutApplicationDialog(const KAboutData& aboutData, KAboutApplicationDialog::Options opts) : KAboutApplicationDialog(aboutData, opts) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData) : KAboutApplicationDialog(aboutData) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData, KAboutApplicationDialog::Options opts, QWidget* parent) : KAboutApplicationDialog(aboutData, opts, parent) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData, QWidget* parent) : KAboutApplicationDialog(aboutData, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kaboutapplicationdialog_metaobject_callback) {
            QMetaObject* callback_ret = kaboutapplicationdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KAboutApplicationDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kaboutapplicationdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kaboutapplicationdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kaboutapplicationdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kaboutapplicationdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kaboutapplicationdialog_setvisible_callback) {
            bool cbval1 = visible;
            kaboutapplicationdialog_setvisible_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kaboutapplicationdialog_sizehint_callback) {
            QSize* callback_ret = kaboutapplicationdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutApplicationDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kaboutapplicationdialog_minimumsizehint_callback) {
            QSize* callback_ret = kaboutapplicationdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutApplicationDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kaboutapplicationdialog_open_callback) {
            kaboutapplicationdialog_open_callback(this);
            return;
        }
        KAboutApplicationDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kaboutapplicationdialog_exec_callback) {
            int callback_ret = kaboutapplicationdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kaboutapplicationdialog_done_callback) {
            int cbval1 = param1;
            kaboutapplicationdialog_done_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kaboutapplicationdialog_accept_callback) {
            kaboutapplicationdialog_accept_callback(this);
            return;
        }
        KAboutApplicationDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kaboutapplicationdialog_reject_callback) {
            kaboutapplicationdialog_reject_callback(this);
            return;
        }
        KAboutApplicationDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kaboutapplicationdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kaboutapplicationdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kaboutapplicationdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kaboutapplicationdialog_closeevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kaboutapplicationdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kaboutapplicationdialog_showevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kaboutapplicationdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kaboutapplicationdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kaboutapplicationdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kaboutapplicationdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kaboutapplicationdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kaboutapplicationdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAboutApplicationDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kaboutapplicationdialog_devtype_callback) {
            int callback_ret = kaboutapplicationdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kaboutapplicationdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kaboutapplicationdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kaboutapplicationdialog_hasheightforwidth_callback) {
            bool callback_ret = kaboutapplicationdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KAboutApplicationDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kaboutapplicationdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kaboutapplicationdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KAboutApplicationDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kaboutapplicationdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kaboutapplicationdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutapplicationdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutapplicationdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutapplicationdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutapplicationdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kaboutapplicationdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kaboutapplicationdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kaboutapplicationdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kaboutapplicationdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kaboutapplicationdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kaboutapplicationdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kaboutapplicationdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kaboutapplicationdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kaboutapplicationdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kaboutapplicationdialog_enterevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kaboutapplicationdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kaboutapplicationdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kaboutapplicationdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kaboutapplicationdialog_paintevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kaboutapplicationdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kaboutapplicationdialog_moveevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kaboutapplicationdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kaboutapplicationdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kaboutapplicationdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kaboutapplicationdialog_actionevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kaboutapplicationdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kaboutapplicationdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kaboutapplicationdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kaboutapplicationdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kaboutapplicationdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kaboutapplicationdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kaboutapplicationdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kaboutapplicationdialog_dropevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kaboutapplicationdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kaboutapplicationdialog_hideevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kaboutapplicationdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kaboutapplicationdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KAboutApplicationDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kaboutapplicationdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kaboutapplicationdialog_changeevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kaboutapplicationdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kaboutapplicationdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kaboutapplicationdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kaboutapplicationdialog_initpainter_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kaboutapplicationdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kaboutapplicationdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kaboutapplicationdialog_sharedpainter_callback) {
            QPainter* callback_ret = kaboutapplicationdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KAboutApplicationDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kaboutapplicationdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kaboutapplicationdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kaboutapplicationdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kaboutapplicationdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutApplicationDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kaboutapplicationdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kaboutapplicationdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kaboutapplicationdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kaboutapplicationdialog_timerevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kaboutapplicationdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kaboutapplicationdialog_childevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kaboutapplicationdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kaboutapplicationdialog_customevent_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kaboutapplicationdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kaboutapplicationdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kaboutapplicationdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kaboutapplicationdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAboutApplicationDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAboutApplicationDialog_SuperKeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1);
    friend void KAboutApplicationDialog_SuperCloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1);
    friend void KAboutApplicationDialog_SuperShowEvent(KAboutApplicationDialog* self, QShowEvent* param1);
    friend void KAboutApplicationDialog_SuperResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1);
    friend void KAboutApplicationDialog_SuperContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1);
    friend bool KAboutApplicationDialog_SuperEventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutApplicationDialog_SuperEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_SuperMousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperWheelEvent(KAboutApplicationDialog* self, QWheelEvent* event);
    friend void KAboutApplicationDialog_SuperKeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event);
    friend void KAboutApplicationDialog_SuperFocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_SuperFocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_SuperEnterEvent(KAboutApplicationDialog* self, QEnterEvent* event);
    friend void KAboutApplicationDialog_SuperLeaveEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_SuperPaintEvent(KAboutApplicationDialog* self, QPaintEvent* event);
    friend void KAboutApplicationDialog_SuperMoveEvent(KAboutApplicationDialog* self, QMoveEvent* event);
    friend void KAboutApplicationDialog_SuperTabletEvent(KAboutApplicationDialog* self, QTabletEvent* event);
    friend void KAboutApplicationDialog_SuperActionEvent(KAboutApplicationDialog* self, QActionEvent* event);
    friend void KAboutApplicationDialog_SuperDragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event);
    friend void KAboutApplicationDialog_SuperDragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event);
    friend void KAboutApplicationDialog_SuperDragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event);
    friend void KAboutApplicationDialog_SuperDropEvent(KAboutApplicationDialog* self, QDropEvent* event);
    friend void KAboutApplicationDialog_SuperHideEvent(KAboutApplicationDialog* self, QHideEvent* event);
    friend bool KAboutApplicationDialog_SuperNativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAboutApplicationDialog_SuperChangeEvent(KAboutApplicationDialog* self, QEvent* param1);
    friend int KAboutApplicationDialog_SuperMetric(const KAboutApplicationDialog* self, int param1);
    friend void KAboutApplicationDialog_SuperInitPainter(const KAboutApplicationDialog* self, QPainter* painter);
    friend QPaintDevice* KAboutApplicationDialog_SuperRedirected(const KAboutApplicationDialog* self, QPoint* offset);
    friend QPainter* KAboutApplicationDialog_SuperSharedPainter(const KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_SuperInputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1);
    friend bool KAboutApplicationDialog_SuperFocusNextPrevChild(KAboutApplicationDialog* self, bool next);
    friend void KAboutApplicationDialog_SuperTimerEvent(KAboutApplicationDialog* self, QTimerEvent* event);
    friend void KAboutApplicationDialog_SuperChildEvent(KAboutApplicationDialog* self, QChildEvent* event);
    friend void KAboutApplicationDialog_SuperCustomEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_SuperConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend void KAboutApplicationDialog_SuperDisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
};

#endif
