#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKICONDIALOG_HXX
#define EXTRAS_KICONTHEMES_LIBKICONDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconDialog
class VirtualKIconDialog final : public KIconDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIconDialog_MetaObject_Callback = QMetaObject* (*)(const KIconDialog*);
    using KIconDialog_Metacast_Callback = void* (*)(KIconDialog*, const char*);
    using KIconDialog_Metacall_Callback = int (*)(KIconDialog*, int, int, void**);
    using KIconDialog_ShowEvent_Callback = void (*)(KIconDialog*, QShowEvent*);
    using KIconDialog_SetVisible_Callback = void (*)(KIconDialog*, bool);
    using KIconDialog_SizeHint_Callback = QSize* (*)(const KIconDialog*);
    using KIconDialog_MinimumSizeHint_Callback = QSize* (*)(const KIconDialog*);
    using KIconDialog_Open_Callback = void (*)(KIconDialog*);
    using KIconDialog_Exec_Callback = int (*)(KIconDialog*);
    using KIconDialog_Done_Callback = void (*)(KIconDialog*, int);
    using KIconDialog_Accept_Callback = void (*)(KIconDialog*);
    using KIconDialog_Reject_Callback = void (*)(KIconDialog*);
    using KIconDialog_KeyPressEvent_Callback = void (*)(KIconDialog*, QKeyEvent*);
    using KIconDialog_CloseEvent_Callback = void (*)(KIconDialog*, QCloseEvent*);
    using KIconDialog_ResizeEvent_Callback = void (*)(KIconDialog*, QResizeEvent*);
    using KIconDialog_ContextMenuEvent_Callback = void (*)(KIconDialog*, QContextMenuEvent*);
    using KIconDialog_EventFilter_Callback = bool (*)(KIconDialog*, QObject*, QEvent*);
    using KIconDialog_DevType_Callback = int (*)(const KIconDialog*);
    using KIconDialog_HeightForWidth_Callback = int (*)(const KIconDialog*, int);
    using KIconDialog_HasHeightForWidth_Callback = bool (*)(const KIconDialog*);
    using KIconDialog_PaintEngine_Callback = QPaintEngine* (*)(const KIconDialog*);
    using KIconDialog_Event_Callback = bool (*)(KIconDialog*, QEvent*);
    using KIconDialog_MousePressEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseReleaseEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseDoubleClickEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseMoveEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_WheelEvent_Callback = void (*)(KIconDialog*, QWheelEvent*);
    using KIconDialog_KeyReleaseEvent_Callback = void (*)(KIconDialog*, QKeyEvent*);
    using KIconDialog_FocusInEvent_Callback = void (*)(KIconDialog*, QFocusEvent*);
    using KIconDialog_FocusOutEvent_Callback = void (*)(KIconDialog*, QFocusEvent*);
    using KIconDialog_EnterEvent_Callback = void (*)(KIconDialog*, QEnterEvent*);
    using KIconDialog_LeaveEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_PaintEvent_Callback = void (*)(KIconDialog*, QPaintEvent*);
    using KIconDialog_MoveEvent_Callback = void (*)(KIconDialog*, QMoveEvent*);
    using KIconDialog_TabletEvent_Callback = void (*)(KIconDialog*, QTabletEvent*);
    using KIconDialog_ActionEvent_Callback = void (*)(KIconDialog*, QActionEvent*);
    using KIconDialog_DragEnterEvent_Callback = void (*)(KIconDialog*, QDragEnterEvent*);
    using KIconDialog_DragMoveEvent_Callback = void (*)(KIconDialog*, QDragMoveEvent*);
    using KIconDialog_DragLeaveEvent_Callback = void (*)(KIconDialog*, QDragLeaveEvent*);
    using KIconDialog_DropEvent_Callback = void (*)(KIconDialog*, QDropEvent*);
    using KIconDialog_HideEvent_Callback = void (*)(KIconDialog*, QHideEvent*);
    using KIconDialog_NativeEvent_Callback = bool (*)(KIconDialog*, libqt_string, void*, intptr_t*);
    using KIconDialog_ChangeEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_Metric_Callback = int (*)(const KIconDialog*, int);
    using KIconDialog_InitPainter_Callback = void (*)(const KIconDialog*, QPainter*);
    using KIconDialog_Redirected_Callback = QPaintDevice* (*)(const KIconDialog*, QPoint*);
    using KIconDialog_SharedPainter_Callback = QPainter* (*)(const KIconDialog*);
    using KIconDialog_InputMethodEvent_Callback = void (*)(KIconDialog*, QInputMethodEvent*);
    using KIconDialog_InputMethodQuery_Callback = QVariant* (*)(const KIconDialog*, int);
    using KIconDialog_FocusNextPrevChild_Callback = bool (*)(KIconDialog*, bool);
    using KIconDialog_TimerEvent_Callback = void (*)(KIconDialog*, QTimerEvent*);
    using KIconDialog_ChildEvent_Callback = void (*)(KIconDialog*, QChildEvent*);
    using KIconDialog_CustomEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_ConnectNotify_Callback = void (*)(KIconDialog*, QMetaMethod*);
    using KIconDialog_DisconnectNotify_Callback = void (*)(KIconDialog*, QMetaMethod*);
    using KIconDialog::adjustPosition;
    using KIconDialog::create;
    using KIconDialog::destroy;
    using KIconDialog::focusNextChild;
    using KIconDialog::focusPreviousChild;
    using KIconDialog::getDecodedMetricF;
    using KIconDialog::isSignalConnected;
    using KIconDialog::receivers;
    using KIconDialog::sender;
    using KIconDialog::senderSignalIndex;
    using KIconDialog::slotOk;
    using KIconDialog::updateMicroFocus;

    // Instance callback storage
    KIconDialog_MetaObject_Callback kicondialog_metaobject_callback = nullptr;
    KIconDialog_Metacast_Callback kicondialog_metacast_callback = nullptr;
    KIconDialog_Metacall_Callback kicondialog_metacall_callback = nullptr;
    KIconDialog_ShowEvent_Callback kicondialog_showevent_callback = nullptr;
    KIconDialog_SetVisible_Callback kicondialog_setvisible_callback = nullptr;
    KIconDialog_SizeHint_Callback kicondialog_sizehint_callback = nullptr;
    KIconDialog_MinimumSizeHint_Callback kicondialog_minimumsizehint_callback = nullptr;
    KIconDialog_Open_Callback kicondialog_open_callback = nullptr;
    KIconDialog_Exec_Callback kicondialog_exec_callback = nullptr;
    KIconDialog_Done_Callback kicondialog_done_callback = nullptr;
    KIconDialog_Accept_Callback kicondialog_accept_callback = nullptr;
    KIconDialog_Reject_Callback kicondialog_reject_callback = nullptr;
    KIconDialog_KeyPressEvent_Callback kicondialog_keypressevent_callback = nullptr;
    KIconDialog_CloseEvent_Callback kicondialog_closeevent_callback = nullptr;
    KIconDialog_ResizeEvent_Callback kicondialog_resizeevent_callback = nullptr;
    KIconDialog_ContextMenuEvent_Callback kicondialog_contextmenuevent_callback = nullptr;
    KIconDialog_EventFilter_Callback kicondialog_eventfilter_callback = nullptr;
    KIconDialog_DevType_Callback kicondialog_devtype_callback = nullptr;
    KIconDialog_HeightForWidth_Callback kicondialog_heightforwidth_callback = nullptr;
    KIconDialog_HasHeightForWidth_Callback kicondialog_hasheightforwidth_callback = nullptr;
    KIconDialog_PaintEngine_Callback kicondialog_paintengine_callback = nullptr;
    KIconDialog_Event_Callback kicondialog_event_callback = nullptr;
    KIconDialog_MousePressEvent_Callback kicondialog_mousepressevent_callback = nullptr;
    KIconDialog_MouseReleaseEvent_Callback kicondialog_mousereleaseevent_callback = nullptr;
    KIconDialog_MouseDoubleClickEvent_Callback kicondialog_mousedoubleclickevent_callback = nullptr;
    KIconDialog_MouseMoveEvent_Callback kicondialog_mousemoveevent_callback = nullptr;
    KIconDialog_WheelEvent_Callback kicondialog_wheelevent_callback = nullptr;
    KIconDialog_KeyReleaseEvent_Callback kicondialog_keyreleaseevent_callback = nullptr;
    KIconDialog_FocusInEvent_Callback kicondialog_focusinevent_callback = nullptr;
    KIconDialog_FocusOutEvent_Callback kicondialog_focusoutevent_callback = nullptr;
    KIconDialog_EnterEvent_Callback kicondialog_enterevent_callback = nullptr;
    KIconDialog_LeaveEvent_Callback kicondialog_leaveevent_callback = nullptr;
    KIconDialog_PaintEvent_Callback kicondialog_paintevent_callback = nullptr;
    KIconDialog_MoveEvent_Callback kicondialog_moveevent_callback = nullptr;
    KIconDialog_TabletEvent_Callback kicondialog_tabletevent_callback = nullptr;
    KIconDialog_ActionEvent_Callback kicondialog_actionevent_callback = nullptr;
    KIconDialog_DragEnterEvent_Callback kicondialog_dragenterevent_callback = nullptr;
    KIconDialog_DragMoveEvent_Callback kicondialog_dragmoveevent_callback = nullptr;
    KIconDialog_DragLeaveEvent_Callback kicondialog_dragleaveevent_callback = nullptr;
    KIconDialog_DropEvent_Callback kicondialog_dropevent_callback = nullptr;
    KIconDialog_HideEvent_Callback kicondialog_hideevent_callback = nullptr;
    KIconDialog_NativeEvent_Callback kicondialog_nativeevent_callback = nullptr;
    KIconDialog_ChangeEvent_Callback kicondialog_changeevent_callback = nullptr;
    KIconDialog_Metric_Callback kicondialog_metric_callback = nullptr;
    KIconDialog_InitPainter_Callback kicondialog_initpainter_callback = nullptr;
    KIconDialog_Redirected_Callback kicondialog_redirected_callback = nullptr;
    KIconDialog_SharedPainter_Callback kicondialog_sharedpainter_callback = nullptr;
    KIconDialog_InputMethodEvent_Callback kicondialog_inputmethodevent_callback = nullptr;
    KIconDialog_InputMethodQuery_Callback kicondialog_inputmethodquery_callback = nullptr;
    KIconDialog_FocusNextPrevChild_Callback kicondialog_focusnextprevchild_callback = nullptr;
    KIconDialog_TimerEvent_Callback kicondialog_timerevent_callback = nullptr;
    KIconDialog_ChildEvent_Callback kicondialog_childevent_callback = nullptr;
    KIconDialog_CustomEvent_Callback kicondialog_customevent_callback = nullptr;
    KIconDialog_ConnectNotify_Callback kicondialog_connectnotify_callback = nullptr;
    KIconDialog_DisconnectNotify_Callback kicondialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIconDialog {
        using KIconDialog::actionEvent;
        using KIconDialog::changeEvent;
        using KIconDialog::childEvent;
        using KIconDialog::closeEvent;
        using KIconDialog::connectNotify;
        using KIconDialog::contextMenuEvent;
        using KIconDialog::customEvent;
        using KIconDialog::disconnectNotify;
        using KIconDialog::dragEnterEvent;
        using KIconDialog::dragLeaveEvent;
        using KIconDialog::dragMoveEvent;
        using KIconDialog::dropEvent;
        using KIconDialog::enterEvent;
        using KIconDialog::event;
        using KIconDialog::eventFilter;
        using KIconDialog::focusInEvent;
        using KIconDialog::focusNextPrevChild;
        using KIconDialog::focusOutEvent;
        using KIconDialog::hideEvent;
        using KIconDialog::initPainter;
        using KIconDialog::inputMethodEvent;
        using KIconDialog::keyPressEvent;
        using KIconDialog::keyReleaseEvent;
        using KIconDialog::leaveEvent;
        using KIconDialog::metric;
        using KIconDialog::mouseDoubleClickEvent;
        using KIconDialog::mouseMoveEvent;
        using KIconDialog::mousePressEvent;
        using KIconDialog::mouseReleaseEvent;
        using KIconDialog::moveEvent;
        using KIconDialog::nativeEvent;
        using KIconDialog::paintEvent;
        using KIconDialog::redirected;
        using KIconDialog::resizeEvent;
        using KIconDialog::sharedPainter;
        using KIconDialog::showEvent;
        using KIconDialog::tabletEvent;
        using KIconDialog::timerEvent;
        using KIconDialog::wheelEvent;
    };

    VirtualKIconDialog(QWidget* parent) : KIconDialog(parent) {};
    VirtualKIconDialog() : KIconDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kicondialog_metaobject_callback) {
            QMetaObject* callback_ret = kicondialog_metaobject_callback(this);
            return callback_ret;
        }
        return KIconDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kicondialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kicondialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIconDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kicondialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kicondialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIconDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kicondialog_showevent_callback) {
            QShowEvent* cbval1 = event;
            kicondialog_showevent_callback(this, cbval1);
            return;
        }
        KIconDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kicondialog_setvisible_callback) {
            bool cbval1 = visible;
            kicondialog_setvisible_callback(this, cbval1);
            return;
        }
        KIconDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kicondialog_sizehint_callback) {
            QSize* callback_ret = kicondialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kicondialog_minimumsizehint_callback) {
            QSize* callback_ret = kicondialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kicondialog_open_callback) {
            kicondialog_open_callback(this);
            return;
        }
        KIconDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kicondialog_exec_callback) {
            int callback_ret = kicondialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIconDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kicondialog_done_callback) {
            int cbval1 = param1;
            kicondialog_done_callback(this, cbval1);
            return;
        }
        KIconDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kicondialog_accept_callback) {
            kicondialog_accept_callback(this);
            return;
        }
        KIconDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kicondialog_reject_callback) {
            kicondialog_reject_callback(this);
            return;
        }
        KIconDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kicondialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kicondialog_keypressevent_callback(this, cbval1);
            return;
        }
        KIconDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kicondialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kicondialog_closeevent_callback(this, cbval1);
            return;
        }
        KIconDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kicondialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kicondialog_resizeevent_callback(this, cbval1);
            return;
        }
        KIconDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kicondialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kicondialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KIconDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kicondialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kicondialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIconDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kicondialog_devtype_callback) {
            int callback_ret = kicondialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIconDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kicondialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kicondialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIconDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kicondialog_hasheightforwidth_callback) {
            bool callback_ret = kicondialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KIconDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kicondialog_paintengine_callback) {
            QPaintEngine* callback_ret = kicondialog_paintengine_callback(this);
            return callback_ret;
        }
        return KIconDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kicondialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kicondialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIconDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kicondialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kicondialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KIconDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kicondialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kicondialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KIconDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kicondialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kicondialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KIconDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kicondialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kicondialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KIconDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kicondialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kicondialog_wheelevent_callback(this, cbval1);
            return;
        }
        KIconDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kicondialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kicondialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KIconDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kicondialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kicondialog_focusinevent_callback(this, cbval1);
            return;
        }
        KIconDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kicondialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kicondialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KIconDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kicondialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kicondialog_enterevent_callback(this, cbval1);
            return;
        }
        KIconDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kicondialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kicondialog_leaveevent_callback(this, cbval1);
            return;
        }
        KIconDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kicondialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kicondialog_paintevent_callback(this, cbval1);
            return;
        }
        KIconDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kicondialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kicondialog_moveevent_callback(this, cbval1);
            return;
        }
        KIconDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kicondialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kicondialog_tabletevent_callback(this, cbval1);
            return;
        }
        KIconDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kicondialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kicondialog_actionevent_callback(this, cbval1);
            return;
        }
        KIconDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kicondialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kicondialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KIconDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kicondialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kicondialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KIconDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kicondialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kicondialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KIconDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kicondialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kicondialog_dropevent_callback(this, cbval1);
            return;
        }
        KIconDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kicondialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kicondialog_hideevent_callback(this, cbval1);
            return;
        }
        KIconDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kicondialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kicondialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KIconDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kicondialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kicondialog_changeevent_callback(this, cbval1);
            return;
        }
        KIconDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kicondialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kicondialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIconDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kicondialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kicondialog_initpainter_callback(this, cbval1);
            return;
        }
        KIconDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kicondialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kicondialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KIconDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kicondialog_sharedpainter_callback) {
            QPainter* callback_ret = kicondialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KIconDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kicondialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kicondialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KIconDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kicondialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kicondialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kicondialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kicondialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KIconDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kicondialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kicondialog_timerevent_callback(this, cbval1);
            return;
        }
        KIconDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kicondialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kicondialog_childevent_callback(this, cbval1);
            return;
        }
        KIconDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kicondialog_customevent_callback) {
            QEvent* cbval1 = event;
            kicondialog_customevent_callback(this, cbval1);
            return;
        }
        KIconDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kicondialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kicondialog_connectnotify_callback(this, cbval1);
            return;
        }
        KIconDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kicondialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kicondialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIconDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIconDialog_SuperShowEvent(KIconDialog* self, QShowEvent* event);
    friend void KIconDialog_SuperKeyPressEvent(KIconDialog* self, QKeyEvent* param1);
    friend void KIconDialog_SuperCloseEvent(KIconDialog* self, QCloseEvent* param1);
    friend void KIconDialog_SuperResizeEvent(KIconDialog* self, QResizeEvent* param1);
    friend void KIconDialog_SuperContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1);
    friend bool KIconDialog_SuperEventFilter(KIconDialog* self, QObject* param1, QEvent* param2);
    friend bool KIconDialog_SuperEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_SuperMousePressEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_SuperMouseReleaseEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_SuperMouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_SuperMouseMoveEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_SuperWheelEvent(KIconDialog* self, QWheelEvent* event);
    friend void KIconDialog_SuperKeyReleaseEvent(KIconDialog* self, QKeyEvent* event);
    friend void KIconDialog_SuperFocusInEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_SuperFocusOutEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_SuperEnterEvent(KIconDialog* self, QEnterEvent* event);
    friend void KIconDialog_SuperLeaveEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_SuperPaintEvent(KIconDialog* self, QPaintEvent* event);
    friend void KIconDialog_SuperMoveEvent(KIconDialog* self, QMoveEvent* event);
    friend void KIconDialog_SuperTabletEvent(KIconDialog* self, QTabletEvent* event);
    friend void KIconDialog_SuperActionEvent(KIconDialog* self, QActionEvent* event);
    friend void KIconDialog_SuperDragEnterEvent(KIconDialog* self, QDragEnterEvent* event);
    friend void KIconDialog_SuperDragMoveEvent(KIconDialog* self, QDragMoveEvent* event);
    friend void KIconDialog_SuperDragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event);
    friend void KIconDialog_SuperDropEvent(KIconDialog* self, QDropEvent* event);
    friend void KIconDialog_SuperHideEvent(KIconDialog* self, QHideEvent* event);
    friend bool KIconDialog_SuperNativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIconDialog_SuperChangeEvent(KIconDialog* self, QEvent* param1);
    friend int KIconDialog_SuperMetric(const KIconDialog* self, int param1);
    friend void KIconDialog_SuperInitPainter(const KIconDialog* self, QPainter* painter);
    friend QPaintDevice* KIconDialog_SuperRedirected(const KIconDialog* self, QPoint* offset);
    friend QPainter* KIconDialog_SuperSharedPainter(const KIconDialog* self);
    friend void KIconDialog_SuperInputMethodEvent(KIconDialog* self, QInputMethodEvent* param1);
    friend bool KIconDialog_SuperFocusNextPrevChild(KIconDialog* self, bool next);
    friend void KIconDialog_SuperTimerEvent(KIconDialog* self, QTimerEvent* event);
    friend void KIconDialog_SuperChildEvent(KIconDialog* self, QChildEvent* event);
    friend void KIconDialog_SuperCustomEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_SuperConnectNotify(KIconDialog* self, const QMetaMethod* signal);
    friend void KIconDialog_SuperDisconnectNotify(KIconDialog* self, const QMetaMethod* signal);
};

#endif
