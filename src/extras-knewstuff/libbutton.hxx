#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBBUTTON_HXX
#define EXTRAS_KNEWSTUFF_LIBBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Button
class VirtualKNSWidgetsButton final : public KNSWidgets::Button {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSWidgets__Button_MetaObject_Callback = QMetaObject* (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_Metacast_Callback = void* (*)(KNSWidgets__Button*, const char*);
    using KNSWidgets__Button_Metacall_Callback = int (*)(KNSWidgets__Button*, int, int, void**);
    using KNSWidgets__Button_SizeHint_Callback = QSize* (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_MinimumSizeHint_Callback = QSize* (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_Event_Callback = bool (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_PaintEvent_Callback = void (*)(KNSWidgets__Button*, QPaintEvent*);
    using KNSWidgets__Button_KeyPressEvent_Callback = void (*)(KNSWidgets__Button*, QKeyEvent*);
    using KNSWidgets__Button_FocusInEvent_Callback = void (*)(KNSWidgets__Button*, QFocusEvent*);
    using KNSWidgets__Button_FocusOutEvent_Callback = void (*)(KNSWidgets__Button*, QFocusEvent*);
    using KNSWidgets__Button_MouseMoveEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_InitStyleOption_Callback = void (*)(const KNSWidgets__Button*, QStyleOptionButton*);
    using KNSWidgets__Button_HitButton_Callback = bool (*)(const KNSWidgets__Button*, QPoint*);
    using KNSWidgets__Button_CheckStateSet_Callback = void (*)(KNSWidgets__Button*);
    using KNSWidgets__Button_NextCheckState_Callback = void (*)(KNSWidgets__Button*);
    using KNSWidgets__Button_KeyReleaseEvent_Callback = void (*)(KNSWidgets__Button*, QKeyEvent*);
    using KNSWidgets__Button_MousePressEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_MouseReleaseEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_ChangeEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_TimerEvent_Callback = void (*)(KNSWidgets__Button*, QTimerEvent*);
    using KNSWidgets__Button_DevType_Callback = int (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_SetVisible_Callback = void (*)(KNSWidgets__Button*, bool);
    using KNSWidgets__Button_HeightForWidth_Callback = int (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_HasHeightForWidth_Callback = bool (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_PaintEngine_Callback = QPaintEngine* (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_MouseDoubleClickEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_WheelEvent_Callback = void (*)(KNSWidgets__Button*, QWheelEvent*);
    using KNSWidgets__Button_EnterEvent_Callback = void (*)(KNSWidgets__Button*, QEnterEvent*);
    using KNSWidgets__Button_LeaveEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_MoveEvent_Callback = void (*)(KNSWidgets__Button*, QMoveEvent*);
    using KNSWidgets__Button_ResizeEvent_Callback = void (*)(KNSWidgets__Button*, QResizeEvent*);
    using KNSWidgets__Button_CloseEvent_Callback = void (*)(KNSWidgets__Button*, QCloseEvent*);
    using KNSWidgets__Button_ContextMenuEvent_Callback = void (*)(KNSWidgets__Button*, QContextMenuEvent*);
    using KNSWidgets__Button_TabletEvent_Callback = void (*)(KNSWidgets__Button*, QTabletEvent*);
    using KNSWidgets__Button_ActionEvent_Callback = void (*)(KNSWidgets__Button*, QActionEvent*);
    using KNSWidgets__Button_DragEnterEvent_Callback = void (*)(KNSWidgets__Button*, QDragEnterEvent*);
    using KNSWidgets__Button_DragMoveEvent_Callback = void (*)(KNSWidgets__Button*, QDragMoveEvent*);
    using KNSWidgets__Button_DragLeaveEvent_Callback = void (*)(KNSWidgets__Button*, QDragLeaveEvent*);
    using KNSWidgets__Button_DropEvent_Callback = void (*)(KNSWidgets__Button*, QDropEvent*);
    using KNSWidgets__Button_ShowEvent_Callback = void (*)(KNSWidgets__Button*, QShowEvent*);
    using KNSWidgets__Button_HideEvent_Callback = void (*)(KNSWidgets__Button*, QHideEvent*);
    using KNSWidgets__Button_NativeEvent_Callback = bool (*)(KNSWidgets__Button*, libqt_string, void*, intptr_t*);
    using KNSWidgets__Button_Metric_Callback = int (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_InitPainter_Callback = void (*)(const KNSWidgets__Button*, QPainter*);
    using KNSWidgets__Button_Redirected_Callback = QPaintDevice* (*)(const KNSWidgets__Button*, QPoint*);
    using KNSWidgets__Button_SharedPainter_Callback = QPainter* (*)(const KNSWidgets__Button*);
    using KNSWidgets__Button_InputMethodEvent_Callback = void (*)(KNSWidgets__Button*, QInputMethodEvent*);
    using KNSWidgets__Button_InputMethodQuery_Callback = QVariant* (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_FocusNextPrevChild_Callback = bool (*)(KNSWidgets__Button*, bool);
    using KNSWidgets__Button_EventFilter_Callback = bool (*)(KNSWidgets__Button*, QObject*, QEvent*);
    using KNSWidgets__Button_ChildEvent_Callback = void (*)(KNSWidgets__Button*, QChildEvent*);
    using KNSWidgets__Button_CustomEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_ConnectNotify_Callback = void (*)(KNSWidgets__Button*, QMetaMethod*);
    using KNSWidgets__Button_DisconnectNotify_Callback = void (*)(KNSWidgets__Button*, QMetaMethod*);
    using KNSWidgets::Button::create;
    using KNSWidgets::Button::destroy;
    using KNSWidgets::Button::focusNextChild;
    using KNSWidgets::Button::focusPreviousChild;
    using KNSWidgets::Button::getDecodedMetricF;
    using KNSWidgets::Button::isSignalConnected;
    using KNSWidgets::Button::receivers;
    using KNSWidgets::Button::sender;
    using KNSWidgets::Button::senderSignalIndex;
    using KNSWidgets::Button::updateMicroFocus;

    // Instance callback storage
    KNSWidgets__Button_MetaObject_Callback knswidgets__button_metaobject_callback = nullptr;
    KNSWidgets__Button_Metacast_Callback knswidgets__button_metacast_callback = nullptr;
    KNSWidgets__Button_Metacall_Callback knswidgets__button_metacall_callback = nullptr;
    KNSWidgets__Button_SizeHint_Callback knswidgets__button_sizehint_callback = nullptr;
    KNSWidgets__Button_MinimumSizeHint_Callback knswidgets__button_minimumsizehint_callback = nullptr;
    KNSWidgets__Button_Event_Callback knswidgets__button_event_callback = nullptr;
    KNSWidgets__Button_PaintEvent_Callback knswidgets__button_paintevent_callback = nullptr;
    KNSWidgets__Button_KeyPressEvent_Callback knswidgets__button_keypressevent_callback = nullptr;
    KNSWidgets__Button_FocusInEvent_Callback knswidgets__button_focusinevent_callback = nullptr;
    KNSWidgets__Button_FocusOutEvent_Callback knswidgets__button_focusoutevent_callback = nullptr;
    KNSWidgets__Button_MouseMoveEvent_Callback knswidgets__button_mousemoveevent_callback = nullptr;
    KNSWidgets__Button_InitStyleOption_Callback knswidgets__button_initstyleoption_callback = nullptr;
    KNSWidgets__Button_HitButton_Callback knswidgets__button_hitbutton_callback = nullptr;
    KNSWidgets__Button_CheckStateSet_Callback knswidgets__button_checkstateset_callback = nullptr;
    KNSWidgets__Button_NextCheckState_Callback knswidgets__button_nextcheckstate_callback = nullptr;
    KNSWidgets__Button_KeyReleaseEvent_Callback knswidgets__button_keyreleaseevent_callback = nullptr;
    KNSWidgets__Button_MousePressEvent_Callback knswidgets__button_mousepressevent_callback = nullptr;
    KNSWidgets__Button_MouseReleaseEvent_Callback knswidgets__button_mousereleaseevent_callback = nullptr;
    KNSWidgets__Button_ChangeEvent_Callback knswidgets__button_changeevent_callback = nullptr;
    KNSWidgets__Button_TimerEvent_Callback knswidgets__button_timerevent_callback = nullptr;
    KNSWidgets__Button_DevType_Callback knswidgets__button_devtype_callback = nullptr;
    KNSWidgets__Button_SetVisible_Callback knswidgets__button_setvisible_callback = nullptr;
    KNSWidgets__Button_HeightForWidth_Callback knswidgets__button_heightforwidth_callback = nullptr;
    KNSWidgets__Button_HasHeightForWidth_Callback knswidgets__button_hasheightforwidth_callback = nullptr;
    KNSWidgets__Button_PaintEngine_Callback knswidgets__button_paintengine_callback = nullptr;
    KNSWidgets__Button_MouseDoubleClickEvent_Callback knswidgets__button_mousedoubleclickevent_callback = nullptr;
    KNSWidgets__Button_WheelEvent_Callback knswidgets__button_wheelevent_callback = nullptr;
    KNSWidgets__Button_EnterEvent_Callback knswidgets__button_enterevent_callback = nullptr;
    KNSWidgets__Button_LeaveEvent_Callback knswidgets__button_leaveevent_callback = nullptr;
    KNSWidgets__Button_MoveEvent_Callback knswidgets__button_moveevent_callback = nullptr;
    KNSWidgets__Button_ResizeEvent_Callback knswidgets__button_resizeevent_callback = nullptr;
    KNSWidgets__Button_CloseEvent_Callback knswidgets__button_closeevent_callback = nullptr;
    KNSWidgets__Button_ContextMenuEvent_Callback knswidgets__button_contextmenuevent_callback = nullptr;
    KNSWidgets__Button_TabletEvent_Callback knswidgets__button_tabletevent_callback = nullptr;
    KNSWidgets__Button_ActionEvent_Callback knswidgets__button_actionevent_callback = nullptr;
    KNSWidgets__Button_DragEnterEvent_Callback knswidgets__button_dragenterevent_callback = nullptr;
    KNSWidgets__Button_DragMoveEvent_Callback knswidgets__button_dragmoveevent_callback = nullptr;
    KNSWidgets__Button_DragLeaveEvent_Callback knswidgets__button_dragleaveevent_callback = nullptr;
    KNSWidgets__Button_DropEvent_Callback knswidgets__button_dropevent_callback = nullptr;
    KNSWidgets__Button_ShowEvent_Callback knswidgets__button_showevent_callback = nullptr;
    KNSWidgets__Button_HideEvent_Callback knswidgets__button_hideevent_callback = nullptr;
    KNSWidgets__Button_NativeEvent_Callback knswidgets__button_nativeevent_callback = nullptr;
    KNSWidgets__Button_Metric_Callback knswidgets__button_metric_callback = nullptr;
    KNSWidgets__Button_InitPainter_Callback knswidgets__button_initpainter_callback = nullptr;
    KNSWidgets__Button_Redirected_Callback knswidgets__button_redirected_callback = nullptr;
    KNSWidgets__Button_SharedPainter_Callback knswidgets__button_sharedpainter_callback = nullptr;
    KNSWidgets__Button_InputMethodEvent_Callback knswidgets__button_inputmethodevent_callback = nullptr;
    KNSWidgets__Button_InputMethodQuery_Callback knswidgets__button_inputmethodquery_callback = nullptr;
    KNSWidgets__Button_FocusNextPrevChild_Callback knswidgets__button_focusnextprevchild_callback = nullptr;
    KNSWidgets__Button_EventFilter_Callback knswidgets__button_eventfilter_callback = nullptr;
    KNSWidgets__Button_ChildEvent_Callback knswidgets__button_childevent_callback = nullptr;
    KNSWidgets__Button_CustomEvent_Callback knswidgets__button_customevent_callback = nullptr;
    KNSWidgets__Button_ConnectNotify_Callback knswidgets__button_connectnotify_callback = nullptr;
    KNSWidgets__Button_DisconnectNotify_Callback knswidgets__button_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSWidgets::Button {
        using KNSWidgets::Button::actionEvent;
        using KNSWidgets::Button::changeEvent;
        using KNSWidgets::Button::checkStateSet;
        using KNSWidgets::Button::childEvent;
        using KNSWidgets::Button::closeEvent;
        using KNSWidgets::Button::connectNotify;
        using KNSWidgets::Button::contextMenuEvent;
        using KNSWidgets::Button::customEvent;
        using KNSWidgets::Button::disconnectNotify;
        using KNSWidgets::Button::dragEnterEvent;
        using KNSWidgets::Button::dragLeaveEvent;
        using KNSWidgets::Button::dragMoveEvent;
        using KNSWidgets::Button::dropEvent;
        using KNSWidgets::Button::enterEvent;
        using KNSWidgets::Button::event;
        using KNSWidgets::Button::focusInEvent;
        using KNSWidgets::Button::focusNextPrevChild;
        using KNSWidgets::Button::focusOutEvent;
        using KNSWidgets::Button::hideEvent;
        using KNSWidgets::Button::hitButton;
        using KNSWidgets::Button::initPainter;
        using KNSWidgets::Button::initStyleOption;
        using KNSWidgets::Button::inputMethodEvent;
        using KNSWidgets::Button::keyPressEvent;
        using KNSWidgets::Button::keyReleaseEvent;
        using KNSWidgets::Button::leaveEvent;
        using KNSWidgets::Button::metric;
        using KNSWidgets::Button::mouseDoubleClickEvent;
        using KNSWidgets::Button::mouseMoveEvent;
        using KNSWidgets::Button::mousePressEvent;
        using KNSWidgets::Button::mouseReleaseEvent;
        using KNSWidgets::Button::moveEvent;
        using KNSWidgets::Button::nativeEvent;
        using KNSWidgets::Button::nextCheckState;
        using KNSWidgets::Button::paintEvent;
        using KNSWidgets::Button::redirected;
        using KNSWidgets::Button::resizeEvent;
        using KNSWidgets::Button::sharedPainter;
        using KNSWidgets::Button::showEvent;
        using KNSWidgets::Button::tabletEvent;
        using KNSWidgets::Button::timerEvent;
        using KNSWidgets::Button::wheelEvent;
    };

    VirtualKNSWidgetsButton(QWidget* parent) : KNSWidgets::Button(parent) {};
    VirtualKNSWidgetsButton(const QString& text, const QString& configFile, QWidget* parent) : KNSWidgets::Button(text, configFile, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knswidgets__button_metaobject_callback) {
            QMetaObject* callback_ret = knswidgets__button_metaobject_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Button::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knswidgets__button_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knswidgets__button_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Button::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__button_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knswidgets__button_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Button::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knswidgets__button_sizehint_callback) {
            QSize* callback_ret = knswidgets__button_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Button::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knswidgets__button_minimumsizehint_callback) {
            QSize* callback_ret = knswidgets__button_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Button::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (knswidgets__button_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = knswidgets__button_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Button::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (knswidgets__button_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            knswidgets__button_paintevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knswidgets__button_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            knswidgets__button_keypressevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (knswidgets__button_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            knswidgets__button_focusinevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (knswidgets__button_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            knswidgets__button_focusoutevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (knswidgets__button_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            knswidgets__button_mousemoveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (knswidgets__button_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            knswidgets__button_initstyleoption_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (knswidgets__button_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = knswidgets__button_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Button::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (knswidgets__button_checkstateset_callback) {
            knswidgets__button_checkstateset_callback(this);
            return;
        }
        KNSWidgets__Button::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (knswidgets__button_nextcheckstate_callback) {
            knswidgets__button_nextcheckstate_callback(this);
            return;
        }
        KNSWidgets__Button::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (knswidgets__button_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            knswidgets__button_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (knswidgets__button_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            knswidgets__button_mousepressevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (knswidgets__button_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            knswidgets__button_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (knswidgets__button_changeevent_callback) {
            QEvent* cbval1 = e;
            knswidgets__button_changeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (knswidgets__button_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            knswidgets__button_timerevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knswidgets__button_devtype_callback) {
            int callback_ret = knswidgets__button_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Button::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knswidgets__button_setvisible_callback) {
            bool cbval1 = visible;
            knswidgets__button_setvisible_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knswidgets__button_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = knswidgets__button_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Button::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knswidgets__button_hasheightforwidth_callback) {
            bool callback_ret = knswidgets__button_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Button::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knswidgets__button_paintengine_callback) {
            QPaintEngine* callback_ret = knswidgets__button_paintengine_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Button::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knswidgets__button_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            knswidgets__button_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knswidgets__button_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            knswidgets__button_wheelevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knswidgets__button_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            knswidgets__button_enterevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knswidgets__button_leaveevent_callback) {
            QEvent* cbval1 = event;
            knswidgets__button_leaveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knswidgets__button_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            knswidgets__button_moveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (knswidgets__button_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            knswidgets__button_resizeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (knswidgets__button_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            knswidgets__button_closeevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (knswidgets__button_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            knswidgets__button_contextmenuevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knswidgets__button_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            knswidgets__button_tabletevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knswidgets__button_actionevent_callback) {
            QActionEvent* cbval1 = event;
            knswidgets__button_actionevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knswidgets__button_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            knswidgets__button_dragenterevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knswidgets__button_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            knswidgets__button_dragmoveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knswidgets__button_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            knswidgets__button_dragleaveevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knswidgets__button_dropevent_callback) {
            QDropEvent* cbval1 = event;
            knswidgets__button_dropevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (knswidgets__button_showevent_callback) {
            QShowEvent* cbval1 = event;
            knswidgets__button_showevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knswidgets__button_hideevent_callback) {
            QHideEvent* cbval1 = event;
            knswidgets__button_hideevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knswidgets__button_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = knswidgets__button_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KNSWidgets__Button::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knswidgets__button_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = knswidgets__button_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Button::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knswidgets__button_initpainter_callback) {
            QPainter* cbval1 = painter;
            knswidgets__button_initpainter_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knswidgets__button_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = knswidgets__button_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Button::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knswidgets__button_sharedpainter_callback) {
            QPainter* callback_ret = knswidgets__button_sharedpainter_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Button::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knswidgets__button_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            knswidgets__button_inputmethodevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knswidgets__button_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = knswidgets__button_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSWidgets__Button::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knswidgets__button_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = knswidgets__button_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Button::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knswidgets__button_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knswidgets__button_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSWidgets__Button::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__button_childevent_callback) {
            QChildEvent* cbval1 = event;
            knswidgets__button_childevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__button_customevent_callback) {
            QEvent* cbval1 = event;
            knswidgets__button_customevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__button_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__button_connectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__button_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__button_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Button::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KNSWidgets__Button_SuperEvent(KNSWidgets::Button* self, QEvent* e);
    friend void KNSWidgets__Button_SuperPaintEvent(KNSWidgets::Button* self, QPaintEvent* param1);
    friend void KNSWidgets__Button_SuperKeyPressEvent(KNSWidgets::Button* self, QKeyEvent* param1);
    friend void KNSWidgets__Button_SuperFocusInEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_SuperFocusOutEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_SuperMouseMoveEvent(KNSWidgets::Button* self, QMouseEvent* param1);
    friend void KNSWidgets__Button_SuperInitStyleOption(const KNSWidgets::Button* self, QStyleOptionButton* option);
    friend bool KNSWidgets__Button_SuperHitButton(const KNSWidgets::Button* self, const QPoint* pos);
    friend void KNSWidgets__Button_SuperCheckStateSet(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_SuperNextCheckState(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_SuperKeyReleaseEvent(KNSWidgets::Button* self, QKeyEvent* e);
    friend void KNSWidgets__Button_SuperMousePressEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_SuperMouseReleaseEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_SuperChangeEvent(KNSWidgets::Button* self, QEvent* e);
    friend void KNSWidgets__Button_SuperTimerEvent(KNSWidgets::Button* self, QTimerEvent* e);
    friend void KNSWidgets__Button_SuperMouseDoubleClickEvent(KNSWidgets::Button* self, QMouseEvent* event);
    friend void KNSWidgets__Button_SuperWheelEvent(KNSWidgets::Button* self, QWheelEvent* event);
    friend void KNSWidgets__Button_SuperEnterEvent(KNSWidgets::Button* self, QEnterEvent* event);
    friend void KNSWidgets__Button_SuperLeaveEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_SuperMoveEvent(KNSWidgets::Button* self, QMoveEvent* event);
    friend void KNSWidgets__Button_SuperResizeEvent(KNSWidgets::Button* self, QResizeEvent* event);
    friend void KNSWidgets__Button_SuperCloseEvent(KNSWidgets::Button* self, QCloseEvent* event);
    friend void KNSWidgets__Button_SuperContextMenuEvent(KNSWidgets::Button* self, QContextMenuEvent* event);
    friend void KNSWidgets__Button_SuperTabletEvent(KNSWidgets::Button* self, QTabletEvent* event);
    friend void KNSWidgets__Button_SuperActionEvent(KNSWidgets::Button* self, QActionEvent* event);
    friend void KNSWidgets__Button_SuperDragEnterEvent(KNSWidgets::Button* self, QDragEnterEvent* event);
    friend void KNSWidgets__Button_SuperDragMoveEvent(KNSWidgets::Button* self, QDragMoveEvent* event);
    friend void KNSWidgets__Button_SuperDragLeaveEvent(KNSWidgets::Button* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Button_SuperDropEvent(KNSWidgets::Button* self, QDropEvent* event);
    friend void KNSWidgets__Button_SuperShowEvent(KNSWidgets::Button* self, QShowEvent* event);
    friend void KNSWidgets__Button_SuperHideEvent(KNSWidgets::Button* self, QHideEvent* event);
    friend bool KNSWidgets__Button_SuperNativeEvent(KNSWidgets::Button* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KNSWidgets__Button_SuperMetric(const KNSWidgets::Button* self, int param1);
    friend void KNSWidgets__Button_SuperInitPainter(const KNSWidgets::Button* self, QPainter* painter);
    friend QPaintDevice* KNSWidgets__Button_SuperRedirected(const KNSWidgets::Button* self, QPoint* offset);
    friend QPainter* KNSWidgets__Button_SuperSharedPainter(const KNSWidgets::Button* self);
    friend void KNSWidgets__Button_SuperInputMethodEvent(KNSWidgets::Button* self, QInputMethodEvent* param1);
    friend bool KNSWidgets__Button_SuperFocusNextPrevChild(KNSWidgets::Button* self, bool next);
    friend void KNSWidgets__Button_SuperChildEvent(KNSWidgets::Button* self, QChildEvent* event);
    friend void KNSWidgets__Button_SuperCustomEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_SuperConnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
    friend void KNSWidgets__Button_SuperDisconnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
};

#endif
