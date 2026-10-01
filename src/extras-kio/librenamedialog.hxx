#pragma once
#ifndef EXTRAS_KIO_LIBRENAMEDIALOG_HXX
#define EXTRAS_KIO_LIBRENAMEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::RenameDialog
class VirtualKIORenameDialog final : public KIO::RenameDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__RenameDialog_MetaObject_Callback = QMetaObject* (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_Metacast_Callback = void* (*)(KIO__RenameDialog*, const char*);
    using KIO__RenameDialog_Metacall_Callback = int (*)(KIO__RenameDialog*, int, int, void**);
    using KIO__RenameDialog_SetVisible_Callback = void (*)(KIO__RenameDialog*, bool);
    using KIO__RenameDialog_SizeHint_Callback = QSize* (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_MinimumSizeHint_Callback = QSize* (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_Open_Callback = void (*)(KIO__RenameDialog*);
    using KIO__RenameDialog_Exec_Callback = int (*)(KIO__RenameDialog*);
    using KIO__RenameDialog_Done_Callback = void (*)(KIO__RenameDialog*, int);
    using KIO__RenameDialog_Accept_Callback = void (*)(KIO__RenameDialog*);
    using KIO__RenameDialog_Reject_Callback = void (*)(KIO__RenameDialog*);
    using KIO__RenameDialog_KeyPressEvent_Callback = void (*)(KIO__RenameDialog*, QKeyEvent*);
    using KIO__RenameDialog_CloseEvent_Callback = void (*)(KIO__RenameDialog*, QCloseEvent*);
    using KIO__RenameDialog_ShowEvent_Callback = void (*)(KIO__RenameDialog*, QShowEvent*);
    using KIO__RenameDialog_ResizeEvent_Callback = void (*)(KIO__RenameDialog*, QResizeEvent*);
    using KIO__RenameDialog_ContextMenuEvent_Callback = void (*)(KIO__RenameDialog*, QContextMenuEvent*);
    using KIO__RenameDialog_EventFilter_Callback = bool (*)(KIO__RenameDialog*, QObject*, QEvent*);
    using KIO__RenameDialog_DevType_Callback = int (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_HeightForWidth_Callback = int (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_HasHeightForWidth_Callback = bool (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_PaintEngine_Callback = QPaintEngine* (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_Event_Callback = bool (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_MousePressEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseReleaseEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseMoveEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_WheelEvent_Callback = void (*)(KIO__RenameDialog*, QWheelEvent*);
    using KIO__RenameDialog_KeyReleaseEvent_Callback = void (*)(KIO__RenameDialog*, QKeyEvent*);
    using KIO__RenameDialog_FocusInEvent_Callback = void (*)(KIO__RenameDialog*, QFocusEvent*);
    using KIO__RenameDialog_FocusOutEvent_Callback = void (*)(KIO__RenameDialog*, QFocusEvent*);
    using KIO__RenameDialog_EnterEvent_Callback = void (*)(KIO__RenameDialog*, QEnterEvent*);
    using KIO__RenameDialog_LeaveEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_PaintEvent_Callback = void (*)(KIO__RenameDialog*, QPaintEvent*);
    using KIO__RenameDialog_MoveEvent_Callback = void (*)(KIO__RenameDialog*, QMoveEvent*);
    using KIO__RenameDialog_TabletEvent_Callback = void (*)(KIO__RenameDialog*, QTabletEvent*);
    using KIO__RenameDialog_ActionEvent_Callback = void (*)(KIO__RenameDialog*, QActionEvent*);
    using KIO__RenameDialog_DragEnterEvent_Callback = void (*)(KIO__RenameDialog*, QDragEnterEvent*);
    using KIO__RenameDialog_DragMoveEvent_Callback = void (*)(KIO__RenameDialog*, QDragMoveEvent*);
    using KIO__RenameDialog_DragLeaveEvent_Callback = void (*)(KIO__RenameDialog*, QDragLeaveEvent*);
    using KIO__RenameDialog_DropEvent_Callback = void (*)(KIO__RenameDialog*, QDropEvent*);
    using KIO__RenameDialog_HideEvent_Callback = void (*)(KIO__RenameDialog*, QHideEvent*);
    using KIO__RenameDialog_NativeEvent_Callback = bool (*)(KIO__RenameDialog*, libqt_string, void*, intptr_t*);
    using KIO__RenameDialog_ChangeEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_Metric_Callback = int (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_InitPainter_Callback = void (*)(const KIO__RenameDialog*, QPainter*);
    using KIO__RenameDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__RenameDialog*, QPoint*);
    using KIO__RenameDialog_SharedPainter_Callback = QPainter* (*)(const KIO__RenameDialog*);
    using KIO__RenameDialog_InputMethodEvent_Callback = void (*)(KIO__RenameDialog*, QInputMethodEvent*);
    using KIO__RenameDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_FocusNextPrevChild_Callback = bool (*)(KIO__RenameDialog*, bool);
    using KIO__RenameDialog_TimerEvent_Callback = void (*)(KIO__RenameDialog*, QTimerEvent*);
    using KIO__RenameDialog_ChildEvent_Callback = void (*)(KIO__RenameDialog*, QChildEvent*);
    using KIO__RenameDialog_CustomEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_ConnectNotify_Callback = void (*)(KIO__RenameDialog*, QMetaMethod*);
    using KIO__RenameDialog_DisconnectNotify_Callback = void (*)(KIO__RenameDialog*, QMetaMethod*);
    using KIO::RenameDialog::adjustPosition;
    using KIO::RenameDialog::create;
    using KIO::RenameDialog::destroy;
    using KIO::RenameDialog::enableRenameButton;
    using KIO::RenameDialog::focusNextChild;
    using KIO::RenameDialog::focusPreviousChild;
    using KIO::RenameDialog::getDecodedMetricF;
    using KIO::RenameDialog::isSignalConnected;
    using KIO::RenameDialog::receivers;
    using KIO::RenameDialog::sender;
    using KIO::RenameDialog::senderSignalIndex;
    using KIO::RenameDialog::updateMicroFocus;

    // Instance callback storage
    KIO__RenameDialog_MetaObject_Callback kio__renamedialog_metaobject_callback = nullptr;
    KIO__RenameDialog_Metacast_Callback kio__renamedialog_metacast_callback = nullptr;
    KIO__RenameDialog_Metacall_Callback kio__renamedialog_metacall_callback = nullptr;
    KIO__RenameDialog_SetVisible_Callback kio__renamedialog_setvisible_callback = nullptr;
    KIO__RenameDialog_SizeHint_Callback kio__renamedialog_sizehint_callback = nullptr;
    KIO__RenameDialog_MinimumSizeHint_Callback kio__renamedialog_minimumsizehint_callback = nullptr;
    KIO__RenameDialog_Open_Callback kio__renamedialog_open_callback = nullptr;
    KIO__RenameDialog_Exec_Callback kio__renamedialog_exec_callback = nullptr;
    KIO__RenameDialog_Done_Callback kio__renamedialog_done_callback = nullptr;
    KIO__RenameDialog_Accept_Callback kio__renamedialog_accept_callback = nullptr;
    KIO__RenameDialog_Reject_Callback kio__renamedialog_reject_callback = nullptr;
    KIO__RenameDialog_KeyPressEvent_Callback kio__renamedialog_keypressevent_callback = nullptr;
    KIO__RenameDialog_CloseEvent_Callback kio__renamedialog_closeevent_callback = nullptr;
    KIO__RenameDialog_ShowEvent_Callback kio__renamedialog_showevent_callback = nullptr;
    KIO__RenameDialog_ResizeEvent_Callback kio__renamedialog_resizeevent_callback = nullptr;
    KIO__RenameDialog_ContextMenuEvent_Callback kio__renamedialog_contextmenuevent_callback = nullptr;
    KIO__RenameDialog_EventFilter_Callback kio__renamedialog_eventfilter_callback = nullptr;
    KIO__RenameDialog_DevType_Callback kio__renamedialog_devtype_callback = nullptr;
    KIO__RenameDialog_HeightForWidth_Callback kio__renamedialog_heightforwidth_callback = nullptr;
    KIO__RenameDialog_HasHeightForWidth_Callback kio__renamedialog_hasheightforwidth_callback = nullptr;
    KIO__RenameDialog_PaintEngine_Callback kio__renamedialog_paintengine_callback = nullptr;
    KIO__RenameDialog_Event_Callback kio__renamedialog_event_callback = nullptr;
    KIO__RenameDialog_MousePressEvent_Callback kio__renamedialog_mousepressevent_callback = nullptr;
    KIO__RenameDialog_MouseReleaseEvent_Callback kio__renamedialog_mousereleaseevent_callback = nullptr;
    KIO__RenameDialog_MouseDoubleClickEvent_Callback kio__renamedialog_mousedoubleclickevent_callback = nullptr;
    KIO__RenameDialog_MouseMoveEvent_Callback kio__renamedialog_mousemoveevent_callback = nullptr;
    KIO__RenameDialog_WheelEvent_Callback kio__renamedialog_wheelevent_callback = nullptr;
    KIO__RenameDialog_KeyReleaseEvent_Callback kio__renamedialog_keyreleaseevent_callback = nullptr;
    KIO__RenameDialog_FocusInEvent_Callback kio__renamedialog_focusinevent_callback = nullptr;
    KIO__RenameDialog_FocusOutEvent_Callback kio__renamedialog_focusoutevent_callback = nullptr;
    KIO__RenameDialog_EnterEvent_Callback kio__renamedialog_enterevent_callback = nullptr;
    KIO__RenameDialog_LeaveEvent_Callback kio__renamedialog_leaveevent_callback = nullptr;
    KIO__RenameDialog_PaintEvent_Callback kio__renamedialog_paintevent_callback = nullptr;
    KIO__RenameDialog_MoveEvent_Callback kio__renamedialog_moveevent_callback = nullptr;
    KIO__RenameDialog_TabletEvent_Callback kio__renamedialog_tabletevent_callback = nullptr;
    KIO__RenameDialog_ActionEvent_Callback kio__renamedialog_actionevent_callback = nullptr;
    KIO__RenameDialog_DragEnterEvent_Callback kio__renamedialog_dragenterevent_callback = nullptr;
    KIO__RenameDialog_DragMoveEvent_Callback kio__renamedialog_dragmoveevent_callback = nullptr;
    KIO__RenameDialog_DragLeaveEvent_Callback kio__renamedialog_dragleaveevent_callback = nullptr;
    KIO__RenameDialog_DropEvent_Callback kio__renamedialog_dropevent_callback = nullptr;
    KIO__RenameDialog_HideEvent_Callback kio__renamedialog_hideevent_callback = nullptr;
    KIO__RenameDialog_NativeEvent_Callback kio__renamedialog_nativeevent_callback = nullptr;
    KIO__RenameDialog_ChangeEvent_Callback kio__renamedialog_changeevent_callback = nullptr;
    KIO__RenameDialog_Metric_Callback kio__renamedialog_metric_callback = nullptr;
    KIO__RenameDialog_InitPainter_Callback kio__renamedialog_initpainter_callback = nullptr;
    KIO__RenameDialog_Redirected_Callback kio__renamedialog_redirected_callback = nullptr;
    KIO__RenameDialog_SharedPainter_Callback kio__renamedialog_sharedpainter_callback = nullptr;
    KIO__RenameDialog_InputMethodEvent_Callback kio__renamedialog_inputmethodevent_callback = nullptr;
    KIO__RenameDialog_InputMethodQuery_Callback kio__renamedialog_inputmethodquery_callback = nullptr;
    KIO__RenameDialog_FocusNextPrevChild_Callback kio__renamedialog_focusnextprevchild_callback = nullptr;
    KIO__RenameDialog_TimerEvent_Callback kio__renamedialog_timerevent_callback = nullptr;
    KIO__RenameDialog_ChildEvent_Callback kio__renamedialog_childevent_callback = nullptr;
    KIO__RenameDialog_CustomEvent_Callback kio__renamedialog_customevent_callback = nullptr;
    KIO__RenameDialog_ConnectNotify_Callback kio__renamedialog_connectnotify_callback = nullptr;
    KIO__RenameDialog_DisconnectNotify_Callback kio__renamedialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::RenameDialog {
        using KIO::RenameDialog::actionEvent;
        using KIO::RenameDialog::changeEvent;
        using KIO::RenameDialog::childEvent;
        using KIO::RenameDialog::closeEvent;
        using KIO::RenameDialog::connectNotify;
        using KIO::RenameDialog::contextMenuEvent;
        using KIO::RenameDialog::customEvent;
        using KIO::RenameDialog::disconnectNotify;
        using KIO::RenameDialog::dragEnterEvent;
        using KIO::RenameDialog::dragLeaveEvent;
        using KIO::RenameDialog::dragMoveEvent;
        using KIO::RenameDialog::dropEvent;
        using KIO::RenameDialog::enterEvent;
        using KIO::RenameDialog::event;
        using KIO::RenameDialog::eventFilter;
        using KIO::RenameDialog::focusInEvent;
        using KIO::RenameDialog::focusNextPrevChild;
        using KIO::RenameDialog::focusOutEvent;
        using KIO::RenameDialog::hideEvent;
        using KIO::RenameDialog::initPainter;
        using KIO::RenameDialog::inputMethodEvent;
        using KIO::RenameDialog::keyPressEvent;
        using KIO::RenameDialog::keyReleaseEvent;
        using KIO::RenameDialog::leaveEvent;
        using KIO::RenameDialog::metric;
        using KIO::RenameDialog::mouseDoubleClickEvent;
        using KIO::RenameDialog::mouseMoveEvent;
        using KIO::RenameDialog::mousePressEvent;
        using KIO::RenameDialog::mouseReleaseEvent;
        using KIO::RenameDialog::moveEvent;
        using KIO::RenameDialog::nativeEvent;
        using KIO::RenameDialog::paintEvent;
        using KIO::RenameDialog::redirected;
        using KIO::RenameDialog::resizeEvent;
        using KIO::RenameDialog::sharedPainter;
        using KIO::RenameDialog::showEvent;
        using KIO::RenameDialog::tabletEvent;
        using KIO::RenameDialog::timerEvent;
        using KIO::RenameDialog::wheelEvent;
    };

    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options) : KIO::RenameDialog(parent, title, src, dest, options) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc, const QDateTime& mtimeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc, mtimeDest) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__renamedialog_metaobject_callback) {
            QMetaObject* callback_ret = kio__renamedialog_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__RenameDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__renamedialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__renamedialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__renamedialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__renamedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__renamedialog_setvisible_callback) {
            bool cbval1 = visible;
            kio__renamedialog_setvisible_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__renamedialog_sizehint_callback) {
            QSize* callback_ret = kio__renamedialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__renamedialog_minimumsizehint_callback) {
            QSize* callback_ret = kio__renamedialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__renamedialog_open_callback) {
            kio__renamedialog_open_callback(this);
            return;
        }
        KIO__RenameDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__renamedialog_exec_callback) {
            int callback_ret = kio__renamedialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__renamedialog_done_callback) {
            int cbval1 = param1;
            kio__renamedialog_done_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__renamedialog_accept_callback) {
            kio__renamedialog_accept_callback(this);
            return;
        }
        KIO__RenameDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__renamedialog_reject_callback) {
            kio__renamedialog_reject_callback(this);
            return;
        }
        KIO__RenameDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__renamedialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kio__renamedialog_keypressevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__renamedialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kio__renamedialog_closeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__renamedialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kio__renamedialog_showevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__renamedialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kio__renamedialog_resizeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__renamedialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kio__renamedialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__renamedialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kio__renamedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__RenameDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__renamedialog_devtype_callback) {
            int callback_ret = kio__renamedialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__renamedialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kio__renamedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__renamedialog_hasheightforwidth_callback) {
            bool callback_ret = kio__renamedialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KIO__RenameDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__renamedialog_paintengine_callback) {
            QPaintEngine* callback_ret = kio__renamedialog_paintengine_callback(this);
            return callback_ret;
        }
        return KIO__RenameDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__renamedialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__renamedialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamedialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamedialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamedialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kio__renamedialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__renamedialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kio__renamedialog_wheelevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__renamedialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kio__renamedialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__renamedialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__renamedialog_focusinevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__renamedialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kio__renamedialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__renamedialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kio__renamedialog_enterevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__renamedialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kio__renamedialog_leaveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__renamedialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kio__renamedialog_paintevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__renamedialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kio__renamedialog_moveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__renamedialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kio__renamedialog_tabletevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__renamedialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kio__renamedialog_actionevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__renamedialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kio__renamedialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__renamedialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kio__renamedialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__renamedialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kio__renamedialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__renamedialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kio__renamedialog_dropevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__renamedialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kio__renamedialog_hideevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__renamedialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kio__renamedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KIO__RenameDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__renamedialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kio__renamedialog_changeevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__renamedialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kio__renamedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__RenameDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__renamedialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kio__renamedialog_initpainter_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__renamedialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kio__renamedialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__renamedialog_sharedpainter_callback) {
            QPainter* callback_ret = kio__renamedialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KIO__RenameDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__renamedialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kio__renamedialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__renamedialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kio__renamedialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__RenameDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__renamedialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kio__renamedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__RenameDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__renamedialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__renamedialog_timerevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__renamedialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__renamedialog_childevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__renamedialog_customevent_callback) {
            QEvent* cbval1 = event;
            kio__renamedialog_customevent_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__renamedialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__renamedialog_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__renamedialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__renamedialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__RenameDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__RenameDialog_SuperKeyPressEvent(KIO::RenameDialog* self, QKeyEvent* param1);
    friend void KIO__RenameDialog_SuperCloseEvent(KIO::RenameDialog* self, QCloseEvent* param1);
    friend void KIO__RenameDialog_SuperShowEvent(KIO::RenameDialog* self, QShowEvent* param1);
    friend void KIO__RenameDialog_SuperResizeEvent(KIO::RenameDialog* self, QResizeEvent* param1);
    friend void KIO__RenameDialog_SuperContextMenuEvent(KIO::RenameDialog* self, QContextMenuEvent* param1);
    friend bool KIO__RenameDialog_SuperEventFilter(KIO::RenameDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameDialog_SuperEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_SuperMousePressEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_SuperMouseReleaseEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_SuperMouseDoubleClickEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_SuperMouseMoveEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_SuperWheelEvent(KIO::RenameDialog* self, QWheelEvent* event);
    friend void KIO__RenameDialog_SuperKeyReleaseEvent(KIO::RenameDialog* self, QKeyEvent* event);
    friend void KIO__RenameDialog_SuperFocusInEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_SuperFocusOutEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_SuperEnterEvent(KIO::RenameDialog* self, QEnterEvent* event);
    friend void KIO__RenameDialog_SuperLeaveEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_SuperPaintEvent(KIO::RenameDialog* self, QPaintEvent* event);
    friend void KIO__RenameDialog_SuperMoveEvent(KIO::RenameDialog* self, QMoveEvent* event);
    friend void KIO__RenameDialog_SuperTabletEvent(KIO::RenameDialog* self, QTabletEvent* event);
    friend void KIO__RenameDialog_SuperActionEvent(KIO::RenameDialog* self, QActionEvent* event);
    friend void KIO__RenameDialog_SuperDragEnterEvent(KIO::RenameDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameDialog_SuperDragMoveEvent(KIO::RenameDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameDialog_SuperDragLeaveEvent(KIO::RenameDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameDialog_SuperDropEvent(KIO::RenameDialog* self, QDropEvent* event);
    friend void KIO__RenameDialog_SuperHideEvent(KIO::RenameDialog* self, QHideEvent* event);
    friend bool KIO__RenameDialog_SuperNativeEvent(KIO::RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__RenameDialog_SuperChangeEvent(KIO::RenameDialog* self, QEvent* param1);
    friend int KIO__RenameDialog_SuperMetric(const KIO::RenameDialog* self, int param1);
    friend void KIO__RenameDialog_SuperInitPainter(const KIO::RenameDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__RenameDialog_SuperRedirected(const KIO::RenameDialog* self, QPoint* offset);
    friend QPainter* KIO__RenameDialog_SuperSharedPainter(const KIO::RenameDialog* self);
    friend void KIO__RenameDialog_SuperInputMethodEvent(KIO::RenameDialog* self, QInputMethodEvent* param1);
    friend bool KIO__RenameDialog_SuperFocusNextPrevChild(KIO::RenameDialog* self, bool next);
    friend void KIO__RenameDialog_SuperTimerEvent(KIO::RenameDialog* self, QTimerEvent* event);
    friend void KIO__RenameDialog_SuperChildEvent(KIO::RenameDialog* self, QChildEvent* event);
    friend void KIO__RenameDialog_SuperCustomEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_SuperConnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameDialog_SuperDisconnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
};

#endif
