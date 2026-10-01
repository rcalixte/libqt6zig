#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKDIALOG_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkDialog
class VirtualKBookmarkDialog final : public KBookmarkDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkDialog_MetaObject_Callback = QMetaObject* (*)(const KBookmarkDialog*);
    using KBookmarkDialog_Metacast_Callback = void* (*)(KBookmarkDialog*, const char*);
    using KBookmarkDialog_Metacall_Callback = int (*)(KBookmarkDialog*, int, int, void**);
    using KBookmarkDialog_Accept_Callback = void (*)(KBookmarkDialog*);
    using KBookmarkDialog_SetVisible_Callback = void (*)(KBookmarkDialog*, bool);
    using KBookmarkDialog_SizeHint_Callback = QSize* (*)(const KBookmarkDialog*);
    using KBookmarkDialog_MinimumSizeHint_Callback = QSize* (*)(const KBookmarkDialog*);
    using KBookmarkDialog_Open_Callback = void (*)(KBookmarkDialog*);
    using KBookmarkDialog_Exec_Callback = int (*)(KBookmarkDialog*);
    using KBookmarkDialog_Done_Callback = void (*)(KBookmarkDialog*, int);
    using KBookmarkDialog_Reject_Callback = void (*)(KBookmarkDialog*);
    using KBookmarkDialog_KeyPressEvent_Callback = void (*)(KBookmarkDialog*, QKeyEvent*);
    using KBookmarkDialog_CloseEvent_Callback = void (*)(KBookmarkDialog*, QCloseEvent*);
    using KBookmarkDialog_ShowEvent_Callback = void (*)(KBookmarkDialog*, QShowEvent*);
    using KBookmarkDialog_ResizeEvent_Callback = void (*)(KBookmarkDialog*, QResizeEvent*);
    using KBookmarkDialog_ContextMenuEvent_Callback = void (*)(KBookmarkDialog*, QContextMenuEvent*);
    using KBookmarkDialog_EventFilter_Callback = bool (*)(KBookmarkDialog*, QObject*, QEvent*);
    using KBookmarkDialog_DevType_Callback = int (*)(const KBookmarkDialog*);
    using KBookmarkDialog_HeightForWidth_Callback = int (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_HasHeightForWidth_Callback = bool (*)(const KBookmarkDialog*);
    using KBookmarkDialog_PaintEngine_Callback = QPaintEngine* (*)(const KBookmarkDialog*);
    using KBookmarkDialog_Event_Callback = bool (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_MousePressEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseReleaseEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseDoubleClickEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseMoveEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_WheelEvent_Callback = void (*)(KBookmarkDialog*, QWheelEvent*);
    using KBookmarkDialog_KeyReleaseEvent_Callback = void (*)(KBookmarkDialog*, QKeyEvent*);
    using KBookmarkDialog_FocusInEvent_Callback = void (*)(KBookmarkDialog*, QFocusEvent*);
    using KBookmarkDialog_FocusOutEvent_Callback = void (*)(KBookmarkDialog*, QFocusEvent*);
    using KBookmarkDialog_EnterEvent_Callback = void (*)(KBookmarkDialog*, QEnterEvent*);
    using KBookmarkDialog_LeaveEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_PaintEvent_Callback = void (*)(KBookmarkDialog*, QPaintEvent*);
    using KBookmarkDialog_MoveEvent_Callback = void (*)(KBookmarkDialog*, QMoveEvent*);
    using KBookmarkDialog_TabletEvent_Callback = void (*)(KBookmarkDialog*, QTabletEvent*);
    using KBookmarkDialog_ActionEvent_Callback = void (*)(KBookmarkDialog*, QActionEvent*);
    using KBookmarkDialog_DragEnterEvent_Callback = void (*)(KBookmarkDialog*, QDragEnterEvent*);
    using KBookmarkDialog_DragMoveEvent_Callback = void (*)(KBookmarkDialog*, QDragMoveEvent*);
    using KBookmarkDialog_DragLeaveEvent_Callback = void (*)(KBookmarkDialog*, QDragLeaveEvent*);
    using KBookmarkDialog_DropEvent_Callback = void (*)(KBookmarkDialog*, QDropEvent*);
    using KBookmarkDialog_HideEvent_Callback = void (*)(KBookmarkDialog*, QHideEvent*);
    using KBookmarkDialog_NativeEvent_Callback = bool (*)(KBookmarkDialog*, libqt_string, void*, intptr_t*);
    using KBookmarkDialog_ChangeEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_Metric_Callback = int (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_InitPainter_Callback = void (*)(const KBookmarkDialog*, QPainter*);
    using KBookmarkDialog_Redirected_Callback = QPaintDevice* (*)(const KBookmarkDialog*, QPoint*);
    using KBookmarkDialog_SharedPainter_Callback = QPainter* (*)(const KBookmarkDialog*);
    using KBookmarkDialog_InputMethodEvent_Callback = void (*)(KBookmarkDialog*, QInputMethodEvent*);
    using KBookmarkDialog_InputMethodQuery_Callback = QVariant* (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_FocusNextPrevChild_Callback = bool (*)(KBookmarkDialog*, bool);
    using KBookmarkDialog_TimerEvent_Callback = void (*)(KBookmarkDialog*, QTimerEvent*);
    using KBookmarkDialog_ChildEvent_Callback = void (*)(KBookmarkDialog*, QChildEvent*);
    using KBookmarkDialog_CustomEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_ConnectNotify_Callback = void (*)(KBookmarkDialog*, QMetaMethod*);
    using KBookmarkDialog_DisconnectNotify_Callback = void (*)(KBookmarkDialog*, QMetaMethod*);
    using KBookmarkDialog::adjustPosition;
    using KBookmarkDialog::create;
    using KBookmarkDialog::destroy;
    using KBookmarkDialog::focusNextChild;
    using KBookmarkDialog::focusPreviousChild;
    using KBookmarkDialog::getDecodedMetricF;
    using KBookmarkDialog::isSignalConnected;
    using KBookmarkDialog::newFolderButton;
    using KBookmarkDialog::receivers;
    using KBookmarkDialog::sender;
    using KBookmarkDialog::senderSignalIndex;
    using KBookmarkDialog::updateMicroFocus;

    // Instance callback storage
    KBookmarkDialog_MetaObject_Callback kbookmarkdialog_metaobject_callback = nullptr;
    KBookmarkDialog_Metacast_Callback kbookmarkdialog_metacast_callback = nullptr;
    KBookmarkDialog_Metacall_Callback kbookmarkdialog_metacall_callback = nullptr;
    KBookmarkDialog_Accept_Callback kbookmarkdialog_accept_callback = nullptr;
    KBookmarkDialog_SetVisible_Callback kbookmarkdialog_setvisible_callback = nullptr;
    KBookmarkDialog_SizeHint_Callback kbookmarkdialog_sizehint_callback = nullptr;
    KBookmarkDialog_MinimumSizeHint_Callback kbookmarkdialog_minimumsizehint_callback = nullptr;
    KBookmarkDialog_Open_Callback kbookmarkdialog_open_callback = nullptr;
    KBookmarkDialog_Exec_Callback kbookmarkdialog_exec_callback = nullptr;
    KBookmarkDialog_Done_Callback kbookmarkdialog_done_callback = nullptr;
    KBookmarkDialog_Reject_Callback kbookmarkdialog_reject_callback = nullptr;
    KBookmarkDialog_KeyPressEvent_Callback kbookmarkdialog_keypressevent_callback = nullptr;
    KBookmarkDialog_CloseEvent_Callback kbookmarkdialog_closeevent_callback = nullptr;
    KBookmarkDialog_ShowEvent_Callback kbookmarkdialog_showevent_callback = nullptr;
    KBookmarkDialog_ResizeEvent_Callback kbookmarkdialog_resizeevent_callback = nullptr;
    KBookmarkDialog_ContextMenuEvent_Callback kbookmarkdialog_contextmenuevent_callback = nullptr;
    KBookmarkDialog_EventFilter_Callback kbookmarkdialog_eventfilter_callback = nullptr;
    KBookmarkDialog_DevType_Callback kbookmarkdialog_devtype_callback = nullptr;
    KBookmarkDialog_HeightForWidth_Callback kbookmarkdialog_heightforwidth_callback = nullptr;
    KBookmarkDialog_HasHeightForWidth_Callback kbookmarkdialog_hasheightforwidth_callback = nullptr;
    KBookmarkDialog_PaintEngine_Callback kbookmarkdialog_paintengine_callback = nullptr;
    KBookmarkDialog_Event_Callback kbookmarkdialog_event_callback = nullptr;
    KBookmarkDialog_MousePressEvent_Callback kbookmarkdialog_mousepressevent_callback = nullptr;
    KBookmarkDialog_MouseReleaseEvent_Callback kbookmarkdialog_mousereleaseevent_callback = nullptr;
    KBookmarkDialog_MouseDoubleClickEvent_Callback kbookmarkdialog_mousedoubleclickevent_callback = nullptr;
    KBookmarkDialog_MouseMoveEvent_Callback kbookmarkdialog_mousemoveevent_callback = nullptr;
    KBookmarkDialog_WheelEvent_Callback kbookmarkdialog_wheelevent_callback = nullptr;
    KBookmarkDialog_KeyReleaseEvent_Callback kbookmarkdialog_keyreleaseevent_callback = nullptr;
    KBookmarkDialog_FocusInEvent_Callback kbookmarkdialog_focusinevent_callback = nullptr;
    KBookmarkDialog_FocusOutEvent_Callback kbookmarkdialog_focusoutevent_callback = nullptr;
    KBookmarkDialog_EnterEvent_Callback kbookmarkdialog_enterevent_callback = nullptr;
    KBookmarkDialog_LeaveEvent_Callback kbookmarkdialog_leaveevent_callback = nullptr;
    KBookmarkDialog_PaintEvent_Callback kbookmarkdialog_paintevent_callback = nullptr;
    KBookmarkDialog_MoveEvent_Callback kbookmarkdialog_moveevent_callback = nullptr;
    KBookmarkDialog_TabletEvent_Callback kbookmarkdialog_tabletevent_callback = nullptr;
    KBookmarkDialog_ActionEvent_Callback kbookmarkdialog_actionevent_callback = nullptr;
    KBookmarkDialog_DragEnterEvent_Callback kbookmarkdialog_dragenterevent_callback = nullptr;
    KBookmarkDialog_DragMoveEvent_Callback kbookmarkdialog_dragmoveevent_callback = nullptr;
    KBookmarkDialog_DragLeaveEvent_Callback kbookmarkdialog_dragleaveevent_callback = nullptr;
    KBookmarkDialog_DropEvent_Callback kbookmarkdialog_dropevent_callback = nullptr;
    KBookmarkDialog_HideEvent_Callback kbookmarkdialog_hideevent_callback = nullptr;
    KBookmarkDialog_NativeEvent_Callback kbookmarkdialog_nativeevent_callback = nullptr;
    KBookmarkDialog_ChangeEvent_Callback kbookmarkdialog_changeevent_callback = nullptr;
    KBookmarkDialog_Metric_Callback kbookmarkdialog_metric_callback = nullptr;
    KBookmarkDialog_InitPainter_Callback kbookmarkdialog_initpainter_callback = nullptr;
    KBookmarkDialog_Redirected_Callback kbookmarkdialog_redirected_callback = nullptr;
    KBookmarkDialog_SharedPainter_Callback kbookmarkdialog_sharedpainter_callback = nullptr;
    KBookmarkDialog_InputMethodEvent_Callback kbookmarkdialog_inputmethodevent_callback = nullptr;
    KBookmarkDialog_InputMethodQuery_Callback kbookmarkdialog_inputmethodquery_callback = nullptr;
    KBookmarkDialog_FocusNextPrevChild_Callback kbookmarkdialog_focusnextprevchild_callback = nullptr;
    KBookmarkDialog_TimerEvent_Callback kbookmarkdialog_timerevent_callback = nullptr;
    KBookmarkDialog_ChildEvent_Callback kbookmarkdialog_childevent_callback = nullptr;
    KBookmarkDialog_CustomEvent_Callback kbookmarkdialog_customevent_callback = nullptr;
    KBookmarkDialog_ConnectNotify_Callback kbookmarkdialog_connectnotify_callback = nullptr;
    KBookmarkDialog_DisconnectNotify_Callback kbookmarkdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBookmarkDialog {
        using KBookmarkDialog::accept;
        using KBookmarkDialog::actionEvent;
        using KBookmarkDialog::changeEvent;
        using KBookmarkDialog::childEvent;
        using KBookmarkDialog::closeEvent;
        using KBookmarkDialog::connectNotify;
        using KBookmarkDialog::contextMenuEvent;
        using KBookmarkDialog::customEvent;
        using KBookmarkDialog::disconnectNotify;
        using KBookmarkDialog::dragEnterEvent;
        using KBookmarkDialog::dragLeaveEvent;
        using KBookmarkDialog::dragMoveEvent;
        using KBookmarkDialog::dropEvent;
        using KBookmarkDialog::enterEvent;
        using KBookmarkDialog::event;
        using KBookmarkDialog::eventFilter;
        using KBookmarkDialog::focusInEvent;
        using KBookmarkDialog::focusNextPrevChild;
        using KBookmarkDialog::focusOutEvent;
        using KBookmarkDialog::hideEvent;
        using KBookmarkDialog::initPainter;
        using KBookmarkDialog::inputMethodEvent;
        using KBookmarkDialog::keyPressEvent;
        using KBookmarkDialog::keyReleaseEvent;
        using KBookmarkDialog::leaveEvent;
        using KBookmarkDialog::metric;
        using KBookmarkDialog::mouseDoubleClickEvent;
        using KBookmarkDialog::mouseMoveEvent;
        using KBookmarkDialog::mousePressEvent;
        using KBookmarkDialog::mouseReleaseEvent;
        using KBookmarkDialog::moveEvent;
        using KBookmarkDialog::nativeEvent;
        using KBookmarkDialog::paintEvent;
        using KBookmarkDialog::redirected;
        using KBookmarkDialog::resizeEvent;
        using KBookmarkDialog::sharedPainter;
        using KBookmarkDialog::showEvent;
        using KBookmarkDialog::tabletEvent;
        using KBookmarkDialog::timerEvent;
        using KBookmarkDialog::wheelEvent;
    };

    VirtualKBookmarkDialog(KBookmarkManager* manager) : KBookmarkDialog(manager) {};
    VirtualKBookmarkDialog(KBookmarkManager* manager, QWidget* parent) : KBookmarkDialog(manager, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkdialog_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kbookmarkdialog_accept_callback) {
            kbookmarkdialog_accept_callback(this);
            return;
        }
        KBookmarkDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbookmarkdialog_setvisible_callback) {
            bool cbval1 = visible;
            kbookmarkdialog_setvisible_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbookmarkdialog_sizehint_callback) {
            QSize* callback_ret = kbookmarkdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbookmarkdialog_minimumsizehint_callback) {
            QSize* callback_ret = kbookmarkdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kbookmarkdialog_open_callback) {
            kbookmarkdialog_open_callback(this);
            return;
        }
        KBookmarkDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kbookmarkdialog_exec_callback) {
            int callback_ret = kbookmarkdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kbookmarkdialog_done_callback) {
            int cbval1 = param1;
            kbookmarkdialog_done_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kbookmarkdialog_reject_callback) {
            kbookmarkdialog_reject_callback(this);
            return;
        }
        KBookmarkDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbookmarkdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kbookmarkdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kbookmarkdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kbookmarkdialog_closeevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kbookmarkdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kbookmarkdialog_showevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kbookmarkdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kbookmarkdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kbookmarkdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kbookmarkdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbookmarkdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kbookmarkdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbookmarkdialog_devtype_callback) {
            int callback_ret = kbookmarkdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbookmarkdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kbookmarkdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbookmarkdialog_hasheightforwidth_callback) {
            bool callback_ret = kbookmarkdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KBookmarkDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbookmarkdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kbookmarkdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KBookmarkDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbookmarkdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kbookmarkdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kbookmarkdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kbookmarkdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kbookmarkdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbookmarkdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kbookmarkdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbookmarkdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kbookmarkdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbookmarkdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kbookmarkdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbookmarkdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kbookmarkdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbookmarkdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kbookmarkdialog_enterevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbookmarkdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kbookmarkdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kbookmarkdialog_paintevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbookmarkdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kbookmarkdialog_moveevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbookmarkdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kbookmarkdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbookmarkdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kbookmarkdialog_actionevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbookmarkdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kbookmarkdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbookmarkdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kbookmarkdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbookmarkdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kbookmarkdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbookmarkdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kbookmarkdialog_dropevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbookmarkdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kbookmarkdialog_hideevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbookmarkdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kbookmarkdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KBookmarkDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbookmarkdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kbookmarkdialog_changeevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbookmarkdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kbookmarkdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbookmarkdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kbookmarkdialog_initpainter_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbookmarkdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kbookmarkdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbookmarkdialog_sharedpainter_callback) {
            QPainter* callback_ret = kbookmarkdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KBookmarkDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbookmarkdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kbookmarkdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbookmarkdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kbookmarkdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbookmarkdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kbookmarkdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbookmarkdialog_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkdialog_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkdialog_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBookmarkDialog_SuperAccept(KBookmarkDialog* self);
    friend void KBookmarkDialog_SuperKeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1);
    friend void KBookmarkDialog_SuperCloseEvent(KBookmarkDialog* self, QCloseEvent* param1);
    friend void KBookmarkDialog_SuperShowEvent(KBookmarkDialog* self, QShowEvent* param1);
    friend void KBookmarkDialog_SuperResizeEvent(KBookmarkDialog* self, QResizeEvent* param1);
    friend void KBookmarkDialog_SuperContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1);
    friend bool KBookmarkDialog_SuperEventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2);
    friend bool KBookmarkDialog_SuperEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_SuperMousePressEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_SuperMouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_SuperMouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_SuperMouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_SuperWheelEvent(KBookmarkDialog* self, QWheelEvent* event);
    friend void KBookmarkDialog_SuperKeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event);
    friend void KBookmarkDialog_SuperFocusInEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_SuperFocusOutEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_SuperEnterEvent(KBookmarkDialog* self, QEnterEvent* event);
    friend void KBookmarkDialog_SuperLeaveEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_SuperPaintEvent(KBookmarkDialog* self, QPaintEvent* event);
    friend void KBookmarkDialog_SuperMoveEvent(KBookmarkDialog* self, QMoveEvent* event);
    friend void KBookmarkDialog_SuperTabletEvent(KBookmarkDialog* self, QTabletEvent* event);
    friend void KBookmarkDialog_SuperActionEvent(KBookmarkDialog* self, QActionEvent* event);
    friend void KBookmarkDialog_SuperDragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event);
    friend void KBookmarkDialog_SuperDragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event);
    friend void KBookmarkDialog_SuperDragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event);
    friend void KBookmarkDialog_SuperDropEvent(KBookmarkDialog* self, QDropEvent* event);
    friend void KBookmarkDialog_SuperHideEvent(KBookmarkDialog* self, QHideEvent* event);
    friend bool KBookmarkDialog_SuperNativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBookmarkDialog_SuperChangeEvent(KBookmarkDialog* self, QEvent* param1);
    friend int KBookmarkDialog_SuperMetric(const KBookmarkDialog* self, int param1);
    friend void KBookmarkDialog_SuperInitPainter(const KBookmarkDialog* self, QPainter* painter);
    friend QPaintDevice* KBookmarkDialog_SuperRedirected(const KBookmarkDialog* self, QPoint* offset);
    friend QPainter* KBookmarkDialog_SuperSharedPainter(const KBookmarkDialog* self);
    friend void KBookmarkDialog_SuperInputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1);
    friend bool KBookmarkDialog_SuperFocusNextPrevChild(KBookmarkDialog* self, bool next);
    friend void KBookmarkDialog_SuperTimerEvent(KBookmarkDialog* self, QTimerEvent* event);
    friend void KBookmarkDialog_SuperChildEvent(KBookmarkDialog* self, QChildEvent* event);
    friend void KBookmarkDialog_SuperCustomEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_SuperConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
    friend void KBookmarkDialog_SuperDisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
};

#endif
