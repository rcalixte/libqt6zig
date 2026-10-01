#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBDIALOG_HXX
#define EXTRAS_KNEWSTUFF_LIBDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Dialog
class VirtualKNSWidgetsDialog final : public KNSWidgets::Dialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSWidgets__Dialog_MetaObject_Callback = QMetaObject* (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_Metacast_Callback = void* (*)(KNSWidgets__Dialog*, const char*);
    using KNSWidgets__Dialog_Metacall_Callback = int (*)(KNSWidgets__Dialog*, int, int, void**);
    using KNSWidgets__Dialog_Open_Callback = void (*)(KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_SetVisible_Callback = void (*)(KNSWidgets__Dialog*, bool);
    using KNSWidgets__Dialog_SizeHint_Callback = QSize* (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_MinimumSizeHint_Callback = QSize* (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_Exec_Callback = int (*)(KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_Done_Callback = void (*)(KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_Accept_Callback = void (*)(KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_Reject_Callback = void (*)(KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_KeyPressEvent_Callback = void (*)(KNSWidgets__Dialog*, QKeyEvent*);
    using KNSWidgets__Dialog_CloseEvent_Callback = void (*)(KNSWidgets__Dialog*, QCloseEvent*);
    using KNSWidgets__Dialog_ShowEvent_Callback = void (*)(KNSWidgets__Dialog*, QShowEvent*);
    using KNSWidgets__Dialog_ResizeEvent_Callback = void (*)(KNSWidgets__Dialog*, QResizeEvent*);
    using KNSWidgets__Dialog_ContextMenuEvent_Callback = void (*)(KNSWidgets__Dialog*, QContextMenuEvent*);
    using KNSWidgets__Dialog_EventFilter_Callback = bool (*)(KNSWidgets__Dialog*, QObject*, QEvent*);
    using KNSWidgets__Dialog_DevType_Callback = int (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_HeightForWidth_Callback = int (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_HasHeightForWidth_Callback = bool (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_PaintEngine_Callback = QPaintEngine* (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_Event_Callback = bool (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_MousePressEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseReleaseEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseDoubleClickEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseMoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_WheelEvent_Callback = void (*)(KNSWidgets__Dialog*, QWheelEvent*);
    using KNSWidgets__Dialog_KeyReleaseEvent_Callback = void (*)(KNSWidgets__Dialog*, QKeyEvent*);
    using KNSWidgets__Dialog_FocusInEvent_Callback = void (*)(KNSWidgets__Dialog*, QFocusEvent*);
    using KNSWidgets__Dialog_FocusOutEvent_Callback = void (*)(KNSWidgets__Dialog*, QFocusEvent*);
    using KNSWidgets__Dialog_EnterEvent_Callback = void (*)(KNSWidgets__Dialog*, QEnterEvent*);
    using KNSWidgets__Dialog_LeaveEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_PaintEvent_Callback = void (*)(KNSWidgets__Dialog*, QPaintEvent*);
    using KNSWidgets__Dialog_MoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QMoveEvent*);
    using KNSWidgets__Dialog_TabletEvent_Callback = void (*)(KNSWidgets__Dialog*, QTabletEvent*);
    using KNSWidgets__Dialog_ActionEvent_Callback = void (*)(KNSWidgets__Dialog*, QActionEvent*);
    using KNSWidgets__Dialog_DragEnterEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragEnterEvent*);
    using KNSWidgets__Dialog_DragMoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragMoveEvent*);
    using KNSWidgets__Dialog_DragLeaveEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragLeaveEvent*);
    using KNSWidgets__Dialog_DropEvent_Callback = void (*)(KNSWidgets__Dialog*, QDropEvent*);
    using KNSWidgets__Dialog_HideEvent_Callback = void (*)(KNSWidgets__Dialog*, QHideEvent*);
    using KNSWidgets__Dialog_NativeEvent_Callback = bool (*)(KNSWidgets__Dialog*, libqt_string, void*, intptr_t*);
    using KNSWidgets__Dialog_ChangeEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_Metric_Callback = int (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_InitPainter_Callback = void (*)(const KNSWidgets__Dialog*, QPainter*);
    using KNSWidgets__Dialog_Redirected_Callback = QPaintDevice* (*)(const KNSWidgets__Dialog*, QPoint*);
    using KNSWidgets__Dialog_SharedPainter_Callback = QPainter* (*)(const KNSWidgets__Dialog*);
    using KNSWidgets__Dialog_InputMethodEvent_Callback = void (*)(KNSWidgets__Dialog*, QInputMethodEvent*);
    using KNSWidgets__Dialog_InputMethodQuery_Callback = QVariant* (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_FocusNextPrevChild_Callback = bool (*)(KNSWidgets__Dialog*, bool);
    using KNSWidgets__Dialog_TimerEvent_Callback = void (*)(KNSWidgets__Dialog*, QTimerEvent*);
    using KNSWidgets__Dialog_ChildEvent_Callback = void (*)(KNSWidgets__Dialog*, QChildEvent*);
    using KNSWidgets__Dialog_CustomEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_ConnectNotify_Callback = void (*)(KNSWidgets__Dialog*, QMetaMethod*);
    using KNSWidgets__Dialog_DisconnectNotify_Callback = void (*)(KNSWidgets__Dialog*, QMetaMethod*);
    using KNSWidgets::Dialog::adjustPosition;
    using KNSWidgets::Dialog::create;
    using KNSWidgets::Dialog::destroy;
    using KNSWidgets::Dialog::focusNextChild;
    using KNSWidgets::Dialog::focusPreviousChild;
    using KNSWidgets::Dialog::getDecodedMetricF;
    using KNSWidgets::Dialog::isSignalConnected;
    using KNSWidgets::Dialog::receivers;
    using KNSWidgets::Dialog::sender;
    using KNSWidgets::Dialog::senderSignalIndex;
    using KNSWidgets::Dialog::updateMicroFocus;

    // Instance callback storage
    KNSWidgets__Dialog_MetaObject_Callback knswidgets__dialog_metaobject_callback = nullptr;
    KNSWidgets__Dialog_Metacast_Callback knswidgets__dialog_metacast_callback = nullptr;
    KNSWidgets__Dialog_Metacall_Callback knswidgets__dialog_metacall_callback = nullptr;
    KNSWidgets__Dialog_Open_Callback knswidgets__dialog_open_callback = nullptr;
    KNSWidgets__Dialog_SetVisible_Callback knswidgets__dialog_setvisible_callback = nullptr;
    KNSWidgets__Dialog_SizeHint_Callback knswidgets__dialog_sizehint_callback = nullptr;
    KNSWidgets__Dialog_MinimumSizeHint_Callback knswidgets__dialog_minimumsizehint_callback = nullptr;
    KNSWidgets__Dialog_Exec_Callback knswidgets__dialog_exec_callback = nullptr;
    KNSWidgets__Dialog_Done_Callback knswidgets__dialog_done_callback = nullptr;
    KNSWidgets__Dialog_Accept_Callback knswidgets__dialog_accept_callback = nullptr;
    KNSWidgets__Dialog_Reject_Callback knswidgets__dialog_reject_callback = nullptr;
    KNSWidgets__Dialog_KeyPressEvent_Callback knswidgets__dialog_keypressevent_callback = nullptr;
    KNSWidgets__Dialog_CloseEvent_Callback knswidgets__dialog_closeevent_callback = nullptr;
    KNSWidgets__Dialog_ShowEvent_Callback knswidgets__dialog_showevent_callback = nullptr;
    KNSWidgets__Dialog_ResizeEvent_Callback knswidgets__dialog_resizeevent_callback = nullptr;
    KNSWidgets__Dialog_ContextMenuEvent_Callback knswidgets__dialog_contextmenuevent_callback = nullptr;
    KNSWidgets__Dialog_EventFilter_Callback knswidgets__dialog_eventfilter_callback = nullptr;
    KNSWidgets__Dialog_DevType_Callback knswidgets__dialog_devtype_callback = nullptr;
    KNSWidgets__Dialog_HeightForWidth_Callback knswidgets__dialog_heightforwidth_callback = nullptr;
    KNSWidgets__Dialog_HasHeightForWidth_Callback knswidgets__dialog_hasheightforwidth_callback = nullptr;
    KNSWidgets__Dialog_PaintEngine_Callback knswidgets__dialog_paintengine_callback = nullptr;
    KNSWidgets__Dialog_Event_Callback knswidgets__dialog_event_callback = nullptr;
    KNSWidgets__Dialog_MousePressEvent_Callback knswidgets__dialog_mousepressevent_callback = nullptr;
    KNSWidgets__Dialog_MouseReleaseEvent_Callback knswidgets__dialog_mousereleaseevent_callback = nullptr;
    KNSWidgets__Dialog_MouseDoubleClickEvent_Callback knswidgets__dialog_mousedoubleclickevent_callback = nullptr;
    KNSWidgets__Dialog_MouseMoveEvent_Callback knswidgets__dialog_mousemoveevent_callback = nullptr;
    KNSWidgets__Dialog_WheelEvent_Callback knswidgets__dialog_wheelevent_callback = nullptr;
    KNSWidgets__Dialog_KeyReleaseEvent_Callback knswidgets__dialog_keyreleaseevent_callback = nullptr;
    KNSWidgets__Dialog_FocusInEvent_Callback knswidgets__dialog_focusinevent_callback = nullptr;
    KNSWidgets__Dialog_FocusOutEvent_Callback knswidgets__dialog_focusoutevent_callback = nullptr;
    KNSWidgets__Dialog_EnterEvent_Callback knswidgets__dialog_enterevent_callback = nullptr;
    KNSWidgets__Dialog_LeaveEvent_Callback knswidgets__dialog_leaveevent_callback = nullptr;
    KNSWidgets__Dialog_PaintEvent_Callback knswidgets__dialog_paintevent_callback = nullptr;
    KNSWidgets__Dialog_MoveEvent_Callback knswidgets__dialog_moveevent_callback = nullptr;
    KNSWidgets__Dialog_TabletEvent_Callback knswidgets__dialog_tabletevent_callback = nullptr;
    KNSWidgets__Dialog_ActionEvent_Callback knswidgets__dialog_actionevent_callback = nullptr;
    KNSWidgets__Dialog_DragEnterEvent_Callback knswidgets__dialog_dragenterevent_callback = nullptr;
    KNSWidgets__Dialog_DragMoveEvent_Callback knswidgets__dialog_dragmoveevent_callback = nullptr;
    KNSWidgets__Dialog_DragLeaveEvent_Callback knswidgets__dialog_dragleaveevent_callback = nullptr;
    KNSWidgets__Dialog_DropEvent_Callback knswidgets__dialog_dropevent_callback = nullptr;
    KNSWidgets__Dialog_HideEvent_Callback knswidgets__dialog_hideevent_callback = nullptr;
    KNSWidgets__Dialog_NativeEvent_Callback knswidgets__dialog_nativeevent_callback = nullptr;
    KNSWidgets__Dialog_ChangeEvent_Callback knswidgets__dialog_changeevent_callback = nullptr;
    KNSWidgets__Dialog_Metric_Callback knswidgets__dialog_metric_callback = nullptr;
    KNSWidgets__Dialog_InitPainter_Callback knswidgets__dialog_initpainter_callback = nullptr;
    KNSWidgets__Dialog_Redirected_Callback knswidgets__dialog_redirected_callback = nullptr;
    KNSWidgets__Dialog_SharedPainter_Callback knswidgets__dialog_sharedpainter_callback = nullptr;
    KNSWidgets__Dialog_InputMethodEvent_Callback knswidgets__dialog_inputmethodevent_callback = nullptr;
    KNSWidgets__Dialog_InputMethodQuery_Callback knswidgets__dialog_inputmethodquery_callback = nullptr;
    KNSWidgets__Dialog_FocusNextPrevChild_Callback knswidgets__dialog_focusnextprevchild_callback = nullptr;
    KNSWidgets__Dialog_TimerEvent_Callback knswidgets__dialog_timerevent_callback = nullptr;
    KNSWidgets__Dialog_ChildEvent_Callback knswidgets__dialog_childevent_callback = nullptr;
    KNSWidgets__Dialog_CustomEvent_Callback knswidgets__dialog_customevent_callback = nullptr;
    KNSWidgets__Dialog_ConnectNotify_Callback knswidgets__dialog_connectnotify_callback = nullptr;
    KNSWidgets__Dialog_DisconnectNotify_Callback knswidgets__dialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSWidgets::Dialog {
        using KNSWidgets::Dialog::actionEvent;
        using KNSWidgets::Dialog::changeEvent;
        using KNSWidgets::Dialog::childEvent;
        using KNSWidgets::Dialog::closeEvent;
        using KNSWidgets::Dialog::connectNotify;
        using KNSWidgets::Dialog::contextMenuEvent;
        using KNSWidgets::Dialog::customEvent;
        using KNSWidgets::Dialog::disconnectNotify;
        using KNSWidgets::Dialog::dragEnterEvent;
        using KNSWidgets::Dialog::dragLeaveEvent;
        using KNSWidgets::Dialog::dragMoveEvent;
        using KNSWidgets::Dialog::dropEvent;
        using KNSWidgets::Dialog::enterEvent;
        using KNSWidgets::Dialog::event;
        using KNSWidgets::Dialog::eventFilter;
        using KNSWidgets::Dialog::focusInEvent;
        using KNSWidgets::Dialog::focusNextPrevChild;
        using KNSWidgets::Dialog::focusOutEvent;
        using KNSWidgets::Dialog::hideEvent;
        using KNSWidgets::Dialog::initPainter;
        using KNSWidgets::Dialog::inputMethodEvent;
        using KNSWidgets::Dialog::keyPressEvent;
        using KNSWidgets::Dialog::keyReleaseEvent;
        using KNSWidgets::Dialog::leaveEvent;
        using KNSWidgets::Dialog::metric;
        using KNSWidgets::Dialog::mouseDoubleClickEvent;
        using KNSWidgets::Dialog::mouseMoveEvent;
        using KNSWidgets::Dialog::mousePressEvent;
        using KNSWidgets::Dialog::mouseReleaseEvent;
        using KNSWidgets::Dialog::moveEvent;
        using KNSWidgets::Dialog::nativeEvent;
        using KNSWidgets::Dialog::paintEvent;
        using KNSWidgets::Dialog::redirected;
        using KNSWidgets::Dialog::resizeEvent;
        using KNSWidgets::Dialog::sharedPainter;
        using KNSWidgets::Dialog::showEvent;
        using KNSWidgets::Dialog::tabletEvent;
        using KNSWidgets::Dialog::timerEvent;
        using KNSWidgets::Dialog::wheelEvent;
    };

    VirtualKNSWidgetsDialog(const QString& configFile) : KNSWidgets::Dialog(configFile) {};
    VirtualKNSWidgetsDialog(const QString& configFile, QWidget* parent) : KNSWidgets::Dialog(configFile, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knswidgets__dialog_metaobject_callback) {
            QMetaObject* callback_ret = knswidgets__dialog_metaobject_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Dialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knswidgets__dialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knswidgets__dialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__dialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knswidgets__dialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knswidgets__dialog_open_callback) {
            knswidgets__dialog_open_callback(this);
            return;
        }
        KNSWidgets__Dialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knswidgets__dialog_setvisible_callback) {
            bool cbval1 = visible;
            knswidgets__dialog_setvisible_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knswidgets__dialog_sizehint_callback) {
            QSize* callback_ret = knswidgets__dialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Dialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knswidgets__dialog_minimumsizehint_callback) {
            QSize* callback_ret = knswidgets__dialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Dialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knswidgets__dialog_exec_callback) {
            int callback_ret = knswidgets__dialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knswidgets__dialog_done_callback) {
            int cbval1 = param1;
            knswidgets__dialog_done_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knswidgets__dialog_accept_callback) {
            knswidgets__dialog_accept_callback(this);
            return;
        }
        KNSWidgets__Dialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knswidgets__dialog_reject_callback) {
            knswidgets__dialog_reject_callback(this);
            return;
        }
        KNSWidgets__Dialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knswidgets__dialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            knswidgets__dialog_keypressevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knswidgets__dialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            knswidgets__dialog_closeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knswidgets__dialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            knswidgets__dialog_showevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knswidgets__dialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            knswidgets__dialog_resizeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knswidgets__dialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            knswidgets__dialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knswidgets__dialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = knswidgets__dialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSWidgets__Dialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knswidgets__dialog_devtype_callback) {
            int callback_ret = knswidgets__dialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knswidgets__dialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = knswidgets__dialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knswidgets__dialog_hasheightforwidth_callback) {
            bool callback_ret = knswidgets__dialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Dialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knswidgets__dialog_paintengine_callback) {
            QPaintEngine* callback_ret = knswidgets__dialog_paintengine_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Dialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knswidgets__dialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knswidgets__dialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            knswidgets__dialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            knswidgets__dialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            knswidgets__dialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            knswidgets__dialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knswidgets__dialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            knswidgets__dialog_wheelevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knswidgets__dialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            knswidgets__dialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knswidgets__dialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            knswidgets__dialog_focusinevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knswidgets__dialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            knswidgets__dialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knswidgets__dialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            knswidgets__dialog_enterevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knswidgets__dialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            knswidgets__dialog_leaveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knswidgets__dialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            knswidgets__dialog_paintevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knswidgets__dialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            knswidgets__dialog_moveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knswidgets__dialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            knswidgets__dialog_tabletevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knswidgets__dialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            knswidgets__dialog_actionevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knswidgets__dialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            knswidgets__dialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knswidgets__dialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            knswidgets__dialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knswidgets__dialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            knswidgets__dialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knswidgets__dialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            knswidgets__dialog_dropevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knswidgets__dialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            knswidgets__dialog_hideevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knswidgets__dialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = knswidgets__dialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KNSWidgets__Dialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knswidgets__dialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            knswidgets__dialog_changeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knswidgets__dialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = knswidgets__dialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knswidgets__dialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            knswidgets__dialog_initpainter_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knswidgets__dialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = knswidgets__dialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knswidgets__dialog_sharedpainter_callback) {
            QPainter* callback_ret = knswidgets__dialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Dialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knswidgets__dialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            knswidgets__dialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knswidgets__dialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = knswidgets__dialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Dialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knswidgets__dialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = knswidgets__dialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knswidgets__dialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knswidgets__dialog_timerevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__dialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            knswidgets__dialog_childevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__dialog_customevent_callback) {
            QEvent* cbval1 = event;
            knswidgets__dialog_customevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__dialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__dialog_connectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__dialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__dialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSWidgets__Dialog_SuperKeyPressEvent(KNSWidgets::Dialog* self, QKeyEvent* param1);
    friend void KNSWidgets__Dialog_SuperCloseEvent(KNSWidgets::Dialog* self, QCloseEvent* param1);
    friend void KNSWidgets__Dialog_SuperShowEvent(KNSWidgets::Dialog* self, QShowEvent* param1);
    friend void KNSWidgets__Dialog_SuperResizeEvent(KNSWidgets::Dialog* self, QResizeEvent* param1);
    friend void KNSWidgets__Dialog_SuperContextMenuEvent(KNSWidgets::Dialog* self, QContextMenuEvent* param1);
    friend bool KNSWidgets__Dialog_SuperEventFilter(KNSWidgets::Dialog* self, QObject* param1, QEvent* param2);
    friend bool KNSWidgets__Dialog_SuperEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_SuperMousePressEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseReleaseEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseDoubleClickEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseMoveEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperWheelEvent(KNSWidgets::Dialog* self, QWheelEvent* event);
    friend void KNSWidgets__Dialog_SuperKeyReleaseEvent(KNSWidgets::Dialog* self, QKeyEvent* event);
    friend void KNSWidgets__Dialog_SuperFocusInEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_SuperFocusOutEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_SuperEnterEvent(KNSWidgets::Dialog* self, QEnterEvent* event);
    friend void KNSWidgets__Dialog_SuperLeaveEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_SuperPaintEvent(KNSWidgets::Dialog* self, QPaintEvent* event);
    friend void KNSWidgets__Dialog_SuperMoveEvent(KNSWidgets::Dialog* self, QMoveEvent* event);
    friend void KNSWidgets__Dialog_SuperTabletEvent(KNSWidgets::Dialog* self, QTabletEvent* event);
    friend void KNSWidgets__Dialog_SuperActionEvent(KNSWidgets::Dialog* self, QActionEvent* event);
    friend void KNSWidgets__Dialog_SuperDragEnterEvent(KNSWidgets::Dialog* self, QDragEnterEvent* event);
    friend void KNSWidgets__Dialog_SuperDragMoveEvent(KNSWidgets::Dialog* self, QDragMoveEvent* event);
    friend void KNSWidgets__Dialog_SuperDragLeaveEvent(KNSWidgets::Dialog* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Dialog_SuperDropEvent(KNSWidgets::Dialog* self, QDropEvent* event);
    friend void KNSWidgets__Dialog_SuperHideEvent(KNSWidgets::Dialog* self, QHideEvent* event);
    friend bool KNSWidgets__Dialog_SuperNativeEvent(KNSWidgets::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNSWidgets__Dialog_SuperChangeEvent(KNSWidgets::Dialog* self, QEvent* param1);
    friend int KNSWidgets__Dialog_SuperMetric(const KNSWidgets::Dialog* self, int param1);
    friend void KNSWidgets__Dialog_SuperInitPainter(const KNSWidgets::Dialog* self, QPainter* painter);
    friend QPaintDevice* KNSWidgets__Dialog_SuperRedirected(const KNSWidgets::Dialog* self, QPoint* offset);
    friend QPainter* KNSWidgets__Dialog_SuperSharedPainter(const KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_SuperInputMethodEvent(KNSWidgets::Dialog* self, QInputMethodEvent* param1);
    friend bool KNSWidgets__Dialog_SuperFocusNextPrevChild(KNSWidgets::Dialog* self, bool next);
    friend void KNSWidgets__Dialog_SuperTimerEvent(KNSWidgets::Dialog* self, QTimerEvent* event);
    friend void KNSWidgets__Dialog_SuperChildEvent(KNSWidgets::Dialog* self, QChildEvent* event);
    friend void KNSWidgets__Dialog_SuperCustomEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_SuperConnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend void KNSWidgets__Dialog_SuperDisconnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
};

#endif
