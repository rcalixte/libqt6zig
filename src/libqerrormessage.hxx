#pragma once
#ifndef LIBQERRORMESSAGE_HXX
#define LIBQERRORMESSAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QErrorMessage
class VirtualQErrorMessage final : public QErrorMessage {
  public:
    // Virtual class public types (including callbacks and access types)
    using QErrorMessage_MetaObject_Callback = QMetaObject* (*)(const QErrorMessage*);
    using QErrorMessage_Metacast_Callback = void* (*)(QErrorMessage*, const char*);
    using QErrorMessage_Metacall_Callback = int (*)(QErrorMessage*, int, int, void**);
    using QErrorMessage_Done_Callback = void (*)(QErrorMessage*, int);
    using QErrorMessage_ChangeEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_SetVisible_Callback = void (*)(QErrorMessage*, bool);
    using QErrorMessage_SizeHint_Callback = QSize* (*)(const QErrorMessage*);
    using QErrorMessage_MinimumSizeHint_Callback = QSize* (*)(const QErrorMessage*);
    using QErrorMessage_Open_Callback = void (*)(QErrorMessage*);
    using QErrorMessage_Exec_Callback = int (*)(QErrorMessage*);
    using QErrorMessage_Accept_Callback = void (*)(QErrorMessage*);
    using QErrorMessage_Reject_Callback = void (*)(QErrorMessage*);
    using QErrorMessage_KeyPressEvent_Callback = void (*)(QErrorMessage*, QKeyEvent*);
    using QErrorMessage_CloseEvent_Callback = void (*)(QErrorMessage*, QCloseEvent*);
    using QErrorMessage_ShowEvent_Callback = void (*)(QErrorMessage*, QShowEvent*);
    using QErrorMessage_ResizeEvent_Callback = void (*)(QErrorMessage*, QResizeEvent*);
    using QErrorMessage_ContextMenuEvent_Callback = void (*)(QErrorMessage*, QContextMenuEvent*);
    using QErrorMessage_EventFilter_Callback = bool (*)(QErrorMessage*, QObject*, QEvent*);
    using QErrorMessage_DevType_Callback = int (*)(const QErrorMessage*);
    using QErrorMessage_HeightForWidth_Callback = int (*)(const QErrorMessage*, int);
    using QErrorMessage_HasHeightForWidth_Callback = bool (*)(const QErrorMessage*);
    using QErrorMessage_PaintEngine_Callback = QPaintEngine* (*)(const QErrorMessage*);
    using QErrorMessage_Event_Callback = bool (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_MousePressEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseReleaseEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseDoubleClickEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseMoveEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_WheelEvent_Callback = void (*)(QErrorMessage*, QWheelEvent*);
    using QErrorMessage_KeyReleaseEvent_Callback = void (*)(QErrorMessage*, QKeyEvent*);
    using QErrorMessage_FocusInEvent_Callback = void (*)(QErrorMessage*, QFocusEvent*);
    using QErrorMessage_FocusOutEvent_Callback = void (*)(QErrorMessage*, QFocusEvent*);
    using QErrorMessage_EnterEvent_Callback = void (*)(QErrorMessage*, QEnterEvent*);
    using QErrorMessage_LeaveEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_PaintEvent_Callback = void (*)(QErrorMessage*, QPaintEvent*);
    using QErrorMessage_MoveEvent_Callback = void (*)(QErrorMessage*, QMoveEvent*);
    using QErrorMessage_TabletEvent_Callback = void (*)(QErrorMessage*, QTabletEvent*);
    using QErrorMessage_ActionEvent_Callback = void (*)(QErrorMessage*, QActionEvent*);
    using QErrorMessage_DragEnterEvent_Callback = void (*)(QErrorMessage*, QDragEnterEvent*);
    using QErrorMessage_DragMoveEvent_Callback = void (*)(QErrorMessage*, QDragMoveEvent*);
    using QErrorMessage_DragLeaveEvent_Callback = void (*)(QErrorMessage*, QDragLeaveEvent*);
    using QErrorMessage_DropEvent_Callback = void (*)(QErrorMessage*, QDropEvent*);
    using QErrorMessage_HideEvent_Callback = void (*)(QErrorMessage*, QHideEvent*);
    using QErrorMessage_NativeEvent_Callback = bool (*)(QErrorMessage*, libqt_string, void*, intptr_t*);
    using QErrorMessage_Metric_Callback = int (*)(const QErrorMessage*, int);
    using QErrorMessage_InitPainter_Callback = void (*)(const QErrorMessage*, QPainter*);
    using QErrorMessage_Redirected_Callback = QPaintDevice* (*)(const QErrorMessage*, QPoint*);
    using QErrorMessage_SharedPainter_Callback = QPainter* (*)(const QErrorMessage*);
    using QErrorMessage_InputMethodEvent_Callback = void (*)(QErrorMessage*, QInputMethodEvent*);
    using QErrorMessage_InputMethodQuery_Callback = QVariant* (*)(const QErrorMessage*, int);
    using QErrorMessage_FocusNextPrevChild_Callback = bool (*)(QErrorMessage*, bool);
    using QErrorMessage_TimerEvent_Callback = void (*)(QErrorMessage*, QTimerEvent*);
    using QErrorMessage_ChildEvent_Callback = void (*)(QErrorMessage*, QChildEvent*);
    using QErrorMessage_CustomEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_ConnectNotify_Callback = void (*)(QErrorMessage*, QMetaMethod*);
    using QErrorMessage_DisconnectNotify_Callback = void (*)(QErrorMessage*, QMetaMethod*);
    using QErrorMessage::adjustPosition;
    using QErrorMessage::create;
    using QErrorMessage::destroy;
    using QErrorMessage::focusNextChild;
    using QErrorMessage::focusPreviousChild;
    using QErrorMessage::getDecodedMetricF;
    using QErrorMessage::isSignalConnected;
    using QErrorMessage::receivers;
    using QErrorMessage::sender;
    using QErrorMessage::senderSignalIndex;
    using QErrorMessage::updateMicroFocus;

    // Instance callback storage
    QErrorMessage_MetaObject_Callback qerrormessage_metaobject_callback = nullptr;
    QErrorMessage_Metacast_Callback qerrormessage_metacast_callback = nullptr;
    QErrorMessage_Metacall_Callback qerrormessage_metacall_callback = nullptr;
    QErrorMessage_Done_Callback qerrormessage_done_callback = nullptr;
    QErrorMessage_ChangeEvent_Callback qerrormessage_changeevent_callback = nullptr;
    QErrorMessage_SetVisible_Callback qerrormessage_setvisible_callback = nullptr;
    QErrorMessage_SizeHint_Callback qerrormessage_sizehint_callback = nullptr;
    QErrorMessage_MinimumSizeHint_Callback qerrormessage_minimumsizehint_callback = nullptr;
    QErrorMessage_Open_Callback qerrormessage_open_callback = nullptr;
    QErrorMessage_Exec_Callback qerrormessage_exec_callback = nullptr;
    QErrorMessage_Accept_Callback qerrormessage_accept_callback = nullptr;
    QErrorMessage_Reject_Callback qerrormessage_reject_callback = nullptr;
    QErrorMessage_KeyPressEvent_Callback qerrormessage_keypressevent_callback = nullptr;
    QErrorMessage_CloseEvent_Callback qerrormessage_closeevent_callback = nullptr;
    QErrorMessage_ShowEvent_Callback qerrormessage_showevent_callback = nullptr;
    QErrorMessage_ResizeEvent_Callback qerrormessage_resizeevent_callback = nullptr;
    QErrorMessage_ContextMenuEvent_Callback qerrormessage_contextmenuevent_callback = nullptr;
    QErrorMessage_EventFilter_Callback qerrormessage_eventfilter_callback = nullptr;
    QErrorMessage_DevType_Callback qerrormessage_devtype_callback = nullptr;
    QErrorMessage_HeightForWidth_Callback qerrormessage_heightforwidth_callback = nullptr;
    QErrorMessage_HasHeightForWidth_Callback qerrormessage_hasheightforwidth_callback = nullptr;
    QErrorMessage_PaintEngine_Callback qerrormessage_paintengine_callback = nullptr;
    QErrorMessage_Event_Callback qerrormessage_event_callback = nullptr;
    QErrorMessage_MousePressEvent_Callback qerrormessage_mousepressevent_callback = nullptr;
    QErrorMessage_MouseReleaseEvent_Callback qerrormessage_mousereleaseevent_callback = nullptr;
    QErrorMessage_MouseDoubleClickEvent_Callback qerrormessage_mousedoubleclickevent_callback = nullptr;
    QErrorMessage_MouseMoveEvent_Callback qerrormessage_mousemoveevent_callback = nullptr;
    QErrorMessage_WheelEvent_Callback qerrormessage_wheelevent_callback = nullptr;
    QErrorMessage_KeyReleaseEvent_Callback qerrormessage_keyreleaseevent_callback = nullptr;
    QErrorMessage_FocusInEvent_Callback qerrormessage_focusinevent_callback = nullptr;
    QErrorMessage_FocusOutEvent_Callback qerrormessage_focusoutevent_callback = nullptr;
    QErrorMessage_EnterEvent_Callback qerrormessage_enterevent_callback = nullptr;
    QErrorMessage_LeaveEvent_Callback qerrormessage_leaveevent_callback = nullptr;
    QErrorMessage_PaintEvent_Callback qerrormessage_paintevent_callback = nullptr;
    QErrorMessage_MoveEvent_Callback qerrormessage_moveevent_callback = nullptr;
    QErrorMessage_TabletEvent_Callback qerrormessage_tabletevent_callback = nullptr;
    QErrorMessage_ActionEvent_Callback qerrormessage_actionevent_callback = nullptr;
    QErrorMessage_DragEnterEvent_Callback qerrormessage_dragenterevent_callback = nullptr;
    QErrorMessage_DragMoveEvent_Callback qerrormessage_dragmoveevent_callback = nullptr;
    QErrorMessage_DragLeaveEvent_Callback qerrormessage_dragleaveevent_callback = nullptr;
    QErrorMessage_DropEvent_Callback qerrormessage_dropevent_callback = nullptr;
    QErrorMessage_HideEvent_Callback qerrormessage_hideevent_callback = nullptr;
    QErrorMessage_NativeEvent_Callback qerrormessage_nativeevent_callback = nullptr;
    QErrorMessage_Metric_Callback qerrormessage_metric_callback = nullptr;
    QErrorMessage_InitPainter_Callback qerrormessage_initpainter_callback = nullptr;
    QErrorMessage_Redirected_Callback qerrormessage_redirected_callback = nullptr;
    QErrorMessage_SharedPainter_Callback qerrormessage_sharedpainter_callback = nullptr;
    QErrorMessage_InputMethodEvent_Callback qerrormessage_inputmethodevent_callback = nullptr;
    QErrorMessage_InputMethodQuery_Callback qerrormessage_inputmethodquery_callback = nullptr;
    QErrorMessage_FocusNextPrevChild_Callback qerrormessage_focusnextprevchild_callback = nullptr;
    QErrorMessage_TimerEvent_Callback qerrormessage_timerevent_callback = nullptr;
    QErrorMessage_ChildEvent_Callback qerrormessage_childevent_callback = nullptr;
    QErrorMessage_CustomEvent_Callback qerrormessage_customevent_callback = nullptr;
    QErrorMessage_ConnectNotify_Callback qerrormessage_connectnotify_callback = nullptr;
    QErrorMessage_DisconnectNotify_Callback qerrormessage_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QErrorMessage {
        using QErrorMessage::actionEvent;
        using QErrorMessage::changeEvent;
        using QErrorMessage::childEvent;
        using QErrorMessage::closeEvent;
        using QErrorMessage::connectNotify;
        using QErrorMessage::contextMenuEvent;
        using QErrorMessage::customEvent;
        using QErrorMessage::disconnectNotify;
        using QErrorMessage::done;
        using QErrorMessage::dragEnterEvent;
        using QErrorMessage::dragLeaveEvent;
        using QErrorMessage::dragMoveEvent;
        using QErrorMessage::dropEvent;
        using QErrorMessage::enterEvent;
        using QErrorMessage::event;
        using QErrorMessage::eventFilter;
        using QErrorMessage::focusInEvent;
        using QErrorMessage::focusNextPrevChild;
        using QErrorMessage::focusOutEvent;
        using QErrorMessage::hideEvent;
        using QErrorMessage::initPainter;
        using QErrorMessage::inputMethodEvent;
        using QErrorMessage::keyPressEvent;
        using QErrorMessage::keyReleaseEvent;
        using QErrorMessage::leaveEvent;
        using QErrorMessage::metric;
        using QErrorMessage::mouseDoubleClickEvent;
        using QErrorMessage::mouseMoveEvent;
        using QErrorMessage::mousePressEvent;
        using QErrorMessage::mouseReleaseEvent;
        using QErrorMessage::moveEvent;
        using QErrorMessage::nativeEvent;
        using QErrorMessage::paintEvent;
        using QErrorMessage::redirected;
        using QErrorMessage::resizeEvent;
        using QErrorMessage::sharedPainter;
        using QErrorMessage::showEvent;
        using QErrorMessage::tabletEvent;
        using QErrorMessage::timerEvent;
        using QErrorMessage::wheelEvent;
    };

    VirtualQErrorMessage(QWidget* parent) : QErrorMessage(parent) {};
    VirtualQErrorMessage() : QErrorMessage() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qerrormessage_metaobject_callback) {
            QMetaObject* callback_ret = qerrormessage_metaobject_callback(this);
            return callback_ret;
        }
        return QErrorMessage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qerrormessage_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qerrormessage_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qerrormessage_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qerrormessage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qerrormessage_done_callback) {
            int cbval1 = param1;
            qerrormessage_done_callback(this, cbval1);
            return;
        }
        QErrorMessage::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qerrormessage_changeevent_callback) {
            QEvent* cbval1 = e;
            qerrormessage_changeevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qerrormessage_setvisible_callback) {
            bool cbval1 = visible;
            qerrormessage_setvisible_callback(this, cbval1);
            return;
        }
        QErrorMessage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qerrormessage_sizehint_callback) {
            QSize* callback_ret = qerrormessage_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QErrorMessage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qerrormessage_minimumsizehint_callback) {
            QSize* callback_ret = qerrormessage_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QErrorMessage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qerrormessage_open_callback) {
            qerrormessage_open_callback(this);
            return;
        }
        QErrorMessage::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qerrormessage_exec_callback) {
            int callback_ret = qerrormessage_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qerrormessage_accept_callback) {
            qerrormessage_accept_callback(this);
            return;
        }
        QErrorMessage::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qerrormessage_reject_callback) {
            qerrormessage_reject_callback(this);
            return;
        }
        QErrorMessage::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qerrormessage_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qerrormessage_keypressevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qerrormessage_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qerrormessage_closeevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qerrormessage_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qerrormessage_showevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qerrormessage_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qerrormessage_resizeevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qerrormessage_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qerrormessage_contextmenuevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qerrormessage_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qerrormessage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QErrorMessage::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qerrormessage_devtype_callback) {
            int callback_ret = qerrormessage_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qerrormessage_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qerrormessage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qerrormessage_hasheightforwidth_callback) {
            bool callback_ret = qerrormessage_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QErrorMessage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qerrormessage_paintengine_callback) {
            QPaintEngine* callback_ret = qerrormessage_paintengine_callback(this);
            return callback_ret;
        }
        return QErrorMessage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qerrormessage_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qerrormessage_event_callback(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qerrormessage_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qerrormessage_mousepressevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qerrormessage_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qerrormessage_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qerrormessage_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qerrormessage_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qerrormessage_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qerrormessage_mousemoveevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qerrormessage_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qerrormessage_wheelevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qerrormessage_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qerrormessage_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qerrormessage_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qerrormessage_focusinevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qerrormessage_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qerrormessage_focusoutevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qerrormessage_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qerrormessage_enterevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qerrormessage_leaveevent_callback) {
            QEvent* cbval1 = event;
            qerrormessage_leaveevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qerrormessage_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qerrormessage_paintevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qerrormessage_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qerrormessage_moveevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qerrormessage_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qerrormessage_tabletevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qerrormessage_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qerrormessage_actionevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qerrormessage_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qerrormessage_dragenterevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qerrormessage_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qerrormessage_dragmoveevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qerrormessage_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qerrormessage_dragleaveevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qerrormessage_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qerrormessage_dropevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qerrormessage_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qerrormessage_hideevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qerrormessage_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qerrormessage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QErrorMessage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qerrormessage_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qerrormessage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qerrormessage_initpainter_callback) {
            QPainter* cbval1 = painter;
            qerrormessage_initpainter_callback(this, cbval1);
            return;
        }
        QErrorMessage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qerrormessage_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qerrormessage_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qerrormessage_sharedpainter_callback) {
            QPainter* callback_ret = qerrormessage_sharedpainter_callback(this);
            return callback_ret;
        }
        return QErrorMessage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qerrormessage_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qerrormessage_inputmethodevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qerrormessage_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qerrormessage_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QErrorMessage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qerrormessage_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qerrormessage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qerrormessage_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qerrormessage_timerevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qerrormessage_childevent_callback) {
            QChildEvent* cbval1 = event;
            qerrormessage_childevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qerrormessage_customevent_callback) {
            QEvent* cbval1 = event;
            qerrormessage_customevent_callback(this, cbval1);
            return;
        }
        QErrorMessage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qerrormessage_connectnotify_callback(this, cbval1);
            return;
        }
        QErrorMessage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qerrormessage_disconnectnotify_callback(this, cbval1);
            return;
        }
        QErrorMessage::disconnectNotify(signal);
    }

    // Friend functions
    friend void QErrorMessage_SuperDone(QErrorMessage* self, int param1);
    friend void QErrorMessage_SuperChangeEvent(QErrorMessage* self, QEvent* e);
    friend void QErrorMessage_SuperKeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
    friend void QErrorMessage_SuperCloseEvent(QErrorMessage* self, QCloseEvent* param1);
    friend void QErrorMessage_SuperShowEvent(QErrorMessage* self, QShowEvent* param1);
    friend void QErrorMessage_SuperResizeEvent(QErrorMessage* self, QResizeEvent* param1);
    friend void QErrorMessage_SuperContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
    friend bool QErrorMessage_SuperEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
    friend bool QErrorMessage_SuperEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_SuperMousePressEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperWheelEvent(QErrorMessage* self, QWheelEvent* event);
    friend void QErrorMessage_SuperKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
    friend void QErrorMessage_SuperFocusInEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_SuperFocusOutEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_SuperEnterEvent(QErrorMessage* self, QEnterEvent* event);
    friend void QErrorMessage_SuperLeaveEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_SuperPaintEvent(QErrorMessage* self, QPaintEvent* event);
    friend void QErrorMessage_SuperMoveEvent(QErrorMessage* self, QMoveEvent* event);
    friend void QErrorMessage_SuperTabletEvent(QErrorMessage* self, QTabletEvent* event);
    friend void QErrorMessage_SuperActionEvent(QErrorMessage* self, QActionEvent* event);
    friend void QErrorMessage_SuperDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
    friend void QErrorMessage_SuperDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
    friend void QErrorMessage_SuperDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
    friend void QErrorMessage_SuperDropEvent(QErrorMessage* self, QDropEvent* event);
    friend void QErrorMessage_SuperHideEvent(QErrorMessage* self, QHideEvent* event);
    friend bool QErrorMessage_SuperNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QErrorMessage_SuperMetric(const QErrorMessage* self, int param1);
    friend void QErrorMessage_SuperInitPainter(const QErrorMessage* self, QPainter* painter);
    friend QPaintDevice* QErrorMessage_SuperRedirected(const QErrorMessage* self, QPoint* offset);
    friend QPainter* QErrorMessage_SuperSharedPainter(const QErrorMessage* self);
    friend void QErrorMessage_SuperInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
    friend bool QErrorMessage_SuperFocusNextPrevChild(QErrorMessage* self, bool next);
    friend void QErrorMessage_SuperTimerEvent(QErrorMessage* self, QTimerEvent* event);
    friend void QErrorMessage_SuperChildEvent(QErrorMessage* self, QChildEvent* event);
    friend void QErrorMessage_SuperCustomEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_SuperConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_SuperDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
};

#endif
