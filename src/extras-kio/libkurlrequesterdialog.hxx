#pragma once
#ifndef EXTRAS_KIO_LIBKURLREQUESTERDIALOG_HXX
#define EXTRAS_KIO_LIBKURLREQUESTERDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlRequesterDialog
class VirtualKUrlRequesterDialog final : public KUrlRequesterDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlRequesterDialog_MetaObject_Callback = QMetaObject* (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_Metacast_Callback = void* (*)(KUrlRequesterDialog*, const char*);
    using KUrlRequesterDialog_Metacall_Callback = int (*)(KUrlRequesterDialog*, int, int, void**);
    using KUrlRequesterDialog_SetVisible_Callback = void (*)(KUrlRequesterDialog*, bool);
    using KUrlRequesterDialog_SizeHint_Callback = QSize* (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_MinimumSizeHint_Callback = QSize* (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_Open_Callback = void (*)(KUrlRequesterDialog*);
    using KUrlRequesterDialog_Exec_Callback = int (*)(KUrlRequesterDialog*);
    using KUrlRequesterDialog_Done_Callback = void (*)(KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_Accept_Callback = void (*)(KUrlRequesterDialog*);
    using KUrlRequesterDialog_Reject_Callback = void (*)(KUrlRequesterDialog*);
    using KUrlRequesterDialog_KeyPressEvent_Callback = void (*)(KUrlRequesterDialog*, QKeyEvent*);
    using KUrlRequesterDialog_CloseEvent_Callback = void (*)(KUrlRequesterDialog*, QCloseEvent*);
    using KUrlRequesterDialog_ShowEvent_Callback = void (*)(KUrlRequesterDialog*, QShowEvent*);
    using KUrlRequesterDialog_ResizeEvent_Callback = void (*)(KUrlRequesterDialog*, QResizeEvent*);
    using KUrlRequesterDialog_ContextMenuEvent_Callback = void (*)(KUrlRequesterDialog*, QContextMenuEvent*);
    using KUrlRequesterDialog_EventFilter_Callback = bool (*)(KUrlRequesterDialog*, QObject*, QEvent*);
    using KUrlRequesterDialog_DevType_Callback = int (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_HeightForWidth_Callback = int (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_HasHeightForWidth_Callback = bool (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_PaintEngine_Callback = QPaintEngine* (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_Event_Callback = bool (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_MousePressEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseReleaseEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseDoubleClickEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseMoveEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_WheelEvent_Callback = void (*)(KUrlRequesterDialog*, QWheelEvent*);
    using KUrlRequesterDialog_KeyReleaseEvent_Callback = void (*)(KUrlRequesterDialog*, QKeyEvent*);
    using KUrlRequesterDialog_FocusInEvent_Callback = void (*)(KUrlRequesterDialog*, QFocusEvent*);
    using KUrlRequesterDialog_FocusOutEvent_Callback = void (*)(KUrlRequesterDialog*, QFocusEvent*);
    using KUrlRequesterDialog_EnterEvent_Callback = void (*)(KUrlRequesterDialog*, QEnterEvent*);
    using KUrlRequesterDialog_LeaveEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_PaintEvent_Callback = void (*)(KUrlRequesterDialog*, QPaintEvent*);
    using KUrlRequesterDialog_MoveEvent_Callback = void (*)(KUrlRequesterDialog*, QMoveEvent*);
    using KUrlRequesterDialog_TabletEvent_Callback = void (*)(KUrlRequesterDialog*, QTabletEvent*);
    using KUrlRequesterDialog_ActionEvent_Callback = void (*)(KUrlRequesterDialog*, QActionEvent*);
    using KUrlRequesterDialog_DragEnterEvent_Callback = void (*)(KUrlRequesterDialog*, QDragEnterEvent*);
    using KUrlRequesterDialog_DragMoveEvent_Callback = void (*)(KUrlRequesterDialog*, QDragMoveEvent*);
    using KUrlRequesterDialog_DragLeaveEvent_Callback = void (*)(KUrlRequesterDialog*, QDragLeaveEvent*);
    using KUrlRequesterDialog_DropEvent_Callback = void (*)(KUrlRequesterDialog*, QDropEvent*);
    using KUrlRequesterDialog_HideEvent_Callback = void (*)(KUrlRequesterDialog*, QHideEvent*);
    using KUrlRequesterDialog_NativeEvent_Callback = bool (*)(KUrlRequesterDialog*, libqt_string, void*, intptr_t*);
    using KUrlRequesterDialog_ChangeEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_Metric_Callback = int (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_InitPainter_Callback = void (*)(const KUrlRequesterDialog*, QPainter*);
    using KUrlRequesterDialog_Redirected_Callback = QPaintDevice* (*)(const KUrlRequesterDialog*, QPoint*);
    using KUrlRequesterDialog_SharedPainter_Callback = QPainter* (*)(const KUrlRequesterDialog*);
    using KUrlRequesterDialog_InputMethodEvent_Callback = void (*)(KUrlRequesterDialog*, QInputMethodEvent*);
    using KUrlRequesterDialog_InputMethodQuery_Callback = QVariant* (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_FocusNextPrevChild_Callback = bool (*)(KUrlRequesterDialog*, bool);
    using KUrlRequesterDialog_TimerEvent_Callback = void (*)(KUrlRequesterDialog*, QTimerEvent*);
    using KUrlRequesterDialog_ChildEvent_Callback = void (*)(KUrlRequesterDialog*, QChildEvent*);
    using KUrlRequesterDialog_CustomEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_ConnectNotify_Callback = void (*)(KUrlRequesterDialog*, QMetaMethod*);
    using KUrlRequesterDialog_DisconnectNotify_Callback = void (*)(KUrlRequesterDialog*, QMetaMethod*);
    using KUrlRequesterDialog::adjustPosition;
    using KUrlRequesterDialog::create;
    using KUrlRequesterDialog::destroy;
    using KUrlRequesterDialog::focusNextChild;
    using KUrlRequesterDialog::focusPreviousChild;
    using KUrlRequesterDialog::getDecodedMetricF;
    using KUrlRequesterDialog::isSignalConnected;
    using KUrlRequesterDialog::receivers;
    using KUrlRequesterDialog::sender;
    using KUrlRequesterDialog::senderSignalIndex;
    using KUrlRequesterDialog::updateMicroFocus;

    // Instance callback storage
    KUrlRequesterDialog_MetaObject_Callback kurlrequesterdialog_metaobject_callback = nullptr;
    KUrlRequesterDialog_Metacast_Callback kurlrequesterdialog_metacast_callback = nullptr;
    KUrlRequesterDialog_Metacall_Callback kurlrequesterdialog_metacall_callback = nullptr;
    KUrlRequesterDialog_SetVisible_Callback kurlrequesterdialog_setvisible_callback = nullptr;
    KUrlRequesterDialog_SizeHint_Callback kurlrequesterdialog_sizehint_callback = nullptr;
    KUrlRequesterDialog_MinimumSizeHint_Callback kurlrequesterdialog_minimumsizehint_callback = nullptr;
    KUrlRequesterDialog_Open_Callback kurlrequesterdialog_open_callback = nullptr;
    KUrlRequesterDialog_Exec_Callback kurlrequesterdialog_exec_callback = nullptr;
    KUrlRequesterDialog_Done_Callback kurlrequesterdialog_done_callback = nullptr;
    KUrlRequesterDialog_Accept_Callback kurlrequesterdialog_accept_callback = nullptr;
    KUrlRequesterDialog_Reject_Callback kurlrequesterdialog_reject_callback = nullptr;
    KUrlRequesterDialog_KeyPressEvent_Callback kurlrequesterdialog_keypressevent_callback = nullptr;
    KUrlRequesterDialog_CloseEvent_Callback kurlrequesterdialog_closeevent_callback = nullptr;
    KUrlRequesterDialog_ShowEvent_Callback kurlrequesterdialog_showevent_callback = nullptr;
    KUrlRequesterDialog_ResizeEvent_Callback kurlrequesterdialog_resizeevent_callback = nullptr;
    KUrlRequesterDialog_ContextMenuEvent_Callback kurlrequesterdialog_contextmenuevent_callback = nullptr;
    KUrlRequesterDialog_EventFilter_Callback kurlrequesterdialog_eventfilter_callback = nullptr;
    KUrlRequesterDialog_DevType_Callback kurlrequesterdialog_devtype_callback = nullptr;
    KUrlRequesterDialog_HeightForWidth_Callback kurlrequesterdialog_heightforwidth_callback = nullptr;
    KUrlRequesterDialog_HasHeightForWidth_Callback kurlrequesterdialog_hasheightforwidth_callback = nullptr;
    KUrlRequesterDialog_PaintEngine_Callback kurlrequesterdialog_paintengine_callback = nullptr;
    KUrlRequesterDialog_Event_Callback kurlrequesterdialog_event_callback = nullptr;
    KUrlRequesterDialog_MousePressEvent_Callback kurlrequesterdialog_mousepressevent_callback = nullptr;
    KUrlRequesterDialog_MouseReleaseEvent_Callback kurlrequesterdialog_mousereleaseevent_callback = nullptr;
    KUrlRequesterDialog_MouseDoubleClickEvent_Callback kurlrequesterdialog_mousedoubleclickevent_callback = nullptr;
    KUrlRequesterDialog_MouseMoveEvent_Callback kurlrequesterdialog_mousemoveevent_callback = nullptr;
    KUrlRequesterDialog_WheelEvent_Callback kurlrequesterdialog_wheelevent_callback = nullptr;
    KUrlRequesterDialog_KeyReleaseEvent_Callback kurlrequesterdialog_keyreleaseevent_callback = nullptr;
    KUrlRequesterDialog_FocusInEvent_Callback kurlrequesterdialog_focusinevent_callback = nullptr;
    KUrlRequesterDialog_FocusOutEvent_Callback kurlrequesterdialog_focusoutevent_callback = nullptr;
    KUrlRequesterDialog_EnterEvent_Callback kurlrequesterdialog_enterevent_callback = nullptr;
    KUrlRequesterDialog_LeaveEvent_Callback kurlrequesterdialog_leaveevent_callback = nullptr;
    KUrlRequesterDialog_PaintEvent_Callback kurlrequesterdialog_paintevent_callback = nullptr;
    KUrlRequesterDialog_MoveEvent_Callback kurlrequesterdialog_moveevent_callback = nullptr;
    KUrlRequesterDialog_TabletEvent_Callback kurlrequesterdialog_tabletevent_callback = nullptr;
    KUrlRequesterDialog_ActionEvent_Callback kurlrequesterdialog_actionevent_callback = nullptr;
    KUrlRequesterDialog_DragEnterEvent_Callback kurlrequesterdialog_dragenterevent_callback = nullptr;
    KUrlRequesterDialog_DragMoveEvent_Callback kurlrequesterdialog_dragmoveevent_callback = nullptr;
    KUrlRequesterDialog_DragLeaveEvent_Callback kurlrequesterdialog_dragleaveevent_callback = nullptr;
    KUrlRequesterDialog_DropEvent_Callback kurlrequesterdialog_dropevent_callback = nullptr;
    KUrlRequesterDialog_HideEvent_Callback kurlrequesterdialog_hideevent_callback = nullptr;
    KUrlRequesterDialog_NativeEvent_Callback kurlrequesterdialog_nativeevent_callback = nullptr;
    KUrlRequesterDialog_ChangeEvent_Callback kurlrequesterdialog_changeevent_callback = nullptr;
    KUrlRequesterDialog_Metric_Callback kurlrequesterdialog_metric_callback = nullptr;
    KUrlRequesterDialog_InitPainter_Callback kurlrequesterdialog_initpainter_callback = nullptr;
    KUrlRequesterDialog_Redirected_Callback kurlrequesterdialog_redirected_callback = nullptr;
    KUrlRequesterDialog_SharedPainter_Callback kurlrequesterdialog_sharedpainter_callback = nullptr;
    KUrlRequesterDialog_InputMethodEvent_Callback kurlrequesterdialog_inputmethodevent_callback = nullptr;
    KUrlRequesterDialog_InputMethodQuery_Callback kurlrequesterdialog_inputmethodquery_callback = nullptr;
    KUrlRequesterDialog_FocusNextPrevChild_Callback kurlrequesterdialog_focusnextprevchild_callback = nullptr;
    KUrlRequesterDialog_TimerEvent_Callback kurlrequesterdialog_timerevent_callback = nullptr;
    KUrlRequesterDialog_ChildEvent_Callback kurlrequesterdialog_childevent_callback = nullptr;
    KUrlRequesterDialog_CustomEvent_Callback kurlrequesterdialog_customevent_callback = nullptr;
    KUrlRequesterDialog_ConnectNotify_Callback kurlrequesterdialog_connectnotify_callback = nullptr;
    KUrlRequesterDialog_DisconnectNotify_Callback kurlrequesterdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KUrlRequesterDialog {
        using KUrlRequesterDialog::actionEvent;
        using KUrlRequesterDialog::changeEvent;
        using KUrlRequesterDialog::childEvent;
        using KUrlRequesterDialog::closeEvent;
        using KUrlRequesterDialog::connectNotify;
        using KUrlRequesterDialog::contextMenuEvent;
        using KUrlRequesterDialog::customEvent;
        using KUrlRequesterDialog::disconnectNotify;
        using KUrlRequesterDialog::dragEnterEvent;
        using KUrlRequesterDialog::dragLeaveEvent;
        using KUrlRequesterDialog::dragMoveEvent;
        using KUrlRequesterDialog::dropEvent;
        using KUrlRequesterDialog::enterEvent;
        using KUrlRequesterDialog::event;
        using KUrlRequesterDialog::eventFilter;
        using KUrlRequesterDialog::focusInEvent;
        using KUrlRequesterDialog::focusNextPrevChild;
        using KUrlRequesterDialog::focusOutEvent;
        using KUrlRequesterDialog::hideEvent;
        using KUrlRequesterDialog::initPainter;
        using KUrlRequesterDialog::inputMethodEvent;
        using KUrlRequesterDialog::keyPressEvent;
        using KUrlRequesterDialog::keyReleaseEvent;
        using KUrlRequesterDialog::leaveEvent;
        using KUrlRequesterDialog::metric;
        using KUrlRequesterDialog::mouseDoubleClickEvent;
        using KUrlRequesterDialog::mouseMoveEvent;
        using KUrlRequesterDialog::mousePressEvent;
        using KUrlRequesterDialog::mouseReleaseEvent;
        using KUrlRequesterDialog::moveEvent;
        using KUrlRequesterDialog::nativeEvent;
        using KUrlRequesterDialog::paintEvent;
        using KUrlRequesterDialog::redirected;
        using KUrlRequesterDialog::resizeEvent;
        using KUrlRequesterDialog::sharedPainter;
        using KUrlRequesterDialog::showEvent;
        using KUrlRequesterDialog::tabletEvent;
        using KUrlRequesterDialog::timerEvent;
        using KUrlRequesterDialog::wheelEvent;
    };

    VirtualKUrlRequesterDialog(const QUrl& url) : KUrlRequesterDialog(url) {};
    VirtualKUrlRequesterDialog(const QUrl& url, const QString& text, QWidget* parent) : KUrlRequesterDialog(url, text, parent) {};
    VirtualKUrlRequesterDialog(const QUrl& url, QWidget* parent) : KUrlRequesterDialog(url, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlrequesterdialog_metaobject_callback) {
            QMetaObject* callback_ret = kurlrequesterdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlRequesterDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlrequesterdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlrequesterdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlrequesterdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlrequesterdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlrequesterdialog_setvisible_callback) {
            bool cbval1 = visible;
            kurlrequesterdialog_setvisible_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlrequesterdialog_sizehint_callback) {
            QSize* callback_ret = kurlrequesterdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequesterDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlrequesterdialog_minimumsizehint_callback) {
            QSize* callback_ret = kurlrequesterdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequesterDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kurlrequesterdialog_open_callback) {
            kurlrequesterdialog_open_callback(this);
            return;
        }
        KUrlRequesterDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kurlrequesterdialog_exec_callback) {
            int callback_ret = kurlrequesterdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kurlrequesterdialog_done_callback) {
            int cbval1 = param1;
            kurlrequesterdialog_done_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kurlrequesterdialog_accept_callback) {
            kurlrequesterdialog_accept_callback(this);
            return;
        }
        KUrlRequesterDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kurlrequesterdialog_reject_callback) {
            kurlrequesterdialog_reject_callback(this);
            return;
        }
        KUrlRequesterDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kurlrequesterdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kurlrequesterdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kurlrequesterdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kurlrequesterdialog_closeevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kurlrequesterdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kurlrequesterdialog_showevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kurlrequesterdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kurlrequesterdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kurlrequesterdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kurlrequesterdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kurlrequesterdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kurlrequesterdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlRequesterDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlrequesterdialog_devtype_callback) {
            int callback_ret = kurlrequesterdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlrequesterdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurlrequesterdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlrequesterdialog_hasheightforwidth_callback) {
            bool callback_ret = kurlrequesterdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlRequesterDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlrequesterdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kurlrequesterdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlRequesterDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlrequesterdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlrequesterdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequesterdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequesterdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequesterdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequesterdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlrequesterdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kurlrequesterdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlrequesterdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlrequesterdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlrequesterdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlrequesterdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlrequesterdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlrequesterdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlrequesterdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurlrequesterdialog_enterevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlrequesterdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kurlrequesterdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlrequesterdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kurlrequesterdialog_paintevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlrequesterdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurlrequesterdialog_moveevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlrequesterdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurlrequesterdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlrequesterdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurlrequesterdialog_actionevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlrequesterdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurlrequesterdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlrequesterdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurlrequesterdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlrequesterdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurlrequesterdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlrequesterdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurlrequesterdialog_dropevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlrequesterdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kurlrequesterdialog_hideevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlrequesterdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurlrequesterdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlRequesterDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurlrequesterdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kurlrequesterdialog_changeevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlrequesterdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurlrequesterdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlrequesterdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurlrequesterdialog_initpainter_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlrequesterdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurlrequesterdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlrequesterdialog_sharedpainter_callback) {
            QPainter* callback_ret = kurlrequesterdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlRequesterDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlrequesterdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurlrequesterdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlrequesterdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurlrequesterdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequesterDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlrequesterdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurlrequesterdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlrequesterdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlrequesterdialog_timerevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlrequesterdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlrequesterdialog_childevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlrequesterdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kurlrequesterdialog_customevent_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlrequesterdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlrequesterdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlrequesterdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlrequesterdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlRequesterDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlRequesterDialog_SuperKeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1);
    friend void KUrlRequesterDialog_SuperCloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1);
    friend void KUrlRequesterDialog_SuperShowEvent(KUrlRequesterDialog* self, QShowEvent* param1);
    friend void KUrlRequesterDialog_SuperResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1);
    friend void KUrlRequesterDialog_SuperContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1);
    friend bool KUrlRequesterDialog_SuperEventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2);
    friend bool KUrlRequesterDialog_SuperEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_SuperMousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperWheelEvent(KUrlRequesterDialog* self, QWheelEvent* event);
    friend void KUrlRequesterDialog_SuperKeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event);
    friend void KUrlRequesterDialog_SuperFocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_SuperFocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_SuperEnterEvent(KUrlRequesterDialog* self, QEnterEvent* event);
    friend void KUrlRequesterDialog_SuperLeaveEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_SuperPaintEvent(KUrlRequesterDialog* self, QPaintEvent* event);
    friend void KUrlRequesterDialog_SuperMoveEvent(KUrlRequesterDialog* self, QMoveEvent* event);
    friend void KUrlRequesterDialog_SuperTabletEvent(KUrlRequesterDialog* self, QTabletEvent* event);
    friend void KUrlRequesterDialog_SuperActionEvent(KUrlRequesterDialog* self, QActionEvent* event);
    friend void KUrlRequesterDialog_SuperDragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event);
    friend void KUrlRequesterDialog_SuperDragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event);
    friend void KUrlRequesterDialog_SuperDragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event);
    friend void KUrlRequesterDialog_SuperDropEvent(KUrlRequesterDialog* self, QDropEvent* event);
    friend void KUrlRequesterDialog_SuperHideEvent(KUrlRequesterDialog* self, QHideEvent* event);
    friend bool KUrlRequesterDialog_SuperNativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KUrlRequesterDialog_SuperChangeEvent(KUrlRequesterDialog* self, QEvent* param1);
    friend int KUrlRequesterDialog_SuperMetric(const KUrlRequesterDialog* self, int param1);
    friend void KUrlRequesterDialog_SuperInitPainter(const KUrlRequesterDialog* self, QPainter* painter);
    friend QPaintDevice* KUrlRequesterDialog_SuperRedirected(const KUrlRequesterDialog* self, QPoint* offset);
    friend QPainter* KUrlRequesterDialog_SuperSharedPainter(const KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_SuperInputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1);
    friend bool KUrlRequesterDialog_SuperFocusNextPrevChild(KUrlRequesterDialog* self, bool next);
    friend void KUrlRequesterDialog_SuperTimerEvent(KUrlRequesterDialog* self, QTimerEvent* event);
    friend void KUrlRequesterDialog_SuperChildEvent(KUrlRequesterDialog* self, QChildEvent* event);
    friend void KUrlRequesterDialog_SuperCustomEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_SuperConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend void KUrlRequesterDialog_SuperDisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
};

#endif
