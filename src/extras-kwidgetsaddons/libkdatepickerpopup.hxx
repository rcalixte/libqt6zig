#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDATEPICKERPOPUP_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDATEPICKERPOPUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDatePickerPopup
class VirtualKDatePickerPopup final : public KDatePickerPopup {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDatePickerPopup_MetaObject_Callback = QMetaObject* (*)(const KDatePickerPopup*);
    using KDatePickerPopup_Metacast_Callback = void* (*)(KDatePickerPopup*, const char*);
    using KDatePickerPopup_Metacall_Callback = int (*)(KDatePickerPopup*, int, int, void**);
    using KDatePickerPopup_SizeHint_Callback = QSize* (*)(const KDatePickerPopup*);
    using KDatePickerPopup_ChangeEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_KeyPressEvent_Callback = void (*)(KDatePickerPopup*, QKeyEvent*);
    using KDatePickerPopup_MouseReleaseEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_MousePressEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_MouseMoveEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_WheelEvent_Callback = void (*)(KDatePickerPopup*, QWheelEvent*);
    using KDatePickerPopup_EnterEvent_Callback = void (*)(KDatePickerPopup*, QEnterEvent*);
    using KDatePickerPopup_LeaveEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_HideEvent_Callback = void (*)(KDatePickerPopup*, QHideEvent*);
    using KDatePickerPopup_PaintEvent_Callback = void (*)(KDatePickerPopup*, QPaintEvent*);
    using KDatePickerPopup_ActionEvent_Callback = void (*)(KDatePickerPopup*, QActionEvent*);
    using KDatePickerPopup_TimerEvent_Callback = void (*)(KDatePickerPopup*, QTimerEvent*);
    using KDatePickerPopup_Event_Callback = bool (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_FocusNextPrevChild_Callback = bool (*)(KDatePickerPopup*, bool);
    using KDatePickerPopup_InitStyleOption_Callback = void (*)(const KDatePickerPopup*, QStyleOptionMenuItem*, QAction*);
    using KDatePickerPopup_DevType_Callback = int (*)(const KDatePickerPopup*);
    using KDatePickerPopup_SetVisible_Callback = void (*)(KDatePickerPopup*, bool);
    using KDatePickerPopup_MinimumSizeHint_Callback = QSize* (*)(const KDatePickerPopup*);
    using KDatePickerPopup_HeightForWidth_Callback = int (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_HasHeightForWidth_Callback = bool (*)(const KDatePickerPopup*);
    using KDatePickerPopup_PaintEngine_Callback = QPaintEngine* (*)(const KDatePickerPopup*);
    using KDatePickerPopup_MouseDoubleClickEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_KeyReleaseEvent_Callback = void (*)(KDatePickerPopup*, QKeyEvent*);
    using KDatePickerPopup_FocusInEvent_Callback = void (*)(KDatePickerPopup*, QFocusEvent*);
    using KDatePickerPopup_FocusOutEvent_Callback = void (*)(KDatePickerPopup*, QFocusEvent*);
    using KDatePickerPopup_MoveEvent_Callback = void (*)(KDatePickerPopup*, QMoveEvent*);
    using KDatePickerPopup_ResizeEvent_Callback = void (*)(KDatePickerPopup*, QResizeEvent*);
    using KDatePickerPopup_CloseEvent_Callback = void (*)(KDatePickerPopup*, QCloseEvent*);
    using KDatePickerPopup_ContextMenuEvent_Callback = void (*)(KDatePickerPopup*, QContextMenuEvent*);
    using KDatePickerPopup_TabletEvent_Callback = void (*)(KDatePickerPopup*, QTabletEvent*);
    using KDatePickerPopup_DragEnterEvent_Callback = void (*)(KDatePickerPopup*, QDragEnterEvent*);
    using KDatePickerPopup_DragMoveEvent_Callback = void (*)(KDatePickerPopup*, QDragMoveEvent*);
    using KDatePickerPopup_DragLeaveEvent_Callback = void (*)(KDatePickerPopup*, QDragLeaveEvent*);
    using KDatePickerPopup_DropEvent_Callback = void (*)(KDatePickerPopup*, QDropEvent*);
    using KDatePickerPopup_ShowEvent_Callback = void (*)(KDatePickerPopup*, QShowEvent*);
    using KDatePickerPopup_NativeEvent_Callback = bool (*)(KDatePickerPopup*, libqt_string, void*, intptr_t*);
    using KDatePickerPopup_Metric_Callback = int (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_InitPainter_Callback = void (*)(const KDatePickerPopup*, QPainter*);
    using KDatePickerPopup_Redirected_Callback = QPaintDevice* (*)(const KDatePickerPopup*, QPoint*);
    using KDatePickerPopup_SharedPainter_Callback = QPainter* (*)(const KDatePickerPopup*);
    using KDatePickerPopup_InputMethodEvent_Callback = void (*)(KDatePickerPopup*, QInputMethodEvent*);
    using KDatePickerPopup_InputMethodQuery_Callback = QVariant* (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_EventFilter_Callback = bool (*)(KDatePickerPopup*, QObject*, QEvent*);
    using KDatePickerPopup_ChildEvent_Callback = void (*)(KDatePickerPopup*, QChildEvent*);
    using KDatePickerPopup_CustomEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_ConnectNotify_Callback = void (*)(KDatePickerPopup*, QMetaMethod*);
    using KDatePickerPopup_DisconnectNotify_Callback = void (*)(KDatePickerPopup*, QMetaMethod*);
    using KDatePickerPopup::columnCount;
    using KDatePickerPopup::create;
    using KDatePickerPopup::destroy;
    using KDatePickerPopup::focusNextChild;
    using KDatePickerPopup::focusPreviousChild;
    using KDatePickerPopup::getDecodedMetricF;
    using KDatePickerPopup::isSignalConnected;
    using KDatePickerPopup::receivers;
    using KDatePickerPopup::sender;
    using KDatePickerPopup::senderSignalIndex;
    using KDatePickerPopup::updateMicroFocus;

    // Instance callback storage
    KDatePickerPopup_MetaObject_Callback kdatepickerpopup_metaobject_callback = nullptr;
    KDatePickerPopup_Metacast_Callback kdatepickerpopup_metacast_callback = nullptr;
    KDatePickerPopup_Metacall_Callback kdatepickerpopup_metacall_callback = nullptr;
    KDatePickerPopup_SizeHint_Callback kdatepickerpopup_sizehint_callback = nullptr;
    KDatePickerPopup_ChangeEvent_Callback kdatepickerpopup_changeevent_callback = nullptr;
    KDatePickerPopup_KeyPressEvent_Callback kdatepickerpopup_keypressevent_callback = nullptr;
    KDatePickerPopup_MouseReleaseEvent_Callback kdatepickerpopup_mousereleaseevent_callback = nullptr;
    KDatePickerPopup_MousePressEvent_Callback kdatepickerpopup_mousepressevent_callback = nullptr;
    KDatePickerPopup_MouseMoveEvent_Callback kdatepickerpopup_mousemoveevent_callback = nullptr;
    KDatePickerPopup_WheelEvent_Callback kdatepickerpopup_wheelevent_callback = nullptr;
    KDatePickerPopup_EnterEvent_Callback kdatepickerpopup_enterevent_callback = nullptr;
    KDatePickerPopup_LeaveEvent_Callback kdatepickerpopup_leaveevent_callback = nullptr;
    KDatePickerPopup_HideEvent_Callback kdatepickerpopup_hideevent_callback = nullptr;
    KDatePickerPopup_PaintEvent_Callback kdatepickerpopup_paintevent_callback = nullptr;
    KDatePickerPopup_ActionEvent_Callback kdatepickerpopup_actionevent_callback = nullptr;
    KDatePickerPopup_TimerEvent_Callback kdatepickerpopup_timerevent_callback = nullptr;
    KDatePickerPopup_Event_Callback kdatepickerpopup_event_callback = nullptr;
    KDatePickerPopup_FocusNextPrevChild_Callback kdatepickerpopup_focusnextprevchild_callback = nullptr;
    KDatePickerPopup_InitStyleOption_Callback kdatepickerpopup_initstyleoption_callback = nullptr;
    KDatePickerPopup_DevType_Callback kdatepickerpopup_devtype_callback = nullptr;
    KDatePickerPopup_SetVisible_Callback kdatepickerpopup_setvisible_callback = nullptr;
    KDatePickerPopup_MinimumSizeHint_Callback kdatepickerpopup_minimumsizehint_callback = nullptr;
    KDatePickerPopup_HeightForWidth_Callback kdatepickerpopup_heightforwidth_callback = nullptr;
    KDatePickerPopup_HasHeightForWidth_Callback kdatepickerpopup_hasheightforwidth_callback = nullptr;
    KDatePickerPopup_PaintEngine_Callback kdatepickerpopup_paintengine_callback = nullptr;
    KDatePickerPopup_MouseDoubleClickEvent_Callback kdatepickerpopup_mousedoubleclickevent_callback = nullptr;
    KDatePickerPopup_KeyReleaseEvent_Callback kdatepickerpopup_keyreleaseevent_callback = nullptr;
    KDatePickerPopup_FocusInEvent_Callback kdatepickerpopup_focusinevent_callback = nullptr;
    KDatePickerPopup_FocusOutEvent_Callback kdatepickerpopup_focusoutevent_callback = nullptr;
    KDatePickerPopup_MoveEvent_Callback kdatepickerpopup_moveevent_callback = nullptr;
    KDatePickerPopup_ResizeEvent_Callback kdatepickerpopup_resizeevent_callback = nullptr;
    KDatePickerPopup_CloseEvent_Callback kdatepickerpopup_closeevent_callback = nullptr;
    KDatePickerPopup_ContextMenuEvent_Callback kdatepickerpopup_contextmenuevent_callback = nullptr;
    KDatePickerPopup_TabletEvent_Callback kdatepickerpopup_tabletevent_callback = nullptr;
    KDatePickerPopup_DragEnterEvent_Callback kdatepickerpopup_dragenterevent_callback = nullptr;
    KDatePickerPopup_DragMoveEvent_Callback kdatepickerpopup_dragmoveevent_callback = nullptr;
    KDatePickerPopup_DragLeaveEvent_Callback kdatepickerpopup_dragleaveevent_callback = nullptr;
    KDatePickerPopup_DropEvent_Callback kdatepickerpopup_dropevent_callback = nullptr;
    KDatePickerPopup_ShowEvent_Callback kdatepickerpopup_showevent_callback = nullptr;
    KDatePickerPopup_NativeEvent_Callback kdatepickerpopup_nativeevent_callback = nullptr;
    KDatePickerPopup_Metric_Callback kdatepickerpopup_metric_callback = nullptr;
    KDatePickerPopup_InitPainter_Callback kdatepickerpopup_initpainter_callback = nullptr;
    KDatePickerPopup_Redirected_Callback kdatepickerpopup_redirected_callback = nullptr;
    KDatePickerPopup_SharedPainter_Callback kdatepickerpopup_sharedpainter_callback = nullptr;
    KDatePickerPopup_InputMethodEvent_Callback kdatepickerpopup_inputmethodevent_callback = nullptr;
    KDatePickerPopup_InputMethodQuery_Callback kdatepickerpopup_inputmethodquery_callback = nullptr;
    KDatePickerPopup_EventFilter_Callback kdatepickerpopup_eventfilter_callback = nullptr;
    KDatePickerPopup_ChildEvent_Callback kdatepickerpopup_childevent_callback = nullptr;
    KDatePickerPopup_CustomEvent_Callback kdatepickerpopup_customevent_callback = nullptr;
    KDatePickerPopup_ConnectNotify_Callback kdatepickerpopup_connectnotify_callback = nullptr;
    KDatePickerPopup_DisconnectNotify_Callback kdatepickerpopup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDatePickerPopup {
        using KDatePickerPopup::actionEvent;
        using KDatePickerPopup::changeEvent;
        using KDatePickerPopup::childEvent;
        using KDatePickerPopup::closeEvent;
        using KDatePickerPopup::connectNotify;
        using KDatePickerPopup::contextMenuEvent;
        using KDatePickerPopup::customEvent;
        using KDatePickerPopup::disconnectNotify;
        using KDatePickerPopup::dragEnterEvent;
        using KDatePickerPopup::dragLeaveEvent;
        using KDatePickerPopup::dragMoveEvent;
        using KDatePickerPopup::dropEvent;
        using KDatePickerPopup::enterEvent;
        using KDatePickerPopup::event;
        using KDatePickerPopup::focusInEvent;
        using KDatePickerPopup::focusNextPrevChild;
        using KDatePickerPopup::focusOutEvent;
        using KDatePickerPopup::hideEvent;
        using KDatePickerPopup::initPainter;
        using KDatePickerPopup::initStyleOption;
        using KDatePickerPopup::inputMethodEvent;
        using KDatePickerPopup::keyPressEvent;
        using KDatePickerPopup::keyReleaseEvent;
        using KDatePickerPopup::leaveEvent;
        using KDatePickerPopup::metric;
        using KDatePickerPopup::mouseDoubleClickEvent;
        using KDatePickerPopup::mouseMoveEvent;
        using KDatePickerPopup::mousePressEvent;
        using KDatePickerPopup::mouseReleaseEvent;
        using KDatePickerPopup::moveEvent;
        using KDatePickerPopup::nativeEvent;
        using KDatePickerPopup::paintEvent;
        using KDatePickerPopup::redirected;
        using KDatePickerPopup::resizeEvent;
        using KDatePickerPopup::sharedPainter;
        using KDatePickerPopup::showEvent;
        using KDatePickerPopup::tabletEvent;
        using KDatePickerPopup::timerEvent;
        using KDatePickerPopup::wheelEvent;
    };

    VirtualKDatePickerPopup() : KDatePickerPopup() {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes) : KDatePickerPopup(modes) {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes, QDate date) : KDatePickerPopup(modes, date) {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes, QDate date, QWidget* parent) : KDatePickerPopup(modes, date, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatepickerpopup_metaobject_callback) {
            QMetaObject* callback_ret = kdatepickerpopup_metaobject_callback(this);
            return callback_ret;
        }
        return KDatePickerPopup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatepickerpopup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdatepickerpopup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePickerPopup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatepickerpopup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdatepickerpopup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDatePickerPopup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatepickerpopup_sizehint_callback) {
            QSize* callback_ret = kdatepickerpopup_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePickerPopup::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kdatepickerpopup_changeevent_callback) {
            QEvent* cbval1 = param1;
            kdatepickerpopup_changeevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kdatepickerpopup_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kdatepickerpopup_keypressevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kdatepickerpopup_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kdatepickerpopup_mousepressevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            kdatepickerpopup_mousemoveevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kdatepickerpopup_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kdatepickerpopup_wheelevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kdatepickerpopup_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            kdatepickerpopup_enterevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kdatepickerpopup_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kdatepickerpopup_leaveevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (kdatepickerpopup_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            kdatepickerpopup_hideevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kdatepickerpopup_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kdatepickerpopup_paintevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kdatepickerpopup_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            kdatepickerpopup_actionevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kdatepickerpopup_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kdatepickerpopup_timerevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kdatepickerpopup_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kdatepickerpopup_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePickerPopup::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatepickerpopup_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kdatepickerpopup_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePickerPopup::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (kdatepickerpopup_initstyleoption_callback) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;
            kdatepickerpopup_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        KDatePickerPopup::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatepickerpopup_devtype_callback) {
            int callback_ret = kdatepickerpopup_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KDatePickerPopup::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatepickerpopup_setvisible_callback) {
            bool cbval1 = visible;
            kdatepickerpopup_setvisible_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatepickerpopup_minimumsizehint_callback) {
            QSize* callback_ret = kdatepickerpopup_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePickerPopup::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatepickerpopup_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kdatepickerpopup_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDatePickerPopup::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatepickerpopup_hasheightforwidth_callback) {
            bool callback_ret = kdatepickerpopup_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KDatePickerPopup::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatepickerpopup_paintengine_callback) {
            QPaintEngine* callback_ret = kdatepickerpopup_paintengine_callback(this);
            return callback_ret;
        }
        return KDatePickerPopup::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatepickerpopup_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatepickerpopup_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatepickerpopup_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatepickerpopup_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatepickerpopup_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatepickerpopup_focusinevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatepickerpopup_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatepickerpopup_focusoutevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatepickerpopup_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kdatepickerpopup_moveevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatepickerpopup_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kdatepickerpopup_resizeevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatepickerpopup_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kdatepickerpopup_closeevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatepickerpopup_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kdatepickerpopup_contextmenuevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatepickerpopup_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kdatepickerpopup_tabletevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatepickerpopup_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kdatepickerpopup_dragenterevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatepickerpopup_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kdatepickerpopup_dragmoveevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatepickerpopup_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kdatepickerpopup_dragleaveevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatepickerpopup_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kdatepickerpopup_dropevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatepickerpopup_showevent_callback) {
            QShowEvent* cbval1 = event;
            kdatepickerpopup_showevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatepickerpopup_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kdatepickerpopup_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KDatePickerPopup::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatepickerpopup_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kdatepickerpopup_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDatePickerPopup::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatepickerpopup_initpainter_callback) {
            QPainter* cbval1 = painter;
            kdatepickerpopup_initpainter_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatepickerpopup_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kdatepickerpopup_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KDatePickerPopup::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatepickerpopup_sharedpainter_callback) {
            QPainter* callback_ret = kdatepickerpopup_sharedpainter_callback(this);
            return callback_ret;
        }
        return KDatePickerPopup::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatepickerpopup_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kdatepickerpopup_inputmethodevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatepickerpopup_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kdatepickerpopup_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDatePickerPopup::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdatepickerpopup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdatepickerpopup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDatePickerPopup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatepickerpopup_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdatepickerpopup_childevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatepickerpopup_customevent_callback) {
            QEvent* cbval1 = event;
            kdatepickerpopup_customevent_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatepickerpopup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatepickerpopup_connectnotify_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatepickerpopup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatepickerpopup_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDatePickerPopup::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDatePickerPopup_SuperChangeEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_SuperKeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1);
    friend void KDatePickerPopup_SuperMouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_SuperMousePressEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_SuperMouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_SuperWheelEvent(KDatePickerPopup* self, QWheelEvent* param1);
    friend void KDatePickerPopup_SuperEnterEvent(KDatePickerPopup* self, QEnterEvent* param1);
    friend void KDatePickerPopup_SuperLeaveEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_SuperHideEvent(KDatePickerPopup* self, QHideEvent* param1);
    friend void KDatePickerPopup_SuperPaintEvent(KDatePickerPopup* self, QPaintEvent* param1);
    friend void KDatePickerPopup_SuperActionEvent(KDatePickerPopup* self, QActionEvent* param1);
    friend void KDatePickerPopup_SuperTimerEvent(KDatePickerPopup* self, QTimerEvent* param1);
    friend bool KDatePickerPopup_SuperEvent(KDatePickerPopup* self, QEvent* param1);
    friend bool KDatePickerPopup_SuperFocusNextPrevChild(KDatePickerPopup* self, bool next);
    friend void KDatePickerPopup_SuperInitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KDatePickerPopup_SuperMouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event);
    friend void KDatePickerPopup_SuperKeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event);
    friend void KDatePickerPopup_SuperFocusInEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_SuperFocusOutEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_SuperMoveEvent(KDatePickerPopup* self, QMoveEvent* event);
    friend void KDatePickerPopup_SuperResizeEvent(KDatePickerPopup* self, QResizeEvent* event);
    friend void KDatePickerPopup_SuperCloseEvent(KDatePickerPopup* self, QCloseEvent* event);
    friend void KDatePickerPopup_SuperContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event);
    friend void KDatePickerPopup_SuperTabletEvent(KDatePickerPopup* self, QTabletEvent* event);
    friend void KDatePickerPopup_SuperDragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event);
    friend void KDatePickerPopup_SuperDragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event);
    friend void KDatePickerPopup_SuperDragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event);
    friend void KDatePickerPopup_SuperDropEvent(KDatePickerPopup* self, QDropEvent* event);
    friend void KDatePickerPopup_SuperShowEvent(KDatePickerPopup* self, QShowEvent* event);
    friend bool KDatePickerPopup_SuperNativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDatePickerPopup_SuperMetric(const KDatePickerPopup* self, int param1);
    friend void KDatePickerPopup_SuperInitPainter(const KDatePickerPopup* self, QPainter* painter);
    friend QPaintDevice* KDatePickerPopup_SuperRedirected(const KDatePickerPopup* self, QPoint* offset);
    friend QPainter* KDatePickerPopup_SuperSharedPainter(const KDatePickerPopup* self);
    friend void KDatePickerPopup_SuperInputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1);
    friend void KDatePickerPopup_SuperChildEvent(KDatePickerPopup* self, QChildEvent* event);
    friend void KDatePickerPopup_SuperCustomEvent(KDatePickerPopup* self, QEvent* event);
    friend void KDatePickerPopup_SuperConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
    friend void KDatePickerPopup_SuperDisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
};

#endif
