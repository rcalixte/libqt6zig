#pragma once
#ifndef LIBQDIALOG_HXX
#define LIBQDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDialog
class VirtualQDialog final : public QDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDialog_MetaObject_Callback = QMetaObject* (*)(const QDialog*);
    using QDialog_Metacast_Callback = void* (*)(QDialog*, const char*);
    using QDialog_Metacall_Callback = int (*)(QDialog*, int, int, void**);
    using QDialog_SetVisible_Callback = void (*)(QDialog*, bool);
    using QDialog_SizeHint_Callback = QSize* (*)(const QDialog*);
    using QDialog_MinimumSizeHint_Callback = QSize* (*)(const QDialog*);
    using QDialog_Open_Callback = void (*)(QDialog*);
    using QDialog_Exec_Callback = int (*)(QDialog*);
    using QDialog_Done_Callback = void (*)(QDialog*, int);
    using QDialog_Accept_Callback = void (*)(QDialog*);
    using QDialog_Reject_Callback = void (*)(QDialog*);
    using QDialog_KeyPressEvent_Callback = void (*)(QDialog*, QKeyEvent*);
    using QDialog_CloseEvent_Callback = void (*)(QDialog*, QCloseEvent*);
    using QDialog_ShowEvent_Callback = void (*)(QDialog*, QShowEvent*);
    using QDialog_ResizeEvent_Callback = void (*)(QDialog*, QResizeEvent*);
    using QDialog_ContextMenuEvent_Callback = void (*)(QDialog*, QContextMenuEvent*);
    using QDialog_EventFilter_Callback = bool (*)(QDialog*, QObject*, QEvent*);
    using QDialog_DevType_Callback = int (*)(const QDialog*);
    using QDialog_HeightForWidth_Callback = int (*)(const QDialog*, int);
    using QDialog_HasHeightForWidth_Callback = bool (*)(const QDialog*);
    using QDialog_PaintEngine_Callback = QPaintEngine* (*)(const QDialog*);
    using QDialog_Event_Callback = bool (*)(QDialog*, QEvent*);
    using QDialog_MousePressEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseReleaseEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseDoubleClickEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseMoveEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_WheelEvent_Callback = void (*)(QDialog*, QWheelEvent*);
    using QDialog_KeyReleaseEvent_Callback = void (*)(QDialog*, QKeyEvent*);
    using QDialog_FocusInEvent_Callback = void (*)(QDialog*, QFocusEvent*);
    using QDialog_FocusOutEvent_Callback = void (*)(QDialog*, QFocusEvent*);
    using QDialog_EnterEvent_Callback = void (*)(QDialog*, QEnterEvent*);
    using QDialog_LeaveEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_PaintEvent_Callback = void (*)(QDialog*, QPaintEvent*);
    using QDialog_MoveEvent_Callback = void (*)(QDialog*, QMoveEvent*);
    using QDialog_TabletEvent_Callback = void (*)(QDialog*, QTabletEvent*);
    using QDialog_ActionEvent_Callback = void (*)(QDialog*, QActionEvent*);
    using QDialog_DragEnterEvent_Callback = void (*)(QDialog*, QDragEnterEvent*);
    using QDialog_DragMoveEvent_Callback = void (*)(QDialog*, QDragMoveEvent*);
    using QDialog_DragLeaveEvent_Callback = void (*)(QDialog*, QDragLeaveEvent*);
    using QDialog_DropEvent_Callback = void (*)(QDialog*, QDropEvent*);
    using QDialog_HideEvent_Callback = void (*)(QDialog*, QHideEvent*);
    using QDialog_NativeEvent_Callback = bool (*)(QDialog*, libqt_string, void*, intptr_t*);
    using QDialog_ChangeEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_Metric_Callback = int (*)(const QDialog*, int);
    using QDialog_InitPainter_Callback = void (*)(const QDialog*, QPainter*);
    using QDialog_Redirected_Callback = QPaintDevice* (*)(const QDialog*, QPoint*);
    using QDialog_SharedPainter_Callback = QPainter* (*)(const QDialog*);
    using QDialog_InputMethodEvent_Callback = void (*)(QDialog*, QInputMethodEvent*);
    using QDialog_InputMethodQuery_Callback = QVariant* (*)(const QDialog*, int);
    using QDialog_FocusNextPrevChild_Callback = bool (*)(QDialog*, bool);
    using QDialog_TimerEvent_Callback = void (*)(QDialog*, QTimerEvent*);
    using QDialog_ChildEvent_Callback = void (*)(QDialog*, QChildEvent*);
    using QDialog_CustomEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_ConnectNotify_Callback = void (*)(QDialog*, QMetaMethod*);
    using QDialog_DisconnectNotify_Callback = void (*)(QDialog*, QMetaMethod*);
    using QDialog::adjustPosition;
    using QDialog::create;
    using QDialog::destroy;
    using QDialog::focusNextChild;
    using QDialog::focusPreviousChild;
    using QDialog::getDecodedMetricF;
    using QDialog::isSignalConnected;
    using QDialog::receivers;
    using QDialog::sender;
    using QDialog::senderSignalIndex;
    using QDialog::updateMicroFocus;

    // Instance callback storage
    QDialog_MetaObject_Callback qdialog_metaobject_callback = nullptr;
    QDialog_Metacast_Callback qdialog_metacast_callback = nullptr;
    QDialog_Metacall_Callback qdialog_metacall_callback = nullptr;
    QDialog_SetVisible_Callback qdialog_setvisible_callback = nullptr;
    QDialog_SizeHint_Callback qdialog_sizehint_callback = nullptr;
    QDialog_MinimumSizeHint_Callback qdialog_minimumsizehint_callback = nullptr;
    QDialog_Open_Callback qdialog_open_callback = nullptr;
    QDialog_Exec_Callback qdialog_exec_callback = nullptr;
    QDialog_Done_Callback qdialog_done_callback = nullptr;
    QDialog_Accept_Callback qdialog_accept_callback = nullptr;
    QDialog_Reject_Callback qdialog_reject_callback = nullptr;
    QDialog_KeyPressEvent_Callback qdialog_keypressevent_callback = nullptr;
    QDialog_CloseEvent_Callback qdialog_closeevent_callback = nullptr;
    QDialog_ShowEvent_Callback qdialog_showevent_callback = nullptr;
    QDialog_ResizeEvent_Callback qdialog_resizeevent_callback = nullptr;
    QDialog_ContextMenuEvent_Callback qdialog_contextmenuevent_callback = nullptr;
    QDialog_EventFilter_Callback qdialog_eventfilter_callback = nullptr;
    QDialog_DevType_Callback qdialog_devtype_callback = nullptr;
    QDialog_HeightForWidth_Callback qdialog_heightforwidth_callback = nullptr;
    QDialog_HasHeightForWidth_Callback qdialog_hasheightforwidth_callback = nullptr;
    QDialog_PaintEngine_Callback qdialog_paintengine_callback = nullptr;
    QDialog_Event_Callback qdialog_event_callback = nullptr;
    QDialog_MousePressEvent_Callback qdialog_mousepressevent_callback = nullptr;
    QDialog_MouseReleaseEvent_Callback qdialog_mousereleaseevent_callback = nullptr;
    QDialog_MouseDoubleClickEvent_Callback qdialog_mousedoubleclickevent_callback = nullptr;
    QDialog_MouseMoveEvent_Callback qdialog_mousemoveevent_callback = nullptr;
    QDialog_WheelEvent_Callback qdialog_wheelevent_callback = nullptr;
    QDialog_KeyReleaseEvent_Callback qdialog_keyreleaseevent_callback = nullptr;
    QDialog_FocusInEvent_Callback qdialog_focusinevent_callback = nullptr;
    QDialog_FocusOutEvent_Callback qdialog_focusoutevent_callback = nullptr;
    QDialog_EnterEvent_Callback qdialog_enterevent_callback = nullptr;
    QDialog_LeaveEvent_Callback qdialog_leaveevent_callback = nullptr;
    QDialog_PaintEvent_Callback qdialog_paintevent_callback = nullptr;
    QDialog_MoveEvent_Callback qdialog_moveevent_callback = nullptr;
    QDialog_TabletEvent_Callback qdialog_tabletevent_callback = nullptr;
    QDialog_ActionEvent_Callback qdialog_actionevent_callback = nullptr;
    QDialog_DragEnterEvent_Callback qdialog_dragenterevent_callback = nullptr;
    QDialog_DragMoveEvent_Callback qdialog_dragmoveevent_callback = nullptr;
    QDialog_DragLeaveEvent_Callback qdialog_dragleaveevent_callback = nullptr;
    QDialog_DropEvent_Callback qdialog_dropevent_callback = nullptr;
    QDialog_HideEvent_Callback qdialog_hideevent_callback = nullptr;
    QDialog_NativeEvent_Callback qdialog_nativeevent_callback = nullptr;
    QDialog_ChangeEvent_Callback qdialog_changeevent_callback = nullptr;
    QDialog_Metric_Callback qdialog_metric_callback = nullptr;
    QDialog_InitPainter_Callback qdialog_initpainter_callback = nullptr;
    QDialog_Redirected_Callback qdialog_redirected_callback = nullptr;
    QDialog_SharedPainter_Callback qdialog_sharedpainter_callback = nullptr;
    QDialog_InputMethodEvent_Callback qdialog_inputmethodevent_callback = nullptr;
    QDialog_InputMethodQuery_Callback qdialog_inputmethodquery_callback = nullptr;
    QDialog_FocusNextPrevChild_Callback qdialog_focusnextprevchild_callback = nullptr;
    QDialog_TimerEvent_Callback qdialog_timerevent_callback = nullptr;
    QDialog_ChildEvent_Callback qdialog_childevent_callback = nullptr;
    QDialog_CustomEvent_Callback qdialog_customevent_callback = nullptr;
    QDialog_ConnectNotify_Callback qdialog_connectnotify_callback = nullptr;
    QDialog_DisconnectNotify_Callback qdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDialog {
        using QDialog::actionEvent;
        using QDialog::changeEvent;
        using QDialog::childEvent;
        using QDialog::closeEvent;
        using QDialog::connectNotify;
        using QDialog::contextMenuEvent;
        using QDialog::customEvent;
        using QDialog::disconnectNotify;
        using QDialog::dragEnterEvent;
        using QDialog::dragLeaveEvent;
        using QDialog::dragMoveEvent;
        using QDialog::dropEvent;
        using QDialog::enterEvent;
        using QDialog::event;
        using QDialog::eventFilter;
        using QDialog::focusInEvent;
        using QDialog::focusNextPrevChild;
        using QDialog::focusOutEvent;
        using QDialog::hideEvent;
        using QDialog::initPainter;
        using QDialog::inputMethodEvent;
        using QDialog::keyPressEvent;
        using QDialog::keyReleaseEvent;
        using QDialog::leaveEvent;
        using QDialog::metric;
        using QDialog::mouseDoubleClickEvent;
        using QDialog::mouseMoveEvent;
        using QDialog::mousePressEvent;
        using QDialog::mouseReleaseEvent;
        using QDialog::moveEvent;
        using QDialog::nativeEvent;
        using QDialog::paintEvent;
        using QDialog::redirected;
        using QDialog::resizeEvent;
        using QDialog::sharedPainter;
        using QDialog::showEvent;
        using QDialog::tabletEvent;
        using QDialog::timerEvent;
        using QDialog::wheelEvent;
    };

    VirtualQDialog(QWidget* parent) : QDialog(parent) {};
    VirtualQDialog() : QDialog() {};
    VirtualQDialog(QWidget* parent, Qt::WindowFlags f) : QDialog(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdialog_metaobject_callback) {
            QMetaObject* callback_ret = qdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdialog_setvisible_callback) {
            bool cbval1 = visible;
            qdialog_setvisible_callback(this, cbval1);
            return;
        }
        QDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdialog_sizehint_callback) {
            QSize* callback_ret = qdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdialog_minimumsizehint_callback) {
            QSize* callback_ret = qdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qdialog_open_callback) {
            qdialog_open_callback(this);
            return;
        }
        QDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qdialog_exec_callback) {
            int callback_ret = qdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qdialog_done_callback) {
            int cbval1 = param1;
            qdialog_done_callback(this, cbval1);
            return;
        }
        QDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qdialog_accept_callback) {
            qdialog_accept_callback(this);
            return;
        }
        QDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qdialog_reject_callback) {
            qdialog_reject_callback(this);
            return;
        }
        QDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qdialog_closeevent_callback(this, cbval1);
            return;
        }
        QDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qdialog_showevent_callback(this, cbval1);
            return;
        }
        QDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdialog_devtype_callback) {
            int callback_ret = qdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdialog_hasheightforwidth_callback) {
            bool callback_ret = qdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdialog_enterevent_callback(this, cbval1);
            return;
        }
        QDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdialog_paintevent_callback(this, cbval1);
            return;
        }
        QDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdialog_moveevent_callback(this, cbval1);
            return;
        }
        QDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdialog_actionevent_callback(this, cbval1);
            return;
        }
        QDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdialog_dropevent_callback(this, cbval1);
            return;
        }
        QDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdialog_hideevent_callback(this, cbval1);
            return;
        }
        QDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdialog_changeevent_callback(this, cbval1);
            return;
        }
        QDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdialog_initpainter_callback(this, cbval1);
            return;
        }
        QDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdialog_sharedpainter_callback) {
            QPainter* callback_ret = qdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdialog_timerevent_callback(this, cbval1);
            return;
        }
        QDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdialog_childevent_callback(this, cbval1);
            return;
        }
        QDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qdialog_customevent_callback(this, cbval1);
            return;
        }
        QDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDialog_SuperKeyPressEvent(QDialog* self, QKeyEvent* param1);
    friend void QDialog_SuperCloseEvent(QDialog* self, QCloseEvent* param1);
    friend void QDialog_SuperShowEvent(QDialog* self, QShowEvent* param1);
    friend void QDialog_SuperResizeEvent(QDialog* self, QResizeEvent* param1);
    friend void QDialog_SuperContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
    friend bool QDialog_SuperEventFilter(QDialog* self, QObject* param1, QEvent* param2);
    friend bool QDialog_SuperEvent(QDialog* self, QEvent* event);
    friend void QDialog_SuperMousePressEvent(QDialog* self, QMouseEvent* event);
    friend void QDialog_SuperMouseReleaseEvent(QDialog* self, QMouseEvent* event);
    friend void QDialog_SuperMouseDoubleClickEvent(QDialog* self, QMouseEvent* event);
    friend void QDialog_SuperMouseMoveEvent(QDialog* self, QMouseEvent* event);
    friend void QDialog_SuperWheelEvent(QDialog* self, QWheelEvent* event);
    friend void QDialog_SuperKeyReleaseEvent(QDialog* self, QKeyEvent* event);
    friend void QDialog_SuperFocusInEvent(QDialog* self, QFocusEvent* event);
    friend void QDialog_SuperFocusOutEvent(QDialog* self, QFocusEvent* event);
    friend void QDialog_SuperEnterEvent(QDialog* self, QEnterEvent* event);
    friend void QDialog_SuperLeaveEvent(QDialog* self, QEvent* event);
    friend void QDialog_SuperPaintEvent(QDialog* self, QPaintEvent* event);
    friend void QDialog_SuperMoveEvent(QDialog* self, QMoveEvent* event);
    friend void QDialog_SuperTabletEvent(QDialog* self, QTabletEvent* event);
    friend void QDialog_SuperActionEvent(QDialog* self, QActionEvent* event);
    friend void QDialog_SuperDragEnterEvent(QDialog* self, QDragEnterEvent* event);
    friend void QDialog_SuperDragMoveEvent(QDialog* self, QDragMoveEvent* event);
    friend void QDialog_SuperDragLeaveEvent(QDialog* self, QDragLeaveEvent* event);
    friend void QDialog_SuperDropEvent(QDialog* self, QDropEvent* event);
    friend void QDialog_SuperHideEvent(QDialog* self, QHideEvent* event);
    friend bool QDialog_SuperNativeEvent(QDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDialog_SuperChangeEvent(QDialog* self, QEvent* param1);
    friend int QDialog_SuperMetric(const QDialog* self, int param1);
    friend void QDialog_SuperInitPainter(const QDialog* self, QPainter* painter);
    friend QPaintDevice* QDialog_SuperRedirected(const QDialog* self, QPoint* offset);
    friend QPainter* QDialog_SuperSharedPainter(const QDialog* self);
    friend void QDialog_SuperInputMethodEvent(QDialog* self, QInputMethodEvent* param1);
    friend bool QDialog_SuperFocusNextPrevChild(QDialog* self, bool next);
    friend void QDialog_SuperTimerEvent(QDialog* self, QTimerEvent* event);
    friend void QDialog_SuperChildEvent(QDialog* self, QChildEvent* event);
    friend void QDialog_SuperCustomEvent(QDialog* self, QEvent* event);
    friend void QDialog_SuperConnectNotify(QDialog* self, const QMetaMethod* signal);
    friend void QDialog_SuperDisconnectNotify(QDialog* self, const QMetaMethod* signal);
};

#endif
