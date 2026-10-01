#pragma once
#ifndef LIBQLCDNUMBER_HXX
#define LIBQLCDNUMBER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLCDNumber
class VirtualQLCDNumber final : public QLCDNumber {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLCDNumber_MetaObject_Callback = QMetaObject* (*)(const QLCDNumber*);
    using QLCDNumber_Metacast_Callback = void* (*)(QLCDNumber*, const char*);
    using QLCDNumber_Metacall_Callback = int (*)(QLCDNumber*, int, int, void**);
    using QLCDNumber_SizeHint_Callback = QSize* (*)(const QLCDNumber*);
    using QLCDNumber_Event_Callback = bool (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_PaintEvent_Callback = void (*)(QLCDNumber*, QPaintEvent*);
    using QLCDNumber_ChangeEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_InitStyleOption_Callback = void (*)(const QLCDNumber*, QStyleOptionFrame*);
    using QLCDNumber_DevType_Callback = int (*)(const QLCDNumber*);
    using QLCDNumber_SetVisible_Callback = void (*)(QLCDNumber*, bool);
    using QLCDNumber_MinimumSizeHint_Callback = QSize* (*)(const QLCDNumber*);
    using QLCDNumber_HeightForWidth_Callback = int (*)(const QLCDNumber*, int);
    using QLCDNumber_HasHeightForWidth_Callback = bool (*)(const QLCDNumber*);
    using QLCDNumber_PaintEngine_Callback = QPaintEngine* (*)(const QLCDNumber*);
    using QLCDNumber_MousePressEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseReleaseEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseDoubleClickEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseMoveEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_WheelEvent_Callback = void (*)(QLCDNumber*, QWheelEvent*);
    using QLCDNumber_KeyPressEvent_Callback = void (*)(QLCDNumber*, QKeyEvent*);
    using QLCDNumber_KeyReleaseEvent_Callback = void (*)(QLCDNumber*, QKeyEvent*);
    using QLCDNumber_FocusInEvent_Callback = void (*)(QLCDNumber*, QFocusEvent*);
    using QLCDNumber_FocusOutEvent_Callback = void (*)(QLCDNumber*, QFocusEvent*);
    using QLCDNumber_EnterEvent_Callback = void (*)(QLCDNumber*, QEnterEvent*);
    using QLCDNumber_LeaveEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_MoveEvent_Callback = void (*)(QLCDNumber*, QMoveEvent*);
    using QLCDNumber_ResizeEvent_Callback = void (*)(QLCDNumber*, QResizeEvent*);
    using QLCDNumber_CloseEvent_Callback = void (*)(QLCDNumber*, QCloseEvent*);
    using QLCDNumber_ContextMenuEvent_Callback = void (*)(QLCDNumber*, QContextMenuEvent*);
    using QLCDNumber_TabletEvent_Callback = void (*)(QLCDNumber*, QTabletEvent*);
    using QLCDNumber_ActionEvent_Callback = void (*)(QLCDNumber*, QActionEvent*);
    using QLCDNumber_DragEnterEvent_Callback = void (*)(QLCDNumber*, QDragEnterEvent*);
    using QLCDNumber_DragMoveEvent_Callback = void (*)(QLCDNumber*, QDragMoveEvent*);
    using QLCDNumber_DragLeaveEvent_Callback = void (*)(QLCDNumber*, QDragLeaveEvent*);
    using QLCDNumber_DropEvent_Callback = void (*)(QLCDNumber*, QDropEvent*);
    using QLCDNumber_ShowEvent_Callback = void (*)(QLCDNumber*, QShowEvent*);
    using QLCDNumber_HideEvent_Callback = void (*)(QLCDNumber*, QHideEvent*);
    using QLCDNumber_NativeEvent_Callback = bool (*)(QLCDNumber*, libqt_string, void*, intptr_t*);
    using QLCDNumber_Metric_Callback = int (*)(const QLCDNumber*, int);
    using QLCDNumber_InitPainter_Callback = void (*)(const QLCDNumber*, QPainter*);
    using QLCDNumber_Redirected_Callback = QPaintDevice* (*)(const QLCDNumber*, QPoint*);
    using QLCDNumber_SharedPainter_Callback = QPainter* (*)(const QLCDNumber*);
    using QLCDNumber_InputMethodEvent_Callback = void (*)(QLCDNumber*, QInputMethodEvent*);
    using QLCDNumber_InputMethodQuery_Callback = QVariant* (*)(const QLCDNumber*, int);
    using QLCDNumber_FocusNextPrevChild_Callback = bool (*)(QLCDNumber*, bool);
    using QLCDNumber_EventFilter_Callback = bool (*)(QLCDNumber*, QObject*, QEvent*);
    using QLCDNumber_TimerEvent_Callback = void (*)(QLCDNumber*, QTimerEvent*);
    using QLCDNumber_ChildEvent_Callback = void (*)(QLCDNumber*, QChildEvent*);
    using QLCDNumber_CustomEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_ConnectNotify_Callback = void (*)(QLCDNumber*, QMetaMethod*);
    using QLCDNumber_DisconnectNotify_Callback = void (*)(QLCDNumber*, QMetaMethod*);
    using QLCDNumber::create;
    using QLCDNumber::destroy;
    using QLCDNumber::drawFrame;
    using QLCDNumber::focusNextChild;
    using QLCDNumber::focusPreviousChild;
    using QLCDNumber::getDecodedMetricF;
    using QLCDNumber::isSignalConnected;
    using QLCDNumber::receivers;
    using QLCDNumber::sender;
    using QLCDNumber::senderSignalIndex;
    using QLCDNumber::updateMicroFocus;

    // Instance callback storage
    QLCDNumber_MetaObject_Callback qlcdnumber_metaobject_callback = nullptr;
    QLCDNumber_Metacast_Callback qlcdnumber_metacast_callback = nullptr;
    QLCDNumber_Metacall_Callback qlcdnumber_metacall_callback = nullptr;
    QLCDNumber_SizeHint_Callback qlcdnumber_sizehint_callback = nullptr;
    QLCDNumber_Event_Callback qlcdnumber_event_callback = nullptr;
    QLCDNumber_PaintEvent_Callback qlcdnumber_paintevent_callback = nullptr;
    QLCDNumber_ChangeEvent_Callback qlcdnumber_changeevent_callback = nullptr;
    QLCDNumber_InitStyleOption_Callback qlcdnumber_initstyleoption_callback = nullptr;
    QLCDNumber_DevType_Callback qlcdnumber_devtype_callback = nullptr;
    QLCDNumber_SetVisible_Callback qlcdnumber_setvisible_callback = nullptr;
    QLCDNumber_MinimumSizeHint_Callback qlcdnumber_minimumsizehint_callback = nullptr;
    QLCDNumber_HeightForWidth_Callback qlcdnumber_heightforwidth_callback = nullptr;
    QLCDNumber_HasHeightForWidth_Callback qlcdnumber_hasheightforwidth_callback = nullptr;
    QLCDNumber_PaintEngine_Callback qlcdnumber_paintengine_callback = nullptr;
    QLCDNumber_MousePressEvent_Callback qlcdnumber_mousepressevent_callback = nullptr;
    QLCDNumber_MouseReleaseEvent_Callback qlcdnumber_mousereleaseevent_callback = nullptr;
    QLCDNumber_MouseDoubleClickEvent_Callback qlcdnumber_mousedoubleclickevent_callback = nullptr;
    QLCDNumber_MouseMoveEvent_Callback qlcdnumber_mousemoveevent_callback = nullptr;
    QLCDNumber_WheelEvent_Callback qlcdnumber_wheelevent_callback = nullptr;
    QLCDNumber_KeyPressEvent_Callback qlcdnumber_keypressevent_callback = nullptr;
    QLCDNumber_KeyReleaseEvent_Callback qlcdnumber_keyreleaseevent_callback = nullptr;
    QLCDNumber_FocusInEvent_Callback qlcdnumber_focusinevent_callback = nullptr;
    QLCDNumber_FocusOutEvent_Callback qlcdnumber_focusoutevent_callback = nullptr;
    QLCDNumber_EnterEvent_Callback qlcdnumber_enterevent_callback = nullptr;
    QLCDNumber_LeaveEvent_Callback qlcdnumber_leaveevent_callback = nullptr;
    QLCDNumber_MoveEvent_Callback qlcdnumber_moveevent_callback = nullptr;
    QLCDNumber_ResizeEvent_Callback qlcdnumber_resizeevent_callback = nullptr;
    QLCDNumber_CloseEvent_Callback qlcdnumber_closeevent_callback = nullptr;
    QLCDNumber_ContextMenuEvent_Callback qlcdnumber_contextmenuevent_callback = nullptr;
    QLCDNumber_TabletEvent_Callback qlcdnumber_tabletevent_callback = nullptr;
    QLCDNumber_ActionEvent_Callback qlcdnumber_actionevent_callback = nullptr;
    QLCDNumber_DragEnterEvent_Callback qlcdnumber_dragenterevent_callback = nullptr;
    QLCDNumber_DragMoveEvent_Callback qlcdnumber_dragmoveevent_callback = nullptr;
    QLCDNumber_DragLeaveEvent_Callback qlcdnumber_dragleaveevent_callback = nullptr;
    QLCDNumber_DropEvent_Callback qlcdnumber_dropevent_callback = nullptr;
    QLCDNumber_ShowEvent_Callback qlcdnumber_showevent_callback = nullptr;
    QLCDNumber_HideEvent_Callback qlcdnumber_hideevent_callback = nullptr;
    QLCDNumber_NativeEvent_Callback qlcdnumber_nativeevent_callback = nullptr;
    QLCDNumber_Metric_Callback qlcdnumber_metric_callback = nullptr;
    QLCDNumber_InitPainter_Callback qlcdnumber_initpainter_callback = nullptr;
    QLCDNumber_Redirected_Callback qlcdnumber_redirected_callback = nullptr;
    QLCDNumber_SharedPainter_Callback qlcdnumber_sharedpainter_callback = nullptr;
    QLCDNumber_InputMethodEvent_Callback qlcdnumber_inputmethodevent_callback = nullptr;
    QLCDNumber_InputMethodQuery_Callback qlcdnumber_inputmethodquery_callback = nullptr;
    QLCDNumber_FocusNextPrevChild_Callback qlcdnumber_focusnextprevchild_callback = nullptr;
    QLCDNumber_EventFilter_Callback qlcdnumber_eventfilter_callback = nullptr;
    QLCDNumber_TimerEvent_Callback qlcdnumber_timerevent_callback = nullptr;
    QLCDNumber_ChildEvent_Callback qlcdnumber_childevent_callback = nullptr;
    QLCDNumber_CustomEvent_Callback qlcdnumber_customevent_callback = nullptr;
    QLCDNumber_ConnectNotify_Callback qlcdnumber_connectnotify_callback = nullptr;
    QLCDNumber_DisconnectNotify_Callback qlcdnumber_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLCDNumber {
        using QLCDNumber::actionEvent;
        using QLCDNumber::changeEvent;
        using QLCDNumber::childEvent;
        using QLCDNumber::closeEvent;
        using QLCDNumber::connectNotify;
        using QLCDNumber::contextMenuEvent;
        using QLCDNumber::customEvent;
        using QLCDNumber::disconnectNotify;
        using QLCDNumber::dragEnterEvent;
        using QLCDNumber::dragLeaveEvent;
        using QLCDNumber::dragMoveEvent;
        using QLCDNumber::dropEvent;
        using QLCDNumber::enterEvent;
        using QLCDNumber::event;
        using QLCDNumber::focusInEvent;
        using QLCDNumber::focusNextPrevChild;
        using QLCDNumber::focusOutEvent;
        using QLCDNumber::hideEvent;
        using QLCDNumber::initPainter;
        using QLCDNumber::initStyleOption;
        using QLCDNumber::inputMethodEvent;
        using QLCDNumber::keyPressEvent;
        using QLCDNumber::keyReleaseEvent;
        using QLCDNumber::leaveEvent;
        using QLCDNumber::metric;
        using QLCDNumber::mouseDoubleClickEvent;
        using QLCDNumber::mouseMoveEvent;
        using QLCDNumber::mousePressEvent;
        using QLCDNumber::mouseReleaseEvent;
        using QLCDNumber::moveEvent;
        using QLCDNumber::nativeEvent;
        using QLCDNumber::paintEvent;
        using QLCDNumber::redirected;
        using QLCDNumber::resizeEvent;
        using QLCDNumber::sharedPainter;
        using QLCDNumber::showEvent;
        using QLCDNumber::tabletEvent;
        using QLCDNumber::timerEvent;
        using QLCDNumber::wheelEvent;
    };

    VirtualQLCDNumber(QWidget* parent) : QLCDNumber(parent) {};
    VirtualQLCDNumber() : QLCDNumber() {};
    VirtualQLCDNumber(uint numDigits) : QLCDNumber(numDigits) {};
    VirtualQLCDNumber(uint numDigits, QWidget* parent) : QLCDNumber(numDigits, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlcdnumber_metaobject_callback) {
            QMetaObject* callback_ret = qlcdnumber_metaobject_callback(this);
            return callback_ret;
        }
        return QLCDNumber::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlcdnumber_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlcdnumber_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlcdnumber_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlcdnumber_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlcdnumber_sizehint_callback) {
            QSize* callback_ret = qlcdnumber_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLCDNumber::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlcdnumber_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qlcdnumber_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlcdnumber_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qlcdnumber_paintevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlcdnumber_changeevent_callback) {
            QEvent* cbval1 = param1;
            qlcdnumber_changeevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlcdnumber_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qlcdnumber_initstyleoption_callback(this, cbval1);
            return;
        }
        QLCDNumber::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlcdnumber_devtype_callback) {
            int callback_ret = qlcdnumber_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlcdnumber_setvisible_callback) {
            bool cbval1 = visible;
            qlcdnumber_setvisible_callback(this, cbval1);
            return;
        }
        QLCDNumber::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlcdnumber_minimumsizehint_callback) {
            QSize* callback_ret = qlcdnumber_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLCDNumber::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlcdnumber_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlcdnumber_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlcdnumber_hasheightforwidth_callback) {
            bool callback_ret = qlcdnumber_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QLCDNumber::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlcdnumber_paintengine_callback) {
            QPaintEngine* callback_ret = qlcdnumber_paintengine_callback(this);
            return callback_ret;
        }
        return QLCDNumber::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qlcdnumber_mousepressevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qlcdnumber_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qlcdnumber_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qlcdnumber_mousemoveevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlcdnumber_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qlcdnumber_wheelevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlcdnumber_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qlcdnumber_keypressevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlcdnumber_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qlcdnumber_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qlcdnumber_focusinevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qlcdnumber_focusoutevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlcdnumber_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qlcdnumber_enterevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlcdnumber_leaveevent_callback) {
            QEvent* cbval1 = event;
            qlcdnumber_leaveevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlcdnumber_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qlcdnumber_moveevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlcdnumber_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qlcdnumber_resizeevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlcdnumber_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qlcdnumber_closeevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qlcdnumber_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qlcdnumber_contextmenuevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlcdnumber_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qlcdnumber_tabletevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlcdnumber_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qlcdnumber_actionevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlcdnumber_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qlcdnumber_dragenterevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlcdnumber_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qlcdnumber_dragmoveevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlcdnumber_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qlcdnumber_dragleaveevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlcdnumber_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qlcdnumber_dropevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlcdnumber_showevent_callback) {
            QShowEvent* cbval1 = event;
            qlcdnumber_showevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlcdnumber_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qlcdnumber_hideevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlcdnumber_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qlcdnumber_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QLCDNumber::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlcdnumber_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qlcdnumber_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlcdnumber_initpainter_callback) {
            QPainter* cbval1 = painter;
            qlcdnumber_initpainter_callback(this, cbval1);
            return;
        }
        QLCDNumber::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlcdnumber_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qlcdnumber_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlcdnumber_sharedpainter_callback) {
            QPainter* callback_ret = qlcdnumber_sharedpainter_callback(this);
            return callback_ret;
        }
        return QLCDNumber::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlcdnumber_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qlcdnumber_inputmethodevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlcdnumber_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qlcdnumber_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLCDNumber::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlcdnumber_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qlcdnumber_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlcdnumber_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlcdnumber_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLCDNumber::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlcdnumber_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlcdnumber_timerevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlcdnumber_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlcdnumber_childevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlcdnumber_customevent_callback) {
            QEvent* cbval1 = event;
            qlcdnumber_customevent_callback(this, cbval1);
            return;
        }
        QLCDNumber::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlcdnumber_connectnotify_callback(this, cbval1);
            return;
        }
        QLCDNumber::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlcdnumber_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLCDNumber::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QLCDNumber_SuperEvent(QLCDNumber* self, QEvent* e);
    friend void QLCDNumber_SuperPaintEvent(QLCDNumber* self, QPaintEvent* param1);
    friend void QLCDNumber_SuperChangeEvent(QLCDNumber* self, QEvent* param1);
    friend void QLCDNumber_SuperInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
    friend void QLCDNumber_SuperMousePressEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperWheelEvent(QLCDNumber* self, QWheelEvent* event);
    friend void QLCDNumber_SuperKeyPressEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_SuperKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_SuperFocusInEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_SuperFocusOutEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_SuperEnterEvent(QLCDNumber* self, QEnterEvent* event);
    friend void QLCDNumber_SuperLeaveEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_SuperMoveEvent(QLCDNumber* self, QMoveEvent* event);
    friend void QLCDNumber_SuperResizeEvent(QLCDNumber* self, QResizeEvent* event);
    friend void QLCDNumber_SuperCloseEvent(QLCDNumber* self, QCloseEvent* event);
    friend void QLCDNumber_SuperContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
    friend void QLCDNumber_SuperTabletEvent(QLCDNumber* self, QTabletEvent* event);
    friend void QLCDNumber_SuperActionEvent(QLCDNumber* self, QActionEvent* event);
    friend void QLCDNumber_SuperDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
    friend void QLCDNumber_SuperDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
    friend void QLCDNumber_SuperDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
    friend void QLCDNumber_SuperDropEvent(QLCDNumber* self, QDropEvent* event);
    friend void QLCDNumber_SuperShowEvent(QLCDNumber* self, QShowEvent* event);
    friend void QLCDNumber_SuperHideEvent(QLCDNumber* self, QHideEvent* event);
    friend bool QLCDNumber_SuperNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLCDNumber_SuperMetric(const QLCDNumber* self, int param1);
    friend void QLCDNumber_SuperInitPainter(const QLCDNumber* self, QPainter* painter);
    friend QPaintDevice* QLCDNumber_SuperRedirected(const QLCDNumber* self, QPoint* offset);
    friend QPainter* QLCDNumber_SuperSharedPainter(const QLCDNumber* self);
    friend void QLCDNumber_SuperInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
    friend bool QLCDNumber_SuperFocusNextPrevChild(QLCDNumber* self, bool next);
    friend void QLCDNumber_SuperTimerEvent(QLCDNumber* self, QTimerEvent* event);
    friend void QLCDNumber_SuperChildEvent(QLCDNumber* self, QChildEvent* event);
    friend void QLCDNumber_SuperCustomEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_SuperConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_SuperDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
};

#endif
