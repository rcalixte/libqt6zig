#pragma once
#ifndef LIBQFONTDIALOG_HXX
#define LIBQFONTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFontDialog
class VirtualQFontDialog final : public QFontDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFontDialog_MetaObject_Callback = QMetaObject* (*)(const QFontDialog*);
    using QFontDialog_Metacast_Callback = void* (*)(QFontDialog*, const char*);
    using QFontDialog_Metacall_Callback = int (*)(QFontDialog*, int, int, void**);
    using QFontDialog_SetVisible_Callback = void (*)(QFontDialog*, bool);
    using QFontDialog_ChangeEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_Done_Callback = void (*)(QFontDialog*, int);
    using QFontDialog_EventFilter_Callback = bool (*)(QFontDialog*, QObject*, QEvent*);
    using QFontDialog_SizeHint_Callback = QSize* (*)(const QFontDialog*);
    using QFontDialog_MinimumSizeHint_Callback = QSize* (*)(const QFontDialog*);
    using QFontDialog_Open_Callback = void (*)(QFontDialog*);
    using QFontDialog_Exec_Callback = int (*)(QFontDialog*);
    using QFontDialog_Accept_Callback = void (*)(QFontDialog*);
    using QFontDialog_Reject_Callback = void (*)(QFontDialog*);
    using QFontDialog_KeyPressEvent_Callback = void (*)(QFontDialog*, QKeyEvent*);
    using QFontDialog_CloseEvent_Callback = void (*)(QFontDialog*, QCloseEvent*);
    using QFontDialog_ShowEvent_Callback = void (*)(QFontDialog*, QShowEvent*);
    using QFontDialog_ResizeEvent_Callback = void (*)(QFontDialog*, QResizeEvent*);
    using QFontDialog_ContextMenuEvent_Callback = void (*)(QFontDialog*, QContextMenuEvent*);
    using QFontDialog_DevType_Callback = int (*)(const QFontDialog*);
    using QFontDialog_HeightForWidth_Callback = int (*)(const QFontDialog*, int);
    using QFontDialog_HasHeightForWidth_Callback = bool (*)(const QFontDialog*);
    using QFontDialog_PaintEngine_Callback = QPaintEngine* (*)(const QFontDialog*);
    using QFontDialog_Event_Callback = bool (*)(QFontDialog*, QEvent*);
    using QFontDialog_MousePressEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseReleaseEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseDoubleClickEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseMoveEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_WheelEvent_Callback = void (*)(QFontDialog*, QWheelEvent*);
    using QFontDialog_KeyReleaseEvent_Callback = void (*)(QFontDialog*, QKeyEvent*);
    using QFontDialog_FocusInEvent_Callback = void (*)(QFontDialog*, QFocusEvent*);
    using QFontDialog_FocusOutEvent_Callback = void (*)(QFontDialog*, QFocusEvent*);
    using QFontDialog_EnterEvent_Callback = void (*)(QFontDialog*, QEnterEvent*);
    using QFontDialog_LeaveEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_PaintEvent_Callback = void (*)(QFontDialog*, QPaintEvent*);
    using QFontDialog_MoveEvent_Callback = void (*)(QFontDialog*, QMoveEvent*);
    using QFontDialog_TabletEvent_Callback = void (*)(QFontDialog*, QTabletEvent*);
    using QFontDialog_ActionEvent_Callback = void (*)(QFontDialog*, QActionEvent*);
    using QFontDialog_DragEnterEvent_Callback = void (*)(QFontDialog*, QDragEnterEvent*);
    using QFontDialog_DragMoveEvent_Callback = void (*)(QFontDialog*, QDragMoveEvent*);
    using QFontDialog_DragLeaveEvent_Callback = void (*)(QFontDialog*, QDragLeaveEvent*);
    using QFontDialog_DropEvent_Callback = void (*)(QFontDialog*, QDropEvent*);
    using QFontDialog_HideEvent_Callback = void (*)(QFontDialog*, QHideEvent*);
    using QFontDialog_NativeEvent_Callback = bool (*)(QFontDialog*, libqt_string, void*, intptr_t*);
    using QFontDialog_Metric_Callback = int (*)(const QFontDialog*, int);
    using QFontDialog_InitPainter_Callback = void (*)(const QFontDialog*, QPainter*);
    using QFontDialog_Redirected_Callback = QPaintDevice* (*)(const QFontDialog*, QPoint*);
    using QFontDialog_SharedPainter_Callback = QPainter* (*)(const QFontDialog*);
    using QFontDialog_InputMethodEvent_Callback = void (*)(QFontDialog*, QInputMethodEvent*);
    using QFontDialog_InputMethodQuery_Callback = QVariant* (*)(const QFontDialog*, int);
    using QFontDialog_FocusNextPrevChild_Callback = bool (*)(QFontDialog*, bool);
    using QFontDialog_TimerEvent_Callback = void (*)(QFontDialog*, QTimerEvent*);
    using QFontDialog_ChildEvent_Callback = void (*)(QFontDialog*, QChildEvent*);
    using QFontDialog_CustomEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_ConnectNotify_Callback = void (*)(QFontDialog*, QMetaMethod*);
    using QFontDialog_DisconnectNotify_Callback = void (*)(QFontDialog*, QMetaMethod*);
    using QFontDialog::adjustPosition;
    using QFontDialog::create;
    using QFontDialog::destroy;
    using QFontDialog::focusNextChild;
    using QFontDialog::focusPreviousChild;
    using QFontDialog::getDecodedMetricF;
    using QFontDialog::isSignalConnected;
    using QFontDialog::receivers;
    using QFontDialog::sender;
    using QFontDialog::senderSignalIndex;
    using QFontDialog::updateMicroFocus;

    // Instance callback storage
    QFontDialog_MetaObject_Callback qfontdialog_metaobject_callback = nullptr;
    QFontDialog_Metacast_Callback qfontdialog_metacast_callback = nullptr;
    QFontDialog_Metacall_Callback qfontdialog_metacall_callback = nullptr;
    QFontDialog_SetVisible_Callback qfontdialog_setvisible_callback = nullptr;
    QFontDialog_ChangeEvent_Callback qfontdialog_changeevent_callback = nullptr;
    QFontDialog_Done_Callback qfontdialog_done_callback = nullptr;
    QFontDialog_EventFilter_Callback qfontdialog_eventfilter_callback = nullptr;
    QFontDialog_SizeHint_Callback qfontdialog_sizehint_callback = nullptr;
    QFontDialog_MinimumSizeHint_Callback qfontdialog_minimumsizehint_callback = nullptr;
    QFontDialog_Open_Callback qfontdialog_open_callback = nullptr;
    QFontDialog_Exec_Callback qfontdialog_exec_callback = nullptr;
    QFontDialog_Accept_Callback qfontdialog_accept_callback = nullptr;
    QFontDialog_Reject_Callback qfontdialog_reject_callback = nullptr;
    QFontDialog_KeyPressEvent_Callback qfontdialog_keypressevent_callback = nullptr;
    QFontDialog_CloseEvent_Callback qfontdialog_closeevent_callback = nullptr;
    QFontDialog_ShowEvent_Callback qfontdialog_showevent_callback = nullptr;
    QFontDialog_ResizeEvent_Callback qfontdialog_resizeevent_callback = nullptr;
    QFontDialog_ContextMenuEvent_Callback qfontdialog_contextmenuevent_callback = nullptr;
    QFontDialog_DevType_Callback qfontdialog_devtype_callback = nullptr;
    QFontDialog_HeightForWidth_Callback qfontdialog_heightforwidth_callback = nullptr;
    QFontDialog_HasHeightForWidth_Callback qfontdialog_hasheightforwidth_callback = nullptr;
    QFontDialog_PaintEngine_Callback qfontdialog_paintengine_callback = nullptr;
    QFontDialog_Event_Callback qfontdialog_event_callback = nullptr;
    QFontDialog_MousePressEvent_Callback qfontdialog_mousepressevent_callback = nullptr;
    QFontDialog_MouseReleaseEvent_Callback qfontdialog_mousereleaseevent_callback = nullptr;
    QFontDialog_MouseDoubleClickEvent_Callback qfontdialog_mousedoubleclickevent_callback = nullptr;
    QFontDialog_MouseMoveEvent_Callback qfontdialog_mousemoveevent_callback = nullptr;
    QFontDialog_WheelEvent_Callback qfontdialog_wheelevent_callback = nullptr;
    QFontDialog_KeyReleaseEvent_Callback qfontdialog_keyreleaseevent_callback = nullptr;
    QFontDialog_FocusInEvent_Callback qfontdialog_focusinevent_callback = nullptr;
    QFontDialog_FocusOutEvent_Callback qfontdialog_focusoutevent_callback = nullptr;
    QFontDialog_EnterEvent_Callback qfontdialog_enterevent_callback = nullptr;
    QFontDialog_LeaveEvent_Callback qfontdialog_leaveevent_callback = nullptr;
    QFontDialog_PaintEvent_Callback qfontdialog_paintevent_callback = nullptr;
    QFontDialog_MoveEvent_Callback qfontdialog_moveevent_callback = nullptr;
    QFontDialog_TabletEvent_Callback qfontdialog_tabletevent_callback = nullptr;
    QFontDialog_ActionEvent_Callback qfontdialog_actionevent_callback = nullptr;
    QFontDialog_DragEnterEvent_Callback qfontdialog_dragenterevent_callback = nullptr;
    QFontDialog_DragMoveEvent_Callback qfontdialog_dragmoveevent_callback = nullptr;
    QFontDialog_DragLeaveEvent_Callback qfontdialog_dragleaveevent_callback = nullptr;
    QFontDialog_DropEvent_Callback qfontdialog_dropevent_callback = nullptr;
    QFontDialog_HideEvent_Callback qfontdialog_hideevent_callback = nullptr;
    QFontDialog_NativeEvent_Callback qfontdialog_nativeevent_callback = nullptr;
    QFontDialog_Metric_Callback qfontdialog_metric_callback = nullptr;
    QFontDialog_InitPainter_Callback qfontdialog_initpainter_callback = nullptr;
    QFontDialog_Redirected_Callback qfontdialog_redirected_callback = nullptr;
    QFontDialog_SharedPainter_Callback qfontdialog_sharedpainter_callback = nullptr;
    QFontDialog_InputMethodEvent_Callback qfontdialog_inputmethodevent_callback = nullptr;
    QFontDialog_InputMethodQuery_Callback qfontdialog_inputmethodquery_callback = nullptr;
    QFontDialog_FocusNextPrevChild_Callback qfontdialog_focusnextprevchild_callback = nullptr;
    QFontDialog_TimerEvent_Callback qfontdialog_timerevent_callback = nullptr;
    QFontDialog_ChildEvent_Callback qfontdialog_childevent_callback = nullptr;
    QFontDialog_CustomEvent_Callback qfontdialog_customevent_callback = nullptr;
    QFontDialog_ConnectNotify_Callback qfontdialog_connectnotify_callback = nullptr;
    QFontDialog_DisconnectNotify_Callback qfontdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFontDialog {
        using QFontDialog::actionEvent;
        using QFontDialog::changeEvent;
        using QFontDialog::childEvent;
        using QFontDialog::closeEvent;
        using QFontDialog::connectNotify;
        using QFontDialog::contextMenuEvent;
        using QFontDialog::customEvent;
        using QFontDialog::disconnectNotify;
        using QFontDialog::done;
        using QFontDialog::dragEnterEvent;
        using QFontDialog::dragLeaveEvent;
        using QFontDialog::dragMoveEvent;
        using QFontDialog::dropEvent;
        using QFontDialog::enterEvent;
        using QFontDialog::event;
        using QFontDialog::eventFilter;
        using QFontDialog::focusInEvent;
        using QFontDialog::focusNextPrevChild;
        using QFontDialog::focusOutEvent;
        using QFontDialog::hideEvent;
        using QFontDialog::initPainter;
        using QFontDialog::inputMethodEvent;
        using QFontDialog::keyPressEvent;
        using QFontDialog::keyReleaseEvent;
        using QFontDialog::leaveEvent;
        using QFontDialog::metric;
        using QFontDialog::mouseDoubleClickEvent;
        using QFontDialog::mouseMoveEvent;
        using QFontDialog::mousePressEvent;
        using QFontDialog::mouseReleaseEvent;
        using QFontDialog::moveEvent;
        using QFontDialog::nativeEvent;
        using QFontDialog::paintEvent;
        using QFontDialog::redirected;
        using QFontDialog::resizeEvent;
        using QFontDialog::sharedPainter;
        using QFontDialog::showEvent;
        using QFontDialog::tabletEvent;
        using QFontDialog::timerEvent;
        using QFontDialog::wheelEvent;
    };

    VirtualQFontDialog(QWidget* parent) : QFontDialog(parent) {};
    VirtualQFontDialog() : QFontDialog() {};
    VirtualQFontDialog(const QFont& initial) : QFontDialog(initial) {};
    VirtualQFontDialog(const QFont& initial, QWidget* parent) : QFontDialog(initial, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfontdialog_metaobject_callback) {
            QMetaObject* callback_ret = qfontdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QFontDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfontdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfontdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfontdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfontdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfontdialog_setvisible_callback) {
            bool cbval1 = visible;
            qfontdialog_setvisible_callback(this, cbval1);
            return;
        }
        QFontDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qfontdialog_changeevent_callback) {
            QEvent* cbval1 = event;
            qfontdialog_changeevent_callback(this, cbval1);
            return;
        }
        QFontDialog::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qfontdialog_done_callback) {
            int cbval1 = result;
            qfontdialog_done_callback(this, cbval1);
            return;
        }
        QFontDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qfontdialog_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qfontdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFontDialog::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfontdialog_sizehint_callback) {
            QSize* callback_ret = qfontdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfontdialog_minimumsizehint_callback) {
            QSize* callback_ret = qfontdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qfontdialog_open_callback) {
            qfontdialog_open_callback(this);
            return;
        }
        QFontDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qfontdialog_exec_callback) {
            int callback_ret = qfontdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qfontdialog_accept_callback) {
            qfontdialog_accept_callback(this);
            return;
        }
        QFontDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qfontdialog_reject_callback) {
            qfontdialog_reject_callback(this);
            return;
        }
        QFontDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qfontdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qfontdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QFontDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qfontdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qfontdialog_closeevent_callback(this, cbval1);
            return;
        }
        QFontDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qfontdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qfontdialog_showevent_callback(this, cbval1);
            return;
        }
        QFontDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qfontdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qfontdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QFontDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qfontdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qfontdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QFontDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfontdialog_devtype_callback) {
            int callback_ret = qfontdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfontdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qfontdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfontdialog_hasheightforwidth_callback) {
            bool callback_ret = qfontdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFontDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfontdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qfontdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QFontDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfontdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfontdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfontdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QFontDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfontdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QFontDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfontdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QFontDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfontdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QFontDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfontdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qfontdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QFontDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfontdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qfontdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QFontDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfontdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qfontdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QFontDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfontdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qfontdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QFontDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfontdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qfontdialog_enterevent_callback(this, cbval1);
            return;
        }
        QFontDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfontdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qfontdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QFontDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qfontdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qfontdialog_paintevent_callback(this, cbval1);
            return;
        }
        QFontDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfontdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qfontdialog_moveevent_callback(this, cbval1);
            return;
        }
        QFontDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfontdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qfontdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QFontDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfontdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qfontdialog_actionevent_callback(this, cbval1);
            return;
        }
        QFontDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfontdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qfontdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QFontDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfontdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qfontdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QFontDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfontdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qfontdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QFontDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfontdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qfontdialog_dropevent_callback(this, cbval1);
            return;
        }
        QFontDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfontdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qfontdialog_hideevent_callback(this, cbval1);
            return;
        }
        QFontDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfontdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qfontdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QFontDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfontdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qfontdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfontdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qfontdialog_initpainter_callback(this, cbval1);
            return;
        }
        QFontDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfontdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qfontdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfontdialog_sharedpainter_callback) {
            QPainter* callback_ret = qfontdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QFontDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfontdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qfontdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QFontDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfontdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qfontdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfontdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qfontdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfontdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfontdialog_timerevent_callback(this, cbval1);
            return;
        }
        QFontDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfontdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfontdialog_childevent_callback(this, cbval1);
            return;
        }
        QFontDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfontdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qfontdialog_customevent_callback(this, cbval1);
            return;
        }
        QFontDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfontdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfontdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QFontDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfontdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfontdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFontDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFontDialog_SuperChangeEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperDone(QFontDialog* self, int result);
    friend bool QFontDialog_SuperEventFilter(QFontDialog* self, QObject* object, QEvent* event);
    friend void QFontDialog_SuperKeyPressEvent(QFontDialog* self, QKeyEvent* param1);
    friend void QFontDialog_SuperCloseEvent(QFontDialog* self, QCloseEvent* param1);
    friend void QFontDialog_SuperShowEvent(QFontDialog* self, QShowEvent* param1);
    friend void QFontDialog_SuperResizeEvent(QFontDialog* self, QResizeEvent* param1);
    friend void QFontDialog_SuperContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1);
    friend bool QFontDialog_SuperEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperMousePressEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseReleaseEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseMoveEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperWheelEvent(QFontDialog* self, QWheelEvent* event);
    friend void QFontDialog_SuperKeyReleaseEvent(QFontDialog* self, QKeyEvent* event);
    friend void QFontDialog_SuperFocusInEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_SuperFocusOutEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_SuperEnterEvent(QFontDialog* self, QEnterEvent* event);
    friend void QFontDialog_SuperLeaveEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperPaintEvent(QFontDialog* self, QPaintEvent* event);
    friend void QFontDialog_SuperMoveEvent(QFontDialog* self, QMoveEvent* event);
    friend void QFontDialog_SuperTabletEvent(QFontDialog* self, QTabletEvent* event);
    friend void QFontDialog_SuperActionEvent(QFontDialog* self, QActionEvent* event);
    friend void QFontDialog_SuperDragEnterEvent(QFontDialog* self, QDragEnterEvent* event);
    friend void QFontDialog_SuperDragMoveEvent(QFontDialog* self, QDragMoveEvent* event);
    friend void QFontDialog_SuperDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event);
    friend void QFontDialog_SuperDropEvent(QFontDialog* self, QDropEvent* event);
    friend void QFontDialog_SuperHideEvent(QFontDialog* self, QHideEvent* event);
    friend bool QFontDialog_SuperNativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFontDialog_SuperMetric(const QFontDialog* self, int param1);
    friend void QFontDialog_SuperInitPainter(const QFontDialog* self, QPainter* painter);
    friend QPaintDevice* QFontDialog_SuperRedirected(const QFontDialog* self, QPoint* offset);
    friend QPainter* QFontDialog_SuperSharedPainter(const QFontDialog* self);
    friend void QFontDialog_SuperInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1);
    friend bool QFontDialog_SuperFocusNextPrevChild(QFontDialog* self, bool next);
    friend void QFontDialog_SuperTimerEvent(QFontDialog* self, QTimerEvent* event);
    friend void QFontDialog_SuperChildEvent(QFontDialog* self, QChildEvent* event);
    friend void QFontDialog_SuperCustomEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperConnectNotify(QFontDialog* self, const QMetaMethod* signal);
    friend void QFontDialog_SuperDisconnectNotify(QFontDialog* self, const QMetaMethod* signal);
};

#endif
