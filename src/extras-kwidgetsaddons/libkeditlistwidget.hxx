#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKEDITLISTWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKEDITLISTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEditListWidget
class VirtualKEditListWidget final : public KEditListWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KEditListWidget_MetaObject_Callback = QMetaObject* (*)(const KEditListWidget*);
    using KEditListWidget_Metacast_Callback = void* (*)(KEditListWidget*, const char*);
    using KEditListWidget_Metacall_Callback = int (*)(KEditListWidget*, int, int, void**);
    using KEditListWidget_EventFilter_Callback = bool (*)(KEditListWidget*, QObject*, QEvent*);
    using KEditListWidget_DevType_Callback = int (*)(const KEditListWidget*);
    using KEditListWidget_SetVisible_Callback = void (*)(KEditListWidget*, bool);
    using KEditListWidget_SizeHint_Callback = QSize* (*)(const KEditListWidget*);
    using KEditListWidget_MinimumSizeHint_Callback = QSize* (*)(const KEditListWidget*);
    using KEditListWidget_HeightForWidth_Callback = int (*)(const KEditListWidget*, int);
    using KEditListWidget_HasHeightForWidth_Callback = bool (*)(const KEditListWidget*);
    using KEditListWidget_PaintEngine_Callback = QPaintEngine* (*)(const KEditListWidget*);
    using KEditListWidget_Event_Callback = bool (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_MousePressEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseReleaseEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseDoubleClickEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseMoveEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_WheelEvent_Callback = void (*)(KEditListWidget*, QWheelEvent*);
    using KEditListWidget_KeyPressEvent_Callback = void (*)(KEditListWidget*, QKeyEvent*);
    using KEditListWidget_KeyReleaseEvent_Callback = void (*)(KEditListWidget*, QKeyEvent*);
    using KEditListWidget_FocusInEvent_Callback = void (*)(KEditListWidget*, QFocusEvent*);
    using KEditListWidget_FocusOutEvent_Callback = void (*)(KEditListWidget*, QFocusEvent*);
    using KEditListWidget_EnterEvent_Callback = void (*)(KEditListWidget*, QEnterEvent*);
    using KEditListWidget_LeaveEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_PaintEvent_Callback = void (*)(KEditListWidget*, QPaintEvent*);
    using KEditListWidget_MoveEvent_Callback = void (*)(KEditListWidget*, QMoveEvent*);
    using KEditListWidget_ResizeEvent_Callback = void (*)(KEditListWidget*, QResizeEvent*);
    using KEditListWidget_CloseEvent_Callback = void (*)(KEditListWidget*, QCloseEvent*);
    using KEditListWidget_ContextMenuEvent_Callback = void (*)(KEditListWidget*, QContextMenuEvent*);
    using KEditListWidget_TabletEvent_Callback = void (*)(KEditListWidget*, QTabletEvent*);
    using KEditListWidget_ActionEvent_Callback = void (*)(KEditListWidget*, QActionEvent*);
    using KEditListWidget_DragEnterEvent_Callback = void (*)(KEditListWidget*, QDragEnterEvent*);
    using KEditListWidget_DragMoveEvent_Callback = void (*)(KEditListWidget*, QDragMoveEvent*);
    using KEditListWidget_DragLeaveEvent_Callback = void (*)(KEditListWidget*, QDragLeaveEvent*);
    using KEditListWidget_DropEvent_Callback = void (*)(KEditListWidget*, QDropEvent*);
    using KEditListWidget_ShowEvent_Callback = void (*)(KEditListWidget*, QShowEvent*);
    using KEditListWidget_HideEvent_Callback = void (*)(KEditListWidget*, QHideEvent*);
    using KEditListWidget_NativeEvent_Callback = bool (*)(KEditListWidget*, libqt_string, void*, intptr_t*);
    using KEditListWidget_ChangeEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_Metric_Callback = int (*)(const KEditListWidget*, int);
    using KEditListWidget_InitPainter_Callback = void (*)(const KEditListWidget*, QPainter*);
    using KEditListWidget_Redirected_Callback = QPaintDevice* (*)(const KEditListWidget*, QPoint*);
    using KEditListWidget_SharedPainter_Callback = QPainter* (*)(const KEditListWidget*);
    using KEditListWidget_InputMethodEvent_Callback = void (*)(KEditListWidget*, QInputMethodEvent*);
    using KEditListWidget_InputMethodQuery_Callback = QVariant* (*)(const KEditListWidget*, int);
    using KEditListWidget_FocusNextPrevChild_Callback = bool (*)(KEditListWidget*, bool);
    using KEditListWidget_TimerEvent_Callback = void (*)(KEditListWidget*, QTimerEvent*);
    using KEditListWidget_ChildEvent_Callback = void (*)(KEditListWidget*, QChildEvent*);
    using KEditListWidget_CustomEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_ConnectNotify_Callback = void (*)(KEditListWidget*, QMetaMethod*);
    using KEditListWidget_DisconnectNotify_Callback = void (*)(KEditListWidget*, QMetaMethod*);
    using KEditListWidget::create;
    using KEditListWidget::destroy;
    using KEditListWidget::focusNextChild;
    using KEditListWidget::focusPreviousChild;
    using KEditListWidget::getDecodedMetricF;
    using KEditListWidget::isSignalConnected;
    using KEditListWidget::receivers;
    using KEditListWidget::sender;
    using KEditListWidget::senderSignalIndex;
    using KEditListWidget::updateMicroFocus;

    // Instance callback storage
    KEditListWidget_MetaObject_Callback keditlistwidget_metaobject_callback = nullptr;
    KEditListWidget_Metacast_Callback keditlistwidget_metacast_callback = nullptr;
    KEditListWidget_Metacall_Callback keditlistwidget_metacall_callback = nullptr;
    KEditListWidget_EventFilter_Callback keditlistwidget_eventfilter_callback = nullptr;
    KEditListWidget_DevType_Callback keditlistwidget_devtype_callback = nullptr;
    KEditListWidget_SetVisible_Callback keditlistwidget_setvisible_callback = nullptr;
    KEditListWidget_SizeHint_Callback keditlistwidget_sizehint_callback = nullptr;
    KEditListWidget_MinimumSizeHint_Callback keditlistwidget_minimumsizehint_callback = nullptr;
    KEditListWidget_HeightForWidth_Callback keditlistwidget_heightforwidth_callback = nullptr;
    KEditListWidget_HasHeightForWidth_Callback keditlistwidget_hasheightforwidth_callback = nullptr;
    KEditListWidget_PaintEngine_Callback keditlistwidget_paintengine_callback = nullptr;
    KEditListWidget_Event_Callback keditlistwidget_event_callback = nullptr;
    KEditListWidget_MousePressEvent_Callback keditlistwidget_mousepressevent_callback = nullptr;
    KEditListWidget_MouseReleaseEvent_Callback keditlistwidget_mousereleaseevent_callback = nullptr;
    KEditListWidget_MouseDoubleClickEvent_Callback keditlistwidget_mousedoubleclickevent_callback = nullptr;
    KEditListWidget_MouseMoveEvent_Callback keditlistwidget_mousemoveevent_callback = nullptr;
    KEditListWidget_WheelEvent_Callback keditlistwidget_wheelevent_callback = nullptr;
    KEditListWidget_KeyPressEvent_Callback keditlistwidget_keypressevent_callback = nullptr;
    KEditListWidget_KeyReleaseEvent_Callback keditlistwidget_keyreleaseevent_callback = nullptr;
    KEditListWidget_FocusInEvent_Callback keditlistwidget_focusinevent_callback = nullptr;
    KEditListWidget_FocusOutEvent_Callback keditlistwidget_focusoutevent_callback = nullptr;
    KEditListWidget_EnterEvent_Callback keditlistwidget_enterevent_callback = nullptr;
    KEditListWidget_LeaveEvent_Callback keditlistwidget_leaveevent_callback = nullptr;
    KEditListWidget_PaintEvent_Callback keditlistwidget_paintevent_callback = nullptr;
    KEditListWidget_MoveEvent_Callback keditlistwidget_moveevent_callback = nullptr;
    KEditListWidget_ResizeEvent_Callback keditlistwidget_resizeevent_callback = nullptr;
    KEditListWidget_CloseEvent_Callback keditlistwidget_closeevent_callback = nullptr;
    KEditListWidget_ContextMenuEvent_Callback keditlistwidget_contextmenuevent_callback = nullptr;
    KEditListWidget_TabletEvent_Callback keditlistwidget_tabletevent_callback = nullptr;
    KEditListWidget_ActionEvent_Callback keditlistwidget_actionevent_callback = nullptr;
    KEditListWidget_DragEnterEvent_Callback keditlistwidget_dragenterevent_callback = nullptr;
    KEditListWidget_DragMoveEvent_Callback keditlistwidget_dragmoveevent_callback = nullptr;
    KEditListWidget_DragLeaveEvent_Callback keditlistwidget_dragleaveevent_callback = nullptr;
    KEditListWidget_DropEvent_Callback keditlistwidget_dropevent_callback = nullptr;
    KEditListWidget_ShowEvent_Callback keditlistwidget_showevent_callback = nullptr;
    KEditListWidget_HideEvent_Callback keditlistwidget_hideevent_callback = nullptr;
    KEditListWidget_NativeEvent_Callback keditlistwidget_nativeevent_callback = nullptr;
    KEditListWidget_ChangeEvent_Callback keditlistwidget_changeevent_callback = nullptr;
    KEditListWidget_Metric_Callback keditlistwidget_metric_callback = nullptr;
    KEditListWidget_InitPainter_Callback keditlistwidget_initpainter_callback = nullptr;
    KEditListWidget_Redirected_Callback keditlistwidget_redirected_callback = nullptr;
    KEditListWidget_SharedPainter_Callback keditlistwidget_sharedpainter_callback = nullptr;
    KEditListWidget_InputMethodEvent_Callback keditlistwidget_inputmethodevent_callback = nullptr;
    KEditListWidget_InputMethodQuery_Callback keditlistwidget_inputmethodquery_callback = nullptr;
    KEditListWidget_FocusNextPrevChild_Callback keditlistwidget_focusnextprevchild_callback = nullptr;
    KEditListWidget_TimerEvent_Callback keditlistwidget_timerevent_callback = nullptr;
    KEditListWidget_ChildEvent_Callback keditlistwidget_childevent_callback = nullptr;
    KEditListWidget_CustomEvent_Callback keditlistwidget_customevent_callback = nullptr;
    KEditListWidget_ConnectNotify_Callback keditlistwidget_connectnotify_callback = nullptr;
    KEditListWidget_DisconnectNotify_Callback keditlistwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KEditListWidget {
        using KEditListWidget::actionEvent;
        using KEditListWidget::changeEvent;
        using KEditListWidget::childEvent;
        using KEditListWidget::closeEvent;
        using KEditListWidget::connectNotify;
        using KEditListWidget::contextMenuEvent;
        using KEditListWidget::customEvent;
        using KEditListWidget::disconnectNotify;
        using KEditListWidget::dragEnterEvent;
        using KEditListWidget::dragLeaveEvent;
        using KEditListWidget::dragMoveEvent;
        using KEditListWidget::dropEvent;
        using KEditListWidget::enterEvent;
        using KEditListWidget::event;
        using KEditListWidget::focusInEvent;
        using KEditListWidget::focusNextPrevChild;
        using KEditListWidget::focusOutEvent;
        using KEditListWidget::hideEvent;
        using KEditListWidget::initPainter;
        using KEditListWidget::inputMethodEvent;
        using KEditListWidget::keyPressEvent;
        using KEditListWidget::keyReleaseEvent;
        using KEditListWidget::leaveEvent;
        using KEditListWidget::metric;
        using KEditListWidget::mouseDoubleClickEvent;
        using KEditListWidget::mouseMoveEvent;
        using KEditListWidget::mousePressEvent;
        using KEditListWidget::mouseReleaseEvent;
        using KEditListWidget::moveEvent;
        using KEditListWidget::nativeEvent;
        using KEditListWidget::paintEvent;
        using KEditListWidget::redirected;
        using KEditListWidget::resizeEvent;
        using KEditListWidget::sharedPainter;
        using KEditListWidget::showEvent;
        using KEditListWidget::tabletEvent;
        using KEditListWidget::timerEvent;
        using KEditListWidget::wheelEvent;
    };

    VirtualKEditListWidget(QWidget* parent) : KEditListWidget(parent) {};
    VirtualKEditListWidget() : KEditListWidget() {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor) : KEditListWidget(customEditor) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent) : KEditListWidget(customEditor, parent) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent, bool checkAtEntering) : KEditListWidget(customEditor, parent, checkAtEntering) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent, bool checkAtEntering, KEditListWidget::Buttons buttons) : KEditListWidget(customEditor, parent, checkAtEntering, buttons) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (keditlistwidget_metaobject_callback) {
            QMetaObject* callback_ret = keditlistwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KEditListWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (keditlistwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = keditlistwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (keditlistwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = keditlistwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (keditlistwidget_eventfilter_callback) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = keditlistwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEditListWidget::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (keditlistwidget_devtype_callback) {
            int callback_ret = keditlistwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (keditlistwidget_setvisible_callback) {
            bool cbval1 = visible;
            keditlistwidget_setvisible_callback(this, cbval1);
            return;
        }
        KEditListWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (keditlistwidget_sizehint_callback) {
            QSize* callback_ret = keditlistwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditListWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (keditlistwidget_minimumsizehint_callback) {
            QSize* callback_ret = keditlistwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditListWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (keditlistwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = keditlistwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (keditlistwidget_hasheightforwidth_callback) {
            bool callback_ret = keditlistwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KEditListWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (keditlistwidget_paintengine_callback) {
            QPaintEngine* callback_ret = keditlistwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KEditListWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (keditlistwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = keditlistwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            keditlistwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            keditlistwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            keditlistwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            keditlistwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (keditlistwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            keditlistwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (keditlistwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            keditlistwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (keditlistwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            keditlistwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            keditlistwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            keditlistwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (keditlistwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            keditlistwidget_enterevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (keditlistwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            keditlistwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (keditlistwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            keditlistwidget_paintevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (keditlistwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            keditlistwidget_moveevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (keditlistwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            keditlistwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (keditlistwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            keditlistwidget_closeevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (keditlistwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            keditlistwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (keditlistwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            keditlistwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (keditlistwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            keditlistwidget_actionevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (keditlistwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            keditlistwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (keditlistwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            keditlistwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (keditlistwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            keditlistwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (keditlistwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            keditlistwidget_dropevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (keditlistwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            keditlistwidget_showevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (keditlistwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            keditlistwidget_hideevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (keditlistwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = keditlistwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KEditListWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (keditlistwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            keditlistwidget_changeevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (keditlistwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = keditlistwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (keditlistwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            keditlistwidget_initpainter_callback(this, cbval1);
            return;
        }
        KEditListWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (keditlistwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = keditlistwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (keditlistwidget_sharedpainter_callback) {
            QPainter* callback_ret = keditlistwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KEditListWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (keditlistwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            keditlistwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (keditlistwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = keditlistwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KEditListWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (keditlistwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = keditlistwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (keditlistwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            keditlistwidget_timerevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (keditlistwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            keditlistwidget_childevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (keditlistwidget_customevent_callback) {
            QEvent* cbval1 = event;
            keditlistwidget_customevent_callback(this, cbval1);
            return;
        }
        KEditListWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            keditlistwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KEditListWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            keditlistwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KEditListWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KEditListWidget_SuperEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_SuperMousePressEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseReleaseEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseMoveEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperWheelEvent(KEditListWidget* self, QWheelEvent* event);
    friend void KEditListWidget_SuperKeyPressEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_SuperKeyReleaseEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_SuperFocusInEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_SuperFocusOutEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_SuperEnterEvent(KEditListWidget* self, QEnterEvent* event);
    friend void KEditListWidget_SuperLeaveEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_SuperPaintEvent(KEditListWidget* self, QPaintEvent* event);
    friend void KEditListWidget_SuperMoveEvent(KEditListWidget* self, QMoveEvent* event);
    friend void KEditListWidget_SuperResizeEvent(KEditListWidget* self, QResizeEvent* event);
    friend void KEditListWidget_SuperCloseEvent(KEditListWidget* self, QCloseEvent* event);
    friend void KEditListWidget_SuperContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event);
    friend void KEditListWidget_SuperTabletEvent(KEditListWidget* self, QTabletEvent* event);
    friend void KEditListWidget_SuperActionEvent(KEditListWidget* self, QActionEvent* event);
    friend void KEditListWidget_SuperDragEnterEvent(KEditListWidget* self, QDragEnterEvent* event);
    friend void KEditListWidget_SuperDragMoveEvent(KEditListWidget* self, QDragMoveEvent* event);
    friend void KEditListWidget_SuperDragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event);
    friend void KEditListWidget_SuperDropEvent(KEditListWidget* self, QDropEvent* event);
    friend void KEditListWidget_SuperShowEvent(KEditListWidget* self, QShowEvent* event);
    friend void KEditListWidget_SuperHideEvent(KEditListWidget* self, QHideEvent* event);
    friend bool KEditListWidget_SuperNativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KEditListWidget_SuperChangeEvent(KEditListWidget* self, QEvent* param1);
    friend int KEditListWidget_SuperMetric(const KEditListWidget* self, int param1);
    friend void KEditListWidget_SuperInitPainter(const KEditListWidget* self, QPainter* painter);
    friend QPaintDevice* KEditListWidget_SuperRedirected(const KEditListWidget* self, QPoint* offset);
    friend QPainter* KEditListWidget_SuperSharedPainter(const KEditListWidget* self);
    friend void KEditListWidget_SuperInputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1);
    friend bool KEditListWidget_SuperFocusNextPrevChild(KEditListWidget* self, bool next);
    friend void KEditListWidget_SuperTimerEvent(KEditListWidget* self, QTimerEvent* event);
    friend void KEditListWidget_SuperChildEvent(KEditListWidget* self, QChildEvent* event);
    friend void KEditListWidget_SuperCustomEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_SuperConnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_SuperDisconnectNotify(KEditListWidget* self, const QMetaMethod* signal);
};

// This class is a subclass of KEditListWidget::CustomEditor
class VirtualKEditListWidgetCustomEditor final : public KEditListWidget::CustomEditor {
  public:
    // Virtual class public types (including callbacks and access types)
    using KEditListWidget__CustomEditor_RepresentationWidget_Callback = QWidget* (*)(const KEditListWidget__CustomEditor*);
    using KEditListWidget__CustomEditor_LineEdit_Callback = QLineEdit* (*)(const KEditListWidget__CustomEditor*);

    // Instance callback storage
    KEditListWidget__CustomEditor_RepresentationWidget_Callback keditlistwidget__customeditor_representationwidget_callback = nullptr;
    KEditListWidget__CustomEditor_LineEdit_Callback keditlistwidget__customeditor_lineedit_callback = nullptr;

    VirtualKEditListWidgetCustomEditor() : KEditListWidget::CustomEditor() {};
    VirtualKEditListWidgetCustomEditor(QWidget* repWidget, QLineEdit* edit) : KEditListWidget::CustomEditor(repWidget, edit) {};
    VirtualKEditListWidgetCustomEditor(QComboBox* combo) : KEditListWidget::CustomEditor(combo) {};

    // Virtual method for C ABI access and custom callback
    virtual QWidget* representationWidget() const override {
        if (keditlistwidget__customeditor_representationwidget_callback) {
            QWidget* callback_ret = keditlistwidget__customeditor_representationwidget_callback(this);
            return callback_ret;
        }
        return KEditListWidget__CustomEditor::representationWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLineEdit* lineEdit() const override {
        if (keditlistwidget__customeditor_lineedit_callback) {
            QLineEdit* callback_ret = keditlistwidget__customeditor_lineedit_callback(this);
            return callback_ret;
        }
        return KEditListWidget__CustomEditor::lineEdit();
    }
};

#endif
