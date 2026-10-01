#pragma once
#ifndef EXTRAS_KIO_LIBRENAMEFILEDIALOG_HXX
#define EXTRAS_KIO_LIBRENAMEFILEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::RenameFileDialog
class VirtualKIORenameFileDialog final : public KIO::RenameFileDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__RenameFileDialog_MetaObject_Callback = QMetaObject* (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Metacast_Callback = void* (*)(KIO__RenameFileDialog*, const char*);
    using KIO__RenameFileDialog_Metacall_Callback = int (*)(KIO__RenameFileDialog*, int, int, void**);
    using KIO__RenameFileDialog_SetVisible_Callback = void (*)(KIO__RenameFileDialog*, bool);
    using KIO__RenameFileDialog_SizeHint_Callback = QSize* (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_MinimumSizeHint_Callback = QSize* (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Open_Callback = void (*)(KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Exec_Callback = int (*)(KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Done_Callback = void (*)(KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_Accept_Callback = void (*)(KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Reject_Callback = void (*)(KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_KeyPressEvent_Callback = void (*)(KIO__RenameFileDialog*, QKeyEvent*);
    using KIO__RenameFileDialog_CloseEvent_Callback = void (*)(KIO__RenameFileDialog*, QCloseEvent*);
    using KIO__RenameFileDialog_ShowEvent_Callback = void (*)(KIO__RenameFileDialog*, QShowEvent*);
    using KIO__RenameFileDialog_ResizeEvent_Callback = void (*)(KIO__RenameFileDialog*, QResizeEvent*);
    using KIO__RenameFileDialog_ContextMenuEvent_Callback = void (*)(KIO__RenameFileDialog*, QContextMenuEvent*);
    using KIO__RenameFileDialog_EventFilter_Callback = bool (*)(KIO__RenameFileDialog*, QObject*, QEvent*);
    using KIO__RenameFileDialog_DevType_Callback = int (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_HeightForWidth_Callback = int (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_HasHeightForWidth_Callback = bool (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_PaintEngine_Callback = QPaintEngine* (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_Event_Callback = bool (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_MousePressEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseReleaseEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseMoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_WheelEvent_Callback = void (*)(KIO__RenameFileDialog*, QWheelEvent*);
    using KIO__RenameFileDialog_KeyReleaseEvent_Callback = void (*)(KIO__RenameFileDialog*, QKeyEvent*);
    using KIO__RenameFileDialog_FocusInEvent_Callback = void (*)(KIO__RenameFileDialog*, QFocusEvent*);
    using KIO__RenameFileDialog_FocusOutEvent_Callback = void (*)(KIO__RenameFileDialog*, QFocusEvent*);
    using KIO__RenameFileDialog_EnterEvent_Callback = void (*)(KIO__RenameFileDialog*, QEnterEvent*);
    using KIO__RenameFileDialog_LeaveEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_PaintEvent_Callback = void (*)(KIO__RenameFileDialog*, QPaintEvent*);
    using KIO__RenameFileDialog_MoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QMoveEvent*);
    using KIO__RenameFileDialog_TabletEvent_Callback = void (*)(KIO__RenameFileDialog*, QTabletEvent*);
    using KIO__RenameFileDialog_ActionEvent_Callback = void (*)(KIO__RenameFileDialog*, QActionEvent*);
    using KIO__RenameFileDialog_DragEnterEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragEnterEvent*);
    using KIO__RenameFileDialog_DragMoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragMoveEvent*);
    using KIO__RenameFileDialog_DragLeaveEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragLeaveEvent*);
    using KIO__RenameFileDialog_DropEvent_Callback = void (*)(KIO__RenameFileDialog*, QDropEvent*);
    using KIO__RenameFileDialog_HideEvent_Callback = void (*)(KIO__RenameFileDialog*, QHideEvent*);
    using KIO__RenameFileDialog_NativeEvent_Callback = bool (*)(KIO__RenameFileDialog*, libqt_string, void*, intptr_t*);
    using KIO__RenameFileDialog_ChangeEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_Metric_Callback = int (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_InitPainter_Callback = void (*)(const KIO__RenameFileDialog*, QPainter*);
    using KIO__RenameFileDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__RenameFileDialog*, QPoint*);
    using KIO__RenameFileDialog_SharedPainter_Callback = QPainter* (*)(const KIO__RenameFileDialog*);
    using KIO__RenameFileDialog_InputMethodEvent_Callback = void (*)(KIO__RenameFileDialog*, QInputMethodEvent*);
    using KIO__RenameFileDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_FocusNextPrevChild_Callback = bool (*)(KIO__RenameFileDialog*, bool);
    using KIO__RenameFileDialog_TimerEvent_Callback = void (*)(KIO__RenameFileDialog*, QTimerEvent*);
    using KIO__RenameFileDialog_ChildEvent_Callback = void (*)(KIO__RenameFileDialog*, QChildEvent*);
    using KIO__RenameFileDialog_CustomEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_ConnectNotify_Callback = void (*)(KIO__RenameFileDialog*, QMetaMethod*);
    using KIO__RenameFileDialog_DisconnectNotify_Callback = void (*)(KIO__RenameFileDialog*, QMetaMethod*);
    using KIO::RenameFileDialog::adjustPosition;
    using KIO::RenameFileDialog::create;
    using KIO::RenameFileDialog::destroy;
    using KIO::RenameFileDialog::focusNextChild;
    using KIO::RenameFileDialog::focusPreviousChild;
    using KIO::RenameFileDialog::getDecodedMetricF;
    using KIO::RenameFileDialog::isSignalConnected;
    using KIO::RenameFileDialog::receivers;
    using KIO::RenameFileDialog::sender;
    using KIO::RenameFileDialog::senderSignalIndex;
    using KIO::RenameFileDialog::updateMicroFocus;

    // Instance callback storage
    KIO__RenameFileDialog_MetaObject_Callback kio__renamefiledialog_metaobject_callback = nullptr;
    KIO__RenameFileDialog_Metacast_Callback kio__renamefiledialog_metacast_callback = nullptr;
    KIO__RenameFileDialog_Metacall_Callback kio__renamefiledialog_metacall_callback = nullptr;
    KIO__RenameFileDialog_SetVisible_Callback kio__renamefiledialog_setvisible_callback = nullptr;
    KIO__RenameFileDialog_SizeHint_Callback kio__renamefiledialog_sizehint_callback = nullptr;
    KIO__RenameFileDialog_MinimumSizeHint_Callback kio__renamefiledialog_minimumsizehint_callback = nullptr;
    KIO__RenameFileDialog_Open_Callback kio__renamefiledialog_open_callback = nullptr;
    KIO__RenameFileDialog_Exec_Callback kio__renamefiledialog_exec_callback = nullptr;
    KIO__RenameFileDialog_Done_Callback kio__renamefiledialog_done_callback = nullptr;
    KIO__RenameFileDialog_Accept_Callback kio__renamefiledialog_accept_callback = nullptr;
    KIO__RenameFileDialog_Reject_Callback kio__renamefiledialog_reject_callback = nullptr;
    KIO__RenameFileDialog_KeyPressEvent_Callback kio__renamefiledialog_keypressevent_callback = nullptr;
    KIO__RenameFileDialog_CloseEvent_Callback kio__renamefiledialog_closeevent_callback = nullptr;
    KIO__RenameFileDialog_ShowEvent_Callback kio__renamefiledialog_showevent_callback = nullptr;
    KIO__RenameFileDialog_ResizeEvent_Callback kio__renamefiledialog_resizeevent_callback = nullptr;
    KIO__RenameFileDialog_ContextMenuEvent_Callback kio__renamefiledialog_contextmenuevent_callback = nullptr;
    KIO__RenameFileDialog_EventFilter_Callback kio__renamefiledialog_eventfilter_callback = nullptr;
    KIO__RenameFileDialog_DevType_Callback kio__renamefiledialog_devtype_callback = nullptr;
    KIO__RenameFileDialog_HeightForWidth_Callback kio__renamefiledialog_heightforwidth_callback = nullptr;
    KIO__RenameFileDialog_HasHeightForWidth_Callback kio__renamefiledialog_hasheightforwidth_callback = nullptr;
    KIO__RenameFileDialog_PaintEngine_Callback kio__renamefiledialog_paintengine_callback = nullptr;
    KIO__RenameFileDialog_Event_Callback kio__renamefiledialog_event_callback = nullptr;
    KIO__RenameFileDialog_MousePressEvent_Callback kio__renamefiledialog_mousepressevent_callback = nullptr;
    KIO__RenameFileDialog_MouseReleaseEvent_Callback kio__renamefiledialog_mousereleaseevent_callback = nullptr;
    KIO__RenameFileDialog_MouseDoubleClickEvent_Callback kio__renamefiledialog_mousedoubleclickevent_callback = nullptr;
    KIO__RenameFileDialog_MouseMoveEvent_Callback kio__renamefiledialog_mousemoveevent_callback = nullptr;
    KIO__RenameFileDialog_WheelEvent_Callback kio__renamefiledialog_wheelevent_callback = nullptr;
    KIO__RenameFileDialog_KeyReleaseEvent_Callback kio__renamefiledialog_keyreleaseevent_callback = nullptr;
    KIO__RenameFileDialog_FocusInEvent_Callback kio__renamefiledialog_focusinevent_callback = nullptr;
    KIO__RenameFileDialog_FocusOutEvent_Callback kio__renamefiledialog_focusoutevent_callback = nullptr;
    KIO__RenameFileDialog_EnterEvent_Callback kio__renamefiledialog_enterevent_callback = nullptr;
    KIO__RenameFileDialog_LeaveEvent_Callback kio__renamefiledialog_leaveevent_callback = nullptr;
    KIO__RenameFileDialog_PaintEvent_Callback kio__renamefiledialog_paintevent_callback = nullptr;
    KIO__RenameFileDialog_MoveEvent_Callback kio__renamefiledialog_moveevent_callback = nullptr;
    KIO__RenameFileDialog_TabletEvent_Callback kio__renamefiledialog_tabletevent_callback = nullptr;
    KIO__RenameFileDialog_ActionEvent_Callback kio__renamefiledialog_actionevent_callback = nullptr;
    KIO__RenameFileDialog_DragEnterEvent_Callback kio__renamefiledialog_dragenterevent_callback = nullptr;
    KIO__RenameFileDialog_DragMoveEvent_Callback kio__renamefiledialog_dragmoveevent_callback = nullptr;
    KIO__RenameFileDialog_DragLeaveEvent_Callback kio__renamefiledialog_dragleaveevent_callback = nullptr;
    KIO__RenameFileDialog_DropEvent_Callback kio__renamefiledialog_dropevent_callback = nullptr;
    KIO__RenameFileDialog_HideEvent_Callback kio__renamefiledialog_hideevent_callback = nullptr;
    KIO__RenameFileDialog_NativeEvent_Callback kio__renamefiledialog_nativeevent_callback = nullptr;
    KIO__RenameFileDialog_ChangeEvent_Callback kio__renamefiledialog_changeevent_callback = nullptr;
    KIO__RenameFileDialog_Metric_Callback kio__renamefiledialog_metric_callback = nullptr;
    KIO__RenameFileDialog_InitPainter_Callback kio__renamefiledialog_initpainter_callback = nullptr;
    KIO__RenameFileDialog_Redirected_Callback kio__renamefiledialog_redirected_callback = nullptr;
    KIO__RenameFileDialog_SharedPainter_Callback kio__renamefiledialog_sharedpainter_callback = nullptr;
    KIO__RenameFileDialog_InputMethodEvent_Callback kio__renamefiledialog_inputmethodevent_callback = nullptr;
    KIO__RenameFileDialog_InputMethodQuery_Callback kio__renamefiledialog_inputmethodquery_callback = nullptr;
    KIO__RenameFileDialog_FocusNextPrevChild_Callback kio__renamefiledialog_focusnextprevchild_callback = nullptr;
    KIO__RenameFileDialog_TimerEvent_Callback kio__renamefiledialog_timerevent_callback = nullptr;
    KIO__RenameFileDialog_ChildEvent_Callback kio__renamefiledialog_childevent_callback = nullptr;
    KIO__RenameFileDialog_CustomEvent_Callback kio__renamefiledialog_customevent_callback = nullptr;
    KIO__RenameFileDialog_ConnectNotify_Callback kio__renamefiledialog_connectnotify_callback = nullptr;
    KIO__RenameFileDialog_DisconnectNotify_Callback kio__renamefiledialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::RenameFileDialog {
        using KIO::RenameFileDialog::actionEvent;
        using KIO::RenameFileDialog::changeEvent;
        using KIO::RenameFileDialog::childEvent;
        using KIO::RenameFileDialog::closeEvent;
        using KIO::RenameFileDialog::connectNotify;
        using KIO::RenameFileDialog::contextMenuEvent;
        using KIO::RenameFileDialog::customEvent;
        using KIO::RenameFileDialog::disconnectNotify;
        using KIO::RenameFileDialog::dragEnterEvent;
        using KIO::RenameFileDialog::dragLeaveEvent;
        using KIO::RenameFileDialog::dragMoveEvent;
        using KIO::RenameFileDialog::dropEvent;
        using KIO::RenameFileDialog::enterEvent;
        using KIO::RenameFileDialog::event;
        using KIO::RenameFileDialog::eventFilter;
        using KIO::RenameFileDialog::focusInEvent;
        using KIO::RenameFileDialog::focusNextPrevChild;
        using KIO::RenameFileDialog::focusOutEvent;
        using KIO::RenameFileDialog::hideEvent;
        using KIO::RenameFileDialog::initPainter;
        using KIO::RenameFileDialog::inputMethodEvent;
        using KIO::RenameFileDialog::keyPressEvent;
        using KIO::RenameFileDialog::keyReleaseEvent;
        using KIO::RenameFileDialog::leaveEvent;
        using KIO::RenameFileDialog::metric;
        using KIO::RenameFileDialog::mouseDoubleClickEvent;
        using KIO::RenameFileDialog::mouseMoveEvent;
        using KIO::RenameFileDialog::mousePressEvent;
        using KIO::RenameFileDialog::mouseReleaseEvent;
        using KIO::RenameFileDialog::moveEvent;
        using KIO::RenameFileDialog::nativeEvent;
        using KIO::RenameFileDialog::paintEvent;
        using KIO::RenameFileDialog::redirected;
        using KIO::RenameFileDialog::resizeEvent;
        using KIO::RenameFileDialog::sharedPainter;
        using KIO::RenameFileDialog::showEvent;
        using KIO::RenameFileDialog::tabletEvent;
        using KIO::RenameFileDialog::timerEvent;
        using KIO::RenameFileDialog::wheelEvent;
    };

    VirtualKIORenameFileDialog(const KFileItemList& items, QWidget* parent) : KIO::RenameFileDialog(items, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__renamefiledialog_metaobject_callback) {
            QMetaObject* callback_ret = kio__renamefiledialog_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__RenameFileDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__renamefiledialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__renamefiledialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameFileDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__renamefiledialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__renamefiledialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameFileDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__renamefiledialog_setvisible_callback) {
            bool cbval1 = visible;
            kio__renamefiledialog_setvisible_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__renamefiledialog_sizehint_callback) {
            QSize* callback_ret = kio__renamefiledialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameFileDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__renamefiledialog_minimumsizehint_callback) {
            QSize* callback_ret = kio__renamefiledialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameFileDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__renamefiledialog_open_callback) {
            kio__renamefiledialog_open_callback(this);
            return;
        }
        KIO__RenameFileDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__renamefiledialog_exec_callback) {
            int callback_ret = kio__renamefiledialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameFileDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__renamefiledialog_done_callback) {
            int cbval1 = param1;
            kio__renamefiledialog_done_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__renamefiledialog_accept_callback) {
            kio__renamefiledialog_accept_callback(this);
            return;
        }
        KIO__RenameFileDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__renamefiledialog_reject_callback) {
            kio__renamefiledialog_reject_callback(this);
            return;
        }
        KIO__RenameFileDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__renamefiledialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kio__renamefiledialog_keypressevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__renamefiledialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kio__renamefiledialog_closeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__renamefiledialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kio__renamefiledialog_showevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__renamefiledialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kio__renamefiledialog_resizeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__renamefiledialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kio__renamefiledialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__renamefiledialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kio__renamefiledialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__RenameFileDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__renamefiledialog_devtype_callback) {
            int callback_ret = kio__renamefiledialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameFileDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__renamefiledialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kio__renamefiledialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameFileDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__renamefiledialog_hasheightforwidth_callback) {
            bool callback_ret = kio__renamefiledialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KIO__RenameFileDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__renamefiledialog_paintengine_callback) {
            QPaintEngine* callback_ret = kio__renamefiledialog_paintengine_callback(this);
            return callback_ret;
        }
        return KIO__RenameFileDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__renamefiledialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__renamefiledialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameFileDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamefiledialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamefiledialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamefiledialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamefiledialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__renamefiledialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kio__renamefiledialog_wheelevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__renamefiledialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kio__renamefiledialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__renamefiledialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__renamefiledialog_focusinevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__renamefiledialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__renamefiledialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__renamefiledialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kio__renamefiledialog_enterevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__renamefiledialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kio__renamefiledialog_leaveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__renamefiledialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kio__renamefiledialog_paintevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__renamefiledialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kio__renamefiledialog_moveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__renamefiledialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kio__renamefiledialog_tabletevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__renamefiledialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kio__renamefiledialog_actionevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__renamefiledialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kio__renamefiledialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__renamefiledialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kio__renamefiledialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__renamefiledialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kio__renamefiledialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__renamefiledialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kio__renamefiledialog_dropevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__renamefiledialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kio__renamefiledialog_hideevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__renamefiledialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kio__renamefiledialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KIO__RenameFileDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__renamefiledialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kio__renamefiledialog_changeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__renamefiledialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kio__renamefiledialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameFileDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__renamefiledialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kio__renamefiledialog_initpainter_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__renamefiledialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kio__renamefiledialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameFileDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__renamefiledialog_sharedpainter_callback) {
            QPainter* callback_ret = kio__renamefiledialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KIO__RenameFileDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__renamefiledialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kio__renamefiledialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__renamefiledialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kio__renamefiledialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameFileDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__renamefiledialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kio__renamefiledialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameFileDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__renamefiledialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__renamefiledialog_timerevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__renamefiledialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__renamefiledialog_childevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__renamefiledialog_customevent_callback) {
            QEvent* cbval1 = event;
            kio__renamefiledialog_customevent_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__renamefiledialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__renamefiledialog_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__renamefiledialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__renamefiledialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__RenameFileDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__RenameFileDialog_SuperKeyPressEvent(KIO::RenameFileDialog* self, QKeyEvent* param1);
    friend void KIO__RenameFileDialog_SuperCloseEvent(KIO::RenameFileDialog* self, QCloseEvent* param1);
    friend void KIO__RenameFileDialog_SuperShowEvent(KIO::RenameFileDialog* self, QShowEvent* param1);
    friend void KIO__RenameFileDialog_SuperResizeEvent(KIO::RenameFileDialog* self, QResizeEvent* param1);
    friend void KIO__RenameFileDialog_SuperContextMenuEvent(KIO::RenameFileDialog* self, QContextMenuEvent* param1);
    friend bool KIO__RenameFileDialog_SuperEventFilter(KIO::RenameFileDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameFileDialog_SuperEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_SuperMousePressEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_SuperMouseReleaseEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_SuperMouseDoubleClickEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_SuperMouseMoveEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_SuperWheelEvent(KIO::RenameFileDialog* self, QWheelEvent* event);
    friend void KIO__RenameFileDialog_SuperKeyReleaseEvent(KIO::RenameFileDialog* self, QKeyEvent* event);
    friend void KIO__RenameFileDialog_SuperFocusInEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_SuperFocusOutEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_SuperEnterEvent(KIO::RenameFileDialog* self, QEnterEvent* event);
    friend void KIO__RenameFileDialog_SuperLeaveEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_SuperPaintEvent(KIO::RenameFileDialog* self, QPaintEvent* event);
    friend void KIO__RenameFileDialog_SuperMoveEvent(KIO::RenameFileDialog* self, QMoveEvent* event);
    friend void KIO__RenameFileDialog_SuperTabletEvent(KIO::RenameFileDialog* self, QTabletEvent* event);
    friend void KIO__RenameFileDialog_SuperActionEvent(KIO::RenameFileDialog* self, QActionEvent* event);
    friend void KIO__RenameFileDialog_SuperDragEnterEvent(KIO::RenameFileDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameFileDialog_SuperDragMoveEvent(KIO::RenameFileDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameFileDialog_SuperDragLeaveEvent(KIO::RenameFileDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameFileDialog_SuperDropEvent(KIO::RenameFileDialog* self, QDropEvent* event);
    friend void KIO__RenameFileDialog_SuperHideEvent(KIO::RenameFileDialog* self, QHideEvent* event);
    friend bool KIO__RenameFileDialog_SuperNativeEvent(KIO::RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__RenameFileDialog_SuperChangeEvent(KIO::RenameFileDialog* self, QEvent* param1);
    friend int KIO__RenameFileDialog_SuperMetric(const KIO::RenameFileDialog* self, int param1);
    friend void KIO__RenameFileDialog_SuperInitPainter(const KIO::RenameFileDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__RenameFileDialog_SuperRedirected(const KIO::RenameFileDialog* self, QPoint* offset);
    friend QPainter* KIO__RenameFileDialog_SuperSharedPainter(const KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_SuperInputMethodEvent(KIO::RenameFileDialog* self, QInputMethodEvent* param1);
    friend bool KIO__RenameFileDialog_SuperFocusNextPrevChild(KIO::RenameFileDialog* self, bool next);
    friend void KIO__RenameFileDialog_SuperTimerEvent(KIO::RenameFileDialog* self, QTimerEvent* event);
    friend void KIO__RenameFileDialog_SuperChildEvent(KIO::RenameFileDialog* self, QChildEvent* event);
    friend void KIO__RenameFileDialog_SuperCustomEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_SuperConnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameFileDialog_SuperDisconnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
};

#endif
