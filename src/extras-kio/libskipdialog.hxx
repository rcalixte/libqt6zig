#pragma once
#ifndef EXTRAS_KIO_LIBSKIPDIALOG_HXX
#define EXTRAS_KIO_LIBSKIPDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::SkipDialog
class VirtualKIOSkipDialog final : public KIO::SkipDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__SkipDialog_MetaObject_Callback = QMetaObject* (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_Metacast_Callback = void* (*)(KIO__SkipDialog*, const char*);
    using KIO__SkipDialog_Metacall_Callback = int (*)(KIO__SkipDialog*, int, int, void**);
    using KIO__SkipDialog_SetVisible_Callback = void (*)(KIO__SkipDialog*, bool);
    using KIO__SkipDialog_SizeHint_Callback = QSize* (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_MinimumSizeHint_Callback = QSize* (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_Open_Callback = void (*)(KIO__SkipDialog*);
    using KIO__SkipDialog_Exec_Callback = int (*)(KIO__SkipDialog*);
    using KIO__SkipDialog_Done_Callback = void (*)(KIO__SkipDialog*, int);
    using KIO__SkipDialog_Accept_Callback = void (*)(KIO__SkipDialog*);
    using KIO__SkipDialog_Reject_Callback = void (*)(KIO__SkipDialog*);
    using KIO__SkipDialog_KeyPressEvent_Callback = void (*)(KIO__SkipDialog*, QKeyEvent*);
    using KIO__SkipDialog_CloseEvent_Callback = void (*)(KIO__SkipDialog*, QCloseEvent*);
    using KIO__SkipDialog_ShowEvent_Callback = void (*)(KIO__SkipDialog*, QShowEvent*);
    using KIO__SkipDialog_ResizeEvent_Callback = void (*)(KIO__SkipDialog*, QResizeEvent*);
    using KIO__SkipDialog_ContextMenuEvent_Callback = void (*)(KIO__SkipDialog*, QContextMenuEvent*);
    using KIO__SkipDialog_EventFilter_Callback = bool (*)(KIO__SkipDialog*, QObject*, QEvent*);
    using KIO__SkipDialog_DevType_Callback = int (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_HeightForWidth_Callback = int (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_HasHeightForWidth_Callback = bool (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_PaintEngine_Callback = QPaintEngine* (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_Event_Callback = bool (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_MousePressEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseReleaseEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseMoveEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_WheelEvent_Callback = void (*)(KIO__SkipDialog*, QWheelEvent*);
    using KIO__SkipDialog_KeyReleaseEvent_Callback = void (*)(KIO__SkipDialog*, QKeyEvent*);
    using KIO__SkipDialog_FocusInEvent_Callback = void (*)(KIO__SkipDialog*, QFocusEvent*);
    using KIO__SkipDialog_FocusOutEvent_Callback = void (*)(KIO__SkipDialog*, QFocusEvent*);
    using KIO__SkipDialog_EnterEvent_Callback = void (*)(KIO__SkipDialog*, QEnterEvent*);
    using KIO__SkipDialog_LeaveEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_PaintEvent_Callback = void (*)(KIO__SkipDialog*, QPaintEvent*);
    using KIO__SkipDialog_MoveEvent_Callback = void (*)(KIO__SkipDialog*, QMoveEvent*);
    using KIO__SkipDialog_TabletEvent_Callback = void (*)(KIO__SkipDialog*, QTabletEvent*);
    using KIO__SkipDialog_ActionEvent_Callback = void (*)(KIO__SkipDialog*, QActionEvent*);
    using KIO__SkipDialog_DragEnterEvent_Callback = void (*)(KIO__SkipDialog*, QDragEnterEvent*);
    using KIO__SkipDialog_DragMoveEvent_Callback = void (*)(KIO__SkipDialog*, QDragMoveEvent*);
    using KIO__SkipDialog_DragLeaveEvent_Callback = void (*)(KIO__SkipDialog*, QDragLeaveEvent*);
    using KIO__SkipDialog_DropEvent_Callback = void (*)(KIO__SkipDialog*, QDropEvent*);
    using KIO__SkipDialog_HideEvent_Callback = void (*)(KIO__SkipDialog*, QHideEvent*);
    using KIO__SkipDialog_NativeEvent_Callback = bool (*)(KIO__SkipDialog*, libqt_string, void*, intptr_t*);
    using KIO__SkipDialog_ChangeEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_Metric_Callback = int (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_InitPainter_Callback = void (*)(const KIO__SkipDialog*, QPainter*);
    using KIO__SkipDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__SkipDialog*, QPoint*);
    using KIO__SkipDialog_SharedPainter_Callback = QPainter* (*)(const KIO__SkipDialog*);
    using KIO__SkipDialog_InputMethodEvent_Callback = void (*)(KIO__SkipDialog*, QInputMethodEvent*);
    using KIO__SkipDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_FocusNextPrevChild_Callback = bool (*)(KIO__SkipDialog*, bool);
    using KIO__SkipDialog_TimerEvent_Callback = void (*)(KIO__SkipDialog*, QTimerEvent*);
    using KIO__SkipDialog_ChildEvent_Callback = void (*)(KIO__SkipDialog*, QChildEvent*);
    using KIO__SkipDialog_CustomEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_ConnectNotify_Callback = void (*)(KIO__SkipDialog*, QMetaMethod*);
    using KIO__SkipDialog_DisconnectNotify_Callback = void (*)(KIO__SkipDialog*, QMetaMethod*);
    using KIO::SkipDialog::adjustPosition;
    using KIO::SkipDialog::create;
    using KIO::SkipDialog::destroy;
    using KIO::SkipDialog::focusNextChild;
    using KIO::SkipDialog::focusPreviousChild;
    using KIO::SkipDialog::getDecodedMetricF;
    using KIO::SkipDialog::isSignalConnected;
    using KIO::SkipDialog::receivers;
    using KIO::SkipDialog::sender;
    using KIO::SkipDialog::senderSignalIndex;
    using KIO::SkipDialog::updateMicroFocus;

    // Instance callback storage
    KIO__SkipDialog_MetaObject_Callback kio__skipdialog_metaobject_callback = nullptr;
    KIO__SkipDialog_Metacast_Callback kio__skipdialog_metacast_callback = nullptr;
    KIO__SkipDialog_Metacall_Callback kio__skipdialog_metacall_callback = nullptr;
    KIO__SkipDialog_SetVisible_Callback kio__skipdialog_setvisible_callback = nullptr;
    KIO__SkipDialog_SizeHint_Callback kio__skipdialog_sizehint_callback = nullptr;
    KIO__SkipDialog_MinimumSizeHint_Callback kio__skipdialog_minimumsizehint_callback = nullptr;
    KIO__SkipDialog_Open_Callback kio__skipdialog_open_callback = nullptr;
    KIO__SkipDialog_Exec_Callback kio__skipdialog_exec_callback = nullptr;
    KIO__SkipDialog_Done_Callback kio__skipdialog_done_callback = nullptr;
    KIO__SkipDialog_Accept_Callback kio__skipdialog_accept_callback = nullptr;
    KIO__SkipDialog_Reject_Callback kio__skipdialog_reject_callback = nullptr;
    KIO__SkipDialog_KeyPressEvent_Callback kio__skipdialog_keypressevent_callback = nullptr;
    KIO__SkipDialog_CloseEvent_Callback kio__skipdialog_closeevent_callback = nullptr;
    KIO__SkipDialog_ShowEvent_Callback kio__skipdialog_showevent_callback = nullptr;
    KIO__SkipDialog_ResizeEvent_Callback kio__skipdialog_resizeevent_callback = nullptr;
    KIO__SkipDialog_ContextMenuEvent_Callback kio__skipdialog_contextmenuevent_callback = nullptr;
    KIO__SkipDialog_EventFilter_Callback kio__skipdialog_eventfilter_callback = nullptr;
    KIO__SkipDialog_DevType_Callback kio__skipdialog_devtype_callback = nullptr;
    KIO__SkipDialog_HeightForWidth_Callback kio__skipdialog_heightforwidth_callback = nullptr;
    KIO__SkipDialog_HasHeightForWidth_Callback kio__skipdialog_hasheightforwidth_callback = nullptr;
    KIO__SkipDialog_PaintEngine_Callback kio__skipdialog_paintengine_callback = nullptr;
    KIO__SkipDialog_Event_Callback kio__skipdialog_event_callback = nullptr;
    KIO__SkipDialog_MousePressEvent_Callback kio__skipdialog_mousepressevent_callback = nullptr;
    KIO__SkipDialog_MouseReleaseEvent_Callback kio__skipdialog_mousereleaseevent_callback = nullptr;
    KIO__SkipDialog_MouseDoubleClickEvent_Callback kio__skipdialog_mousedoubleclickevent_callback = nullptr;
    KIO__SkipDialog_MouseMoveEvent_Callback kio__skipdialog_mousemoveevent_callback = nullptr;
    KIO__SkipDialog_WheelEvent_Callback kio__skipdialog_wheelevent_callback = nullptr;
    KIO__SkipDialog_KeyReleaseEvent_Callback kio__skipdialog_keyreleaseevent_callback = nullptr;
    KIO__SkipDialog_FocusInEvent_Callback kio__skipdialog_focusinevent_callback = nullptr;
    KIO__SkipDialog_FocusOutEvent_Callback kio__skipdialog_focusoutevent_callback = nullptr;
    KIO__SkipDialog_EnterEvent_Callback kio__skipdialog_enterevent_callback = nullptr;
    KIO__SkipDialog_LeaveEvent_Callback kio__skipdialog_leaveevent_callback = nullptr;
    KIO__SkipDialog_PaintEvent_Callback kio__skipdialog_paintevent_callback = nullptr;
    KIO__SkipDialog_MoveEvent_Callback kio__skipdialog_moveevent_callback = nullptr;
    KIO__SkipDialog_TabletEvent_Callback kio__skipdialog_tabletevent_callback = nullptr;
    KIO__SkipDialog_ActionEvent_Callback kio__skipdialog_actionevent_callback = nullptr;
    KIO__SkipDialog_DragEnterEvent_Callback kio__skipdialog_dragenterevent_callback = nullptr;
    KIO__SkipDialog_DragMoveEvent_Callback kio__skipdialog_dragmoveevent_callback = nullptr;
    KIO__SkipDialog_DragLeaveEvent_Callback kio__skipdialog_dragleaveevent_callback = nullptr;
    KIO__SkipDialog_DropEvent_Callback kio__skipdialog_dropevent_callback = nullptr;
    KIO__SkipDialog_HideEvent_Callback kio__skipdialog_hideevent_callback = nullptr;
    KIO__SkipDialog_NativeEvent_Callback kio__skipdialog_nativeevent_callback = nullptr;
    KIO__SkipDialog_ChangeEvent_Callback kio__skipdialog_changeevent_callback = nullptr;
    KIO__SkipDialog_Metric_Callback kio__skipdialog_metric_callback = nullptr;
    KIO__SkipDialog_InitPainter_Callback kio__skipdialog_initpainter_callback = nullptr;
    KIO__SkipDialog_Redirected_Callback kio__skipdialog_redirected_callback = nullptr;
    KIO__SkipDialog_SharedPainter_Callback kio__skipdialog_sharedpainter_callback = nullptr;
    KIO__SkipDialog_InputMethodEvent_Callback kio__skipdialog_inputmethodevent_callback = nullptr;
    KIO__SkipDialog_InputMethodQuery_Callback kio__skipdialog_inputmethodquery_callback = nullptr;
    KIO__SkipDialog_FocusNextPrevChild_Callback kio__skipdialog_focusnextprevchild_callback = nullptr;
    KIO__SkipDialog_TimerEvent_Callback kio__skipdialog_timerevent_callback = nullptr;
    KIO__SkipDialog_ChildEvent_Callback kio__skipdialog_childevent_callback = nullptr;
    KIO__SkipDialog_CustomEvent_Callback kio__skipdialog_customevent_callback = nullptr;
    KIO__SkipDialog_ConnectNotify_Callback kio__skipdialog_connectnotify_callback = nullptr;
    KIO__SkipDialog_DisconnectNotify_Callback kio__skipdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::SkipDialog {
        using KIO::SkipDialog::actionEvent;
        using KIO::SkipDialog::changeEvent;
        using KIO::SkipDialog::childEvent;
        using KIO::SkipDialog::closeEvent;
        using KIO::SkipDialog::connectNotify;
        using KIO::SkipDialog::contextMenuEvent;
        using KIO::SkipDialog::customEvent;
        using KIO::SkipDialog::disconnectNotify;
        using KIO::SkipDialog::dragEnterEvent;
        using KIO::SkipDialog::dragLeaveEvent;
        using KIO::SkipDialog::dragMoveEvent;
        using KIO::SkipDialog::dropEvent;
        using KIO::SkipDialog::enterEvent;
        using KIO::SkipDialog::event;
        using KIO::SkipDialog::eventFilter;
        using KIO::SkipDialog::focusInEvent;
        using KIO::SkipDialog::focusNextPrevChild;
        using KIO::SkipDialog::focusOutEvent;
        using KIO::SkipDialog::hideEvent;
        using KIO::SkipDialog::initPainter;
        using KIO::SkipDialog::inputMethodEvent;
        using KIO::SkipDialog::keyPressEvent;
        using KIO::SkipDialog::keyReleaseEvent;
        using KIO::SkipDialog::leaveEvent;
        using KIO::SkipDialog::metric;
        using KIO::SkipDialog::mouseDoubleClickEvent;
        using KIO::SkipDialog::mouseMoveEvent;
        using KIO::SkipDialog::mousePressEvent;
        using KIO::SkipDialog::mouseReleaseEvent;
        using KIO::SkipDialog::moveEvent;
        using KIO::SkipDialog::nativeEvent;
        using KIO::SkipDialog::paintEvent;
        using KIO::SkipDialog::redirected;
        using KIO::SkipDialog::resizeEvent;
        using KIO::SkipDialog::sharedPainter;
        using KIO::SkipDialog::showEvent;
        using KIO::SkipDialog::tabletEvent;
        using KIO::SkipDialog::timerEvent;
        using KIO::SkipDialog::wheelEvent;
    };

    VirtualKIOSkipDialog(QWidget* parent, KIO::SkipDialog_Options options, const QString& _error_text) : KIO::SkipDialog(parent, options, _error_text) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__skipdialog_metaobject_callback) {
            QMetaObject* callback_ret = kio__skipdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__SkipDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__skipdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__skipdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SkipDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__skipdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__skipdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__SkipDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__skipdialog_setvisible_callback) {
            bool cbval1 = visible;
            kio__skipdialog_setvisible_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__skipdialog_sizehint_callback) {
            QSize* callback_ret = kio__skipdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__SkipDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__skipdialog_minimumsizehint_callback) {
            QSize* callback_ret = kio__skipdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__SkipDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__skipdialog_open_callback) {
            kio__skipdialog_open_callback(this);
            return;
        }
        KIO__SkipDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__skipdialog_exec_callback) {
            int callback_ret = kio__skipdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__SkipDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__skipdialog_done_callback) {
            int cbval1 = param1;
            kio__skipdialog_done_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__skipdialog_accept_callback) {
            kio__skipdialog_accept_callback(this);
            return;
        }
        KIO__SkipDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__skipdialog_reject_callback) {
            kio__skipdialog_reject_callback(this);
            return;
        }
        KIO__SkipDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__skipdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kio__skipdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__skipdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kio__skipdialog_closeevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__skipdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kio__skipdialog_showevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__skipdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kio__skipdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__skipdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kio__skipdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__skipdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kio__skipdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__SkipDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__skipdialog_devtype_callback) {
            int callback_ret = kio__skipdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__SkipDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__skipdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kio__skipdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__SkipDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__skipdialog_hasheightforwidth_callback) {
            bool callback_ret = kio__skipdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KIO__SkipDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__skipdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kio__skipdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KIO__SkipDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__skipdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__skipdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SkipDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__skipdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__skipdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__skipdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__skipdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__skipdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kio__skipdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__skipdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kio__skipdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__skipdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__skipdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__skipdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__skipdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__skipdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kio__skipdialog_enterevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__skipdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kio__skipdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__skipdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kio__skipdialog_paintevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__skipdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kio__skipdialog_moveevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__skipdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kio__skipdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__skipdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kio__skipdialog_actionevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__skipdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kio__skipdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__skipdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kio__skipdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__skipdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kio__skipdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__skipdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kio__skipdialog_dropevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__skipdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kio__skipdialog_hideevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__skipdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kio__skipdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KIO__SkipDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__skipdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kio__skipdialog_changeevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__skipdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kio__skipdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__SkipDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__skipdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kio__skipdialog_initpainter_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__skipdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kio__skipdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SkipDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__skipdialog_sharedpainter_callback) {
            QPainter* callback_ret = kio__skipdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KIO__SkipDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__skipdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kio__skipdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__skipdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kio__skipdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__SkipDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__skipdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kio__skipdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SkipDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__skipdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__skipdialog_timerevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__skipdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__skipdialog_childevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__skipdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kio__skipdialog_customevent_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__skipdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__skipdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__skipdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__skipdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__SkipDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__SkipDialog_SuperKeyPressEvent(KIO::SkipDialog* self, QKeyEvent* param1);
    friend void KIO__SkipDialog_SuperCloseEvent(KIO::SkipDialog* self, QCloseEvent* param1);
    friend void KIO__SkipDialog_SuperShowEvent(KIO::SkipDialog* self, QShowEvent* param1);
    friend void KIO__SkipDialog_SuperResizeEvent(KIO::SkipDialog* self, QResizeEvent* param1);
    friend void KIO__SkipDialog_SuperContextMenuEvent(KIO::SkipDialog* self, QContextMenuEvent* param1);
    friend bool KIO__SkipDialog_SuperEventFilter(KIO::SkipDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__SkipDialog_SuperEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_SuperMousePressEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_SuperMouseReleaseEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_SuperMouseDoubleClickEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_SuperMouseMoveEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_SuperWheelEvent(KIO::SkipDialog* self, QWheelEvent* event);
    friend void KIO__SkipDialog_SuperKeyReleaseEvent(KIO::SkipDialog* self, QKeyEvent* event);
    friend void KIO__SkipDialog_SuperFocusInEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_SuperFocusOutEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_SuperEnterEvent(KIO::SkipDialog* self, QEnterEvent* event);
    friend void KIO__SkipDialog_SuperLeaveEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_SuperPaintEvent(KIO::SkipDialog* self, QPaintEvent* event);
    friend void KIO__SkipDialog_SuperMoveEvent(KIO::SkipDialog* self, QMoveEvent* event);
    friend void KIO__SkipDialog_SuperTabletEvent(KIO::SkipDialog* self, QTabletEvent* event);
    friend void KIO__SkipDialog_SuperActionEvent(KIO::SkipDialog* self, QActionEvent* event);
    friend void KIO__SkipDialog_SuperDragEnterEvent(KIO::SkipDialog* self, QDragEnterEvent* event);
    friend void KIO__SkipDialog_SuperDragMoveEvent(KIO::SkipDialog* self, QDragMoveEvent* event);
    friend void KIO__SkipDialog_SuperDragLeaveEvent(KIO::SkipDialog* self, QDragLeaveEvent* event);
    friend void KIO__SkipDialog_SuperDropEvent(KIO::SkipDialog* self, QDropEvent* event);
    friend void KIO__SkipDialog_SuperHideEvent(KIO::SkipDialog* self, QHideEvent* event);
    friend bool KIO__SkipDialog_SuperNativeEvent(KIO::SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__SkipDialog_SuperChangeEvent(KIO::SkipDialog* self, QEvent* param1);
    friend int KIO__SkipDialog_SuperMetric(const KIO::SkipDialog* self, int param1);
    friend void KIO__SkipDialog_SuperInitPainter(const KIO::SkipDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__SkipDialog_SuperRedirected(const KIO::SkipDialog* self, QPoint* offset);
    friend QPainter* KIO__SkipDialog_SuperSharedPainter(const KIO::SkipDialog* self);
    friend void KIO__SkipDialog_SuperInputMethodEvent(KIO::SkipDialog* self, QInputMethodEvent* param1);
    friend bool KIO__SkipDialog_SuperFocusNextPrevChild(KIO::SkipDialog* self, bool next);
    friend void KIO__SkipDialog_SuperTimerEvent(KIO::SkipDialog* self, QTimerEvent* event);
    friend void KIO__SkipDialog_SuperChildEvent(KIO::SkipDialog* self, QChildEvent* event);
    friend void KIO__SkipDialog_SuperCustomEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_SuperConnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
    friend void KIO__SkipDialog_SuperDisconnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
};

#endif
