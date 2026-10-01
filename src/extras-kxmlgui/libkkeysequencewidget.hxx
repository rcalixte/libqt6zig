#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKKEYSEQUENCEWIDGET_HXX
#define EXTRAS_KXMLGUI_LIBKKEYSEQUENCEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KKeySequenceWidget
class VirtualKKeySequenceWidget final : public KKeySequenceWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KKeySequenceWidget_MetaObject_Callback = QMetaObject* (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_Metacast_Callback = void* (*)(KKeySequenceWidget*, const char*);
    using KKeySequenceWidget_Metacall_Callback = int (*)(KKeySequenceWidget*, int, int, void**);
    using KKeySequenceWidget_DevType_Callback = int (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_SetVisible_Callback = void (*)(KKeySequenceWidget*, bool);
    using KKeySequenceWidget_SizeHint_Callback = QSize* (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_MinimumSizeHint_Callback = QSize* (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_HeightForWidth_Callback = int (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_HasHeightForWidth_Callback = bool (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_PaintEngine_Callback = QPaintEngine* (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_MousePressEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseReleaseEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseDoubleClickEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseMoveEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_WheelEvent_Callback = void (*)(KKeySequenceWidget*, QWheelEvent*);
    using KKeySequenceWidget_KeyPressEvent_Callback = void (*)(KKeySequenceWidget*, QKeyEvent*);
    using KKeySequenceWidget_KeyReleaseEvent_Callback = void (*)(KKeySequenceWidget*, QKeyEvent*);
    using KKeySequenceWidget_FocusInEvent_Callback = void (*)(KKeySequenceWidget*, QFocusEvent*);
    using KKeySequenceWidget_FocusOutEvent_Callback = void (*)(KKeySequenceWidget*, QFocusEvent*);
    using KKeySequenceWidget_EnterEvent_Callback = void (*)(KKeySequenceWidget*, QEnterEvent*);
    using KKeySequenceWidget_LeaveEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_PaintEvent_Callback = void (*)(KKeySequenceWidget*, QPaintEvent*);
    using KKeySequenceWidget_MoveEvent_Callback = void (*)(KKeySequenceWidget*, QMoveEvent*);
    using KKeySequenceWidget_ResizeEvent_Callback = void (*)(KKeySequenceWidget*, QResizeEvent*);
    using KKeySequenceWidget_CloseEvent_Callback = void (*)(KKeySequenceWidget*, QCloseEvent*);
    using KKeySequenceWidget_ContextMenuEvent_Callback = void (*)(KKeySequenceWidget*, QContextMenuEvent*);
    using KKeySequenceWidget_TabletEvent_Callback = void (*)(KKeySequenceWidget*, QTabletEvent*);
    using KKeySequenceWidget_ActionEvent_Callback = void (*)(KKeySequenceWidget*, QActionEvent*);
    using KKeySequenceWidget_DragEnterEvent_Callback = void (*)(KKeySequenceWidget*, QDragEnterEvent*);
    using KKeySequenceWidget_DragMoveEvent_Callback = void (*)(KKeySequenceWidget*, QDragMoveEvent*);
    using KKeySequenceWidget_DragLeaveEvent_Callback = void (*)(KKeySequenceWidget*, QDragLeaveEvent*);
    using KKeySequenceWidget_DropEvent_Callback = void (*)(KKeySequenceWidget*, QDropEvent*);
    using KKeySequenceWidget_ShowEvent_Callback = void (*)(KKeySequenceWidget*, QShowEvent*);
    using KKeySequenceWidget_HideEvent_Callback = void (*)(KKeySequenceWidget*, QHideEvent*);
    using KKeySequenceWidget_NativeEvent_Callback = bool (*)(KKeySequenceWidget*, libqt_string, void*, intptr_t*);
    using KKeySequenceWidget_ChangeEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_Metric_Callback = int (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_InitPainter_Callback = void (*)(const KKeySequenceWidget*, QPainter*);
    using KKeySequenceWidget_Redirected_Callback = QPaintDevice* (*)(const KKeySequenceWidget*, QPoint*);
    using KKeySequenceWidget_SharedPainter_Callback = QPainter* (*)(const KKeySequenceWidget*);
    using KKeySequenceWidget_InputMethodEvent_Callback = void (*)(KKeySequenceWidget*, QInputMethodEvent*);
    using KKeySequenceWidget_InputMethodQuery_Callback = QVariant* (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_FocusNextPrevChild_Callback = bool (*)(KKeySequenceWidget*, bool);
    using KKeySequenceWidget_EventFilter_Callback = bool (*)(KKeySequenceWidget*, QObject*, QEvent*);
    using KKeySequenceWidget_TimerEvent_Callback = void (*)(KKeySequenceWidget*, QTimerEvent*);
    using KKeySequenceWidget_ChildEvent_Callback = void (*)(KKeySequenceWidget*, QChildEvent*);
    using KKeySequenceWidget_CustomEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_ConnectNotify_Callback = void (*)(KKeySequenceWidget*, QMetaMethod*);
    using KKeySequenceWidget_DisconnectNotify_Callback = void (*)(KKeySequenceWidget*, QMetaMethod*);
    using KKeySequenceWidget::create;
    using KKeySequenceWidget::destroy;
    using KKeySequenceWidget::focusNextChild;
    using KKeySequenceWidget::focusPreviousChild;
    using KKeySequenceWidget::getDecodedMetricF;
    using KKeySequenceWidget::isSignalConnected;
    using KKeySequenceWidget::receivers;
    using KKeySequenceWidget::sender;
    using KKeySequenceWidget::senderSignalIndex;
    using KKeySequenceWidget::updateMicroFocus;

    // Instance callback storage
    KKeySequenceWidget_MetaObject_Callback kkeysequencewidget_metaobject_callback = nullptr;
    KKeySequenceWidget_Metacast_Callback kkeysequencewidget_metacast_callback = nullptr;
    KKeySequenceWidget_Metacall_Callback kkeysequencewidget_metacall_callback = nullptr;
    KKeySequenceWidget_DevType_Callback kkeysequencewidget_devtype_callback = nullptr;
    KKeySequenceWidget_SetVisible_Callback kkeysequencewidget_setvisible_callback = nullptr;
    KKeySequenceWidget_SizeHint_Callback kkeysequencewidget_sizehint_callback = nullptr;
    KKeySequenceWidget_MinimumSizeHint_Callback kkeysequencewidget_minimumsizehint_callback = nullptr;
    KKeySequenceWidget_HeightForWidth_Callback kkeysequencewidget_heightforwidth_callback = nullptr;
    KKeySequenceWidget_HasHeightForWidth_Callback kkeysequencewidget_hasheightforwidth_callback = nullptr;
    KKeySequenceWidget_PaintEngine_Callback kkeysequencewidget_paintengine_callback = nullptr;
    KKeySequenceWidget_MousePressEvent_Callback kkeysequencewidget_mousepressevent_callback = nullptr;
    KKeySequenceWidget_MouseReleaseEvent_Callback kkeysequencewidget_mousereleaseevent_callback = nullptr;
    KKeySequenceWidget_MouseDoubleClickEvent_Callback kkeysequencewidget_mousedoubleclickevent_callback = nullptr;
    KKeySequenceWidget_MouseMoveEvent_Callback kkeysequencewidget_mousemoveevent_callback = nullptr;
    KKeySequenceWidget_WheelEvent_Callback kkeysequencewidget_wheelevent_callback = nullptr;
    KKeySequenceWidget_KeyPressEvent_Callback kkeysequencewidget_keypressevent_callback = nullptr;
    KKeySequenceWidget_KeyReleaseEvent_Callback kkeysequencewidget_keyreleaseevent_callback = nullptr;
    KKeySequenceWidget_FocusInEvent_Callback kkeysequencewidget_focusinevent_callback = nullptr;
    KKeySequenceWidget_FocusOutEvent_Callback kkeysequencewidget_focusoutevent_callback = nullptr;
    KKeySequenceWidget_EnterEvent_Callback kkeysequencewidget_enterevent_callback = nullptr;
    KKeySequenceWidget_LeaveEvent_Callback kkeysequencewidget_leaveevent_callback = nullptr;
    KKeySequenceWidget_PaintEvent_Callback kkeysequencewidget_paintevent_callback = nullptr;
    KKeySequenceWidget_MoveEvent_Callback kkeysequencewidget_moveevent_callback = nullptr;
    KKeySequenceWidget_ResizeEvent_Callback kkeysequencewidget_resizeevent_callback = nullptr;
    KKeySequenceWidget_CloseEvent_Callback kkeysequencewidget_closeevent_callback = nullptr;
    KKeySequenceWidget_ContextMenuEvent_Callback kkeysequencewidget_contextmenuevent_callback = nullptr;
    KKeySequenceWidget_TabletEvent_Callback kkeysequencewidget_tabletevent_callback = nullptr;
    KKeySequenceWidget_ActionEvent_Callback kkeysequencewidget_actionevent_callback = nullptr;
    KKeySequenceWidget_DragEnterEvent_Callback kkeysequencewidget_dragenterevent_callback = nullptr;
    KKeySequenceWidget_DragMoveEvent_Callback kkeysequencewidget_dragmoveevent_callback = nullptr;
    KKeySequenceWidget_DragLeaveEvent_Callback kkeysequencewidget_dragleaveevent_callback = nullptr;
    KKeySequenceWidget_DropEvent_Callback kkeysequencewidget_dropevent_callback = nullptr;
    KKeySequenceWidget_ShowEvent_Callback kkeysequencewidget_showevent_callback = nullptr;
    KKeySequenceWidget_HideEvent_Callback kkeysequencewidget_hideevent_callback = nullptr;
    KKeySequenceWidget_NativeEvent_Callback kkeysequencewidget_nativeevent_callback = nullptr;
    KKeySequenceWidget_ChangeEvent_Callback kkeysequencewidget_changeevent_callback = nullptr;
    KKeySequenceWidget_Metric_Callback kkeysequencewidget_metric_callback = nullptr;
    KKeySequenceWidget_InitPainter_Callback kkeysequencewidget_initpainter_callback = nullptr;
    KKeySequenceWidget_Redirected_Callback kkeysequencewidget_redirected_callback = nullptr;
    KKeySequenceWidget_SharedPainter_Callback kkeysequencewidget_sharedpainter_callback = nullptr;
    KKeySequenceWidget_InputMethodEvent_Callback kkeysequencewidget_inputmethodevent_callback = nullptr;
    KKeySequenceWidget_InputMethodQuery_Callback kkeysequencewidget_inputmethodquery_callback = nullptr;
    KKeySequenceWidget_FocusNextPrevChild_Callback kkeysequencewidget_focusnextprevchild_callback = nullptr;
    KKeySequenceWidget_EventFilter_Callback kkeysequencewidget_eventfilter_callback = nullptr;
    KKeySequenceWidget_TimerEvent_Callback kkeysequencewidget_timerevent_callback = nullptr;
    KKeySequenceWidget_ChildEvent_Callback kkeysequencewidget_childevent_callback = nullptr;
    KKeySequenceWidget_CustomEvent_Callback kkeysequencewidget_customevent_callback = nullptr;
    KKeySequenceWidget_ConnectNotify_Callback kkeysequencewidget_connectnotify_callback = nullptr;
    KKeySequenceWidget_DisconnectNotify_Callback kkeysequencewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KKeySequenceWidget {
        using KKeySequenceWidget::actionEvent;
        using KKeySequenceWidget::changeEvent;
        using KKeySequenceWidget::childEvent;
        using KKeySequenceWidget::closeEvent;
        using KKeySequenceWidget::connectNotify;
        using KKeySequenceWidget::contextMenuEvent;
        using KKeySequenceWidget::customEvent;
        using KKeySequenceWidget::disconnectNotify;
        using KKeySequenceWidget::dragEnterEvent;
        using KKeySequenceWidget::dragLeaveEvent;
        using KKeySequenceWidget::dragMoveEvent;
        using KKeySequenceWidget::dropEvent;
        using KKeySequenceWidget::enterEvent;
        using KKeySequenceWidget::focusInEvent;
        using KKeySequenceWidget::focusNextPrevChild;
        using KKeySequenceWidget::focusOutEvent;
        using KKeySequenceWidget::hideEvent;
        using KKeySequenceWidget::initPainter;
        using KKeySequenceWidget::inputMethodEvent;
        using KKeySequenceWidget::keyPressEvent;
        using KKeySequenceWidget::keyReleaseEvent;
        using KKeySequenceWidget::leaveEvent;
        using KKeySequenceWidget::metric;
        using KKeySequenceWidget::mouseDoubleClickEvent;
        using KKeySequenceWidget::mouseMoveEvent;
        using KKeySequenceWidget::mousePressEvent;
        using KKeySequenceWidget::mouseReleaseEvent;
        using KKeySequenceWidget::moveEvent;
        using KKeySequenceWidget::nativeEvent;
        using KKeySequenceWidget::paintEvent;
        using KKeySequenceWidget::redirected;
        using KKeySequenceWidget::resizeEvent;
        using KKeySequenceWidget::sharedPainter;
        using KKeySequenceWidget::showEvent;
        using KKeySequenceWidget::tabletEvent;
        using KKeySequenceWidget::timerEvent;
        using KKeySequenceWidget::wheelEvent;
    };

    VirtualKKeySequenceWidget(QWidget* parent) : KKeySequenceWidget(parent) {};
    VirtualKKeySequenceWidget() : KKeySequenceWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kkeysequencewidget_metaobject_callback) {
            QMetaObject* callback_ret = kkeysequencewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KKeySequenceWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kkeysequencewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kkeysequencewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KKeySequenceWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kkeysequencewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kkeysequencewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KKeySequenceWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kkeysequencewidget_devtype_callback) {
            int callback_ret = kkeysequencewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KKeySequenceWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kkeysequencewidget_setvisible_callback) {
            bool cbval1 = visible;
            kkeysequencewidget_setvisible_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kkeysequencewidget_sizehint_callback) {
            QSize* callback_ret = kkeysequencewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KKeySequenceWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kkeysequencewidget_minimumsizehint_callback) {
            QSize* callback_ret = kkeysequencewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KKeySequenceWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kkeysequencewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kkeysequencewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KKeySequenceWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kkeysequencewidget_hasheightforwidth_callback) {
            bool callback_ret = kkeysequencewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KKeySequenceWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kkeysequencewidget_paintengine_callback) {
            QPaintEngine* callback_ret = kkeysequencewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KKeySequenceWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kkeysequencewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kkeysequencewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kkeysequencewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kkeysequencewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kkeysequencewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kkeysequencewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kkeysequencewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kkeysequencewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kkeysequencewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kkeysequencewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kkeysequencewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kkeysequencewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kkeysequencewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kkeysequencewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kkeysequencewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kkeysequencewidget_enterevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kkeysequencewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kkeysequencewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kkeysequencewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kkeysequencewidget_paintevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kkeysequencewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kkeysequencewidget_moveevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kkeysequencewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kkeysequencewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kkeysequencewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kkeysequencewidget_closeevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kkeysequencewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kkeysequencewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kkeysequencewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kkeysequencewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kkeysequencewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kkeysequencewidget_actionevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kkeysequencewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kkeysequencewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kkeysequencewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kkeysequencewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kkeysequencewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kkeysequencewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kkeysequencewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kkeysequencewidget_dropevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kkeysequencewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kkeysequencewidget_showevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kkeysequencewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kkeysequencewidget_hideevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kkeysequencewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kkeysequencewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KKeySequenceWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kkeysequencewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kkeysequencewidget_changeevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kkeysequencewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kkeysequencewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KKeySequenceWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kkeysequencewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kkeysequencewidget_initpainter_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kkeysequencewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kkeysequencewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KKeySequenceWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kkeysequencewidget_sharedpainter_callback) {
            QPainter* callback_ret = kkeysequencewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KKeySequenceWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kkeysequencewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kkeysequencewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kkeysequencewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kkeysequencewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KKeySequenceWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kkeysequencewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kkeysequencewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KKeySequenceWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kkeysequencewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kkeysequencewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KKeySequenceWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kkeysequencewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kkeysequencewidget_timerevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kkeysequencewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kkeysequencewidget_childevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kkeysequencewidget_customevent_callback) {
            QEvent* cbval1 = event;
            kkeysequencewidget_customevent_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kkeysequencewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kkeysequencewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kkeysequencewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kkeysequencewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KKeySequenceWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KKeySequenceWidget_SuperMousePressEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_SuperMouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_SuperMouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_SuperMouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_SuperWheelEvent(KKeySequenceWidget* self, QWheelEvent* event);
    friend void KKeySequenceWidget_SuperKeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_SuperKeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_SuperFocusInEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_SuperFocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_SuperEnterEvent(KKeySequenceWidget* self, QEnterEvent* event);
    friend void KKeySequenceWidget_SuperLeaveEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_SuperPaintEvent(KKeySequenceWidget* self, QPaintEvent* event);
    friend void KKeySequenceWidget_SuperMoveEvent(KKeySequenceWidget* self, QMoveEvent* event);
    friend void KKeySequenceWidget_SuperResizeEvent(KKeySequenceWidget* self, QResizeEvent* event);
    friend void KKeySequenceWidget_SuperCloseEvent(KKeySequenceWidget* self, QCloseEvent* event);
    friend void KKeySequenceWidget_SuperContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event);
    friend void KKeySequenceWidget_SuperTabletEvent(KKeySequenceWidget* self, QTabletEvent* event);
    friend void KKeySequenceWidget_SuperActionEvent(KKeySequenceWidget* self, QActionEvent* event);
    friend void KKeySequenceWidget_SuperDragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event);
    friend void KKeySequenceWidget_SuperDragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event);
    friend void KKeySequenceWidget_SuperDragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event);
    friend void KKeySequenceWidget_SuperDropEvent(KKeySequenceWidget* self, QDropEvent* event);
    friend void KKeySequenceWidget_SuperShowEvent(KKeySequenceWidget* self, QShowEvent* event);
    friend void KKeySequenceWidget_SuperHideEvent(KKeySequenceWidget* self, QHideEvent* event);
    friend bool KKeySequenceWidget_SuperNativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KKeySequenceWidget_SuperChangeEvent(KKeySequenceWidget* self, QEvent* param1);
    friend int KKeySequenceWidget_SuperMetric(const KKeySequenceWidget* self, int param1);
    friend void KKeySequenceWidget_SuperInitPainter(const KKeySequenceWidget* self, QPainter* painter);
    friend QPaintDevice* KKeySequenceWidget_SuperRedirected(const KKeySequenceWidget* self, QPoint* offset);
    friend QPainter* KKeySequenceWidget_SuperSharedPainter(const KKeySequenceWidget* self);
    friend void KKeySequenceWidget_SuperInputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1);
    friend bool KKeySequenceWidget_SuperFocusNextPrevChild(KKeySequenceWidget* self, bool next);
    friend void KKeySequenceWidget_SuperTimerEvent(KKeySequenceWidget* self, QTimerEvent* event);
    friend void KKeySequenceWidget_SuperChildEvent(KKeySequenceWidget* self, QChildEvent* event);
    friend void KKeySequenceWidget_SuperCustomEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_SuperConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
    friend void KKeySequenceWidget_SuperDisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
};

#endif
