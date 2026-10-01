#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDATEPICKER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDATEPICKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDatePicker
class VirtualKDatePicker final : public KDatePicker {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDatePicker_MetaObject_Callback = QMetaObject* (*)(const KDatePicker*);
    using KDatePicker_Metacast_Callback = void* (*)(KDatePicker*, const char*);
    using KDatePicker_Metacall_Callback = int (*)(KDatePicker*, int, int, void**);
    using KDatePicker_SizeHint_Callback = QSize* (*)(const KDatePicker*);
    using KDatePicker_EventFilter_Callback = bool (*)(KDatePicker*, QObject*, QEvent*);
    using KDatePicker_ResizeEvent_Callback = void (*)(KDatePicker*, QResizeEvent*);
    using KDatePicker_ChangeEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_Event_Callback = bool (*)(KDatePicker*, QEvent*);
    using KDatePicker_PaintEvent_Callback = void (*)(KDatePicker*, QPaintEvent*);
    using KDatePicker_InitStyleOption_Callback = void (*)(const KDatePicker*, QStyleOptionFrame*);
    using KDatePicker_DevType_Callback = int (*)(const KDatePicker*);
    using KDatePicker_SetVisible_Callback = void (*)(KDatePicker*, bool);
    using KDatePicker_MinimumSizeHint_Callback = QSize* (*)(const KDatePicker*);
    using KDatePicker_HeightForWidth_Callback = int (*)(const KDatePicker*, int);
    using KDatePicker_HasHeightForWidth_Callback = bool (*)(const KDatePicker*);
    using KDatePicker_PaintEngine_Callback = QPaintEngine* (*)(const KDatePicker*);
    using KDatePicker_MousePressEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseReleaseEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseDoubleClickEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseMoveEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_WheelEvent_Callback = void (*)(KDatePicker*, QWheelEvent*);
    using KDatePicker_KeyPressEvent_Callback = void (*)(KDatePicker*, QKeyEvent*);
    using KDatePicker_KeyReleaseEvent_Callback = void (*)(KDatePicker*, QKeyEvent*);
    using KDatePicker_FocusInEvent_Callback = void (*)(KDatePicker*, QFocusEvent*);
    using KDatePicker_FocusOutEvent_Callback = void (*)(KDatePicker*, QFocusEvent*);
    using KDatePicker_EnterEvent_Callback = void (*)(KDatePicker*, QEnterEvent*);
    using KDatePicker_LeaveEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_MoveEvent_Callback = void (*)(KDatePicker*, QMoveEvent*);
    using KDatePicker_CloseEvent_Callback = void (*)(KDatePicker*, QCloseEvent*);
    using KDatePicker_ContextMenuEvent_Callback = void (*)(KDatePicker*, QContextMenuEvent*);
    using KDatePicker_TabletEvent_Callback = void (*)(KDatePicker*, QTabletEvent*);
    using KDatePicker_ActionEvent_Callback = void (*)(KDatePicker*, QActionEvent*);
    using KDatePicker_DragEnterEvent_Callback = void (*)(KDatePicker*, QDragEnterEvent*);
    using KDatePicker_DragMoveEvent_Callback = void (*)(KDatePicker*, QDragMoveEvent*);
    using KDatePicker_DragLeaveEvent_Callback = void (*)(KDatePicker*, QDragLeaveEvent*);
    using KDatePicker_DropEvent_Callback = void (*)(KDatePicker*, QDropEvent*);
    using KDatePicker_ShowEvent_Callback = void (*)(KDatePicker*, QShowEvent*);
    using KDatePicker_HideEvent_Callback = void (*)(KDatePicker*, QHideEvent*);
    using KDatePicker_NativeEvent_Callback = bool (*)(KDatePicker*, libqt_string, void*, intptr_t*);
    using KDatePicker_Metric_Callback = int (*)(const KDatePicker*, int);
    using KDatePicker_InitPainter_Callback = void (*)(const KDatePicker*, QPainter*);
    using KDatePicker_Redirected_Callback = QPaintDevice* (*)(const KDatePicker*, QPoint*);
    using KDatePicker_SharedPainter_Callback = QPainter* (*)(const KDatePicker*);
    using KDatePicker_InputMethodEvent_Callback = void (*)(KDatePicker*, QInputMethodEvent*);
    using KDatePicker_InputMethodQuery_Callback = QVariant* (*)(const KDatePicker*, int);
    using KDatePicker_FocusNextPrevChild_Callback = bool (*)(KDatePicker*, bool);
    using KDatePicker_TimerEvent_Callback = void (*)(KDatePicker*, QTimerEvent*);
    using KDatePicker_ChildEvent_Callback = void (*)(KDatePicker*, QChildEvent*);
    using KDatePicker_CustomEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_ConnectNotify_Callback = void (*)(KDatePicker*, QMetaMethod*);
    using KDatePicker_DisconnectNotify_Callback = void (*)(KDatePicker*, QMetaMethod*);
    using KDatePicker::create;
    using KDatePicker::dateChangedSlot;
    using KDatePicker::destroy;
    using KDatePicker::drawFrame;
    using KDatePicker::focusNextChild;
    using KDatePicker::focusPreviousChild;
    using KDatePicker::getDecodedMetricF;
    using KDatePicker::isSignalConnected;
    using KDatePicker::lineEnterPressed;
    using KDatePicker::monthBackwardClicked;
    using KDatePicker::monthForwardClicked;
    using KDatePicker::receivers;
    using KDatePicker::selectMonthClicked;
    using KDatePicker::selectYearClicked;
    using KDatePicker::sender;
    using KDatePicker::senderSignalIndex;
    using KDatePicker::tableClickedSlot;
    using KDatePicker::todayButtonClicked;
    using KDatePicker::uncheckYearSelector;
    using KDatePicker::updateMicroFocus;
    using KDatePicker::weekSelected;
    using KDatePicker::yearBackwardClicked;
    using KDatePicker::yearForwardClicked;

