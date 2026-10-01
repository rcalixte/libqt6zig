#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKBUGREPORT_HXX
#define EXTRAS_KXMLGUI_LIBKBUGREPORT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBugReport
class VirtualKBugReport final : public KBugReport {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBugReport_MetaObject_Callback = QMetaObject* (*)(const KBugReport*);
    using KBugReport_Metacast_Callback = void* (*)(KBugReport*, const char*);
    using KBugReport_Metacall_Callback = int (*)(KBugReport*, int, int, void**);
    using KBugReport_Accept_Callback = void (*)(KBugReport*);
    using KBugReport_SetVisible_Callback = void (*)(KBugReport*, bool);
    using KBugReport_SizeHint_Callback = QSize* (*)(const KBugReport*);
    using KBugReport_MinimumSizeHint_Callback = QSize* (*)(const KBugReport*);
    using KBugReport_Open_Callback = void (*)(KBugReport*);
    using KBugReport_Exec_Callback = int (*)(KBugReport*);
    using KBugReport_Done_Callback = void (*)(KBugReport*, int);
    using KBugReport_Reject_Callback = void (*)(KBugReport*);
    using KBugReport_KeyPressEvent_Callback = void (*)(KBugReport*, QKeyEvent*);
    using KBugReport_CloseEvent_Callback = void (*)(KBugReport*, QCloseEvent*);
    using KBugReport_ShowEvent_Callback = void (*)(KBugReport*, QShowEvent*);
    using KBugReport_ResizeEvent_Callback = void (*)(KBugReport*, QResizeEvent*);
    using KBugReport_ContextMenuEvent_Callback = void (*)(KBugReport*, QContextMenuEvent*);
    using KBugReport_EventFilter_Callback = bool (*)(KBugReport*, QObject*, QEvent*);
    using KBugReport_DevType_Callback = int (*)(const KBugReport*);
    using KBugReport_HeightForWidth_Callback = int (*)(const KBugReport*, int);
    using KBugReport_HasHeightForWidth_Callback = bool (*)(const KBugReport*);
    using KBugReport_PaintEngine_Callback = QPaintEngine* (*)(const KBugReport*);
    using KBugReport_Event_Callback = bool (*)(KBugReport*, QEvent*);
    using KBugReport_MousePressEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseReleaseEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseDoubleClickEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseMoveEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_WheelEvent_Callback = void (*)(KBugReport*, QWheelEvent*);
    using KBugReport_KeyReleaseEvent_Callback = void (*)(KBugReport*, QKeyEvent*);
    using KBugReport_FocusInEvent_Callback = void (*)(KBugReport*, QFocusEvent*);
    using KBugReport_FocusOutEvent_Callback = void (*)(KBugReport*, QFocusEvent*);
    using KBugReport_EnterEvent_Callback = void (*)(KBugReport*, QEnterEvent*);
    using KBugReport_LeaveEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_PaintEvent_Callback = void (*)(KBugReport*, QPaintEvent*);
    using KBugReport_MoveEvent_Callback = void (*)(KBugReport*, QMoveEvent*);
    using KBugReport_TabletEvent_Callback = void (*)(KBugReport*, QTabletEvent*);
    using KBugReport_ActionEvent_Callback = void (*)(KBugReport*, QActionEvent*);
    using KBugReport_DragEnterEvent_Callback = void (*)(KBugReport*, QDragEnterEvent*);
    using KBugReport_DragMoveEvent_Callback = void (*)(KBugReport*, QDragMoveEvent*);
    using KBugReport_DragLeaveEvent_Callback = void (*)(KBugReport*, QDragLeaveEvent*);
    using KBugReport_DropEvent_Callback = void (*)(KBugReport*, QDropEvent*);
    using KBugReport_HideEvent_Callback = void (*)(KBugReport*, QHideEvent*);
    using KBugReport_NativeEvent_Callback = bool (*)(KBugReport*, libqt_string, void*, intptr_t*);
    using KBugReport_ChangeEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_Metric_Callback = int (*)(const KBugReport*, int);
    using KBugReport_InitPainter_Callback = void (*)(const KBugReport*, QPainter*);
    using KBugReport_Redirected_Callback = QPaintDevice* (*)(const KBugReport*, QPoint*);
    using KBugReport_SharedPainter_Callback = QPainter* (*)(const KBugReport*);
    using KBugReport_InputMethodEvent_Callback = void (*)(KBugReport*, QInputMethodEvent*);
    using KBugReport_InputMethodQuery_Callback = QVariant* (*)(const KBugReport*, int);
    using KBugReport_FocusNextPrevChild_Callback = bool (*)(KBugReport*, bool);
    using KBugReport_TimerEvent_Callback = void (*)(KBugReport*, QTimerEvent*);
    using KBugReport_ChildEvent_Callback = void (*)(KBugReport*, QChildEvent*);
    using KBugReport_CustomEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_ConnectNotify_Callback = void (*)(KBugReport*, QMetaMethod*);
    using KBugReport_DisconnectNotify_Callback = void (*)(KBugReport*, QMetaMethod*);
    using KBugReport::adjustPosition;
    using KBugReport::create;
    using KBugReport::destroy;
    using KBugReport::focusNextChild;
    using KBugReport::focusPreviousChild;
    using KBugReport::getDecodedMetricF;
    using KBugReport::isSignalConnected;
    using KBugReport::receivers;
    using KBugReport::sendBugReport;
    using KBugReport::sender;
    using KBugReport::senderSignalIndex;
    using KBugReport::updateMicroFocus;

