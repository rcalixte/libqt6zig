#pragma once
#ifndef EXTRAS_KIO_LIBKFILECUSTOMDIALOG_HXX
#define EXTRAS_KIO_LIBKFILECUSTOMDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileCustomDialog
class VirtualKFileCustomDialog final : public KFileCustomDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileCustomDialog_MetaObject_Callback = QMetaObject* (*)(const KFileCustomDialog*);
    using KFileCustomDialog_Metacast_Callback = void* (*)(KFileCustomDialog*, const char*);
    using KFileCustomDialog_Metacall_Callback = int (*)(KFileCustomDialog*, int, int, void**);
    using KFileCustomDialog_Accept_Callback = void (*)(KFileCustomDialog*);
    using KFileCustomDialog_SetVisible_Callback = void (*)(KFileCustomDialog*, bool);
    using KFileCustomDialog_SizeHint_Callback = QSize* (*)(const KFileCustomDialog*);
    using KFileCustomDialog_MinimumSizeHint_Callback = QSize* (*)(const KFileCustomDialog*);
    using KFileCustomDialog_Open_Callback = void (*)(KFileCustomDialog*);
    using KFileCustomDialog_Exec_Callback = int (*)(KFileCustomDialog*);
    using KFileCustomDialog_Done_Callback = void (*)(KFileCustomDialog*, int);
    using KFileCustomDialog_Reject_Callback = void (*)(KFileCustomDialog*);
    using KFileCustomDialog_KeyPressEvent_Callback = void (*)(KFileCustomDialog*, QKeyEvent*);
    using KFileCustomDialog_CloseEvent_Callback = void (*)(KFileCustomDialog*, QCloseEvent*);
    using KFileCustomDialog_ShowEvent_Callback = void (*)(KFileCustomDialog*, QShowEvent*);
    using KFileCustomDialog_ResizeEvent_Callback = void (*)(KFileCustomDialog*, QResizeEvent*);
    using KFileCustomDialog_ContextMenuEvent_Callback = void (*)(KFileCustomDialog*, QContextMenuEvent*);
    using KFileCustomDialog_EventFilter_Callback = bool (*)(KFileCustomDialog*, QObject*, QEvent*);
    using KFileCustomDialog_DevType_Callback = int (*)(const KFileCustomDialog*);
    using KFileCustomDialog_HeightForWidth_Callback = int (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_HasHeightForWidth_Callback = bool (*)(const KFileCustomDialog*);
    using KFileCustomDialog_PaintEngine_Callback = QPaintEngine* (*)(const KFileCustomDialog*);
    using KFileCustomDialog_Event_Callback = bool (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_MousePressEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseReleaseEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseDoubleClickEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseMoveEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_WheelEvent_Callback = void (*)(KFileCustomDialog*, QWheelEvent*);
    using KFileCustomDialog_KeyReleaseEvent_Callback = void (*)(KFileCustomDialog*, QKeyEvent*);
    using KFileCustomDialog_FocusInEvent_Callback = void (*)(KFileCustomDialog*, QFocusEvent*);
    using KFileCustomDialog_FocusOutEvent_Callback = void (*)(KFileCustomDialog*, QFocusEvent*);
    using KFileCustomDialog_EnterEvent_Callback = void (*)(KFileCustomDialog*, QEnterEvent*);
    using KFileCustomDialog_LeaveEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_PaintEvent_Callback = void (*)(KFileCustomDialog*, QPaintEvent*);
    using KFileCustomDialog_MoveEvent_Callback = void (*)(KFileCustomDialog*, QMoveEvent*);
    using KFileCustomDialog_TabletEvent_Callback = void (*)(KFileCustomDialog*, QTabletEvent*);
    using KFileCustomDialog_ActionEvent_Callback = void (*)(KFileCustomDialog*, QActionEvent*);
    using KFileCustomDialog_DragEnterEvent_Callback = void (*)(KFileCustomDialog*, QDragEnterEvent*);
    using KFileCustomDialog_DragMoveEvent_Callback = void (*)(KFileCustomDialog*, QDragMoveEvent*);
    using KFileCustomDialog_DragLeaveEvent_Callback = void (*)(KFileCustomDialog*, QDragLeaveEvent*);
    using KFileCustomDialog_DropEvent_Callback = void (*)(KFileCustomDialog*, QDropEvent*);
    using KFileCustomDialog_HideEvent_Callback = void (*)(KFileCustomDialog*, QHideEvent*);
    using KFileCustomDialog_NativeEvent_Callback = bool (*)(KFileCustomDialog*, libqt_string, void*, intptr_t*);
    using KFileCustomDialog_ChangeEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_Metric_Callback = int (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_InitPainter_Callback = void (*)(const KFileCustomDialog*, QPainter*);
    using KFileCustomDialog_Redirected_Callback = QPaintDevice* (*)(const KFileCustomDialog*, QPoint*);
    using KFileCustomDialog_SharedPainter_Callback = QPainter* (*)(const KFileCustomDialog*);
    using KFileCustomDialog_InputMethodEvent_Callback = void (*)(KFileCustomDialog*, QInputMethodEvent*);
    using KFileCustomDialog_InputMethodQuery_Callback = QVariant* (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_FocusNextPrevChild_Callback = bool (*)(KFileCustomDialog*, bool);
    using KFileCustomDialog_TimerEvent_Callback = void (*)(KFileCustomDialog*, QTimerEvent*);
    using KFileCustomDialog_ChildEvent_Callback = void (*)(KFileCustomDialog*, QChildEvent*);
    using KFileCustomDialog_CustomEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_ConnectNotify_Callback = void (*)(KFileCustomDialog*, QMetaMethod*);
    using KFileCustomDialog_DisconnectNotify_Callback = void (*)(KFileCustomDialog*, QMetaMethod*);
    using KFileCustomDialog::adjustPosition;
    using KFileCustomDialog::create;
    using KFileCustomDialog::destroy;
    using KFileCustomDialog::focusNextChild;
    using KFileCustomDialog::focusPreviousChild;
    using KFileCustomDialog::getDecodedMetricF;
    using KFileCustomDialog::isSignalConnected;
    using KFileCustomDialog::receivers;
    using KFileCustomDialog::sender;
    using KFileCustomDialog::senderSignalIndex;
    using KFileCustomDialog::updateMicroFocus;

    // Instance callback storage
    KFileCustomDialog_MetaObject_Callback kfilecustomdialog_metaobject_callback = nullptr;
    KFileCustomDialog_Metacast_Callback kfilecustomdialog_metacast_callback = nullptr;
    KFileCustomDialog_Metacall_Callback kfilecustomdialog_metacall_callback = nullptr;
    KFileCustomDialog_Accept_Callback kfilecustomdialog_accept_callback = nullptr;
    KFileCustomDialog_SetVisible_Callback kfilecustomdialog_setvisible_callback = nullptr;
    KFileCustomDialog_SizeHint_Callback kfilecustomdialog_sizehint_callback = nullptr;
    KFileCustomDialog_MinimumSizeHint_Callback kfilecustomdialog_minimumsizehint_callback = nullptr;
    KFileCustomDialog_Open_Callback kfilecustomdialog_open_callback = nullptr;
    KFileCustomDialog_Exec_Callback kfilecustomdialog_exec_callback = nullptr;
    KFileCustomDialog_Done_Callback kfilecustomdialog_done_callback = nullptr;
    KFileCustomDialog_Reject_Callback kfilecustomdialog_reject_callback = nullptr;
    KFileCustomDialog_KeyPressEvent_Callback kfilecustomdialog_keypressevent_callback = nullptr;
    KFileCustomDialog_CloseEvent_Callback kfilecustomdialog_closeevent_callback = nullptr;
    KFileCustomDialog_ShowEvent_Callback kfilecustomdialog_showevent_callback = nullptr;
    KFileCustomDialog_ResizeEvent_Callback kfilecustomdialog_resizeevent_callback = nullptr;
    KFileCustomDialog_ContextMenuEvent_Callback kfilecustomdialog_contextmenuevent_callback = nullptr;
    KFileCustomDialog_EventFilter_Callback kfilecustomdialog_eventfilter_callback = nullptr;
    KFileCustomDialog_DevType_Callback kfilecustomdialog_devtype_callback = nullptr;
    KFileCustomDialog_HeightForWidth_Callback kfilecustomdialog_heightforwidth_callback = nullptr;
    KFileCustomDialog_HasHeightForWidth_Callback kfilecustomdialog_hasheightforwidth_callback = nullptr;
    KFileCustomDialog_PaintEngine_Callback kfilecustomdialog_paintengine_callback = nullptr;
    KFileCustomDialog_Event_Callback kfilecustomdialog_event_callback = nullptr;
    KFileCustomDialog_MousePressEvent_Callback kfilecustomdialog_mousepressevent_callback = nullptr;
    KFileCustomDialog_MouseReleaseEvent_Callback kfilecustomdialog_mousereleaseevent_callback = nullptr;
    KFileCustomDialog_MouseDoubleClickEvent_Callback kfilecustomdialog_mousedoubleclickevent_callback = nullptr;
    KFileCustomDialog_MouseMoveEvent_Callback kfilecustomdialog_mousemoveevent_callback = nullptr;
    KFileCustomDialog_WheelEvent_Callback kfilecustomdialog_wheelevent_callback = nullptr;
    KFileCustomDialog_KeyReleaseEvent_Callback kfilecustomdialog_keyreleaseevent_callback = nullptr;
    KFileCustomDialog_FocusInEvent_Callback kfilecustomdialog_focusinevent_callback = nullptr;
    KFileCustomDialog_FocusOutEvent_Callback kfilecustomdialog_focusoutevent_callback = nullptr;
    KFileCustomDialog_EnterEvent_Callback kfilecustomdialog_enterevent_callback = nullptr;
    KFileCustomDialog_LeaveEvent_Callback kfilecustomdialog_leaveevent_callback = nullptr;
    KFileCustomDialog_PaintEvent_Callback kfilecustomdialog_paintevent_callback = nullptr;
    KFileCustomDialog_MoveEvent_Callback kfilecustomdialog_moveevent_callback = nullptr;
    KFileCustomDialog_TabletEvent_Callback kfilecustomdialog_tabletevent_callback = nullptr;
    KFileCustomDialog_ActionEvent_Callback kfilecustomdialog_actionevent_callback = nullptr;
    KFileCustomDialog_DragEnterEvent_Callback kfilecustomdialog_dragenterevent_callback = nullptr;
    KFileCustomDialog_DragMoveEvent_Callback kfilecustomdialog_dragmoveevent_callback = nullptr;
    KFileCustomDialog_DragLeaveEvent_Callback kfilecustomdialog_dragleaveevent_callback = nullptr;
    KFileCustomDialog_DropEvent_Callback kfilecustomdialog_dropevent_callback = nullptr;
    KFileCustomDialog_HideEvent_Callback kfilecustomdialog_hideevent_callback = nullptr;
    KFileCustomDialog_NativeEvent_Callback kfilecustomdialog_nativeevent_callback = nullptr;
    KFileCustomDialog_ChangeEvent_Callback kfilecustomdialog_changeevent_callback = nullptr;
    KFileCustomDialog_Metric_Callback kfilecustomdialog_metric_callback = nullptr;
    KFileCustomDialog_InitPainter_Callback kfilecustomdialog_initpainter_callback = nullptr;
    KFileCustomDialog_Redirected_Callback kfilecustomdialog_redirected_callback = nullptr;
    KFileCustomDialog_SharedPainter_Callback kfilecustomdialog_sharedpainter_callback = nullptr;
    KFileCustomDialog_InputMethodEvent_Callback kfilecustomdialog_inputmethodevent_callback = nullptr;
    KFileCustomDialog_InputMethodQuery_Callback kfilecustomdialog_inputmethodquery_callback = nullptr;
    KFileCustomDialog_FocusNextPrevChild_Callback kfilecustomdialog_focusnextprevchild_callback = nullptr;
    KFileCustomDialog_TimerEvent_Callback kfilecustomdialog_timerevent_callback = nullptr;
    KFileCustomDialog_ChildEvent_Callback kfilecustomdialog_childevent_callback = nullptr;
    KFileCustomDialog_CustomEvent_Callback kfilecustomdialog_customevent_callback = nullptr;
    KFileCustomDialog_ConnectNotify_Callback kfilecustomdialog_connectnotify_callback = nullptr;
    KFileCustomDialog_DisconnectNotify_Callback kfilecustomdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileCustomDialog {
        using KFileCustomDialog::actionEvent;
        using KFileCustomDialog::changeEvent;
        using KFileCustomDialog::childEvent;
        using KFileCustomDialog::closeEvent;
        using KFileCustomDialog::connectNotify;
        using KFileCustomDialog::contextMenuEvent;
        using KFileCustomDialog::customEvent;
        using KFileCustomDialog::disconnectNotify;
        using KFileCustomDialog::dragEnterEvent;
        using KFileCustomDialog::dragLeaveEvent;
        using KFileCustomDialog::dragMoveEvent;
        using KFileCustomDialog::dropEvent;
        using KFileCustomDialog::enterEvent;
        using KFileCustomDialog::event;
        using KFileCustomDialog::eventFilter;
        using KFileCustomDialog::focusInEvent;
        using KFileCustomDialog::focusNextPrevChild;
        using KFileCustomDialog::focusOutEvent;
        using KFileCustomDialog::hideEvent;
        using KFileCustomDialog::initPainter;
        using KFileCustomDialog::inputMethodEvent;
        using KFileCustomDialog::keyPressEvent;
        using KFileCustomDialog::keyReleaseEvent;
        using KFileCustomDialog::leaveEvent;
        using KFileCustomDialog::metric;
        using KFileCustomDialog::mouseDoubleClickEvent;
        using KFileCustomDialog::mouseMoveEvent;
        using KFileCustomDialog::mousePressEvent;
        using KFileCustomDialog::mouseReleaseEvent;
        using KFileCustomDialog::moveEvent;
        using KFileCustomDialog::nativeEvent;
        using KFileCustomDialog::paintEvent;
        using KFileCustomDialog::redirected;
        using KFileCustomDialog::resizeEvent;
        using KFileCustomDialog::sharedPainter;
        using KFileCustomDialog::showEvent;
        using KFileCustomDialog::tabletEvent;
        using KFileCustomDialog::timerEvent;
        using KFileCustomDialog::wheelEvent;
    };

    VirtualKFileCustomDialog(QWidget* parent) : KFileCustomDialog(parent) {};
    VirtualKFileCustomDialog() : KFileCustomDialog() {};
    VirtualKFileCustomDialog(const QUrl& startDir) : KFileCustomDialog(startDir) {};
    VirtualKFileCustomDialog(const QUrl& startDir, QWidget* parent) : KFileCustomDialog(startDir, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilecustomdialog_metaobject_callback) {
            QMetaObject* callback_ret = kfilecustomdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KFileCustomDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilecustomdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilecustomdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilecustomdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilecustomdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfilecustomdialog_accept_callback) {
            kfilecustomdialog_accept_callback(this);
            return;
        }
        KFileCustomDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilecustomdialog_setvisible_callback) {
            bool cbval1 = visible;
            kfilecustomdialog_setvisible_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilecustomdialog_sizehint_callback) {
            QSize* callback_ret = kfilecustomdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileCustomDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilecustomdialog_minimumsizehint_callback) {
            QSize* callback_ret = kfilecustomdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileCustomDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfilecustomdialog_open_callback) {
            kfilecustomdialog_open_callback(this);
            return;
        }
        KFileCustomDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfilecustomdialog_exec_callback) {
            int callback_ret = kfilecustomdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfilecustomdialog_done_callback) {
            int cbval1 = param1;
            kfilecustomdialog_done_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfilecustomdialog_reject_callback) {
            kfilecustomdialog_reject_callback(this);
            return;
        }
        KFileCustomDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfilecustomdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kfilecustomdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfilecustomdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kfilecustomdialog_closeevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfilecustomdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kfilecustomdialog_showevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfilecustomdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kfilecustomdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfilecustomdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kfilecustomdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfilecustomdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kfilecustomdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileCustomDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilecustomdialog_devtype_callback) {
            int callback_ret = kfilecustomdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilecustomdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfilecustomdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilecustomdialog_hasheightforwidth_callback) {
            bool callback_ret = kfilecustomdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFileCustomDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilecustomdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kfilecustomdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KFileCustomDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilecustomdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilecustomdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilecustomdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilecustomdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilecustomdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilecustomdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfilecustomdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfilecustomdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfilecustomdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfilecustomdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfilecustomdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfilecustomdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfilecustomdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfilecustomdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilecustomdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfilecustomdialog_enterevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilecustomdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfilecustomdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfilecustomdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfilecustomdialog_paintevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilecustomdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfilecustomdialog_moveevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilecustomdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfilecustomdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilecustomdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfilecustomdialog_actionevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilecustomdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfilecustomdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilecustomdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfilecustomdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilecustomdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfilecustomdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilecustomdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfilecustomdialog_dropevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfilecustomdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfilecustomdialog_hideevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilecustomdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfilecustomdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFileCustomDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfilecustomdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfilecustomdialog_changeevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilecustomdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfilecustomdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilecustomdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfilecustomdialog_initpainter_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilecustomdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfilecustomdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilecustomdialog_sharedpainter_callback) {
            QPainter* callback_ret = kfilecustomdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFileCustomDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilecustomdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfilecustomdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilecustomdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfilecustomdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileCustomDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilecustomdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfilecustomdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilecustomdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilecustomdialog_timerevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilecustomdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilecustomdialog_childevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilecustomdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kfilecustomdialog_customevent_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilecustomdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilecustomdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilecustomdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilecustomdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileCustomDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileCustomDialog_SuperKeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1);
    friend void KFileCustomDialog_SuperCloseEvent(KFileCustomDialog* self, QCloseEvent* param1);
    friend void KFileCustomDialog_SuperShowEvent(KFileCustomDialog* self, QShowEvent* param1);
    friend void KFileCustomDialog_SuperResizeEvent(KFileCustomDialog* self, QResizeEvent* param1);
    friend void KFileCustomDialog_SuperContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1);
    friend bool KFileCustomDialog_SuperEventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2);
    friend bool KFileCustomDialog_SuperEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_SuperMousePressEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperWheelEvent(KFileCustomDialog* self, QWheelEvent* event);
    friend void KFileCustomDialog_SuperKeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event);
    friend void KFileCustomDialog_SuperFocusInEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_SuperFocusOutEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_SuperEnterEvent(KFileCustomDialog* self, QEnterEvent* event);
    friend void KFileCustomDialog_SuperLeaveEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_SuperPaintEvent(KFileCustomDialog* self, QPaintEvent* event);
    friend void KFileCustomDialog_SuperMoveEvent(KFileCustomDialog* self, QMoveEvent* event);
    friend void KFileCustomDialog_SuperTabletEvent(KFileCustomDialog* self, QTabletEvent* event);
    friend void KFileCustomDialog_SuperActionEvent(KFileCustomDialog* self, QActionEvent* event);
    friend void KFileCustomDialog_SuperDragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event);
    friend void KFileCustomDialog_SuperDragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event);
    friend void KFileCustomDialog_SuperDragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event);
    friend void KFileCustomDialog_SuperDropEvent(KFileCustomDialog* self, QDropEvent* event);
    friend void KFileCustomDialog_SuperHideEvent(KFileCustomDialog* self, QHideEvent* event);
    friend bool KFileCustomDialog_SuperNativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFileCustomDialog_SuperChangeEvent(KFileCustomDialog* self, QEvent* param1);
    friend int KFileCustomDialog_SuperMetric(const KFileCustomDialog* self, int param1);
    friend void KFileCustomDialog_SuperInitPainter(const KFileCustomDialog* self, QPainter* painter);
    friend QPaintDevice* KFileCustomDialog_SuperRedirected(const KFileCustomDialog* self, QPoint* offset);
    friend QPainter* KFileCustomDialog_SuperSharedPainter(const KFileCustomDialog* self);
    friend void KFileCustomDialog_SuperInputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1);
    friend bool KFileCustomDialog_SuperFocusNextPrevChild(KFileCustomDialog* self, bool next);
    friend void KFileCustomDialog_SuperTimerEvent(KFileCustomDialog* self, QTimerEvent* event);
    friend void KFileCustomDialog_SuperChildEvent(KFileCustomDialog* self, QChildEvent* event);
    friend void KFileCustomDialog_SuperCustomEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_SuperConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
    friend void KFileCustomDialog_SuperDisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
};

#endif
