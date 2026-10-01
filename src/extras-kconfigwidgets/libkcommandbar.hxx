#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCOMMANDBAR_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKCOMMANDBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCommandBar
class VirtualKCommandBar final : public KCommandBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCommandBar_MetaObject_Callback = QMetaObject* (*)(const KCommandBar*);
    using KCommandBar_Metacast_Callback = void* (*)(KCommandBar*, const char*);
    using KCommandBar_Metacall_Callback = int (*)(KCommandBar*, int, int, void**);
    using KCommandBar_EventFilter_Callback = bool (*)(KCommandBar*, QObject*, QEvent*);
    using KCommandBar_SizeHint_Callback = QSize* (*)(const KCommandBar*);
    using KCommandBar_Event_Callback = bool (*)(KCommandBar*, QEvent*);
    using KCommandBar_PaintEvent_Callback = void (*)(KCommandBar*, QPaintEvent*);
    using KCommandBar_ChangeEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_InitStyleOption_Callback = void (*)(const KCommandBar*, QStyleOptionFrame*);
    using KCommandBar_DevType_Callback = int (*)(const KCommandBar*);
    using KCommandBar_SetVisible_Callback = void (*)(KCommandBar*, bool);
    using KCommandBar_MinimumSizeHint_Callback = QSize* (*)(const KCommandBar*);
    using KCommandBar_HeightForWidth_Callback = int (*)(const KCommandBar*, int);
    using KCommandBar_HasHeightForWidth_Callback = bool (*)(const KCommandBar*);
    using KCommandBar_PaintEngine_Callback = QPaintEngine* (*)(const KCommandBar*);
    using KCommandBar_MousePressEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseReleaseEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseDoubleClickEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseMoveEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_WheelEvent_Callback = void (*)(KCommandBar*, QWheelEvent*);
    using KCommandBar_KeyPressEvent_Callback = void (*)(KCommandBar*, QKeyEvent*);
    using KCommandBar_KeyReleaseEvent_Callback = void (*)(KCommandBar*, QKeyEvent*);
    using KCommandBar_FocusInEvent_Callback = void (*)(KCommandBar*, QFocusEvent*);
    using KCommandBar_FocusOutEvent_Callback = void (*)(KCommandBar*, QFocusEvent*);
    using KCommandBar_EnterEvent_Callback = void (*)(KCommandBar*, QEnterEvent*);
    using KCommandBar_LeaveEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_MoveEvent_Callback = void (*)(KCommandBar*, QMoveEvent*);
    using KCommandBar_ResizeEvent_Callback = void (*)(KCommandBar*, QResizeEvent*);
    using KCommandBar_CloseEvent_Callback = void (*)(KCommandBar*, QCloseEvent*);
    using KCommandBar_ContextMenuEvent_Callback = void (*)(KCommandBar*, QContextMenuEvent*);
    using KCommandBar_TabletEvent_Callback = void (*)(KCommandBar*, QTabletEvent*);
    using KCommandBar_ActionEvent_Callback = void (*)(KCommandBar*, QActionEvent*);
    using KCommandBar_DragEnterEvent_Callback = void (*)(KCommandBar*, QDragEnterEvent*);
    using KCommandBar_DragMoveEvent_Callback = void (*)(KCommandBar*, QDragMoveEvent*);
    using KCommandBar_DragLeaveEvent_Callback = void (*)(KCommandBar*, QDragLeaveEvent*);
    using KCommandBar_DropEvent_Callback = void (*)(KCommandBar*, QDropEvent*);
    using KCommandBar_ShowEvent_Callback = void (*)(KCommandBar*, QShowEvent*);
    using KCommandBar_HideEvent_Callback = void (*)(KCommandBar*, QHideEvent*);
    using KCommandBar_NativeEvent_Callback = bool (*)(KCommandBar*, libqt_string, void*, intptr_t*);
    using KCommandBar_Metric_Callback = int (*)(const KCommandBar*, int);
    using KCommandBar_InitPainter_Callback = void (*)(const KCommandBar*, QPainter*);
    using KCommandBar_Redirected_Callback = QPaintDevice* (*)(const KCommandBar*, QPoint*);
    using KCommandBar_SharedPainter_Callback = QPainter* (*)(const KCommandBar*);
    using KCommandBar_InputMethodEvent_Callback = void (*)(KCommandBar*, QInputMethodEvent*);
    using KCommandBar_InputMethodQuery_Callback = QVariant* (*)(const KCommandBar*, int);
    using KCommandBar_FocusNextPrevChild_Callback = bool (*)(KCommandBar*, bool);
    using KCommandBar_TimerEvent_Callback = void (*)(KCommandBar*, QTimerEvent*);
    using KCommandBar_ChildEvent_Callback = void (*)(KCommandBar*, QChildEvent*);
    using KCommandBar_CustomEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_ConnectNotify_Callback = void (*)(KCommandBar*, QMetaMethod*);
    using KCommandBar_DisconnectNotify_Callback = void (*)(KCommandBar*, QMetaMethod*);
    using KCommandBar::create;
    using KCommandBar::destroy;
    using KCommandBar::drawFrame;
    using KCommandBar::focusNextChild;
    using KCommandBar::focusPreviousChild;
    using KCommandBar::getDecodedMetricF;
    using KCommandBar::isSignalConnected;
    using KCommandBar::receivers;
    using KCommandBar::sender;
    using KCommandBar::senderSignalIndex;
    using KCommandBar::updateMicroFocus;

    // Instance callback storage
    KCommandBar_MetaObject_Callback kcommandbar_metaobject_callback = nullptr;
    KCommandBar_Metacast_Callback kcommandbar_metacast_callback = nullptr;
    KCommandBar_Metacall_Callback kcommandbar_metacall_callback = nullptr;
    KCommandBar_EventFilter_Callback kcommandbar_eventfilter_callback = nullptr;
    KCommandBar_SizeHint_Callback kcommandbar_sizehint_callback = nullptr;
    KCommandBar_Event_Callback kcommandbar_event_callback = nullptr;
    KCommandBar_PaintEvent_Callback kcommandbar_paintevent_callback = nullptr;
    KCommandBar_ChangeEvent_Callback kcommandbar_changeevent_callback = nullptr;
    KCommandBar_InitStyleOption_Callback kcommandbar_initstyleoption_callback = nullptr;
    KCommandBar_DevType_Callback kcommandbar_devtype_callback = nullptr;
    KCommandBar_SetVisible_Callback kcommandbar_setvisible_callback = nullptr;
    KCommandBar_MinimumSizeHint_Callback kcommandbar_minimumsizehint_callback = nullptr;
    KCommandBar_HeightForWidth_Callback kcommandbar_heightforwidth_callback = nullptr;
    KCommandBar_HasHeightForWidth_Callback kcommandbar_hasheightforwidth_callback = nullptr;
    KCommandBar_PaintEngine_Callback kcommandbar_paintengine_callback = nullptr;
    KCommandBar_MousePressEvent_Callback kcommandbar_mousepressevent_callback = nullptr;
    KCommandBar_MouseReleaseEvent_Callback kcommandbar_mousereleaseevent_callback = nullptr;
    KCommandBar_MouseDoubleClickEvent_Callback kcommandbar_mousedoubleclickevent_callback = nullptr;
    KCommandBar_MouseMoveEvent_Callback kcommandbar_mousemoveevent_callback = nullptr;
    KCommandBar_WheelEvent_Callback kcommandbar_wheelevent_callback = nullptr;
    KCommandBar_KeyPressEvent_Callback kcommandbar_keypressevent_callback = nullptr;
    KCommandBar_KeyReleaseEvent_Callback kcommandbar_keyreleaseevent_callback = nullptr;
    KCommandBar_FocusInEvent_Callback kcommandbar_focusinevent_callback = nullptr;
    KCommandBar_FocusOutEvent_Callback kcommandbar_focusoutevent_callback = nullptr;
    KCommandBar_EnterEvent_Callback kcommandbar_enterevent_callback = nullptr;
    KCommandBar_LeaveEvent_Callback kcommandbar_leaveevent_callback = nullptr;
    KCommandBar_MoveEvent_Callback kcommandbar_moveevent_callback = nullptr;
    KCommandBar_ResizeEvent_Callback kcommandbar_resizeevent_callback = nullptr;
    KCommandBar_CloseEvent_Callback kcommandbar_closeevent_callback = nullptr;
    KCommandBar_ContextMenuEvent_Callback kcommandbar_contextmenuevent_callback = nullptr;
    KCommandBar_TabletEvent_Callback kcommandbar_tabletevent_callback = nullptr;
    KCommandBar_ActionEvent_Callback kcommandbar_actionevent_callback = nullptr;
    KCommandBar_DragEnterEvent_Callback kcommandbar_dragenterevent_callback = nullptr;
    KCommandBar_DragMoveEvent_Callback kcommandbar_dragmoveevent_callback = nullptr;
    KCommandBar_DragLeaveEvent_Callback kcommandbar_dragleaveevent_callback = nullptr;
    KCommandBar_DropEvent_Callback kcommandbar_dropevent_callback = nullptr;
    KCommandBar_ShowEvent_Callback kcommandbar_showevent_callback = nullptr;
    KCommandBar_HideEvent_Callback kcommandbar_hideevent_callback = nullptr;
    KCommandBar_NativeEvent_Callback kcommandbar_nativeevent_callback = nullptr;
    KCommandBar_Metric_Callback kcommandbar_metric_callback = nullptr;
    KCommandBar_InitPainter_Callback kcommandbar_initpainter_callback = nullptr;
    KCommandBar_Redirected_Callback kcommandbar_redirected_callback = nullptr;
    KCommandBar_SharedPainter_Callback kcommandbar_sharedpainter_callback = nullptr;
    KCommandBar_InputMethodEvent_Callback kcommandbar_inputmethodevent_callback = nullptr;
    KCommandBar_InputMethodQuery_Callback kcommandbar_inputmethodquery_callback = nullptr;
    KCommandBar_FocusNextPrevChild_Callback kcommandbar_focusnextprevchild_callback = nullptr;
    KCommandBar_TimerEvent_Callback kcommandbar_timerevent_callback = nullptr;
    KCommandBar_ChildEvent_Callback kcommandbar_childevent_callback = nullptr;
    KCommandBar_CustomEvent_Callback kcommandbar_customevent_callback = nullptr;
    KCommandBar_ConnectNotify_Callback kcommandbar_connectnotify_callback = nullptr;
    KCommandBar_DisconnectNotify_Callback kcommandbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCommandBar {
        using KCommandBar::actionEvent;
        using KCommandBar::changeEvent;
        using KCommandBar::childEvent;
        using KCommandBar::closeEvent;
        using KCommandBar::connectNotify;
        using KCommandBar::contextMenuEvent;
        using KCommandBar::customEvent;
        using KCommandBar::disconnectNotify;
        using KCommandBar::dragEnterEvent;
        using KCommandBar::dragLeaveEvent;
        using KCommandBar::dragMoveEvent;
        using KCommandBar::dropEvent;
        using KCommandBar::enterEvent;
        using KCommandBar::event;
        using KCommandBar::eventFilter;
        using KCommandBar::focusInEvent;
        using KCommandBar::focusNextPrevChild;
        using KCommandBar::focusOutEvent;
        using KCommandBar::hideEvent;
        using KCommandBar::initPainter;
        using KCommandBar::initStyleOption;
        using KCommandBar::inputMethodEvent;
        using KCommandBar::keyPressEvent;
        using KCommandBar::keyReleaseEvent;
        using KCommandBar::leaveEvent;
        using KCommandBar::metric;
        using KCommandBar::mouseDoubleClickEvent;
        using KCommandBar::mouseMoveEvent;
        using KCommandBar::mousePressEvent;
        using KCommandBar::mouseReleaseEvent;
        using KCommandBar::moveEvent;
        using KCommandBar::nativeEvent;
        using KCommandBar::paintEvent;
        using KCommandBar::redirected;
        using KCommandBar::resizeEvent;
        using KCommandBar::sharedPainter;
        using KCommandBar::showEvent;
        using KCommandBar::tabletEvent;
        using KCommandBar::timerEvent;
        using KCommandBar::wheelEvent;
    };

    VirtualKCommandBar(QWidget* parent) : KCommandBar(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcommandbar_metaobject_callback) {
            QMetaObject* callback_ret = kcommandbar_metaobject_callback(this);
            return callback_ret;
        }
        return KCommandBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcommandbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcommandbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCommandBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcommandbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcommandbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCommandBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (kcommandbar_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;
            bool callback_ret = kcommandbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCommandBar::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcommandbar_sizehint_callback) {
            QSize* callback_ret = kcommandbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCommandBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcommandbar_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcommandbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCommandBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcommandbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kcommandbar_paintevent_callback(this, cbval1);
            return;
        }
        KCommandBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcommandbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcommandbar_changeevent_callback(this, cbval1);
            return;
        }
        KCommandBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcommandbar_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kcommandbar_initstyleoption_callback(this, cbval1);
            return;
        }
        KCommandBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcommandbar_devtype_callback) {
            int callback_ret = kcommandbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCommandBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcommandbar_setvisible_callback) {
            bool cbval1 = visible;
            kcommandbar_setvisible_callback(this, cbval1);
            return;
        }
        KCommandBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcommandbar_minimumsizehint_callback) {
            QSize* callback_ret = kcommandbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCommandBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcommandbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcommandbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCommandBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcommandbar_hasheightforwidth_callback) {
            bool callback_ret = kcommandbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCommandBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcommandbar_paintengine_callback) {
            QPaintEngine* callback_ret = kcommandbar_paintengine_callback(this);
            return callback_ret;
        }
        return KCommandBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcommandbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kcommandbar_mousepressevent_callback(this, cbval1);
            return;
        }
        KCommandBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcommandbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kcommandbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCommandBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcommandbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcommandbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCommandBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcommandbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcommandbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCommandBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcommandbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcommandbar_wheelevent_callback(this, cbval1);
            return;
        }
        KCommandBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcommandbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kcommandbar_keypressevent_callback(this, cbval1);
            return;
        }
        KCommandBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcommandbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcommandbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCommandBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcommandbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcommandbar_focusinevent_callback(this, cbval1);
            return;
        }
        KCommandBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcommandbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcommandbar_focusoutevent_callback(this, cbval1);
            return;
        }
        KCommandBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcommandbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcommandbar_enterevent_callback(this, cbval1);
            return;
        }
        KCommandBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcommandbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcommandbar_leaveevent_callback(this, cbval1);
            return;
        }
        KCommandBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcommandbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcommandbar_moveevent_callback(this, cbval1);
            return;
        }
        KCommandBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcommandbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcommandbar_resizeevent_callback(this, cbval1);
            return;
        }
        KCommandBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcommandbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcommandbar_closeevent_callback(this, cbval1);
            return;
        }
        KCommandBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcommandbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcommandbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCommandBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcommandbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcommandbar_tabletevent_callback(this, cbval1);
            return;
        }
        KCommandBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcommandbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcommandbar_actionevent_callback(this, cbval1);
            return;
        }
        KCommandBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcommandbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcommandbar_dragenterevent_callback(this, cbval1);
            return;
        }
        KCommandBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcommandbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcommandbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCommandBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcommandbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcommandbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCommandBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcommandbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcommandbar_dropevent_callback(this, cbval1);
            return;
        }
        KCommandBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcommandbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcommandbar_showevent_callback(this, cbval1);
            return;
        }
        KCommandBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcommandbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcommandbar_hideevent_callback(this, cbval1);
            return;
        }
        KCommandBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcommandbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcommandbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCommandBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcommandbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcommandbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCommandBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcommandbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcommandbar_initpainter_callback(this, cbval1);
            return;
        }
        KCommandBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcommandbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcommandbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCommandBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcommandbar_sharedpainter_callback) {
            QPainter* callback_ret = kcommandbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCommandBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcommandbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcommandbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCommandBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcommandbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcommandbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCommandBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcommandbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcommandbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCommandBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcommandbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcommandbar_timerevent_callback(this, cbval1);
            return;
        }
        KCommandBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcommandbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcommandbar_childevent_callback(this, cbval1);
            return;
        }
        KCommandBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcommandbar_customevent_callback) {
            QEvent* cbval1 = event;
            kcommandbar_customevent_callback(this, cbval1);
            return;
        }
        KCommandBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcommandbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcommandbar_connectnotify_callback(this, cbval1);
            return;
        }
        KCommandBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcommandbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcommandbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCommandBar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCommandBar_SuperEventFilter(KCommandBar* self, QObject* obj, QEvent* event);
    friend bool KCommandBar_SuperEvent(KCommandBar* self, QEvent* e);
    friend void KCommandBar_SuperPaintEvent(KCommandBar* self, QPaintEvent* param1);
    friend void KCommandBar_SuperChangeEvent(KCommandBar* self, QEvent* param1);
    friend void KCommandBar_SuperInitStyleOption(const KCommandBar* self, QStyleOptionFrame* option);
    friend void KCommandBar_SuperMousePressEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_SuperMouseReleaseEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_SuperMouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_SuperMouseMoveEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_SuperWheelEvent(KCommandBar* self, QWheelEvent* event);
    friend void KCommandBar_SuperKeyPressEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_SuperKeyReleaseEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_SuperFocusInEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_SuperFocusOutEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_SuperEnterEvent(KCommandBar* self, QEnterEvent* event);
    friend void KCommandBar_SuperLeaveEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_SuperMoveEvent(KCommandBar* self, QMoveEvent* event);
    friend void KCommandBar_SuperResizeEvent(KCommandBar* self, QResizeEvent* event);
    friend void KCommandBar_SuperCloseEvent(KCommandBar* self, QCloseEvent* event);
    friend void KCommandBar_SuperContextMenuEvent(KCommandBar* self, QContextMenuEvent* event);
    friend void KCommandBar_SuperTabletEvent(KCommandBar* self, QTabletEvent* event);
    friend void KCommandBar_SuperActionEvent(KCommandBar* self, QActionEvent* event);
    friend void KCommandBar_SuperDragEnterEvent(KCommandBar* self, QDragEnterEvent* event);
    friend void KCommandBar_SuperDragMoveEvent(KCommandBar* self, QDragMoveEvent* event);
    friend void KCommandBar_SuperDragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event);
    friend void KCommandBar_SuperDropEvent(KCommandBar* self, QDropEvent* event);
    friend void KCommandBar_SuperShowEvent(KCommandBar* self, QShowEvent* event);
    friend void KCommandBar_SuperHideEvent(KCommandBar* self, QHideEvent* event);
    friend bool KCommandBar_SuperNativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCommandBar_SuperMetric(const KCommandBar* self, int param1);
    friend void KCommandBar_SuperInitPainter(const KCommandBar* self, QPainter* painter);
    friend QPaintDevice* KCommandBar_SuperRedirected(const KCommandBar* self, QPoint* offset);
    friend QPainter* KCommandBar_SuperSharedPainter(const KCommandBar* self);
    friend void KCommandBar_SuperInputMethodEvent(KCommandBar* self, QInputMethodEvent* param1);
    friend bool KCommandBar_SuperFocusNextPrevChild(KCommandBar* self, bool next);
    friend void KCommandBar_SuperTimerEvent(KCommandBar* self, QTimerEvent* event);
    friend void KCommandBar_SuperChildEvent(KCommandBar* self, QChildEvent* event);
    friend void KCommandBar_SuperCustomEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_SuperConnectNotify(KCommandBar* self, const QMetaMethod* signal);
    friend void KCommandBar_SuperDisconnectNotify(KCommandBar* self, const QMetaMethod* signal);
};

#endif
