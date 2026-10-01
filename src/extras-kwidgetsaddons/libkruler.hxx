#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKRULER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKRULER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRuler
class VirtualKRuler final : public KRuler {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using KRuler_MetaObject_Callback = QMetaObject* (*)(const KRuler*);
    using KRuler_Metacast_Callback = void* (*)(KRuler*, const char*);
    using KRuler_Metacall_Callback = int (*)(KRuler*, int, int, void**);
    using KRuler_PaintEvent_Callback = void (*)(KRuler*, QPaintEvent*);
    using KRuler_Event_Callback = bool (*)(KRuler*, QEvent*);
    using KRuler_SliderChange_Callback = void (*)(KRuler*, int);
    using KRuler_KeyPressEvent_Callback = void (*)(KRuler*, QKeyEvent*);
    using KRuler_TimerEvent_Callback = void (*)(KRuler*, QTimerEvent*);
    using KRuler_WheelEvent_Callback = void (*)(KRuler*, QWheelEvent*);
    using KRuler_ChangeEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_DevType_Callback = int (*)(const KRuler*);
    using KRuler_SetVisible_Callback = void (*)(KRuler*, bool);
    using KRuler_SizeHint_Callback = QSize* (*)(const KRuler*);
    using KRuler_MinimumSizeHint_Callback = QSize* (*)(const KRuler*);
    using KRuler_HeightForWidth_Callback = int (*)(const KRuler*, int);
    using KRuler_HasHeightForWidth_Callback = bool (*)(const KRuler*);
    using KRuler_PaintEngine_Callback = QPaintEngine* (*)(const KRuler*);
    using KRuler_MousePressEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseReleaseEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseDoubleClickEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseMoveEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_KeyReleaseEvent_Callback = void (*)(KRuler*, QKeyEvent*);
    using KRuler_FocusInEvent_Callback = void (*)(KRuler*, QFocusEvent*);
    using KRuler_FocusOutEvent_Callback = void (*)(KRuler*, QFocusEvent*);
    using KRuler_EnterEvent_Callback = void (*)(KRuler*, QEnterEvent*);
    using KRuler_LeaveEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_MoveEvent_Callback = void (*)(KRuler*, QMoveEvent*);
    using KRuler_ResizeEvent_Callback = void (*)(KRuler*, QResizeEvent*);
    using KRuler_CloseEvent_Callback = void (*)(KRuler*, QCloseEvent*);
    using KRuler_ContextMenuEvent_Callback = void (*)(KRuler*, QContextMenuEvent*);
    using KRuler_TabletEvent_Callback = void (*)(KRuler*, QTabletEvent*);
    using KRuler_ActionEvent_Callback = void (*)(KRuler*, QActionEvent*);
    using KRuler_DragEnterEvent_Callback = void (*)(KRuler*, QDragEnterEvent*);
    using KRuler_DragMoveEvent_Callback = void (*)(KRuler*, QDragMoveEvent*);
    using KRuler_DragLeaveEvent_Callback = void (*)(KRuler*, QDragLeaveEvent*);
    using KRuler_DropEvent_Callback = void (*)(KRuler*, QDropEvent*);
    using KRuler_ShowEvent_Callback = void (*)(KRuler*, QShowEvent*);
    using KRuler_HideEvent_Callback = void (*)(KRuler*, QHideEvent*);
    using KRuler_NativeEvent_Callback = bool (*)(KRuler*, libqt_string, void*, intptr_t*);
    using KRuler_Metric_Callback = int (*)(const KRuler*, int);
    using KRuler_InitPainter_Callback = void (*)(const KRuler*, QPainter*);
    using KRuler_Redirected_Callback = QPaintDevice* (*)(const KRuler*, QPoint*);
    using KRuler_SharedPainter_Callback = QPainter* (*)(const KRuler*);
    using KRuler_InputMethodEvent_Callback = void (*)(KRuler*, QInputMethodEvent*);
    using KRuler_InputMethodQuery_Callback = QVariant* (*)(const KRuler*, int);
    using KRuler_FocusNextPrevChild_Callback = bool (*)(KRuler*, bool);
    using KRuler_EventFilter_Callback = bool (*)(KRuler*, QObject*, QEvent*);
    using KRuler_ChildEvent_Callback = void (*)(KRuler*, QChildEvent*);
    using KRuler_CustomEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_ConnectNotify_Callback = void (*)(KRuler*, QMetaMethod*);
    using KRuler_DisconnectNotify_Callback = void (*)(KRuler*, QMetaMethod*);
    using KRuler::create;
    using KRuler::destroy;
    using KRuler::focusNextChild;
    using KRuler::focusPreviousChild;
    using KRuler::getDecodedMetricF;
    using KRuler::isSignalConnected;
    using KRuler::receivers;
    using KRuler::repeatAction;
    using KRuler::sender;
    using KRuler::senderSignalIndex;
    using KRuler::setRepeatAction;
    using KRuler::updateMicroFocus;

