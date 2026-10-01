#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKEDITTOOLBAR_HXX
#define EXTRAS_KXMLGUI_LIBKEDITTOOLBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEditToolBar
class VirtualKEditToolBar final : public KEditToolBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KEditToolBar_MetaObject_Callback = QMetaObject* (*)(const KEditToolBar*);
    using KEditToolBar_Metacast_Callback = void* (*)(KEditToolBar*, const char*);
    using KEditToolBar_Metacall_Callback = int (*)(KEditToolBar*, int, int, void**);
    using KEditToolBar_ShowEvent_Callback = void (*)(KEditToolBar*, QShowEvent*);
    using KEditToolBar_HideEvent_Callback = void (*)(KEditToolBar*, QHideEvent*);
    using KEditToolBar_SetVisible_Callback = void (*)(KEditToolBar*, bool);
    using KEditToolBar_SizeHint_Callback = QSize* (*)(const KEditToolBar*);
    using KEditToolBar_MinimumSizeHint_Callback = QSize* (*)(const KEditToolBar*);
    using KEditToolBar_Open_Callback = void (*)(KEditToolBar*);
    using KEditToolBar_Exec_Callback = int (*)(KEditToolBar*);
    using KEditToolBar_Done_Callback = void (*)(KEditToolBar*, int);
    using KEditToolBar_Accept_Callback = void (*)(KEditToolBar*);
    using KEditToolBar_Reject_Callback = void (*)(KEditToolBar*);
    using KEditToolBar_KeyPressEvent_Callback = void (*)(KEditToolBar*, QKeyEvent*);
    using KEditToolBar_CloseEvent_Callback = void (*)(KEditToolBar*, QCloseEvent*);
    using KEditToolBar_ResizeEvent_Callback = void (*)(KEditToolBar*, QResizeEvent*);
    using KEditToolBar_ContextMenuEvent_Callback = void (*)(KEditToolBar*, QContextMenuEvent*);
    using KEditToolBar_EventFilter_Callback = bool (*)(KEditToolBar*, QObject*, QEvent*);
    using KEditToolBar_DevType_Callback = int (*)(const KEditToolBar*);
    using KEditToolBar_HeightForWidth_Callback = int (*)(const KEditToolBar*, int);
    using KEditToolBar_HasHeightForWidth_Callback = bool (*)(const KEditToolBar*);
    using KEditToolBar_PaintEngine_Callback = QPaintEngine* (*)(const KEditToolBar*);
    using KEditToolBar_Event_Callback = bool (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_MousePressEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseReleaseEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseDoubleClickEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseMoveEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_WheelEvent_Callback = void (*)(KEditToolBar*, QWheelEvent*);
    using KEditToolBar_KeyReleaseEvent_Callback = void (*)(KEditToolBar*, QKeyEvent*);
    using KEditToolBar_FocusInEvent_Callback = void (*)(KEditToolBar*, QFocusEvent*);
    using KEditToolBar_FocusOutEvent_Callback = void (*)(KEditToolBar*, QFocusEvent*);
    using KEditToolBar_EnterEvent_Callback = void (*)(KEditToolBar*, QEnterEvent*);
    using KEditToolBar_LeaveEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_PaintEvent_Callback = void (*)(KEditToolBar*, QPaintEvent*);
    using KEditToolBar_MoveEvent_Callback = void (*)(KEditToolBar*, QMoveEvent*);
    using KEditToolBar_TabletEvent_Callback = void (*)(KEditToolBar*, QTabletEvent*);
    using KEditToolBar_ActionEvent_Callback = void (*)(KEditToolBar*, QActionEvent*);
    using KEditToolBar_DragEnterEvent_Callback = void (*)(KEditToolBar*, QDragEnterEvent*);
    using KEditToolBar_DragMoveEvent_Callback = void (*)(KEditToolBar*, QDragMoveEvent*);
    using KEditToolBar_DragLeaveEvent_Callback = void (*)(KEditToolBar*, QDragLeaveEvent*);
    using KEditToolBar_DropEvent_Callback = void (*)(KEditToolBar*, QDropEvent*);
    using KEditToolBar_NativeEvent_Callback = bool (*)(KEditToolBar*, libqt_string, void*, intptr_t*);
    using KEditToolBar_ChangeEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_Metric_Callback = int (*)(const KEditToolBar*, int);
    using KEditToolBar_InitPainter_Callback = void (*)(const KEditToolBar*, QPainter*);
    using KEditToolBar_Redirected_Callback = QPaintDevice* (*)(const KEditToolBar*, QPoint*);
    using KEditToolBar_SharedPainter_Callback = QPainter* (*)(const KEditToolBar*);
    using KEditToolBar_InputMethodEvent_Callback = void (*)(KEditToolBar*, QInputMethodEvent*);
    using KEditToolBar_InputMethodQuery_Callback = QVariant* (*)(const KEditToolBar*, int);
    using KEditToolBar_FocusNextPrevChild_Callback = bool (*)(KEditToolBar*, bool);
    using KEditToolBar_TimerEvent_Callback = void (*)(KEditToolBar*, QTimerEvent*);
    using KEditToolBar_ChildEvent_Callback = void (*)(KEditToolBar*, QChildEvent*);
    using KEditToolBar_CustomEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_ConnectNotify_Callback = void (*)(KEditToolBar*, QMetaMethod*);
    using KEditToolBar_DisconnectNotify_Callback = void (*)(KEditToolBar*, QMetaMethod*);
    using KEditToolBar::adjustPosition;
    using KEditToolBar::create;
    using KEditToolBar::destroy;
    using KEditToolBar::focusNextChild;
    using KEditToolBar::focusPreviousChild;
    using KEditToolBar::getDecodedMetricF;
    using KEditToolBar::isSignalConnected;
    using KEditToolBar::receivers;
    using KEditToolBar::sender;
    using KEditToolBar::senderSignalIndex;
    using KEditToolBar::updateMicroFocus;

    // Instance callback storage
    KEditToolBar_MetaObject_Callback kedittoolbar_metaobject_callback = nullptr;
    KEditToolBar_Metacast_Callback kedittoolbar_metacast_callback = nullptr;
    KEditToolBar_Metacall_Callback kedittoolbar_metacall_callback = nullptr;
    KEditToolBar_ShowEvent_Callback kedittoolbar_showevent_callback = nullptr;
    KEditToolBar_HideEvent_Callback kedittoolbar_hideevent_callback = nullptr;
    KEditToolBar_SetVisible_Callback kedittoolbar_setvisible_callback = nullptr;
    KEditToolBar_SizeHint_Callback kedittoolbar_sizehint_callback = nullptr;
    KEditToolBar_MinimumSizeHint_Callback kedittoolbar_minimumsizehint_callback = nullptr;
    KEditToolBar_Open_Callback kedittoolbar_open_callback = nullptr;
    KEditToolBar_Exec_Callback kedittoolbar_exec_callback = nullptr;
    KEditToolBar_Done_Callback kedittoolbar_done_callback = nullptr;
    KEditToolBar_Accept_Callback kedittoolbar_accept_callback = nullptr;
    KEditToolBar_Reject_Callback kedittoolbar_reject_callback = nullptr;
    KEditToolBar_KeyPressEvent_Callback kedittoolbar_keypressevent_callback = nullptr;
    KEditToolBar_CloseEvent_Callback kedittoolbar_closeevent_callback = nullptr;
    KEditToolBar_ResizeEvent_Callback kedittoolbar_resizeevent_callback = nullptr;
    KEditToolBar_ContextMenuEvent_Callback kedittoolbar_contextmenuevent_callback = nullptr;
    KEditToolBar_EventFilter_Callback kedittoolbar_eventfilter_callback = nullptr;
    KEditToolBar_DevType_Callback kedittoolbar_devtype_callback = nullptr;
    KEditToolBar_HeightForWidth_Callback kedittoolbar_heightforwidth_callback = nullptr;
    KEditToolBar_HasHeightForWidth_Callback kedittoolbar_hasheightforwidth_callback = nullptr;
    KEditToolBar_PaintEngine_Callback kedittoolbar_paintengine_callback = nullptr;
    KEditToolBar_Event_Callback kedittoolbar_event_callback = nullptr;
    KEditToolBar_MousePressEvent_Callback kedittoolbar_mousepressevent_callback = nullptr;
    KEditToolBar_MouseReleaseEvent_Callback kedittoolbar_mousereleaseevent_callback = nullptr;
    KEditToolBar_MouseDoubleClickEvent_Callback kedittoolbar_mousedoubleclickevent_callback = nullptr;
    KEditToolBar_MouseMoveEvent_Callback kedittoolbar_mousemoveevent_callback = nullptr;
    KEditToolBar_WheelEvent_Callback kedittoolbar_wheelevent_callback = nullptr;
    KEditToolBar_KeyReleaseEvent_Callback kedittoolbar_keyreleaseevent_callback = nullptr;
    KEditToolBar_FocusInEvent_Callback kedittoolbar_focusinevent_callback = nullptr;
    KEditToolBar_FocusOutEvent_Callback kedittoolbar_focusoutevent_callback = nullptr;
    KEditToolBar_EnterEvent_Callback kedittoolbar_enterevent_callback = nullptr;
    KEditToolBar_LeaveEvent_Callback kedittoolbar_leaveevent_callback = nullptr;
    KEditToolBar_PaintEvent_Callback kedittoolbar_paintevent_callback = nullptr;
    KEditToolBar_MoveEvent_Callback kedittoolbar_moveevent_callback = nullptr;
    KEditToolBar_TabletEvent_Callback kedittoolbar_tabletevent_callback = nullptr;
    KEditToolBar_ActionEvent_Callback kedittoolbar_actionevent_callback = nullptr;
    KEditToolBar_DragEnterEvent_Callback kedittoolbar_dragenterevent_callback = nullptr;
    KEditToolBar_DragMoveEvent_Callback kedittoolbar_dragmoveevent_callback = nullptr;
    KEditToolBar_DragLeaveEvent_Callback kedittoolbar_dragleaveevent_callback = nullptr;
    KEditToolBar_DropEvent_Callback kedittoolbar_dropevent_callback = nullptr;
    KEditToolBar_NativeEvent_Callback kedittoolbar_nativeevent_callback = nullptr;
    KEditToolBar_ChangeEvent_Callback kedittoolbar_changeevent_callback = nullptr;
    KEditToolBar_Metric_Callback kedittoolbar_metric_callback = nullptr;
    KEditToolBar_InitPainter_Callback kedittoolbar_initpainter_callback = nullptr;
    KEditToolBar_Redirected_Callback kedittoolbar_redirected_callback = nullptr;
    KEditToolBar_SharedPainter_Callback kedittoolbar_sharedpainter_callback = nullptr;
    KEditToolBar_InputMethodEvent_Callback kedittoolbar_inputmethodevent_callback = nullptr;
    KEditToolBar_InputMethodQuery_Callback kedittoolbar_inputmethodquery_callback = nullptr;
    KEditToolBar_FocusNextPrevChild_Callback kedittoolbar_focusnextprevchild_callback = nullptr;
    KEditToolBar_TimerEvent_Callback kedittoolbar_timerevent_callback = nullptr;
    KEditToolBar_ChildEvent_Callback kedittoolbar_childevent_callback = nullptr;
    KEditToolBar_CustomEvent_Callback kedittoolbar_customevent_callback = nullptr;
    KEditToolBar_ConnectNotify_Callback kedittoolbar_connectnotify_callback = nullptr;
    KEditToolBar_DisconnectNotify_Callback kedittoolbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KEditToolBar {
        using KEditToolBar::actionEvent;
        using KEditToolBar::changeEvent;
        using KEditToolBar::childEvent;
        using KEditToolBar::closeEvent;
        using KEditToolBar::connectNotify;
        using KEditToolBar::contextMenuEvent;
        using KEditToolBar::customEvent;
        using KEditToolBar::disconnectNotify;
        using KEditToolBar::dragEnterEvent;
        using KEditToolBar::dragLeaveEvent;
        using KEditToolBar::dragMoveEvent;
        using KEditToolBar::dropEvent;
        using KEditToolBar::enterEvent;
        using KEditToolBar::event;
        using KEditToolBar::eventFilter;
        using KEditToolBar::focusInEvent;
        using KEditToolBar::focusNextPrevChild;
        using KEditToolBar::focusOutEvent;
        using KEditToolBar::hideEvent;
        using KEditToolBar::initPainter;
        using KEditToolBar::inputMethodEvent;
        using KEditToolBar::keyPressEvent;
        using KEditToolBar::keyReleaseEvent;
        using KEditToolBar::leaveEvent;
        using KEditToolBar::metric;
        using KEditToolBar::mouseDoubleClickEvent;
        using KEditToolBar::mouseMoveEvent;
        using KEditToolBar::mousePressEvent;
        using KEditToolBar::mouseReleaseEvent;
        using KEditToolBar::moveEvent;
        using KEditToolBar::nativeEvent;
        using KEditToolBar::paintEvent;
        using KEditToolBar::redirected;
        using KEditToolBar::resizeEvent;
        using KEditToolBar::sharedPainter;
        using KEditToolBar::showEvent;
        using KEditToolBar::tabletEvent;
        using KEditToolBar::timerEvent;
        using KEditToolBar::wheelEvent;
    };

    VirtualKEditToolBar(KActionCollection* collection) : KEditToolBar(collection) {};
    VirtualKEditToolBar(KXMLGUIFactory* factory) : KEditToolBar(factory) {};
    VirtualKEditToolBar(KActionCollection* collection, QWidget* parent) : KEditToolBar(collection, parent) {};
    VirtualKEditToolBar(KXMLGUIFactory* factory, QWidget* parent) : KEditToolBar(factory, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kedittoolbar_metaobject_callback) {
            QMetaObject* callback_ret = kedittoolbar_metaobject_callback(this);
            return callback_ret;
        }
        return KEditToolBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kedittoolbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kedittoolbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kedittoolbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kedittoolbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kedittoolbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            kedittoolbar_showevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kedittoolbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kedittoolbar_hideevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kedittoolbar_setvisible_callback) {
            bool cbval1 = visible;
            kedittoolbar_setvisible_callback(this, cbval1);
            return;
        }
        KEditToolBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kedittoolbar_sizehint_callback) {
            QSize* callback_ret = kedittoolbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditToolBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kedittoolbar_minimumsizehint_callback) {
            QSize* callback_ret = kedittoolbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditToolBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kedittoolbar_open_callback) {
            kedittoolbar_open_callback(this);
            return;
        }
        KEditToolBar::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kedittoolbar_exec_callback) {
            int callback_ret = kedittoolbar_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kedittoolbar_done_callback) {
            int cbval1 = param1;
            kedittoolbar_done_callback(this, cbval1);
            return;
        }
        KEditToolBar::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kedittoolbar_accept_callback) {
            kedittoolbar_accept_callback(this);
            return;
        }
        KEditToolBar::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kedittoolbar_reject_callback) {
            kedittoolbar_reject_callback(this);
            return;
        }
        KEditToolBar::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kedittoolbar_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kedittoolbar_keypressevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kedittoolbar_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kedittoolbar_closeevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kedittoolbar_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kedittoolbar_resizeevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kedittoolbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kedittoolbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kedittoolbar_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kedittoolbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEditToolBar::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kedittoolbar_devtype_callback) {
            int callback_ret = kedittoolbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kedittoolbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kedittoolbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kedittoolbar_hasheightforwidth_callback) {
            bool callback_ret = kedittoolbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KEditToolBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kedittoolbar_paintengine_callback) {
            QPaintEngine* callback_ret = kedittoolbar_paintengine_callback(this);
            return callback_ret;
        }
        return KEditToolBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kedittoolbar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kedittoolbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kedittoolbar_mousepressevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kedittoolbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kedittoolbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kedittoolbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kedittoolbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kedittoolbar_wheelevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kedittoolbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kedittoolbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kedittoolbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kedittoolbar_focusinevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kedittoolbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kedittoolbar_focusoutevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kedittoolbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kedittoolbar_enterevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kedittoolbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            kedittoolbar_leaveevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kedittoolbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kedittoolbar_paintevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kedittoolbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kedittoolbar_moveevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kedittoolbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kedittoolbar_tabletevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kedittoolbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kedittoolbar_actionevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kedittoolbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kedittoolbar_dragenterevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kedittoolbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kedittoolbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kedittoolbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kedittoolbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kedittoolbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kedittoolbar_dropevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kedittoolbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kedittoolbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KEditToolBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kedittoolbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            kedittoolbar_changeevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kedittoolbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kedittoolbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kedittoolbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            kedittoolbar_initpainter_callback(this, cbval1);
            return;
        }
        KEditToolBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kedittoolbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kedittoolbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kedittoolbar_sharedpainter_callback) {
            QPainter* callback_ret = kedittoolbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return KEditToolBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kedittoolbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kedittoolbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kedittoolbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kedittoolbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditToolBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kedittoolbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kedittoolbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kedittoolbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kedittoolbar_timerevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kedittoolbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            kedittoolbar_childevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kedittoolbar_customevent_callback) {
            QEvent* cbval1 = event;
            kedittoolbar_customevent_callback(this, cbval1);
            return;
        }
        KEditToolBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kedittoolbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kedittoolbar_connectnotify_callback(this, cbval1);
            return;
        }
        KEditToolBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kedittoolbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kedittoolbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        KEditToolBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void KEditToolBar_SuperShowEvent(KEditToolBar* self, QShowEvent* event);
    friend void KEditToolBar_SuperHideEvent(KEditToolBar* self, QHideEvent* event);
    friend void KEditToolBar_SuperKeyPressEvent(KEditToolBar* self, QKeyEvent* param1);
    friend void KEditToolBar_SuperCloseEvent(KEditToolBar* self, QCloseEvent* param1);
    friend void KEditToolBar_SuperResizeEvent(KEditToolBar* self, QResizeEvent* param1);
    friend void KEditToolBar_SuperContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1);
    friend bool KEditToolBar_SuperEventFilter(KEditToolBar* self, QObject* param1, QEvent* param2);
    friend bool KEditToolBar_SuperEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_SuperMousePressEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseReleaseEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseMoveEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperWheelEvent(KEditToolBar* self, QWheelEvent* event);
    friend void KEditToolBar_SuperKeyReleaseEvent(KEditToolBar* self, QKeyEvent* event);
    friend void KEditToolBar_SuperFocusInEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_SuperFocusOutEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_SuperEnterEvent(KEditToolBar* self, QEnterEvent* event);
    friend void KEditToolBar_SuperLeaveEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_SuperPaintEvent(KEditToolBar* self, QPaintEvent* event);
    friend void KEditToolBar_SuperMoveEvent(KEditToolBar* self, QMoveEvent* event);
    friend void KEditToolBar_SuperTabletEvent(KEditToolBar* self, QTabletEvent* event);
    friend void KEditToolBar_SuperActionEvent(KEditToolBar* self, QActionEvent* event);
    friend void KEditToolBar_SuperDragEnterEvent(KEditToolBar* self, QDragEnterEvent* event);
    friend void KEditToolBar_SuperDragMoveEvent(KEditToolBar* self, QDragMoveEvent* event);
    friend void KEditToolBar_SuperDragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event);
    friend void KEditToolBar_SuperDropEvent(KEditToolBar* self, QDropEvent* event);
    friend bool KEditToolBar_SuperNativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KEditToolBar_SuperChangeEvent(KEditToolBar* self, QEvent* param1);
    friend int KEditToolBar_SuperMetric(const KEditToolBar* self, int param1);
    friend void KEditToolBar_SuperInitPainter(const KEditToolBar* self, QPainter* painter);
    friend QPaintDevice* KEditToolBar_SuperRedirected(const KEditToolBar* self, QPoint* offset);
    friend QPainter* KEditToolBar_SuperSharedPainter(const KEditToolBar* self);
    friend void KEditToolBar_SuperInputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1);
    friend bool KEditToolBar_SuperFocusNextPrevChild(KEditToolBar* self, bool next);
    friend void KEditToolBar_SuperTimerEvent(KEditToolBar* self, QTimerEvent* event);
    friend void KEditToolBar_SuperChildEvent(KEditToolBar* self, QChildEvent* event);
    friend void KEditToolBar_SuperCustomEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_SuperConnectNotify(KEditToolBar* self, const QMetaMethod* signal);
    friend void KEditToolBar_SuperDisconnectNotify(KEditToolBar* self, const QMetaMethod* signal);
};

#endif
