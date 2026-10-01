#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKLED_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKLED_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLed
class VirtualKLed final : public KLed {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLed_MetaObject_Callback = QMetaObject* (*)(const KLed*);
    using KLed_Metacast_Callback = void* (*)(KLed*, const char*);
    using KLed_Metacall_Callback = int (*)(KLed*, int, int, void**);
    using KLed_SizeHint_Callback = QSize* (*)(const KLed*);
    using KLed_MinimumSizeHint_Callback = QSize* (*)(const KLed*);
    using KLed_PaintEvent_Callback = void (*)(KLed*, QPaintEvent*);
    using KLed_ResizeEvent_Callback = void (*)(KLed*, QResizeEvent*);
    using KLed_DevType_Callback = int (*)(const KLed*);
    using KLed_SetVisible_Callback = void (*)(KLed*, bool);
    using KLed_HeightForWidth_Callback = int (*)(const KLed*, int);
    using KLed_HasHeightForWidth_Callback = bool (*)(const KLed*);
    using KLed_PaintEngine_Callback = QPaintEngine* (*)(const KLed*);
    using KLed_Event_Callback = bool (*)(KLed*, QEvent*);
    using KLed_MousePressEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseReleaseEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseDoubleClickEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseMoveEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_WheelEvent_Callback = void (*)(KLed*, QWheelEvent*);
    using KLed_KeyPressEvent_Callback = void (*)(KLed*, QKeyEvent*);
    using KLed_KeyReleaseEvent_Callback = void (*)(KLed*, QKeyEvent*);
    using KLed_FocusInEvent_Callback = void (*)(KLed*, QFocusEvent*);
    using KLed_FocusOutEvent_Callback = void (*)(KLed*, QFocusEvent*);
    using KLed_EnterEvent_Callback = void (*)(KLed*, QEnterEvent*);
    using KLed_LeaveEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_MoveEvent_Callback = void (*)(KLed*, QMoveEvent*);
    using KLed_CloseEvent_Callback = void (*)(KLed*, QCloseEvent*);
    using KLed_ContextMenuEvent_Callback = void (*)(KLed*, QContextMenuEvent*);
    using KLed_TabletEvent_Callback = void (*)(KLed*, QTabletEvent*);
    using KLed_ActionEvent_Callback = void (*)(KLed*, QActionEvent*);
    using KLed_DragEnterEvent_Callback = void (*)(KLed*, QDragEnterEvent*);
    using KLed_DragMoveEvent_Callback = void (*)(KLed*, QDragMoveEvent*);
    using KLed_DragLeaveEvent_Callback = void (*)(KLed*, QDragLeaveEvent*);
    using KLed_DropEvent_Callback = void (*)(KLed*, QDropEvent*);
    using KLed_ShowEvent_Callback = void (*)(KLed*, QShowEvent*);
    using KLed_HideEvent_Callback = void (*)(KLed*, QHideEvent*);
    using KLed_NativeEvent_Callback = bool (*)(KLed*, libqt_string, void*, intptr_t*);
    using KLed_ChangeEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_Metric_Callback = int (*)(const KLed*, int);
    using KLed_InitPainter_Callback = void (*)(const KLed*, QPainter*);
    using KLed_Redirected_Callback = QPaintDevice* (*)(const KLed*, QPoint*);
    using KLed_SharedPainter_Callback = QPainter* (*)(const KLed*);
    using KLed_InputMethodEvent_Callback = void (*)(KLed*, QInputMethodEvent*);
    using KLed_InputMethodQuery_Callback = QVariant* (*)(const KLed*, int);
    using KLed_FocusNextPrevChild_Callback = bool (*)(KLed*, bool);
    using KLed_EventFilter_Callback = bool (*)(KLed*, QObject*, QEvent*);
    using KLed_TimerEvent_Callback = void (*)(KLed*, QTimerEvent*);
    using KLed_ChildEvent_Callback = void (*)(KLed*, QChildEvent*);
    using KLed_CustomEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_ConnectNotify_Callback = void (*)(KLed*, QMetaMethod*);
    using KLed_DisconnectNotify_Callback = void (*)(KLed*, QMetaMethod*);
    using KLed::create;
    using KLed::destroy;
    using KLed::focusNextChild;
    using KLed::focusPreviousChild;
    using KLed::getDecodedMetricF;
    using KLed::isSignalConnected;
    using KLed::receivers;
    using KLed::sender;
    using KLed::senderSignalIndex;
    using KLed::updateMicroFocus;