    // Instance callback storage
    KRuler_MetaObject_Callback kruler_metaobject_callback = nullptr;
    KRuler_Metacast_Callback kruler_metacast_callback = nullptr;
    KRuler_Metacall_Callback kruler_metacall_callback = nullptr;
    KRuler_PaintEvent_Callback kruler_paintevent_callback = nullptr;
    KRuler_Event_Callback kruler_event_callback = nullptr;
    KRuler_SliderChange_Callback kruler_sliderchange_callback = nullptr;
    KRuler_KeyPressEvent_Callback kruler_keypressevent_callback = nullptr;
    KRuler_TimerEvent_Callback kruler_timerevent_callback = nullptr;
    KRuler_WheelEvent_Callback kruler_wheelevent_callback = nullptr;
    KRuler_ChangeEvent_Callback kruler_changeevent_callback = nullptr;
    KRuler_DevType_Callback kruler_devtype_callback = nullptr;
    KRuler_SetVisible_Callback kruler_setvisible_callback = nullptr;
    KRuler_SizeHint_Callback kruler_sizehint_callback = nullptr;
    KRuler_MinimumSizeHint_Callback kruler_minimumsizehint_callback = nullptr;
    KRuler_HeightForWidth_Callback kruler_heightforwidth_callback = nullptr;
    KRuler_HasHeightForWidth_Callback kruler_hasheightforwidth_callback = nullptr;
    KRuler_PaintEngine_Callback kruler_paintengine_callback = nullptr;
    KRuler_MousePressEvent_Callback kruler_mousepressevent_callback = nullptr;
    KRuler_MouseReleaseEvent_Callback kruler_mousereleaseevent_callback = nullptr;
    KRuler_MouseDoubleClickEvent_Callback kruler_mousedoubleclickevent_callback = nullptr;
    KRuler_MouseMoveEvent_Callback kruler_mousemoveevent_callback = nullptr;
    KRuler_KeyReleaseEvent_Callback kruler_keyreleaseevent_callback = nullptr;
    KRuler_FocusInEvent_Callback kruler_focusinevent_callback = nullptr;
    KRuler_FocusOutEvent_Callback kruler_focusoutevent_callback = nullptr;
    KRuler_EnterEvent_Callback kruler_enterevent_callback = nullptr;
    KRuler_LeaveEvent_Callback kruler_leaveevent_callback = nullptr;
    KRuler_MoveEvent_Callback kruler_moveevent_callback = nullptr;
    KRuler_ResizeEvent_Callback kruler_resizeevent_callback = nullptr;
    KRuler_CloseEvent_Callback kruler_closeevent_callback = nullptr;
    KRuler_ContextMenuEvent_Callback kruler_contextmenuevent_callback = nullptr;
    KRuler_TabletEvent_Callback kruler_tabletevent_callback = nullptr;
    KRuler_ActionEvent_Callback kruler_actionevent_callback = nullptr;
    KRuler_DragEnterEvent_Callback kruler_dragenterevent_callback = nullptr;
    KRuler_DragMoveEvent_Callback kruler_dragmoveevent_callback = nullptr;
    KRuler_DragLeaveEvent_Callback kruler_dragleaveevent_callback = nullptr;
    KRuler_DropEvent_Callback kruler_dropevent_callback = nullptr;
    KRuler_ShowEvent_Callback kruler_showevent_callback = nullptr;
    KRuler_HideEvent_Callback kruler_hideevent_callback = nullptr;
    KRuler_NativeEvent_Callback kruler_nativeevent_callback = nullptr;
    KRuler_Metric_Callback kruler_metric_callback = nullptr;
    KRuler_InitPainter_Callback kruler_initpainter_callback = nullptr;
    KRuler_Redirected_Callback kruler_redirected_callback = nullptr;
    KRuler_SharedPainter_Callback kruler_sharedpainter_callback = nullptr;
    KRuler_InputMethodEvent_Callback kruler_inputmethodevent_callback = nullptr;
    KRuler_InputMethodQuery_Callback kruler_inputmethodquery_callback = nullptr;
    KRuler_FocusNextPrevChild_Callback kruler_focusnextprevchild_callback = nullptr;
    KRuler_EventFilter_Callback kruler_eventfilter_callback = nullptr;
    KRuler_ChildEvent_Callback kruler_childevent_callback = nullptr;
    KRuler_CustomEvent_Callback kruler_customevent_callback = nullptr;
    KRuler_ConnectNotify_Callback kruler_connectnotify_callback = nullptr;
    KRuler_DisconnectNotify_Callback kruler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRuler {
        using KRuler::actionEvent;
        using KRuler::changeEvent;
        using KRuler::childEvent;
        using KRuler::closeEvent;
        using KRuler::connectNotify;
        using KRuler::contextMenuEvent;
        using KRuler::customEvent;
        using KRuler::disconnectNotify;
        using KRuler::dragEnterEvent;
        using KRuler::dragLeaveEvent;
        using KRuler::dragMoveEvent;
        using KRuler::dropEvent;
        using KRuler::enterEvent;
        using KRuler::event;
        using KRuler::focusInEvent;
        using KRuler::focusNextPrevChild;
        using KRuler::focusOutEvent;
        using KRuler::hideEvent;
        using KRuler::initPainter;
        using KRuler::inputMethodEvent;
        using KRuler::keyPressEvent;
        using KRuler::keyReleaseEvent;
        using KRuler::leaveEvent;
        using KRuler::metric;
        using KRuler::mouseDoubleClickEvent;
        using KRuler::mouseMoveEvent;
        using KRuler::mousePressEvent;
        using KRuler::mouseReleaseEvent;
        using KRuler::moveEvent;
        using KRuler::nativeEvent;
        using KRuler::paintEvent;
        using KRuler::redirected;
        using KRuler::resizeEvent;
        using KRuler::sharedPainter;
        using KRuler::showEvent;
        using KRuler::sliderChange;
        using KRuler::tabletEvent;
        using KRuler::timerEvent;
        using KRuler::wheelEvent;
    };

