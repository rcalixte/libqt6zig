#pragma once
#ifndef EXTRAS_KCOLORPICKER_LIBKCOLORPICKER_HXX
#define EXTRAS_KCOLORPICKER_LIBKCOLORPICKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of kColorPicker::KColorPicker
class VirtualkColorPickerKColorPicker final : public kColorPicker::KColorPicker {
  public:
    // Virtual class public types (including callbacks and access types)
    using kColorPicker__KColorPicker_MetaObject_Callback = QMetaObject* (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_Metacast_Callback = void* (*)(kColorPicker__KColorPicker*, const char*);
    using kColorPicker__KColorPicker_Metacall_Callback = int (*)(kColorPicker__KColorPicker*, int, int, void**);
    using kColorPicker__KColorPicker_SizeHint_Callback = QSize* (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_MinimumSizeHint_Callback = QSize* (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_Event_Callback = bool (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_MousePressEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_MouseReleaseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_PaintEvent_Callback = void (*)(kColorPicker__KColorPicker*, QPaintEvent*);
    using kColorPicker__KColorPicker_ActionEvent_Callback = void (*)(kColorPicker__KColorPicker*, QActionEvent*);
    using kColorPicker__KColorPicker_EnterEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEnterEvent*);
    using kColorPicker__KColorPicker_LeaveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_TimerEvent_Callback = void (*)(kColorPicker__KColorPicker*, QTimerEvent*);
    using kColorPicker__KColorPicker_ChangeEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_HitButton_Callback = bool (*)(const kColorPicker__KColorPicker*, QPoint*);
    using kColorPicker__KColorPicker_CheckStateSet_Callback = void (*)(kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_NextCheckState_Callback = void (*)(kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_InitStyleOption_Callback = void (*)(const kColorPicker__KColorPicker*, QStyleOptionToolButton*);
    using kColorPicker__KColorPicker_KeyPressEvent_Callback = void (*)(kColorPicker__KColorPicker*, QKeyEvent*);
    using kColorPicker__KColorPicker_KeyReleaseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QKeyEvent*);
    using kColorPicker__KColorPicker_MouseMoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_FocusInEvent_Callback = void (*)(kColorPicker__KColorPicker*, QFocusEvent*);
    using kColorPicker__KColorPicker_FocusOutEvent_Callback = void (*)(kColorPicker__KColorPicker*, QFocusEvent*);
    using kColorPicker__KColorPicker_DevType_Callback = int (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_SetVisible_Callback = void (*)(kColorPicker__KColorPicker*, bool);
    using kColorPicker__KColorPicker_HeightForWidth_Callback = int (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_HasHeightForWidth_Callback = bool (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_PaintEngine_Callback = QPaintEngine* (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_WheelEvent_Callback = void (*)(kColorPicker__KColorPicker*, QWheelEvent*);
    using kColorPicker__KColorPicker_MoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMoveEvent*);
    using kColorPicker__KColorPicker_ResizeEvent_Callback = void (*)(kColorPicker__KColorPicker*, QResizeEvent*);
    using kColorPicker__KColorPicker_CloseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QCloseEvent*);
    using kColorPicker__KColorPicker_ContextMenuEvent_Callback = void (*)(kColorPicker__KColorPicker*, QContextMenuEvent*);
    using kColorPicker__KColorPicker_TabletEvent_Callback = void (*)(kColorPicker__KColorPicker*, QTabletEvent*);
    using kColorPicker__KColorPicker_DragEnterEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragEnterEvent*);
    using kColorPicker__KColorPicker_DragMoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragMoveEvent*);
    using kColorPicker__KColorPicker_DragLeaveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragLeaveEvent*);
    using kColorPicker__KColorPicker_DropEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDropEvent*);
    using kColorPicker__KColorPicker_ShowEvent_Callback = void (*)(kColorPicker__KColorPicker*, QShowEvent*);
    using kColorPicker__KColorPicker_HideEvent_Callback = void (*)(kColorPicker__KColorPicker*, QHideEvent*);
    using kColorPicker__KColorPicker_NativeEvent_Callback = bool (*)(kColorPicker__KColorPicker*, libqt_string, void*, intptr_t*);
    using kColorPicker__KColorPicker_Metric_Callback = int (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_InitPainter_Callback = void (*)(const kColorPicker__KColorPicker*, QPainter*);
    using kColorPicker__KColorPicker_Redirected_Callback = QPaintDevice* (*)(const kColorPicker__KColorPicker*, QPoint*);
    using kColorPicker__KColorPicker_SharedPainter_Callback = QPainter* (*)(const kColorPicker__KColorPicker*);
    using kColorPicker__KColorPicker_InputMethodEvent_Callback = void (*)(kColorPicker__KColorPicker*, QInputMethodEvent*);
    using kColorPicker__KColorPicker_InputMethodQuery_Callback = QVariant* (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_FocusNextPrevChild_Callback = bool (*)(kColorPicker__KColorPicker*, bool);
    using kColorPicker__KColorPicker_EventFilter_Callback = bool (*)(kColorPicker__KColorPicker*, QObject*, QEvent*);
    using kColorPicker__KColorPicker_ChildEvent_Callback = void (*)(kColorPicker__KColorPicker*, QChildEvent*);
    using kColorPicker__KColorPicker_CustomEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_ConnectNotify_Callback = void (*)(kColorPicker__KColorPicker*, QMetaMethod*);
    using kColorPicker__KColorPicker_DisconnectNotify_Callback = void (*)(kColorPicker__KColorPicker*, QMetaMethod*);
    using kColorPicker::KColorPicker::create;
    using kColorPicker::KColorPicker::destroy;
    using kColorPicker::KColorPicker::focusNextChild;
    using kColorPicker::KColorPicker::focusPreviousChild;
    using kColorPicker::KColorPicker::getDecodedMetricF;
    using kColorPicker::KColorPicker::isSignalConnected;
    using kColorPicker::KColorPicker::receivers;
    using kColorPicker::KColorPicker::sender;
    using kColorPicker::KColorPicker::senderSignalIndex;
    using kColorPicker::KColorPicker::updateMicroFocus;

    // Instance callback storage
    kColorPicker__KColorPicker_MetaObject_Callback kcolorpicker__kcolorpicker_metaobject_callback = nullptr;
    kColorPicker__KColorPicker_Metacast_Callback kcolorpicker__kcolorpicker_metacast_callback = nullptr;
    kColorPicker__KColorPicker_Metacall_Callback kcolorpicker__kcolorpicker_metacall_callback = nullptr;
    kColorPicker__KColorPicker_SizeHint_Callback kcolorpicker__kcolorpicker_sizehint_callback = nullptr;
    kColorPicker__KColorPicker_MinimumSizeHint_Callback kcolorpicker__kcolorpicker_minimumsizehint_callback = nullptr;
    kColorPicker__KColorPicker_Event_Callback kcolorpicker__kcolorpicker_event_callback = nullptr;
    kColorPicker__KColorPicker_MousePressEvent_Callback kcolorpicker__kcolorpicker_mousepressevent_callback = nullptr;
    kColorPicker__KColorPicker_MouseReleaseEvent_Callback kcolorpicker__kcolorpicker_mousereleaseevent_callback = nullptr;
    kColorPicker__KColorPicker_PaintEvent_Callback kcolorpicker__kcolorpicker_paintevent_callback = nullptr;
    kColorPicker__KColorPicker_ActionEvent_Callback kcolorpicker__kcolorpicker_actionevent_callback = nullptr;
    kColorPicker__KColorPicker_EnterEvent_Callback kcolorpicker__kcolorpicker_enterevent_callback = nullptr;
    kColorPicker__KColorPicker_LeaveEvent_Callback kcolorpicker__kcolorpicker_leaveevent_callback = nullptr;
    kColorPicker__KColorPicker_TimerEvent_Callback kcolorpicker__kcolorpicker_timerevent_callback = nullptr;
    kColorPicker__KColorPicker_ChangeEvent_Callback kcolorpicker__kcolorpicker_changeevent_callback = nullptr;
    kColorPicker__KColorPicker_HitButton_Callback kcolorpicker__kcolorpicker_hitbutton_callback = nullptr;
    kColorPicker__KColorPicker_CheckStateSet_Callback kcolorpicker__kcolorpicker_checkstateset_callback = nullptr;
    kColorPicker__KColorPicker_NextCheckState_Callback kcolorpicker__kcolorpicker_nextcheckstate_callback = nullptr;
    kColorPicker__KColorPicker_InitStyleOption_Callback kcolorpicker__kcolorpicker_initstyleoption_callback = nullptr;
    kColorPicker__KColorPicker_KeyPressEvent_Callback kcolorpicker__kcolorpicker_keypressevent_callback = nullptr;
    kColorPicker__KColorPicker_KeyReleaseEvent_Callback kcolorpicker__kcolorpicker_keyreleaseevent_callback = nullptr;
    kColorPicker__KColorPicker_MouseMoveEvent_Callback kcolorpicker__kcolorpicker_mousemoveevent_callback = nullptr;
    kColorPicker__KColorPicker_FocusInEvent_Callback kcolorpicker__kcolorpicker_focusinevent_callback = nullptr;
    kColorPicker__KColorPicker_FocusOutEvent_Callback kcolorpicker__kcolorpicker_focusoutevent_callback = nullptr;
    kColorPicker__KColorPicker_DevType_Callback kcolorpicker__kcolorpicker_devtype_callback = nullptr;
    kColorPicker__KColorPicker_SetVisible_Callback kcolorpicker__kcolorpicker_setvisible_callback = nullptr;
    kColorPicker__KColorPicker_HeightForWidth_Callback kcolorpicker__kcolorpicker_heightforwidth_callback = nullptr;
    kColorPicker__KColorPicker_HasHeightForWidth_Callback kcolorpicker__kcolorpicker_hasheightforwidth_callback = nullptr;
    kColorPicker__KColorPicker_PaintEngine_Callback kcolorpicker__kcolorpicker_paintengine_callback = nullptr;
    kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback kcolorpicker__kcolorpicker_mousedoubleclickevent_callback = nullptr;
    kColorPicker__KColorPicker_WheelEvent_Callback kcolorpicker__kcolorpicker_wheelevent_callback = nullptr;
    kColorPicker__KColorPicker_MoveEvent_Callback kcolorpicker__kcolorpicker_moveevent_callback = nullptr;
    kColorPicker__KColorPicker_ResizeEvent_Callback kcolorpicker__kcolorpicker_resizeevent_callback = nullptr;
    kColorPicker__KColorPicker_CloseEvent_Callback kcolorpicker__kcolorpicker_closeevent_callback = nullptr;
    kColorPicker__KColorPicker_ContextMenuEvent_Callback kcolorpicker__kcolorpicker_contextmenuevent_callback = nullptr;
    kColorPicker__KColorPicker_TabletEvent_Callback kcolorpicker__kcolorpicker_tabletevent_callback = nullptr;
    kColorPicker__KColorPicker_DragEnterEvent_Callback kcolorpicker__kcolorpicker_dragenterevent_callback = nullptr;
    kColorPicker__KColorPicker_DragMoveEvent_Callback kcolorpicker__kcolorpicker_dragmoveevent_callback = nullptr;
    kColorPicker__KColorPicker_DragLeaveEvent_Callback kcolorpicker__kcolorpicker_dragleaveevent_callback = nullptr;
    kColorPicker__KColorPicker_DropEvent_Callback kcolorpicker__kcolorpicker_dropevent_callback = nullptr;
    kColorPicker__KColorPicker_ShowEvent_Callback kcolorpicker__kcolorpicker_showevent_callback = nullptr;
    kColorPicker__KColorPicker_HideEvent_Callback kcolorpicker__kcolorpicker_hideevent_callback = nullptr;
    kColorPicker__KColorPicker_NativeEvent_Callback kcolorpicker__kcolorpicker_nativeevent_callback = nullptr;
    kColorPicker__KColorPicker_Metric_Callback kcolorpicker__kcolorpicker_metric_callback = nullptr;
    kColorPicker__KColorPicker_InitPainter_Callback kcolorpicker__kcolorpicker_initpainter_callback = nullptr;
    kColorPicker__KColorPicker_Redirected_Callback kcolorpicker__kcolorpicker_redirected_callback = nullptr;
    kColorPicker__KColorPicker_SharedPainter_Callback kcolorpicker__kcolorpicker_sharedpainter_callback = nullptr;
    kColorPicker__KColorPicker_InputMethodEvent_Callback kcolorpicker__kcolorpicker_inputmethodevent_callback = nullptr;
    kColorPicker__KColorPicker_InputMethodQuery_Callback kcolorpicker__kcolorpicker_inputmethodquery_callback = nullptr;
    kColorPicker__KColorPicker_FocusNextPrevChild_Callback kcolorpicker__kcolorpicker_focusnextprevchild_callback = nullptr;
    kColorPicker__KColorPicker_EventFilter_Callback kcolorpicker__kcolorpicker_eventfilter_callback = nullptr;
    kColorPicker__KColorPicker_ChildEvent_Callback kcolorpicker__kcolorpicker_childevent_callback = nullptr;
    kColorPicker__KColorPicker_CustomEvent_Callback kcolorpicker__kcolorpicker_customevent_callback = nullptr;
    kColorPicker__KColorPicker_ConnectNotify_Callback kcolorpicker__kcolorpicker_connectnotify_callback = nullptr;
    kColorPicker__KColorPicker_DisconnectNotify_Callback kcolorpicker__kcolorpicker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : kColorPicker::KColorPicker {
        using kColorPicker::KColorPicker::actionEvent;
        using kColorPicker::KColorPicker::changeEvent;
        using kColorPicker::KColorPicker::checkStateSet;
        using kColorPicker::KColorPicker::childEvent;
        using kColorPicker::KColorPicker::closeEvent;
        using kColorPicker::KColorPicker::connectNotify;
        using kColorPicker::KColorPicker::contextMenuEvent;
        using kColorPicker::KColorPicker::customEvent;
        using kColorPicker::KColorPicker::disconnectNotify;
        using kColorPicker::KColorPicker::dragEnterEvent;
        using kColorPicker::KColorPicker::dragLeaveEvent;
        using kColorPicker::KColorPicker::dragMoveEvent;
        using kColorPicker::KColorPicker::dropEvent;
        using kColorPicker::KColorPicker::enterEvent;
        using kColorPicker::KColorPicker::event;
        using kColorPicker::KColorPicker::focusInEvent;
        using kColorPicker::KColorPicker::focusNextPrevChild;
        using kColorPicker::KColorPicker::focusOutEvent;
        using kColorPicker::KColorPicker::hideEvent;
        using kColorPicker::KColorPicker::hitButton;
        using kColorPicker::KColorPicker::initPainter;
        using kColorPicker::KColorPicker::initStyleOption;
        using kColorPicker::KColorPicker::inputMethodEvent;
        using kColorPicker::KColorPicker::keyPressEvent;
        using kColorPicker::KColorPicker::keyReleaseEvent;
        using kColorPicker::KColorPicker::leaveEvent;
        using kColorPicker::KColorPicker::metric;
        using kColorPicker::KColorPicker::mouseDoubleClickEvent;
        using kColorPicker::KColorPicker::mouseMoveEvent;
        using kColorPicker::KColorPicker::mousePressEvent;
        using kColorPicker::KColorPicker::mouseReleaseEvent;
        using kColorPicker::KColorPicker::moveEvent;
        using kColorPicker::KColorPicker::nativeEvent;
        using kColorPicker::KColorPicker::nextCheckState;
        using kColorPicker::KColorPicker::paintEvent;
        using kColorPicker::KColorPicker::redirected;
        using kColorPicker::KColorPicker::resizeEvent;
        using kColorPicker::KColorPicker::sharedPainter;
        using kColorPicker::KColorPicker::showEvent;
        using kColorPicker::KColorPicker::tabletEvent;
        using kColorPicker::KColorPicker::timerEvent;
        using kColorPicker::KColorPicker::wheelEvent;
    };

    VirtualkColorPickerKColorPicker() : kColorPicker::KColorPicker() {};
    VirtualkColorPickerKColorPicker(bool showAlphaChannel) : kColorPicker::KColorPicker(showAlphaChannel) {};
    VirtualkColorPickerKColorPicker(bool showAlphaChannel, QWidget* parent) : kColorPicker::KColorPicker(showAlphaChannel, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorpicker__kcolorpicker_metaobject_callback) {
            QMetaObject* callback_ret = kcolorpicker__kcolorpicker_metaobject_callback(this);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorpicker__kcolorpicker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorpicker__kcolorpicker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorpicker__kcolorpicker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorpicker__kcolorpicker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorpicker__kcolorpicker_sizehint_callback) {
            QSize* callback_ret = kcolorpicker__kcolorpicker_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kColorPicker__KColorPicker::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorpicker__kcolorpicker_minimumsizehint_callback) {
            QSize* callback_ret = kcolorpicker__kcolorpicker_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kColorPicker__KColorPicker::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcolorpicker__kcolorpicker_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcolorpicker__kcolorpicker_event_callback(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcolorpicker__kcolorpicker_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_mousepressevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kcolorpicker__kcolorpicker_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_mousereleaseevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcolorpicker__kcolorpicker_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_paintevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kcolorpicker__kcolorpicker_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_actionevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kcolorpicker__kcolorpicker_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_enterevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcolorpicker__kcolorpicker_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_leaveevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kcolorpicker__kcolorpicker_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_timerevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcolorpicker__kcolorpicker_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_changeevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcolorpicker__kcolorpicker_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = kcolorpicker__kcolorpicker_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcolorpicker__kcolorpicker_checkstateset_callback) {
            kcolorpicker__kcolorpicker_checkstateset_callback(this);
            return;
        }
        kColorPicker__KColorPicker::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcolorpicker__kcolorpicker_nextcheckstate_callback) {
            kcolorpicker__kcolorpicker_nextcheckstate_callback(this);
            return;
        }
        kColorPicker__KColorPicker::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kcolorpicker__kcolorpicker_initstyleoption_callback) {
            QStyleOptionToolButton* cbval1 = option;
            kcolorpicker__kcolorpicker_initstyleoption_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorpicker__kcolorpicker_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorpicker__kcolorpicker_keypressevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorpicker__kcolorpicker_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorpicker__kcolorpicker_keyreleaseevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcolorpicker__kcolorpicker_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorpicker__kcolorpicker_mousemoveevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcolorpicker__kcolorpicker_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kcolorpicker__kcolorpicker_focusinevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcolorpicker__kcolorpicker_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kcolorpicker__kcolorpicker_focusoutevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorpicker__kcolorpicker_devtype_callback) {
            int callback_ret = kcolorpicker__kcolorpicker_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorpicker__kcolorpicker_setvisible_callback) {
            bool cbval1 = visible;
            kcolorpicker__kcolorpicker_setvisible_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorpicker__kcolorpicker_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcolorpicker__kcolorpicker_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorpicker__kcolorpicker_hasheightforwidth_callback) {
            bool callback_ret = kcolorpicker__kcolorpicker_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorpicker__kcolorpicker_paintengine_callback) {
            QPaintEngine* callback_ret = kcolorpicker__kcolorpicker_paintengine_callback(this);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorpicker__kcolorpicker_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcolorpicker__kcolorpicker_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_wheelevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorpicker__kcolorpicker_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_moveevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcolorpicker__kcolorpicker_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_resizeevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorpicker__kcolorpicker_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_closeevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcolorpicker__kcolorpicker_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_contextmenuevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorpicker__kcolorpicker_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_tabletevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_dragenterevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_dragmoveevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_dragleaveevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcolorpicker__kcolorpicker_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_dropevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcolorpicker__kcolorpicker_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_showevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcolorpicker__kcolorpicker_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_hideevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorpicker__kcolorpicker_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcolorpicker__kcolorpicker_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorpicker__kcolorpicker_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcolorpicker__kcolorpicker_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorpicker__kcolorpicker_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcolorpicker__kcolorpicker_initpainter_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorpicker__kcolorpicker_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcolorpicker__kcolorpicker_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorpicker__kcolorpicker_sharedpainter_callback) {
            QPainter* callback_ret = kcolorpicker__kcolorpicker_sharedpainter_callback(this);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorpicker__kcolorpicker_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcolorpicker__kcolorpicker_inputmethodevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorpicker__kcolorpicker_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcolorpicker__kcolorpicker_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kColorPicker__KColorPicker::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorpicker__kcolorpicker_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcolorpicker__kcolorpicker_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorpicker__kcolorpicker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorpicker__kcolorpicker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorpicker__kcolorpicker_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_childevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorpicker__kcolorpicker_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorpicker__kcolorpicker_customevent_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorpicker__kcolorpicker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorpicker__kcolorpicker_connectnotify_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorpicker__kcolorpicker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorpicker__kcolorpicker_disconnectnotify_callback(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::disconnectNotify(signal);
    }

    // Friend functions
    friend bool kColorPicker__KColorPicker_SuperEvent(kColorPicker::KColorPicker* self, QEvent* e);
    friend void kColorPicker__KColorPicker_SuperMousePressEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_SuperMouseReleaseEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_SuperPaintEvent(kColorPicker::KColorPicker* self, QPaintEvent* param1);
    friend void kColorPicker__KColorPicker_SuperActionEvent(kColorPicker::KColorPicker* self, QActionEvent* param1);
    friend void kColorPicker__KColorPicker_SuperEnterEvent(kColorPicker::KColorPicker* self, QEnterEvent* param1);
    friend void kColorPicker__KColorPicker_SuperLeaveEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend void kColorPicker__KColorPicker_SuperTimerEvent(kColorPicker::KColorPicker* self, QTimerEvent* param1);
    friend void kColorPicker__KColorPicker_SuperChangeEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend bool kColorPicker__KColorPicker_SuperHitButton(const kColorPicker::KColorPicker* self, const QPoint* pos);
    friend void kColorPicker__KColorPicker_SuperCheckStateSet(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperNextCheckState(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperInitStyleOption(const kColorPicker::KColorPicker* self, QStyleOptionToolButton* option);
    friend void kColorPicker__KColorPicker_SuperKeyPressEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_SuperKeyReleaseEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_SuperMouseMoveEvent(kColorPicker::KColorPicker* self, QMouseEvent* e);
    friend void kColorPicker__KColorPicker_SuperFocusInEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_SuperFocusOutEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_SuperMouseDoubleClickEvent(kColorPicker::KColorPicker* self, QMouseEvent* event);
    friend void kColorPicker__KColorPicker_SuperWheelEvent(kColorPicker::KColorPicker* self, QWheelEvent* event);
    friend void kColorPicker__KColorPicker_SuperMoveEvent(kColorPicker::KColorPicker* self, QMoveEvent* event);
    friend void kColorPicker__KColorPicker_SuperResizeEvent(kColorPicker::KColorPicker* self, QResizeEvent* event);
    friend void kColorPicker__KColorPicker_SuperCloseEvent(kColorPicker::KColorPicker* self, QCloseEvent* event);
    friend void kColorPicker__KColorPicker_SuperContextMenuEvent(kColorPicker::KColorPicker* self, QContextMenuEvent* event);
    friend void kColorPicker__KColorPicker_SuperTabletEvent(kColorPicker::KColorPicker* self, QTabletEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragEnterEvent(kColorPicker::KColorPicker* self, QDragEnterEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragMoveEvent(kColorPicker::KColorPicker* self, QDragMoveEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragLeaveEvent(kColorPicker::KColorPicker* self, QDragLeaveEvent* event);
    friend void kColorPicker__KColorPicker_SuperDropEvent(kColorPicker::KColorPicker* self, QDropEvent* event);
    friend void kColorPicker__KColorPicker_SuperShowEvent(kColorPicker::KColorPicker* self, QShowEvent* event);
    friend void kColorPicker__KColorPicker_SuperHideEvent(kColorPicker::KColorPicker* self, QHideEvent* event);
    friend bool kColorPicker__KColorPicker_SuperNativeEvent(kColorPicker::KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int kColorPicker__KColorPicker_SuperMetric(const kColorPicker::KColorPicker* self, int param1);
    friend void kColorPicker__KColorPicker_SuperInitPainter(const kColorPicker::KColorPicker* self, QPainter* painter);
    friend QPaintDevice* kColorPicker__KColorPicker_SuperRedirected(const kColorPicker::KColorPicker* self, QPoint* offset);
    friend QPainter* kColorPicker__KColorPicker_SuperSharedPainter(const kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperInputMethodEvent(kColorPicker::KColorPicker* self, QInputMethodEvent* param1);
    friend bool kColorPicker__KColorPicker_SuperFocusNextPrevChild(kColorPicker::KColorPicker* self, bool next);
    friend void kColorPicker__KColorPicker_SuperChildEvent(kColorPicker::KColorPicker* self, QChildEvent* event);
    friend void kColorPicker__KColorPicker_SuperCustomEvent(kColorPicker::KColorPicker* self, QEvent* event);
    friend void kColorPicker__KColorPicker_SuperConnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend void kColorPicker__KColorPicker_SuperDisconnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
};

#endif
