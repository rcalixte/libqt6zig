#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCAPACITYBAR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCAPACITYBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCapacityBar
class VirtualKCapacityBar final : public KCapacityBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCapacityBar_MetaObject_Callback = QMetaObject* (*)(const KCapacityBar*);
    using KCapacityBar_Metacast_Callback = void* (*)(KCapacityBar*, const char*);
    using KCapacityBar_Metacall_Callback = int (*)(KCapacityBar*, int, int, void**);
    using KCapacityBar_MinimumSizeHint_Callback = QSize* (*)(const KCapacityBar*);
    using KCapacityBar_PaintEvent_Callback = void (*)(KCapacityBar*, QPaintEvent*);
    using KCapacityBar_ChangeEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_DevType_Callback = int (*)(const KCapacityBar*);
    using KCapacityBar_SetVisible_Callback = void (*)(KCapacityBar*, bool);
    using KCapacityBar_SizeHint_Callback = QSize* (*)(const KCapacityBar*);
    using KCapacityBar_HeightForWidth_Callback = int (*)(const KCapacityBar*, int);
    using KCapacityBar_HasHeightForWidth_Callback = bool (*)(const KCapacityBar*);
    using KCapacityBar_PaintEngine_Callback = QPaintEngine* (*)(const KCapacityBar*);
    using KCapacityBar_Event_Callback = bool (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_MousePressEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseReleaseEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseDoubleClickEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseMoveEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_WheelEvent_Callback = void (*)(KCapacityBar*, QWheelEvent*);
    using KCapacityBar_KeyPressEvent_Callback = void (*)(KCapacityBar*, QKeyEvent*);
    using KCapacityBar_KeyReleaseEvent_Callback = void (*)(KCapacityBar*, QKeyEvent*);
    using KCapacityBar_FocusInEvent_Callback = void (*)(KCapacityBar*, QFocusEvent*);
    using KCapacityBar_FocusOutEvent_Callback = void (*)(KCapacityBar*, QFocusEvent*);
    using KCapacityBar_EnterEvent_Callback = void (*)(KCapacityBar*, QEnterEvent*);
    using KCapacityBar_LeaveEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_MoveEvent_Callback = void (*)(KCapacityBar*, QMoveEvent*);
    using KCapacityBar_ResizeEvent_Callback = void (*)(KCapacityBar*, QResizeEvent*);
    using KCapacityBar_CloseEvent_Callback = void (*)(KCapacityBar*, QCloseEvent*);
    using KCapacityBar_ContextMenuEvent_Callback = void (*)(KCapacityBar*, QContextMenuEvent*);
    using KCapacityBar_TabletEvent_Callback = void (*)(KCapacityBar*, QTabletEvent*);
    using KCapacityBar_ActionEvent_Callback = void (*)(KCapacityBar*, QActionEvent*);
    using KCapacityBar_DragEnterEvent_Callback = void (*)(KCapacityBar*, QDragEnterEvent*);
    using KCapacityBar_DragMoveEvent_Callback = void (*)(KCapacityBar*, QDragMoveEvent*);
    using KCapacityBar_DragLeaveEvent_Callback = void (*)(KCapacityBar*, QDragLeaveEvent*);
    using KCapacityBar_DropEvent_Callback = void (*)(KCapacityBar*, QDropEvent*);
    using KCapacityBar_ShowEvent_Callback = void (*)(KCapacityBar*, QShowEvent*);
    using KCapacityBar_HideEvent_Callback = void (*)(KCapacityBar*, QHideEvent*);
    using KCapacityBar_NativeEvent_Callback = bool (*)(KCapacityBar*, libqt_string, void*, intptr_t*);
    using KCapacityBar_Metric_Callback = int (*)(const KCapacityBar*, int);
    using KCapacityBar_InitPainter_Callback = void (*)(const KCapacityBar*, QPainter*);
    using KCapacityBar_Redirected_Callback = QPaintDevice* (*)(const KCapacityBar*, QPoint*);
    using KCapacityBar_SharedPainter_Callback = QPainter* (*)(const KCapacityBar*);
    using KCapacityBar_InputMethodEvent_Callback = void (*)(KCapacityBar*, QInputMethodEvent*);
    using KCapacityBar_InputMethodQuery_Callback = QVariant* (*)(const KCapacityBar*, int);
    using KCapacityBar_FocusNextPrevChild_Callback = bool (*)(KCapacityBar*, bool);
    using KCapacityBar_EventFilter_Callback = bool (*)(KCapacityBar*, QObject*, QEvent*);
    using KCapacityBar_TimerEvent_Callback = void (*)(KCapacityBar*, QTimerEvent*);
    using KCapacityBar_ChildEvent_Callback = void (*)(KCapacityBar*, QChildEvent*);
    using KCapacityBar_CustomEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_ConnectNotify_Callback = void (*)(KCapacityBar*, QMetaMethod*);
    using KCapacityBar_DisconnectNotify_Callback = void (*)(KCapacityBar*, QMetaMethod*);
    using KCapacityBar::create;
    using KCapacityBar::destroy;
    using KCapacityBar::focusNextChild;
    using KCapacityBar::focusPreviousChild;
    using KCapacityBar::getDecodedMetricF;
    using KCapacityBar::isSignalConnected;
    using KCapacityBar::receivers;
    using KCapacityBar::sender;
    using KCapacityBar::senderSignalIndex;
    using KCapacityBar::updateMicroFocus;

    // Instance callback storage
    KCapacityBar_MetaObject_Callback kcapacitybar_metaobject_callback = nullptr;
    KCapacityBar_Metacast_Callback kcapacitybar_metacast_callback = nullptr;
    KCapacityBar_Metacall_Callback kcapacitybar_metacall_callback = nullptr;
    KCapacityBar_MinimumSizeHint_Callback kcapacitybar_minimumsizehint_callback = nullptr;
    KCapacityBar_PaintEvent_Callback kcapacitybar_paintevent_callback = nullptr;
    KCapacityBar_ChangeEvent_Callback kcapacitybar_changeevent_callback = nullptr;
    KCapacityBar_DevType_Callback kcapacitybar_devtype_callback = nullptr;
    KCapacityBar_SetVisible_Callback kcapacitybar_setvisible_callback = nullptr;
    KCapacityBar_SizeHint_Callback kcapacitybar_sizehint_callback = nullptr;
    KCapacityBar_HeightForWidth_Callback kcapacitybar_heightforwidth_callback = nullptr;
    KCapacityBar_HasHeightForWidth_Callback kcapacitybar_hasheightforwidth_callback = nullptr;
    KCapacityBar_PaintEngine_Callback kcapacitybar_paintengine_callback = nullptr;
    KCapacityBar_Event_Callback kcapacitybar_event_callback = nullptr;
    KCapacityBar_MousePressEvent_Callback kcapacitybar_mousepressevent_callback = nullptr;
    KCapacityBar_MouseReleaseEvent_Callback kcapacitybar_mousereleaseevent_callback = nullptr;
    KCapacityBar_MouseDoubleClickEvent_Callback kcapacitybar_mousedoubleclickevent_callback = nullptr;
    KCapacityBar_MouseMoveEvent_Callback kcapacitybar_mousemoveevent_callback = nullptr;
    KCapacityBar_WheelEvent_Callback kcapacitybar_wheelevent_callback = nullptr;
    KCapacityBar_KeyPressEvent_Callback kcapacitybar_keypressevent_callback = nullptr;
    KCapacityBar_KeyReleaseEvent_Callback kcapacitybar_keyreleaseevent_callback = nullptr;
    KCapacityBar_FocusInEvent_Callback kcapacitybar_focusinevent_callback = nullptr;
    KCapacityBar_FocusOutEvent_Callback kcapacitybar_focusoutevent_callback = nullptr;
    KCapacityBar_EnterEvent_Callback kcapacitybar_enterevent_callback = nullptr;
    KCapacityBar_LeaveEvent_Callback kcapacitybar_leaveevent_callback = nullptr;
    KCapacityBar_MoveEvent_Callback kcapacitybar_moveevent_callback = nullptr;
    KCapacityBar_ResizeEvent_Callback kcapacitybar_resizeevent_callback = nullptr;
    KCapacityBar_CloseEvent_Callback kcapacitybar_closeevent_callback = nullptr;
    KCapacityBar_ContextMenuEvent_Callback kcapacitybar_contextmenuevent_callback = nullptr;
    KCapacityBar_TabletEvent_Callback kcapacitybar_tabletevent_callback = nullptr;
    KCapacityBar_ActionEvent_Callback kcapacitybar_actionevent_callback = nullptr;
    KCapacityBar_DragEnterEvent_Callback kcapacitybar_dragenterevent_callback = nullptr;
    KCapacityBar_DragMoveEvent_Callback kcapacitybar_dragmoveevent_callback = nullptr;
    KCapacityBar_DragLeaveEvent_Callback kcapacitybar_dragleaveevent_callback = nullptr;
    KCapacityBar_DropEvent_Callback kcapacitybar_dropevent_callback = nullptr;
    KCapacityBar_ShowEvent_Callback kcapacitybar_showevent_callback = nullptr;
    KCapacityBar_HideEvent_Callback kcapacitybar_hideevent_callback = nullptr;
    KCapacityBar_NativeEvent_Callback kcapacitybar_nativeevent_callback = nullptr;
    KCapacityBar_Metric_Callback kcapacitybar_metric_callback = nullptr;
    KCapacityBar_InitPainter_Callback kcapacitybar_initpainter_callback = nullptr;
    KCapacityBar_Redirected_Callback kcapacitybar_redirected_callback = nullptr;
    KCapacityBar_SharedPainter_Callback kcapacitybar_sharedpainter_callback = nullptr;
    KCapacityBar_InputMethodEvent_Callback kcapacitybar_inputmethodevent_callback = nullptr;
    KCapacityBar_InputMethodQuery_Callback kcapacitybar_inputmethodquery_callback = nullptr;
    KCapacityBar_FocusNextPrevChild_Callback kcapacitybar_focusnextprevchild_callback = nullptr;
    KCapacityBar_EventFilter_Callback kcapacitybar_eventfilter_callback = nullptr;
    KCapacityBar_TimerEvent_Callback kcapacitybar_timerevent_callback = nullptr;
    KCapacityBar_ChildEvent_Callback kcapacitybar_childevent_callback = nullptr;
    KCapacityBar_CustomEvent_Callback kcapacitybar_customevent_callback = nullptr;
    KCapacityBar_ConnectNotify_Callback kcapacitybar_connectnotify_callback = nullptr;
    KCapacityBar_DisconnectNotify_Callback kcapacitybar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCapacityBar {
        using KCapacityBar::actionEvent;
        using KCapacityBar::changeEvent;
        using KCapacityBar::childEvent;
        using KCapacityBar::closeEvent;
        using KCapacityBar::connectNotify;
        using KCapacityBar::contextMenuEvent;
        using KCapacityBar::customEvent;
        using KCapacityBar::disconnectNotify;
        using KCapacityBar::dragEnterEvent;
        using KCapacityBar::dragLeaveEvent;
        using KCapacityBar::dragMoveEvent;
        using KCapacityBar::dropEvent;
        using KCapacityBar::enterEvent;
        using KCapacityBar::event;
        using KCapacityBar::focusInEvent;
        using KCapacityBar::focusNextPrevChild;
        using KCapacityBar::focusOutEvent;
        using KCapacityBar::hideEvent;
        using KCapacityBar::initPainter;
        using KCapacityBar::inputMethodEvent;
        using KCapacityBar::keyPressEvent;
        using KCapacityBar::keyReleaseEvent;
        using KCapacityBar::leaveEvent;
        using KCapacityBar::metric;
        using KCapacityBar::mouseDoubleClickEvent;
        using KCapacityBar::mouseMoveEvent;
        using KCapacityBar::mousePressEvent;
        using KCapacityBar::mouseReleaseEvent;
        using KCapacityBar::moveEvent;
        using KCapacityBar::nativeEvent;
        using KCapacityBar::paintEvent;
        using KCapacityBar::redirected;
        using KCapacityBar::resizeEvent;
        using KCapacityBar::sharedPainter;
        using KCapacityBar::showEvent;
        using KCapacityBar::tabletEvent;
        using KCapacityBar::timerEvent;
        using KCapacityBar::wheelEvent;
    };

    VirtualKCapacityBar(QWidget* parent) : KCapacityBar(parent) {};
    VirtualKCapacityBar() : KCapacityBar() {};
    VirtualKCapacityBar(KCapacityBar::DrawTextMode drawTextMode) : KCapacityBar(drawTextMode) {};
    VirtualKCapacityBar(KCapacityBar::DrawTextMode drawTextMode, QWidget* parent) : KCapacityBar(drawTextMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcapacitybar_metaobject_callback) {
            QMetaObject* callback_ret = kcapacitybar_metaobject_callback(this);
            return callback_ret;
        }
        return KCapacityBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcapacitybar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcapacitybar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCapacityBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcapacitybar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcapacitybar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCapacityBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcapacitybar_minimumsizehint_callback) {
            QSize* callback_ret = kcapacitybar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCapacityBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcapacitybar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kcapacitybar_paintevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kcapacitybar_changeevent_callback) {
            QEvent* cbval1 = event;
            kcapacitybar_changeevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcapacitybar_devtype_callback) {
            int callback_ret = kcapacitybar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCapacityBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcapacitybar_setvisible_callback) {
            bool cbval1 = visible;
            kcapacitybar_setvisible_callback(this, cbval1);
            return;
        }
        KCapacityBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcapacitybar_sizehint_callback) {
            QSize* callback_ret = kcapacitybar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCapacityBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcapacitybar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcapacitybar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCapacityBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcapacitybar_hasheightforwidth_callback) {
            bool callback_ret = kcapacitybar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCapacityBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcapacitybar_paintengine_callback) {
            QPaintEngine* callback_ret = kcapacitybar_paintengine_callback(this);
            return callback_ret;
        }
        return KCapacityBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcapacitybar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcapacitybar_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCapacityBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kcapacitybar_mousepressevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kcapacitybar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcapacitybar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcapacitybar_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcapacitybar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcapacitybar_wheelevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcapacitybar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kcapacitybar_keypressevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcapacitybar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcapacitybar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcapacitybar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcapacitybar_focusinevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcapacitybar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcapacitybar_focusoutevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcapacitybar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcapacitybar_enterevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcapacitybar_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcapacitybar_leaveevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcapacitybar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcapacitybar_moveevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcapacitybar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcapacitybar_resizeevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcapacitybar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcapacitybar_closeevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcapacitybar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcapacitybar_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcapacitybar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcapacitybar_tabletevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcapacitybar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcapacitybar_actionevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcapacitybar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcapacitybar_dragenterevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcapacitybar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcapacitybar_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcapacitybar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcapacitybar_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcapacitybar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcapacitybar_dropevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcapacitybar_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcapacitybar_showevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcapacitybar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcapacitybar_hideevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcapacitybar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcapacitybar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCapacityBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcapacitybar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcapacitybar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCapacityBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcapacitybar_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcapacitybar_initpainter_callback(this, cbval1);
            return;
        }
        KCapacityBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcapacitybar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcapacitybar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCapacityBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcapacitybar_sharedpainter_callback) {
            QPainter* callback_ret = kcapacitybar_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCapacityBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcapacitybar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcapacitybar_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcapacitybar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcapacitybar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCapacityBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcapacitybar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcapacitybar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCapacityBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcapacitybar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcapacitybar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCapacityBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcapacitybar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcapacitybar_timerevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcapacitybar_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcapacitybar_childevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcapacitybar_customevent_callback) {
            QEvent* cbval1 = event;
            kcapacitybar_customevent_callback(this, cbval1);
            return;
        }
        KCapacityBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcapacitybar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcapacitybar_connectnotify_callback(this, cbval1);
            return;
        }
        KCapacityBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcapacitybar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcapacitybar_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCapacityBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCapacityBar_SuperPaintEvent(KCapacityBar* self, QPaintEvent* event);
    friend void KCapacityBar_SuperChangeEvent(KCapacityBar* self, QEvent* event);
    friend bool KCapacityBar_SuperEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_SuperMousePressEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_SuperMouseReleaseEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_SuperMouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_SuperMouseMoveEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_SuperWheelEvent(KCapacityBar* self, QWheelEvent* event);
    friend void KCapacityBar_SuperKeyPressEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_SuperKeyReleaseEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_SuperFocusInEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_SuperFocusOutEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_SuperEnterEvent(KCapacityBar* self, QEnterEvent* event);
    friend void KCapacityBar_SuperLeaveEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_SuperMoveEvent(KCapacityBar* self, QMoveEvent* event);
    friend void KCapacityBar_SuperResizeEvent(KCapacityBar* self, QResizeEvent* event);
    friend void KCapacityBar_SuperCloseEvent(KCapacityBar* self, QCloseEvent* event);
    friend void KCapacityBar_SuperContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event);
    friend void KCapacityBar_SuperTabletEvent(KCapacityBar* self, QTabletEvent* event);
    friend void KCapacityBar_SuperActionEvent(KCapacityBar* self, QActionEvent* event);
    friend void KCapacityBar_SuperDragEnterEvent(KCapacityBar* self, QDragEnterEvent* event);
    friend void KCapacityBar_SuperDragMoveEvent(KCapacityBar* self, QDragMoveEvent* event);
    friend void KCapacityBar_SuperDragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event);
    friend void KCapacityBar_SuperDropEvent(KCapacityBar* self, QDropEvent* event);
    friend void KCapacityBar_SuperShowEvent(KCapacityBar* self, QShowEvent* event);
    friend void KCapacityBar_SuperHideEvent(KCapacityBar* self, QHideEvent* event);
    friend bool KCapacityBar_SuperNativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCapacityBar_SuperMetric(const KCapacityBar* self, int param1);
    friend void KCapacityBar_SuperInitPainter(const KCapacityBar* self, QPainter* painter);
    friend QPaintDevice* KCapacityBar_SuperRedirected(const KCapacityBar* self, QPoint* offset);
    friend QPainter* KCapacityBar_SuperSharedPainter(const KCapacityBar* self);
    friend void KCapacityBar_SuperInputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1);
    friend bool KCapacityBar_SuperFocusNextPrevChild(KCapacityBar* self, bool next);
    friend void KCapacityBar_SuperTimerEvent(KCapacityBar* self, QTimerEvent* event);
    friend void KCapacityBar_SuperChildEvent(KCapacityBar* self, QChildEvent* event);
    friend void KCapacityBar_SuperCustomEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_SuperConnectNotify(KCapacityBar* self, const QMetaMethod* signal);
    friend void KCapacityBar_SuperDisconnectNotify(KCapacityBar* self, const QMetaMethod* signal);
};

#endif
