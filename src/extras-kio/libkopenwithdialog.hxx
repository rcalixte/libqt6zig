#pragma once
#ifndef EXTRAS_KIO_LIBKOPENWITHDIALOG_HXX
#define EXTRAS_KIO_LIBKOPENWITHDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KOpenWithDialog
class VirtualKOpenWithDialog final : public KOpenWithDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KOpenWithDialog_MetaObject_Callback = QMetaObject* (*)(const KOpenWithDialog*);
    using KOpenWithDialog_Metacast_Callback = void* (*)(KOpenWithDialog*, const char*);
    using KOpenWithDialog_Metacall_Callback = int (*)(KOpenWithDialog*, int, int, void**);
    using KOpenWithDialog_Accept_Callback = void (*)(KOpenWithDialog*);
    using KOpenWithDialog_SetVisible_Callback = void (*)(KOpenWithDialog*, bool);
    using KOpenWithDialog_SizeHint_Callback = QSize* (*)(const KOpenWithDialog*);
    using KOpenWithDialog_MinimumSizeHint_Callback = QSize* (*)(const KOpenWithDialog*);
    using KOpenWithDialog_Open_Callback = void (*)(KOpenWithDialog*);
    using KOpenWithDialog_Exec_Callback = int (*)(KOpenWithDialog*);
    using KOpenWithDialog_Done_Callback = void (*)(KOpenWithDialog*, int);
    using KOpenWithDialog_Reject_Callback = void (*)(KOpenWithDialog*);
    using KOpenWithDialog_KeyPressEvent_Callback = void (*)(KOpenWithDialog*, QKeyEvent*);
    using KOpenWithDialog_CloseEvent_Callback = void (*)(KOpenWithDialog*, QCloseEvent*);
    using KOpenWithDialog_ShowEvent_Callback = void (*)(KOpenWithDialog*, QShowEvent*);
    using KOpenWithDialog_ResizeEvent_Callback = void (*)(KOpenWithDialog*, QResizeEvent*);
    using KOpenWithDialog_ContextMenuEvent_Callback = void (*)(KOpenWithDialog*, QContextMenuEvent*);
    using KOpenWithDialog_DevType_Callback = int (*)(const KOpenWithDialog*);
    using KOpenWithDialog_HeightForWidth_Callback = int (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_HasHeightForWidth_Callback = bool (*)(const KOpenWithDialog*);
    using KOpenWithDialog_PaintEngine_Callback = QPaintEngine* (*)(const KOpenWithDialog*);
    using KOpenWithDialog_Event_Callback = bool (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_MousePressEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseReleaseEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseDoubleClickEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseMoveEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_WheelEvent_Callback = void (*)(KOpenWithDialog*, QWheelEvent*);
    using KOpenWithDialog_KeyReleaseEvent_Callback = void (*)(KOpenWithDialog*, QKeyEvent*);
    using KOpenWithDialog_FocusInEvent_Callback = void (*)(KOpenWithDialog*, QFocusEvent*);
    using KOpenWithDialog_FocusOutEvent_Callback = void (*)(KOpenWithDialog*, QFocusEvent*);
    using KOpenWithDialog_EnterEvent_Callback = void (*)(KOpenWithDialog*, QEnterEvent*);
    using KOpenWithDialog_LeaveEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_PaintEvent_Callback = void (*)(KOpenWithDialog*, QPaintEvent*);
    using KOpenWithDialog_MoveEvent_Callback = void (*)(KOpenWithDialog*, QMoveEvent*);
    using KOpenWithDialog_TabletEvent_Callback = void (*)(KOpenWithDialog*, QTabletEvent*);
    using KOpenWithDialog_ActionEvent_Callback = void (*)(KOpenWithDialog*, QActionEvent*);
    using KOpenWithDialog_DragEnterEvent_Callback = void (*)(KOpenWithDialog*, QDragEnterEvent*);
    using KOpenWithDialog_DragMoveEvent_Callback = void (*)(KOpenWithDialog*, QDragMoveEvent*);
    using KOpenWithDialog_DragLeaveEvent_Callback = void (*)(KOpenWithDialog*, QDragLeaveEvent*);
    using KOpenWithDialog_DropEvent_Callback = void (*)(KOpenWithDialog*, QDropEvent*);
    using KOpenWithDialog_HideEvent_Callback = void (*)(KOpenWithDialog*, QHideEvent*);
    using KOpenWithDialog_NativeEvent_Callback = bool (*)(KOpenWithDialog*, libqt_string, void*, intptr_t*);
    using KOpenWithDialog_ChangeEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_Metric_Callback = int (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_InitPainter_Callback = void (*)(const KOpenWithDialog*, QPainter*);
    using KOpenWithDialog_Redirected_Callback = QPaintDevice* (*)(const KOpenWithDialog*, QPoint*);
    using KOpenWithDialog_SharedPainter_Callback = QPainter* (*)(const KOpenWithDialog*);
    using KOpenWithDialog_InputMethodEvent_Callback = void (*)(KOpenWithDialog*, QInputMethodEvent*);
    using KOpenWithDialog_InputMethodQuery_Callback = QVariant* (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_FocusNextPrevChild_Callback = bool (*)(KOpenWithDialog*, bool);
    using KOpenWithDialog_TimerEvent_Callback = void (*)(KOpenWithDialog*, QTimerEvent*);
    using KOpenWithDialog_ChildEvent_Callback = void (*)(KOpenWithDialog*, QChildEvent*);
    using KOpenWithDialog_CustomEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_ConnectNotify_Callback = void (*)(KOpenWithDialog*, QMetaMethod*);
    using KOpenWithDialog_DisconnectNotify_Callback = void (*)(KOpenWithDialog*, QMetaMethod*);
    using KOpenWithDialog::adjustPosition;
    using KOpenWithDialog::create;
    using KOpenWithDialog::destroy;
    using KOpenWithDialog::focusNextChild;
    using KOpenWithDialog::focusPreviousChild;
    using KOpenWithDialog::getDecodedMetricF;
    using KOpenWithDialog::isSignalConnected;
    using KOpenWithDialog::receivers;
    using KOpenWithDialog::sender;
    using KOpenWithDialog::senderSignalIndex;
    using KOpenWithDialog::updateMicroFocus;

    // Instance callback storage
    KOpenWithDialog_MetaObject_Callback kopenwithdialog_metaobject_callback = nullptr;
    KOpenWithDialog_Metacast_Callback kopenwithdialog_metacast_callback = nullptr;
    KOpenWithDialog_Metacall_Callback kopenwithdialog_metacall_callback = nullptr;
    KOpenWithDialog_Accept_Callback kopenwithdialog_accept_callback = nullptr;
    KOpenWithDialog_SetVisible_Callback kopenwithdialog_setvisible_callback = nullptr;
    KOpenWithDialog_SizeHint_Callback kopenwithdialog_sizehint_callback = nullptr;
    KOpenWithDialog_MinimumSizeHint_Callback kopenwithdialog_minimumsizehint_callback = nullptr;
    KOpenWithDialog_Open_Callback kopenwithdialog_open_callback = nullptr;
    KOpenWithDialog_Exec_Callback kopenwithdialog_exec_callback = nullptr;
    KOpenWithDialog_Done_Callback kopenwithdialog_done_callback = nullptr;
    KOpenWithDialog_Reject_Callback kopenwithdialog_reject_callback = nullptr;
    KOpenWithDialog_KeyPressEvent_Callback kopenwithdialog_keypressevent_callback = nullptr;
    KOpenWithDialog_CloseEvent_Callback kopenwithdialog_closeevent_callback = nullptr;
    KOpenWithDialog_ShowEvent_Callback kopenwithdialog_showevent_callback = nullptr;
    KOpenWithDialog_ResizeEvent_Callback kopenwithdialog_resizeevent_callback = nullptr;
    KOpenWithDialog_ContextMenuEvent_Callback kopenwithdialog_contextmenuevent_callback = nullptr;
    KOpenWithDialog_DevType_Callback kopenwithdialog_devtype_callback = nullptr;
    KOpenWithDialog_HeightForWidth_Callback kopenwithdialog_heightforwidth_callback = nullptr;
    KOpenWithDialog_HasHeightForWidth_Callback kopenwithdialog_hasheightforwidth_callback = nullptr;
    KOpenWithDialog_PaintEngine_Callback kopenwithdialog_paintengine_callback = nullptr;
    KOpenWithDialog_Event_Callback kopenwithdialog_event_callback = nullptr;
    KOpenWithDialog_MousePressEvent_Callback kopenwithdialog_mousepressevent_callback = nullptr;
    KOpenWithDialog_MouseReleaseEvent_Callback kopenwithdialog_mousereleaseevent_callback = nullptr;
    KOpenWithDialog_MouseDoubleClickEvent_Callback kopenwithdialog_mousedoubleclickevent_callback = nullptr;
    KOpenWithDialog_MouseMoveEvent_Callback kopenwithdialog_mousemoveevent_callback = nullptr;
    KOpenWithDialog_WheelEvent_Callback kopenwithdialog_wheelevent_callback = nullptr;
    KOpenWithDialog_KeyReleaseEvent_Callback kopenwithdialog_keyreleaseevent_callback = nullptr;
    KOpenWithDialog_FocusInEvent_Callback kopenwithdialog_focusinevent_callback = nullptr;
    KOpenWithDialog_FocusOutEvent_Callback kopenwithdialog_focusoutevent_callback = nullptr;
    KOpenWithDialog_EnterEvent_Callback kopenwithdialog_enterevent_callback = nullptr;
    KOpenWithDialog_LeaveEvent_Callback kopenwithdialog_leaveevent_callback = nullptr;
    KOpenWithDialog_PaintEvent_Callback kopenwithdialog_paintevent_callback = nullptr;
    KOpenWithDialog_MoveEvent_Callback kopenwithdialog_moveevent_callback = nullptr;
    KOpenWithDialog_TabletEvent_Callback kopenwithdialog_tabletevent_callback = nullptr;
    KOpenWithDialog_ActionEvent_Callback kopenwithdialog_actionevent_callback = nullptr;
    KOpenWithDialog_DragEnterEvent_Callback kopenwithdialog_dragenterevent_callback = nullptr;
    KOpenWithDialog_DragMoveEvent_Callback kopenwithdialog_dragmoveevent_callback = nullptr;
    KOpenWithDialog_DragLeaveEvent_Callback kopenwithdialog_dragleaveevent_callback = nullptr;
    KOpenWithDialog_DropEvent_Callback kopenwithdialog_dropevent_callback = nullptr;
    KOpenWithDialog_HideEvent_Callback kopenwithdialog_hideevent_callback = nullptr;
    KOpenWithDialog_NativeEvent_Callback kopenwithdialog_nativeevent_callback = nullptr;
    KOpenWithDialog_ChangeEvent_Callback kopenwithdialog_changeevent_callback = nullptr;
    KOpenWithDialog_Metric_Callback kopenwithdialog_metric_callback = nullptr;
    KOpenWithDialog_InitPainter_Callback kopenwithdialog_initpainter_callback = nullptr;
    KOpenWithDialog_Redirected_Callback kopenwithdialog_redirected_callback = nullptr;
    KOpenWithDialog_SharedPainter_Callback kopenwithdialog_sharedpainter_callback = nullptr;
    KOpenWithDialog_InputMethodEvent_Callback kopenwithdialog_inputmethodevent_callback = nullptr;
    KOpenWithDialog_InputMethodQuery_Callback kopenwithdialog_inputmethodquery_callback = nullptr;
    KOpenWithDialog_FocusNextPrevChild_Callback kopenwithdialog_focusnextprevchild_callback = nullptr;
    KOpenWithDialog_TimerEvent_Callback kopenwithdialog_timerevent_callback = nullptr;
    KOpenWithDialog_ChildEvent_Callback kopenwithdialog_childevent_callback = nullptr;
    KOpenWithDialog_CustomEvent_Callback kopenwithdialog_customevent_callback = nullptr;
    KOpenWithDialog_ConnectNotify_Callback kopenwithdialog_connectnotify_callback = nullptr;
    KOpenWithDialog_DisconnectNotify_Callback kopenwithdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KOpenWithDialog {
        using KOpenWithDialog::accept;
        using KOpenWithDialog::actionEvent;
        using KOpenWithDialog::changeEvent;
        using KOpenWithDialog::childEvent;
        using KOpenWithDialog::closeEvent;
        using KOpenWithDialog::connectNotify;
        using KOpenWithDialog::contextMenuEvent;
        using KOpenWithDialog::customEvent;
        using KOpenWithDialog::disconnectNotify;
        using KOpenWithDialog::dragEnterEvent;
        using KOpenWithDialog::dragLeaveEvent;
        using KOpenWithDialog::dragMoveEvent;
        using KOpenWithDialog::dropEvent;
        using KOpenWithDialog::enterEvent;
        using KOpenWithDialog::event;
        using KOpenWithDialog::focusInEvent;
        using KOpenWithDialog::focusNextPrevChild;
        using KOpenWithDialog::focusOutEvent;
        using KOpenWithDialog::hideEvent;
        using KOpenWithDialog::initPainter;
        using KOpenWithDialog::inputMethodEvent;
        using KOpenWithDialog::keyPressEvent;
        using KOpenWithDialog::keyReleaseEvent;
        using KOpenWithDialog::leaveEvent;
        using KOpenWithDialog::metric;
        using KOpenWithDialog::mouseDoubleClickEvent;
        using KOpenWithDialog::mouseMoveEvent;
        using KOpenWithDialog::mousePressEvent;
        using KOpenWithDialog::mouseReleaseEvent;
        using KOpenWithDialog::moveEvent;
        using KOpenWithDialog::nativeEvent;
        using KOpenWithDialog::paintEvent;
        using KOpenWithDialog::redirected;
        using KOpenWithDialog::resizeEvent;
        using KOpenWithDialog::sharedPainter;
        using KOpenWithDialog::showEvent;
        using KOpenWithDialog::tabletEvent;
        using KOpenWithDialog::timerEvent;
        using KOpenWithDialog::wheelEvent;
    };

    VirtualKOpenWithDialog(QWidget* parent) : KOpenWithDialog(parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls) : KOpenWithDialog(urls) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& text, const QString& value) : KOpenWithDialog(urls, text, value) {};
    VirtualKOpenWithDialog(const QString& mimeType, const QString& value) : KOpenWithDialog(mimeType, value) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& mimeType, const QString& text, const QString& value) : KOpenWithDialog(urls, mimeType, text, value) {};
    VirtualKOpenWithDialog() : KOpenWithDialog() {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, QWidget* parent) : KOpenWithDialog(urls, parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& text, const QString& value, QWidget* parent) : KOpenWithDialog(urls, text, value, parent) {};
    VirtualKOpenWithDialog(const QString& mimeType, const QString& value, QWidget* parent) : KOpenWithDialog(mimeType, value, parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& mimeType, const QString& text, const QString& value, QWidget* parent) : KOpenWithDialog(urls, mimeType, text, value, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kopenwithdialog_metaobject_callback) {
            QMetaObject* callback_ret = kopenwithdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KOpenWithDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kopenwithdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kopenwithdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kopenwithdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kopenwithdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kopenwithdialog_accept_callback) {
            kopenwithdialog_accept_callback(this);
            return;
        }
        KOpenWithDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kopenwithdialog_setvisible_callback) {
            bool cbval1 = visible;
            kopenwithdialog_setvisible_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kopenwithdialog_sizehint_callback) {
            QSize* callback_ret = kopenwithdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KOpenWithDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kopenwithdialog_minimumsizehint_callback) {
            QSize* callback_ret = kopenwithdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KOpenWithDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kopenwithdialog_open_callback) {
            kopenwithdialog_open_callback(this);
            return;
        }
        KOpenWithDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kopenwithdialog_exec_callback) {
            int callback_ret = kopenwithdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kopenwithdialog_done_callback) {
            int cbval1 = param1;
            kopenwithdialog_done_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kopenwithdialog_reject_callback) {
            kopenwithdialog_reject_callback(this);
            return;
        }
        KOpenWithDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kopenwithdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kopenwithdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kopenwithdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kopenwithdialog_closeevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kopenwithdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kopenwithdialog_showevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kopenwithdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kopenwithdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kopenwithdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kopenwithdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kopenwithdialog_devtype_callback) {
            int callback_ret = kopenwithdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kopenwithdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kopenwithdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kopenwithdialog_hasheightforwidth_callback) {
            bool callback_ret = kopenwithdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KOpenWithDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kopenwithdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kopenwithdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KOpenWithDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kopenwithdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kopenwithdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kopenwithdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kopenwithdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kopenwithdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kopenwithdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kopenwithdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kopenwithdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kopenwithdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kopenwithdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kopenwithdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kopenwithdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kopenwithdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kopenwithdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kopenwithdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kopenwithdialog_enterevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kopenwithdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kopenwithdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kopenwithdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kopenwithdialog_paintevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kopenwithdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kopenwithdialog_moveevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kopenwithdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kopenwithdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kopenwithdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kopenwithdialog_actionevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kopenwithdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kopenwithdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kopenwithdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kopenwithdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kopenwithdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kopenwithdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kopenwithdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kopenwithdialog_dropevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kopenwithdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kopenwithdialog_hideevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kopenwithdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kopenwithdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KOpenWithDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kopenwithdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kopenwithdialog_changeevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kopenwithdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kopenwithdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kopenwithdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kopenwithdialog_initpainter_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kopenwithdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kopenwithdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kopenwithdialog_sharedpainter_callback) {
            QPainter* callback_ret = kopenwithdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KOpenWithDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kopenwithdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kopenwithdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kopenwithdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kopenwithdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KOpenWithDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kopenwithdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kopenwithdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kopenwithdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kopenwithdialog_timerevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kopenwithdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kopenwithdialog_childevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kopenwithdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kopenwithdialog_customevent_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kopenwithdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kopenwithdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kopenwithdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kopenwithdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KOpenWithDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KOpenWithDialog_SuperAccept(KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperKeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1);
    friend void KOpenWithDialog_SuperCloseEvent(KOpenWithDialog* self, QCloseEvent* param1);
    friend void KOpenWithDialog_SuperShowEvent(KOpenWithDialog* self, QShowEvent* param1);
    friend void KOpenWithDialog_SuperResizeEvent(KOpenWithDialog* self, QResizeEvent* param1);
    friend void KOpenWithDialog_SuperContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1);
    friend bool KOpenWithDialog_SuperEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_SuperMousePressEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperWheelEvent(KOpenWithDialog* self, QWheelEvent* event);
    friend void KOpenWithDialog_SuperKeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event);
    friend void KOpenWithDialog_SuperFocusInEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_SuperFocusOutEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_SuperEnterEvent(KOpenWithDialog* self, QEnterEvent* event);
    friend void KOpenWithDialog_SuperLeaveEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_SuperPaintEvent(KOpenWithDialog* self, QPaintEvent* event);
    friend void KOpenWithDialog_SuperMoveEvent(KOpenWithDialog* self, QMoveEvent* event);
    friend void KOpenWithDialog_SuperTabletEvent(KOpenWithDialog* self, QTabletEvent* event);
    friend void KOpenWithDialog_SuperActionEvent(KOpenWithDialog* self, QActionEvent* event);
    friend void KOpenWithDialog_SuperDragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event);
    friend void KOpenWithDialog_SuperDragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event);
    friend void KOpenWithDialog_SuperDragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event);
    friend void KOpenWithDialog_SuperDropEvent(KOpenWithDialog* self, QDropEvent* event);
    friend void KOpenWithDialog_SuperHideEvent(KOpenWithDialog* self, QHideEvent* event);
    friend bool KOpenWithDialog_SuperNativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KOpenWithDialog_SuperChangeEvent(KOpenWithDialog* self, QEvent* param1);
    friend int KOpenWithDialog_SuperMetric(const KOpenWithDialog* self, int param1);
    friend void KOpenWithDialog_SuperInitPainter(const KOpenWithDialog* self, QPainter* painter);
    friend QPaintDevice* KOpenWithDialog_SuperRedirected(const KOpenWithDialog* self, QPoint* offset);
    friend QPainter* KOpenWithDialog_SuperSharedPainter(const KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperInputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1);
    friend bool KOpenWithDialog_SuperFocusNextPrevChild(KOpenWithDialog* self, bool next);
    friend void KOpenWithDialog_SuperTimerEvent(KOpenWithDialog* self, QTimerEvent* event);
    friend void KOpenWithDialog_SuperChildEvent(KOpenWithDialog* self, QChildEvent* event);
    friend void KOpenWithDialog_SuperCustomEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_SuperConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
    friend void KOpenWithDialog_SuperDisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
};

#endif
