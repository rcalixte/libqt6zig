#pragma once
#ifndef LIBQFILEDIALOG_HXX
#define LIBQFILEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileDialog
class VirtualQFileDialog final : public QFileDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileDialog_MetaObject_Callback = QMetaObject* (*)(const QFileDialog*);
    using QFileDialog_Metacast_Callback = void* (*)(QFileDialog*, const char*);
    using QFileDialog_Metacall_Callback = int (*)(QFileDialog*, int, int, void**);
    using QFileDialog_SetVisible_Callback = void (*)(QFileDialog*, bool);
    using QFileDialog_Done_Callback = void (*)(QFileDialog*, int);
    using QFileDialog_Accept_Callback = void (*)(QFileDialog*);
    using QFileDialog_ChangeEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_SizeHint_Callback = QSize* (*)(const QFileDialog*);
    using QFileDialog_MinimumSizeHint_Callback = QSize* (*)(const QFileDialog*);
    using QFileDialog_Open_Callback = void (*)(QFileDialog*);
    using QFileDialog_Exec_Callback = int (*)(QFileDialog*);
    using QFileDialog_Reject_Callback = void (*)(QFileDialog*);
    using QFileDialog_KeyPressEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_CloseEvent_Callback = void (*)(QFileDialog*, QCloseEvent*);
    using QFileDialog_ShowEvent_Callback = void (*)(QFileDialog*, QShowEvent*);
    using QFileDialog_ResizeEvent_Callback = void (*)(QFileDialog*, QResizeEvent*);
    using QFileDialog_ContextMenuEvent_Callback = void (*)(QFileDialog*, QContextMenuEvent*);
    using QFileDialog_EventFilter_Callback = bool (*)(QFileDialog*, QObject*, QEvent*);
    using QFileDialog_DevType_Callback = int (*)(const QFileDialog*);
    using QFileDialog_HeightForWidth_Callback = int (*)(const QFileDialog*, int);
    using QFileDialog_HasHeightForWidth_Callback = bool (*)(const QFileDialog*);
    using QFileDialog_PaintEngine_Callback = QPaintEngine* (*)(const QFileDialog*);
    using QFileDialog_Event_Callback = bool (*)(QFileDialog*, QEvent*);
    using QFileDialog_MousePressEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseReleaseEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseDoubleClickEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseMoveEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_WheelEvent_Callback = void (*)(QFileDialog*, QWheelEvent*);
    using QFileDialog_KeyReleaseEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_FocusInEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_FocusOutEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_EnterEvent_Callback = void (*)(QFileDialog*, QEnterEvent*);
    using QFileDialog_LeaveEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_PaintEvent_Callback = void (*)(QFileDialog*, QPaintEvent*);
    using QFileDialog_MoveEvent_Callback = void (*)(QFileDialog*, QMoveEvent*);
    using QFileDialog_TabletEvent_Callback = void (*)(QFileDialog*, QTabletEvent*);
    using QFileDialog_ActionEvent_Callback = void (*)(QFileDialog*, QActionEvent*);
    using QFileDialog_DragEnterEvent_Callback = void (*)(QFileDialog*, QDragEnterEvent*);
    using QFileDialog_DragMoveEvent_Callback = void (*)(QFileDialog*, QDragMoveEvent*);
    using QFileDialog_DragLeaveEvent_Callback = void (*)(QFileDialog*, QDragLeaveEvent*);
    using QFileDialog_DropEvent_Callback = void (*)(QFileDialog*, QDropEvent*);
    using QFileDialog_HideEvent_Callback = void (*)(QFileDialog*, QHideEvent*);
    using QFileDialog_NativeEvent_Callback = bool (*)(QFileDialog*, libqt_string, void*, intptr_t*);
    using QFileDialog_Metric_Callback = int (*)(const QFileDialog*, int);
    using QFileDialog_InitPainter_Callback = void (*)(const QFileDialog*, QPainter*);
    using QFileDialog_Redirected_Callback = QPaintDevice* (*)(const QFileDialog*, QPoint*);
    using QFileDialog_SharedPainter_Callback = QPainter* (*)(const QFileDialog*);
    using QFileDialog_InputMethodEvent_Callback = void (*)(QFileDialog*, QInputMethodEvent*);
    using QFileDialog_InputMethodQuery_Callback = QVariant* (*)(const QFileDialog*, int);
    using QFileDialog_FocusNextPrevChild_Callback = bool (*)(QFileDialog*, bool);
    using QFileDialog_TimerEvent_Callback = void (*)(QFileDialog*, QTimerEvent*);
    using QFileDialog_ChildEvent_Callback = void (*)(QFileDialog*, QChildEvent*);
    using QFileDialog_CustomEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_ConnectNotify_Callback = void (*)(QFileDialog*, QMetaMethod*);
    using QFileDialog_DisconnectNotify_Callback = void (*)(QFileDialog*, QMetaMethod*);
    using QFileDialog::adjustPosition;
    using QFileDialog::create;
    using QFileDialog::destroy;
    using QFileDialog::focusNextChild;
    using QFileDialog::focusPreviousChild;
    using QFileDialog::getDecodedMetricF;
    using QFileDialog::isSignalConnected;
    using QFileDialog::receivers;
    using QFileDialog::sender;
    using QFileDialog::senderSignalIndex;
    using QFileDialog::updateMicroFocus;

    // Instance callback storage
    QFileDialog_MetaObject_Callback qfiledialog_metaobject_callback = nullptr;
    QFileDialog_Metacast_Callback qfiledialog_metacast_callback = nullptr;
    QFileDialog_Metacall_Callback qfiledialog_metacall_callback = nullptr;
    QFileDialog_SetVisible_Callback qfiledialog_setvisible_callback = nullptr;
    QFileDialog_Done_Callback qfiledialog_done_callback = nullptr;
    QFileDialog_Accept_Callback qfiledialog_accept_callback = nullptr;
    QFileDialog_ChangeEvent_Callback qfiledialog_changeevent_callback = nullptr;
    QFileDialog_SizeHint_Callback qfiledialog_sizehint_callback = nullptr;
    QFileDialog_MinimumSizeHint_Callback qfiledialog_minimumsizehint_callback = nullptr;
    QFileDialog_Open_Callback qfiledialog_open_callback = nullptr;
    QFileDialog_Exec_Callback qfiledialog_exec_callback = nullptr;
    QFileDialog_Reject_Callback qfiledialog_reject_callback = nullptr;
    QFileDialog_KeyPressEvent_Callback qfiledialog_keypressevent_callback = nullptr;
    QFileDialog_CloseEvent_Callback qfiledialog_closeevent_callback = nullptr;
    QFileDialog_ShowEvent_Callback qfiledialog_showevent_callback = nullptr;
    QFileDialog_ResizeEvent_Callback qfiledialog_resizeevent_callback = nullptr;
    QFileDialog_ContextMenuEvent_Callback qfiledialog_contextmenuevent_callback = nullptr;
    QFileDialog_EventFilter_Callback qfiledialog_eventfilter_callback = nullptr;
    QFileDialog_DevType_Callback qfiledialog_devtype_callback = nullptr;
    QFileDialog_HeightForWidth_Callback qfiledialog_heightforwidth_callback = nullptr;
    QFileDialog_HasHeightForWidth_Callback qfiledialog_hasheightforwidth_callback = nullptr;
    QFileDialog_PaintEngine_Callback qfiledialog_paintengine_callback = nullptr;
    QFileDialog_Event_Callback qfiledialog_event_callback = nullptr;
    QFileDialog_MousePressEvent_Callback qfiledialog_mousepressevent_callback = nullptr;
    QFileDialog_MouseReleaseEvent_Callback qfiledialog_mousereleaseevent_callback = nullptr;
    QFileDialog_MouseDoubleClickEvent_Callback qfiledialog_mousedoubleclickevent_callback = nullptr;
    QFileDialog_MouseMoveEvent_Callback qfiledialog_mousemoveevent_callback = nullptr;
    QFileDialog_WheelEvent_Callback qfiledialog_wheelevent_callback = nullptr;
    QFileDialog_KeyReleaseEvent_Callback qfiledialog_keyreleaseevent_callback = nullptr;
    QFileDialog_FocusInEvent_Callback qfiledialog_focusinevent_callback = nullptr;
    QFileDialog_FocusOutEvent_Callback qfiledialog_focusoutevent_callback = nullptr;
    QFileDialog_EnterEvent_Callback qfiledialog_enterevent_callback = nullptr;
    QFileDialog_LeaveEvent_Callback qfiledialog_leaveevent_callback = nullptr;
    QFileDialog_PaintEvent_Callback qfiledialog_paintevent_callback = nullptr;
    QFileDialog_MoveEvent_Callback qfiledialog_moveevent_callback = nullptr;
    QFileDialog_TabletEvent_Callback qfiledialog_tabletevent_callback = nullptr;
    QFileDialog_ActionEvent_Callback qfiledialog_actionevent_callback = nullptr;
    QFileDialog_DragEnterEvent_Callback qfiledialog_dragenterevent_callback = nullptr;
    QFileDialog_DragMoveEvent_Callback qfiledialog_dragmoveevent_callback = nullptr;
    QFileDialog_DragLeaveEvent_Callback qfiledialog_dragleaveevent_callback = nullptr;
    QFileDialog_DropEvent_Callback qfiledialog_dropevent_callback = nullptr;
    QFileDialog_HideEvent_Callback qfiledialog_hideevent_callback = nullptr;
    QFileDialog_NativeEvent_Callback qfiledialog_nativeevent_callback = nullptr;
    QFileDialog_Metric_Callback qfiledialog_metric_callback = nullptr;
    QFileDialog_InitPainter_Callback qfiledialog_initpainter_callback = nullptr;
    QFileDialog_Redirected_Callback qfiledialog_redirected_callback = nullptr;
    QFileDialog_SharedPainter_Callback qfiledialog_sharedpainter_callback = nullptr;
    QFileDialog_InputMethodEvent_Callback qfiledialog_inputmethodevent_callback = nullptr;
    QFileDialog_InputMethodQuery_Callback qfiledialog_inputmethodquery_callback = nullptr;
    QFileDialog_FocusNextPrevChild_Callback qfiledialog_focusnextprevchild_callback = nullptr;
    QFileDialog_TimerEvent_Callback qfiledialog_timerevent_callback = nullptr;
    QFileDialog_ChildEvent_Callback qfiledialog_childevent_callback = nullptr;
    QFileDialog_CustomEvent_Callback qfiledialog_customevent_callback = nullptr;
    QFileDialog_ConnectNotify_Callback qfiledialog_connectnotify_callback = nullptr;
    QFileDialog_DisconnectNotify_Callback qfiledialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFileDialog {
        using QFileDialog::accept;
        using QFileDialog::actionEvent;
        using QFileDialog::changeEvent;
        using QFileDialog::childEvent;
        using QFileDialog::closeEvent;
        using QFileDialog::connectNotify;
        using QFileDialog::contextMenuEvent;
        using QFileDialog::customEvent;
        using QFileDialog::disconnectNotify;
        using QFileDialog::done;
        using QFileDialog::dragEnterEvent;
        using QFileDialog::dragLeaveEvent;
        using QFileDialog::dragMoveEvent;
        using QFileDialog::dropEvent;
        using QFileDialog::enterEvent;
        using QFileDialog::event;
        using QFileDialog::eventFilter;
        using QFileDialog::focusInEvent;
        using QFileDialog::focusNextPrevChild;
        using QFileDialog::focusOutEvent;
        using QFileDialog::hideEvent;
        using QFileDialog::initPainter;
        using QFileDialog::inputMethodEvent;
        using QFileDialog::keyPressEvent;
        using QFileDialog::keyReleaseEvent;
        using QFileDialog::leaveEvent;
        using QFileDialog::metric;
        using QFileDialog::mouseDoubleClickEvent;
        using QFileDialog::mouseMoveEvent;
        using QFileDialog::mousePressEvent;
        using QFileDialog::mouseReleaseEvent;
        using QFileDialog::moveEvent;
        using QFileDialog::nativeEvent;
        using QFileDialog::paintEvent;
        using QFileDialog::redirected;
        using QFileDialog::resizeEvent;
        using QFileDialog::sharedPainter;
        using QFileDialog::showEvent;
        using QFileDialog::tabletEvent;
        using QFileDialog::timerEvent;
        using QFileDialog::wheelEvent;
    };

    VirtualQFileDialog(QWidget* parent) : QFileDialog(parent) {};
    VirtualQFileDialog(QWidget* parent, Qt::WindowFlags f) : QFileDialog(parent, f) {};
    VirtualQFileDialog() : QFileDialog() {};
    VirtualQFileDialog(QWidget* parent, const QString& caption) : QFileDialog(parent, caption) {};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory) : QFileDialog(parent, caption, directory) {};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory, const QString& filter) : QFileDialog(parent, caption, directory, filter) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfiledialog_metaobject_callback) {
            QMetaObject* callback_ret = qfiledialog_metaobject_callback(this);
            return callback_ret;
        }
        return QFileDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfiledialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfiledialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfiledialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfiledialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfiledialog_setvisible_callback) {
            bool cbval1 = visible;
            qfiledialog_setvisible_callback(this, cbval1);
            return;
        }
        QFileDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qfiledialog_done_callback) {
            int cbval1 = result;
            qfiledialog_done_callback(this, cbval1);
            return;
        }
        QFileDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qfiledialog_accept_callback) {
            qfiledialog_accept_callback(this);
            return;
        }
        QFileDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qfiledialog_changeevent_callback) {
            QEvent* cbval1 = e;
            qfiledialog_changeevent_callback(this, cbval1);
            return;
        }
        QFileDialog::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfiledialog_sizehint_callback) {
            QSize* callback_ret = qfiledialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfiledialog_minimumsizehint_callback) {
            QSize* callback_ret = qfiledialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qfiledialog_open_callback) {
            qfiledialog_open_callback(this);
            return;
        }
        QFileDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qfiledialog_exec_callback) {
            int callback_ret = qfiledialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qfiledialog_reject_callback) {
            qfiledialog_reject_callback(this);
            return;
        }
        QFileDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qfiledialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qfiledialog_keypressevent_callback(this, cbval1);
            return;
        }
        QFileDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qfiledialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qfiledialog_closeevent_callback(this, cbval1);
            return;
        }
        QFileDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qfiledialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qfiledialog_showevent_callback(this, cbval1);
            return;
        }
        QFileDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qfiledialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qfiledialog_resizeevent_callback(this, cbval1);
            return;
        }
        QFileDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qfiledialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qfiledialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QFileDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qfiledialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qfiledialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfiledialog_devtype_callback) {
            int callback_ret = qfiledialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfiledialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qfiledialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfiledialog_hasheightforwidth_callback) {
            bool callback_ret = qfiledialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFileDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfiledialog_paintengine_callback) {
            QPaintEngine* callback_ret = qfiledialog_paintengine_callback(this);
            return callback_ret;
        }
        return QFileDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfiledialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfiledialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfiledialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qfiledialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QFileDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfiledialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qfiledialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QFileDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfiledialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qfiledialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QFileDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfiledialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qfiledialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QFileDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfiledialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qfiledialog_wheelevent_callback(this, cbval1);
            return;
        }
        QFileDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfiledialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qfiledialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QFileDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfiledialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qfiledialog_focusinevent_callback(this, cbval1);
            return;
        }
        QFileDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfiledialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qfiledialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QFileDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfiledialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qfiledialog_enterevent_callback(this, cbval1);
            return;
        }
        QFileDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfiledialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qfiledialog_leaveevent_callback(this, cbval1);
            return;
        }
        QFileDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qfiledialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qfiledialog_paintevent_callback(this, cbval1);
            return;
        }
        QFileDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfiledialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qfiledialog_moveevent_callback(this, cbval1);
            return;
        }
        QFileDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfiledialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qfiledialog_tabletevent_callback(this, cbval1);
            return;
        }
        QFileDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfiledialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qfiledialog_actionevent_callback(this, cbval1);
            return;
        }
        QFileDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfiledialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qfiledialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QFileDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfiledialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qfiledialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QFileDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfiledialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qfiledialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QFileDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfiledialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qfiledialog_dropevent_callback(this, cbval1);
            return;
        }
        QFileDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfiledialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qfiledialog_hideevent_callback(this, cbval1);
            return;
        }
        QFileDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfiledialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qfiledialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QFileDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfiledialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qfiledialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfiledialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qfiledialog_initpainter_callback(this, cbval1);
            return;
        }
        QFileDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfiledialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qfiledialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfiledialog_sharedpainter_callback) {
            QPainter* callback_ret = qfiledialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QFileDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfiledialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qfiledialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QFileDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfiledialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qfiledialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfiledialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qfiledialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfiledialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfiledialog_timerevent_callback(this, cbval1);
            return;
        }
        QFileDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfiledialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfiledialog_childevent_callback(this, cbval1);
            return;
        }
        QFileDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfiledialog_customevent_callback) {
            QEvent* cbval1 = event;
            qfiledialog_customevent_callback(this, cbval1);
            return;
        }
        QFileDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfiledialog_connectnotify_callback(this, cbval1);
            return;
        }
        QFileDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfiledialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFileDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFileDialog_SuperDone(QFileDialog* self, int result);
    friend void QFileDialog_SuperAccept(QFileDialog* self);
    friend void QFileDialog_SuperChangeEvent(QFileDialog* self, QEvent* e);
    friend void QFileDialog_SuperKeyPressEvent(QFileDialog* self, QKeyEvent* param1);
    friend void QFileDialog_SuperCloseEvent(QFileDialog* self, QCloseEvent* param1);
    friend void QFileDialog_SuperShowEvent(QFileDialog* self, QShowEvent* param1);
    friend void QFileDialog_SuperResizeEvent(QFileDialog* self, QResizeEvent* param1);
    friend void QFileDialog_SuperContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1);
    friend bool QFileDialog_SuperEventFilter(QFileDialog* self, QObject* param1, QEvent* param2);
    friend bool QFileDialog_SuperEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_SuperMousePressEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseReleaseEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseMoveEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperWheelEvent(QFileDialog* self, QWheelEvent* event);
    friend void QFileDialog_SuperKeyReleaseEvent(QFileDialog* self, QKeyEvent* event);
    friend void QFileDialog_SuperFocusInEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_SuperFocusOutEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_SuperEnterEvent(QFileDialog* self, QEnterEvent* event);
    friend void QFileDialog_SuperLeaveEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_SuperPaintEvent(QFileDialog* self, QPaintEvent* event);
    friend void QFileDialog_SuperMoveEvent(QFileDialog* self, QMoveEvent* event);
    friend void QFileDialog_SuperTabletEvent(QFileDialog* self, QTabletEvent* event);
    friend void QFileDialog_SuperActionEvent(QFileDialog* self, QActionEvent* event);
    friend void QFileDialog_SuperDragEnterEvent(QFileDialog* self, QDragEnterEvent* event);
    friend void QFileDialog_SuperDragMoveEvent(QFileDialog* self, QDragMoveEvent* event);
    friend void QFileDialog_SuperDragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event);
    friend void QFileDialog_SuperDropEvent(QFileDialog* self, QDropEvent* event);
    friend void QFileDialog_SuperHideEvent(QFileDialog* self, QHideEvent* event);
    friend bool QFileDialog_SuperNativeEvent(QFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFileDialog_SuperMetric(const QFileDialog* self, int param1);
    friend void QFileDialog_SuperInitPainter(const QFileDialog* self, QPainter* painter);
    friend QPaintDevice* QFileDialog_SuperRedirected(const QFileDialog* self, QPoint* offset);
    friend QPainter* QFileDialog_SuperSharedPainter(const QFileDialog* self);
    friend void QFileDialog_SuperInputMethodEvent(QFileDialog* self, QInputMethodEvent* param1);
    friend bool QFileDialog_SuperFocusNextPrevChild(QFileDialog* self, bool next);
    friend void QFileDialog_SuperTimerEvent(QFileDialog* self, QTimerEvent* event);
    friend void QFileDialog_SuperChildEvent(QFileDialog* self, QChildEvent* event);
    friend void QFileDialog_SuperCustomEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_SuperConnectNotify(QFileDialog* self, const QMetaMethod* signal);
    friend void QFileDialog_SuperDisconnectNotify(QFileDialog* self, const QMetaMethod* signal);
};

#endif
