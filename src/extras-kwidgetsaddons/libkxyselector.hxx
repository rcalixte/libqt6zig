#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKXYSELECTOR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKXYSELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXYSelector
class VirtualKXYSelector final : public KXYSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXYSelector_MetaObject_Callback = QMetaObject* (*)(const KXYSelector*);
    using KXYSelector_Metacast_Callback = void* (*)(KXYSelector*, const char*);
    using KXYSelector_Metacall_Callback = int (*)(KXYSelector*, int, int, void**);
    using KXYSelector_MinimumSizeHint_Callback = QSize* (*)(const KXYSelector*);
    using KXYSelector_DrawContents_Callback = void (*)(KXYSelector*, QPainter*);
    using KXYSelector_DrawMarker_Callback = void (*)(KXYSelector*, QPainter*, int, int);
    using KXYSelector_PaintEvent_Callback = void (*)(KXYSelector*, QPaintEvent*);
    using KXYSelector_MousePressEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_MouseMoveEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_WheelEvent_Callback = void (*)(KXYSelector*, QWheelEvent*);
    using KXYSelector_DevType_Callback = int (*)(const KXYSelector*);
    using KXYSelector_SetVisible_Callback = void (*)(KXYSelector*, bool);
    using KXYSelector_SizeHint_Callback = QSize* (*)(const KXYSelector*);
    using KXYSelector_HeightForWidth_Callback = int (*)(const KXYSelector*, int);
    using KXYSelector_HasHeightForWidth_Callback = bool (*)(const KXYSelector*);
    using KXYSelector_PaintEngine_Callback = QPaintEngine* (*)(const KXYSelector*);
    using KXYSelector_Event_Callback = bool (*)(KXYSelector*, QEvent*);
    using KXYSelector_MouseReleaseEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_MouseDoubleClickEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_KeyPressEvent_Callback = void (*)(KXYSelector*, QKeyEvent*);
    using KXYSelector_KeyReleaseEvent_Callback = void (*)(KXYSelector*, QKeyEvent*);
    using KXYSelector_FocusInEvent_Callback = void (*)(KXYSelector*, QFocusEvent*);
    using KXYSelector_FocusOutEvent_Callback = void (*)(KXYSelector*, QFocusEvent*);
    using KXYSelector_EnterEvent_Callback = void (*)(KXYSelector*, QEnterEvent*);
    using KXYSelector_LeaveEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_MoveEvent_Callback = void (*)(KXYSelector*, QMoveEvent*);
    using KXYSelector_ResizeEvent_Callback = void (*)(KXYSelector*, QResizeEvent*);
    using KXYSelector_CloseEvent_Callback = void (*)(KXYSelector*, QCloseEvent*);
    using KXYSelector_ContextMenuEvent_Callback = void (*)(KXYSelector*, QContextMenuEvent*);
    using KXYSelector_TabletEvent_Callback = void (*)(KXYSelector*, QTabletEvent*);
    using KXYSelector_ActionEvent_Callback = void (*)(KXYSelector*, QActionEvent*);
    using KXYSelector_DragEnterEvent_Callback = void (*)(KXYSelector*, QDragEnterEvent*);
    using KXYSelector_DragMoveEvent_Callback = void (*)(KXYSelector*, QDragMoveEvent*);
    using KXYSelector_DragLeaveEvent_Callback = void (*)(KXYSelector*, QDragLeaveEvent*);
    using KXYSelector_DropEvent_Callback = void (*)(KXYSelector*, QDropEvent*);
    using KXYSelector_ShowEvent_Callback = void (*)(KXYSelector*, QShowEvent*);
    using KXYSelector_HideEvent_Callback = void (*)(KXYSelector*, QHideEvent*);
    using KXYSelector_NativeEvent_Callback = bool (*)(KXYSelector*, libqt_string, void*, intptr_t*);
    using KXYSelector_ChangeEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_Metric_Callback = int (*)(const KXYSelector*, int);
    using KXYSelector_InitPainter_Callback = void (*)(const KXYSelector*, QPainter*);
    using KXYSelector_Redirected_Callback = QPaintDevice* (*)(const KXYSelector*, QPoint*);
    using KXYSelector_SharedPainter_Callback = QPainter* (*)(const KXYSelector*);
    using KXYSelector_InputMethodEvent_Callback = void (*)(KXYSelector*, QInputMethodEvent*);
    using KXYSelector_InputMethodQuery_Callback = QVariant* (*)(const KXYSelector*, int);
    using KXYSelector_FocusNextPrevChild_Callback = bool (*)(KXYSelector*, bool);
    using KXYSelector_EventFilter_Callback = bool (*)(KXYSelector*, QObject*, QEvent*);
    using KXYSelector_TimerEvent_Callback = void (*)(KXYSelector*, QTimerEvent*);
    using KXYSelector_ChildEvent_Callback = void (*)(KXYSelector*, QChildEvent*);
    using KXYSelector_CustomEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_ConnectNotify_Callback = void (*)(KXYSelector*, QMetaMethod*);
    using KXYSelector_DisconnectNotify_Callback = void (*)(KXYSelector*, QMetaMethod*);
    using KXYSelector::create;
    using KXYSelector::destroy;
    using KXYSelector::focusNextChild;
    using KXYSelector::focusPreviousChild;
    using KXYSelector::getDecodedMetricF;
    using KXYSelector::isSignalConnected;
    using KXYSelector::receivers;
    using KXYSelector::sender;
    using KXYSelector::senderSignalIndex;
    using KXYSelector::updateMicroFocus;
    using KXYSelector::valuesFromPosition;

    // Instance callback storage
    KXYSelector_MetaObject_Callback kxyselector_metaobject_callback = nullptr;
    KXYSelector_Metacast_Callback kxyselector_metacast_callback = nullptr;
    KXYSelector_Metacall_Callback kxyselector_metacall_callback = nullptr;
    KXYSelector_MinimumSizeHint_Callback kxyselector_minimumsizehint_callback = nullptr;
    KXYSelector_DrawContents_Callback kxyselector_drawcontents_callback = nullptr;
    KXYSelector_DrawMarker_Callback kxyselector_drawmarker_callback = nullptr;
    KXYSelector_PaintEvent_Callback kxyselector_paintevent_callback = nullptr;
    KXYSelector_MousePressEvent_Callback kxyselector_mousepressevent_callback = nullptr;
    KXYSelector_MouseMoveEvent_Callback kxyselector_mousemoveevent_callback = nullptr;
    KXYSelector_WheelEvent_Callback kxyselector_wheelevent_callback = nullptr;
    KXYSelector_DevType_Callback kxyselector_devtype_callback = nullptr;
    KXYSelector_SetVisible_Callback kxyselector_setvisible_callback = nullptr;
    KXYSelector_SizeHint_Callback kxyselector_sizehint_callback = nullptr;
    KXYSelector_HeightForWidth_Callback kxyselector_heightforwidth_callback = nullptr;
    KXYSelector_HasHeightForWidth_Callback kxyselector_hasheightforwidth_callback = nullptr;
    KXYSelector_PaintEngine_Callback kxyselector_paintengine_callback = nullptr;
    KXYSelector_Event_Callback kxyselector_event_callback = nullptr;
    KXYSelector_MouseReleaseEvent_Callback kxyselector_mousereleaseevent_callback = nullptr;
    KXYSelector_MouseDoubleClickEvent_Callback kxyselector_mousedoubleclickevent_callback = nullptr;
    KXYSelector_KeyPressEvent_Callback kxyselector_keypressevent_callback = nullptr;
    KXYSelector_KeyReleaseEvent_Callback kxyselector_keyreleaseevent_callback = nullptr;
    KXYSelector_FocusInEvent_Callback kxyselector_focusinevent_callback = nullptr;
    KXYSelector_FocusOutEvent_Callback kxyselector_focusoutevent_callback = nullptr;
    KXYSelector_EnterEvent_Callback kxyselector_enterevent_callback = nullptr;
    KXYSelector_LeaveEvent_Callback kxyselector_leaveevent_callback = nullptr;
    KXYSelector_MoveEvent_Callback kxyselector_moveevent_callback = nullptr;
    KXYSelector_ResizeEvent_Callback kxyselector_resizeevent_callback = nullptr;
    KXYSelector_CloseEvent_Callback kxyselector_closeevent_callback = nullptr;
    KXYSelector_ContextMenuEvent_Callback kxyselector_contextmenuevent_callback = nullptr;
    KXYSelector_TabletEvent_Callback kxyselector_tabletevent_callback = nullptr;
    KXYSelector_ActionEvent_Callback kxyselector_actionevent_callback = nullptr;
    KXYSelector_DragEnterEvent_Callback kxyselector_dragenterevent_callback = nullptr;
    KXYSelector_DragMoveEvent_Callback kxyselector_dragmoveevent_callback = nullptr;
    KXYSelector_DragLeaveEvent_Callback kxyselector_dragleaveevent_callback = nullptr;
    KXYSelector_DropEvent_Callback kxyselector_dropevent_callback = nullptr;
    KXYSelector_ShowEvent_Callback kxyselector_showevent_callback = nullptr;
    KXYSelector_HideEvent_Callback kxyselector_hideevent_callback = nullptr;
    KXYSelector_NativeEvent_Callback kxyselector_nativeevent_callback = nullptr;
    KXYSelector_ChangeEvent_Callback kxyselector_changeevent_callback = nullptr;
    KXYSelector_Metric_Callback kxyselector_metric_callback = nullptr;
    KXYSelector_InitPainter_Callback kxyselector_initpainter_callback = nullptr;
    KXYSelector_Redirected_Callback kxyselector_redirected_callback = nullptr;
    KXYSelector_SharedPainter_Callback kxyselector_sharedpainter_callback = nullptr;
    KXYSelector_InputMethodEvent_Callback kxyselector_inputmethodevent_callback = nullptr;
    KXYSelector_InputMethodQuery_Callback kxyselector_inputmethodquery_callback = nullptr;
    KXYSelector_FocusNextPrevChild_Callback kxyselector_focusnextprevchild_callback = nullptr;
    KXYSelector_EventFilter_Callback kxyselector_eventfilter_callback = nullptr;
    KXYSelector_TimerEvent_Callback kxyselector_timerevent_callback = nullptr;
    KXYSelector_ChildEvent_Callback kxyselector_childevent_callback = nullptr;
    KXYSelector_CustomEvent_Callback kxyselector_customevent_callback = nullptr;
    KXYSelector_ConnectNotify_Callback kxyselector_connectnotify_callback = nullptr;
    KXYSelector_DisconnectNotify_Callback kxyselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KXYSelector {
        using KXYSelector::actionEvent;
        using KXYSelector::changeEvent;
        using KXYSelector::childEvent;
        using KXYSelector::closeEvent;
        using KXYSelector::connectNotify;
        using KXYSelector::contextMenuEvent;
        using KXYSelector::customEvent;
        using KXYSelector::disconnectNotify;
        using KXYSelector::dragEnterEvent;
        using KXYSelector::dragLeaveEvent;
        using KXYSelector::dragMoveEvent;
        using KXYSelector::drawContents;
        using KXYSelector::drawMarker;
        using KXYSelector::dropEvent;
        using KXYSelector::enterEvent;
        using KXYSelector::event;
        using KXYSelector::focusInEvent;
        using KXYSelector::focusNextPrevChild;
        using KXYSelector::focusOutEvent;
        using KXYSelector::hideEvent;
        using KXYSelector::initPainter;
        using KXYSelector::inputMethodEvent;
        using KXYSelector::keyPressEvent;
        using KXYSelector::keyReleaseEvent;
        using KXYSelector::leaveEvent;
        using KXYSelector::metric;
        using KXYSelector::mouseDoubleClickEvent;
        using KXYSelector::mouseMoveEvent;
        using KXYSelector::mousePressEvent;
        using KXYSelector::mouseReleaseEvent;
        using KXYSelector::moveEvent;
        using KXYSelector::nativeEvent;
        using KXYSelector::paintEvent;
        using KXYSelector::redirected;
        using KXYSelector::resizeEvent;
        using KXYSelector::sharedPainter;
        using KXYSelector::showEvent;
        using KXYSelector::tabletEvent;
        using KXYSelector::timerEvent;
        using KXYSelector::wheelEvent;
    };

    VirtualKXYSelector(QWidget* parent) : KXYSelector(parent) {};
    VirtualKXYSelector() : KXYSelector() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kxyselector_metaobject_callback) {
            QMetaObject* callback_ret = kxyselector_metaobject_callback(this);
            return callback_ret;
        }
        return KXYSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxyselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kxyselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxyselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kxyselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kxyselector_minimumsizehint_callback) {
            QSize* callback_ret = kxyselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXYSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kxyselector_drawcontents_callback) {
            QPainter* cbval1 = param1;
            kxyselector_drawcontents_callback(this, cbval1);
            return;
        }
        KXYSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawMarker(QPainter* p, int xp, int yp) override {
        if (kxyselector_drawmarker_callback) {
            QPainter* cbval1 = p;
            int cbval2 = xp;
            int cbval3 = yp;
            kxyselector_drawmarker_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KXYSelector::drawMarker(p, xp, yp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kxyselector_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kxyselector_paintevent_callback(this, cbval1);
            return;
        }
        KXYSelector::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kxyselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kxyselector_mousepressevent_callback(this, cbval1);
            return;
        }
        KXYSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kxyselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kxyselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        KXYSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kxyselector_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kxyselector_wheelevent_callback(this, cbval1);
            return;
        }
        KXYSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kxyselector_devtype_callback) {
            int callback_ret = kxyselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kxyselector_setvisible_callback) {
            bool cbval1 = visible;
            kxyselector_setvisible_callback(this, cbval1);
            return;
        }
        KXYSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kxyselector_sizehint_callback) {
            QSize* callback_ret = kxyselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXYSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kxyselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kxyselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kxyselector_hasheightforwidth_callback) {
            bool callback_ret = kxyselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KXYSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kxyselector_paintengine_callback) {
            QPaintEngine* callback_ret = kxyselector_paintengine_callback(this);
            return callback_ret;
        }
        return KXYSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxyselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kxyselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kxyselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kxyselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KXYSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kxyselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kxyselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KXYSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kxyselector_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kxyselector_keypressevent_callback(this, cbval1);
            return;
        }
        KXYSelector::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kxyselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kxyselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KXYSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kxyselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kxyselector_focusinevent_callback(this, cbval1);
            return;
        }
        KXYSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kxyselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kxyselector_focusoutevent_callback(this, cbval1);
            return;
        }
        KXYSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kxyselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kxyselector_enterevent_callback(this, cbval1);
            return;
        }
        KXYSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kxyselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            kxyselector_leaveevent_callback(this, cbval1);
            return;
        }
        KXYSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kxyselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kxyselector_moveevent_callback(this, cbval1);
            return;
        }
        KXYSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kxyselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kxyselector_resizeevent_callback(this, cbval1);
            return;
        }
        KXYSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kxyselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kxyselector_closeevent_callback(this, cbval1);
            return;
        }
        KXYSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kxyselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kxyselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        KXYSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kxyselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kxyselector_tabletevent_callback(this, cbval1);
            return;
        }
        KXYSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kxyselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kxyselector_actionevent_callback(this, cbval1);
            return;
        }
        KXYSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kxyselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kxyselector_dragenterevent_callback(this, cbval1);
            return;
        }
        KXYSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kxyselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kxyselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        KXYSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kxyselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kxyselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        KXYSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kxyselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kxyselector_dropevent_callback(this, cbval1);
            return;
        }
        KXYSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kxyselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            kxyselector_showevent_callback(this, cbval1);
            return;
        }
        KXYSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kxyselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kxyselector_hideevent_callback(this, cbval1);
            return;
        }
        KXYSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kxyselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kxyselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KXYSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kxyselector_changeevent_callback) {
            QEvent* cbval1 = param1;
            kxyselector_changeevent_callback(this, cbval1);
            return;
        }
        KXYSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kxyselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kxyselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kxyselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            kxyselector_initpainter_callback(this, cbval1);
            return;
        }
        KXYSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kxyselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kxyselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kxyselector_sharedpainter_callback) {
            QPainter* callback_ret = kxyselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return KXYSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kxyselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kxyselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        KXYSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kxyselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kxyselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXYSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kxyselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kxyselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxyselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kxyselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXYSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxyselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kxyselector_timerevent_callback(this, cbval1);
            return;
        }
        KXYSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxyselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            kxyselector_childevent_callback(this, cbval1);
            return;
        }
        KXYSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxyselector_customevent_callback) {
            QEvent* cbval1 = event;
            kxyselector_customevent_callback(this, cbval1);
            return;
        }
        KXYSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxyselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxyselector_connectnotify_callback(this, cbval1);
            return;
        }
        KXYSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxyselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxyselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        KXYSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void KXYSelector_SuperDrawContents(KXYSelector* self, QPainter* param1);
    friend void KXYSelector_SuperDrawMarker(KXYSelector* self, QPainter* p, int xp, int yp);
    friend void KXYSelector_SuperPaintEvent(KXYSelector* self, QPaintEvent* e);
    friend void KXYSelector_SuperMousePressEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_SuperMouseMoveEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_SuperWheelEvent(KXYSelector* self, QWheelEvent* param1);
    friend bool KXYSelector_SuperEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_SuperMouseReleaseEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_SuperMouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_SuperKeyPressEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_SuperKeyReleaseEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_SuperFocusInEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_SuperFocusOutEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_SuperEnterEvent(KXYSelector* self, QEnterEvent* event);
    friend void KXYSelector_SuperLeaveEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_SuperMoveEvent(KXYSelector* self, QMoveEvent* event);
    friend void KXYSelector_SuperResizeEvent(KXYSelector* self, QResizeEvent* event);
    friend void KXYSelector_SuperCloseEvent(KXYSelector* self, QCloseEvent* event);
    friend void KXYSelector_SuperContextMenuEvent(KXYSelector* self, QContextMenuEvent* event);
    friend void KXYSelector_SuperTabletEvent(KXYSelector* self, QTabletEvent* event);
    friend void KXYSelector_SuperActionEvent(KXYSelector* self, QActionEvent* event);
    friend void KXYSelector_SuperDragEnterEvent(KXYSelector* self, QDragEnterEvent* event);
    friend void KXYSelector_SuperDragMoveEvent(KXYSelector* self, QDragMoveEvent* event);
    friend void KXYSelector_SuperDragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event);
    friend void KXYSelector_SuperDropEvent(KXYSelector* self, QDropEvent* event);
    friend void KXYSelector_SuperShowEvent(KXYSelector* self, QShowEvent* event);
    friend void KXYSelector_SuperHideEvent(KXYSelector* self, QHideEvent* event);
    friend bool KXYSelector_SuperNativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KXYSelector_SuperChangeEvent(KXYSelector* self, QEvent* param1);
    friend int KXYSelector_SuperMetric(const KXYSelector* self, int param1);
    friend void KXYSelector_SuperInitPainter(const KXYSelector* self, QPainter* painter);
    friend QPaintDevice* KXYSelector_SuperRedirected(const KXYSelector* self, QPoint* offset);
    friend QPainter* KXYSelector_SuperSharedPainter(const KXYSelector* self);
    friend void KXYSelector_SuperInputMethodEvent(KXYSelector* self, QInputMethodEvent* param1);
    friend bool KXYSelector_SuperFocusNextPrevChild(KXYSelector* self, bool next);
    friend void KXYSelector_SuperTimerEvent(KXYSelector* self, QTimerEvent* event);
    friend void KXYSelector_SuperChildEvent(KXYSelector* self, QChildEvent* event);
    friend void KXYSelector_SuperCustomEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_SuperConnectNotify(KXYSelector* self, const QMetaMethod* signal);
    friend void KXYSelector_SuperDisconnectNotify(KXYSelector* self, const QMetaMethod* signal);
};

#endif
