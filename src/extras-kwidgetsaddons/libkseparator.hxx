#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSEPARATOR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKSEPARATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSeparator
class VirtualKSeparator final : public KSeparator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSeparator_MetaObject_Callback = QMetaObject* (*)(const KSeparator*);
    using KSeparator_Metacast_Callback = void* (*)(KSeparator*, const char*);
    using KSeparator_Metacall_Callback = int (*)(KSeparator*, int, int, void**);
    using KSeparator_SizeHint_Callback = QSize* (*)(const KSeparator*);
    using KSeparator_Event_Callback = bool (*)(KSeparator*, QEvent*);
    using KSeparator_PaintEvent_Callback = void (*)(KSeparator*, QPaintEvent*);
    using KSeparator_ChangeEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_InitStyleOption_Callback = void (*)(const KSeparator*, QStyleOptionFrame*);
    using KSeparator_DevType_Callback = int (*)(const KSeparator*);
    using KSeparator_SetVisible_Callback = void (*)(KSeparator*, bool);
    using KSeparator_MinimumSizeHint_Callback = QSize* (*)(const KSeparator*);
    using KSeparator_HeightForWidth_Callback = int (*)(const KSeparator*, int);
    using KSeparator_HasHeightForWidth_Callback = bool (*)(const KSeparator*);
    using KSeparator_PaintEngine_Callback = QPaintEngine* (*)(const KSeparator*);
    using KSeparator_MousePressEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseReleaseEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseDoubleClickEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseMoveEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_WheelEvent_Callback = void (*)(KSeparator*, QWheelEvent*);
    using KSeparator_KeyPressEvent_Callback = void (*)(KSeparator*, QKeyEvent*);
    using KSeparator_KeyReleaseEvent_Callback = void (*)(KSeparator*, QKeyEvent*);
    using KSeparator_FocusInEvent_Callback = void (*)(KSeparator*, QFocusEvent*);
    using KSeparator_FocusOutEvent_Callback = void (*)(KSeparator*, QFocusEvent*);
    using KSeparator_EnterEvent_Callback = void (*)(KSeparator*, QEnterEvent*);
    using KSeparator_LeaveEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_MoveEvent_Callback = void (*)(KSeparator*, QMoveEvent*);
    using KSeparator_ResizeEvent_Callback = void (*)(KSeparator*, QResizeEvent*);
    using KSeparator_CloseEvent_Callback = void (*)(KSeparator*, QCloseEvent*);
    using KSeparator_ContextMenuEvent_Callback = void (*)(KSeparator*, QContextMenuEvent*);
    using KSeparator_TabletEvent_Callback = void (*)(KSeparator*, QTabletEvent*);
    using KSeparator_ActionEvent_Callback = void (*)(KSeparator*, QActionEvent*);
    using KSeparator_DragEnterEvent_Callback = void (*)(KSeparator*, QDragEnterEvent*);
    using KSeparator_DragMoveEvent_Callback = void (*)(KSeparator*, QDragMoveEvent*);
    using KSeparator_DragLeaveEvent_Callback = void (*)(KSeparator*, QDragLeaveEvent*);
    using KSeparator_DropEvent_Callback = void (*)(KSeparator*, QDropEvent*);
    using KSeparator_ShowEvent_Callback = void (*)(KSeparator*, QShowEvent*);
    using KSeparator_HideEvent_Callback = void (*)(KSeparator*, QHideEvent*);
    using KSeparator_NativeEvent_Callback = bool (*)(KSeparator*, libqt_string, void*, intptr_t*);
    using KSeparator_Metric_Callback = int (*)(const KSeparator*, int);
    using KSeparator_InitPainter_Callback = void (*)(const KSeparator*, QPainter*);
    using KSeparator_Redirected_Callback = QPaintDevice* (*)(const KSeparator*, QPoint*);
    using KSeparator_SharedPainter_Callback = QPainter* (*)(const KSeparator*);
    using KSeparator_InputMethodEvent_Callback = void (*)(KSeparator*, QInputMethodEvent*);
    using KSeparator_InputMethodQuery_Callback = QVariant* (*)(const KSeparator*, int);
    using KSeparator_FocusNextPrevChild_Callback = bool (*)(KSeparator*, bool);
    using KSeparator_EventFilter_Callback = bool (*)(KSeparator*, QObject*, QEvent*);
    using KSeparator_TimerEvent_Callback = void (*)(KSeparator*, QTimerEvent*);
    using KSeparator_ChildEvent_Callback = void (*)(KSeparator*, QChildEvent*);
    using KSeparator_CustomEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_ConnectNotify_Callback = void (*)(KSeparator*, QMetaMethod*);
    using KSeparator_DisconnectNotify_Callback = void (*)(KSeparator*, QMetaMethod*);
    using KSeparator::create;
    using KSeparator::destroy;
    using KSeparator::drawFrame;
    using KSeparator::focusNextChild;
    using KSeparator::focusPreviousChild;
    using KSeparator::getDecodedMetricF;
    using KSeparator::isSignalConnected;
    using KSeparator::receivers;
    using KSeparator::sender;
    using KSeparator::senderSignalIndex;
    using KSeparator::updateMicroFocus;

    // Instance callback storage
    KSeparator_MetaObject_Callback kseparator_metaobject_callback = nullptr;
    KSeparator_Metacast_Callback kseparator_metacast_callback = nullptr;
    KSeparator_Metacall_Callback kseparator_metacall_callback = nullptr;
    KSeparator_SizeHint_Callback kseparator_sizehint_callback = nullptr;
    KSeparator_Event_Callback kseparator_event_callback = nullptr;
    KSeparator_PaintEvent_Callback kseparator_paintevent_callback = nullptr;
    KSeparator_ChangeEvent_Callback kseparator_changeevent_callback = nullptr;
    KSeparator_InitStyleOption_Callback kseparator_initstyleoption_callback = nullptr;
    KSeparator_DevType_Callback kseparator_devtype_callback = nullptr;
    KSeparator_SetVisible_Callback kseparator_setvisible_callback = nullptr;
    KSeparator_MinimumSizeHint_Callback kseparator_minimumsizehint_callback = nullptr;
    KSeparator_HeightForWidth_Callback kseparator_heightforwidth_callback = nullptr;
    KSeparator_HasHeightForWidth_Callback kseparator_hasheightforwidth_callback = nullptr;
    KSeparator_PaintEngine_Callback kseparator_paintengine_callback = nullptr;
    KSeparator_MousePressEvent_Callback kseparator_mousepressevent_callback = nullptr;
    KSeparator_MouseReleaseEvent_Callback kseparator_mousereleaseevent_callback = nullptr;
    KSeparator_MouseDoubleClickEvent_Callback kseparator_mousedoubleclickevent_callback = nullptr;
    KSeparator_MouseMoveEvent_Callback kseparator_mousemoveevent_callback = nullptr;
    KSeparator_WheelEvent_Callback kseparator_wheelevent_callback = nullptr;
    KSeparator_KeyPressEvent_Callback kseparator_keypressevent_callback = nullptr;
    KSeparator_KeyReleaseEvent_Callback kseparator_keyreleaseevent_callback = nullptr;
    KSeparator_FocusInEvent_Callback kseparator_focusinevent_callback = nullptr;
    KSeparator_FocusOutEvent_Callback kseparator_focusoutevent_callback = nullptr;
    KSeparator_EnterEvent_Callback kseparator_enterevent_callback = nullptr;
    KSeparator_LeaveEvent_Callback kseparator_leaveevent_callback = nullptr;
    KSeparator_MoveEvent_Callback kseparator_moveevent_callback = nullptr;
    KSeparator_ResizeEvent_Callback kseparator_resizeevent_callback = nullptr;
    KSeparator_CloseEvent_Callback kseparator_closeevent_callback = nullptr;
    KSeparator_ContextMenuEvent_Callback kseparator_contextmenuevent_callback = nullptr;
    KSeparator_TabletEvent_Callback kseparator_tabletevent_callback = nullptr;
    KSeparator_ActionEvent_Callback kseparator_actionevent_callback = nullptr;
    KSeparator_DragEnterEvent_Callback kseparator_dragenterevent_callback = nullptr;
    KSeparator_DragMoveEvent_Callback kseparator_dragmoveevent_callback = nullptr;
    KSeparator_DragLeaveEvent_Callback kseparator_dragleaveevent_callback = nullptr;
    KSeparator_DropEvent_Callback kseparator_dropevent_callback = nullptr;
    KSeparator_ShowEvent_Callback kseparator_showevent_callback = nullptr;
    KSeparator_HideEvent_Callback kseparator_hideevent_callback = nullptr;
    KSeparator_NativeEvent_Callback kseparator_nativeevent_callback = nullptr;
    KSeparator_Metric_Callback kseparator_metric_callback = nullptr;
    KSeparator_InitPainter_Callback kseparator_initpainter_callback = nullptr;
    KSeparator_Redirected_Callback kseparator_redirected_callback = nullptr;
    KSeparator_SharedPainter_Callback kseparator_sharedpainter_callback = nullptr;
    KSeparator_InputMethodEvent_Callback kseparator_inputmethodevent_callback = nullptr;
    KSeparator_InputMethodQuery_Callback kseparator_inputmethodquery_callback = nullptr;
    KSeparator_FocusNextPrevChild_Callback kseparator_focusnextprevchild_callback = nullptr;
    KSeparator_EventFilter_Callback kseparator_eventfilter_callback = nullptr;
    KSeparator_TimerEvent_Callback kseparator_timerevent_callback = nullptr;
    KSeparator_ChildEvent_Callback kseparator_childevent_callback = nullptr;
    KSeparator_CustomEvent_Callback kseparator_customevent_callback = nullptr;
    KSeparator_ConnectNotify_Callback kseparator_connectnotify_callback = nullptr;
    KSeparator_DisconnectNotify_Callback kseparator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSeparator {
        using KSeparator::actionEvent;
        using KSeparator::changeEvent;
        using KSeparator::childEvent;
        using KSeparator::closeEvent;
        using KSeparator::connectNotify;
        using KSeparator::contextMenuEvent;
        using KSeparator::customEvent;
        using KSeparator::disconnectNotify;
        using KSeparator::dragEnterEvent;
        using KSeparator::dragLeaveEvent;
        using KSeparator::dragMoveEvent;
        using KSeparator::dropEvent;
        using KSeparator::enterEvent;
        using KSeparator::event;
        using KSeparator::focusInEvent;
        using KSeparator::focusNextPrevChild;
        using KSeparator::focusOutEvent;
        using KSeparator::hideEvent;
        using KSeparator::initPainter;
        using KSeparator::initStyleOption;
        using KSeparator::inputMethodEvent;
        using KSeparator::keyPressEvent;
        using KSeparator::keyReleaseEvent;
        using KSeparator::leaveEvent;
        using KSeparator::metric;
        using KSeparator::mouseDoubleClickEvent;
        using KSeparator::mouseMoveEvent;
        using KSeparator::mousePressEvent;
        using KSeparator::mouseReleaseEvent;
        using KSeparator::moveEvent;
        using KSeparator::nativeEvent;
        using KSeparator::paintEvent;
        using KSeparator::redirected;
        using KSeparator::resizeEvent;
        using KSeparator::sharedPainter;
        using KSeparator::showEvent;
        using KSeparator::tabletEvent;
        using KSeparator::timerEvent;
        using KSeparator::wheelEvent;
    };

    VirtualKSeparator(QWidget* parent) : KSeparator(parent) {};
    VirtualKSeparator() : KSeparator() {};
    VirtualKSeparator(Qt::Orientation orientation) : KSeparator(orientation) {};
    VirtualKSeparator(QWidget* parent, Qt::WindowFlags f) : KSeparator(parent, f) {};
    VirtualKSeparator(Qt::Orientation orientation, QWidget* parent) : KSeparator(orientation, parent) {};
    VirtualKSeparator(Qt::Orientation orientation, QWidget* parent, Qt::WindowFlags f) : KSeparator(orientation, parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kseparator_metaobject_callback) {
            QMetaObject* callback_ret = kseparator_metaobject_callback(this);
            return callback_ret;
        }
        return KSeparator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kseparator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kseparator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSeparator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kseparator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kseparator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSeparator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kseparator_sizehint_callback) {
            QSize* callback_ret = kseparator_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSeparator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kseparator_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kseparator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSeparator::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kseparator_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kseparator_paintevent_callback(this, cbval1);
            return;
        }
        KSeparator::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kseparator_changeevent_callback) {
            QEvent* cbval1 = param1;
            kseparator_changeevent_callback(this, cbval1);
            return;
        }
        KSeparator::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kseparator_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kseparator_initstyleoption_callback(this, cbval1);
            return;
        }
        KSeparator::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kseparator_devtype_callback) {
            int callback_ret = kseparator_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSeparator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kseparator_setvisible_callback) {
            bool cbval1 = visible;
            kseparator_setvisible_callback(this, cbval1);
            return;
        }
        KSeparator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kseparator_minimumsizehint_callback) {
            QSize* callback_ret = kseparator_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSeparator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kseparator_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kseparator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSeparator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kseparator_hasheightforwidth_callback) {
            bool callback_ret = kseparator_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSeparator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kseparator_paintengine_callback) {
            QPaintEngine* callback_ret = kseparator_paintengine_callback(this);
            return callback_ret;
        }
        return KSeparator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kseparator_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kseparator_mousepressevent_callback(this, cbval1);
            return;
        }
        KSeparator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kseparator_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kseparator_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSeparator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kseparator_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kseparator_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSeparator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kseparator_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kseparator_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSeparator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kseparator_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kseparator_wheelevent_callback(this, cbval1);
            return;
        }
        KSeparator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kseparator_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kseparator_keypressevent_callback(this, cbval1);
            return;
        }
        KSeparator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kseparator_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kseparator_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSeparator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kseparator_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kseparator_focusinevent_callback(this, cbval1);
            return;
        }
        KSeparator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kseparator_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kseparator_focusoutevent_callback(this, cbval1);
            return;
        }
        KSeparator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kseparator_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kseparator_enterevent_callback(this, cbval1);
            return;
        }
        KSeparator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kseparator_leaveevent_callback) {
            QEvent* cbval1 = event;
            kseparator_leaveevent_callback(this, cbval1);
            return;
        }
        KSeparator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kseparator_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kseparator_moveevent_callback(this, cbval1);
            return;
        }
        KSeparator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kseparator_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kseparator_resizeevent_callback(this, cbval1);
            return;
        }
        KSeparator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kseparator_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kseparator_closeevent_callback(this, cbval1);
            return;
        }
        KSeparator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kseparator_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kseparator_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSeparator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kseparator_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kseparator_tabletevent_callback(this, cbval1);
            return;
        }
        KSeparator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kseparator_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kseparator_actionevent_callback(this, cbval1);
            return;
        }
        KSeparator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kseparator_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kseparator_dragenterevent_callback(this, cbval1);
            return;
        }
        KSeparator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kseparator_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kseparator_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSeparator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kseparator_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kseparator_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSeparator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kseparator_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kseparator_dropevent_callback(this, cbval1);
            return;
        }
        KSeparator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kseparator_showevent_callback) {
            QShowEvent* cbval1 = event;
            kseparator_showevent_callback(this, cbval1);
            return;
        }
        KSeparator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kseparator_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kseparator_hideevent_callback(this, cbval1);
            return;
        }
        KSeparator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kseparator_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kseparator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSeparator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kseparator_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kseparator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSeparator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kseparator_initpainter_callback) {
            QPainter* cbval1 = painter;
            kseparator_initpainter_callback(this, cbval1);
            return;
        }
        KSeparator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kseparator_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kseparator_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSeparator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kseparator_sharedpainter_callback) {
            QPainter* callback_ret = kseparator_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSeparator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kseparator_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kseparator_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSeparator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kseparator_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kseparator_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSeparator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kseparator_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kseparator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSeparator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kseparator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kseparator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSeparator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kseparator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kseparator_timerevent_callback(this, cbval1);
            return;
        }
        KSeparator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kseparator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kseparator_childevent_callback(this, cbval1);
            return;
        }
        KSeparator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kseparator_customevent_callback) {
            QEvent* cbval1 = event;
            kseparator_customevent_callback(this, cbval1);
            return;
        }
        KSeparator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kseparator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kseparator_connectnotify_callback(this, cbval1);
            return;
        }
        KSeparator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kseparator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kseparator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSeparator::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KSeparator_SuperEvent(KSeparator* self, QEvent* e);
    friend void KSeparator_SuperPaintEvent(KSeparator* self, QPaintEvent* param1);
    friend void KSeparator_SuperChangeEvent(KSeparator* self, QEvent* param1);
    friend void KSeparator_SuperInitStyleOption(const KSeparator* self, QStyleOptionFrame* option);
    friend void KSeparator_SuperMousePressEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_SuperMouseReleaseEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_SuperMouseDoubleClickEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_SuperMouseMoveEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_SuperWheelEvent(KSeparator* self, QWheelEvent* event);
    friend void KSeparator_SuperKeyPressEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_SuperKeyReleaseEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_SuperFocusInEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_SuperFocusOutEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_SuperEnterEvent(KSeparator* self, QEnterEvent* event);
    friend void KSeparator_SuperLeaveEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_SuperMoveEvent(KSeparator* self, QMoveEvent* event);
    friend void KSeparator_SuperResizeEvent(KSeparator* self, QResizeEvent* event);
    friend void KSeparator_SuperCloseEvent(KSeparator* self, QCloseEvent* event);
    friend void KSeparator_SuperContextMenuEvent(KSeparator* self, QContextMenuEvent* event);
    friend void KSeparator_SuperTabletEvent(KSeparator* self, QTabletEvent* event);
    friend void KSeparator_SuperActionEvent(KSeparator* self, QActionEvent* event);
    friend void KSeparator_SuperDragEnterEvent(KSeparator* self, QDragEnterEvent* event);
    friend void KSeparator_SuperDragMoveEvent(KSeparator* self, QDragMoveEvent* event);
    friend void KSeparator_SuperDragLeaveEvent(KSeparator* self, QDragLeaveEvent* event);
    friend void KSeparator_SuperDropEvent(KSeparator* self, QDropEvent* event);
    friend void KSeparator_SuperShowEvent(KSeparator* self, QShowEvent* event);
    friend void KSeparator_SuperHideEvent(KSeparator* self, QHideEvent* event);
    friend bool KSeparator_SuperNativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSeparator_SuperMetric(const KSeparator* self, int param1);
    friend void KSeparator_SuperInitPainter(const KSeparator* self, QPainter* painter);
    friend QPaintDevice* KSeparator_SuperRedirected(const KSeparator* self, QPoint* offset);
    friend QPainter* KSeparator_SuperSharedPainter(const KSeparator* self);
    friend void KSeparator_SuperInputMethodEvent(KSeparator* self, QInputMethodEvent* param1);
    friend bool KSeparator_SuperFocusNextPrevChild(KSeparator* self, bool next);
    friend void KSeparator_SuperTimerEvent(KSeparator* self, QTimerEvent* event);
    friend void KSeparator_SuperChildEvent(KSeparator* self, QChildEvent* event);
    friend void KSeparator_SuperCustomEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_SuperConnectNotify(KSeparator* self, const QMetaMethod* signal);
    friend void KSeparator_SuperDisconnectNotify(KSeparator* self, const QMetaMethod* signal);
};

#endif
