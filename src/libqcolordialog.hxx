#pragma once
#ifndef LIBQCOLORDIALOG_HXX
#define LIBQCOLORDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QColorDialog
class VirtualQColorDialog final : public QColorDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QColorDialog_MetaObject_Callback = QMetaObject* (*)(const QColorDialog*);
    using QColorDialog_Metacast_Callback = void* (*)(QColorDialog*, const char*);
    using QColorDialog_Metacall_Callback = int (*)(QColorDialog*, int, int, void**);
    using QColorDialog_SetVisible_Callback = void (*)(QColorDialog*, bool);
    using QColorDialog_ChangeEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_Done_Callback = void (*)(QColorDialog*, int);
    using QColorDialog_SizeHint_Callback = QSize* (*)(const QColorDialog*);
    using QColorDialog_MinimumSizeHint_Callback = QSize* (*)(const QColorDialog*);
    using QColorDialog_Open_Callback = void (*)(QColorDialog*);
    using QColorDialog_Exec_Callback = int (*)(QColorDialog*);
    using QColorDialog_Accept_Callback = void (*)(QColorDialog*);
    using QColorDialog_Reject_Callback = void (*)(QColorDialog*);
    using QColorDialog_KeyPressEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_CloseEvent_Callback = void (*)(QColorDialog*, QCloseEvent*);
    using QColorDialog_ShowEvent_Callback = void (*)(QColorDialog*, QShowEvent*);
    using QColorDialog_ResizeEvent_Callback = void (*)(QColorDialog*, QResizeEvent*);
    using QColorDialog_ContextMenuEvent_Callback = void (*)(QColorDialog*, QContextMenuEvent*);
    using QColorDialog_EventFilter_Callback = bool (*)(QColorDialog*, QObject*, QEvent*);
    using QColorDialog_DevType_Callback = int (*)(const QColorDialog*);
    using QColorDialog_HeightForWidth_Callback = int (*)(const QColorDialog*, int);
    using QColorDialog_HasHeightForWidth_Callback = bool (*)(const QColorDialog*);
    using QColorDialog_PaintEngine_Callback = QPaintEngine* (*)(const QColorDialog*);
    using QColorDialog_Event_Callback = bool (*)(QColorDialog*, QEvent*);
    using QColorDialog_MousePressEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseReleaseEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseDoubleClickEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseMoveEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_WheelEvent_Callback = void (*)(QColorDialog*, QWheelEvent*);
    using QColorDialog_KeyReleaseEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_FocusInEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_FocusOutEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_EnterEvent_Callback = void (*)(QColorDialog*, QEnterEvent*);
    using QColorDialog_LeaveEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_PaintEvent_Callback = void (*)(QColorDialog*, QPaintEvent*);
    using QColorDialog_MoveEvent_Callback = void (*)(QColorDialog*, QMoveEvent*);
    using QColorDialog_TabletEvent_Callback = void (*)(QColorDialog*, QTabletEvent*);
    using QColorDialog_ActionEvent_Callback = void (*)(QColorDialog*, QActionEvent*);
    using QColorDialog_DragEnterEvent_Callback = void (*)(QColorDialog*, QDragEnterEvent*);
    using QColorDialog_DragMoveEvent_Callback = void (*)(QColorDialog*, QDragMoveEvent*);
    using QColorDialog_DragLeaveEvent_Callback = void (*)(QColorDialog*, QDragLeaveEvent*);
    using QColorDialog_DropEvent_Callback = void (*)(QColorDialog*, QDropEvent*);
    using QColorDialog_HideEvent_Callback = void (*)(QColorDialog*, QHideEvent*);
    using QColorDialog_NativeEvent_Callback = bool (*)(QColorDialog*, libqt_string, void*, intptr_t*);
    using QColorDialog_Metric_Callback = int (*)(const QColorDialog*, int);
    using QColorDialog_InitPainter_Callback = void (*)(const QColorDialog*, QPainter*);
    using QColorDialog_Redirected_Callback = QPaintDevice* (*)(const QColorDialog*, QPoint*);
    using QColorDialog_SharedPainter_Callback = QPainter* (*)(const QColorDialog*);
    using QColorDialog_InputMethodEvent_Callback = void (*)(QColorDialog*, QInputMethodEvent*);
    using QColorDialog_InputMethodQuery_Callback = QVariant* (*)(const QColorDialog*, int);
    using QColorDialog_FocusNextPrevChild_Callback = bool (*)(QColorDialog*, bool);
    using QColorDialog_TimerEvent_Callback = void (*)(QColorDialog*, QTimerEvent*);
    using QColorDialog_ChildEvent_Callback = void (*)(QColorDialog*, QChildEvent*);
    using QColorDialog_CustomEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_ConnectNotify_Callback = void (*)(QColorDialog*, QMetaMethod*);
    using QColorDialog_DisconnectNotify_Callback = void (*)(QColorDialog*, QMetaMethod*);
    using QColorDialog::adjustPosition;
    using QColorDialog::create;
    using QColorDialog::destroy;
    using QColorDialog::focusNextChild;
    using QColorDialog::focusPreviousChild;
    using QColorDialog::getDecodedMetricF;
    using QColorDialog::isSignalConnected;
    using QColorDialog::receivers;
    using QColorDialog::sender;
    using QColorDialog::senderSignalIndex;
    using QColorDialog::updateMicroFocus;

    // Instance callback storage
    QColorDialog_MetaObject_Callback qcolordialog_metaobject_callback = nullptr;
    QColorDialog_Metacast_Callback qcolordialog_metacast_callback = nullptr;
    QColorDialog_Metacall_Callback qcolordialog_metacall_callback = nullptr;
    QColorDialog_SetVisible_Callback qcolordialog_setvisible_callback = nullptr;
    QColorDialog_ChangeEvent_Callback qcolordialog_changeevent_callback = nullptr;
    QColorDialog_Done_Callback qcolordialog_done_callback = nullptr;
    QColorDialog_SizeHint_Callback qcolordialog_sizehint_callback = nullptr;
    QColorDialog_MinimumSizeHint_Callback qcolordialog_minimumsizehint_callback = nullptr;
    QColorDialog_Open_Callback qcolordialog_open_callback = nullptr;
    QColorDialog_Exec_Callback qcolordialog_exec_callback = nullptr;
    QColorDialog_Accept_Callback qcolordialog_accept_callback = nullptr;
    QColorDialog_Reject_Callback qcolordialog_reject_callback = nullptr;
    QColorDialog_KeyPressEvent_Callback qcolordialog_keypressevent_callback = nullptr;
    QColorDialog_CloseEvent_Callback qcolordialog_closeevent_callback = nullptr;
    QColorDialog_ShowEvent_Callback qcolordialog_showevent_callback = nullptr;
    QColorDialog_ResizeEvent_Callback qcolordialog_resizeevent_callback = nullptr;
    QColorDialog_ContextMenuEvent_Callback qcolordialog_contextmenuevent_callback = nullptr;
    QColorDialog_EventFilter_Callback qcolordialog_eventfilter_callback = nullptr;
    QColorDialog_DevType_Callback qcolordialog_devtype_callback = nullptr;
    QColorDialog_HeightForWidth_Callback qcolordialog_heightforwidth_callback = nullptr;
    QColorDialog_HasHeightForWidth_Callback qcolordialog_hasheightforwidth_callback = nullptr;
    QColorDialog_PaintEngine_Callback qcolordialog_paintengine_callback = nullptr;
    QColorDialog_Event_Callback qcolordialog_event_callback = nullptr;
    QColorDialog_MousePressEvent_Callback qcolordialog_mousepressevent_callback = nullptr;
    QColorDialog_MouseReleaseEvent_Callback qcolordialog_mousereleaseevent_callback = nullptr;
    QColorDialog_MouseDoubleClickEvent_Callback qcolordialog_mousedoubleclickevent_callback = nullptr;
    QColorDialog_MouseMoveEvent_Callback qcolordialog_mousemoveevent_callback = nullptr;
    QColorDialog_WheelEvent_Callback qcolordialog_wheelevent_callback = nullptr;
    QColorDialog_KeyReleaseEvent_Callback qcolordialog_keyreleaseevent_callback = nullptr;
    QColorDialog_FocusInEvent_Callback qcolordialog_focusinevent_callback = nullptr;
    QColorDialog_FocusOutEvent_Callback qcolordialog_focusoutevent_callback = nullptr;
    QColorDialog_EnterEvent_Callback qcolordialog_enterevent_callback = nullptr;
    QColorDialog_LeaveEvent_Callback qcolordialog_leaveevent_callback = nullptr;
    QColorDialog_PaintEvent_Callback qcolordialog_paintevent_callback = nullptr;
    QColorDialog_MoveEvent_Callback qcolordialog_moveevent_callback = nullptr;
    QColorDialog_TabletEvent_Callback qcolordialog_tabletevent_callback = nullptr;
    QColorDialog_ActionEvent_Callback qcolordialog_actionevent_callback = nullptr;
    QColorDialog_DragEnterEvent_Callback qcolordialog_dragenterevent_callback = nullptr;
    QColorDialog_DragMoveEvent_Callback qcolordialog_dragmoveevent_callback = nullptr;
    QColorDialog_DragLeaveEvent_Callback qcolordialog_dragleaveevent_callback = nullptr;
    QColorDialog_DropEvent_Callback qcolordialog_dropevent_callback = nullptr;
    QColorDialog_HideEvent_Callback qcolordialog_hideevent_callback = nullptr;
    QColorDialog_NativeEvent_Callback qcolordialog_nativeevent_callback = nullptr;
    QColorDialog_Metric_Callback qcolordialog_metric_callback = nullptr;
    QColorDialog_InitPainter_Callback qcolordialog_initpainter_callback = nullptr;
    QColorDialog_Redirected_Callback qcolordialog_redirected_callback = nullptr;
    QColorDialog_SharedPainter_Callback qcolordialog_sharedpainter_callback = nullptr;
    QColorDialog_InputMethodEvent_Callback qcolordialog_inputmethodevent_callback = nullptr;
    QColorDialog_InputMethodQuery_Callback qcolordialog_inputmethodquery_callback = nullptr;
    QColorDialog_FocusNextPrevChild_Callback qcolordialog_focusnextprevchild_callback = nullptr;
    QColorDialog_TimerEvent_Callback qcolordialog_timerevent_callback = nullptr;
    QColorDialog_ChildEvent_Callback qcolordialog_childevent_callback = nullptr;
    QColorDialog_CustomEvent_Callback qcolordialog_customevent_callback = nullptr;
    QColorDialog_ConnectNotify_Callback qcolordialog_connectnotify_callback = nullptr;
    QColorDialog_DisconnectNotify_Callback qcolordialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QColorDialog {
        using QColorDialog::actionEvent;
        using QColorDialog::changeEvent;
        using QColorDialog::childEvent;
        using QColorDialog::closeEvent;
        using QColorDialog::connectNotify;
        using QColorDialog::contextMenuEvent;
        using QColorDialog::customEvent;
        using QColorDialog::disconnectNotify;
        using QColorDialog::done;
        using QColorDialog::dragEnterEvent;
        using QColorDialog::dragLeaveEvent;
        using QColorDialog::dragMoveEvent;
        using QColorDialog::dropEvent;
        using QColorDialog::enterEvent;
        using QColorDialog::event;
        using QColorDialog::eventFilter;
        using QColorDialog::focusInEvent;
        using QColorDialog::focusNextPrevChild;
        using QColorDialog::focusOutEvent;
        using QColorDialog::hideEvent;
        using QColorDialog::initPainter;
        using QColorDialog::inputMethodEvent;
        using QColorDialog::keyPressEvent;
        using QColorDialog::keyReleaseEvent;
        using QColorDialog::leaveEvent;
        using QColorDialog::metric;
        using QColorDialog::mouseDoubleClickEvent;
        using QColorDialog::mouseMoveEvent;
        using QColorDialog::mousePressEvent;
        using QColorDialog::mouseReleaseEvent;
        using QColorDialog::moveEvent;
        using QColorDialog::nativeEvent;
        using QColorDialog::paintEvent;
        using QColorDialog::redirected;
        using QColorDialog::resizeEvent;
        using QColorDialog::sharedPainter;
        using QColorDialog::showEvent;
        using QColorDialog::tabletEvent;
        using QColorDialog::timerEvent;
        using QColorDialog::wheelEvent;
    };

    VirtualQColorDialog(QWidget* parent) : QColorDialog(parent) {};
    VirtualQColorDialog() : QColorDialog() {};
    VirtualQColorDialog(const QColor& initial) : QColorDialog(initial) {};
    VirtualQColorDialog(const QColor& initial, QWidget* parent) : QColorDialog(initial, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcolordialog_metaobject_callback) {
            QMetaObject* callback_ret = qcolordialog_metaobject_callback(this);
            return callback_ret;
        }
        return QColorDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcolordialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcolordialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QColorDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcolordialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcolordialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QColorDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcolordialog_setvisible_callback) {
            bool cbval1 = visible;
            qcolordialog_setvisible_callback(this, cbval1);
            return;
        }
        QColorDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qcolordialog_changeevent_callback) {
            QEvent* cbval1 = event;
            qcolordialog_changeevent_callback(this, cbval1);
            return;
        }
        QColorDialog::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qcolordialog_done_callback) {
            int cbval1 = result;
            qcolordialog_done_callback(this, cbval1);
            return;
        }
        QColorDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcolordialog_sizehint_callback) {
            QSize* callback_ret = qcolordialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColorDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcolordialog_minimumsizehint_callback) {
            QSize* callback_ret = qcolordialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColorDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qcolordialog_open_callback) {
            qcolordialog_open_callback(this);
            return;
        }
        QColorDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qcolordialog_exec_callback) {
            int callback_ret = qcolordialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QColorDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qcolordialog_accept_callback) {
            qcolordialog_accept_callback(this);
            return;
        }
        QColorDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qcolordialog_reject_callback) {
            qcolordialog_reject_callback(this);
            return;
        }
        QColorDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcolordialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qcolordialog_keypressevent_callback(this, cbval1);
            return;
        }
        QColorDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qcolordialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qcolordialog_closeevent_callback(this, cbval1);
            return;
        }
        QColorDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qcolordialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qcolordialog_showevent_callback(this, cbval1);
            return;
        }
        QColorDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qcolordialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qcolordialog_resizeevent_callback(this, cbval1);
            return;
        }
        QColorDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qcolordialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qcolordialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QColorDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qcolordialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qcolordialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QColorDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcolordialog_devtype_callback) {
            int callback_ret = qcolordialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QColorDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcolordialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcolordialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColorDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcolordialog_hasheightforwidth_callback) {
            bool callback_ret = qcolordialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QColorDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcolordialog_paintengine_callback) {
            QPaintEngine* callback_ret = qcolordialog_paintengine_callback(this);
            return callback_ret;
        }
        return QColorDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcolordialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcolordialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QColorDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcolordialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolordialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QColorDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcolordialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolordialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QColorDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcolordialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolordialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QColorDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcolordialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolordialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QColorDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcolordialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qcolordialog_wheelevent_callback(this, cbval1);
            return;
        }
        QColorDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcolordialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qcolordialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QColorDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcolordialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qcolordialog_focusinevent_callback(this, cbval1);
            return;
        }
        QColorDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcolordialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qcolordialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QColorDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcolordialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcolordialog_enterevent_callback(this, cbval1);
            return;
        }
        QColorDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcolordialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcolordialog_leaveevent_callback(this, cbval1);
            return;
        }
        QColorDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcolordialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qcolordialog_paintevent_callback(this, cbval1);
            return;
        }
        QColorDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcolordialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcolordialog_moveevent_callback(this, cbval1);
            return;
        }
        QColorDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcolordialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcolordialog_tabletevent_callback(this, cbval1);
            return;
        }
        QColorDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcolordialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcolordialog_actionevent_callback(this, cbval1);
            return;
        }
        QColorDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcolordialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcolordialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QColorDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcolordialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcolordialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QColorDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcolordialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcolordialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QColorDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcolordialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcolordialog_dropevent_callback(this, cbval1);
            return;
        }
        QColorDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcolordialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qcolordialog_hideevent_callback(this, cbval1);
            return;
        }
        QColorDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcolordialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcolordialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QColorDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcolordialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcolordialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColorDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcolordialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcolordialog_initpainter_callback(this, cbval1);
            return;
        }
        QColorDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcolordialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcolordialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QColorDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcolordialog_sharedpainter_callback) {
            QPainter* callback_ret = qcolordialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QColorDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcolordialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qcolordialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QColorDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcolordialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qcolordialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColorDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcolordialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcolordialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QColorDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcolordialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcolordialog_timerevent_callback(this, cbval1);
            return;
        }
        QColorDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcolordialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcolordialog_childevent_callback(this, cbval1);
            return;
        }
        QColorDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcolordialog_customevent_callback) {
            QEvent* cbval1 = event;
            qcolordialog_customevent_callback(this, cbval1);
            return;
        }
        QColorDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcolordialog_connectnotify_callback(this, cbval1);
            return;
        }
        QColorDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcolordialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QColorDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QColorDialog_SuperChangeEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_SuperDone(QColorDialog* self, int result);
    friend void QColorDialog_SuperKeyPressEvent(QColorDialog* self, QKeyEvent* param1);
    friend void QColorDialog_SuperCloseEvent(QColorDialog* self, QCloseEvent* param1);
    friend void QColorDialog_SuperShowEvent(QColorDialog* self, QShowEvent* param1);
    friend void QColorDialog_SuperResizeEvent(QColorDialog* self, QResizeEvent* param1);
    friend void QColorDialog_SuperContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1);
    friend bool QColorDialog_SuperEventFilter(QColorDialog* self, QObject* param1, QEvent* param2);
    friend bool QColorDialog_SuperEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_SuperMousePressEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_SuperMouseReleaseEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_SuperMouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_SuperMouseMoveEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_SuperWheelEvent(QColorDialog* self, QWheelEvent* event);
    friend void QColorDialog_SuperKeyReleaseEvent(QColorDialog* self, QKeyEvent* event);
    friend void QColorDialog_SuperFocusInEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_SuperFocusOutEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_SuperEnterEvent(QColorDialog* self, QEnterEvent* event);
    friend void QColorDialog_SuperLeaveEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_SuperPaintEvent(QColorDialog* self, QPaintEvent* event);
    friend void QColorDialog_SuperMoveEvent(QColorDialog* self, QMoveEvent* event);
    friend void QColorDialog_SuperTabletEvent(QColorDialog* self, QTabletEvent* event);
    friend void QColorDialog_SuperActionEvent(QColorDialog* self, QActionEvent* event);
    friend void QColorDialog_SuperDragEnterEvent(QColorDialog* self, QDragEnterEvent* event);
    friend void QColorDialog_SuperDragMoveEvent(QColorDialog* self, QDragMoveEvent* event);
    friend void QColorDialog_SuperDragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event);
    friend void QColorDialog_SuperDropEvent(QColorDialog* self, QDropEvent* event);
    friend void QColorDialog_SuperHideEvent(QColorDialog* self, QHideEvent* event);
    friend bool QColorDialog_SuperNativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QColorDialog_SuperMetric(const QColorDialog* self, int param1);
    friend void QColorDialog_SuperInitPainter(const QColorDialog* self, QPainter* painter);
    friend QPaintDevice* QColorDialog_SuperRedirected(const QColorDialog* self, QPoint* offset);
    friend QPainter* QColorDialog_SuperSharedPainter(const QColorDialog* self);
    friend void QColorDialog_SuperInputMethodEvent(QColorDialog* self, QInputMethodEvent* param1);
    friend bool QColorDialog_SuperFocusNextPrevChild(QColorDialog* self, bool next);
    friend void QColorDialog_SuperTimerEvent(QColorDialog* self, QTimerEvent* event);
    friend void QColorDialog_SuperChildEvent(QColorDialog* self, QChildEvent* event);
    friend void QColorDialog_SuperCustomEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_SuperConnectNotify(QColorDialog* self, const QMetaMethod* signal);
    friend void QColorDialog_SuperDisconnectNotify(QColorDialog* self, const QMetaMethod* signal);
};

#endif