    // Instance callback storage
    KBugReport_MetaObject_Callback kbugreport_metaobject_callback = nullptr;
    KBugReport_Metacast_Callback kbugreport_metacast_callback = nullptr;
    KBugReport_Metacall_Callback kbugreport_metacall_callback = nullptr;
    KBugReport_Accept_Callback kbugreport_accept_callback = nullptr;
    KBugReport_SetVisible_Callback kbugreport_setvisible_callback = nullptr;
    KBugReport_SizeHint_Callback kbugreport_sizehint_callback = nullptr;
    KBugReport_MinimumSizeHint_Callback kbugreport_minimumsizehint_callback = nullptr;
    KBugReport_Open_Callback kbugreport_open_callback = nullptr;
    KBugReport_Exec_Callback kbugreport_exec_callback = nullptr;
    KBugReport_Done_Callback kbugreport_done_callback = nullptr;
    KBugReport_Reject_Callback kbugreport_reject_callback = nullptr;
    KBugReport_KeyPressEvent_Callback kbugreport_keypressevent_callback = nullptr;
    KBugReport_CloseEvent_Callback kbugreport_closeevent_callback = nullptr;
    KBugReport_ShowEvent_Callback kbugreport_showevent_callback = nullptr;
    KBugReport_ResizeEvent_Callback kbugreport_resizeevent_callback = nullptr;
    KBugReport_ContextMenuEvent_Callback kbugreport_contextmenuevent_callback = nullptr;
    KBugReport_EventFilter_Callback kbugreport_eventfilter_callback = nullptr;
    KBugReport_DevType_Callback kbugreport_devtype_callback = nullptr;
    KBugReport_HeightForWidth_Callback kbugreport_heightforwidth_callback = nullptr;
    KBugReport_HasHeightForWidth_Callback kbugreport_hasheightforwidth_callback = nullptr;
    KBugReport_PaintEngine_Callback kbugreport_paintengine_callback = nullptr;
    KBugReport_Event_Callback kbugreport_event_callback = nullptr;
    KBugReport_MousePressEvent_Callback kbugreport_mousepressevent_callback = nullptr;
    KBugReport_MouseReleaseEvent_Callback kbugreport_mousereleaseevent_callback = nullptr;
    KBugReport_MouseDoubleClickEvent_Callback kbugreport_mousedoubleclickevent_callback = nullptr;
    KBugReport_MouseMoveEvent_Callback kbugreport_mousemoveevent_callback = nullptr;
    KBugReport_WheelEvent_Callback kbugreport_wheelevent_callback = nullptr;
    KBugReport_KeyReleaseEvent_Callback kbugreport_keyreleaseevent_callback = nullptr;
    KBugReport_FocusInEvent_Callback kbugreport_focusinevent_callback = nullptr;
    KBugReport_FocusOutEvent_Callback kbugreport_focusoutevent_callback = nullptr;
    KBugReport_EnterEvent_Callback kbugreport_enterevent_callback = nullptr;
    KBugReport_LeaveEvent_Callback kbugreport_leaveevent_callback = nullptr;
    KBugReport_PaintEvent_Callback kbugreport_paintevent_callback = nullptr;
    KBugReport_MoveEvent_Callback kbugreport_moveevent_callback = nullptr;
    KBugReport_TabletEvent_Callback kbugreport_tabletevent_callback = nullptr;
    KBugReport_ActionEvent_Callback kbugreport_actionevent_callback = nullptr;
    KBugReport_DragEnterEvent_Callback kbugreport_dragenterevent_callback = nullptr;
    KBugReport_DragMoveEvent_Callback kbugreport_dragmoveevent_callback = nullptr;
    KBugReport_DragLeaveEvent_Callback kbugreport_dragleaveevent_callback = nullptr;
    KBugReport_DropEvent_Callback kbugreport_dropevent_callback = nullptr;
    KBugReport_HideEvent_Callback kbugreport_hideevent_callback = nullptr;
    KBugReport_NativeEvent_Callback kbugreport_nativeevent_callback = nullptr;
    KBugReport_ChangeEvent_Callback kbugreport_changeevent_callback = nullptr;
    KBugReport_Metric_Callback kbugreport_metric_callback = nullptr;
    KBugReport_InitPainter_Callback kbugreport_initpainter_callback = nullptr;
    KBugReport_Redirected_Callback kbugreport_redirected_callback = nullptr;
    KBugReport_SharedPainter_Callback kbugreport_sharedpainter_callback = nullptr;
    KBugReport_InputMethodEvent_Callback kbugreport_inputmethodevent_callback = nullptr;
    KBugReport_InputMethodQuery_Callback kbugreport_inputmethodquery_callback = nullptr;
    KBugReport_FocusNextPrevChild_Callback kbugreport_focusnextprevchild_callback = nullptr;
    KBugReport_TimerEvent_Callback kbugreport_timerevent_callback = nullptr;
    KBugReport_ChildEvent_Callback kbugreport_childevent_callback = nullptr;
    KBugReport_CustomEvent_Callback kbugreport_customevent_callback = nullptr;
    KBugReport_ConnectNotify_Callback kbugreport_connectnotify_callback = nullptr;
    KBugReport_DisconnectNotify_Callback kbugreport_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBugReport {
        using KBugReport::actionEvent;
        using KBugReport::changeEvent;
        using KBugReport::childEvent;
        using KBugReport::closeEvent;
        using KBugReport::connectNotify;
        using KBugReport::contextMenuEvent;
        using KBugReport::customEvent;
        using KBugReport::disconnectNotify;
        using KBugReport::dragEnterEvent;
        using KBugReport::dragLeaveEvent;
        using KBugReport::dragMoveEvent;
        using KBugReport::dropEvent;
        using KBugReport::enterEvent;
        using KBugReport::event;
        using KBugReport::eventFilter;
        using KBugReport::focusInEvent;
        using KBugReport::focusNextPrevChild;
        using KBugReport::focusOutEvent;
        using KBugReport::hideEvent;
        using KBugReport::initPainter;
        using KBugReport::inputMethodEvent;
        using KBugReport::keyPressEvent;
        using KBugReport::keyReleaseEvent;
        using KBugReport::leaveEvent;
        using KBugReport::metric;
        using KBugReport::mouseDoubleClickEvent;
        using KBugReport::mouseMoveEvent;
        using KBugReport::mousePressEvent;
        using KBugReport::mouseReleaseEvent;
        using KBugReport::moveEvent;
        using KBugReport::nativeEvent;
        using KBugReport::paintEvent;
        using KBugReport::redirected;
        using KBugReport::resizeEvent;
        using KBugReport::sharedPainter;
        using KBugReport::showEvent;
        using KBugReport::tabletEvent;
        using KBugReport::timerEvent;
        using KBugReport::wheelEvent;
    };

