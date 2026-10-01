#pragma once
#ifndef EXTRAS_KIO_LIBKFILEPLACEEDITDIALOG_HXX
#define EXTRAS_KIO_LIBKFILEPLACEEDITDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlaceEditDialog
class VirtualKFilePlaceEditDialog final : public KFilePlaceEditDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFilePlaceEditDialog_MetaObject_Callback = QMetaObject* (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Metacast_Callback = void* (*)(KFilePlaceEditDialog*, const char*);
    using KFilePlaceEditDialog_Metacall_Callback = int (*)(KFilePlaceEditDialog*, int, int, void**);
    using KFilePlaceEditDialog_SetVisible_Callback = void (*)(KFilePlaceEditDialog*, bool);
    using KFilePlaceEditDialog_SizeHint_Callback = QSize* (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_MinimumSizeHint_Callback = QSize* (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Open_Callback = void (*)(KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Exec_Callback = int (*)(KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Done_Callback = void (*)(KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_Accept_Callback = void (*)(KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Reject_Callback = void (*)(KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_KeyPressEvent_Callback = void (*)(KFilePlaceEditDialog*, QKeyEvent*);
    using KFilePlaceEditDialog_CloseEvent_Callback = void (*)(KFilePlaceEditDialog*, QCloseEvent*);
    using KFilePlaceEditDialog_ShowEvent_Callback = void (*)(KFilePlaceEditDialog*, QShowEvent*);
    using KFilePlaceEditDialog_ResizeEvent_Callback = void (*)(KFilePlaceEditDialog*, QResizeEvent*);
    using KFilePlaceEditDialog_ContextMenuEvent_Callback = void (*)(KFilePlaceEditDialog*, QContextMenuEvent*);
    using KFilePlaceEditDialog_EventFilter_Callback = bool (*)(KFilePlaceEditDialog*, QObject*, QEvent*);
    using KFilePlaceEditDialog_DevType_Callback = int (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_HeightForWidth_Callback = int (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_HasHeightForWidth_Callback = bool (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_PaintEngine_Callback = QPaintEngine* (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_Event_Callback = bool (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_MousePressEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseReleaseEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseDoubleClickEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseMoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_WheelEvent_Callback = void (*)(KFilePlaceEditDialog*, QWheelEvent*);
    using KFilePlaceEditDialog_KeyReleaseEvent_Callback = void (*)(KFilePlaceEditDialog*, QKeyEvent*);
    using KFilePlaceEditDialog_FocusInEvent_Callback = void (*)(KFilePlaceEditDialog*, QFocusEvent*);
    using KFilePlaceEditDialog_FocusOutEvent_Callback = void (*)(KFilePlaceEditDialog*, QFocusEvent*);
    using KFilePlaceEditDialog_EnterEvent_Callback = void (*)(KFilePlaceEditDialog*, QEnterEvent*);
    using KFilePlaceEditDialog_LeaveEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_PaintEvent_Callback = void (*)(KFilePlaceEditDialog*, QPaintEvent*);
    using KFilePlaceEditDialog_MoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QMoveEvent*);
    using KFilePlaceEditDialog_TabletEvent_Callback = void (*)(KFilePlaceEditDialog*, QTabletEvent*);
    using KFilePlaceEditDialog_ActionEvent_Callback = void (*)(KFilePlaceEditDialog*, QActionEvent*);
    using KFilePlaceEditDialog_DragEnterEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragEnterEvent*);
    using KFilePlaceEditDialog_DragMoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragMoveEvent*);
    using KFilePlaceEditDialog_DragLeaveEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragLeaveEvent*);
    using KFilePlaceEditDialog_DropEvent_Callback = void (*)(KFilePlaceEditDialog*, QDropEvent*);
    using KFilePlaceEditDialog_HideEvent_Callback = void (*)(KFilePlaceEditDialog*, QHideEvent*);
    using KFilePlaceEditDialog_NativeEvent_Callback = bool (*)(KFilePlaceEditDialog*, libqt_string, void*, intptr_t*);
    using KFilePlaceEditDialog_ChangeEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_Metric_Callback = int (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_InitPainter_Callback = void (*)(const KFilePlaceEditDialog*, QPainter*);
    using KFilePlaceEditDialog_Redirected_Callback = QPaintDevice* (*)(const KFilePlaceEditDialog*, QPoint*);
    using KFilePlaceEditDialog_SharedPainter_Callback = QPainter* (*)(const KFilePlaceEditDialog*);
    using KFilePlaceEditDialog_InputMethodEvent_Callback = void (*)(KFilePlaceEditDialog*, QInputMethodEvent*);
    using KFilePlaceEditDialog_InputMethodQuery_Callback = QVariant* (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_FocusNextPrevChild_Callback = bool (*)(KFilePlaceEditDialog*, bool);
    using KFilePlaceEditDialog_TimerEvent_Callback = void (*)(KFilePlaceEditDialog*, QTimerEvent*);
    using KFilePlaceEditDialog_ChildEvent_Callback = void (*)(KFilePlaceEditDialog*, QChildEvent*);
    using KFilePlaceEditDialog_CustomEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_ConnectNotify_Callback = void (*)(KFilePlaceEditDialog*, QMetaMethod*);
    using KFilePlaceEditDialog_DisconnectNotify_Callback = void (*)(KFilePlaceEditDialog*, QMetaMethod*);
    using KFilePlaceEditDialog::adjustPosition;
    using KFilePlaceEditDialog::create;
    using KFilePlaceEditDialog::destroy;
    using KFilePlaceEditDialog::focusNextChild;
    using KFilePlaceEditDialog::focusPreviousChild;
    using KFilePlaceEditDialog::getDecodedMetricF;
    using KFilePlaceEditDialog::isSignalConnected;
    using KFilePlaceEditDialog::receivers;
    using KFilePlaceEditDialog::sender;
    using KFilePlaceEditDialog::senderSignalIndex;
    using KFilePlaceEditDialog::updateMicroFocus;

    // Instance callback storage
    KFilePlaceEditDialog_MetaObject_Callback kfileplaceeditdialog_metaobject_callback = nullptr;
    KFilePlaceEditDialog_Metacast_Callback kfileplaceeditdialog_metacast_callback = nullptr;
    KFilePlaceEditDialog_Metacall_Callback kfileplaceeditdialog_metacall_callback = nullptr;
    KFilePlaceEditDialog_SetVisible_Callback kfileplaceeditdialog_setvisible_callback = nullptr;
    KFilePlaceEditDialog_SizeHint_Callback kfileplaceeditdialog_sizehint_callback = nullptr;
    KFilePlaceEditDialog_MinimumSizeHint_Callback kfileplaceeditdialog_minimumsizehint_callback = nullptr;
    KFilePlaceEditDialog_Open_Callback kfileplaceeditdialog_open_callback = nullptr;
    KFilePlaceEditDialog_Exec_Callback kfileplaceeditdialog_exec_callback = nullptr;
    KFilePlaceEditDialog_Done_Callback kfileplaceeditdialog_done_callback = nullptr;
    KFilePlaceEditDialog_Accept_Callback kfileplaceeditdialog_accept_callback = nullptr;
    KFilePlaceEditDialog_Reject_Callback kfileplaceeditdialog_reject_callback = nullptr;
    KFilePlaceEditDialog_KeyPressEvent_Callback kfileplaceeditdialog_keypressevent_callback = nullptr;
    KFilePlaceEditDialog_CloseEvent_Callback kfileplaceeditdialog_closeevent_callback = nullptr;
    KFilePlaceEditDialog_ShowEvent_Callback kfileplaceeditdialog_showevent_callback = nullptr;
    KFilePlaceEditDialog_ResizeEvent_Callback kfileplaceeditdialog_resizeevent_callback = nullptr;
    KFilePlaceEditDialog_ContextMenuEvent_Callback kfileplaceeditdialog_contextmenuevent_callback = nullptr;
    KFilePlaceEditDialog_EventFilter_Callback kfileplaceeditdialog_eventfilter_callback = nullptr;
    KFilePlaceEditDialog_DevType_Callback kfileplaceeditdialog_devtype_callback = nullptr;
    KFilePlaceEditDialog_HeightForWidth_Callback kfileplaceeditdialog_heightforwidth_callback = nullptr;
    KFilePlaceEditDialog_HasHeightForWidth_Callback kfileplaceeditdialog_hasheightforwidth_callback = nullptr;
    KFilePlaceEditDialog_PaintEngine_Callback kfileplaceeditdialog_paintengine_callback = nullptr;
    KFilePlaceEditDialog_Event_Callback kfileplaceeditdialog_event_callback = nullptr;
    KFilePlaceEditDialog_MousePressEvent_Callback kfileplaceeditdialog_mousepressevent_callback = nullptr;
    KFilePlaceEditDialog_MouseReleaseEvent_Callback kfileplaceeditdialog_mousereleaseevent_callback = nullptr;
    KFilePlaceEditDialog_MouseDoubleClickEvent_Callback kfileplaceeditdialog_mousedoubleclickevent_callback = nullptr;
    KFilePlaceEditDialog_MouseMoveEvent_Callback kfileplaceeditdialog_mousemoveevent_callback = nullptr;
    KFilePlaceEditDialog_WheelEvent_Callback kfileplaceeditdialog_wheelevent_callback = nullptr;
    KFilePlaceEditDialog_KeyReleaseEvent_Callback kfileplaceeditdialog_keyreleaseevent_callback = nullptr;
    KFilePlaceEditDialog_FocusInEvent_Callback kfileplaceeditdialog_focusinevent_callback = nullptr;
    KFilePlaceEditDialog_FocusOutEvent_Callback kfileplaceeditdialog_focusoutevent_callback = nullptr;
    KFilePlaceEditDialog_EnterEvent_Callback kfileplaceeditdialog_enterevent_callback = nullptr;
    KFilePlaceEditDialog_LeaveEvent_Callback kfileplaceeditdialog_leaveevent_callback = nullptr;
    KFilePlaceEditDialog_PaintEvent_Callback kfileplaceeditdialog_paintevent_callback = nullptr;
    KFilePlaceEditDialog_MoveEvent_Callback kfileplaceeditdialog_moveevent_callback = nullptr;
    KFilePlaceEditDialog_TabletEvent_Callback kfileplaceeditdialog_tabletevent_callback = nullptr;
    KFilePlaceEditDialog_ActionEvent_Callback kfileplaceeditdialog_actionevent_callback = nullptr;
    KFilePlaceEditDialog_DragEnterEvent_Callback kfileplaceeditdialog_dragenterevent_callback = nullptr;
    KFilePlaceEditDialog_DragMoveEvent_Callback kfileplaceeditdialog_dragmoveevent_callback = nullptr;
    KFilePlaceEditDialog_DragLeaveEvent_Callback kfileplaceeditdialog_dragleaveevent_callback = nullptr;
    KFilePlaceEditDialog_DropEvent_Callback kfileplaceeditdialog_dropevent_callback = nullptr;
    KFilePlaceEditDialog_HideEvent_Callback kfileplaceeditdialog_hideevent_callback = nullptr;
    KFilePlaceEditDialog_NativeEvent_Callback kfileplaceeditdialog_nativeevent_callback = nullptr;
    KFilePlaceEditDialog_ChangeEvent_Callback kfileplaceeditdialog_changeevent_callback = nullptr;
    KFilePlaceEditDialog_Metric_Callback kfileplaceeditdialog_metric_callback = nullptr;
    KFilePlaceEditDialog_InitPainter_Callback kfileplaceeditdialog_initpainter_callback = nullptr;
    KFilePlaceEditDialog_Redirected_Callback kfileplaceeditdialog_redirected_callback = nullptr;
    KFilePlaceEditDialog_SharedPainter_Callback kfileplaceeditdialog_sharedpainter_callback = nullptr;
    KFilePlaceEditDialog_InputMethodEvent_Callback kfileplaceeditdialog_inputmethodevent_callback = nullptr;
    KFilePlaceEditDialog_InputMethodQuery_Callback kfileplaceeditdialog_inputmethodquery_callback = nullptr;
    KFilePlaceEditDialog_FocusNextPrevChild_Callback kfileplaceeditdialog_focusnextprevchild_callback = nullptr;
    KFilePlaceEditDialog_TimerEvent_Callback kfileplaceeditdialog_timerevent_callback = nullptr;
    KFilePlaceEditDialog_ChildEvent_Callback kfileplaceeditdialog_childevent_callback = nullptr;
    KFilePlaceEditDialog_CustomEvent_Callback kfileplaceeditdialog_customevent_callback = nullptr;
    KFilePlaceEditDialog_ConnectNotify_Callback kfileplaceeditdialog_connectnotify_callback = nullptr;
    KFilePlaceEditDialog_DisconnectNotify_Callback kfileplaceeditdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFilePlaceEditDialog {
        using KFilePlaceEditDialog::actionEvent;
        using KFilePlaceEditDialog::changeEvent;
        using KFilePlaceEditDialog::childEvent;
        using KFilePlaceEditDialog::closeEvent;
        using KFilePlaceEditDialog::connectNotify;
        using KFilePlaceEditDialog::contextMenuEvent;
        using KFilePlaceEditDialog::customEvent;
        using KFilePlaceEditDialog::disconnectNotify;
        using KFilePlaceEditDialog::dragEnterEvent;
        using KFilePlaceEditDialog::dragLeaveEvent;
        using KFilePlaceEditDialog::dragMoveEvent;
        using KFilePlaceEditDialog::dropEvent;
        using KFilePlaceEditDialog::enterEvent;
        using KFilePlaceEditDialog::event;
        using KFilePlaceEditDialog::eventFilter;
        using KFilePlaceEditDialog::focusInEvent;
        using KFilePlaceEditDialog::focusNextPrevChild;
        using KFilePlaceEditDialog::focusOutEvent;
        using KFilePlaceEditDialog::hideEvent;
        using KFilePlaceEditDialog::initPainter;
        using KFilePlaceEditDialog::inputMethodEvent;
        using KFilePlaceEditDialog::keyPressEvent;
        using KFilePlaceEditDialog::keyReleaseEvent;
        using KFilePlaceEditDialog::leaveEvent;
        using KFilePlaceEditDialog::metric;
        using KFilePlaceEditDialog::mouseDoubleClickEvent;
        using KFilePlaceEditDialog::mouseMoveEvent;
        using KFilePlaceEditDialog::mousePressEvent;
        using KFilePlaceEditDialog::mouseReleaseEvent;
        using KFilePlaceEditDialog::moveEvent;
        using KFilePlaceEditDialog::nativeEvent;
        using KFilePlaceEditDialog::paintEvent;
        using KFilePlaceEditDialog::redirected;
        using KFilePlaceEditDialog::resizeEvent;
        using KFilePlaceEditDialog::sharedPainter;
        using KFilePlaceEditDialog::showEvent;
        using KFilePlaceEditDialog::tabletEvent;
        using KFilePlaceEditDialog::timerEvent;
        using KFilePlaceEditDialog::wheelEvent;
    };

    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal, int iconSize) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal, iconSize) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal, int iconSize, QWidget* parent) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal, iconSize, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileplaceeditdialog_metaobject_callback) {
            QMetaObject* callback_ret = kfileplaceeditdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KFilePlaceEditDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileplaceeditdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfileplaceeditdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplaceeditdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfileplaceeditdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplaceeditdialog_setvisible_callback) {
            bool cbval1 = visible;
            kfileplaceeditdialog_setvisible_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplaceeditdialog_sizehint_callback) {
            QSize* callback_ret = kfileplaceeditdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlaceEditDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplaceeditdialog_minimumsizehint_callback) {
            QSize* callback_ret = kfileplaceeditdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlaceEditDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfileplaceeditdialog_open_callback) {
            kfileplaceeditdialog_open_callback(this);
            return;
        }
        KFilePlaceEditDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfileplaceeditdialog_exec_callback) {
            int callback_ret = kfileplaceeditdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfileplaceeditdialog_done_callback) {
            int cbval1 = param1;
            kfileplaceeditdialog_done_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfileplaceeditdialog_accept_callback) {
            kfileplaceeditdialog_accept_callback(this);
            return;
        }
        KFilePlaceEditDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfileplaceeditdialog_reject_callback) {
            kfileplaceeditdialog_reject_callback(this);
            return;
        }
        KFilePlaceEditDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfileplaceeditdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kfileplaceeditdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfileplaceeditdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kfileplaceeditdialog_closeevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfileplaceeditdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kfileplaceeditdialog_showevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfileplaceeditdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kfileplaceeditdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfileplaceeditdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kfileplaceeditdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfileplaceeditdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kfileplaceeditdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlaceEditDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplaceeditdialog_devtype_callback) {
            int callback_ret = kfileplaceeditdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplaceeditdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfileplaceeditdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplaceeditdialog_hasheightforwidth_callback) {
            bool callback_ret = kfileplaceeditdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFilePlaceEditDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplaceeditdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kfileplaceeditdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KFilePlaceEditDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileplaceeditdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfileplaceeditdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplaceeditdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplaceeditdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplaceeditdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplaceeditdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfileplaceeditdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfileplaceeditdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplaceeditdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfileplaceeditdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfileplaceeditdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfileplaceeditdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplaceeditdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfileplaceeditdialog_enterevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplaceeditdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfileplaceeditdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplaceeditdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfileplaceeditdialog_paintevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplaceeditdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfileplaceeditdialog_moveevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplaceeditdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfileplaceeditdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplaceeditdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfileplaceeditdialog_actionevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplaceeditdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfileplaceeditdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplaceeditdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfileplaceeditdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplaceeditdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfileplaceeditdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplaceeditdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfileplaceeditdialog_dropevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplaceeditdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfileplaceeditdialog_hideevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplaceeditdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfileplaceeditdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFilePlaceEditDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplaceeditdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfileplaceeditdialog_changeevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplaceeditdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfileplaceeditdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplaceeditdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfileplaceeditdialog_initpainter_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplaceeditdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfileplaceeditdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplaceeditdialog_sharedpainter_callback) {
            QPainter* callback_ret = kfileplaceeditdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFilePlaceEditDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfileplaceeditdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfileplaceeditdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfileplaceeditdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfileplaceeditdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlaceEditDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplaceeditdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfileplaceeditdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileplaceeditdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfileplaceeditdialog_timerevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplaceeditdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfileplaceeditdialog_childevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplaceeditdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kfileplaceeditdialog_customevent_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplaceeditdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplaceeditdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFilePlaceEditDialog_SuperKeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1);
    friend void KFilePlaceEditDialog_SuperCloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1);
    friend void KFilePlaceEditDialog_SuperShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1);
    friend void KFilePlaceEditDialog_SuperResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1);
    friend void KFilePlaceEditDialog_SuperContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1);
    friend bool KFilePlaceEditDialog_SuperEventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2);
    friend bool KFilePlaceEditDialog_SuperEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_SuperMousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperWheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event);
    friend void KFilePlaceEditDialog_SuperKeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event);
    friend void KFilePlaceEditDialog_SuperFocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_SuperFocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_SuperEnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event);
    friend void KFilePlaceEditDialog_SuperLeaveEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_SuperPaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event);
    friend void KFilePlaceEditDialog_SuperMoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event);
    friend void KFilePlaceEditDialog_SuperTabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event);
    friend void KFilePlaceEditDialog_SuperActionEvent(KFilePlaceEditDialog* self, QActionEvent* event);
    friend void KFilePlaceEditDialog_SuperDragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event);
    friend void KFilePlaceEditDialog_SuperDragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event);
    friend void KFilePlaceEditDialog_SuperDragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event);
    friend void KFilePlaceEditDialog_SuperDropEvent(KFilePlaceEditDialog* self, QDropEvent* event);
    friend void KFilePlaceEditDialog_SuperHideEvent(KFilePlaceEditDialog* self, QHideEvent* event);
    friend bool KFilePlaceEditDialog_SuperNativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFilePlaceEditDialog_SuperChangeEvent(KFilePlaceEditDialog* self, QEvent* param1);
    friend int KFilePlaceEditDialog_SuperMetric(const KFilePlaceEditDialog* self, int param1);
    friend void KFilePlaceEditDialog_SuperInitPainter(const KFilePlaceEditDialog* self, QPainter* painter);
    friend QPaintDevice* KFilePlaceEditDialog_SuperRedirected(const KFilePlaceEditDialog* self, QPoint* offset);
    friend QPainter* KFilePlaceEditDialog_SuperSharedPainter(const KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_SuperInputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1);
    friend bool KFilePlaceEditDialog_SuperFocusNextPrevChild(KFilePlaceEditDialog* self, bool next);
    friend void KFilePlaceEditDialog_SuperTimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event);
    friend void KFilePlaceEditDialog_SuperChildEvent(KFilePlaceEditDialog* self, QChildEvent* event);
    friend void KFilePlaceEditDialog_SuperCustomEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_SuperConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_SuperDisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
};

#endif
