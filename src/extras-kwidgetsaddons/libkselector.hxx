#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSELECTOR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKSELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelector
class VirtualKSelector final : public KSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using KSelector_MetaObject_Callback = QMetaObject* (*)(const KSelector*);
    using KSelector_Metacast_Callback = void* (*)(KSelector*, const char*);
    using KSelector_Metacall_Callback = int (*)(KSelector*, int, int, void**);
    using KSelector_DrawContents_Callback = void (*)(KSelector*, QPainter*);
    using KSelector_DrawArrow_Callback = void (*)(KSelector*, QPainter*, QPoint*);
    using KSelector_PaintEvent_Callback = void (*)(KSelector*, QPaintEvent*);
    using KSelector_MousePressEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_MouseMoveEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_MouseReleaseEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_WheelEvent_Callback = void (*)(KSelector*, QWheelEvent*);
    using KSelector_Event_Callback = bool (*)(KSelector*, QEvent*);
    using KSelector_SliderChange_Callback = void (*)(KSelector*, int);
    using KSelector_KeyPressEvent_Callback = void (*)(KSelector*, QKeyEvent*);
    using KSelector_TimerEvent_Callback = void (*)(KSelector*, QTimerEvent*);
    using KSelector_ChangeEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_DevType_Callback = int (*)(const KSelector*);
    using KSelector_SetVisible_Callback = void (*)(KSelector*, bool);
    using KSelector_SizeHint_Callback = QSize* (*)(const KSelector*);
    using KSelector_MinimumSizeHint_Callback = QSize* (*)(const KSelector*);
    using KSelector_HeightForWidth_Callback = int (*)(const KSelector*, int);
    using KSelector_HasHeightForWidth_Callback = bool (*)(const KSelector*);
    using KSelector_PaintEngine_Callback = QPaintEngine* (*)(const KSelector*);
    using KSelector_MouseDoubleClickEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_KeyReleaseEvent_Callback = void (*)(KSelector*, QKeyEvent*);
    using KSelector_FocusInEvent_Callback = void (*)(KSelector*, QFocusEvent*);
    using KSelector_FocusOutEvent_Callback = void (*)(KSelector*, QFocusEvent*);
    using KSelector_EnterEvent_Callback = void (*)(KSelector*, QEnterEvent*);
    using KSelector_LeaveEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_MoveEvent_Callback = void (*)(KSelector*, QMoveEvent*);
    using KSelector_ResizeEvent_Callback = void (*)(KSelector*, QResizeEvent*);
    using KSelector_CloseEvent_Callback = void (*)(KSelector*, QCloseEvent*);
    using KSelector_ContextMenuEvent_Callback = void (*)(KSelector*, QContextMenuEvent*);
    using KSelector_TabletEvent_Callback = void (*)(KSelector*, QTabletEvent*);
    using KSelector_ActionEvent_Callback = void (*)(KSelector*, QActionEvent*);
    using KSelector_DragEnterEvent_Callback = void (*)(KSelector*, QDragEnterEvent*);
    using KSelector_DragMoveEvent_Callback = void (*)(KSelector*, QDragMoveEvent*);
    using KSelector_DragLeaveEvent_Callback = void (*)(KSelector*, QDragLeaveEvent*);
    using KSelector_DropEvent_Callback = void (*)(KSelector*, QDropEvent*);
    using KSelector_ShowEvent_Callback = void (*)(KSelector*, QShowEvent*);
    using KSelector_HideEvent_Callback = void (*)(KSelector*, QHideEvent*);
    using KSelector_NativeEvent_Callback = bool (*)(KSelector*, libqt_string, void*, intptr_t*);
    using KSelector_Metric_Callback = int (*)(const KSelector*, int);
    using KSelector_InitPainter_Callback = void (*)(const KSelector*, QPainter*);
    using KSelector_Redirected_Callback = QPaintDevice* (*)(const KSelector*, QPoint*);
    using KSelector_SharedPainter_Callback = QPainter* (*)(const KSelector*);
    using KSelector_InputMethodEvent_Callback = void (*)(KSelector*, QInputMethodEvent*);
    using KSelector_InputMethodQuery_Callback = QVariant* (*)(const KSelector*, int);
    using KSelector_FocusNextPrevChild_Callback = bool (*)(KSelector*, bool);
    using KSelector_EventFilter_Callback = bool (*)(KSelector*, QObject*, QEvent*);
    using KSelector_ChildEvent_Callback = void (*)(KSelector*, QChildEvent*);
    using KSelector_CustomEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_ConnectNotify_Callback = void (*)(KSelector*, QMetaMethod*);
    using KSelector_DisconnectNotify_Callback = void (*)(KSelector*, QMetaMethod*);
    using KSelector::create;
    using KSelector::destroy;
    using KSelector::focusNextChild;
    using KSelector::focusPreviousChild;
    using KSelector::getDecodedMetricF;
    using KSelector::isSignalConnected;
    using KSelector::receivers;
    using KSelector::repeatAction;
    using KSelector::sender;
    using KSelector::senderSignalIndex;
    using KSelector::setRepeatAction;
    using KSelector::updateMicroFocus;

    // Instance callback storage
    KSelector_MetaObject_Callback kselector_metaobject_callback = nullptr;
    KSelector_Metacast_Callback kselector_metacast_callback = nullptr;
    KSelector_Metacall_Callback kselector_metacall_callback = nullptr;
    KSelector_DrawContents_Callback kselector_drawcontents_callback = nullptr;
    KSelector_DrawArrow_Callback kselector_drawarrow_callback = nullptr;
    KSelector_PaintEvent_Callback kselector_paintevent_callback = nullptr;
    KSelector_MousePressEvent_Callback kselector_mousepressevent_callback = nullptr;
    KSelector_MouseMoveEvent_Callback kselector_mousemoveevent_callback = nullptr;
    KSelector_MouseReleaseEvent_Callback kselector_mousereleaseevent_callback = nullptr;
    KSelector_WheelEvent_Callback kselector_wheelevent_callback = nullptr;
    KSelector_Event_Callback kselector_event_callback = nullptr;
    KSelector_SliderChange_Callback kselector_sliderchange_callback = nullptr;
    KSelector_KeyPressEvent_Callback kselector_keypressevent_callback = nullptr;
    KSelector_TimerEvent_Callback kselector_timerevent_callback = nullptr;
    KSelector_ChangeEvent_Callback kselector_changeevent_callback = nullptr;
    KSelector_DevType_Callback kselector_devtype_callback = nullptr;
    KSelector_SetVisible_Callback kselector_setvisible_callback = nullptr;
    KSelector_SizeHint_Callback kselector_sizehint_callback = nullptr;
    KSelector_MinimumSizeHint_Callback kselector_minimumsizehint_callback = nullptr;
    KSelector_HeightForWidth_Callback kselector_heightforwidth_callback = nullptr;
    KSelector_HasHeightForWidth_Callback kselector_hasheightforwidth_callback = nullptr;
    KSelector_PaintEngine_Callback kselector_paintengine_callback = nullptr;
    KSelector_MouseDoubleClickEvent_Callback kselector_mousedoubleclickevent_callback = nullptr;
    KSelector_KeyReleaseEvent_Callback kselector_keyreleaseevent_callback = nullptr;
    KSelector_FocusInEvent_Callback kselector_focusinevent_callback = nullptr;
    KSelector_FocusOutEvent_Callback kselector_focusoutevent_callback = nullptr;
    KSelector_EnterEvent_Callback kselector_enterevent_callback = nullptr;
    KSelector_LeaveEvent_Callback kselector_leaveevent_callback = nullptr;
    KSelector_MoveEvent_Callback kselector_moveevent_callback = nullptr;
    KSelector_ResizeEvent_Callback kselector_resizeevent_callback = nullptr;
    KSelector_CloseEvent_Callback kselector_closeevent_callback = nullptr;
    KSelector_ContextMenuEvent_Callback kselector_contextmenuevent_callback = nullptr;
    KSelector_TabletEvent_Callback kselector_tabletevent_callback = nullptr;
    KSelector_ActionEvent_Callback kselector_actionevent_callback = nullptr;
    KSelector_DragEnterEvent_Callback kselector_dragenterevent_callback = nullptr;
    KSelector_DragMoveEvent_Callback kselector_dragmoveevent_callback = nullptr;
    KSelector_DragLeaveEvent_Callback kselector_dragleaveevent_callback = nullptr;
    KSelector_DropEvent_Callback kselector_dropevent_callback = nullptr;
    KSelector_ShowEvent_Callback kselector_showevent_callback = nullptr;
    KSelector_HideEvent_Callback kselector_hideevent_callback = nullptr;
    KSelector_NativeEvent_Callback kselector_nativeevent_callback = nullptr;
    KSelector_Metric_Callback kselector_metric_callback = nullptr;
    KSelector_InitPainter_Callback kselector_initpainter_callback = nullptr;
    KSelector_Redirected_Callback kselector_redirected_callback = nullptr;
    KSelector_SharedPainter_Callback kselector_sharedpainter_callback = nullptr;
    KSelector_InputMethodEvent_Callback kselector_inputmethodevent_callback = nullptr;
    KSelector_InputMethodQuery_Callback kselector_inputmethodquery_callback = nullptr;
    KSelector_FocusNextPrevChild_Callback kselector_focusnextprevchild_callback = nullptr;
    KSelector_EventFilter_Callback kselector_eventfilter_callback = nullptr;
    KSelector_ChildEvent_Callback kselector_childevent_callback = nullptr;
    KSelector_CustomEvent_Callback kselector_customevent_callback = nullptr;
    KSelector_ConnectNotify_Callback kselector_connectnotify_callback = nullptr;
    KSelector_DisconnectNotify_Callback kselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSelector {
        using KSelector::actionEvent;
        using KSelector::changeEvent;
        using KSelector::childEvent;
        using KSelector::closeEvent;
        using KSelector::connectNotify;
        using KSelector::contextMenuEvent;
        using KSelector::customEvent;
        using KSelector::disconnectNotify;
        using KSelector::dragEnterEvent;
        using KSelector::dragLeaveEvent;
        using KSelector::dragMoveEvent;
        using KSelector::drawArrow;
        using KSelector::drawContents;
        using KSelector::dropEvent;
        using KSelector::enterEvent;
        using KSelector::event;
        using KSelector::focusInEvent;
        using KSelector::focusNextPrevChild;
        using KSelector::focusOutEvent;
        using KSelector::hideEvent;
        using KSelector::initPainter;
        using KSelector::inputMethodEvent;
        using KSelector::keyPressEvent;
        using KSelector::keyReleaseEvent;
        using KSelector::leaveEvent;
        using KSelector::metric;
        using KSelector::mouseDoubleClickEvent;
        using KSelector::mouseMoveEvent;
        using KSelector::mousePressEvent;
        using KSelector::mouseReleaseEvent;
        using KSelector::moveEvent;
        using KSelector::nativeEvent;
        using KSelector::paintEvent;
        using KSelector::redirected;
        using KSelector::resizeEvent;
        using KSelector::sharedPainter;
        using KSelector::showEvent;
        using KSelector::sliderChange;
        using KSelector::tabletEvent;
        using KSelector::timerEvent;
        using KSelector::wheelEvent;
    };

    VirtualKSelector(QWidget* parent) : KSelector(parent) {};
    VirtualKSelector() : KSelector() {};
    VirtualKSelector(Qt::Orientation o) : KSelector(o) {};
    VirtualKSelector(Qt::Orientation o, QWidget* parent) : KSelector(o, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselector_metaobject_callback) {
            QMetaObject* callback_ret = kselector_metaobject_callback(this);
            return callback_ret;
        }
        return KSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kselector_drawcontents_callback) {
            QPainter* cbval1 = param1;
            kselector_drawcontents_callback(this, cbval1);
            return;
        }
        KSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawArrow(QPainter* painter, const QPoint& pos) override {
        if (kselector_drawarrow_callback) {
            QPainter* cbval1 = painter;
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);
            kselector_drawarrow_callback(this, cbval1, cbval2);
            return;
        }
        KSelector::drawArrow(painter, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kselector_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kselector_paintevent_callback(this, cbval1);
            return;
        }
        KSelector::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kselector_mousepressevent_callback(this, cbval1);
            return;
        }
        KSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSelector::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kselector_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kselector_wheelevent_callback(this, cbval1);
            return;
        }
        KSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kselector_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSelector::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kselector_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            kselector_sliderchange_callback(this, cbval1);
            return;
        }
        KSelector::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kselector_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            kselector_keypressevent_callback(this, cbval1);
            return;
        }
        KSelector::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kselector_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kselector_timerevent_callback(this, cbval1);
            return;
        }
        KSelector::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kselector_changeevent_callback) {
            QEvent* cbval1 = e;
            kselector_changeevent_callback(this, cbval1);
            return;
        }
        KSelector::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kselector_devtype_callback) {
            int callback_ret = kselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kselector_setvisible_callback) {
            bool cbval1 = visible;
            kselector_setvisible_callback(this, cbval1);
            return;
        }
        KSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kselector_sizehint_callback) {
            QSize* callback_ret = kselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kselector_minimumsizehint_callback) {
            QSize* callback_ret = kselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kselector_hasheightforwidth_callback) {
            bool callback_ret = kselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kselector_paintengine_callback) {
            QPaintEngine* callback_ret = kselector_paintengine_callback(this);
            return callback_ret;
        }
        return KSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kselector_focusinevent_callback(this, cbval1);
            return;
        }
        KSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kselector_focusoutevent_callback(this, cbval1);
            return;
        }
        KSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kselector_enterevent_callback(this, cbval1);
            return;
        }
        KSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            kselector_leaveevent_callback(this, cbval1);
            return;
        }
        KSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kselector_moveevent_callback(this, cbval1);
            return;
        }
        KSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kselector_resizeevent_callback(this, cbval1);
            return;
        }
        KSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kselector_closeevent_callback(this, cbval1);
            return;
        }
        KSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kselector_tabletevent_callback(this, cbval1);
            return;
        }
        KSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kselector_actionevent_callback(this, cbval1);
            return;
        }
        KSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kselector_dragenterevent_callback(this, cbval1);
            return;
        }
        KSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kselector_dropevent_callback(this, cbval1);
            return;
        }
        KSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            kselector_showevent_callback(this, cbval1);
            return;
        }
        KSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kselector_hideevent_callback(this, cbval1);
            return;
        }
        KSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            kselector_initpainter_callback(this, cbval1);
            return;
        }
        KSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kselector_sharedpainter_callback) {
            QPainter* callback_ret = kselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            kselector_childevent_callback(this, cbval1);
            return;
        }
        KSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselector_customevent_callback) {
            QEvent* cbval1 = event;
            kselector_customevent_callback(this, cbval1);
            return;
        }
        KSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselector_connectnotify_callback(this, cbval1);
            return;
        }
        KSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSelector_SuperDrawContents(KSelector* self, QPainter* param1);
    friend void KSelector_SuperDrawArrow(KSelector* self, QPainter* painter, const QPoint* pos);
    friend void KSelector_SuperPaintEvent(KSelector* self, QPaintEvent* param1);
    friend void KSelector_SuperMousePressEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperMouseMoveEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperMouseReleaseEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperWheelEvent(KSelector* self, QWheelEvent* param1);
    friend bool KSelector_SuperEvent(KSelector* self, QEvent* e);
    friend void KSelector_SuperSliderChange(KSelector* self, int change);
    friend void KSelector_SuperKeyPressEvent(KSelector* self, QKeyEvent* ev);
    friend void KSelector_SuperTimerEvent(KSelector* self, QTimerEvent* param1);
    friend void KSelector_SuperChangeEvent(KSelector* self, QEvent* e);
    friend void KSelector_SuperMouseDoubleClickEvent(KSelector* self, QMouseEvent* event);
    friend void KSelector_SuperKeyReleaseEvent(KSelector* self, QKeyEvent* event);
    friend void KSelector_SuperFocusInEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_SuperFocusOutEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_SuperEnterEvent(KSelector* self, QEnterEvent* event);
    friend void KSelector_SuperLeaveEvent(KSelector* self, QEvent* event);
    friend void KSelector_SuperMoveEvent(KSelector* self, QMoveEvent* event);
    friend void KSelector_SuperResizeEvent(KSelector* self, QResizeEvent* event);
    friend void KSelector_SuperCloseEvent(KSelector* self, QCloseEvent* event);
    friend void KSelector_SuperContextMenuEvent(KSelector* self, QContextMenuEvent* event);
    friend void KSelector_SuperTabletEvent(KSelector* self, QTabletEvent* event);
    friend void KSelector_SuperActionEvent(KSelector* self, QActionEvent* event);
    friend void KSelector_SuperDragEnterEvent(KSelector* self, QDragEnterEvent* event);
    friend void KSelector_SuperDragMoveEvent(KSelector* self, QDragMoveEvent* event);
    friend void KSelector_SuperDragLeaveEvent(KSelector* self, QDragLeaveEvent* event);
    friend void KSelector_SuperDropEvent(KSelector* self, QDropEvent* event);
    friend void KSelector_SuperShowEvent(KSelector* self, QShowEvent* event);
    friend void KSelector_SuperHideEvent(KSelector* self, QHideEvent* event);
    friend bool KSelector_SuperNativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSelector_SuperMetric(const KSelector* self, int param1);
    friend void KSelector_SuperInitPainter(const KSelector* self, QPainter* painter);
    friend QPaintDevice* KSelector_SuperRedirected(const KSelector* self, QPoint* offset);
    friend QPainter* KSelector_SuperSharedPainter(const KSelector* self);
    friend void KSelector_SuperInputMethodEvent(KSelector* self, QInputMethodEvent* param1);
    friend bool KSelector_SuperFocusNextPrevChild(KSelector* self, bool next);
    friend void KSelector_SuperChildEvent(KSelector* self, QChildEvent* event);
    friend void KSelector_SuperCustomEvent(KSelector* self, QEvent* event);
    friend void KSelector_SuperConnectNotify(KSelector* self, const QMetaMethod* signal);
    friend void KSelector_SuperDisconnectNotify(KSelector* self, const QMetaMethod* signal);
};

