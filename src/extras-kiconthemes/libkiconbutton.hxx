#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKICONBUTTON_HXX
#define EXTRAS_KICONTHEMES_LIBKICONBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconButton
class VirtualKIconButton final : public KIconButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIconButton_MetaObject_Callback = QMetaObject* (*)(const KIconButton*);
    using KIconButton_Metacast_Callback = void* (*)(KIconButton*, const char*);
    using KIconButton_Metacall_Callback = int (*)(KIconButton*, int, int, void**);
    using KIconButton_SizeHint_Callback = QSize* (*)(const KIconButton*);
    using KIconButton_MinimumSizeHint_Callback = QSize* (*)(const KIconButton*);
    using KIconButton_Event_Callback = bool (*)(KIconButton*, QEvent*);
    using KIconButton_PaintEvent_Callback = void (*)(KIconButton*, QPaintEvent*);
    using KIconButton_KeyPressEvent_Callback = void (*)(KIconButton*, QKeyEvent*);
    using KIconButton_FocusInEvent_Callback = void (*)(KIconButton*, QFocusEvent*);
    using KIconButton_FocusOutEvent_Callback = void (*)(KIconButton*, QFocusEvent*);
    using KIconButton_MouseMoveEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_InitStyleOption_Callback = void (*)(const KIconButton*, QStyleOptionButton*);
    using KIconButton_HitButton_Callback = bool (*)(const KIconButton*, QPoint*);
    using KIconButton_CheckStateSet_Callback = void (*)(KIconButton*);
    using KIconButton_NextCheckState_Callback = void (*)(KIconButton*);
    using KIconButton_KeyReleaseEvent_Callback = void (*)(KIconButton*, QKeyEvent*);
    using KIconButton_MousePressEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_MouseReleaseEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_ChangeEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_TimerEvent_Callback = void (*)(KIconButton*, QTimerEvent*);
    using KIconButton_DevType_Callback = int (*)(const KIconButton*);
    using KIconButton_SetVisible_Callback = void (*)(KIconButton*, bool);
    using KIconButton_HeightForWidth_Callback = int (*)(const KIconButton*, int);
    using KIconButton_HasHeightForWidth_Callback = bool (*)(const KIconButton*);
    using KIconButton_PaintEngine_Callback = QPaintEngine* (*)(const KIconButton*);
    using KIconButton_MouseDoubleClickEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_WheelEvent_Callback = void (*)(KIconButton*, QWheelEvent*);
    using KIconButton_EnterEvent_Callback = void (*)(KIconButton*, QEnterEvent*);
    using KIconButton_LeaveEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_MoveEvent_Callback = void (*)(KIconButton*, QMoveEvent*);
    using KIconButton_ResizeEvent_Callback = void (*)(KIconButton*, QResizeEvent*);
    using KIconButton_CloseEvent_Callback = void (*)(KIconButton*, QCloseEvent*);
    using KIconButton_ContextMenuEvent_Callback = void (*)(KIconButton*, QContextMenuEvent*);
    using KIconButton_TabletEvent_Callback = void (*)(KIconButton*, QTabletEvent*);
    using KIconButton_ActionEvent_Callback = void (*)(KIconButton*, QActionEvent*);
    using KIconButton_DragEnterEvent_Callback = void (*)(KIconButton*, QDragEnterEvent*);
    using KIconButton_DragMoveEvent_Callback = void (*)(KIconButton*, QDragMoveEvent*);
    using KIconButton_DragLeaveEvent_Callback = void (*)(KIconButton*, QDragLeaveEvent*);
    using KIconButton_DropEvent_Callback = void (*)(KIconButton*, QDropEvent*);
    using KIconButton_ShowEvent_Callback = void (*)(KIconButton*, QShowEvent*);
    using KIconButton_HideEvent_Callback = void (*)(KIconButton*, QHideEvent*);
    using KIconButton_NativeEvent_Callback = bool (*)(KIconButton*, libqt_string, void*, intptr_t*);
    using KIconButton_Metric_Callback = int (*)(const KIconButton*, int);
    using KIconButton_InitPainter_Callback = void (*)(const KIconButton*, QPainter*);
    using KIconButton_Redirected_Callback = QPaintDevice* (*)(const KIconButton*, QPoint*);
    using KIconButton_SharedPainter_Callback = QPainter* (*)(const KIconButton*);
    using KIconButton_InputMethodEvent_Callback = void (*)(KIconButton*, QInputMethodEvent*);
    using KIconButton_InputMethodQuery_Callback = QVariant* (*)(const KIconButton*, int);
    using KIconButton_FocusNextPrevChild_Callback = bool (*)(KIconButton*, bool);
    using KIconButton_EventFilter_Callback = bool (*)(KIconButton*, QObject*, QEvent*);
    using KIconButton_ChildEvent_Callback = void (*)(KIconButton*, QChildEvent*);
    using KIconButton_CustomEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_ConnectNotify_Callback = void (*)(KIconButton*, QMetaMethod*);
    using KIconButton_DisconnectNotify_Callback = void (*)(KIconButton*, QMetaMethod*);
    using KIconButton::create;
    using KIconButton::destroy;
    using KIconButton::focusNextChild;
    using KIconButton::focusPreviousChild;
    using KIconButton::getDecodedMetricF;
    using KIconButton::isSignalConnected;
    using KIconButton::receivers;
    using KIconButton::sender;
    using KIconButton::senderSignalIndex;
    using KIconButton::updateMicroFocus;

    // Instance callback storage
    KIconButton_MetaObject_Callback kiconbutton_metaobject_callback = nullptr;
    KIconButton_Metacast_Callback kiconbutton_metacast_callback = nullptr;
    KIconButton_Metacall_Callback kiconbutton_metacall_callback = nullptr;
    KIconButton_SizeHint_Callback kiconbutton_sizehint_callback = nullptr;
    KIconButton_MinimumSizeHint_Callback kiconbutton_minimumsizehint_callback = nullptr;
    KIconButton_Event_Callback kiconbutton_event_callback = nullptr;
    KIconButton_PaintEvent_Callback kiconbutton_paintevent_callback = nullptr;
    KIconButton_KeyPressEvent_Callback kiconbutton_keypressevent_callback = nullptr;
    KIconButton_FocusInEvent_Callback kiconbutton_focusinevent_callback = nullptr;
    KIconButton_FocusOutEvent_Callback kiconbutton_focusoutevent_callback = nullptr;
    KIconButton_MouseMoveEvent_Callback kiconbutton_mousemoveevent_callback = nullptr;
    KIconButton_InitStyleOption_Callback kiconbutton_initstyleoption_callback = nullptr;
    KIconButton_HitButton_Callback kiconbutton_hitbutton_callback = nullptr;
    KIconButton_CheckStateSet_Callback kiconbutton_checkstateset_callback = nullptr;
    KIconButton_NextCheckState_Callback kiconbutton_nextcheckstate_callback = nullptr;
    KIconButton_KeyReleaseEvent_Callback kiconbutton_keyreleaseevent_callback = nullptr;
    KIconButton_MousePressEvent_Callback kiconbutton_mousepressevent_callback = nullptr;
    KIconButton_MouseReleaseEvent_Callback kiconbutton_mousereleaseevent_callback = nullptr;
    KIconButton_ChangeEvent_Callback kiconbutton_changeevent_callback = nullptr;
    KIconButton_TimerEvent_Callback kiconbutton_timerevent_callback = nullptr;
    KIconButton_DevType_Callback kiconbutton_devtype_callback = nullptr;
    KIconButton_SetVisible_Callback kiconbutton_setvisible_callback = nullptr;
    KIconButton_HeightForWidth_Callback kiconbutton_heightforwidth_callback = nullptr;
    KIconButton_HasHeightForWidth_Callback kiconbutton_hasheightforwidth_callback = nullptr;
    KIconButton_PaintEngine_Callback kiconbutton_paintengine_callback = nullptr;
    KIconButton_MouseDoubleClickEvent_Callback kiconbutton_mousedoubleclickevent_callback = nullptr;
    KIconButton_WheelEvent_Callback kiconbutton_wheelevent_callback = nullptr;
    KIconButton_EnterEvent_Callback kiconbutton_enterevent_callback = nullptr;
    KIconButton_LeaveEvent_Callback kiconbutton_leaveevent_callback = nullptr;
    KIconButton_MoveEvent_Callback kiconbutton_moveevent_callback = nullptr;
    KIconButton_ResizeEvent_Callback kiconbutton_resizeevent_callback = nullptr;
    KIconButton_CloseEvent_Callback kiconbutton_closeevent_callback = nullptr;
    KIconButton_ContextMenuEvent_Callback kiconbutton_contextmenuevent_callback = nullptr;
    KIconButton_TabletEvent_Callback kiconbutton_tabletevent_callback = nullptr;
    KIconButton_ActionEvent_Callback kiconbutton_actionevent_callback = nullptr;
    KIconButton_DragEnterEvent_Callback kiconbutton_dragenterevent_callback = nullptr;
    KIconButton_DragMoveEvent_Callback kiconbutton_dragmoveevent_callback = nullptr;
    KIconButton_DragLeaveEvent_Callback kiconbutton_dragleaveevent_callback = nullptr;
    KIconButton_DropEvent_Callback kiconbutton_dropevent_callback = nullptr;
    KIconButton_ShowEvent_Callback kiconbutton_showevent_callback = nullptr;
    KIconButton_HideEvent_Callback kiconbutton_hideevent_callback = nullptr;
    KIconButton_NativeEvent_Callback kiconbutton_nativeevent_callback = nullptr;
    KIconButton_Metric_Callback kiconbutton_metric_callback = nullptr;
    KIconButton_InitPainter_Callback kiconbutton_initpainter_callback = nullptr;
    KIconButton_Redirected_Callback kiconbutton_redirected_callback = nullptr;
    KIconButton_SharedPainter_Callback kiconbutton_sharedpainter_callback = nullptr;
    KIconButton_InputMethodEvent_Callback kiconbutton_inputmethodevent_callback = nullptr;
    KIconButton_InputMethodQuery_Callback kiconbutton_inputmethodquery_callback = nullptr;
    KIconButton_FocusNextPrevChild_Callback kiconbutton_focusnextprevchild_callback = nullptr;
    KIconButton_EventFilter_Callback kiconbutton_eventfilter_callback = nullptr;
    KIconButton_ChildEvent_Callback kiconbutton_childevent_callback = nullptr;
    KIconButton_CustomEvent_Callback kiconbutton_customevent_callback = nullptr;
    KIconButton_ConnectNotify_Callback kiconbutton_connectnotify_callback = nullptr;
    KIconButton_DisconnectNotify_Callback kiconbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIconButton {
        using KIconButton::actionEvent;
        using KIconButton::changeEvent;
        using KIconButton::checkStateSet;
        using KIconButton::childEvent;
        using KIconButton::closeEvent;
        using KIconButton::connectNotify;
        using KIconButton::contextMenuEvent;
        using KIconButton::customEvent;
        using KIconButton::disconnectNotify;
        using KIconButton::dragEnterEvent;
        using KIconButton::dragLeaveEvent;
        using KIconButton::dragMoveEvent;
        using KIconButton::dropEvent;
        using KIconButton::enterEvent;
        using KIconButton::event;
        using KIconButton::focusInEvent;
        using KIconButton::focusNextPrevChild;
        using KIconButton::focusOutEvent;
        using KIconButton::hideEvent;
        using KIconButton::hitButton;
        using KIconButton::initPainter;
        using KIconButton::initStyleOption;
        using KIconButton::inputMethodEvent;
        using KIconButton::keyPressEvent;
        using KIconButton::keyReleaseEvent;
        using KIconButton::leaveEvent;
        using KIconButton::metric;
        using KIconButton::mouseDoubleClickEvent;
        using KIconButton::mouseMoveEvent;
        using KIconButton::mousePressEvent;
        using KIconButton::mouseReleaseEvent;
        using KIconButton::moveEvent;
        using KIconButton::nativeEvent;
        using KIconButton::nextCheckState;
        using KIconButton::paintEvent;
        using KIconButton::redirected;
        using KIconButton::resizeEvent;
        using KIconButton::sharedPainter;
        using KIconButton::showEvent;
        using KIconButton::tabletEvent;
        using KIconButton::timerEvent;
        using KIconButton::wheelEvent;
    };

    VirtualKIconButton(QWidget* parent) : KIconButton(parent) {};
    VirtualKIconButton() : KIconButton() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kiconbutton_metaobject_callback) {
            QMetaObject* callback_ret = kiconbutton_metaobject_callback(this);
            return callback_ret;
        }
        return KIconButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kiconbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kiconbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIconButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kiconbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kiconbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIconButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kiconbutton_sizehint_callback) {
            QSize* callback_ret = kiconbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kiconbutton_minimumsizehint_callback) {
            QSize* callback_ret = kiconbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kiconbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kiconbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIconButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kiconbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kiconbutton_paintevent_callback(this, cbval1);
            return;
        }
        KIconButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kiconbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kiconbutton_keypressevent_callback(this, cbval1);
            return;
        }
        KIconButton::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (kiconbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            kiconbutton_focusinevent_callback(this, cbval1);
            return;
        }
        KIconButton::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (kiconbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            kiconbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KIconButton::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kiconbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            kiconbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KIconButton::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (kiconbutton_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            kiconbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        KIconButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kiconbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = kiconbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KIconButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kiconbutton_checkstateset_callback) {
            kiconbutton_checkstateset_callback(this);
            return;
        }
        KIconButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kiconbutton_nextcheckstate_callback) {
            kiconbutton_nextcheckstate_callback(this);
            return;
        }
        KIconButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kiconbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kiconbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KIconButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kiconbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kiconbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KIconButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kiconbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kiconbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KIconButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kiconbutton_changeevent_callback) {
            QEvent* cbval1 = e;
            kiconbutton_changeevent_callback(this, cbval1);
            return;
        }
        KIconButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kiconbutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            kiconbutton_timerevent_callback(this, cbval1);
            return;
        }
        KIconButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kiconbutton_devtype_callback) {
            int callback_ret = kiconbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KIconButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kiconbutton_setvisible_callback) {
            bool cbval1 = visible;
            kiconbutton_setvisible_callback(this, cbval1);
            return;
        }
        KIconButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kiconbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kiconbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIconButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kiconbutton_hasheightforwidth_callback) {
            bool callback_ret = kiconbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KIconButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kiconbutton_paintengine_callback) {
            QPaintEngine* callback_ret = kiconbutton_paintengine_callback(this);
            return callback_ret;
        }
        return KIconButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kiconbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kiconbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KIconButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kiconbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kiconbutton_wheelevent_callback(this, cbval1);
            return;
        }
        KIconButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kiconbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kiconbutton_enterevent_callback(this, cbval1);
            return;
        }
        KIconButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kiconbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            kiconbutton_leaveevent_callback(this, cbval1);
            return;
        }
        KIconButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kiconbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kiconbutton_moveevent_callback(this, cbval1);
            return;
        }
        KIconButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kiconbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kiconbutton_resizeevent_callback(this, cbval1);
            return;
        }
        KIconButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kiconbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kiconbutton_closeevent_callback(this, cbval1);
            return;
        }
        KIconButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kiconbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kiconbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KIconButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kiconbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kiconbutton_tabletevent_callback(this, cbval1);
            return;
        }
        KIconButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kiconbutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kiconbutton_actionevent_callback(this, cbval1);
            return;
        }
        KIconButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kiconbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kiconbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KIconButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kiconbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kiconbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KIconButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kiconbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kiconbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KIconButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kiconbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kiconbutton_dropevent_callback(this, cbval1);
            return;
        }
        KIconButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kiconbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            kiconbutton_showevent_callback(this, cbval1);
            return;
        }
        KIconButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kiconbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kiconbutton_hideevent_callback(this, cbval1);
            return;
        }
        KIconButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kiconbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kiconbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KIconButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kiconbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kiconbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIconButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kiconbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            kiconbutton_initpainter_callback(this, cbval1);
            return;
        }
        KIconButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kiconbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kiconbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KIconButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kiconbutton_sharedpainter_callback) {
            QPainter* callback_ret = kiconbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KIconButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kiconbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kiconbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KIconButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kiconbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kiconbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kiconbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kiconbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KIconButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kiconbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kiconbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIconButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kiconbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kiconbutton_childevent_callback(this, cbval1);
            return;
        }
        KIconButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kiconbutton_customevent_callback) {
            QEvent* cbval1 = event;
            kiconbutton_customevent_callback(this, cbval1);
            return;
        }
        KIconButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kiconbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kiconbutton_connectnotify_callback(this, cbval1);
            return;
        }
        KIconButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kiconbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kiconbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIconButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIconButton_SuperEvent(KIconButton* self, QEvent* e);
    friend void KIconButton_SuperPaintEvent(KIconButton* self, QPaintEvent* param1);
    friend void KIconButton_SuperKeyPressEvent(KIconButton* self, QKeyEvent* param1);
    friend void KIconButton_SuperFocusInEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_SuperFocusOutEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_SuperMouseMoveEvent(KIconButton* self, QMouseEvent* param1);
    friend void KIconButton_SuperInitStyleOption(const KIconButton* self, QStyleOptionButton* option);
    friend bool KIconButton_SuperHitButton(const KIconButton* self, const QPoint* pos);
    friend void KIconButton_SuperCheckStateSet(KIconButton* self);
    friend void KIconButton_SuperNextCheckState(KIconButton* self);
    friend void KIconButton_SuperKeyReleaseEvent(KIconButton* self, QKeyEvent* e);
    friend void KIconButton_SuperMousePressEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_SuperMouseReleaseEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_SuperChangeEvent(KIconButton* self, QEvent* e);
    friend void KIconButton_SuperTimerEvent(KIconButton* self, QTimerEvent* e);
    friend void KIconButton_SuperMouseDoubleClickEvent(KIconButton* self, QMouseEvent* event);
    friend void KIconButton_SuperWheelEvent(KIconButton* self, QWheelEvent* event);
    friend void KIconButton_SuperEnterEvent(KIconButton* self, QEnterEvent* event);
    friend void KIconButton_SuperLeaveEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_SuperMoveEvent(KIconButton* self, QMoveEvent* event);
    friend void KIconButton_SuperResizeEvent(KIconButton* self, QResizeEvent* event);
    friend void KIconButton_SuperCloseEvent(KIconButton* self, QCloseEvent* event);
    friend void KIconButton_SuperContextMenuEvent(KIconButton* self, QContextMenuEvent* event);
    friend void KIconButton_SuperTabletEvent(KIconButton* self, QTabletEvent* event);
    friend void KIconButton_SuperActionEvent(KIconButton* self, QActionEvent* event);
    friend void KIconButton_SuperDragEnterEvent(KIconButton* self, QDragEnterEvent* event);
    friend void KIconButton_SuperDragMoveEvent(KIconButton* self, QDragMoveEvent* event);
    friend void KIconButton_SuperDragLeaveEvent(KIconButton* self, QDragLeaveEvent* event);
    friend void KIconButton_SuperDropEvent(KIconButton* self, QDropEvent* event);
    friend void KIconButton_SuperShowEvent(KIconButton* self, QShowEvent* event);
    friend void KIconButton_SuperHideEvent(KIconButton* self, QHideEvent* event);
    friend bool KIconButton_SuperNativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KIconButton_SuperMetric(const KIconButton* self, int param1);
    friend void KIconButton_SuperInitPainter(const KIconButton* self, QPainter* painter);
    friend QPaintDevice* KIconButton_SuperRedirected(const KIconButton* self, QPoint* offset);
    friend QPainter* KIconButton_SuperSharedPainter(const KIconButton* self);
    friend void KIconButton_SuperInputMethodEvent(KIconButton* self, QInputMethodEvent* param1);
    friend bool KIconButton_SuperFocusNextPrevChild(KIconButton* self, bool next);
    friend void KIconButton_SuperChildEvent(KIconButton* self, QChildEvent* event);
    friend void KIconButton_SuperCustomEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_SuperConnectNotify(KIconButton* self, const QMetaMethod* signal);
    friend void KIconButton_SuperDisconnectNotify(KIconButton* self, const QMetaMethod* signal);
};

#endif
