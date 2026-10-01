#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCOLORBUTTON_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCOLORBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorButton
class VirtualKColorButton final : public KColorButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColorButton_MetaObject_Callback = QMetaObject* (*)(const KColorButton*);
    using KColorButton_Metacast_Callback = void* (*)(KColorButton*, const char*);
    using KColorButton_Metacall_Callback = int (*)(KColorButton*, int, int, void**);
    using KColorButton_SizeHint_Callback = QSize* (*)(const KColorButton*);
    using KColorButton_MinimumSizeHint_Callback = QSize* (*)(const KColorButton*);
    using KColorButton_PaintEvent_Callback = void (*)(KColorButton*, QPaintEvent*);
    using KColorButton_DragEnterEvent_Callback = void (*)(KColorButton*, QDragEnterEvent*);
    using KColorButton_DropEvent_Callback = void (*)(KColorButton*, QDropEvent*);
    using KColorButton_MousePressEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_MouseMoveEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_KeyPressEvent_Callback = void (*)(KColorButton*, QKeyEvent*);
    using KColorButton_Event_Callback = bool (*)(KColorButton*, QEvent*);
    using KColorButton_FocusInEvent_Callback = void (*)(KColorButton*, QFocusEvent*);
    using KColorButton_FocusOutEvent_Callback = void (*)(KColorButton*, QFocusEvent*);
    using KColorButton_InitStyleOption_Callback = void (*)(const KColorButton*, QStyleOptionButton*);
    using KColorButton_HitButton_Callback = bool (*)(const KColorButton*, QPoint*);
    using KColorButton_CheckStateSet_Callback = void (*)(KColorButton*);
    using KColorButton_NextCheckState_Callback = void (*)(KColorButton*);
    using KColorButton_KeyReleaseEvent_Callback = void (*)(KColorButton*, QKeyEvent*);
    using KColorButton_MouseReleaseEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_ChangeEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_TimerEvent_Callback = void (*)(KColorButton*, QTimerEvent*);
    using KColorButton_DevType_Callback = int (*)(const KColorButton*);
    using KColorButton_SetVisible_Callback = void (*)(KColorButton*, bool);
    using KColorButton_HeightForWidth_Callback = int (*)(const KColorButton*, int);
    using KColorButton_HasHeightForWidth_Callback = bool (*)(const KColorButton*);
    using KColorButton_PaintEngine_Callback = QPaintEngine* (*)(const KColorButton*);
    using KColorButton_MouseDoubleClickEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_WheelEvent_Callback = void (*)(KColorButton*, QWheelEvent*);
    using KColorButton_EnterEvent_Callback = void (*)(KColorButton*, QEnterEvent*);
    using KColorButton_LeaveEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_MoveEvent_Callback = void (*)(KColorButton*, QMoveEvent*);
    using KColorButton_ResizeEvent_Callback = void (*)(KColorButton*, QResizeEvent*);
    using KColorButton_CloseEvent_Callback = void (*)(KColorButton*, QCloseEvent*);
    using KColorButton_ContextMenuEvent_Callback = void (*)(KColorButton*, QContextMenuEvent*);
    using KColorButton_TabletEvent_Callback = void (*)(KColorButton*, QTabletEvent*);
    using KColorButton_ActionEvent_Callback = void (*)(KColorButton*, QActionEvent*);
    using KColorButton_DragMoveEvent_Callback = void (*)(KColorButton*, QDragMoveEvent*);
    using KColorButton_DragLeaveEvent_Callback = void (*)(KColorButton*, QDragLeaveEvent*);
    using KColorButton_ShowEvent_Callback = void (*)(KColorButton*, QShowEvent*);
    using KColorButton_HideEvent_Callback = void (*)(KColorButton*, QHideEvent*);
    using KColorButton_NativeEvent_Callback = bool (*)(KColorButton*, libqt_string, void*, intptr_t*);
    using KColorButton_Metric_Callback = int (*)(const KColorButton*, int);
    using KColorButton_InitPainter_Callback = void (*)(const KColorButton*, QPainter*);
    using KColorButton_Redirected_Callback = QPaintDevice* (*)(const KColorButton*, QPoint*);
    using KColorButton_SharedPainter_Callback = QPainter* (*)(const KColorButton*);
    using KColorButton_InputMethodEvent_Callback = void (*)(KColorButton*, QInputMethodEvent*);
    using KColorButton_InputMethodQuery_Callback = QVariant* (*)(const KColorButton*, int);
    using KColorButton_FocusNextPrevChild_Callback = bool (*)(KColorButton*, bool);
    using KColorButton_EventFilter_Callback = bool (*)(KColorButton*, QObject*, QEvent*);
    using KColorButton_ChildEvent_Callback = void (*)(KColorButton*, QChildEvent*);
    using KColorButton_CustomEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_ConnectNotify_Callback = void (*)(KColorButton*, QMetaMethod*);
    using KColorButton_DisconnectNotify_Callback = void (*)(KColorButton*, QMetaMethod*);
    using KColorButton::create;
    using KColorButton::destroy;
    using KColorButton::focusNextChild;
    using KColorButton::focusPreviousChild;
    using KColorButton::getDecodedMetricF;
    using KColorButton::isSignalConnected;
    using KColorButton::receivers;
    using KColorButton::sender;
    using KColorButton::senderSignalIndex;
    using KColorButton::updateMicroFocus;

    // Instance callback storage
    KColorButton_MetaObject_Callback kcolorbutton_metaobject_callback = nullptr;
    KColorButton_Metacast_Callback kcolorbutton_metacast_callback = nullptr;
    KColorButton_Metacall_Callback kcolorbutton_metacall_callback = nullptr;
    KColorButton_SizeHint_Callback kcolorbutton_sizehint_callback = nullptr;
    KColorButton_MinimumSizeHint_Callback kcolorbutton_minimumsizehint_callback = nullptr;
    KColorButton_PaintEvent_Callback kcolorbutton_paintevent_callback = nullptr;
    KColorButton_DragEnterEvent_Callback kcolorbutton_dragenterevent_callback = nullptr;
    KColorButton_DropEvent_Callback kcolorbutton_dropevent_callback = nullptr;
    KColorButton_MousePressEvent_Callback kcolorbutton_mousepressevent_callback = nullptr;
    KColorButton_MouseMoveEvent_Callback kcolorbutton_mousemoveevent_callback = nullptr;
    KColorButton_KeyPressEvent_Callback kcolorbutton_keypressevent_callback = nullptr;
    KColorButton_Event_Callback kcolorbutton_event_callback = nullptr;
    KColorButton_FocusInEvent_Callback kcolorbutton_focusinevent_callback = nullptr;
    KColorButton_FocusOutEvent_Callback kcolorbutton_focusoutevent_callback = nullptr;
    KColorButton_InitStyleOption_Callback kcolorbutton_initstyleoption_callback = nullptr;
    KColorButton_HitButton_Callback kcolorbutton_hitbutton_callback = nullptr;
    KColorButton_CheckStateSet_Callback kcolorbutton_checkstateset_callback = nullptr;
    KColorButton_NextCheckState_Callback kcolorbutton_nextcheckstate_callback = nullptr;
    KColorButton_KeyReleaseEvent_Callback kcolorbutton_keyreleaseevent_callback = nullptr;
    KColorButton_MouseReleaseEvent_Callback kcolorbutton_mousereleaseevent_callback = nullptr;
    KColorButton_ChangeEvent_Callback kcolorbutton_changeevent_callback = nullptr;
    KColorButton_TimerEvent_Callback kcolorbutton_timerevent_callback = nullptr;
    KColorButton_DevType_Callback kcolorbutton_devtype_callback = nullptr;
    KColorButton_SetVisible_Callback kcolorbutton_setvisible_callback = nullptr;
    KColorButton_HeightForWidth_Callback kcolorbutton_heightforwidth_callback = nullptr;
    KColorButton_HasHeightForWidth_Callback kcolorbutton_hasheightforwidth_callback = nullptr;
    KColorButton_PaintEngine_Callback kcolorbutton_paintengine_callback = nullptr;
    KColorButton_MouseDoubleClickEvent_Callback kcolorbutton_mousedoubleclickevent_callback = nullptr;
    KColorButton_WheelEvent_Callback kcolorbutton_wheelevent_callback = nullptr;
    KColorButton_EnterEvent_Callback kcolorbutton_enterevent_callback = nullptr;
    KColorButton_LeaveEvent_Callback kcolorbutton_leaveevent_callback = nullptr;
    KColorButton_MoveEvent_Callback kcolorbutton_moveevent_callback = nullptr;
    KColorButton_ResizeEvent_Callback kcolorbutton_resizeevent_callback = nullptr;
    KColorButton_CloseEvent_Callback kcolorbutton_closeevent_callback = nullptr;
    KColorButton_ContextMenuEvent_Callback kcolorbutton_contextmenuevent_callback = nullptr;
    KColorButton_TabletEvent_Callback kcolorbutton_tabletevent_callback = nullptr;
    KColorButton_ActionEvent_Callback kcolorbutton_actionevent_callback = nullptr;
    KColorButton_DragMoveEvent_Callback kcolorbutton_dragmoveevent_callback = nullptr;
    KColorButton_DragLeaveEvent_Callback kcolorbutton_dragleaveevent_callback = nullptr;
    KColorButton_ShowEvent_Callback kcolorbutton_showevent_callback = nullptr;
    KColorButton_HideEvent_Callback kcolorbutton_hideevent_callback = nullptr;
    KColorButton_NativeEvent_Callback kcolorbutton_nativeevent_callback = nullptr;
    KColorButton_Metric_Callback kcolorbutton_metric_callback = nullptr;
    KColorButton_InitPainter_Callback kcolorbutton_initpainter_callback = nullptr;
    KColorButton_Redirected_Callback kcolorbutton_redirected_callback = nullptr;
    KColorButton_SharedPainter_Callback kcolorbutton_sharedpainter_callback = nullptr;
    KColorButton_InputMethodEvent_Callback kcolorbutton_inputmethodevent_callback = nullptr;
    KColorButton_InputMethodQuery_Callback kcolorbutton_inputmethodquery_callback = nullptr;
    KColorButton_FocusNextPrevChild_Callback kcolorbutton_focusnextprevchild_callback = nullptr;
    KColorButton_EventFilter_Callback kcolorbutton_eventfilter_callback = nullptr;
    KColorButton_ChildEvent_Callback kcolorbutton_childevent_callback = nullptr;
    KColorButton_CustomEvent_Callback kcolorbutton_customevent_callback = nullptr;
    KColorButton_ConnectNotify_Callback kcolorbutton_connectnotify_callback = nullptr;
    KColorButton_DisconnectNotify_Callback kcolorbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColorButton {
        using KColorButton::actionEvent;
        using KColorButton::changeEvent;
        using KColorButton::checkStateSet;
        using KColorButton::childEvent;
        using KColorButton::closeEvent;
        using KColorButton::connectNotify;
        using KColorButton::contextMenuEvent;
        using KColorButton::customEvent;
        using KColorButton::disconnectNotify;
        using KColorButton::dragEnterEvent;
        using KColorButton::dragLeaveEvent;
        using KColorButton::dragMoveEvent;
        using KColorButton::dropEvent;
        using KColorButton::enterEvent;
        using KColorButton::event;
        using KColorButton::focusInEvent;
        using KColorButton::focusNextPrevChild;
        using KColorButton::focusOutEvent;
        using KColorButton::hideEvent;
        using KColorButton::hitButton;
        using KColorButton::initPainter;
        using KColorButton::initStyleOption;
        using KColorButton::inputMethodEvent;
        using KColorButton::keyPressEvent;
        using KColorButton::keyReleaseEvent;
        using KColorButton::leaveEvent;
        using KColorButton::metric;
        using KColorButton::mouseDoubleClickEvent;
        using KColorButton::mouseMoveEvent;
        using KColorButton::mousePressEvent;
        using KColorButton::mouseReleaseEvent;
        using KColorButton::moveEvent;
        using KColorButton::nativeEvent;
        using KColorButton::nextCheckState;
        using KColorButton::paintEvent;
        using KColorButton::redirected;
        using KColorButton::resizeEvent;
        using KColorButton::sharedPainter;
        using KColorButton::showEvent;
        using KColorButton::tabletEvent;
        using KColorButton::timerEvent;
        using KColorButton::wheelEvent;
    };

    VirtualKColorButton(QWidget* parent) : KColorButton(parent) {};
    VirtualKColorButton() : KColorButton() {};
    VirtualKColorButton(const QColor& c) : KColorButton(c) {};
    VirtualKColorButton(const QColor& c, const QColor& defaultColor) : KColorButton(c, defaultColor) {};
    VirtualKColorButton(const QColor& c, QWidget* parent) : KColorButton(c, parent) {};
    VirtualKColorButton(const QColor& c, const QColor& defaultColor, QWidget* parent) : KColorButton(c, defaultColor, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorbutton_metaobject_callback) {
            QMetaObject* callback_ret = kcolorbutton_metaobject_callback(this);
            return callback_ret;
        }
        return KColorButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColorButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorbutton_sizehint_callback) {
            QSize* callback_ret = kcolorbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorbutton_minimumsizehint_callback) {
            QSize* callback_ret = kcolorbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* pe) override {
        if (kcolorbutton_paintevent_callback) {
            QPaintEvent* cbval1 = pe;
            kcolorbutton_paintevent_callback(this, cbval1);
            return;
        }
        KColorButton::paintEvent(pe);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (kcolorbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            kcolorbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KColorButton::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (kcolorbutton_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            kcolorbutton_dropevent_callback(this, cbval1);
            return;
        }
        KColorButton::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KColorButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KColorButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorbutton_keypressevent_callback(this, cbval1);
            return;
        }
        KColorButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcolorbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcolorbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColorButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (kcolorbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            kcolorbutton_focusinevent_callback(this, cbval1);
            return;
        }
        KColorButton::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (kcolorbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            kcolorbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KColorButton::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (kcolorbutton_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            kcolorbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        KColorButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcolorbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = kcolorbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KColorButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcolorbutton_checkstateset_callback) {
            kcolorbutton_checkstateset_callback(this);
            return;
        }
        KColorButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcolorbutton_nextcheckstate_callback) {
            kcolorbutton_nextcheckstate_callback(this);
            return;
        }
        KColorButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KColorButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KColorButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcolorbutton_changeevent_callback) {
            QEvent* cbval1 = e;
            kcolorbutton_changeevent_callback(this, cbval1);
            return;
        }
        KColorButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcolorbutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            kcolorbutton_timerevent_callback(this, cbval1);
            return;
        }
        KColorButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorbutton_devtype_callback) {
            int callback_ret = kcolorbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KColorButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorbutton_setvisible_callback) {
            bool cbval1 = visible;
            kcolorbutton_setvisible_callback(this, cbval1);
            return;
        }
        KColorButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcolorbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorbutton_hasheightforwidth_callback) {
            bool callback_ret = kcolorbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KColorButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorbutton_paintengine_callback) {
            QPaintEngine* callback_ret = kcolorbutton_paintengine_callback(this);
            return callback_ret;
        }
        return KColorButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcolorbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KColorButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcolorbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcolorbutton_wheelevent_callback(this, cbval1);
            return;
        }
        KColorButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcolorbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcolorbutton_enterevent_callback(this, cbval1);
            return;
        }
        KColorButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcolorbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcolorbutton_leaveevent_callback(this, cbval1);
            return;
        }
        KColorButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcolorbutton_moveevent_callback(this, cbval1);
            return;
        }
        KColorButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcolorbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcolorbutton_resizeevent_callback(this, cbval1);
            return;
        }
        KColorButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcolorbutton_closeevent_callback(this, cbval1);
            return;
        }
        KColorButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcolorbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcolorbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KColorButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcolorbutton_tabletevent_callback(this, cbval1);
            return;
        }
        KColorButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcolorbutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcolorbutton_actionevent_callback(this, cbval1);
            return;
        }
        KColorButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcolorbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KColorButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcolorbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KColorButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcolorbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcolorbutton_showevent_callback(this, cbval1);
            return;
        }
        KColorButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcolorbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcolorbutton_hideevent_callback(this, cbval1);
            return;
        }
        KColorButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcolorbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KColorButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcolorbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcolorbutton_initpainter_callback(this, cbval1);
            return;
        }
        KColorButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcolorbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KColorButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorbutton_sharedpainter_callback) {
            QPainter* callback_ret = kcolorbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KColorButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcolorbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KColorButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcolorbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcolorbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KColorButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorbutton_childevent_callback(this, cbval1);
            return;
        }
        KColorButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorbutton_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorbutton_customevent_callback(this, cbval1);
            return;
        }
        KColorButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorbutton_connectnotify_callback(this, cbval1);
            return;
        }
        KColorButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColorButton::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColorButton_SuperPaintEvent(KColorButton* self, QPaintEvent* pe);
    friend void KColorButton_SuperDragEnterEvent(KColorButton* self, QDragEnterEvent* param1);
    friend void KColorButton_SuperDropEvent(KColorButton* self, QDropEvent* param1);
    friend void KColorButton_SuperMousePressEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_SuperMouseMoveEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_SuperKeyPressEvent(KColorButton* self, QKeyEvent* e);
    friend bool KColorButton_SuperEvent(KColorButton* self, QEvent* e);
    friend void KColorButton_SuperFocusInEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_SuperFocusOutEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_SuperInitStyleOption(const KColorButton* self, QStyleOptionButton* option);
    friend bool KColorButton_SuperHitButton(const KColorButton* self, const QPoint* pos);
    friend void KColorButton_SuperCheckStateSet(KColorButton* self);
    friend void KColorButton_SuperNextCheckState(KColorButton* self);
    friend void KColorButton_SuperKeyReleaseEvent(KColorButton* self, QKeyEvent* e);
    friend void KColorButton_SuperMouseReleaseEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_SuperChangeEvent(KColorButton* self, QEvent* e);
    friend void KColorButton_SuperTimerEvent(KColorButton* self, QTimerEvent* e);
    friend void KColorButton_SuperMouseDoubleClickEvent(KColorButton* self, QMouseEvent* event);
    friend void KColorButton_SuperWheelEvent(KColorButton* self, QWheelEvent* event);
    friend void KColorButton_SuperEnterEvent(KColorButton* self, QEnterEvent* event);
    friend void KColorButton_SuperLeaveEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_SuperMoveEvent(KColorButton* self, QMoveEvent* event);
    friend void KColorButton_SuperResizeEvent(KColorButton* self, QResizeEvent* event);
    friend void KColorButton_SuperCloseEvent(KColorButton* self, QCloseEvent* event);
    friend void KColorButton_SuperContextMenuEvent(KColorButton* self, QContextMenuEvent* event);
    friend void KColorButton_SuperTabletEvent(KColorButton* self, QTabletEvent* event);
    friend void KColorButton_SuperActionEvent(KColorButton* self, QActionEvent* event);
    friend void KColorButton_SuperDragMoveEvent(KColorButton* self, QDragMoveEvent* event);
    friend void KColorButton_SuperDragLeaveEvent(KColorButton* self, QDragLeaveEvent* event);
    friend void KColorButton_SuperShowEvent(KColorButton* self, QShowEvent* event);
    friend void KColorButton_SuperHideEvent(KColorButton* self, QHideEvent* event);
    friend bool KColorButton_SuperNativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KColorButton_SuperMetric(const KColorButton* self, int param1);
    friend void KColorButton_SuperInitPainter(const KColorButton* self, QPainter* painter);
    friend QPaintDevice* KColorButton_SuperRedirected(const KColorButton* self, QPoint* offset);
    friend QPainter* KColorButton_SuperSharedPainter(const KColorButton* self);
    friend void KColorButton_SuperInputMethodEvent(KColorButton* self, QInputMethodEvent* param1);
    friend bool KColorButton_SuperFocusNextPrevChild(KColorButton* self, bool next);
    friend void KColorButton_SuperChildEvent(KColorButton* self, QChildEvent* event);
    friend void KColorButton_SuperCustomEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_SuperConnectNotify(KColorButton* self, const QMetaMethod* signal);
    friend void KColorButton_SuperDisconnectNotify(KColorButton* self, const QMetaMethod* signal);
};

#endif