    // Instance callback storage
    KLed_MetaObject_Callback kled_metaobject_callback = nullptr;
    KLed_Metacast_Callback kled_metacast_callback = nullptr;
    KLed_Metacall_Callback kled_metacall_callback = nullptr;
    KLed_SizeHint_Callback kled_sizehint_callback = nullptr;
    KLed_MinimumSizeHint_Callback kled_minimumsizehint_callback = nullptr;
    KLed_PaintEvent_Callback kled_paintevent_callback = nullptr;
    KLed_ResizeEvent_Callback kled_resizeevent_callback = nullptr;
    KLed_DevType_Callback kled_devtype_callback = nullptr;
    KLed_SetVisible_Callback kled_setvisible_callback = nullptr;
    KLed_HeightForWidth_Callback kled_heightforwidth_callback = nullptr;
    KLed_HasHeightForWidth_Callback kled_hasheightforwidth_callback = nullptr;
    KLed_PaintEngine_Callback kled_paintengine_callback = nullptr;
    KLed_Event_Callback kled_event_callback = nullptr;
    KLed_MousePressEvent_Callback kled_mousepressevent_callback = nullptr;
    KLed_MouseReleaseEvent_Callback kled_mousereleaseevent_callback = nullptr;
    KLed_MouseDoubleClickEvent_Callback kled_mousedoubleclickevent_callback = nullptr;
    KLed_MouseMoveEvent_Callback kled_mousemoveevent_callback = nullptr;
    KLed_WheelEvent_Callback kled_wheelevent_callback = nullptr;
    KLed_KeyPressEvent_Callback kled_keypressevent_callback = nullptr;
    KLed_KeyReleaseEvent_Callback kled_keyreleaseevent_callback = nullptr;
    KLed_FocusInEvent_Callback kled_focusinevent_callback = nullptr;
    KLed_FocusOutEvent_Callback kled_focusoutevent_callback = nullptr;
    KLed_EnterEvent_Callback kled_enterevent_callback = nullptr;
    KLed_LeaveEvent_Callback kled_leaveevent_callback = nullptr;
    KLed_MoveEvent_Callback kled_moveevent_callback = nullptr;
    KLed_CloseEvent_Callback kled_closeevent_callback = nullptr;
    KLed_ContextMenuEvent_Callback kled_contextmenuevent_callback = nullptr;
    KLed_TabletEvent_Callback kled_tabletevent_callback = nullptr;
    KLed_ActionEvent_Callback kled_actionevent_callback = nullptr;
    KLed_DragEnterEvent_Callback kled_dragenterevent_callback = nullptr;
    KLed_DragMoveEvent_Callback kled_dragmoveevent_callback = nullptr;
    KLed_DragLeaveEvent_Callback kled_dragleaveevent_callback = nullptr;
    KLed_DropEvent_Callback kled_dropevent_callback = nullptr;
    KLed_ShowEvent_Callback kled_showevent_callback = nullptr;
    KLed_HideEvent_Callback kled_hideevent_callback = nullptr;
    KLed_NativeEvent_Callback kled_nativeevent_callback = nullptr;
    KLed_ChangeEvent_Callback kled_changeevent_callback = nullptr;
    KLed_Metric_Callback kled_metric_callback = nullptr;
    KLed_InitPainter_Callback kled_initpainter_callback = nullptr;
    KLed_Redirected_Callback kled_redirected_callback = nullptr;
    KLed_SharedPainter_Callback kled_sharedpainter_callback = nullptr;
    KLed_InputMethodEvent_Callback kled_inputmethodevent_callback = nullptr;
    KLed_InputMethodQuery_Callback kled_inputmethodquery_callback = nullptr;
    KLed_FocusNextPrevChild_Callback kled_focusnextprevchild_callback = nullptr;
    KLed_EventFilter_Callback kled_eventfilter_callback = nullptr;
    KLed_TimerEvent_Callback kled_timerevent_callback = nullptr;
    KLed_ChildEvent_Callback kled_childevent_callback = nullptr;
    KLed_CustomEvent_Callback kled_customevent_callback = nullptr;
    KLed_ConnectNotify_Callback kled_connectnotify_callback = nullptr;
    KLed_DisconnectNotify_Callback kled_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLed {
        using KLed::actionEvent;
        using KLed::changeEvent;
        using KLed::childEvent;
        using KLed::closeEvent;
        using KLed::connectNotify;
        using KLed::contextMenuEvent;
        using KLed::customEvent;
        using KLed::disconnectNotify;
        using KLed::dragEnterEvent;
        using KLed::dragLeaveEvent;
        using KLed::dragMoveEvent;
        using KLed::dropEvent;
        using KLed::enterEvent;
        using KLed::event;
        using KLed::focusInEvent;
        using KLed::focusNextPrevChild;
        using KLed::focusOutEvent;
        using KLed::hideEvent;
        using KLed::initPainter;
        using KLed::inputMethodEvent;
        using KLed::keyPressEvent;
        using KLed::keyReleaseEvent;
        using KLed::leaveEvent;
        using KLed::metric;
        using KLed::mouseDoubleClickEvent;
        using KLed::mouseMoveEvent;
        using KLed::mousePressEvent;
        using KLed::mouseReleaseEvent;
        using KLed::moveEvent;
        using KLed::nativeEvent;
        using KLed::paintEvent;
        using KLed::redirected;
        using KLed::resizeEvent;
        using KLed::sharedPainter;
        using KLed::showEvent;
        using KLed::tabletEvent;
        using KLed::timerEvent;
        using KLed::wheelEvent;
    };

