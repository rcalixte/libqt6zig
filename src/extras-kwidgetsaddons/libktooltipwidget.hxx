#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOOLTIPWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOOLTIPWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolTipWidget
class VirtualKToolTipWidget final : public KToolTipWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToolTipWidget_MetaObject_Callback = QMetaObject* (*)(const KToolTipWidget*);
    using KToolTipWidget_Metacast_Callback = void* (*)(KToolTipWidget*, const char*);
    using KToolTipWidget_Metacall_Callback = int (*)(KToolTipWidget*, int, int, void**);
    using KToolTipWidget_EnterEvent_Callback = void (*)(KToolTipWidget*, QEnterEvent*);
    using KToolTipWidget_HideEvent_Callback = void (*)(KToolTipWidget*, QHideEvent*);
    using KToolTipWidget_LeaveEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_PaintEvent_Callback = void (*)(KToolTipWidget*, QPaintEvent*);
    using KToolTipWidget_DevType_Callback = int (*)(const KToolTipWidget*);
    using KToolTipWidget_SetVisible_Callback = void (*)(KToolTipWidget*, bool);
    using KToolTipWidget_SizeHint_Callback = QSize* (*)(const KToolTipWidget*);
    using KToolTipWidget_MinimumSizeHint_Callback = QSize* (*)(const KToolTipWidget*);
    using KToolTipWidget_HeightForWidth_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_HasHeightForWidth_Callback = bool (*)(const KToolTipWidget*);
    using KToolTipWidget_PaintEngine_Callback = QPaintEngine* (*)(const KToolTipWidget*);
    using KToolTipWidget_Event_Callback = bool (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_MousePressEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseReleaseEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseDoubleClickEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseMoveEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_WheelEvent_Callback = void (*)(KToolTipWidget*, QWheelEvent*);
    using KToolTipWidget_KeyPressEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_KeyReleaseEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_FocusInEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_FocusOutEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_MoveEvent_Callback = void (*)(KToolTipWidget*, QMoveEvent*);
    using KToolTipWidget_ResizeEvent_Callback = void (*)(KToolTipWidget*, QResizeEvent*);
    using KToolTipWidget_CloseEvent_Callback = void (*)(KToolTipWidget*, QCloseEvent*);
    using KToolTipWidget_ContextMenuEvent_Callback = void (*)(KToolTipWidget*, QContextMenuEvent*);
    using KToolTipWidget_TabletEvent_Callback = void (*)(KToolTipWidget*, QTabletEvent*);
    using KToolTipWidget_ActionEvent_Callback = void (*)(KToolTipWidget*, QActionEvent*);
    using KToolTipWidget_DragEnterEvent_Callback = void (*)(KToolTipWidget*, QDragEnterEvent*);
    using KToolTipWidget_DragMoveEvent_Callback = void (*)(KToolTipWidget*, QDragMoveEvent*);
    using KToolTipWidget_DragLeaveEvent_Callback = void (*)(KToolTipWidget*, QDragLeaveEvent*);
    using KToolTipWidget_DropEvent_Callback = void (*)(KToolTipWidget*, QDropEvent*);
    using KToolTipWidget_ShowEvent_Callback = void (*)(KToolTipWidget*, QShowEvent*);
    using KToolTipWidget_NativeEvent_Callback = bool (*)(KToolTipWidget*, libqt_string, void*, intptr_t*);
    using KToolTipWidget_ChangeEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_Metric_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_InitPainter_Callback = void (*)(const KToolTipWidget*, QPainter*);
    using KToolTipWidget_Redirected_Callback = QPaintDevice* (*)(const KToolTipWidget*, QPoint*);
    using KToolTipWidget_SharedPainter_Callback = QPainter* (*)(const KToolTipWidget*);
    using KToolTipWidget_InputMethodEvent_Callback = void (*)(KToolTipWidget*, QInputMethodEvent*);
    using KToolTipWidget_InputMethodQuery_Callback = QVariant* (*)(const KToolTipWidget*, int);
    using KToolTipWidget_FocusNextPrevChild_Callback = bool (*)(KToolTipWidget*, bool);
    using KToolTipWidget_EventFilter_Callback = bool (*)(KToolTipWidget*, QObject*, QEvent*);
    using KToolTipWidget_TimerEvent_Callback = void (*)(KToolTipWidget*, QTimerEvent*);
    using KToolTipWidget_ChildEvent_Callback = void (*)(KToolTipWidget*, QChildEvent*);
    using KToolTipWidget_CustomEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_ConnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_DisconnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget::create;
    using KToolTipWidget::destroy;
    using KToolTipWidget::focusNextChild;
    using KToolTipWidget::focusPreviousChild;
    using KToolTipWidget::getDecodedMetricF;
    using KToolTipWidget::isSignalConnected;
    using KToolTipWidget::receivers;
    using KToolTipWidget::sender;
    using KToolTipWidget::senderSignalIndex;
    using KToolTipWidget::updateMicroFocus;

    // Instance callback storage
    KToolTipWidget_MetaObject_Callback ktooltipwidget_metaobject_callback = nullptr;
    KToolTipWidget_Metacast_Callback ktooltipwidget_metacast_callback = nullptr;
    KToolTipWidget_Metacall_Callback ktooltipwidget_metacall_callback = nullptr;
    KToolTipWidget_EnterEvent_Callback ktooltipwidget_enterevent_callback = nullptr;
    KToolTipWidget_HideEvent_Callback ktooltipwidget_hideevent_callback = nullptr;
    KToolTipWidget_LeaveEvent_Callback ktooltipwidget_leaveevent_callback = nullptr;
    KToolTipWidget_PaintEvent_Callback ktooltipwidget_paintevent_callback = nullptr;
    KToolTipWidget_DevType_Callback ktooltipwidget_devtype_callback = nullptr;
    KToolTipWidget_SetVisible_Callback ktooltipwidget_setvisible_callback = nullptr;
    KToolTipWidget_SizeHint_Callback ktooltipwidget_sizehint_callback = nullptr;
    KToolTipWidget_MinimumSizeHint_Callback ktooltipwidget_minimumsizehint_callback = nullptr;
    KToolTipWidget_HeightForWidth_Callback ktooltipwidget_heightforwidth_callback = nullptr;
    KToolTipWidget_HasHeightForWidth_Callback ktooltipwidget_hasheightforwidth_callback = nullptr;
    KToolTipWidget_PaintEngine_Callback ktooltipwidget_paintengine_callback = nullptr;
    KToolTipWidget_Event_Callback ktooltipwidget_event_callback = nullptr;
    KToolTipWidget_MousePressEvent_Callback ktooltipwidget_mousepressevent_callback = nullptr;
    KToolTipWidget_MouseReleaseEvent_Callback ktooltipwidget_mousereleaseevent_callback = nullptr;
    KToolTipWidget_MouseDoubleClickEvent_Callback ktooltipwidget_mousedoubleclickevent_callback = nullptr;
    KToolTipWidget_MouseMoveEvent_Callback ktooltipwidget_mousemoveevent_callback = nullptr;
    KToolTipWidget_WheelEvent_Callback ktooltipwidget_wheelevent_callback = nullptr;
    KToolTipWidget_KeyPressEvent_Callback ktooltipwidget_keypressevent_callback = nullptr;
    KToolTipWidget_KeyReleaseEvent_Callback ktooltipwidget_keyreleaseevent_callback = nullptr;
    KToolTipWidget_FocusInEvent_Callback ktooltipwidget_focusinevent_callback = nullptr;
    KToolTipWidget_FocusOutEvent_Callback ktooltipwidget_focusoutevent_callback = nullptr;
    KToolTipWidget_MoveEvent_Callback ktooltipwidget_moveevent_callback = nullptr;
    KToolTipWidget_ResizeEvent_Callback ktooltipwidget_resizeevent_callback = nullptr;
    KToolTipWidget_CloseEvent_Callback ktooltipwidget_closeevent_callback = nullptr;
    KToolTipWidget_ContextMenuEvent_Callback ktooltipwidget_contextmenuevent_callback = nullptr;
    KToolTipWidget_TabletEvent_Callback ktooltipwidget_tabletevent_callback = nullptr;
    KToolTipWidget_ActionEvent_Callback ktooltipwidget_actionevent_callback = nullptr;
    KToolTipWidget_DragEnterEvent_Callback ktooltipwidget_dragenterevent_callback = nullptr;
    KToolTipWidget_DragMoveEvent_Callback ktooltipwidget_dragmoveevent_callback = nullptr;
    KToolTipWidget_DragLeaveEvent_Callback ktooltipwidget_dragleaveevent_callback = nullptr;
    KToolTipWidget_DropEvent_Callback ktooltipwidget_dropevent_callback = nullptr;
    KToolTipWidget_ShowEvent_Callback ktooltipwidget_showevent_callback = nullptr;
    KToolTipWidget_NativeEvent_Callback ktooltipwidget_nativeevent_callback = nullptr;
    KToolTipWidget_ChangeEvent_Callback ktooltipwidget_changeevent_callback = nullptr;
    KToolTipWidget_Metric_Callback ktooltipwidget_metric_callback = nullptr;
    KToolTipWidget_InitPainter_Callback ktooltipwidget_initpainter_callback = nullptr;
    KToolTipWidget_Redirected_Callback ktooltipwidget_redirected_callback = nullptr;
    KToolTipWidget_SharedPainter_Callback ktooltipwidget_sharedpainter_callback = nullptr;
    KToolTipWidget_InputMethodEvent_Callback ktooltipwidget_inputmethodevent_callback = nullptr;
    KToolTipWidget_InputMethodQuery_Callback ktooltipwidget_inputmethodquery_callback = nullptr;
    KToolTipWidget_FocusNextPrevChild_Callback ktooltipwidget_focusnextprevchild_callback = nullptr;
    KToolTipWidget_EventFilter_Callback ktooltipwidget_eventfilter_callback = nullptr;
    KToolTipWidget_TimerEvent_Callback ktooltipwidget_timerevent_callback = nullptr;
    KToolTipWidget_ChildEvent_Callback ktooltipwidget_childevent_callback = nullptr;
    KToolTipWidget_CustomEvent_Callback ktooltipwidget_customevent_callback = nullptr;
    KToolTipWidget_ConnectNotify_Callback ktooltipwidget_connectnotify_callback = nullptr;
    KToolTipWidget_DisconnectNotify_Callback ktooltipwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToolTipWidget {
        using KToolTipWidget::actionEvent;
        using KToolTipWidget::changeEvent;
        using KToolTipWidget::childEvent;
        using KToolTipWidget::closeEvent;
        using KToolTipWidget::connectNotify;
        using KToolTipWidget::contextMenuEvent;
        using KToolTipWidget::customEvent;
        using KToolTipWidget::disconnectNotify;
        using KToolTipWidget::dragEnterEvent;
        using KToolTipWidget::dragLeaveEvent;
        using KToolTipWidget::dragMoveEvent;
        using KToolTipWidget::dropEvent;
        using KToolTipWidget::enterEvent;
        using KToolTipWidget::event;
        using KToolTipWidget::focusInEvent;
        using KToolTipWidget::focusNextPrevChild;
        using KToolTipWidget::focusOutEvent;
        using KToolTipWidget::hideEvent;
        using KToolTipWidget::initPainter;
        using KToolTipWidget::inputMethodEvent;
        using KToolTipWidget::keyPressEvent;
        using KToolTipWidget::keyReleaseEvent;
        using KToolTipWidget::leaveEvent;
        using KToolTipWidget::metric;
        using KToolTipWidget::mouseDoubleClickEvent;
        using KToolTipWidget::mouseMoveEvent;
        using KToolTipWidget::mousePressEvent;
        using KToolTipWidget::mouseReleaseEvent;
        using KToolTipWidget::moveEvent;
        using KToolTipWidget::nativeEvent;
        using KToolTipWidget::paintEvent;
        using KToolTipWidget::redirected;
        using KToolTipWidget::resizeEvent;
        using KToolTipWidget::sharedPainter;
        using KToolTipWidget::showEvent;
        using KToolTipWidget::tabletEvent;
        using KToolTipWidget::timerEvent;
        using KToolTipWidget::wheelEvent;
    };

    VirtualKToolTipWidget(QWidget* parent) : KToolTipWidget(parent) {};
    VirtualKToolTipWidget() : KToolTipWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktooltipwidget_metaobject_callback) {
            QMetaObject* callback_ret = ktooltipwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KToolTipWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktooltipwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktooltipwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktooltipwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktooltipwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktooltipwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktooltipwidget_enterevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (ktooltipwidget_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            ktooltipwidget_hideevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (ktooltipwidget_leaveevent_callback) {
            QEvent* cbval1 = param1;
            ktooltipwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktooltipwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ktooltipwidget_paintevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktooltipwidget_devtype_callback) {
            int callback_ret = ktooltipwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktooltipwidget_setvisible_callback) {
            bool cbval1 = visible;
            ktooltipwidget_setvisible_callback(this, cbval1);
            return;
        }
        KToolTipWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktooltipwidget_sizehint_callback) {
            QSize* callback_ret = ktooltipwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolTipWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktooltipwidget_minimumsizehint_callback) {
            QSize* callback_ret = ktooltipwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolTipWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktooltipwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktooltipwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktooltipwidget_hasheightforwidth_callback) {
            bool callback_ret = ktooltipwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KToolTipWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktooltipwidget_paintengine_callback) {
            QPaintEngine* callback_ret = ktooltipwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KToolTipWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktooltipwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktooltipwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ktooltipwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ktooltipwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktooltipwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ktooltipwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktooltipwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktooltipwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktooltipwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ktooltipwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktooltipwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktooltipwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktooltipwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktooltipwidget_moveevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktooltipwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktooltipwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktooltipwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktooltipwidget_closeevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktooltipwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ktooltipwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktooltipwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktooltipwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktooltipwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktooltipwidget_actionevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktooltipwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ktooltipwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktooltipwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ktooltipwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktooltipwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ktooltipwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktooltipwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ktooltipwidget_dropevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktooltipwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktooltipwidget_showevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktooltipwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktooltipwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KToolTipWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktooltipwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            ktooltipwidget_changeevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktooltipwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktooltipwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktooltipwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktooltipwidget_initpainter_callback(this, cbval1);
            return;
        }
        KToolTipWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktooltipwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktooltipwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktooltipwidget_sharedpainter_callback) {
            QPainter* callback_ret = ktooltipwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KToolTipWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktooltipwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktooltipwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktooltipwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktooltipwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolTipWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktooltipwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktooltipwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktooltipwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktooltipwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolTipWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktooltipwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktooltipwidget_timerevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktooltipwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktooltipwidget_childevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktooltipwidget_customevent_callback) {
            QEvent* cbval1 = event;
            ktooltipwidget_customevent_callback(this, cbval1);
            return;
        }
        KToolTipWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktooltipwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KToolTipWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktooltipwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToolTipWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KToolTipWidget_SuperEnterEvent(KToolTipWidget* self, QEnterEvent* event);
    friend void KToolTipWidget_SuperHideEvent(KToolTipWidget* self, QHideEvent* param1);
    friend void KToolTipWidget_SuperLeaveEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_SuperPaintEvent(KToolTipWidget* self, QPaintEvent* event);
    friend bool KToolTipWidget_SuperEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_SuperMousePressEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperWheelEvent(KToolTipWidget* self, QWheelEvent* event);
    friend void KToolTipWidget_SuperKeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_SuperKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_SuperFocusInEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_SuperFocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_SuperMoveEvent(KToolTipWidget* self, QMoveEvent* event);
    friend void KToolTipWidget_SuperResizeEvent(KToolTipWidget* self, QResizeEvent* event);
    friend void KToolTipWidget_SuperCloseEvent(KToolTipWidget* self, QCloseEvent* event);
    friend void KToolTipWidget_SuperContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
    friend void KToolTipWidget_SuperTabletEvent(KToolTipWidget* self, QTabletEvent* event);
    friend void KToolTipWidget_SuperActionEvent(KToolTipWidget* self, QActionEvent* event);
    friend void KToolTipWidget_SuperDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
    friend void KToolTipWidget_SuperDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
    friend void KToolTipWidget_SuperDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
    friend void KToolTipWidget_SuperDropEvent(KToolTipWidget* self, QDropEvent* event);
    friend void KToolTipWidget_SuperShowEvent(KToolTipWidget* self, QShowEvent* event);
    friend bool KToolTipWidget_SuperNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KToolTipWidget_SuperChangeEvent(KToolTipWidget* self, QEvent* param1);
    friend int KToolTipWidget_SuperMetric(const KToolTipWidget* self, int param1);
    friend void KToolTipWidget_SuperInitPainter(const KToolTipWidget* self, QPainter* painter);
    friend QPaintDevice* KToolTipWidget_SuperRedirected(const KToolTipWidget* self, QPoint* offset);
    friend QPainter* KToolTipWidget_SuperSharedPainter(const KToolTipWidget* self);
    friend void KToolTipWidget_SuperInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
    friend bool KToolTipWidget_SuperFocusNextPrevChild(KToolTipWidget* self, bool next);
    friend void KToolTipWidget_SuperTimerEvent(KToolTipWidget* self, QTimerEvent* event);
    friend void KToolTipWidget_SuperChildEvent(KToolTipWidget* self, QChildEvent* event);
    friend void KToolTipWidget_SuperCustomEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_SuperConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_SuperDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
};

#endif
