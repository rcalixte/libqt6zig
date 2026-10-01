#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPOPUPFRAME_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPOPUPFRAME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPopupFrame
class VirtualKPopupFrame final : public KPopupFrame {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPopupFrame_MetaObject_Callback = QMetaObject* (*)(const KPopupFrame*);
    using KPopupFrame_Metacast_Callback = void* (*)(KPopupFrame*, const char*);
    using KPopupFrame_Metacall_Callback = int (*)(KPopupFrame*, int, int, void**);
    using KPopupFrame_KeyPressEvent_Callback = void (*)(KPopupFrame*, QKeyEvent*);
    using KPopupFrame_HideEvent_Callback = void (*)(KPopupFrame*, QHideEvent*);
    using KPopupFrame_ResizeEvent_Callback = void (*)(KPopupFrame*, QResizeEvent*);
    using KPopupFrame_SizeHint_Callback = QSize* (*)(const KPopupFrame*);
    using KPopupFrame_Event_Callback = bool (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_PaintEvent_Callback = void (*)(KPopupFrame*, QPaintEvent*);
    using KPopupFrame_ChangeEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_InitStyleOption_Callback = void (*)(const KPopupFrame*, QStyleOptionFrame*);
    using KPopupFrame_DevType_Callback = int (*)(const KPopupFrame*);
    using KPopupFrame_SetVisible_Callback = void (*)(KPopupFrame*, bool);
    using KPopupFrame_MinimumSizeHint_Callback = QSize* (*)(const KPopupFrame*);
    using KPopupFrame_HeightForWidth_Callback = int (*)(const KPopupFrame*, int);
    using KPopupFrame_HasHeightForWidth_Callback = bool (*)(const KPopupFrame*);
    using KPopupFrame_PaintEngine_Callback = QPaintEngine* (*)(const KPopupFrame*);
    using KPopupFrame_MousePressEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseReleaseEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseDoubleClickEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseMoveEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_WheelEvent_Callback = void (*)(KPopupFrame*, QWheelEvent*);
    using KPopupFrame_KeyReleaseEvent_Callback = void (*)(KPopupFrame*, QKeyEvent*);
    using KPopupFrame_FocusInEvent_Callback = void (*)(KPopupFrame*, QFocusEvent*);
    using KPopupFrame_FocusOutEvent_Callback = void (*)(KPopupFrame*, QFocusEvent*);
    using KPopupFrame_EnterEvent_Callback = void (*)(KPopupFrame*, QEnterEvent*);
    using KPopupFrame_LeaveEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_MoveEvent_Callback = void (*)(KPopupFrame*, QMoveEvent*);
    using KPopupFrame_CloseEvent_Callback = void (*)(KPopupFrame*, QCloseEvent*);
    using KPopupFrame_ContextMenuEvent_Callback = void (*)(KPopupFrame*, QContextMenuEvent*);
    using KPopupFrame_TabletEvent_Callback = void (*)(KPopupFrame*, QTabletEvent*);
    using KPopupFrame_ActionEvent_Callback = void (*)(KPopupFrame*, QActionEvent*);
    using KPopupFrame_DragEnterEvent_Callback = void (*)(KPopupFrame*, QDragEnterEvent*);
    using KPopupFrame_DragMoveEvent_Callback = void (*)(KPopupFrame*, QDragMoveEvent*);
    using KPopupFrame_DragLeaveEvent_Callback = void (*)(KPopupFrame*, QDragLeaveEvent*);
    using KPopupFrame_DropEvent_Callback = void (*)(KPopupFrame*, QDropEvent*);
    using KPopupFrame_ShowEvent_Callback = void (*)(KPopupFrame*, QShowEvent*);
    using KPopupFrame_NativeEvent_Callback = bool (*)(KPopupFrame*, libqt_string, void*, intptr_t*);
    using KPopupFrame_Metric_Callback = int (*)(const KPopupFrame*, int);
    using KPopupFrame_InitPainter_Callback = void (*)(const KPopupFrame*, QPainter*);
    using KPopupFrame_Redirected_Callback = QPaintDevice* (*)(const KPopupFrame*, QPoint*);
    using KPopupFrame_SharedPainter_Callback = QPainter* (*)(const KPopupFrame*);
    using KPopupFrame_InputMethodEvent_Callback = void (*)(KPopupFrame*, QInputMethodEvent*);
    using KPopupFrame_InputMethodQuery_Callback = QVariant* (*)(const KPopupFrame*, int);
    using KPopupFrame_FocusNextPrevChild_Callback = bool (*)(KPopupFrame*, bool);
    using KPopupFrame_EventFilter_Callback = bool (*)(KPopupFrame*, QObject*, QEvent*);
    using KPopupFrame_TimerEvent_Callback = void (*)(KPopupFrame*, QTimerEvent*);
    using KPopupFrame_ChildEvent_Callback = void (*)(KPopupFrame*, QChildEvent*);
    using KPopupFrame_CustomEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_ConnectNotify_Callback = void (*)(KPopupFrame*, QMetaMethod*);
    using KPopupFrame_DisconnectNotify_Callback = void (*)(KPopupFrame*, QMetaMethod*);
    using KPopupFrame::create;
    using KPopupFrame::destroy;
    using KPopupFrame::drawFrame;
    using KPopupFrame::focusNextChild;
    using KPopupFrame::focusPreviousChild;
    using KPopupFrame::getDecodedMetricF;
    using KPopupFrame::isSignalConnected;
    using KPopupFrame::receivers;
    using KPopupFrame::sender;
    using KPopupFrame::senderSignalIndex;
    using KPopupFrame::updateMicroFocus;

    // Instance callback storage
    KPopupFrame_MetaObject_Callback kpopupframe_metaobject_callback = nullptr;
    KPopupFrame_Metacast_Callback kpopupframe_metacast_callback = nullptr;
    KPopupFrame_Metacall_Callback kpopupframe_metacall_callback = nullptr;
    KPopupFrame_KeyPressEvent_Callback kpopupframe_keypressevent_callback = nullptr;
    KPopupFrame_HideEvent_Callback kpopupframe_hideevent_callback = nullptr;
    KPopupFrame_ResizeEvent_Callback kpopupframe_resizeevent_callback = nullptr;
    KPopupFrame_SizeHint_Callback kpopupframe_sizehint_callback = nullptr;
    KPopupFrame_Event_Callback kpopupframe_event_callback = nullptr;
    KPopupFrame_PaintEvent_Callback kpopupframe_paintevent_callback = nullptr;
    KPopupFrame_ChangeEvent_Callback kpopupframe_changeevent_callback = nullptr;
    KPopupFrame_InitStyleOption_Callback kpopupframe_initstyleoption_callback = nullptr;
    KPopupFrame_DevType_Callback kpopupframe_devtype_callback = nullptr;
    KPopupFrame_SetVisible_Callback kpopupframe_setvisible_callback = nullptr;
    KPopupFrame_MinimumSizeHint_Callback kpopupframe_minimumsizehint_callback = nullptr;
    KPopupFrame_HeightForWidth_Callback kpopupframe_heightforwidth_callback = nullptr;
    KPopupFrame_HasHeightForWidth_Callback kpopupframe_hasheightforwidth_callback = nullptr;
    KPopupFrame_PaintEngine_Callback kpopupframe_paintengine_callback = nullptr;
    KPopupFrame_MousePressEvent_Callback kpopupframe_mousepressevent_callback = nullptr;
    KPopupFrame_MouseReleaseEvent_Callback kpopupframe_mousereleaseevent_callback = nullptr;
    KPopupFrame_MouseDoubleClickEvent_Callback kpopupframe_mousedoubleclickevent_callback = nullptr;
    KPopupFrame_MouseMoveEvent_Callback kpopupframe_mousemoveevent_callback = nullptr;
    KPopupFrame_WheelEvent_Callback kpopupframe_wheelevent_callback = nullptr;
    KPopupFrame_KeyReleaseEvent_Callback kpopupframe_keyreleaseevent_callback = nullptr;
    KPopupFrame_FocusInEvent_Callback kpopupframe_focusinevent_callback = nullptr;
    KPopupFrame_FocusOutEvent_Callback kpopupframe_focusoutevent_callback = nullptr;
    KPopupFrame_EnterEvent_Callback kpopupframe_enterevent_callback = nullptr;
    KPopupFrame_LeaveEvent_Callback kpopupframe_leaveevent_callback = nullptr;
    KPopupFrame_MoveEvent_Callback kpopupframe_moveevent_callback = nullptr;
    KPopupFrame_CloseEvent_Callback kpopupframe_closeevent_callback = nullptr;
    KPopupFrame_ContextMenuEvent_Callback kpopupframe_contextmenuevent_callback = nullptr;
    KPopupFrame_TabletEvent_Callback kpopupframe_tabletevent_callback = nullptr;
    KPopupFrame_ActionEvent_Callback kpopupframe_actionevent_callback = nullptr;
    KPopupFrame_DragEnterEvent_Callback kpopupframe_dragenterevent_callback = nullptr;
    KPopupFrame_DragMoveEvent_Callback kpopupframe_dragmoveevent_callback = nullptr;
    KPopupFrame_DragLeaveEvent_Callback kpopupframe_dragleaveevent_callback = nullptr;
    KPopupFrame_DropEvent_Callback kpopupframe_dropevent_callback = nullptr;
    KPopupFrame_ShowEvent_Callback kpopupframe_showevent_callback = nullptr;
    KPopupFrame_NativeEvent_Callback kpopupframe_nativeevent_callback = nullptr;
    KPopupFrame_Metric_Callback kpopupframe_metric_callback = nullptr;
    KPopupFrame_InitPainter_Callback kpopupframe_initpainter_callback = nullptr;
    KPopupFrame_Redirected_Callback kpopupframe_redirected_callback = nullptr;
    KPopupFrame_SharedPainter_Callback kpopupframe_sharedpainter_callback = nullptr;
    KPopupFrame_InputMethodEvent_Callback kpopupframe_inputmethodevent_callback = nullptr;
    KPopupFrame_InputMethodQuery_Callback kpopupframe_inputmethodquery_callback = nullptr;
    KPopupFrame_FocusNextPrevChild_Callback kpopupframe_focusnextprevchild_callback = nullptr;
    KPopupFrame_EventFilter_Callback kpopupframe_eventfilter_callback = nullptr;
    KPopupFrame_TimerEvent_Callback kpopupframe_timerevent_callback = nullptr;
    KPopupFrame_ChildEvent_Callback kpopupframe_childevent_callback = nullptr;
    KPopupFrame_CustomEvent_Callback kpopupframe_customevent_callback = nullptr;
    KPopupFrame_ConnectNotify_Callback kpopupframe_connectnotify_callback = nullptr;
    KPopupFrame_DisconnectNotify_Callback kpopupframe_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPopupFrame {
        using KPopupFrame::actionEvent;
        using KPopupFrame::changeEvent;
        using KPopupFrame::childEvent;
        using KPopupFrame::closeEvent;
        using KPopupFrame::connectNotify;
        using KPopupFrame::contextMenuEvent;
        using KPopupFrame::customEvent;
        using KPopupFrame::disconnectNotify;
        using KPopupFrame::dragEnterEvent;
        using KPopupFrame::dragLeaveEvent;
        using KPopupFrame::dragMoveEvent;
        using KPopupFrame::dropEvent;
        using KPopupFrame::enterEvent;
        using KPopupFrame::event;
        using KPopupFrame::focusInEvent;
        using KPopupFrame::focusNextPrevChild;
        using KPopupFrame::focusOutEvent;
        using KPopupFrame::hideEvent;
        using KPopupFrame::initPainter;
        using KPopupFrame::initStyleOption;
        using KPopupFrame::inputMethodEvent;
        using KPopupFrame::keyPressEvent;
        using KPopupFrame::keyReleaseEvent;
        using KPopupFrame::leaveEvent;
        using KPopupFrame::metric;
        using KPopupFrame::mouseDoubleClickEvent;
        using KPopupFrame::mouseMoveEvent;
        using KPopupFrame::mousePressEvent;
        using KPopupFrame::mouseReleaseEvent;
        using KPopupFrame::moveEvent;
        using KPopupFrame::nativeEvent;
        using KPopupFrame::paintEvent;
        using KPopupFrame::redirected;
        using KPopupFrame::sharedPainter;
        using KPopupFrame::showEvent;
        using KPopupFrame::tabletEvent;
        using KPopupFrame::timerEvent;
        using KPopupFrame::wheelEvent;
    };

    VirtualKPopupFrame(QWidget* parent) : KPopupFrame(parent) {};
    VirtualKPopupFrame() : KPopupFrame() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpopupframe_metaobject_callback) {
            QMetaObject* callback_ret = kpopupframe_metaobject_callback(this);
            return callback_ret;
        }
        return KPopupFrame::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpopupframe_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpopupframe_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPopupFrame::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpopupframe_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpopupframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPopupFrame::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kpopupframe_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kpopupframe_keypressevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kpopupframe_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kpopupframe_hideevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resize) override {
        if (kpopupframe_resizeevent_callback) {
            QResizeEvent* cbval1 = resize;
            kpopupframe_resizeevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::resizeEvent(resize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpopupframe_sizehint_callback) {
            QSize* callback_ret = kpopupframe_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPopupFrame::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kpopupframe_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kpopupframe_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPopupFrame::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kpopupframe_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kpopupframe_paintevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpopupframe_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpopupframe_changeevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kpopupframe_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kpopupframe_initstyleoption_callback(this, cbval1);
            return;
        }
        KPopupFrame::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpopupframe_devtype_callback) {
            int callback_ret = kpopupframe_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPopupFrame::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpopupframe_setvisible_callback) {
            bool cbval1 = visible;
            kpopupframe_setvisible_callback(this, cbval1);
            return;
        }
        KPopupFrame::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpopupframe_minimumsizehint_callback) {
            QSize* callback_ret = kpopupframe_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPopupFrame::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpopupframe_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpopupframe_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPopupFrame::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpopupframe_hasheightforwidth_callback) {
            bool callback_ret = kpopupframe_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPopupFrame::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpopupframe_paintengine_callback) {
            QPaintEngine* callback_ret = kpopupframe_paintengine_callback(this);
            return callback_ret;
        }
        return KPopupFrame::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpopupframe_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpopupframe_mousepressevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpopupframe_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpopupframe_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpopupframe_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpopupframe_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpopupframe_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpopupframe_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpopupframe_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpopupframe_wheelevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpopupframe_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpopupframe_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpopupframe_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpopupframe_focusinevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpopupframe_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpopupframe_focusoutevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpopupframe_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpopupframe_enterevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpopupframe_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpopupframe_leaveevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpopupframe_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpopupframe_moveevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpopupframe_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpopupframe_closeevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpopupframe_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpopupframe_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpopupframe_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpopupframe_tabletevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpopupframe_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpopupframe_actionevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpopupframe_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpopupframe_dragenterevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpopupframe_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpopupframe_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpopupframe_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpopupframe_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpopupframe_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpopupframe_dropevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpopupframe_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpopupframe_showevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpopupframe_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpopupframe_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPopupFrame::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpopupframe_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpopupframe_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPopupFrame::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpopupframe_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpopupframe_initpainter_callback(this, cbval1);
            return;
        }
        KPopupFrame::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpopupframe_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpopupframe_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPopupFrame::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpopupframe_sharedpainter_callback) {
            QPainter* callback_ret = kpopupframe_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPopupFrame::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpopupframe_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpopupframe_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpopupframe_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpopupframe_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPopupFrame::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpopupframe_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpopupframe_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPopupFrame::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpopupframe_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpopupframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPopupFrame::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpopupframe_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpopupframe_timerevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpopupframe_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpopupframe_childevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpopupframe_customevent_callback) {
            QEvent* cbval1 = event;
            kpopupframe_customevent_callback(this, cbval1);
            return;
        }
        KPopupFrame::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpopupframe_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpopupframe_connectnotify_callback(this, cbval1);
            return;
        }
        KPopupFrame::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpopupframe_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpopupframe_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPopupFrame::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPopupFrame_SuperKeyPressEvent(KPopupFrame* self, QKeyEvent* e);
    friend void KPopupFrame_SuperHideEvent(KPopupFrame* self, QHideEvent* e);
    friend bool KPopupFrame_SuperEvent(KPopupFrame* self, QEvent* e);
    friend void KPopupFrame_SuperPaintEvent(KPopupFrame* self, QPaintEvent* param1);
    friend void KPopupFrame_SuperChangeEvent(KPopupFrame* self, QEvent* param1);
    friend void KPopupFrame_SuperInitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option);
    friend void KPopupFrame_SuperMousePressEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_SuperMouseReleaseEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_SuperMouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_SuperMouseMoveEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_SuperWheelEvent(KPopupFrame* self, QWheelEvent* event);
    friend void KPopupFrame_SuperKeyReleaseEvent(KPopupFrame* self, QKeyEvent* event);
    friend void KPopupFrame_SuperFocusInEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_SuperFocusOutEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_SuperEnterEvent(KPopupFrame* self, QEnterEvent* event);
    friend void KPopupFrame_SuperLeaveEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_SuperMoveEvent(KPopupFrame* self, QMoveEvent* event);
    friend void KPopupFrame_SuperCloseEvent(KPopupFrame* self, QCloseEvent* event);
    friend void KPopupFrame_SuperContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event);
    friend void KPopupFrame_SuperTabletEvent(KPopupFrame* self, QTabletEvent* event);
    friend void KPopupFrame_SuperActionEvent(KPopupFrame* self, QActionEvent* event);
    friend void KPopupFrame_SuperDragEnterEvent(KPopupFrame* self, QDragEnterEvent* event);
    friend void KPopupFrame_SuperDragMoveEvent(KPopupFrame* self, QDragMoveEvent* event);
    friend void KPopupFrame_SuperDragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event);
    friend void KPopupFrame_SuperDropEvent(KPopupFrame* self, QDropEvent* event);
    friend void KPopupFrame_SuperShowEvent(KPopupFrame* self, QShowEvent* event);
    friend bool KPopupFrame_SuperNativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPopupFrame_SuperMetric(const KPopupFrame* self, int param1);
    friend void KPopupFrame_SuperInitPainter(const KPopupFrame* self, QPainter* painter);
    friend QPaintDevice* KPopupFrame_SuperRedirected(const KPopupFrame* self, QPoint* offset);
    friend QPainter* KPopupFrame_SuperSharedPainter(const KPopupFrame* self);
    friend void KPopupFrame_SuperInputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1);
    friend bool KPopupFrame_SuperFocusNextPrevChild(KPopupFrame* self, bool next);
    friend void KPopupFrame_SuperTimerEvent(KPopupFrame* self, QTimerEvent* event);
    friend void KPopupFrame_SuperChildEvent(KPopupFrame* self, QChildEvent* event);
    friend void KPopupFrame_SuperCustomEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_SuperConnectNotify(KPopupFrame* self, const QMetaMethod* signal);
    friend void KPopupFrame_SuperDisconnectNotify(KPopupFrame* self, const QMetaMethod* signal);
};

#endif