// This class is a subclass of KGradientSelector
class VirtualKGradientSelector final : public KGradientSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using KGradientSelector_MetaObject_Callback = QMetaObject* (*)(const KGradientSelector*);
    using KGradientSelector_Metacast_Callback = void* (*)(KGradientSelector*, const char*);
    using KGradientSelector_Metacall_Callback = int (*)(KGradientSelector*, int, int, void**);
    using KGradientSelector_DrawContents_Callback = void (*)(KGradientSelector*, QPainter*);
    using KGradientSelector_MinimumSize_Callback = QSize* (*)(const KGradientSelector*);
    using KGradientSelector_DrawArrow_Callback = void (*)(KGradientSelector*, QPainter*, QPoint*);
    using KGradientSelector_PaintEvent_Callback = void (*)(KGradientSelector*, QPaintEvent*);
    using KGradientSelector_MousePressEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_MouseMoveEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_MouseReleaseEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_WheelEvent_Callback = void (*)(KGradientSelector*, QWheelEvent*);
    using KGradientSelector_Event_Callback = bool (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_SliderChange_Callback = void (*)(KGradientSelector*, int);
    using KGradientSelector_KeyPressEvent_Callback = void (*)(KGradientSelector*, QKeyEvent*);
    using KGradientSelector_TimerEvent_Callback = void (*)(KGradientSelector*, QTimerEvent*);
    using KGradientSelector_ChangeEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_DevType_Callback = int (*)(const KGradientSelector*);
    using KGradientSelector_SetVisible_Callback = void (*)(KGradientSelector*, bool);
    using KGradientSelector_SizeHint_Callback = QSize* (*)(const KGradientSelector*);
    using KGradientSelector_MinimumSizeHint_Callback = QSize* (*)(const KGradientSelector*);
    using KGradientSelector_HeightForWidth_Callback = int (*)(const KGradientSelector*, int);
    using KGradientSelector_HasHeightForWidth_Callback = bool (*)(const KGradientSelector*);
    using KGradientSelector_PaintEngine_Callback = QPaintEngine* (*)(const KGradientSelector*);
    using KGradientSelector_MouseDoubleClickEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_KeyReleaseEvent_Callback = void (*)(KGradientSelector*, QKeyEvent*);
    using KGradientSelector_FocusInEvent_Callback = void (*)(KGradientSelector*, QFocusEvent*);
    using KGradientSelector_FocusOutEvent_Callback = void (*)(KGradientSelector*, QFocusEvent*);
    using KGradientSelector_EnterEvent_Callback = void (*)(KGradientSelector*, QEnterEvent*);
    using KGradientSelector_LeaveEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_MoveEvent_Callback = void (*)(KGradientSelector*, QMoveEvent*);
    using KGradientSelector_ResizeEvent_Callback = void (*)(KGradientSelector*, QResizeEvent*);
    using KGradientSelector_CloseEvent_Callback = void (*)(KGradientSelector*, QCloseEvent*);
    using KGradientSelector_ContextMenuEvent_Callback = void (*)(KGradientSelector*, QContextMenuEvent*);
    using KGradientSelector_TabletEvent_Callback = void (*)(KGradientSelector*, QTabletEvent*);
    using KGradientSelector_ActionEvent_Callback = void (*)(KGradientSelector*, QActionEvent*);
    using KGradientSelector_DragEnterEvent_Callback = void (*)(KGradientSelector*, QDragEnterEvent*);
    using KGradientSelector_DragMoveEvent_Callback = void (*)(KGradientSelector*, QDragMoveEvent*);
    using KGradientSelector_DragLeaveEvent_Callback = void (*)(KGradientSelector*, QDragLeaveEvent*);
    using KGradientSelector_DropEvent_Callback = void (*)(KGradientSelector*, QDropEvent*);
    using KGradientSelector_ShowEvent_Callback = void (*)(KGradientSelector*, QShowEvent*);
    using KGradientSelector_HideEvent_Callback = void (*)(KGradientSelector*, QHideEvent*);
    using KGradientSelector_NativeEvent_Callback = bool (*)(KGradientSelector*, libqt_string, void*, intptr_t*);
    using KGradientSelector_Metric_Callback = int (*)(const KGradientSelector*, int);
    using KGradientSelector_InitPainter_Callback = void (*)(const KGradientSelector*, QPainter*);
    using KGradientSelector_Redirected_Callback = QPaintDevice* (*)(const KGradientSelector*, QPoint*);
    using KGradientSelector_SharedPainter_Callback = QPainter* (*)(const KGradientSelector*);
    using KGradientSelector_InputMethodEvent_Callback = void (*)(KGradientSelector*, QInputMethodEvent*);
    using KGradientSelector_InputMethodQuery_Callback = QVariant* (*)(const KGradientSelector*, int);
    using KGradientSelector_FocusNextPrevChild_Callback = bool (*)(KGradientSelector*, bool);
    using KGradientSelector_EventFilter_Callback = bool (*)(KGradientSelector*, QObject*, QEvent*);
    using KGradientSelector_ChildEvent_Callback = void (*)(KGradientSelector*, QChildEvent*);
    using KGradientSelector_CustomEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_ConnectNotify_Callback = void (*)(KGradientSelector*, QMetaMethod*);
    using KGradientSelector_DisconnectNotify_Callback = void (*)(KGradientSelector*, QMetaMethod*);
    using KGradientSelector::create;
    using KGradientSelector::destroy;
    using KGradientSelector::focusNextChild;
    using KGradientSelector::focusPreviousChild;
    using KGradientSelector::getDecodedMetricF;
    using KGradientSelector::isSignalConnected;
    using KGradientSelector::receivers;
    using KGradientSelector::repeatAction;
    using KGradientSelector::sender;
    using KGradientSelector::senderSignalIndex;
    using KGradientSelector::setRepeatAction;
    using KGradientSelector::updateMicroFocus;

    // Instance callback storage
    KGradientSelector_MetaObject_Callback kgradientselector_metaobject_callback = nullptr;
    KGradientSelector_Metacast_Callback kgradientselector_metacast_callback = nullptr;
    KGradientSelector_Metacall_Callback kgradientselector_metacall_callback = nullptr;
    KGradientSelector_DrawContents_Callback kgradientselector_drawcontents_callback = nullptr;
    KGradientSelector_MinimumSize_Callback kgradientselector_minimumsize_callback = nullptr;
    KGradientSelector_DrawArrow_Callback kgradientselector_drawarrow_callback = nullptr;
    KGradientSelector_PaintEvent_Callback kgradientselector_paintevent_callback = nullptr;
    KGradientSelector_MousePressEvent_Callback kgradientselector_mousepressevent_callback = nullptr;
    KGradientSelector_MouseMoveEvent_Callback kgradientselector_mousemoveevent_callback = nullptr;
    KGradientSelector_MouseReleaseEvent_Callback kgradientselector_mousereleaseevent_callback = nullptr;
    KGradientSelector_WheelEvent_Callback kgradientselector_wheelevent_callback = nullptr;
    KGradientSelector_Event_Callback kgradientselector_event_callback = nullptr;
    KGradientSelector_SliderChange_Callback kgradientselector_sliderchange_callback = nullptr;
    KGradientSelector_KeyPressEvent_Callback kgradientselector_keypressevent_callback = nullptr;
    KGradientSelector_TimerEvent_Callback kgradientselector_timerevent_callback = nullptr;
    KGradientSelector_ChangeEvent_Callback kgradientselector_changeevent_callback = nullptr;
    KGradientSelector_DevType_Callback kgradientselector_devtype_callback = nullptr;
    KGradientSelector_SetVisible_Callback kgradientselector_setvisible_callback = nullptr;
    KGradientSelector_SizeHint_Callback kgradientselector_sizehint_callback = nullptr;
    KGradientSelector_MinimumSizeHint_Callback kgradientselector_minimumsizehint_callback = nullptr;
    KGradientSelector_HeightForWidth_Callback kgradientselector_heightforwidth_callback = nullptr;
    KGradientSelector_HasHeightForWidth_Callback kgradientselector_hasheightforwidth_callback = nullptr;
    KGradientSelector_PaintEngine_Callback kgradientselector_paintengine_callback = nullptr;
    KGradientSelector_MouseDoubleClickEvent_Callback kgradientselector_mousedoubleclickevent_callback = nullptr;
    KGradientSelector_KeyReleaseEvent_Callback kgradientselector_keyreleaseevent_callback = nullptr;
    KGradientSelector_FocusInEvent_Callback kgradientselector_focusinevent_callback = nullptr;
    KGradientSelector_FocusOutEvent_Callback kgradientselector_focusoutevent_callback = nullptr;
    KGradientSelector_EnterEvent_Callback kgradientselector_enterevent_callback = nullptr;
    KGradientSelector_LeaveEvent_Callback kgradientselector_leaveevent_callback = nullptr;
    KGradientSelector_MoveEvent_Callback kgradientselector_moveevent_callback = nullptr;
    KGradientSelector_ResizeEvent_Callback kgradientselector_resizeevent_callback = nullptr;
    KGradientSelector_CloseEvent_Callback kgradientselector_closeevent_callback = nullptr;
    KGradientSelector_ContextMenuEvent_Callback kgradientselector_contextmenuevent_callback = nullptr;
    KGradientSelector_TabletEvent_Callback kgradientselector_tabletevent_callback = nullptr;
    KGradientSelector_ActionEvent_Callback kgradientselector_actionevent_callback = nullptr;
    KGradientSelector_DragEnterEvent_Callback kgradientselector_dragenterevent_callback = nullptr;
    KGradientSelector_DragMoveEvent_Callback kgradientselector_dragmoveevent_callback = nullptr;
    KGradientSelector_DragLeaveEvent_Callback kgradientselector_dragleaveevent_callback = nullptr;
    KGradientSelector_DropEvent_Callback kgradientselector_dropevent_callback = nullptr;
    KGradientSelector_ShowEvent_Callback kgradientselector_showevent_callback = nullptr;
    KGradientSelector_HideEvent_Callback kgradientselector_hideevent_callback = nullptr;
    KGradientSelector_NativeEvent_Callback kgradientselector_nativeevent_callback = nullptr;
    KGradientSelector_Metric_Callback kgradientselector_metric_callback = nullptr;
    KGradientSelector_InitPainter_Callback kgradientselector_initpainter_callback = nullptr;
    KGradientSelector_Redirected_Callback kgradientselector_redirected_callback = nullptr;
    KGradientSelector_SharedPainter_Callback kgradientselector_sharedpainter_callback = nullptr;
    KGradientSelector_InputMethodEvent_Callback kgradientselector_inputmethodevent_callback = nullptr;
    KGradientSelector_InputMethodQuery_Callback kgradientselector_inputmethodquery_callback = nullptr;
    KGradientSelector_FocusNextPrevChild_Callback kgradientselector_focusnextprevchild_callback = nullptr;
    KGradientSelector_EventFilter_Callback kgradientselector_eventfilter_callback = nullptr;
    KGradientSelector_ChildEvent_Callback kgradientselector_childevent_callback = nullptr;
    KGradientSelector_CustomEvent_Callback kgradientselector_customevent_callback = nullptr;
    KGradientSelector_ConnectNotify_Callback kgradientselector_connectnotify_callback = nullptr;
    KGradientSelector_DisconnectNotify_Callback kgradientselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KGradientSelector {
        using KGradientSelector::actionEvent;
        using KGradientSelector::changeEvent;
        using KGradientSelector::childEvent;
        using KGradientSelector::closeEvent;
        using KGradientSelector::connectNotify;
        using KGradientSelector::contextMenuEvent;
        using KGradientSelector::customEvent;
        using KGradientSelector::disconnectNotify;
        using KGradientSelector::dragEnterEvent;
        using KGradientSelector::dragLeaveEvent;
        using KGradientSelector::dragMoveEvent;
        using KGradientSelector::drawArrow;
        using KGradientSelector::drawContents;
        using KGradientSelector::dropEvent;
        using KGradientSelector::enterEvent;
        using KGradientSelector::event;
        using KGradientSelector::focusInEvent;
        using KGradientSelector::focusNextPrevChild;
        using KGradientSelector::focusOutEvent;
        using KGradientSelector::hideEvent;
        using KGradientSelector::initPainter;
        using KGradientSelector::inputMethodEvent;
        using KGradientSelector::keyPressEvent;
        using KGradientSelector::keyReleaseEvent;
        using KGradientSelector::leaveEvent;
        using KGradientSelector::metric;
        using KGradientSelector::minimumSize;
        using KGradientSelector::mouseDoubleClickEvent;
        using KGradientSelector::mouseMoveEvent;
        using KGradientSelector::mousePressEvent;
        using KGradientSelector::mouseReleaseEvent;
        using KGradientSelector::moveEvent;
        using KGradientSelector::nativeEvent;
        using KGradientSelector::paintEvent;
        using KGradientSelector::redirected;
        using KGradientSelector::resizeEvent;
        using KGradientSelector::sharedPainter;
        using KGradientSelector::showEvent;
        using KGradientSelector::sliderChange;
        using KGradientSelector::tabletEvent;
        using KGradientSelector::timerEvent;
        using KGradientSelector::wheelEvent;
    };

    VirtualKGradientSelector(QWidget* parent) : KGradientSelector(parent) {};
    VirtualKGradientSelector() : KGradientSelector() {};
    VirtualKGradientSelector(Qt::Orientation o) : KGradientSelector(o) {};
    VirtualKGradientSelector(Qt::Orientation o, QWidget* parent) : KGradientSelector(o, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kgradientselector_metaobject_callback) {
            QMetaObject* callback_ret = kgradientselector_metaobject_callback(this);
            return callback_ret;
        }
        return KGradientSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kgradientselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kgradientselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kgradientselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kgradientselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kgradientselector_drawcontents_callback) {
            QPainter* cbval1 = param1;
            kgradientselector_drawcontents_callback(this, cbval1);
            return;
        }
        KGradientSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (kgradientselector_minimumsize_callback) {
            QSize* callback_ret = kgradientselector_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KGradientSelector::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawArrow(QPainter* painter, const QPoint& pos) override {
        if (kgradientselector_drawarrow_callback) {
            QPainter* cbval1 = painter;
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);
            kgradientselector_drawarrow_callback(this, cbval1, cbval2);
            return;
        }
        KGradientSelector::drawArrow(painter, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kgradientselector_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kgradientselector_paintevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kgradientselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kgradientselector_mousepressevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kgradientselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kgradientselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kgradientselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kgradientselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kgradientselector_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kgradientselector_wheelevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kgradientselector_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kgradientselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kgradientselector_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            kgradientselector_sliderchange_callback(this, cbval1);
            return;
        }
        KGradientSelector::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kgradientselector_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            kgradientselector_keypressevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kgradientselector_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kgradientselector_timerevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kgradientselector_changeevent_callback) {
            QEvent* cbval1 = e;
            kgradientselector_changeevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kgradientselector_devtype_callback) {
            int callback_ret = kgradientselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kgradientselector_setvisible_callback) {
            bool cbval1 = visible;
            kgradientselector_setvisible_callback(this, cbval1);
            return;
        }
        KGradientSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kgradientselector_sizehint_callback) {
            QSize* callback_ret = kgradientselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KGradientSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kgradientselector_minimumsizehint_callback) {
            QSize* callback_ret = kgradientselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KGradientSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kgradientselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kgradientselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kgradientselector_hasheightforwidth_callback) {
            bool callback_ret = kgradientselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KGradientSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kgradientselector_paintengine_callback) {
            QPaintEngine* callback_ret = kgradientselector_paintengine_callback(this);
            return callback_ret;
        }
        return KGradientSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kgradientselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kgradientselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kgradientselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kgradientselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kgradientselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kgradientselector_focusinevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kgradientselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kgradientselector_focusoutevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kgradientselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kgradientselector_enterevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kgradientselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            kgradientselector_leaveevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kgradientselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kgradientselector_moveevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kgradientselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kgradientselector_resizeevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kgradientselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kgradientselector_closeevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kgradientselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kgradientselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kgradientselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kgradientselector_tabletevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kgradientselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kgradientselector_actionevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kgradientselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kgradientselector_dragenterevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kgradientselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kgradientselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kgradientselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kgradientselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kgradientselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kgradientselector_dropevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kgradientselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            kgradientselector_showevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kgradientselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kgradientselector_hideevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kgradientselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kgradientselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KGradientSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kgradientselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kgradientselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kgradientselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            kgradientselector_initpainter_callback(this, cbval1);
            return;
        }
        KGradientSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kgradientselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kgradientselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kgradientselector_sharedpainter_callback) {
            QPainter* callback_ret = kgradientselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return KGradientSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kgradientselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kgradientselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kgradientselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kgradientselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KGradientSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kgradientselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kgradientselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kgradientselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kgradientselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KGradientSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kgradientselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            kgradientselector_childevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kgradientselector_customevent_callback) {
            QEvent* cbval1 = event;
            kgradientselector_customevent_callback(this, cbval1);
            return;
        }
        KGradientSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kgradientselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kgradientselector_connectnotify_callback(this, cbval1);
            return;
        }
        KGradientSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kgradientselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kgradientselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        KGradientSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void KGradientSelector_SuperDrawContents(KGradientSelector* self, QPainter* param1);
    friend QSize* KGradientSelector_SuperMinimumSize(const KGradientSelector* self);
    friend void KGradientSelector_SuperDrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos);
    friend void KGradientSelector_SuperPaintEvent(KGradientSelector* self, QPaintEvent* param1);
    friend void KGradientSelector_SuperMousePressEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperMouseMoveEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperMouseReleaseEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperWheelEvent(KGradientSelector* self, QWheelEvent* param1);
    friend bool KGradientSelector_SuperEvent(KGradientSelector* self, QEvent* e);
    friend void KGradientSelector_SuperSliderChange(KGradientSelector* self, int change);
    friend void KGradientSelector_SuperKeyPressEvent(KGradientSelector* self, QKeyEvent* ev);
    friend void KGradientSelector_SuperTimerEvent(KGradientSelector* self, QTimerEvent* param1);
    friend void KGradientSelector_SuperChangeEvent(KGradientSelector* self, QEvent* e);
    friend void KGradientSelector_SuperMouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event);
    friend void KGradientSelector_SuperKeyReleaseEvent(KGradientSelector* self, QKeyEvent* event);
    friend void KGradientSelector_SuperFocusInEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_SuperFocusOutEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_SuperEnterEvent(KGradientSelector* self, QEnterEvent* event);
    friend void KGradientSelector_SuperLeaveEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_SuperMoveEvent(KGradientSelector* self, QMoveEvent* event);
    friend void KGradientSelector_SuperResizeEvent(KGradientSelector* self, QResizeEvent* event);
    friend void KGradientSelector_SuperCloseEvent(KGradientSelector* self, QCloseEvent* event);
    friend void KGradientSelector_SuperContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event);
    friend void KGradientSelector_SuperTabletEvent(KGradientSelector* self, QTabletEvent* event);
    friend void KGradientSelector_SuperActionEvent(KGradientSelector* self, QActionEvent* event);
    friend void KGradientSelector_SuperDragEnterEvent(KGradientSelector* self, QDragEnterEvent* event);
    friend void KGradientSelector_SuperDragMoveEvent(KGradientSelector* self, QDragMoveEvent* event);
    friend void KGradientSelector_SuperDragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event);
    friend void KGradientSelector_SuperDropEvent(KGradientSelector* self, QDropEvent* event);
    friend void KGradientSelector_SuperShowEvent(KGradientSelector* self, QShowEvent* event);
    friend void KGradientSelector_SuperHideEvent(KGradientSelector* self, QHideEvent* event);
    friend bool KGradientSelector_SuperNativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KGradientSelector_SuperMetric(const KGradientSelector* self, int param1);
    friend void KGradientSelector_SuperInitPainter(const KGradientSelector* self, QPainter* painter);
    friend QPaintDevice* KGradientSelector_SuperRedirected(const KGradientSelector* self, QPoint* offset);
    friend QPainter* KGradientSelector_SuperSharedPainter(const KGradientSelector* self);
    friend void KGradientSelector_SuperInputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1);
    friend bool KGradientSelector_SuperFocusNextPrevChild(KGradientSelector* self, bool next);
    friend void KGradientSelector_SuperChildEvent(KGradientSelector* self, QChildEvent* event);
    friend void KGradientSelector_SuperCustomEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_SuperConnectNotify(KGradientSelector* self, const QMetaMethod* signal);
    friend void KGradientSelector_SuperDisconnectNotify(KGradientSelector* self, const QMetaMethod* signal);
};

#endif