    VirtualKLed(QWidget* parent) : KLed(parent) {};
    VirtualKLed() : KLed() {};
    VirtualKLed(const QColor& color) : KLed(color) {};
    VirtualKLed(const QColor& color, KLed::State state, KLed::Look look, KLed::Shape shape) : KLed(color, state, look, shape) {};
    VirtualKLed(const QColor& color, QWidget* parent) : KLed(color, parent) {};
    VirtualKLed(const QColor& color, KLed::State state, KLed::Look look, KLed::Shape shape, QWidget* parent) : KLed(color, state, look, shape, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kled_metaobject_callback) {
            QMetaObject* callback_ret = kled_metaobject_callback(this);
            return callback_ret;
        }
        return KLed::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kled_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kled_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLed::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kled_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kled_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLed::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kled_sizehint_callback) {
            QSize* callback_ret = kled_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLed::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kled_minimumsizehint_callback) {
            QSize* callback_ret = kled_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLed::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kled_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kled_paintevent_callback(this, cbval1);
            return;
        }
        KLed::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kled_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kled_resizeevent_callback(this, cbval1);
            return;
        }
        KLed::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kled_devtype_callback) {
            int callback_ret = kled_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KLed::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kled_setvisible_callback) {
            bool cbval1 = visible;
            kled_setvisible_callback(this, cbval1);
            return;
        }
        KLed::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kled_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kled_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLed::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kled_hasheightforwidth_callback) {
            bool callback_ret = kled_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KLed::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kled_paintengine_callback) {
            QPaintEngine* callback_ret = kled_paintengine_callback(this);
            return callback_ret;
        }
        return KLed::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kled_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kled_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLed::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kled_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kled_mousepressevent_callback(this, cbval1);
            return;
        }
        KLed::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kled_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kled_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KLed::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kled_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kled_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KLed::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kled_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kled_mousemoveevent_callback(this, cbval1);
            return;
        }
        KLed::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kled_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kled_wheelevent_callback(this, cbval1);
            return;
        }
        KLed::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kled_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kled_keypressevent_callback(this, cbval1);
            return;
        }
        KLed::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kled_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kled_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KLed::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kled_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kled_focusinevent_callback(this, cbval1);
            return;
        }
        KLed::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kled_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kled_focusoutevent_callback(this, cbval1);
            return;
        }
        KLed::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kled_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kled_enterevent_callback(this, cbval1);
            return;
        }
        KLed::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kled_leaveevent_callback) {
            QEvent* cbval1 = event;
            kled_leaveevent_callback(this, cbval1);
            return;
        }
        KLed::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kled_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kled_moveevent_callback(this, cbval1);
            return;
        }
        KLed::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kled_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kled_closeevent_callback(this, cbval1);
            return;
        }
        KLed::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kled_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kled_contextmenuevent_callback(this, cbval1);
            return;
        }
        KLed::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kled_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kled_tabletevent_callback(this, cbval1);
            return;
        }
        KLed::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kled_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kled_actionevent_callback(this, cbval1);
            return;
        }
        KLed::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kled_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kled_dragenterevent_callback(this, cbval1);
            return;
        }
        KLed::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kled_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kled_dragmoveevent_callback(this, cbval1);
            return;
        }
        KLed::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kled_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kled_dragleaveevent_callback(this, cbval1);
            return;
        }
        KLed::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kled_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kled_dropevent_callback(this, cbval1);
            return;
        }
        KLed::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kled_showevent_callback) {
            QShowEvent* cbval1 = event;
            kled_showevent_callback(this, cbval1);
            return;
        }
        KLed::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kled_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kled_hideevent_callback(this, cbval1);
            return;
        }
        KLed::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kled_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kled_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KLed::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kled_changeevent_callback) {
            QEvent* cbval1 = param1;
            kled_changeevent_callback(this, cbval1);
            return;
        }
        KLed::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kled_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kled_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLed::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kled_initpainter_callback) {
            QPainter* cbval1 = painter;
            kled_initpainter_callback(this, cbval1);
            return;
        }
        KLed::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kled_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kled_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KLed::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kled_sharedpainter_callback) {
            QPainter* callback_ret = kled_sharedpainter_callback(this);
            return callback_ret;
        }
        return KLed::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kled_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kled_inputmethodevent_callback(this, cbval1);
            return;
        }
        KLed::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kled_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kled_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLed::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kled_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kled_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KLed::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kled_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kled_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLed::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kled_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kled_timerevent_callback(this, cbval1);
            return;
        }
        KLed::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kled_childevent_callback) {
            QChildEvent* cbval1 = event;
            kled_childevent_callback(this, cbval1);
            return;
        }
        KLed::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kled_customevent_callback) {
            QEvent* cbval1 = event;
            kled_customevent_callback(this, cbval1);
            return;
        }
        KLed::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kled_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kled_connectnotify_callback(this, cbval1);
            return;
        }
        KLed::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kled_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kled_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLed::disconnectNotify(signal);
    }

    // Friend functions
    friend void KLed_SuperPaintEvent(KLed* self, QPaintEvent* param1);
    friend void KLed_SuperResizeEvent(KLed* self, QResizeEvent* param1);
    friend bool KLed_SuperEvent(KLed* self, QEvent* event);
    friend void KLed_SuperMousePressEvent(KLed* self, QMouseEvent* event);
    friend void KLed_SuperMouseReleaseEvent(KLed* self, QMouseEvent* event);
    friend void KLed_SuperMouseDoubleClickEvent(KLed* self, QMouseEvent* event);
    friend void KLed_SuperMouseMoveEvent(KLed* self, QMouseEvent* event);
    friend void KLed_SuperWheelEvent(KLed* self, QWheelEvent* event);
    friend void KLed_SuperKeyPressEvent(KLed* self, QKeyEvent* event);
    friend void KLed_SuperKeyReleaseEvent(KLed* self, QKeyEvent* event);
    friend void KLed_SuperFocusInEvent(KLed* self, QFocusEvent* event);
    friend void KLed_SuperFocusOutEvent(KLed* self, QFocusEvent* event);
    friend void KLed_SuperEnterEvent(KLed* self, QEnterEvent* event);
    friend void KLed_SuperLeaveEvent(KLed* self, QEvent* event);
    friend void KLed_SuperMoveEvent(KLed* self, QMoveEvent* event);
    friend void KLed_SuperCloseEvent(KLed* self, QCloseEvent* event);
    friend void KLed_SuperContextMenuEvent(KLed* self, QContextMenuEvent* event);
    friend void KLed_SuperTabletEvent(KLed* self, QTabletEvent* event);
    friend void KLed_SuperActionEvent(KLed* self, QActionEvent* event);
    friend void KLed_SuperDragEnterEvent(KLed* self, QDragEnterEvent* event);
    friend void KLed_SuperDragMoveEvent(KLed* self, QDragMoveEvent* event);
    friend void KLed_SuperDragLeaveEvent(KLed* self, QDragLeaveEvent* event);
    friend void KLed_SuperDropEvent(KLed* self, QDropEvent* event);
    friend void KLed_SuperShowEvent(KLed* self, QShowEvent* event);
    friend void KLed_SuperHideEvent(KLed* self, QHideEvent* event);
    friend bool KLed_SuperNativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KLed_SuperChangeEvent(KLed* self, QEvent* param1);
    friend int KLed_SuperMetric(const KLed* self, int param1);
    friend void KLed_SuperInitPainter(const KLed* self, QPainter* painter);
    friend QPaintDevice* KLed_SuperRedirected(const KLed* self, QPoint* offset);
    friend QPainter* KLed_SuperSharedPainter(const KLed* self);
    friend void KLed_SuperInputMethodEvent(KLed* self, QInputMethodEvent* param1);
    friend bool KLed_SuperFocusNextPrevChild(KLed* self, bool next);
    friend void KLed_SuperTimerEvent(KLed* self, QTimerEvent* event);
    friend void KLed_SuperChildEvent(KLed* self, QChildEvent* event);
    friend void KLed_SuperCustomEvent(KLed* self, QEvent* event);
    friend void KLed_SuperConnectNotify(KLed* self, const QMetaMethod* signal);
    friend void KLed_SuperDisconnectNotify(KLed* self, const QMetaMethod* signal);
};

#endif