    // Instance callback storage
    KDatePicker_MetaObject_Callback kdatepicker_metaobject_callback = nullptr;
    KDatePicker_Metacast_Callback kdatepicker_metacast_callback = nullptr;
    KDatePicker_Metacall_Callback kdatepicker_metacall_callback = nullptr;
    KDatePicker_SizeHint_Callback kdatepicker_sizehint_callback = nullptr;
    KDatePicker_EventFilter_Callback kdatepicker_eventfilter_callback = nullptr;
    KDatePicker_ResizeEvent_Callback kdatepicker_resizeevent_callback = nullptr;
    KDatePicker_ChangeEvent_Callback kdatepicker_changeevent_callback = nullptr;
    KDatePicker_Event_Callback kdatepicker_event_callback = nullptr;
    KDatePicker_PaintEvent_Callback kdatepicker_paintevent_callback = nullptr;
    KDatePicker_InitStyleOption_Callback kdatepicker_initstyleoption_callback = nullptr;
    KDatePicker_DevType_Callback kdatepicker_devtype_callback = nullptr;
    KDatePicker_SetVisible_Callback kdatepicker_setvisible_callback = nullptr;
    KDatePicker_MinimumSizeHint_Callback kdatepicker_minimumsizehint_callback = nullptr;
    KDatePicker_HeightForWidth_Callback kdatepicker_heightforwidth_callback = nullptr;
    KDatePicker_HasHeightForWidth_Callback kdatepicker_hasheightforwidth_callback = nullptr;
    KDatePicker_PaintEngine_Callback kdatepicker_paintengine_callback = nullptr;
    KDatePicker_MousePressEvent_Callback kdatepicker_mousepressevent_callback = nullptr;
    KDatePicker_MouseReleaseEvent_Callback kdatepicker_mousereleaseevent_callback = nullptr;
    KDatePicker_MouseDoubleClickEvent_Callback kdatepicker_mousedoubleclickevent_callback = nullptr;
    KDatePicker_MouseMoveEvent_Callback kdatepicker_mousemoveevent_callback = nullptr;
    KDatePicker_WheelEvent_Callback kdatepicker_wheelevent_callback = nullptr;
    KDatePicker_KeyPressEvent_Callback kdatepicker_keypressevent_callback = nullptr;
    KDatePicker_KeyReleaseEvent_Callback kdatepicker_keyreleaseevent_callback = nullptr;
    KDatePicker_FocusInEvent_Callback kdatepicker_focusinevent_callback = nullptr;
    KDatePicker_FocusOutEvent_Callback kdatepicker_focusoutevent_callback = nullptr;
    KDatePicker_EnterEvent_Callback kdatepicker_enterevent_callback = nullptr;
    KDatePicker_LeaveEvent_Callback kdatepicker_leaveevent_callback = nullptr;
    KDatePicker_MoveEvent_Callback kdatepicker_moveevent_callback = nullptr;
    KDatePicker_CloseEvent_Callback kdatepicker_closeevent_callback = nullptr;
    KDatePicker_ContextMenuEvent_Callback kdatepicker_contextmenuevent_callback = nullptr;
    KDatePicker_TabletEvent_Callback kdatepicker_tabletevent_callback = nullptr;
    KDatePicker_ActionEvent_Callback kdatepicker_actionevent_callback = nullptr;
    KDatePicker_DragEnterEvent_Callback kdatepicker_dragenterevent_callback = nullptr;
    KDatePicker_DragMoveEvent_Callback kdatepicker_dragmoveevent_callback = nullptr;
    KDatePicker_DragLeaveEvent_Callback kdatepicker_dragleaveevent_callback = nullptr;
    KDatePicker_DropEvent_Callback kdatepicker_dropevent_callback = nullptr;
    KDatePicker_ShowEvent_Callback kdatepicker_showevent_callback = nullptr;
    KDatePicker_HideEvent_Callback kdatepicker_hideevent_callback = nullptr;
    KDatePicker_NativeEvent_Callback kdatepicker_nativeevent_callback = nullptr;
    KDatePicker_Metric_Callback kdatepicker_metric_callback = nullptr;
    KDatePicker_InitPainter_Callback kdatepicker_initpainter_callback = nullptr;
    KDatePicker_Redirected_Callback kdatepicker_redirected_callback = nullptr;
    KDatePicker_SharedPainter_Callback kdatepicker_sharedpainter_callback = nullptr;
    KDatePicker_InputMethodEvent_Callback kdatepicker_inputmethodevent_callback = nullptr;
    KDatePicker_InputMethodQuery_Callback kdatepicker_inputmethodquery_callback = nullptr;
    KDatePicker_FocusNextPrevChild_Callback kdatepicker_focusnextprevchild_callback = nullptr;
    KDatePicker_TimerEvent_Callback kdatepicker_timerevent_callback = nullptr;
    KDatePicker_ChildEvent_Callback kdatepicker_childevent_callback = nullptr;
    KDatePicker_CustomEvent_Callback kdatepicker_customevent_callback = nullptr;
    KDatePicker_ConnectNotify_Callback kdatepicker_connectnotify_callback = nullptr;
    KDatePicker_DisconnectNotify_Callback kdatepicker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDatePicker {
        using KDatePicker::actionEvent;
        using KDatePicker::changeEvent;
        using KDatePicker::childEvent;
        using KDatePicker::closeEvent;
        using KDatePicker::connectNotify;
        using KDatePicker::contextMenuEvent;
        using KDatePicker::customEvent;
        using KDatePicker::disconnectNotify;
        using KDatePicker::dragEnterEvent;
        using KDatePicker::dragLeaveEvent;
        using KDatePicker::dragMoveEvent;
        using KDatePicker::dropEvent;
        using KDatePicker::enterEvent;
        using KDatePicker::event;
        using KDatePicker::eventFilter;
        using KDatePicker::focusInEvent;
        using KDatePicker::focusNextPrevChild;
        using KDatePicker::focusOutEvent;
        using KDatePicker::hideEvent;
        using KDatePicker::initPainter;
        using KDatePicker::initStyleOption;
        using KDatePicker::inputMethodEvent;
        using KDatePicker::keyPressEvent;
        using KDatePicker::keyReleaseEvent;
        using KDatePicker::leaveEvent;
        using KDatePicker::metric;
        using KDatePicker::mouseDoubleClickEvent;
        using KDatePicker::mouseMoveEvent;
        using KDatePicker::mousePressEvent;
        using KDatePicker::mouseReleaseEvent;
        using KDatePicker::moveEvent;
        using KDatePicker::nativeEvent;
        using KDatePicker::paintEvent;
        using KDatePicker::redirected;
        using KDatePicker::resizeEvent;
        using KDatePicker::sharedPainter;
        using KDatePicker::showEvent;
        using KDatePicker::tabletEvent;
        using KDatePicker::timerEvent;
        using KDatePicker::wheelEvent;
    };

