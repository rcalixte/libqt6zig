#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKABOUTPLUGINDIALOG_HXX
#define EXTRAS_KXMLGUI_LIBKABOUTPLUGINDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAboutPluginDialog
class VirtualKAboutPluginDialog final : public KAboutPluginDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAboutPluginDialog_MetaObject_Callback = QMetaObject* (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_Metacast_Callback = void* (*)(KAboutPluginDialog*, const char*);
    using KAboutPluginDialog_Metacall_Callback = int (*)(KAboutPluginDialog*, int, int, void**);
    using KAboutPluginDialog_SetVisible_Callback = void (*)(KAboutPluginDialog*, bool);
    using KAboutPluginDialog_SizeHint_Callback = QSize* (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_MinimumSizeHint_Callback = QSize* (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_Open_Callback = void (*)(KAboutPluginDialog*);
    using KAboutPluginDialog_Exec_Callback = int (*)(KAboutPluginDialog*);
    using KAboutPluginDialog_Done_Callback = void (*)(KAboutPluginDialog*, int);
    using KAboutPluginDialog_Accept_Callback = void (*)(KAboutPluginDialog*);
    using KAboutPluginDialog_Reject_Callback = void (*)(KAboutPluginDialog*);
    using KAboutPluginDialog_KeyPressEvent_Callback = void (*)(KAboutPluginDialog*, QKeyEvent*);
    using KAboutPluginDialog_CloseEvent_Callback = void (*)(KAboutPluginDialog*, QCloseEvent*);
    using KAboutPluginDialog_ShowEvent_Callback = void (*)(KAboutPluginDialog*, QShowEvent*);
    using KAboutPluginDialog_ResizeEvent_Callback = void (*)(KAboutPluginDialog*, QResizeEvent*);
    using KAboutPluginDialog_ContextMenuEvent_Callback = void (*)(KAboutPluginDialog*, QContextMenuEvent*);
    using KAboutPluginDialog_EventFilter_Callback = bool (*)(KAboutPluginDialog*, QObject*, QEvent*);
    using KAboutPluginDialog_DevType_Callback = int (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_HeightForWidth_Callback = int (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_HasHeightForWidth_Callback = bool (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_PaintEngine_Callback = QPaintEngine* (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_Event_Callback = bool (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_MousePressEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseReleaseEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseDoubleClickEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseMoveEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_WheelEvent_Callback = void (*)(KAboutPluginDialog*, QWheelEvent*);
    using KAboutPluginDialog_KeyReleaseEvent_Callback = void (*)(KAboutPluginDialog*, QKeyEvent*);
    using KAboutPluginDialog_FocusInEvent_Callback = void (*)(KAboutPluginDialog*, QFocusEvent*);
    using KAboutPluginDialog_FocusOutEvent_Callback = void (*)(KAboutPluginDialog*, QFocusEvent*);
    using KAboutPluginDialog_EnterEvent_Callback = void (*)(KAboutPluginDialog*, QEnterEvent*);
    using KAboutPluginDialog_LeaveEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_PaintEvent_Callback = void (*)(KAboutPluginDialog*, QPaintEvent*);
    using KAboutPluginDialog_MoveEvent_Callback = void (*)(KAboutPluginDialog*, QMoveEvent*);
    using KAboutPluginDialog_TabletEvent_Callback = void (*)(KAboutPluginDialog*, QTabletEvent*);
    using KAboutPluginDialog_ActionEvent_Callback = void (*)(KAboutPluginDialog*, QActionEvent*);
    using KAboutPluginDialog_DragEnterEvent_Callback = void (*)(KAboutPluginDialog*, QDragEnterEvent*);
    using KAboutPluginDialog_DragMoveEvent_Callback = void (*)(KAboutPluginDialog*, QDragMoveEvent*);
    using KAboutPluginDialog_DragLeaveEvent_Callback = void (*)(KAboutPluginDialog*, QDragLeaveEvent*);
    using KAboutPluginDialog_DropEvent_Callback = void (*)(KAboutPluginDialog*, QDropEvent*);
    using KAboutPluginDialog_HideEvent_Callback = void (*)(KAboutPluginDialog*, QHideEvent*);
    using KAboutPluginDialog_NativeEvent_Callback = bool (*)(KAboutPluginDialog*, libqt_string, void*, intptr_t*);
    using KAboutPluginDialog_ChangeEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_Metric_Callback = int (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_InitPainter_Callback = void (*)(const KAboutPluginDialog*, QPainter*);
    using KAboutPluginDialog_Redirected_Callback = QPaintDevice* (*)(const KAboutPluginDialog*, QPoint*);
    using KAboutPluginDialog_SharedPainter_Callback = QPainter* (*)(const KAboutPluginDialog*);
    using KAboutPluginDialog_InputMethodEvent_Callback = void (*)(KAboutPluginDialog*, QInputMethodEvent*);
    using KAboutPluginDialog_InputMethodQuery_Callback = QVariant* (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_FocusNextPrevChild_Callback = bool (*)(KAboutPluginDialog*, bool);
    using KAboutPluginDialog_TimerEvent_Callback = void (*)(KAboutPluginDialog*, QTimerEvent*);
    using KAboutPluginDialog_ChildEvent_Callback = void (*)(KAboutPluginDialog*, QChildEvent*);
    using KAboutPluginDialog_CustomEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_ConnectNotify_Callback = void (*)(KAboutPluginDialog*, QMetaMethod*);
    using KAboutPluginDialog_DisconnectNotify_Callback = void (*)(KAboutPluginDialog*, QMetaMethod*);
    using KAboutPluginDialog::adjustPosition;
    using KAboutPluginDialog::create;
    using KAboutPluginDialog::destroy;
    using KAboutPluginDialog::focusNextChild;
    using KAboutPluginDialog::focusPreviousChild;
    using KAboutPluginDialog::getDecodedMetricF;
    using KAboutPluginDialog::isSignalConnected;
    using KAboutPluginDialog::receivers;
    using KAboutPluginDialog::sender;
    using KAboutPluginDialog::senderSignalIndex;
    using KAboutPluginDialog::updateMicroFocus;

    // Instance callback storage
    KAboutPluginDialog_MetaObject_Callback kaboutplugindialog_metaobject_callback = nullptr;
    KAboutPluginDialog_Metacast_Callback kaboutplugindialog_metacast_callback = nullptr;
    KAboutPluginDialog_Metacall_Callback kaboutplugindialog_metacall_callback = nullptr;
    KAboutPluginDialog_SetVisible_Callback kaboutplugindialog_setvisible_callback = nullptr;
    KAboutPluginDialog_SizeHint_Callback kaboutplugindialog_sizehint_callback = nullptr;
    KAboutPluginDialog_MinimumSizeHint_Callback kaboutplugindialog_minimumsizehint_callback = nullptr;
    KAboutPluginDialog_Open_Callback kaboutplugindialog_open_callback = nullptr;
    KAboutPluginDialog_Exec_Callback kaboutplugindialog_exec_callback = nullptr;
    KAboutPluginDialog_Done_Callback kaboutplugindialog_done_callback = nullptr;
    KAboutPluginDialog_Accept_Callback kaboutplugindialog_accept_callback = nullptr;
    KAboutPluginDialog_Reject_Callback kaboutplugindialog_reject_callback = nullptr;
    KAboutPluginDialog_KeyPressEvent_Callback kaboutplugindialog_keypressevent_callback = nullptr;
    KAboutPluginDialog_CloseEvent_Callback kaboutplugindialog_closeevent_callback = nullptr;
    KAboutPluginDialog_ShowEvent_Callback kaboutplugindialog_showevent_callback = nullptr;
    KAboutPluginDialog_ResizeEvent_Callback kaboutplugindialog_resizeevent_callback = nullptr;
    KAboutPluginDialog_ContextMenuEvent_Callback kaboutplugindialog_contextmenuevent_callback = nullptr;
    KAboutPluginDialog_EventFilter_Callback kaboutplugindialog_eventfilter_callback = nullptr;
    KAboutPluginDialog_DevType_Callback kaboutplugindialog_devtype_callback = nullptr;
    KAboutPluginDialog_HeightForWidth_Callback kaboutplugindialog_heightforwidth_callback = nullptr;
    KAboutPluginDialog_HasHeightForWidth_Callback kaboutplugindialog_hasheightforwidth_callback = nullptr;
    KAboutPluginDialog_PaintEngine_Callback kaboutplugindialog_paintengine_callback = nullptr;
    KAboutPluginDialog_Event_Callback kaboutplugindialog_event_callback = nullptr;
    KAboutPluginDialog_MousePressEvent_Callback kaboutplugindialog_mousepressevent_callback = nullptr;
    KAboutPluginDialog_MouseReleaseEvent_Callback kaboutplugindialog_mousereleaseevent_callback = nullptr;
    KAboutPluginDialog_MouseDoubleClickEvent_Callback kaboutplugindialog_mousedoubleclickevent_callback = nullptr;
    KAboutPluginDialog_MouseMoveEvent_Callback kaboutplugindialog_mousemoveevent_callback = nullptr;
    KAboutPluginDialog_WheelEvent_Callback kaboutplugindialog_wheelevent_callback = nullptr;
    KAboutPluginDialog_KeyReleaseEvent_Callback kaboutplugindialog_keyreleaseevent_callback = nullptr;
    KAboutPluginDialog_FocusInEvent_Callback kaboutplugindialog_focusinevent_callback = nullptr;
    KAboutPluginDialog_FocusOutEvent_Callback kaboutplugindialog_focusoutevent_callback = nullptr;
    KAboutPluginDialog_EnterEvent_Callback kaboutplugindialog_enterevent_callback = nullptr;
    KAboutPluginDialog_LeaveEvent_Callback kaboutplugindialog_leaveevent_callback = nullptr;
    KAboutPluginDialog_PaintEvent_Callback kaboutplugindialog_paintevent_callback = nullptr;
    KAboutPluginDialog_MoveEvent_Callback kaboutplugindialog_moveevent_callback = nullptr;
    KAboutPluginDialog_TabletEvent_Callback kaboutplugindialog_tabletevent_callback = nullptr;
    KAboutPluginDialog_ActionEvent_Callback kaboutplugindialog_actionevent_callback = nullptr;
    KAboutPluginDialog_DragEnterEvent_Callback kaboutplugindialog_dragenterevent_callback = nullptr;
    KAboutPluginDialog_DragMoveEvent_Callback kaboutplugindialog_dragmoveevent_callback = nullptr;
    KAboutPluginDialog_DragLeaveEvent_Callback kaboutplugindialog_dragleaveevent_callback = nullptr;
    KAboutPluginDialog_DropEvent_Callback kaboutplugindialog_dropevent_callback = nullptr;
    KAboutPluginDialog_HideEvent_Callback kaboutplugindialog_hideevent_callback = nullptr;
    KAboutPluginDialog_NativeEvent_Callback kaboutplugindialog_nativeevent_callback = nullptr;
    KAboutPluginDialog_ChangeEvent_Callback kaboutplugindialog_changeevent_callback = nullptr;
    KAboutPluginDialog_Metric_Callback kaboutplugindialog_metric_callback = nullptr;
    KAboutPluginDialog_InitPainter_Callback kaboutplugindialog_initpainter_callback = nullptr;
    KAboutPluginDialog_Redirected_Callback kaboutplugindialog_redirected_callback = nullptr;
    KAboutPluginDialog_SharedPainter_Callback kaboutplugindialog_sharedpainter_callback = nullptr;
    KAboutPluginDialog_InputMethodEvent_Callback kaboutplugindialog_inputmethodevent_callback = nullptr;
    KAboutPluginDialog_InputMethodQuery_Callback kaboutplugindialog_inputmethodquery_callback = nullptr;
    KAboutPluginDialog_FocusNextPrevChild_Callback kaboutplugindialog_focusnextprevchild_callback = nullptr;
    KAboutPluginDialog_TimerEvent_Callback kaboutplugindialog_timerevent_callback = nullptr;
    KAboutPluginDialog_ChildEvent_Callback kaboutplugindialog_childevent_callback = nullptr;
    KAboutPluginDialog_CustomEvent_Callback kaboutplugindialog_customevent_callback = nullptr;
    KAboutPluginDialog_ConnectNotify_Callback kaboutplugindialog_connectnotify_callback = nullptr;
    KAboutPluginDialog_DisconnectNotify_Callback kaboutplugindialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAboutPluginDialog {
        using KAboutPluginDialog::actionEvent;
        using KAboutPluginDialog::changeEvent;
        using KAboutPluginDialog::childEvent;
        using KAboutPluginDialog::closeEvent;
        using KAboutPluginDialog::connectNotify;
        using KAboutPluginDialog::contextMenuEvent;
        using KAboutPluginDialog::customEvent;
        using KAboutPluginDialog::disconnectNotify;
        using KAboutPluginDialog::dragEnterEvent;
        using KAboutPluginDialog::dragLeaveEvent;
        using KAboutPluginDialog::dragMoveEvent;
        using KAboutPluginDialog::dropEvent;
        using KAboutPluginDialog::enterEvent;
        using KAboutPluginDialog::event;
        using KAboutPluginDialog::eventFilter;
        using KAboutPluginDialog::focusInEvent;
        using KAboutPluginDialog::focusNextPrevChild;
        using KAboutPluginDialog::focusOutEvent;
        using KAboutPluginDialog::hideEvent;
        using KAboutPluginDialog::initPainter;
        using KAboutPluginDialog::inputMethodEvent;
        using KAboutPluginDialog::keyPressEvent;
        using KAboutPluginDialog::keyReleaseEvent;
        using KAboutPluginDialog::leaveEvent;
        using KAboutPluginDialog::metric;
        using KAboutPluginDialog::mouseDoubleClickEvent;
        using KAboutPluginDialog::mouseMoveEvent;
        using KAboutPluginDialog::mousePressEvent;
        using KAboutPluginDialog::mouseReleaseEvent;
        using KAboutPluginDialog::moveEvent;
        using KAboutPluginDialog::nativeEvent;
        using KAboutPluginDialog::paintEvent;
        using KAboutPluginDialog::redirected;
        using KAboutPluginDialog::resizeEvent;
        using KAboutPluginDialog::sharedPainter;
        using KAboutPluginDialog::showEvent;
        using KAboutPluginDialog::tabletEvent;
        using KAboutPluginDialog::timerEvent;
        using KAboutPluginDialog::wheelEvent;
    };

    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, KAboutPluginDialog::Options options) : KAboutPluginDialog(pluginMetaData, options) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData) : KAboutPluginDialog(pluginMetaData) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, KAboutPluginDialog::Options options, QWidget* parent) : KAboutPluginDialog(pluginMetaData, options, parent) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, QWidget* parent) : KAboutPluginDialog(pluginMetaData, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kaboutplugindialog_metaobject_callback) {
            QMetaObject* callback_ret = kaboutplugindialog_metaobject_callback(this);
            return callback_ret;
        }
        return KAboutPluginDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kaboutplugindialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kaboutplugindialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutPluginDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kaboutplugindialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kaboutplugindialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAboutPluginDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kaboutplugindialog_setvisible_callback) {
            bool cbval1 = visible;
            kaboutplugindialog_setvisible_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kaboutplugindialog_sizehint_callback) {
            QSize* callback_ret = kaboutplugindialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutPluginDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kaboutplugindialog_minimumsizehint_callback) {
            QSize* callback_ret = kaboutplugindialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutPluginDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kaboutplugindialog_open_callback) {
            kaboutplugindialog_open_callback(this);
            return;
        }
        KAboutPluginDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kaboutplugindialog_exec_callback) {
            int callback_ret = kaboutplugindialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAboutPluginDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kaboutplugindialog_done_callback) {
            int cbval1 = param1;
            kaboutplugindialog_done_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kaboutplugindialog_accept_callback) {
            kaboutplugindialog_accept_callback(this);
            return;
        }
        KAboutPluginDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kaboutplugindialog_reject_callback) {
            kaboutplugindialog_reject_callback(this);
            return;
        }
        KAboutPluginDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kaboutplugindialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kaboutplugindialog_keypressevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kaboutplugindialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kaboutplugindialog_closeevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kaboutplugindialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kaboutplugindialog_showevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kaboutplugindialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kaboutplugindialog_resizeevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kaboutplugindialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kaboutplugindialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kaboutplugindialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kaboutplugindialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAboutPluginDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kaboutplugindialog_devtype_callback) {
            int callback_ret = kaboutplugindialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAboutPluginDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kaboutplugindialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kaboutplugindialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutPluginDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kaboutplugindialog_hasheightforwidth_callback) {
            bool callback_ret = kaboutplugindialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KAboutPluginDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kaboutplugindialog_paintengine_callback) {
            QPaintEngine* callback_ret = kaboutplugindialog_paintengine_callback(this);
            return callback_ret;
        }
        return KAboutPluginDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kaboutplugindialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kaboutplugindialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutPluginDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutplugindialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutplugindialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutplugindialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kaboutplugindialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kaboutplugindialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kaboutplugindialog_wheelevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kaboutplugindialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kaboutplugindialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kaboutplugindialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kaboutplugindialog_focusinevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kaboutplugindialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kaboutplugindialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kaboutplugindialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kaboutplugindialog_enterevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kaboutplugindialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kaboutplugindialog_leaveevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kaboutplugindialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kaboutplugindialog_paintevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kaboutplugindialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kaboutplugindialog_moveevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kaboutplugindialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kaboutplugindialog_tabletevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kaboutplugindialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kaboutplugindialog_actionevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kaboutplugindialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kaboutplugindialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kaboutplugindialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kaboutplugindialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kaboutplugindialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kaboutplugindialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kaboutplugindialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kaboutplugindialog_dropevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kaboutplugindialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kaboutplugindialog_hideevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kaboutplugindialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kaboutplugindialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KAboutPluginDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kaboutplugindialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kaboutplugindialog_changeevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kaboutplugindialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kaboutplugindialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutPluginDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kaboutplugindialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kaboutplugindialog_initpainter_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kaboutplugindialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kaboutplugindialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutPluginDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kaboutplugindialog_sharedpainter_callback) {
            QPainter* callback_ret = kaboutplugindialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KAboutPluginDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kaboutplugindialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kaboutplugindialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kaboutplugindialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kaboutplugindialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAboutPluginDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kaboutplugindialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kaboutplugindialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KAboutPluginDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kaboutplugindialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kaboutplugindialog_timerevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kaboutplugindialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kaboutplugindialog_childevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kaboutplugindialog_customevent_callback) {
            QEvent* cbval1 = event;
            kaboutplugindialog_customevent_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kaboutplugindialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kaboutplugindialog_connectnotify_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kaboutplugindialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kaboutplugindialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAboutPluginDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAboutPluginDialog_SuperKeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1);
    friend void KAboutPluginDialog_SuperCloseEvent(KAboutPluginDialog* self, QCloseEvent* param1);
    friend void KAboutPluginDialog_SuperShowEvent(KAboutPluginDialog* self, QShowEvent* param1);
    friend void KAboutPluginDialog_SuperResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1);
    friend void KAboutPluginDialog_SuperContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1);
    friend bool KAboutPluginDialog_SuperEventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutPluginDialog_SuperEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_SuperMousePressEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_SuperMouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_SuperMouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_SuperMouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_SuperWheelEvent(KAboutPluginDialog* self, QWheelEvent* event);
    friend void KAboutPluginDialog_SuperKeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event);
    friend void KAboutPluginDialog_SuperFocusInEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_SuperFocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_SuperEnterEvent(KAboutPluginDialog* self, QEnterEvent* event);
    friend void KAboutPluginDialog_SuperLeaveEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_SuperPaintEvent(KAboutPluginDialog* self, QPaintEvent* event);
    friend void KAboutPluginDialog_SuperMoveEvent(KAboutPluginDialog* self, QMoveEvent* event);
    friend void KAboutPluginDialog_SuperTabletEvent(KAboutPluginDialog* self, QTabletEvent* event);
    friend void KAboutPluginDialog_SuperActionEvent(KAboutPluginDialog* self, QActionEvent* event);
    friend void KAboutPluginDialog_SuperDragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event);
    friend void KAboutPluginDialog_SuperDragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event);
    friend void KAboutPluginDialog_SuperDragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event);
    friend void KAboutPluginDialog_SuperDropEvent(KAboutPluginDialog* self, QDropEvent* event);
    friend void KAboutPluginDialog_SuperHideEvent(KAboutPluginDialog* self, QHideEvent* event);
    friend bool KAboutPluginDialog_SuperNativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAboutPluginDialog_SuperChangeEvent(KAboutPluginDialog* self, QEvent* param1);
    friend int KAboutPluginDialog_SuperMetric(const KAboutPluginDialog* self, int param1);
    friend void KAboutPluginDialog_SuperInitPainter(const KAboutPluginDialog* self, QPainter* painter);
    friend QPaintDevice* KAboutPluginDialog_SuperRedirected(const KAboutPluginDialog* self, QPoint* offset);
    friend QPainter* KAboutPluginDialog_SuperSharedPainter(const KAboutPluginDialog* self);
    friend void KAboutPluginDialog_SuperInputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1);
    friend bool KAboutPluginDialog_SuperFocusNextPrevChild(KAboutPluginDialog* self, bool next);
    friend void KAboutPluginDialog_SuperTimerEvent(KAboutPluginDialog* self, QTimerEvent* event);
    friend void KAboutPluginDialog_SuperChildEvent(KAboutPluginDialog* self, QChildEvent* event);
    friend void KAboutPluginDialog_SuperCustomEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_SuperConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
    friend void KAboutPluginDialog_SuperDisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
};

#endif