    VirtualKRuler(QWidget* parent) : KRuler(parent) {};
    VirtualKRuler() : KRuler() {};
    VirtualKRuler(Qt::Orientation orient) : KRuler(orient) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth) : KRuler(orient, widgetWidth) {};
    VirtualKRuler(Qt::Orientation orient, QWidget* parent) : KRuler(orient, parent) {};
    VirtualKRuler(Qt::Orientation orient, QWidget* parent, Qt::WindowFlags f) : KRuler(orient, parent, f) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth, QWidget* parent) : KRuler(orient, widgetWidth, parent) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth, QWidget* parent, Qt::WindowFlags f) : KRuler(orient, widgetWidth, parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kruler_metaobject_callback) {
            QMetaObject* callback_ret = kruler_metaobject_callback(this);
            return callback_ret;
        }
        return KRuler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kruler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kruler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRuler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kruler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kruler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRuler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kruler_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kruler_paintevent_callback(this, cbval1);
            return;
        }
        KRuler::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kruler_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kruler_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRuler::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kruler_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            kruler_sliderchange_callback(this, cbval1);
            return;
        }
        KRuler::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kruler_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            kruler_keypressevent_callback(this, cbval1);
            return;
        }
        KRuler::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kruler_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kruler_timerevent_callback(this, cbval1);
            return;
        }
        KRuler::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kruler_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kruler_wheelevent_callback(this, cbval1);
            return;
        }
        KRuler::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kruler_changeevent_callback) {
            QEvent* cbval1 = e;
            kruler_changeevent_callback(this, cbval1);
            return;
        }
        KRuler::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kruler_devtype_callback) {
            int callback_ret = kruler_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KRuler::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kruler_setvisible_callback) {
            bool cbval1 = visible;
            kruler_setvisible_callback(this, cbval1);
            return;
        }
        KRuler::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kruler_sizehint_callback) {
            QSize* callback_ret = kruler_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRuler::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kruler_minimumsizehint_callback) {
            QSize* callback_ret = kruler_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRuler::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kruler_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kruler_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRuler::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kruler_hasheightforwidth_callback) {
            bool callback_ret = kruler_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KRuler::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kruler_paintengine_callback) {
            QPaintEngine* callback_ret = kruler_paintengine_callback(this);
            return callback_ret;
        }
        return KRuler::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kruler_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kruler_mousepressevent_callback(this, cbval1);
            return;
        }
        KRuler::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kruler_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kruler_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KRuler::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kruler_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kruler_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KRuler::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kruler_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kruler_mousemoveevent_callback(this, cbval1);
            return;
        }
        KRuler::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kruler_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kruler_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KRuler::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kruler_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kruler_focusinevent_callback(this, cbval1);
            return;
        }
        KRuler::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kruler_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kruler_focusoutevent_callback(this, cbval1);
            return;
        }
        KRuler::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kruler_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kruler_enterevent_callback(this, cbval1);
            return;
        }
        KRuler::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kruler_leaveevent_callback) {
            QEvent* cbval1 = event;
            kruler_leaveevent_callback(this, cbval1);
            return;
        }
        KRuler::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kruler_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kruler_moveevent_callback(this, cbval1);
            return;
        }
        KRuler::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kruler_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kruler_resizeevent_callback(this, cbval1);
            return;
        }
        KRuler::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kruler_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kruler_closeevent_callback(this, cbval1);
            return;
        }
        KRuler::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kruler_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kruler_contextmenuevent_callback(this, cbval1);
            return;
        }
        KRuler::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kruler_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kruler_tabletevent_callback(this, cbval1);
            return;
        }
        KRuler::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kruler_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kruler_actionevent_callback(this, cbval1);
            return;
        }
        KRuler::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kruler_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kruler_dragenterevent_callback(this, cbval1);
            return;
        }
        KRuler::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kruler_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kruler_dragmoveevent_callback(this, cbval1);
            return;
        }
        KRuler::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kruler_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kruler_dragleaveevent_callback(this, cbval1);
            return;
        }
        KRuler::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kruler_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kruler_dropevent_callback(this, cbval1);
            return;
        }
        KRuler::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kruler_showevent_callback) {
            QShowEvent* cbval1 = event;
            kruler_showevent_callback(this, cbval1);
            return;
        }
        KRuler::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kruler_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kruler_hideevent_callback(this, cbval1);
            return;
        }
        KRuler::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kruler_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kruler_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KRuler::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kruler_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kruler_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRuler::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kruler_initpainter_callback) {
            QPainter* cbval1 = painter;
            kruler_initpainter_callback(this, cbval1);
            return;
        }
        KRuler::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kruler_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kruler_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KRuler::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kruler_sharedpainter_callback) {
            QPainter* callback_ret = kruler_sharedpainter_callback(this);
            return callback_ret;
        }
        return KRuler::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kruler_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kruler_inputmethodevent_callback(this, cbval1);
            return;
        }
        KRuler::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kruler_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kruler_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRuler::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kruler_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kruler_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KRuler::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kruler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kruler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRuler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kruler_childevent_callback) {
            QChildEvent* cbval1 = event;
            kruler_childevent_callback(this, cbval1);
            return;
        }
        KRuler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kruler_customevent_callback) {
            QEvent* cbval1 = event;
            kruler_customevent_callback(this, cbval1);
            return;
        }
        KRuler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kruler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kruler_connectnotify_callback(this, cbval1);
            return;
        }
        KRuler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kruler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kruler_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRuler::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRuler_SuperPaintEvent(KRuler* self, QPaintEvent* param1);
    friend bool KRuler_SuperEvent(KRuler* self, QEvent* e);
    friend void KRuler_SuperSliderChange(KRuler* self, int change);
    friend void KRuler_SuperKeyPressEvent(KRuler* self, QKeyEvent* ev);
    friend void KRuler_SuperTimerEvent(KRuler* self, QTimerEvent* param1);
    friend void KRuler_SuperWheelEvent(KRuler* self, QWheelEvent* e);
    friend void KRuler_SuperChangeEvent(KRuler* self, QEvent* e);
    friend void KRuler_SuperMousePressEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_SuperMouseReleaseEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_SuperMouseDoubleClickEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_SuperMouseMoveEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_SuperKeyReleaseEvent(KRuler* self, QKeyEvent* event);
    friend void KRuler_SuperFocusInEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_SuperFocusOutEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_SuperEnterEvent(KRuler* self, QEnterEvent* event);
    friend void KRuler_SuperLeaveEvent(KRuler* self, QEvent* event);
    friend void KRuler_SuperMoveEvent(KRuler* self, QMoveEvent* event);
    friend void KRuler_SuperResizeEvent(KRuler* self, QResizeEvent* event);
    friend void KRuler_SuperCloseEvent(KRuler* self, QCloseEvent* event);
    friend void KRuler_SuperContextMenuEvent(KRuler* self, QContextMenuEvent* event);
    friend void KRuler_SuperTabletEvent(KRuler* self, QTabletEvent* event);
    friend void KRuler_SuperActionEvent(KRuler* self, QActionEvent* event);
    friend void KRuler_SuperDragEnterEvent(KRuler* self, QDragEnterEvent* event);
    friend void KRuler_SuperDragMoveEvent(KRuler* self, QDragMoveEvent* event);
    friend void KRuler_SuperDragLeaveEvent(KRuler* self, QDragLeaveEvent* event);
    friend void KRuler_SuperDropEvent(KRuler* self, QDropEvent* event);
    friend void KRuler_SuperShowEvent(KRuler* self, QShowEvent* event);
    friend void KRuler_SuperHideEvent(KRuler* self, QHideEvent* event);
    friend bool KRuler_SuperNativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRuler_SuperMetric(const KRuler* self, int param1);
    friend void KRuler_SuperInitPainter(const KRuler* self, QPainter* painter);
    friend QPaintDevice* KRuler_SuperRedirected(const KRuler* self, QPoint* offset);
    friend QPainter* KRuler_SuperSharedPainter(const KRuler* self);
    friend void KRuler_SuperInputMethodEvent(KRuler* self, QInputMethodEvent* param1);
    friend bool KRuler_SuperFocusNextPrevChild(KRuler* self, bool next);
    friend void KRuler_SuperChildEvent(KRuler* self, QChildEvent* event);
    friend void KRuler_SuperCustomEvent(KRuler* self, QEvent* event);
    friend void KRuler_SuperConnectNotify(KRuler* self, const QMetaMethod* signal);
    friend void KRuler_SuperDisconnectNotify(KRuler* self, const QMetaMethod* signal);
};

#endif
