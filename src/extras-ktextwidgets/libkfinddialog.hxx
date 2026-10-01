#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKFINDDIALOG_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKFINDDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFindDialog
class VirtualKFindDialog final : public KFindDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFindDialog_MetaObject_Callback = QMetaObject* (*)(const KFindDialog*);
    using KFindDialog_Metacast_Callback = void* (*)(KFindDialog*, const char*);
    using KFindDialog_Metacall_Callback = int (*)(KFindDialog*, int, int, void**);
    using KFindDialog_ShowEvent_Callback = void (*)(KFindDialog*, QShowEvent*);
    using KFindDialog_SetVisible_Callback = void (*)(KFindDialog*, bool);
    using KFindDialog_SizeHint_Callback = QSize* (*)(const KFindDialog*);
    using KFindDialog_MinimumSizeHint_Callback = QSize* (*)(const KFindDialog*);
    using KFindDialog_Open_Callback = void (*)(KFindDialog*);
    using KFindDialog_Exec_Callback = int (*)(KFindDialog*);
    using KFindDialog_Done_Callback = void (*)(KFindDialog*, int);
    using KFindDialog_Accept_Callback = void (*)(KFindDialog*);
    using KFindDialog_Reject_Callback = void (*)(KFindDialog*);
    using KFindDialog_KeyPressEvent_Callback = void (*)(KFindDialog*, QKeyEvent*);
    using KFindDialog_CloseEvent_Callback = void (*)(KFindDialog*, QCloseEvent*);
    using KFindDialog_ResizeEvent_Callback = void (*)(KFindDialog*, QResizeEvent*);
    using KFindDialog_ContextMenuEvent_Callback = void (*)(KFindDialog*, QContextMenuEvent*);
    using KFindDialog_EventFilter_Callback = bool (*)(KFindDialog*, QObject*, QEvent*);
    using KFindDialog_DevType_Callback = int (*)(const KFindDialog*);
    using KFindDialog_HeightForWidth_Callback = int (*)(const KFindDialog*, int);
    using KFindDialog_HasHeightForWidth_Callback = bool (*)(const KFindDialog*);
    using KFindDialog_PaintEngine_Callback = QPaintEngine* (*)(const KFindDialog*);
    using KFindDialog_Event_Callback = bool (*)(KFindDialog*, QEvent*);
    using KFindDialog_MousePressEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseReleaseEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseDoubleClickEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseMoveEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_WheelEvent_Callback = void (*)(KFindDialog*, QWheelEvent*);
    using KFindDialog_KeyReleaseEvent_Callback = void (*)(KFindDialog*, QKeyEvent*);
    using KFindDialog_FocusInEvent_Callback = void (*)(KFindDialog*, QFocusEvent*);
    using KFindDialog_FocusOutEvent_Callback = void (*)(KFindDialog*, QFocusEvent*);
    using KFindDialog_EnterEvent_Callback = void (*)(KFindDialog*, QEnterEvent*);
    using KFindDialog_LeaveEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_PaintEvent_Callback = void (*)(KFindDialog*, QPaintEvent*);
    using KFindDialog_MoveEvent_Callback = void (*)(KFindDialog*, QMoveEvent*);
    using KFindDialog_TabletEvent_Callback = void (*)(KFindDialog*, QTabletEvent*);
    using KFindDialog_ActionEvent_Callback = void (*)(KFindDialog*, QActionEvent*);
    using KFindDialog_DragEnterEvent_Callback = void (*)(KFindDialog*, QDragEnterEvent*);
    using KFindDialog_DragMoveEvent_Callback = void (*)(KFindDialog*, QDragMoveEvent*);
    using KFindDialog_DragLeaveEvent_Callback = void (*)(KFindDialog*, QDragLeaveEvent*);
    using KFindDialog_DropEvent_Callback = void (*)(KFindDialog*, QDropEvent*);
    using KFindDialog_HideEvent_Callback = void (*)(KFindDialog*, QHideEvent*);
    using KFindDialog_NativeEvent_Callback = bool (*)(KFindDialog*, libqt_string, void*, intptr_t*);
    using KFindDialog_ChangeEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_Metric_Callback = int (*)(const KFindDialog*, int);
    using KFindDialog_InitPainter_Callback = void (*)(const KFindDialog*, QPainter*);
    using KFindDialog_Redirected_Callback = QPaintDevice* (*)(const KFindDialog*, QPoint*);
    using KFindDialog_SharedPainter_Callback = QPainter* (*)(const KFindDialog*);
    using KFindDialog_InputMethodEvent_Callback = void (*)(KFindDialog*, QInputMethodEvent*);
    using KFindDialog_InputMethodQuery_Callback = QVariant* (*)(const KFindDialog*, int);
    using KFindDialog_FocusNextPrevChild_Callback = bool (*)(KFindDialog*, bool);
    using KFindDialog_TimerEvent_Callback = void (*)(KFindDialog*, QTimerEvent*);
    using KFindDialog_ChildEvent_Callback = void (*)(KFindDialog*, QChildEvent*);
    using KFindDialog_CustomEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_ConnectNotify_Callback = void (*)(KFindDialog*, QMetaMethod*);
    using KFindDialog_DisconnectNotify_Callback = void (*)(KFindDialog*, QMetaMethod*);
    using KFindDialog::adjustPosition;
    using KFindDialog::create;
    using KFindDialog::destroy;
    using KFindDialog::focusNextChild;
    using KFindDialog::focusPreviousChild;
    using KFindDialog::getDecodedMetricF;
    using KFindDialog::isSignalConnected;
    using KFindDialog::receivers;
    using KFindDialog::sender;
    using KFindDialog::senderSignalIndex;
    using KFindDialog::updateMicroFocus;

    // Instance callback storage
    KFindDialog_MetaObject_Callback kfinddialog_metaobject_callback = nullptr;
    KFindDialog_Metacast_Callback kfinddialog_metacast_callback = nullptr;
    KFindDialog_Metacall_Callback kfinddialog_metacall_callback = nullptr;
    KFindDialog_ShowEvent_Callback kfinddialog_showevent_callback = nullptr;
    KFindDialog_SetVisible_Callback kfinddialog_setvisible_callback = nullptr;
    KFindDialog_SizeHint_Callback kfinddialog_sizehint_callback = nullptr;
    KFindDialog_MinimumSizeHint_Callback kfinddialog_minimumsizehint_callback = nullptr;
    KFindDialog_Open_Callback kfinddialog_open_callback = nullptr;
    KFindDialog_Exec_Callback kfinddialog_exec_callback = nullptr;
    KFindDialog_Done_Callback kfinddialog_done_callback = nullptr;
    KFindDialog_Accept_Callback kfinddialog_accept_callback = nullptr;
    KFindDialog_Reject_Callback kfinddialog_reject_callback = nullptr;
    KFindDialog_KeyPressEvent_Callback kfinddialog_keypressevent_callback = nullptr;
    KFindDialog_CloseEvent_Callback kfinddialog_closeevent_callback = nullptr;
    KFindDialog_ResizeEvent_Callback kfinddialog_resizeevent_callback = nullptr;
    KFindDialog_ContextMenuEvent_Callback kfinddialog_contextmenuevent_callback = nullptr;
    KFindDialog_EventFilter_Callback kfinddialog_eventfilter_callback = nullptr;
    KFindDialog_DevType_Callback kfinddialog_devtype_callback = nullptr;
    KFindDialog_HeightForWidth_Callback kfinddialog_heightforwidth_callback = nullptr;
    KFindDialog_HasHeightForWidth_Callback kfinddialog_hasheightforwidth_callback = nullptr;
    KFindDialog_PaintEngine_Callback kfinddialog_paintengine_callback = nullptr;
    KFindDialog_Event_Callback kfinddialog_event_callback = nullptr;
    KFindDialog_MousePressEvent_Callback kfinddialog_mousepressevent_callback = nullptr;
    KFindDialog_MouseReleaseEvent_Callback kfinddialog_mousereleaseevent_callback = nullptr;
    KFindDialog_MouseDoubleClickEvent_Callback kfinddialog_mousedoubleclickevent_callback = nullptr;
    KFindDialog_MouseMoveEvent_Callback kfinddialog_mousemoveevent_callback = nullptr;
    KFindDialog_WheelEvent_Callback kfinddialog_wheelevent_callback = nullptr;
    KFindDialog_KeyReleaseEvent_Callback kfinddialog_keyreleaseevent_callback = nullptr;
    KFindDialog_FocusInEvent_Callback kfinddialog_focusinevent_callback = nullptr;
    KFindDialog_FocusOutEvent_Callback kfinddialog_focusoutevent_callback = nullptr;
    KFindDialog_EnterEvent_Callback kfinddialog_enterevent_callback = nullptr;
    KFindDialog_LeaveEvent_Callback kfinddialog_leaveevent_callback = nullptr;
    KFindDialog_PaintEvent_Callback kfinddialog_paintevent_callback = nullptr;
    KFindDialog_MoveEvent_Callback kfinddialog_moveevent_callback = nullptr;
    KFindDialog_TabletEvent_Callback kfinddialog_tabletevent_callback = nullptr;
    KFindDialog_ActionEvent_Callback kfinddialog_actionevent_callback = nullptr;
    KFindDialog_DragEnterEvent_Callback kfinddialog_dragenterevent_callback = nullptr;
    KFindDialog_DragMoveEvent_Callback kfinddialog_dragmoveevent_callback = nullptr;
    KFindDialog_DragLeaveEvent_Callback kfinddialog_dragleaveevent_callback = nullptr;
    KFindDialog_DropEvent_Callback kfinddialog_dropevent_callback = nullptr;
    KFindDialog_HideEvent_Callback kfinddialog_hideevent_callback = nullptr;
    KFindDialog_NativeEvent_Callback kfinddialog_nativeevent_callback = nullptr;
    KFindDialog_ChangeEvent_Callback kfinddialog_changeevent_callback = nullptr;
    KFindDialog_Metric_Callback kfinddialog_metric_callback = nullptr;
    KFindDialog_InitPainter_Callback kfinddialog_initpainter_callback = nullptr;
    KFindDialog_Redirected_Callback kfinddialog_redirected_callback = nullptr;
    KFindDialog_SharedPainter_Callback kfinddialog_sharedpainter_callback = nullptr;
    KFindDialog_InputMethodEvent_Callback kfinddialog_inputmethodevent_callback = nullptr;
    KFindDialog_InputMethodQuery_Callback kfinddialog_inputmethodquery_callback = nullptr;
    KFindDialog_FocusNextPrevChild_Callback kfinddialog_focusnextprevchild_callback = nullptr;
    KFindDialog_TimerEvent_Callback kfinddialog_timerevent_callback = nullptr;
    KFindDialog_ChildEvent_Callback kfinddialog_childevent_callback = nullptr;
    KFindDialog_CustomEvent_Callback kfinddialog_customevent_callback = nullptr;
    KFindDialog_ConnectNotify_Callback kfinddialog_connectnotify_callback = nullptr;
    KFindDialog_DisconnectNotify_Callback kfinddialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFindDialog {
        using KFindDialog::actionEvent;
        using KFindDialog::changeEvent;
        using KFindDialog::childEvent;
        using KFindDialog::closeEvent;
        using KFindDialog::connectNotify;
        using KFindDialog::contextMenuEvent;
        using KFindDialog::customEvent;
        using KFindDialog::disconnectNotify;
        using KFindDialog::dragEnterEvent;
        using KFindDialog::dragLeaveEvent;
        using KFindDialog::dragMoveEvent;
        using KFindDialog::dropEvent;
        using KFindDialog::enterEvent;
        using KFindDialog::event;
        using KFindDialog::eventFilter;
        using KFindDialog::focusInEvent;
        using KFindDialog::focusNextPrevChild;
        using KFindDialog::focusOutEvent;
        using KFindDialog::hideEvent;
        using KFindDialog::initPainter;
        using KFindDialog::inputMethodEvent;
        using KFindDialog::keyPressEvent;
        using KFindDialog::keyReleaseEvent;
        using KFindDialog::leaveEvent;
        using KFindDialog::metric;
        using KFindDialog::mouseDoubleClickEvent;
        using KFindDialog::mouseMoveEvent;
        using KFindDialog::mousePressEvent;
        using KFindDialog::mouseReleaseEvent;
        using KFindDialog::moveEvent;
        using KFindDialog::nativeEvent;
        using KFindDialog::paintEvent;
        using KFindDialog::redirected;
        using KFindDialog::resizeEvent;
        using KFindDialog::sharedPainter;
        using KFindDialog::showEvent;
        using KFindDialog::tabletEvent;
        using KFindDialog::timerEvent;
        using KFindDialog::wheelEvent;
    };

    VirtualKFindDialog(QWidget* parent) : KFindDialog(parent) {};
    VirtualKFindDialog() : KFindDialog() {};
    VirtualKFindDialog(QWidget* parent, long options) : KFindDialog(parent, options) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings) : KFindDialog(parent, options, findStrings) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings, bool hasSelection) : KFindDialog(parent, options, findStrings, hasSelection) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings, bool hasSelection, bool replaceDialog) : KFindDialog(parent, options, findStrings, hasSelection, replaceDialog) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfinddialog_metaobject_callback) {
            QMetaObject* callback_ret = kfinddialog_metaobject_callback(this);
            return callback_ret;
        }
        return KFindDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfinddialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfinddialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFindDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfinddialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfinddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFindDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfinddialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kfinddialog_showevent_callback(this, cbval1);
            return;
        }
        KFindDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfinddialog_setvisible_callback) {
            bool cbval1 = visible;
            kfinddialog_setvisible_callback(this, cbval1);
            return;
        }
        KFindDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfinddialog_sizehint_callback) {
            QSize* callback_ret = kfinddialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFindDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfinddialog_minimumsizehint_callback) {
            QSize* callback_ret = kfinddialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFindDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfinddialog_open_callback) {
            kfinddialog_open_callback(this);
            return;
        }
        KFindDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfinddialog_exec_callback) {
            int callback_ret = kfinddialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFindDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfinddialog_done_callback) {
            int cbval1 = param1;
            kfinddialog_done_callback(this, cbval1);
            return;
        }
        KFindDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfinddialog_accept_callback) {
            kfinddialog_accept_callback(this);
            return;
        }
        KFindDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfinddialog_reject_callback) {
            kfinddialog_reject_callback(this);
            return;
        }
        KFindDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfinddialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kfinddialog_keypressevent_callback(this, cbval1);
            return;
        }
        KFindDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfinddialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kfinddialog_closeevent_callback(this, cbval1);
            return;
        }
        KFindDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfinddialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kfinddialog_resizeevent_callback(this, cbval1);
            return;
        }
        KFindDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfinddialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kfinddialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFindDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfinddialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kfinddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFindDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfinddialog_devtype_callback) {
            int callback_ret = kfinddialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFindDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfinddialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfinddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFindDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfinddialog_hasheightforwidth_callback) {
            bool callback_ret = kfinddialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFindDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfinddialog_paintengine_callback) {
            QPaintEngine* callback_ret = kfinddialog_paintengine_callback(this);
            return callback_ret;
        }
        return KFindDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfinddialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfinddialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFindDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfinddialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfinddialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KFindDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfinddialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfinddialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFindDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfinddialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfinddialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFindDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfinddialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfinddialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFindDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfinddialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfinddialog_wheelevent_callback(this, cbval1);
            return;
        }
        KFindDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfinddialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfinddialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFindDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfinddialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfinddialog_focusinevent_callback(this, cbval1);
            return;
        }
        KFindDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfinddialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfinddialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KFindDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfinddialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfinddialog_enterevent_callback(this, cbval1);
            return;
        }
        KFindDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfinddialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfinddialog_leaveevent_callback(this, cbval1);
            return;
        }
        KFindDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfinddialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfinddialog_paintevent_callback(this, cbval1);
            return;
        }
        KFindDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfinddialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfinddialog_moveevent_callback(this, cbval1);
            return;
        }
        KFindDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfinddialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfinddialog_tabletevent_callback(this, cbval1);
            return;
        }
        KFindDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfinddialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfinddialog_actionevent_callback(this, cbval1);
            return;
        }
        KFindDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfinddialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfinddialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KFindDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfinddialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfinddialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFindDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfinddialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfinddialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFindDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfinddialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfinddialog_dropevent_callback(this, cbval1);
            return;
        }
        KFindDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfinddialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfinddialog_hideevent_callback(this, cbval1);
            return;
        }
        KFindDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfinddialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfinddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFindDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfinddialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfinddialog_changeevent_callback(this, cbval1);
            return;
        }
        KFindDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfinddialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfinddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFindDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfinddialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfinddialog_initpainter_callback(this, cbval1);
            return;
        }
        KFindDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfinddialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfinddialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFindDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfinddialog_sharedpainter_callback) {
            QPainter* callback_ret = kfinddialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFindDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfinddialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfinddialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFindDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfinddialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfinddialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFindDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfinddialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfinddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFindDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfinddialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfinddialog_timerevent_callback(this, cbval1);
            return;
        }
        KFindDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfinddialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfinddialog_childevent_callback(this, cbval1);
            return;
        }
        KFindDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfinddialog_customevent_callback) {
            QEvent* cbval1 = event;
            kfinddialog_customevent_callback(this, cbval1);
            return;
        }
        KFindDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfinddialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfinddialog_connectnotify_callback(this, cbval1);
            return;
        }
        KFindDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfinddialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfinddialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFindDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFindDialog_SuperShowEvent(KFindDialog* self, QShowEvent* param1);
    friend void KFindDialog_SuperKeyPressEvent(KFindDialog* self, QKeyEvent* param1);
    friend void KFindDialog_SuperCloseEvent(KFindDialog* self, QCloseEvent* param1);
    friend void KFindDialog_SuperResizeEvent(KFindDialog* self, QResizeEvent* param1);
    friend void KFindDialog_SuperContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1);
    friend bool KFindDialog_SuperEventFilter(KFindDialog* self, QObject* param1, QEvent* param2);
    friend bool KFindDialog_SuperEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_SuperMousePressEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_SuperMouseReleaseEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_SuperMouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_SuperMouseMoveEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_SuperWheelEvent(KFindDialog* self, QWheelEvent* event);
    friend void KFindDialog_SuperKeyReleaseEvent(KFindDialog* self, QKeyEvent* event);
    friend void KFindDialog_SuperFocusInEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_SuperFocusOutEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_SuperEnterEvent(KFindDialog* self, QEnterEvent* event);
    friend void KFindDialog_SuperLeaveEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_SuperPaintEvent(KFindDialog* self, QPaintEvent* event);
    friend void KFindDialog_SuperMoveEvent(KFindDialog* self, QMoveEvent* event);
    friend void KFindDialog_SuperTabletEvent(KFindDialog* self, QTabletEvent* event);
    friend void KFindDialog_SuperActionEvent(KFindDialog* self, QActionEvent* event);
    friend void KFindDialog_SuperDragEnterEvent(KFindDialog* self, QDragEnterEvent* event);
    friend void KFindDialog_SuperDragMoveEvent(KFindDialog* self, QDragMoveEvent* event);
    friend void KFindDialog_SuperDragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event);
    friend void KFindDialog_SuperDropEvent(KFindDialog* self, QDropEvent* event);
    friend void KFindDialog_SuperHideEvent(KFindDialog* self, QHideEvent* event);
    friend bool KFindDialog_SuperNativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFindDialog_SuperChangeEvent(KFindDialog* self, QEvent* param1);
    friend int KFindDialog_SuperMetric(const KFindDialog* self, int param1);
    friend void KFindDialog_SuperInitPainter(const KFindDialog* self, QPainter* painter);
    friend QPaintDevice* KFindDialog_SuperRedirected(const KFindDialog* self, QPoint* offset);
    friend QPainter* KFindDialog_SuperSharedPainter(const KFindDialog* self);
    friend void KFindDialog_SuperInputMethodEvent(KFindDialog* self, QInputMethodEvent* param1);
    friend bool KFindDialog_SuperFocusNextPrevChild(KFindDialog* self, bool next);
    friend void KFindDialog_SuperTimerEvent(KFindDialog* self, QTimerEvent* event);
    friend void KFindDialog_SuperChildEvent(KFindDialog* self, QChildEvent* event);
    friend void KFindDialog_SuperCustomEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_SuperConnectNotify(KFindDialog* self, const QMetaMethod* signal);
    friend void KFindDialog_SuperDisconnectNotify(KFindDialog* self, const QMetaMethod* signal);
};

#endif