    VirtualKBugReport(const KAboutData& aboutData) : KBugReport(aboutData) {};
    VirtualKBugReport(const KAboutData& aboutData, QWidget* parent) : KBugReport(aboutData, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbugreport_metaobject_callback) {
            QMetaObject* callback_ret = kbugreport_metaobject_callback(this);
            return callback_ret;
        }
        return KBugReport::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbugreport_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbugreport_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBugReport::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbugreport_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbugreport_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBugReport::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kbugreport_accept_callback) {
            kbugreport_accept_callback(this);
            return;
        }
        KBugReport::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbugreport_setvisible_callback) {
            bool cbval1 = visible;
            kbugreport_setvisible_callback(this, cbval1);
            return;
        }
        KBugReport::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbugreport_sizehint_callback) {
            QSize* callback_ret = kbugreport_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBugReport::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbugreport_minimumsizehint_callback) {
            QSize* callback_ret = kbugreport_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBugReport::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kbugreport_open_callback) {
            kbugreport_open_callback(this);
            return;
        }
        KBugReport::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kbugreport_exec_callback) {
            int callback_ret = kbugreport_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBugReport::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kbugreport_done_callback) {
            int cbval1 = param1;
            kbugreport_done_callback(this, cbval1);
            return;
        }
        KBugReport::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kbugreport_reject_callback) {
            kbugreport_reject_callback(this);
            return;
        }
        KBugReport::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbugreport_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kbugreport_keypressevent_callback(this, cbval1);
            return;
        }
        KBugReport::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kbugreport_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kbugreport_closeevent_callback(this, cbval1);
            return;
        }
        KBugReport::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kbugreport_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kbugreport_showevent_callback(this, cbval1);
            return;
        }
        KBugReport::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kbugreport_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kbugreport_resizeevent_callback(this, cbval1);
            return;
        }
        KBugReport::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kbugreport_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kbugreport_contextmenuevent_callback(this, cbval1);
            return;
        }
        KBugReport::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbugreport_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kbugreport_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBugReport::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbugreport_devtype_callback) {
            int callback_ret = kbugreport_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBugReport::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbugreport_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kbugreport_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBugReport::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbugreport_hasheightforwidth_callback) {
            bool callback_ret = kbugreport_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KBugReport::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbugreport_paintengine_callback) {
            QPaintEngine* callback_ret = kbugreport_paintengine_callback(this);
            return callback_ret;
        }
        return KBugReport::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbugreport_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbugreport_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBugReport::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbugreport_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kbugreport_mousepressevent_callback(this, cbval1);
            return;
        }
        KBugReport::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbugreport_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kbugreport_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KBugReport::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbugreport_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kbugreport_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KBugReport::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbugreport_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kbugreport_mousemoveevent_callback(this, cbval1);
            return;
        }
        KBugReport::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbugreport_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kbugreport_wheelevent_callback(this, cbval1);
            return;
        }
        KBugReport::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbugreport_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kbugreport_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KBugReport::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbugreport_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kbugreport_focusinevent_callback(this, cbval1);
            return;
        }
        KBugReport::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbugreport_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kbugreport_focusoutevent_callback(this, cbval1);
            return;
        }
        KBugReport::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbugreport_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kbugreport_enterevent_callback(this, cbval1);
            return;
        }
        KBugReport::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbugreport_leaveevent_callback) {
            QEvent* cbval1 = event;
            kbugreport_leaveevent_callback(this, cbval1);
            return;
        }
        KBugReport::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kbugreport_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kbugreport_paintevent_callback(this, cbval1);
            return;
        }
        KBugReport::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbugreport_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kbugreport_moveevent_callback(this, cbval1);
            return;
        }
        KBugReport::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbugreport_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kbugreport_tabletevent_callback(this, cbval1);
            return;
        }
        KBugReport::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbugreport_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kbugreport_actionevent_callback(this, cbval1);
            return;
        }
        KBugReport::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbugreport_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kbugreport_dragenterevent_callback(this, cbval1);
            return;
        }
        KBugReport::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbugreport_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kbugreport_dragmoveevent_callback(this, cbval1);
            return;
        }
        KBugReport::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbugreport_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kbugreport_dragleaveevent_callback(this, cbval1);
            return;
        }
        KBugReport::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbugreport_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kbugreport_dropevent_callback(this, cbval1);
            return;
        }
        KBugReport::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbugreport_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kbugreport_hideevent_callback(this, cbval1);
            return;
        }
        KBugReport::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbugreport_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kbugreport_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KBugReport::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbugreport_changeevent_callback) {
            QEvent* cbval1 = param1;
            kbugreport_changeevent_callback(this, cbval1);
            return;
        }
        KBugReport::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbugreport_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kbugreport_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBugReport::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbugreport_initpainter_callback) {
            QPainter* cbval1 = painter;
            kbugreport_initpainter_callback(this, cbval1);
            return;
        }
        KBugReport::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbugreport_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kbugreport_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KBugReport::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbugreport_sharedpainter_callback) {
            QPainter* callback_ret = kbugreport_sharedpainter_callback(this);
            return callback_ret;
        }
        return KBugReport::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbugreport_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kbugreport_inputmethodevent_callback(this, cbval1);
            return;
        }
        KBugReport::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbugreport_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kbugreport_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBugReport::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbugreport_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kbugreport_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KBugReport::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbugreport_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbugreport_timerevent_callback(this, cbval1);
            return;
        }
        KBugReport::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbugreport_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbugreport_childevent_callback(this, cbval1);
            return;
        }
        KBugReport::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbugreport_customevent_callback) {
            QEvent* cbval1 = event;
            kbugreport_customevent_callback(this, cbval1);
            return;
        }
        KBugReport::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbugreport_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbugreport_connectnotify_callback(this, cbval1);
            return;
        }
        KBugReport::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbugreport_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbugreport_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBugReport::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBugReport_SuperKeyPressEvent(KBugReport* self, QKeyEvent* param1);
    friend void KBugReport_SuperCloseEvent(KBugReport* self, QCloseEvent* param1);
    friend void KBugReport_SuperShowEvent(KBugReport* self, QShowEvent* param1);
    friend void KBugReport_SuperResizeEvent(KBugReport* self, QResizeEvent* param1);
    friend void KBugReport_SuperContextMenuEvent(KBugReport* self, QContextMenuEvent* param1);
    friend bool KBugReport_SuperEventFilter(KBugReport* self, QObject* param1, QEvent* param2);
    friend bool KBugReport_SuperEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_SuperMousePressEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_SuperMouseReleaseEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_SuperMouseDoubleClickEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_SuperMouseMoveEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_SuperWheelEvent(KBugReport* self, QWheelEvent* event);
    friend void KBugReport_SuperKeyReleaseEvent(KBugReport* self, QKeyEvent* event);
    friend void KBugReport_SuperFocusInEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_SuperFocusOutEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_SuperEnterEvent(KBugReport* self, QEnterEvent* event);
    friend void KBugReport_SuperLeaveEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_SuperPaintEvent(KBugReport* self, QPaintEvent* event);
    friend void KBugReport_SuperMoveEvent(KBugReport* self, QMoveEvent* event);
    friend void KBugReport_SuperTabletEvent(KBugReport* self, QTabletEvent* event);
    friend void KBugReport_SuperActionEvent(KBugReport* self, QActionEvent* event);
    friend void KBugReport_SuperDragEnterEvent(KBugReport* self, QDragEnterEvent* event);
    friend void KBugReport_SuperDragMoveEvent(KBugReport* self, QDragMoveEvent* event);
    friend void KBugReport_SuperDragLeaveEvent(KBugReport* self, QDragLeaveEvent* event);
    friend void KBugReport_SuperDropEvent(KBugReport* self, QDropEvent* event);
    friend void KBugReport_SuperHideEvent(KBugReport* self, QHideEvent* event);
    friend bool KBugReport_SuperNativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBugReport_SuperChangeEvent(KBugReport* self, QEvent* param1);
    friend int KBugReport_SuperMetric(const KBugReport* self, int param1);
    friend void KBugReport_SuperInitPainter(const KBugReport* self, QPainter* painter);
    friend QPaintDevice* KBugReport_SuperRedirected(const KBugReport* self, QPoint* offset);
    friend QPainter* KBugReport_SuperSharedPainter(const KBugReport* self);
    friend void KBugReport_SuperInputMethodEvent(KBugReport* self, QInputMethodEvent* param1);
    friend bool KBugReport_SuperFocusNextPrevChild(KBugReport* self, bool next);
    friend void KBugReport_SuperTimerEvent(KBugReport* self, QTimerEvent* event);
    friend void KBugReport_SuperChildEvent(KBugReport* self, QChildEvent* event);
    friend void KBugReport_SuperCustomEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_SuperConnectNotify(KBugReport* self, const QMetaMethod* signal);
    friend void KBugReport_SuperDisconnectNotify(KBugReport* self, const QMetaMethod* signal);
};

#endif