    VirtualKDatePicker(QWidget* parent) : KDatePicker(parent) {};
    VirtualKDatePicker() : KDatePicker() {};
    VirtualKDatePicker(const QDate& dt) : KDatePicker(dt) {};
    VirtualKDatePicker(const QDate& dt, QWidget* parent) : KDatePicker(dt, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatepicker_metaobject_callback) {
            QMetaObject* callback_ret = kdatepicker_metaobject_callback(this);
            return callback_ret;
        }
        return KDatePicker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatepicker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdatepicker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePicker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatepicker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdatepicker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDatePicker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatepicker_sizehint_callback) {
            QSize* callback_ret = kdatepicker_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePicker::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (kdatepicker_eventfilter_callback) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = kdatepicker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDatePicker::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kdatepicker_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kdatepicker_resizeevent_callback(this, cbval1);
            return;
        }
        KDatePicker::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kdatepicker_changeevent_callback) {
            QEvent* cbval1 = event;
            kdatepicker_changeevent_callback(this, cbval1);
            return;
        }
        KDatePicker::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kdatepicker_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kdatepicker_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePicker::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kdatepicker_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kdatepicker_paintevent_callback(this, cbval1);
            return;
        }
        KDatePicker::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kdatepicker_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kdatepicker_initstyleoption_callback(this, cbval1);
            return;
        }
        KDatePicker::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatepicker_devtype_callback) {
            int callback_ret = kdatepicker_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KDatePicker::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatepicker_setvisible_callback) {
            bool cbval1 = visible;
            kdatepicker_setvisible_callback(this, cbval1);
            return;
        }
        KDatePicker::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatepicker_minimumsizehint_callback) {
            QSize* callback_ret = kdatepicker_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePicker::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatepicker_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kdatepicker_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDatePicker::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatepicker_hasheightforwidth_callback) {
            bool callback_ret = kdatepicker_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KDatePicker::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatepicker_paintengine_callback) {
            QPaintEngine* callback_ret = kdatepicker_paintengine_callback(this);
            return callback_ret;
        }
        return KDatePicker::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatepicker_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatepicker_mousepressevent_callback(this, cbval1);
            return;
        }
        KDatePicker::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdatepicker_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatepicker_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KDatePicker::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatepicker_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatepicker_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KDatePicker::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatepicker_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatepicker_mousemoveevent_callback(this, cbval1);
            return;
        }
        KDatePicker::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatepicker_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kdatepicker_wheelevent_callback(this, cbval1);
            return;
        }
        KDatePicker::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatepicker_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatepicker_keypressevent_callback(this, cbval1);
            return;
        }
        KDatePicker::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatepicker_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatepicker_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KDatePicker::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatepicker_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatepicker_focusinevent_callback(this, cbval1);
            return;
        }
        KDatePicker::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatepicker_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatepicker_focusoutevent_callback(this, cbval1);
            return;
        }
        KDatePicker::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatepicker_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kdatepicker_enterevent_callback(this, cbval1);
            return;
        }
        KDatePicker::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatepicker_leaveevent_callback) {
            QEvent* cbval1 = event;
            kdatepicker_leaveevent_callback(this, cbval1);
            return;
        }
        KDatePicker::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatepicker_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kdatepicker_moveevent_callback(this, cbval1);
            return;
        }
        KDatePicker::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatepicker_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kdatepicker_closeevent_callback(this, cbval1);
            return;
        }
        KDatePicker::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatepicker_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kdatepicker_contextmenuevent_callback(this, cbval1);
            return;
        }
        KDatePicker::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatepicker_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kdatepicker_tabletevent_callback(this, cbval1);
            return;
        }
        KDatePicker::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatepicker_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kdatepicker_actionevent_callback(this, cbval1);
            return;
        }
        KDatePicker::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatepicker_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kdatepicker_dragenterevent_callback(this, cbval1);
            return;
        }
        KDatePicker::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatepicker_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kdatepicker_dragmoveevent_callback(this, cbval1);
            return;
        }
        KDatePicker::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatepicker_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kdatepicker_dragleaveevent_callback(this, cbval1);
            return;
        }
        KDatePicker::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatepicker_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kdatepicker_dropevent_callback(this, cbval1);
            return;
        }
        KDatePicker::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatepicker_showevent_callback) {
            QShowEvent* cbval1 = event;
            kdatepicker_showevent_callback(this, cbval1);
            return;
        }
        KDatePicker::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdatepicker_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kdatepicker_hideevent_callback(this, cbval1);
            return;
        }
        KDatePicker::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatepicker_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kdatepicker_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KDatePicker::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatepicker_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kdatepicker_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDatePicker::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatepicker_initpainter_callback) {
            QPainter* cbval1 = painter;
            kdatepicker_initpainter_callback(this, cbval1);
            return;
        }
        KDatePicker::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatepicker_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kdatepicker_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePicker::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatepicker_sharedpainter_callback) {
            QPainter* callback_ret = kdatepicker_sharedpainter_callback(this);
            return callback_ret;
        }
        return KDatePicker::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatepicker_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kdatepicker_inputmethodevent_callback(this, cbval1);
            return;
        }
        KDatePicker::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatepicker_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kdatepicker_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePicker::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatepicker_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kdatepicker_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePicker::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatepicker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdatepicker_timerevent_callback(this, cbval1);
            return;
        }
        KDatePicker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatepicker_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdatepicker_childevent_callback(this, cbval1);
            return;
        }
        KDatePicker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatepicker_customevent_callback) {
            QEvent* cbval1 = event;
            kdatepicker_customevent_callback(this, cbval1);
            return;
        }
        KDatePicker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatepicker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatepicker_connectnotify_callback(this, cbval1);
            return;
        }
        KDatePicker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatepicker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatepicker_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDatePicker::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KDatePicker_SuperEventFilter(KDatePicker* self, QObject* o, QEvent* e);
    friend void KDatePicker_SuperResizeEvent(KDatePicker* self, QResizeEvent* param1);
    friend void KDatePicker_SuperChangeEvent(KDatePicker* self, QEvent* event);
    friend bool KDatePicker_SuperEvent(KDatePicker* self, QEvent* e);
    friend void KDatePicker_SuperPaintEvent(KDatePicker* self, QPaintEvent* param1);
    friend void KDatePicker_SuperInitStyleOption(const KDatePicker* self, QStyleOptionFrame* option);
    friend void KDatePicker_SuperMousePressEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_SuperMouseReleaseEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_SuperMouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_SuperMouseMoveEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_SuperWheelEvent(KDatePicker* self, QWheelEvent* event);
    friend void KDatePicker_SuperKeyPressEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_SuperKeyReleaseEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_SuperFocusInEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_SuperFocusOutEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_SuperEnterEvent(KDatePicker* self, QEnterEvent* event);
    friend void KDatePicker_SuperLeaveEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_SuperMoveEvent(KDatePicker* self, QMoveEvent* event);
    friend void KDatePicker_SuperCloseEvent(KDatePicker* self, QCloseEvent* event);
    friend void KDatePicker_SuperContextMenuEvent(KDatePicker* self, QContextMenuEvent* event);
    friend void KDatePicker_SuperTabletEvent(KDatePicker* self, QTabletEvent* event);
    friend void KDatePicker_SuperActionEvent(KDatePicker* self, QActionEvent* event);
    friend void KDatePicker_SuperDragEnterEvent(KDatePicker* self, QDragEnterEvent* event);
    friend void KDatePicker_SuperDragMoveEvent(KDatePicker* self, QDragMoveEvent* event);
    friend void KDatePicker_SuperDragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event);
    friend void KDatePicker_SuperDropEvent(KDatePicker* self, QDropEvent* event);
    friend void KDatePicker_SuperShowEvent(KDatePicker* self, QShowEvent* event);
    friend void KDatePicker_SuperHideEvent(KDatePicker* self, QHideEvent* event);
    friend bool KDatePicker_SuperNativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDatePicker_SuperMetric(const KDatePicker* self, int param1);
    friend void KDatePicker_SuperInitPainter(const KDatePicker* self, QPainter* painter);
    friend QPaintDevice* KDatePicker_SuperRedirected(const KDatePicker* self, QPoint* offset);
    friend QPainter* KDatePicker_SuperSharedPainter(const KDatePicker* self);
    friend void KDatePicker_SuperInputMethodEvent(KDatePicker* self, QInputMethodEvent* param1);
    friend bool KDatePicker_SuperFocusNextPrevChild(KDatePicker* self, bool next);
    friend void KDatePicker_SuperTimerEvent(KDatePicker* self, QTimerEvent* event);
    friend void KDatePicker_SuperChildEvent(KDatePicker* self, QChildEvent* event);
    friend void KDatePicker_SuperCustomEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_SuperConnectNotify(KDatePicker* self, const QMetaMethod* signal);
    friend void KDatePicker_SuperDisconnectNotify(KDatePicker* self, const QMetaMethod* signal);
};

#endif
