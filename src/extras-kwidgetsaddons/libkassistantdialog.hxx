#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKASSISTANTDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKASSISTANTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAssistantDialog
class VirtualKAssistantDialog final : public KAssistantDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAssistantDialog_MetaObject_Callback = QMetaObject* (*)(const KAssistantDialog*);
    using KAssistantDialog_Metacast_Callback = void* (*)(KAssistantDialog*, const char*);
    using KAssistantDialog_Metacall_Callback = int (*)(KAssistantDialog*, int, int, void**);
    using KAssistantDialog_Back_Callback = void (*)(KAssistantDialog*);
    using KAssistantDialog_Next_Callback = void (*)(KAssistantDialog*);
    using KAssistantDialog_ShowEvent_Callback = void (*)(KAssistantDialog*, QShowEvent*);
    using KAssistantDialog_SetVisible_Callback = void (*)(KAssistantDialog*, bool);
    using KAssistantDialog_SizeHint_Callback = QSize* (*)(const KAssistantDialog*);
    using KAssistantDialog_MinimumSizeHint_Callback = QSize* (*)(const KAssistantDialog*);
    using KAssistantDialog_Open_Callback = void (*)(KAssistantDialog*);
    using KAssistantDialog_Exec_Callback = int (*)(KAssistantDialog*);
    using KAssistantDialog_Done_Callback = void (*)(KAssistantDialog*, int);
    using KAssistantDialog_Accept_Callback = void (*)(KAssistantDialog*);
    using KAssistantDialog_Reject_Callback = void (*)(KAssistantDialog*);
    using KAssistantDialog_KeyPressEvent_Callback = void (*)(KAssistantDialog*, QKeyEvent*);
    using KAssistantDialog_CloseEvent_Callback = void (*)(KAssistantDialog*, QCloseEvent*);
    using KAssistantDialog_ResizeEvent_Callback = void (*)(KAssistantDialog*, QResizeEvent*);
    using KAssistantDialog_ContextMenuEvent_Callback = void (*)(KAssistantDialog*, QContextMenuEvent*);
    using KAssistantDialog_EventFilter_Callback = bool (*)(KAssistantDialog*, QObject*, QEvent*);
    using KAssistantDialog_DevType_Callback = int (*)(const KAssistantDialog*);
    using KAssistantDialog_HeightForWidth_Callback = int (*)(const KAssistantDialog*, int);
    using KAssistantDialog_HasHeightForWidth_Callback = bool (*)(const KAssistantDialog*);
    using KAssistantDialog_PaintEngine_Callback = QPaintEngine* (*)(const KAssistantDialog*);
    using KAssistantDialog_Event_Callback = bool (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_MousePressEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseReleaseEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseDoubleClickEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseMoveEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_WheelEvent_Callback = void (*)(KAssistantDialog*, QWheelEvent*);
    using KAssistantDialog_KeyReleaseEvent_Callback = void (*)(KAssistantDialog*, QKeyEvent*);
    using KAssistantDialog_FocusInEvent_Callback = void (*)(KAssistantDialog*, QFocusEvent*);
    using KAssistantDialog_FocusOutEvent_Callback = void (*)(KAssistantDialog*, QFocusEvent*);
    using KAssistantDialog_EnterEvent_Callback = void (*)(KAssistantDialog*, QEnterEvent*);
    using KAssistantDialog_LeaveEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_PaintEvent_Callback = void (*)(KAssistantDialog*, QPaintEvent*);
    using KAssistantDialog_MoveEvent_Callback = void (*)(KAssistantDialog*, QMoveEvent*);
    using KAssistantDialog_TabletEvent_Callback = void (*)(KAssistantDialog*, QTabletEvent*);
    using KAssistantDialog_ActionEvent_Callback = void (*)(KAssistantDialog*, QActionEvent*);
    using KAssistantDialog_DragEnterEvent_Callback = void (*)(KAssistantDialog*, QDragEnterEvent*);
    using KAssistantDialog_DragMoveEvent_Callback = void (*)(KAssistantDialog*, QDragMoveEvent*);
    using KAssistantDialog_DragLeaveEvent_Callback = void (*)(KAssistantDialog*, QDragLeaveEvent*);
    using KAssistantDialog_DropEvent_Callback = void (*)(KAssistantDialog*, QDropEvent*);
    using KAssistantDialog_HideEvent_Callback = void (*)(KAssistantDialog*, QHideEvent*);
    using KAssistantDialog_NativeEvent_Callback = bool (*)(KAssistantDialog*, libqt_string, void*, intptr_t*);
    using KAssistantDialog_ChangeEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_Metric_Callback = int (*)(const KAssistantDialog*, int);
    using KAssistantDialog_InitPainter_Callback = void (*)(const KAssistantDialog*, QPainter*);
    using KAssistantDialog_Redirected_Callback = QPaintDevice* (*)(const KAssistantDialog*, QPoint*);
    using KAssistantDialog_SharedPainter_Callback = QPainter* (*)(const KAssistantDialog*);
    using KAssistantDialog_InputMethodEvent_Callback = void (*)(KAssistantDialog*, QInputMethodEvent*);
    using KAssistantDialog_InputMethodQuery_Callback = QVariant* (*)(const KAssistantDialog*, int);
    using KAssistantDialog_FocusNextPrevChild_Callback = bool (*)(KAssistantDialog*, bool);
    using KAssistantDialog_TimerEvent_Callback = void (*)(KAssistantDialog*, QTimerEvent*);
    using KAssistantDialog_ChildEvent_Callback = void (*)(KAssistantDialog*, QChildEvent*);
    using KAssistantDialog_CustomEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_ConnectNotify_Callback = void (*)(KAssistantDialog*, QMetaMethod*);
    using KAssistantDialog_DisconnectNotify_Callback = void (*)(KAssistantDialog*, QMetaMethod*);
    using KAssistantDialog::adjustPosition;
    using KAssistantDialog::buttonBox;
    using KAssistantDialog::create;
    using KAssistantDialog::destroy;
    using KAssistantDialog::focusNextChild;
    using KAssistantDialog::focusPreviousChild;
    using KAssistantDialog::getDecodedMetricF;
    using KAssistantDialog::isSignalConnected;
    using KAssistantDialog::pageWidget;
    using KAssistantDialog::receivers;
    using KAssistantDialog::sender;
    using KAssistantDialog::senderSignalIndex;
    using KAssistantDialog::setButtonBox;
    using KAssistantDialog::setPageWidget;
    using KAssistantDialog::updateMicroFocus;

    // Instance callback storage
    KAssistantDialog_MetaObject_Callback kassistantdialog_metaobject_callback = nullptr;
    KAssistantDialog_Metacast_Callback kassistantdialog_metacast_callback = nullptr;
    KAssistantDialog_Metacall_Callback kassistantdialog_metacall_callback = nullptr;
    KAssistantDialog_Back_Callback kassistantdialog_back_callback = nullptr;
    KAssistantDialog_Next_Callback kassistantdialog_next_callback = nullptr;
    KAssistantDialog_ShowEvent_Callback kassistantdialog_showevent_callback = nullptr;
    KAssistantDialog_SetVisible_Callback kassistantdialog_setvisible_callback = nullptr;
    KAssistantDialog_SizeHint_Callback kassistantdialog_sizehint_callback = nullptr;
    KAssistantDialog_MinimumSizeHint_Callback kassistantdialog_minimumsizehint_callback = nullptr;
    KAssistantDialog_Open_Callback kassistantdialog_open_callback = nullptr;
    KAssistantDialog_Exec_Callback kassistantdialog_exec_callback = nullptr;
    KAssistantDialog_Done_Callback kassistantdialog_done_callback = nullptr;
    KAssistantDialog_Accept_Callback kassistantdialog_accept_callback = nullptr;
    KAssistantDialog_Reject_Callback kassistantdialog_reject_callback = nullptr;
    KAssistantDialog_KeyPressEvent_Callback kassistantdialog_keypressevent_callback = nullptr;
    KAssistantDialog_CloseEvent_Callback kassistantdialog_closeevent_callback = nullptr;
    KAssistantDialog_ResizeEvent_Callback kassistantdialog_resizeevent_callback = nullptr;
    KAssistantDialog_ContextMenuEvent_Callback kassistantdialog_contextmenuevent_callback = nullptr;
    KAssistantDialog_EventFilter_Callback kassistantdialog_eventfilter_callback = nullptr;
    KAssistantDialog_DevType_Callback kassistantdialog_devtype_callback = nullptr;
    KAssistantDialog_HeightForWidth_Callback kassistantdialog_heightforwidth_callback = nullptr;
    KAssistantDialog_HasHeightForWidth_Callback kassistantdialog_hasheightforwidth_callback = nullptr;
    KAssistantDialog_PaintEngine_Callback kassistantdialog_paintengine_callback = nullptr;
    KAssistantDialog_Event_Callback kassistantdialog_event_callback = nullptr;
    KAssistantDialog_MousePressEvent_Callback kassistantdialog_mousepressevent_callback = nullptr;
    KAssistantDialog_MouseReleaseEvent_Callback kassistantdialog_mousereleaseevent_callback = nullptr;
    KAssistantDialog_MouseDoubleClickEvent_Callback kassistantdialog_mousedoubleclickevent_callback = nullptr;
    KAssistantDialog_MouseMoveEvent_Callback kassistantdialog_mousemoveevent_callback = nullptr;
    KAssistantDialog_WheelEvent_Callback kassistantdialog_wheelevent_callback = nullptr;
    KAssistantDialog_KeyReleaseEvent_Callback kassistantdialog_keyreleaseevent_callback = nullptr;
    KAssistantDialog_FocusInEvent_Callback kassistantdialog_focusinevent_callback = nullptr;
    KAssistantDialog_FocusOutEvent_Callback kassistantdialog_focusoutevent_callback = nullptr;
    KAssistantDialog_EnterEvent_Callback kassistantdialog_enterevent_callback = nullptr;
    KAssistantDialog_LeaveEvent_Callback kassistantdialog_leaveevent_callback = nullptr;
    KAssistantDialog_PaintEvent_Callback kassistantdialog_paintevent_callback = nullptr;
    KAssistantDialog_MoveEvent_Callback kassistantdialog_moveevent_callback = nullptr;
    KAssistantDialog_TabletEvent_Callback kassistantdialog_tabletevent_callback = nullptr;
    KAssistantDialog_ActionEvent_Callback kassistantdialog_actionevent_callback = nullptr;
    KAssistantDialog_DragEnterEvent_Callback kassistantdialog_dragenterevent_callback = nullptr;
    KAssistantDialog_DragMoveEvent_Callback kassistantdialog_dragmoveevent_callback = nullptr;
    KAssistantDialog_DragLeaveEvent_Callback kassistantdialog_dragleaveevent_callback = nullptr;
    KAssistantDialog_DropEvent_Callback kassistantdialog_dropevent_callback = nullptr;
    KAssistantDialog_HideEvent_Callback kassistantdialog_hideevent_callback = nullptr;
    KAssistantDialog_NativeEvent_Callback kassistantdialog_nativeevent_callback = nullptr;
    KAssistantDialog_ChangeEvent_Callback kassistantdialog_changeevent_callback = nullptr;
    KAssistantDialog_Metric_Callback kassistantdialog_metric_callback = nullptr;
    KAssistantDialog_InitPainter_Callback kassistantdialog_initpainter_callback = nullptr;
    KAssistantDialog_Redirected_Callback kassistantdialog_redirected_callback = nullptr;
    KAssistantDialog_SharedPainter_Callback kassistantdialog_sharedpainter_callback = nullptr;
    KAssistantDialog_InputMethodEvent_Callback kassistantdialog_inputmethodevent_callback = nullptr;
    KAssistantDialog_InputMethodQuery_Callback kassistantdialog_inputmethodquery_callback = nullptr;
    KAssistantDialog_FocusNextPrevChild_Callback kassistantdialog_focusnextprevchild_callback = nullptr;
    KAssistantDialog_TimerEvent_Callback kassistantdialog_timerevent_callback = nullptr;
    KAssistantDialog_ChildEvent_Callback kassistantdialog_childevent_callback = nullptr;
    KAssistantDialog_CustomEvent_Callback kassistantdialog_customevent_callback = nullptr;
    KAssistantDialog_ConnectNotify_Callback kassistantdialog_connectnotify_callback = nullptr;
    KAssistantDialog_DisconnectNotify_Callback kassistantdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAssistantDialog {
        using KAssistantDialog::actionEvent;
        using KAssistantDialog::changeEvent;
        using KAssistantDialog::childEvent;
        using KAssistantDialog::closeEvent;
        using KAssistantDialog::connectNotify;
        using KAssistantDialog::contextMenuEvent;
        using KAssistantDialog::customEvent;
        using KAssistantDialog::disconnectNotify;
        using KAssistantDialog::dragEnterEvent;
        using KAssistantDialog::dragLeaveEvent;
        using KAssistantDialog::dragMoveEvent;
        using KAssistantDialog::dropEvent;
        using KAssistantDialog::enterEvent;
        using KAssistantDialog::event;
        using KAssistantDialog::eventFilter;
        using KAssistantDialog::focusInEvent;
        using KAssistantDialog::focusNextPrevChild;
        using KAssistantDialog::focusOutEvent;
        using KAssistantDialog::hideEvent;
        using KAssistantDialog::initPainter;
        using KAssistantDialog::inputMethodEvent;
        using KAssistantDialog::keyPressEvent;
        using KAssistantDialog::keyReleaseEvent;
        using KAssistantDialog::leaveEvent;
        using KAssistantDialog::metric;
        using KAssistantDialog::mouseDoubleClickEvent;
        using KAssistantDialog::mouseMoveEvent;
        using KAssistantDialog::mousePressEvent;
        using KAssistantDialog::mouseReleaseEvent;
        using KAssistantDialog::moveEvent;
        using KAssistantDialog::nativeEvent;
        using KAssistantDialog::paintEvent;
        using KAssistantDialog::redirected;
        using KAssistantDialog::resizeEvent;
        using KAssistantDialog::sharedPainter;
        using KAssistantDialog::showEvent;
        using KAssistantDialog::tabletEvent;
        using KAssistantDialog::timerEvent;
        using KAssistantDialog::wheelEvent;
    };

    VirtualKAssistantDialog(QWidget* parent) : KAssistantDialog(parent) {};
    VirtualKAssistantDialog() : KAssistantDialog() {};
    VirtualKAssistantDialog(QWidget* parent, Qt::WindowFlags flags) : KAssistantDialog(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kassistantdialog_metaobject_callback) {
            QMetaObject* callback_ret = kassistantdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KAssistantDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kassistantdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kassistantdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kassistantdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kassistantdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void back() override {
        if (kassistantdialog_back_callback) {
            kassistantdialog_back_callback(this);
            return;
        }
        KAssistantDialog::back();
    }

    // Virtual method for C ABI access and custom callback
    virtual void next() override {
        if (kassistantdialog_next_callback) {
            kassistantdialog_next_callback(this);
            return;
        }
        KAssistantDialog::next();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kassistantdialog_showevent_callback) {
            QShowEvent* cbval1 = event;
            kassistantdialog_showevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kassistantdialog_setvisible_callback) {
            bool cbval1 = visible;
            kassistantdialog_setvisible_callback(this, cbval1);
            return;
        }
        KAssistantDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kassistantdialog_sizehint_callback) {
            QSize* callback_ret = kassistantdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAssistantDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kassistantdialog_minimumsizehint_callback) {
            QSize* callback_ret = kassistantdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAssistantDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kassistantdialog_open_callback) {
            kassistantdialog_open_callback(this);
            return;
        }
        KAssistantDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kassistantdialog_exec_callback) {
            int callback_ret = kassistantdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kassistantdialog_done_callback) {
            int cbval1 = param1;
            kassistantdialog_done_callback(this, cbval1);
            return;
        }
        KAssistantDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kassistantdialog_accept_callback) {
            kassistantdialog_accept_callback(this);
            return;
        }
        KAssistantDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kassistantdialog_reject_callback) {
            kassistantdialog_reject_callback(this);
            return;
        }
        KAssistantDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kassistantdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kassistantdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kassistantdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kassistantdialog_closeevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kassistantdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kassistantdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kassistantdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kassistantdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kassistantdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kassistantdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAssistantDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kassistantdialog_devtype_callback) {
            int callback_ret = kassistantdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kassistantdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kassistantdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kassistantdialog_hasheightforwidth_callback) {
            bool callback_ret = kassistantdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KAssistantDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kassistantdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kassistantdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KAssistantDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kassistantdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kassistantdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kassistantdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kassistantdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kassistantdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kassistantdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kassistantdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kassistantdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kassistantdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kassistantdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kassistantdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kassistantdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kassistantdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kassistantdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kassistantdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kassistantdialog_enterevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kassistantdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kassistantdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kassistantdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kassistantdialog_paintevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kassistantdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kassistantdialog_moveevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kassistantdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kassistantdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kassistantdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kassistantdialog_actionevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kassistantdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kassistantdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kassistantdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kassistantdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kassistantdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kassistantdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kassistantdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kassistantdialog_dropevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kassistantdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kassistantdialog_hideevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kassistantdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kassistantdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KAssistantDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kassistantdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kassistantdialog_changeevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kassistantdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kassistantdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kassistantdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kassistantdialog_initpainter_callback(this, cbval1);
            return;
        }
        KAssistantDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kassistantdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kassistantdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kassistantdialog_sharedpainter_callback) {
            QPainter* callback_ret = kassistantdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KAssistantDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kassistantdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kassistantdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kassistantdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kassistantdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAssistantDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kassistantdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kassistantdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kassistantdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kassistantdialog_timerevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kassistantdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kassistantdialog_childevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kassistantdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kassistantdialog_customevent_callback(this, cbval1);
            return;
        }
        KAssistantDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kassistantdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kassistantdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KAssistantDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kassistantdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kassistantdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAssistantDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAssistantDialog_SuperShowEvent(KAssistantDialog* self, QShowEvent* event);
    friend void KAssistantDialog_SuperKeyPressEvent(KAssistantDialog* self, QKeyEvent* param1);
    friend void KAssistantDialog_SuperCloseEvent(KAssistantDialog* self, QCloseEvent* param1);
    friend void KAssistantDialog_SuperResizeEvent(KAssistantDialog* self, QResizeEvent* param1);
    friend void KAssistantDialog_SuperContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1);
    friend bool KAssistantDialog_SuperEventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2);
    friend bool KAssistantDialog_SuperEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_SuperMousePressEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseMoveEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperWheelEvent(KAssistantDialog* self, QWheelEvent* event);
    friend void KAssistantDialog_SuperKeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event);
    friend void KAssistantDialog_SuperFocusInEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_SuperFocusOutEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_SuperEnterEvent(KAssistantDialog* self, QEnterEvent* event);
    friend void KAssistantDialog_SuperLeaveEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_SuperPaintEvent(KAssistantDialog* self, QPaintEvent* event);
    friend void KAssistantDialog_SuperMoveEvent(KAssistantDialog* self, QMoveEvent* event);
    friend void KAssistantDialog_SuperTabletEvent(KAssistantDialog* self, QTabletEvent* event);
    friend void KAssistantDialog_SuperActionEvent(KAssistantDialog* self, QActionEvent* event);
    friend void KAssistantDialog_SuperDragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event);
    friend void KAssistantDialog_SuperDragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event);
    friend void KAssistantDialog_SuperDragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event);
    friend void KAssistantDialog_SuperDropEvent(KAssistantDialog* self, QDropEvent* event);
    friend void KAssistantDialog_SuperHideEvent(KAssistantDialog* self, QHideEvent* event);
    friend bool KAssistantDialog_SuperNativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAssistantDialog_SuperChangeEvent(KAssistantDialog* self, QEvent* param1);
    friend int KAssistantDialog_SuperMetric(const KAssistantDialog* self, int param1);
    friend void KAssistantDialog_SuperInitPainter(const KAssistantDialog* self, QPainter* painter);
    friend QPaintDevice* KAssistantDialog_SuperRedirected(const KAssistantDialog* self, QPoint* offset);
    friend QPainter* KAssistantDialog_SuperSharedPainter(const KAssistantDialog* self);
    friend void KAssistantDialog_SuperInputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1);
    friend bool KAssistantDialog_SuperFocusNextPrevChild(KAssistantDialog* self, bool next);
    friend void KAssistantDialog_SuperTimerEvent(KAssistantDialog* self, QTimerEvent* event);
    friend void KAssistantDialog_SuperChildEvent(KAssistantDialog* self, QChildEvent* event);
    friend void KAssistantDialog_SuperCustomEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_SuperConnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
    friend void KAssistantDialog_SuperDisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
};

#endif
