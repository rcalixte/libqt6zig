#pragma once
#ifndef EXTRAS_KIO_LIBKNAMEANDURLINPUTDIALOG_HXX
#define EXTRAS_KIO_LIBKNAMEANDURLINPUTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNameAndUrlInputDialog
class VirtualKNameAndUrlInputDialog final : public KNameAndUrlInputDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNameAndUrlInputDialog_MetaObject_Callback = QMetaObject* (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Metacast_Callback = void* (*)(KNameAndUrlInputDialog*, const char*);
    using KNameAndUrlInputDialog_Metacall_Callback = int (*)(KNameAndUrlInputDialog*, int, int, void**);
    using KNameAndUrlInputDialog_SetVisible_Callback = void (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_SizeHint_Callback = QSize* (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_MinimumSizeHint_Callback = QSize* (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Open_Callback = void (*)(KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Exec_Callback = int (*)(KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Done_Callback = void (*)(KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_Accept_Callback = void (*)(KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Reject_Callback = void (*)(KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_KeyPressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_CloseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QCloseEvent*);
    using KNameAndUrlInputDialog_ShowEvent_Callback = void (*)(KNameAndUrlInputDialog*, QShowEvent*);
    using KNameAndUrlInputDialog_ResizeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QResizeEvent*);
    using KNameAndUrlInputDialog_ContextMenuEvent_Callback = void (*)(KNameAndUrlInputDialog*, QContextMenuEvent*);
    using KNameAndUrlInputDialog_EventFilter_Callback = bool (*)(KNameAndUrlInputDialog*, QObject*, QEvent*);
    using KNameAndUrlInputDialog_DevType_Callback = int (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_HeightForWidth_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_HasHeightForWidth_Callback = bool (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_PaintEngine_Callback = QPaintEngine* (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_Event_Callback = bool (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_MousePressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_WheelEvent_Callback = void (*)(KNameAndUrlInputDialog*, QWheelEvent*);
    using KNameAndUrlInputDialog_KeyReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_FocusInEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_FocusOutEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_EnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEnterEvent*);
    using KNameAndUrlInputDialog_LeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_PaintEvent_Callback = void (*)(KNameAndUrlInputDialog*, QPaintEvent*);
    using KNameAndUrlInputDialog_MoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMoveEvent*);
    using KNameAndUrlInputDialog_TabletEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTabletEvent*);
    using KNameAndUrlInputDialog_ActionEvent_Callback = void (*)(KNameAndUrlInputDialog*, QActionEvent*);
    using KNameAndUrlInputDialog_DragEnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragEnterEvent*);
    using KNameAndUrlInputDialog_DragMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragMoveEvent*);
    using KNameAndUrlInputDialog_DragLeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragLeaveEvent*);
    using KNameAndUrlInputDialog_DropEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDropEvent*);
    using KNameAndUrlInputDialog_HideEvent_Callback = void (*)(KNameAndUrlInputDialog*, QHideEvent*);
    using KNameAndUrlInputDialog_NativeEvent_Callback = bool (*)(KNameAndUrlInputDialog*, libqt_string, void*, intptr_t*);
    using KNameAndUrlInputDialog_ChangeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_Metric_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_InitPainter_Callback = void (*)(const KNameAndUrlInputDialog*, QPainter*);
    using KNameAndUrlInputDialog_Redirected_Callback = QPaintDevice* (*)(const KNameAndUrlInputDialog*, QPoint*);
    using KNameAndUrlInputDialog_SharedPainter_Callback = QPainter* (*)(const KNameAndUrlInputDialog*);
    using KNameAndUrlInputDialog_InputMethodEvent_Callback = void (*)(KNameAndUrlInputDialog*, QInputMethodEvent*);
    using KNameAndUrlInputDialog_InputMethodQuery_Callback = QVariant* (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_FocusNextPrevChild_Callback = bool (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_TimerEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTimerEvent*);
    using KNameAndUrlInputDialog_ChildEvent_Callback = void (*)(KNameAndUrlInputDialog*, QChildEvent*);
    using KNameAndUrlInputDialog_CustomEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_ConnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_DisconnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog::adjustPosition;
    using KNameAndUrlInputDialog::create;
    using KNameAndUrlInputDialog::destroy;
    using KNameAndUrlInputDialog::focusNextChild;
    using KNameAndUrlInputDialog::focusPreviousChild;
    using KNameAndUrlInputDialog::getDecodedMetricF;
    using KNameAndUrlInputDialog::isSignalConnected;
    using KNameAndUrlInputDialog::receivers;
    using KNameAndUrlInputDialog::sender;
    using KNameAndUrlInputDialog::senderSignalIndex;
    using KNameAndUrlInputDialog::updateMicroFocus;

    // Instance callback storage
    KNameAndUrlInputDialog_MetaObject_Callback knameandurlinputdialog_metaobject_callback = nullptr;
    KNameAndUrlInputDialog_Metacast_Callback knameandurlinputdialog_metacast_callback = nullptr;
    KNameAndUrlInputDialog_Metacall_Callback knameandurlinputdialog_metacall_callback = nullptr;
    KNameAndUrlInputDialog_SetVisible_Callback knameandurlinputdialog_setvisible_callback = nullptr;
    KNameAndUrlInputDialog_SizeHint_Callback knameandurlinputdialog_sizehint_callback = nullptr;
    KNameAndUrlInputDialog_MinimumSizeHint_Callback knameandurlinputdialog_minimumsizehint_callback = nullptr;
    KNameAndUrlInputDialog_Open_Callback knameandurlinputdialog_open_callback = nullptr;
    KNameAndUrlInputDialog_Exec_Callback knameandurlinputdialog_exec_callback = nullptr;
    KNameAndUrlInputDialog_Done_Callback knameandurlinputdialog_done_callback = nullptr;
    KNameAndUrlInputDialog_Accept_Callback knameandurlinputdialog_accept_callback = nullptr;
    KNameAndUrlInputDialog_Reject_Callback knameandurlinputdialog_reject_callback = nullptr;
    KNameAndUrlInputDialog_KeyPressEvent_Callback knameandurlinputdialog_keypressevent_callback = nullptr;
    KNameAndUrlInputDialog_CloseEvent_Callback knameandurlinputdialog_closeevent_callback = nullptr;
    KNameAndUrlInputDialog_ShowEvent_Callback knameandurlinputdialog_showevent_callback = nullptr;
    KNameAndUrlInputDialog_ResizeEvent_Callback knameandurlinputdialog_resizeevent_callback = nullptr;
    KNameAndUrlInputDialog_ContextMenuEvent_Callback knameandurlinputdialog_contextmenuevent_callback = nullptr;
    KNameAndUrlInputDialog_EventFilter_Callback knameandurlinputdialog_eventfilter_callback = nullptr;
    KNameAndUrlInputDialog_DevType_Callback knameandurlinputdialog_devtype_callback = nullptr;
    KNameAndUrlInputDialog_HeightForWidth_Callback knameandurlinputdialog_heightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_HasHeightForWidth_Callback knameandurlinputdialog_hasheightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_PaintEngine_Callback knameandurlinputdialog_paintengine_callback = nullptr;
    KNameAndUrlInputDialog_Event_Callback knameandurlinputdialog_event_callback = nullptr;
    KNameAndUrlInputDialog_MousePressEvent_Callback knameandurlinputdialog_mousepressevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseReleaseEvent_Callback knameandurlinputdialog_mousereleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback knameandurlinputdialog_mousedoubleclickevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseMoveEvent_Callback knameandurlinputdialog_mousemoveevent_callback = nullptr;
    KNameAndUrlInputDialog_WheelEvent_Callback knameandurlinputdialog_wheelevent_callback = nullptr;
    KNameAndUrlInputDialog_KeyReleaseEvent_Callback knameandurlinputdialog_keyreleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusInEvent_Callback knameandurlinputdialog_focusinevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusOutEvent_Callback knameandurlinputdialog_focusoutevent_callback = nullptr;
    KNameAndUrlInputDialog_EnterEvent_Callback knameandurlinputdialog_enterevent_callback = nullptr;
    KNameAndUrlInputDialog_LeaveEvent_Callback knameandurlinputdialog_leaveevent_callback = nullptr;
    KNameAndUrlInputDialog_PaintEvent_Callback knameandurlinputdialog_paintevent_callback = nullptr;
    KNameAndUrlInputDialog_MoveEvent_Callback knameandurlinputdialog_moveevent_callback = nullptr;
    KNameAndUrlInputDialog_TabletEvent_Callback knameandurlinputdialog_tabletevent_callback = nullptr;
    KNameAndUrlInputDialog_ActionEvent_Callback knameandurlinputdialog_actionevent_callback = nullptr;
    KNameAndUrlInputDialog_DragEnterEvent_Callback knameandurlinputdialog_dragenterevent_callback = nullptr;
    KNameAndUrlInputDialog_DragMoveEvent_Callback knameandurlinputdialog_dragmoveevent_callback = nullptr;
    KNameAndUrlInputDialog_DragLeaveEvent_Callback knameandurlinputdialog_dragleaveevent_callback = nullptr;
    KNameAndUrlInputDialog_DropEvent_Callback knameandurlinputdialog_dropevent_callback = nullptr;
    KNameAndUrlInputDialog_HideEvent_Callback knameandurlinputdialog_hideevent_callback = nullptr;
    KNameAndUrlInputDialog_NativeEvent_Callback knameandurlinputdialog_nativeevent_callback = nullptr;
    KNameAndUrlInputDialog_ChangeEvent_Callback knameandurlinputdialog_changeevent_callback = nullptr;
    KNameAndUrlInputDialog_Metric_Callback knameandurlinputdialog_metric_callback = nullptr;
    KNameAndUrlInputDialog_InitPainter_Callback knameandurlinputdialog_initpainter_callback = nullptr;
    KNameAndUrlInputDialog_Redirected_Callback knameandurlinputdialog_redirected_callback = nullptr;
    KNameAndUrlInputDialog_SharedPainter_Callback knameandurlinputdialog_sharedpainter_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodEvent_Callback knameandurlinputdialog_inputmethodevent_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodQuery_Callback knameandurlinputdialog_inputmethodquery_callback = nullptr;
    KNameAndUrlInputDialog_FocusNextPrevChild_Callback knameandurlinputdialog_focusnextprevchild_callback = nullptr;
    KNameAndUrlInputDialog_TimerEvent_Callback knameandurlinputdialog_timerevent_callback = nullptr;
    KNameAndUrlInputDialog_ChildEvent_Callback knameandurlinputdialog_childevent_callback = nullptr;
    KNameAndUrlInputDialog_CustomEvent_Callback knameandurlinputdialog_customevent_callback = nullptr;
    KNameAndUrlInputDialog_ConnectNotify_Callback knameandurlinputdialog_connectnotify_callback = nullptr;
    KNameAndUrlInputDialog_DisconnectNotify_Callback knameandurlinputdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNameAndUrlInputDialog {
        using KNameAndUrlInputDialog::actionEvent;
        using KNameAndUrlInputDialog::changeEvent;
        using KNameAndUrlInputDialog::childEvent;
        using KNameAndUrlInputDialog::closeEvent;
        using KNameAndUrlInputDialog::connectNotify;
        using KNameAndUrlInputDialog::contextMenuEvent;
        using KNameAndUrlInputDialog::customEvent;
        using KNameAndUrlInputDialog::disconnectNotify;
        using KNameAndUrlInputDialog::dragEnterEvent;
        using KNameAndUrlInputDialog::dragLeaveEvent;
        using KNameAndUrlInputDialog::dragMoveEvent;
        using KNameAndUrlInputDialog::dropEvent;
        using KNameAndUrlInputDialog::enterEvent;
        using KNameAndUrlInputDialog::event;
        using KNameAndUrlInputDialog::eventFilter;
        using KNameAndUrlInputDialog::focusInEvent;
        using KNameAndUrlInputDialog::focusNextPrevChild;
        using KNameAndUrlInputDialog::focusOutEvent;
        using KNameAndUrlInputDialog::hideEvent;
        using KNameAndUrlInputDialog::initPainter;
        using KNameAndUrlInputDialog::inputMethodEvent;
        using KNameAndUrlInputDialog::keyPressEvent;
        using KNameAndUrlInputDialog::keyReleaseEvent;
        using KNameAndUrlInputDialog::leaveEvent;
        using KNameAndUrlInputDialog::metric;
        using KNameAndUrlInputDialog::mouseDoubleClickEvent;
        using KNameAndUrlInputDialog::mouseMoveEvent;
        using KNameAndUrlInputDialog::mousePressEvent;
        using KNameAndUrlInputDialog::mouseReleaseEvent;
        using KNameAndUrlInputDialog::moveEvent;
        using KNameAndUrlInputDialog::nativeEvent;
        using KNameAndUrlInputDialog::paintEvent;
        using KNameAndUrlInputDialog::redirected;
        using KNameAndUrlInputDialog::resizeEvent;
        using KNameAndUrlInputDialog::sharedPainter;
        using KNameAndUrlInputDialog::showEvent;
        using KNameAndUrlInputDialog::tabletEvent;
        using KNameAndUrlInputDialog::timerEvent;
        using KNameAndUrlInputDialog::wheelEvent;
    };

    VirtualKNameAndUrlInputDialog(const QString& nameLabel, const QString& urlLabel, const QUrl& startDir, QWidget* parent) : KNameAndUrlInputDialog(nameLabel, urlLabel, startDir, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knameandurlinputdialog_metaobject_callback) {
            QMetaObject* callback_ret = knameandurlinputdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knameandurlinputdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knameandurlinputdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knameandurlinputdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knameandurlinputdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knameandurlinputdialog_setvisible_callback) {
            bool cbval1 = visible;
            knameandurlinputdialog_setvisible_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knameandurlinputdialog_sizehint_callback) {
            QSize* callback_ret = knameandurlinputdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNameAndUrlInputDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knameandurlinputdialog_minimumsizehint_callback) {
            QSize* callback_ret = knameandurlinputdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNameAndUrlInputDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knameandurlinputdialog_open_callback) {
            knameandurlinputdialog_open_callback(this);
            return;
        }
        KNameAndUrlInputDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knameandurlinputdialog_exec_callback) {
            int callback_ret = knameandurlinputdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knameandurlinputdialog_done_callback) {
            int cbval1 = param1;
            knameandurlinputdialog_done_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knameandurlinputdialog_accept_callback) {
            knameandurlinputdialog_accept_callback(this);
            return;
        }
        KNameAndUrlInputDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knameandurlinputdialog_reject_callback) {
            knameandurlinputdialog_reject_callback(this);
            return;
        }
        KNameAndUrlInputDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knameandurlinputdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            knameandurlinputdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knameandurlinputdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            knameandurlinputdialog_closeevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knameandurlinputdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            knameandurlinputdialog_showevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knameandurlinputdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            knameandurlinputdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knameandurlinputdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            knameandurlinputdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knameandurlinputdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = knameandurlinputdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knameandurlinputdialog_devtype_callback) {
            int callback_ret = knameandurlinputdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knameandurlinputdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = knameandurlinputdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knameandurlinputdialog_hasheightforwidth_callback) {
            bool callback_ret = knameandurlinputdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knameandurlinputdialog_paintengine_callback) {
            QPaintEngine* callback_ret = knameandurlinputdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knameandurlinputdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knameandurlinputdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            knameandurlinputdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            knameandurlinputdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            knameandurlinputdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            knameandurlinputdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knameandurlinputdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            knameandurlinputdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knameandurlinputdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            knameandurlinputdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            knameandurlinputdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            knameandurlinputdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knameandurlinputdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            knameandurlinputdialog_enterevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knameandurlinputdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            knameandurlinputdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knameandurlinputdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            knameandurlinputdialog_paintevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knameandurlinputdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            knameandurlinputdialog_moveevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knameandurlinputdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            knameandurlinputdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knameandurlinputdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            knameandurlinputdialog_actionevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knameandurlinputdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            knameandurlinputdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knameandurlinputdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            knameandurlinputdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knameandurlinputdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            knameandurlinputdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knameandurlinputdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            knameandurlinputdialog_dropevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knameandurlinputdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            knameandurlinputdialog_hideevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knameandurlinputdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = knameandurlinputdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knameandurlinputdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            knameandurlinputdialog_changeevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knameandurlinputdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = knameandurlinputdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knameandurlinputdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            knameandurlinputdialog_initpainter_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knameandurlinputdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = knameandurlinputdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knameandurlinputdialog_sharedpainter_callback) {
            QPainter* callback_ret = knameandurlinputdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knameandurlinputdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            knameandurlinputdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knameandurlinputdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = knameandurlinputdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNameAndUrlInputDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knameandurlinputdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = knameandurlinputdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knameandurlinputdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knameandurlinputdialog_timerevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knameandurlinputdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            knameandurlinputdialog_childevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knameandurlinputdialog_customevent_callback) {
            QEvent* cbval1 = event;
            knameandurlinputdialog_customevent_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knameandurlinputdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knameandurlinputdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNameAndUrlInputDialog_SuperKeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1);
    friend void KNameAndUrlInputDialog_SuperCloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1);
    friend void KNameAndUrlInputDialog_SuperShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1);
    friend void KNameAndUrlInputDialog_SuperResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1);
    friend void KNameAndUrlInputDialog_SuperContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1);
    friend bool KNameAndUrlInputDialog_SuperEventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2);
    friend bool KNameAndUrlInputDialog_SuperEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_SuperMousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperWheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event);
    friend void KNameAndUrlInputDialog_SuperKeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event);
    friend void KNameAndUrlInputDialog_SuperFocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_SuperFocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_SuperEnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event);
    friend void KNameAndUrlInputDialog_SuperLeaveEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_SuperPaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event);
    friend void KNameAndUrlInputDialog_SuperMoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event);
    friend void KNameAndUrlInputDialog_SuperTabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event);
    friend void KNameAndUrlInputDialog_SuperActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event);
    friend void KNameAndUrlInputDialog_SuperDropEvent(KNameAndUrlInputDialog* self, QDropEvent* event);
    friend void KNameAndUrlInputDialog_SuperHideEvent(KNameAndUrlInputDialog* self, QHideEvent* event);
    friend bool KNameAndUrlInputDialog_SuperNativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNameAndUrlInputDialog_SuperChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1);
    friend int KNameAndUrlInputDialog_SuperMetric(const KNameAndUrlInputDialog* self, int param1);
    friend void KNameAndUrlInputDialog_SuperInitPainter(const KNameAndUrlInputDialog* self, QPainter* painter);
    friend QPaintDevice* KNameAndUrlInputDialog_SuperRedirected(const KNameAndUrlInputDialog* self, QPoint* offset);
    friend QPainter* KNameAndUrlInputDialog_SuperSharedPainter(const KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_SuperInputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1);
    friend bool KNameAndUrlInputDialog_SuperFocusNextPrevChild(KNameAndUrlInputDialog* self, bool next);
    friend void KNameAndUrlInputDialog_SuperTimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event);
    friend void KNameAndUrlInputDialog_SuperChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event);
    friend void KNameAndUrlInputDialog_SuperCustomEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_SuperConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_SuperDisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
};

#endif
