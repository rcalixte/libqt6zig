#pragma once
#ifndef EXTRAS_KPLOTTING_LIBKPLOTWIDGET_HXX
#define EXTRAS_KPLOTTING_LIBKPLOTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPlotWidget
class VirtualKPlotWidget final : public KPlotWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPlotWidget_MetaObject_Callback = QMetaObject* (*)(const KPlotWidget*);
    using KPlotWidget_Metacast_Callback = void* (*)(KPlotWidget*, const char*);
    using KPlotWidget_Metacall_Callback = int (*)(KPlotWidget*, int, int, void**);
    using KPlotWidget_MinimumSizeHint_Callback = QSize* (*)(const KPlotWidget*);
    using KPlotWidget_SizeHint_Callback = QSize* (*)(const KPlotWidget*);
    using KPlotWidget_Event_Callback = bool (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_PaintEvent_Callback = void (*)(KPlotWidget*, QPaintEvent*);
    using KPlotWidget_ResizeEvent_Callback = void (*)(KPlotWidget*, QResizeEvent*);
    using KPlotWidget_DrawAxes_Callback = void (*)(KPlotWidget*, QPainter*);
    using KPlotWidget_ChangeEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_InitStyleOption_Callback = void (*)(const KPlotWidget*, QStyleOptionFrame*);
    using KPlotWidget_DevType_Callback = int (*)(const KPlotWidget*);
    using KPlotWidget_SetVisible_Callback = void (*)(KPlotWidget*, bool);
    using KPlotWidget_HeightForWidth_Callback = int (*)(const KPlotWidget*, int);
    using KPlotWidget_HasHeightForWidth_Callback = bool (*)(const KPlotWidget*);
    using KPlotWidget_PaintEngine_Callback = QPaintEngine* (*)(const KPlotWidget*);
    using KPlotWidget_MousePressEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseReleaseEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseDoubleClickEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseMoveEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_WheelEvent_Callback = void (*)(KPlotWidget*, QWheelEvent*);
    using KPlotWidget_KeyPressEvent_Callback = void (*)(KPlotWidget*, QKeyEvent*);
    using KPlotWidget_KeyReleaseEvent_Callback = void (*)(KPlotWidget*, QKeyEvent*);
    using KPlotWidget_FocusInEvent_Callback = void (*)(KPlotWidget*, QFocusEvent*);
    using KPlotWidget_FocusOutEvent_Callback = void (*)(KPlotWidget*, QFocusEvent*);
    using KPlotWidget_EnterEvent_Callback = void (*)(KPlotWidget*, QEnterEvent*);
    using KPlotWidget_LeaveEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_MoveEvent_Callback = void (*)(KPlotWidget*, QMoveEvent*);
    using KPlotWidget_CloseEvent_Callback = void (*)(KPlotWidget*, QCloseEvent*);
    using KPlotWidget_ContextMenuEvent_Callback = void (*)(KPlotWidget*, QContextMenuEvent*);
    using KPlotWidget_TabletEvent_Callback = void (*)(KPlotWidget*, QTabletEvent*);
    using KPlotWidget_ActionEvent_Callback = void (*)(KPlotWidget*, QActionEvent*);
    using KPlotWidget_DragEnterEvent_Callback = void (*)(KPlotWidget*, QDragEnterEvent*);
    using KPlotWidget_DragMoveEvent_Callback = void (*)(KPlotWidget*, QDragMoveEvent*);
    using KPlotWidget_DragLeaveEvent_Callback = void (*)(KPlotWidget*, QDragLeaveEvent*);
    using KPlotWidget_DropEvent_Callback = void (*)(KPlotWidget*, QDropEvent*);
    using KPlotWidget_ShowEvent_Callback = void (*)(KPlotWidget*, QShowEvent*);
    using KPlotWidget_HideEvent_Callback = void (*)(KPlotWidget*, QHideEvent*);
    using KPlotWidget_NativeEvent_Callback = bool (*)(KPlotWidget*, libqt_string, void*, intptr_t*);
    using KPlotWidget_Metric_Callback = int (*)(const KPlotWidget*, int);
    using KPlotWidget_InitPainter_Callback = void (*)(const KPlotWidget*, QPainter*);
    using KPlotWidget_Redirected_Callback = QPaintDevice* (*)(const KPlotWidget*, QPoint*);
    using KPlotWidget_SharedPainter_Callback = QPainter* (*)(const KPlotWidget*);
    using KPlotWidget_InputMethodEvent_Callback = void (*)(KPlotWidget*, QInputMethodEvent*);
    using KPlotWidget_InputMethodQuery_Callback = QVariant* (*)(const KPlotWidget*, int);
    using KPlotWidget_FocusNextPrevChild_Callback = bool (*)(KPlotWidget*, bool);
    using KPlotWidget_EventFilter_Callback = bool (*)(KPlotWidget*, QObject*, QEvent*);
    using KPlotWidget_TimerEvent_Callback = void (*)(KPlotWidget*, QTimerEvent*);
    using KPlotWidget_ChildEvent_Callback = void (*)(KPlotWidget*, QChildEvent*);
    using KPlotWidget_CustomEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_ConnectNotify_Callback = void (*)(KPlotWidget*, QMetaMethod*);
    using KPlotWidget_DisconnectNotify_Callback = void (*)(KPlotWidget*, QMetaMethod*);
    using KPlotWidget::create;
    using KPlotWidget::destroy;
    using KPlotWidget::drawFrame;
    using KPlotWidget::focusNextChild;
    using KPlotWidget::focusPreviousChild;
    using KPlotWidget::getDecodedMetricF;
    using KPlotWidget::isSignalConnected;
    using KPlotWidget::pointsUnderPoint;
    using KPlotWidget::receivers;
    using KPlotWidget::sender;
    using KPlotWidget::senderSignalIndex;
    using KPlotWidget::setPixRect;
    using KPlotWidget::updateMicroFocus;

    // Instance callback storage
    KPlotWidget_MetaObject_Callback kplotwidget_metaobject_callback = nullptr;
    KPlotWidget_Metacast_Callback kplotwidget_metacast_callback = nullptr;
    KPlotWidget_Metacall_Callback kplotwidget_metacall_callback = nullptr;
    KPlotWidget_MinimumSizeHint_Callback kplotwidget_minimumsizehint_callback = nullptr;
    KPlotWidget_SizeHint_Callback kplotwidget_sizehint_callback = nullptr;
    KPlotWidget_Event_Callback kplotwidget_event_callback = nullptr;
    KPlotWidget_PaintEvent_Callback kplotwidget_paintevent_callback = nullptr;
    KPlotWidget_ResizeEvent_Callback kplotwidget_resizeevent_callback = nullptr;
    KPlotWidget_DrawAxes_Callback kplotwidget_drawaxes_callback = nullptr;
    KPlotWidget_ChangeEvent_Callback kplotwidget_changeevent_callback = nullptr;
    KPlotWidget_InitStyleOption_Callback kplotwidget_initstyleoption_callback = nullptr;
    KPlotWidget_DevType_Callback kplotwidget_devtype_callback = nullptr;
    KPlotWidget_SetVisible_Callback kplotwidget_setvisible_callback = nullptr;
    KPlotWidget_HeightForWidth_Callback kplotwidget_heightforwidth_callback = nullptr;
    KPlotWidget_HasHeightForWidth_Callback kplotwidget_hasheightforwidth_callback = nullptr;
    KPlotWidget_PaintEngine_Callback kplotwidget_paintengine_callback = nullptr;
    KPlotWidget_MousePressEvent_Callback kplotwidget_mousepressevent_callback = nullptr;
    KPlotWidget_MouseReleaseEvent_Callback kplotwidget_mousereleaseevent_callback = nullptr;
    KPlotWidget_MouseDoubleClickEvent_Callback kplotwidget_mousedoubleclickevent_callback = nullptr;
    KPlotWidget_MouseMoveEvent_Callback kplotwidget_mousemoveevent_callback = nullptr;
    KPlotWidget_WheelEvent_Callback kplotwidget_wheelevent_callback = nullptr;
    KPlotWidget_KeyPressEvent_Callback kplotwidget_keypressevent_callback = nullptr;
    KPlotWidget_KeyReleaseEvent_Callback kplotwidget_keyreleaseevent_callback = nullptr;
    KPlotWidget_FocusInEvent_Callback kplotwidget_focusinevent_callback = nullptr;
    KPlotWidget_FocusOutEvent_Callback kplotwidget_focusoutevent_callback = nullptr;
    KPlotWidget_EnterEvent_Callback kplotwidget_enterevent_callback = nullptr;
    KPlotWidget_LeaveEvent_Callback kplotwidget_leaveevent_callback = nullptr;
    KPlotWidget_MoveEvent_Callback kplotwidget_moveevent_callback = nullptr;
    KPlotWidget_CloseEvent_Callback kplotwidget_closeevent_callback = nullptr;
    KPlotWidget_ContextMenuEvent_Callback kplotwidget_contextmenuevent_callback = nullptr;
    KPlotWidget_TabletEvent_Callback kplotwidget_tabletevent_callback = nullptr;
    KPlotWidget_ActionEvent_Callback kplotwidget_actionevent_callback = nullptr;
    KPlotWidget_DragEnterEvent_Callback kplotwidget_dragenterevent_callback = nullptr;
    KPlotWidget_DragMoveEvent_Callback kplotwidget_dragmoveevent_callback = nullptr;
    KPlotWidget_DragLeaveEvent_Callback kplotwidget_dragleaveevent_callback = nullptr;
    KPlotWidget_DropEvent_Callback kplotwidget_dropevent_callback = nullptr;
    KPlotWidget_ShowEvent_Callback kplotwidget_showevent_callback = nullptr;
    KPlotWidget_HideEvent_Callback kplotwidget_hideevent_callback = nullptr;
    KPlotWidget_NativeEvent_Callback kplotwidget_nativeevent_callback = nullptr;
    KPlotWidget_Metric_Callback kplotwidget_metric_callback = nullptr;
    KPlotWidget_InitPainter_Callback kplotwidget_initpainter_callback = nullptr;
    KPlotWidget_Redirected_Callback kplotwidget_redirected_callback = nullptr;
    KPlotWidget_SharedPainter_Callback kplotwidget_sharedpainter_callback = nullptr;
    KPlotWidget_InputMethodEvent_Callback kplotwidget_inputmethodevent_callback = nullptr;
    KPlotWidget_InputMethodQuery_Callback kplotwidget_inputmethodquery_callback = nullptr;
    KPlotWidget_FocusNextPrevChild_Callback kplotwidget_focusnextprevchild_callback = nullptr;
    KPlotWidget_EventFilter_Callback kplotwidget_eventfilter_callback = nullptr;
    KPlotWidget_TimerEvent_Callback kplotwidget_timerevent_callback = nullptr;
    KPlotWidget_ChildEvent_Callback kplotwidget_childevent_callback = nullptr;
    KPlotWidget_CustomEvent_Callback kplotwidget_customevent_callback = nullptr;
    KPlotWidget_ConnectNotify_Callback kplotwidget_connectnotify_callback = nullptr;
    KPlotWidget_DisconnectNotify_Callback kplotwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPlotWidget {
        using KPlotWidget::actionEvent;
        using KPlotWidget::changeEvent;
        using KPlotWidget::childEvent;
        using KPlotWidget::closeEvent;
        using KPlotWidget::connectNotify;
        using KPlotWidget::contextMenuEvent;
        using KPlotWidget::customEvent;
        using KPlotWidget::disconnectNotify;
        using KPlotWidget::dragEnterEvent;
        using KPlotWidget::dragLeaveEvent;
        using KPlotWidget::dragMoveEvent;
        using KPlotWidget::drawAxes;
        using KPlotWidget::dropEvent;
        using KPlotWidget::enterEvent;
        using KPlotWidget::event;
        using KPlotWidget::focusInEvent;
        using KPlotWidget::focusNextPrevChild;
        using KPlotWidget::focusOutEvent;
        using KPlotWidget::hideEvent;
        using KPlotWidget::initPainter;
        using KPlotWidget::initStyleOption;
        using KPlotWidget::inputMethodEvent;
        using KPlotWidget::keyPressEvent;
        using KPlotWidget::keyReleaseEvent;
        using KPlotWidget::leaveEvent;
        using KPlotWidget::metric;
        using KPlotWidget::mouseDoubleClickEvent;
        using KPlotWidget::mouseMoveEvent;
        using KPlotWidget::mousePressEvent;
        using KPlotWidget::mouseReleaseEvent;
        using KPlotWidget::moveEvent;
        using KPlotWidget::nativeEvent;
        using KPlotWidget::paintEvent;
        using KPlotWidget::redirected;
        using KPlotWidget::resizeEvent;
        using KPlotWidget::sharedPainter;
        using KPlotWidget::showEvent;
        using KPlotWidget::tabletEvent;
        using KPlotWidget::timerEvent;
        using KPlotWidget::wheelEvent;
    };

    VirtualKPlotWidget(QWidget* parent) : KPlotWidget(parent) {};
    VirtualKPlotWidget() : KPlotWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kplotwidget_metaobject_callback) {
            QMetaObject* callback_ret = kplotwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KPlotWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kplotwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kplotwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kplotwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kplotwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kplotwidget_minimumsizehint_callback) {
            QSize* callback_ret = kplotwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPlotWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kplotwidget_sizehint_callback) {
            QSize* callback_ret = kplotwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPlotWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kplotwidget_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kplotwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kplotwidget_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kplotwidget_paintevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kplotwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kplotwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawAxes(QPainter* p) override {
        if (kplotwidget_drawaxes_callback) {
            QPainter* cbval1 = p;
            kplotwidget_drawaxes_callback(this, cbval1);
            return;
        }
        KPlotWidget::drawAxes(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kplotwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kplotwidget_changeevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kplotwidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kplotwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        KPlotWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kplotwidget_devtype_callback) {
            int callback_ret = kplotwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kplotwidget_setvisible_callback) {
            bool cbval1 = visible;
            kplotwidget_setvisible_callback(this, cbval1);
            return;
        }
        KPlotWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kplotwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kplotwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kplotwidget_hasheightforwidth_callback) {
            bool callback_ret = kplotwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPlotWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kplotwidget_paintengine_callback) {
            QPaintEngine* callback_ret = kplotwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KPlotWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kplotwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kplotwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kplotwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kplotwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kplotwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kplotwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kplotwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kplotwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kplotwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kplotwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kplotwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kplotwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kplotwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kplotwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kplotwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kplotwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kplotwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kplotwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kplotwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kplotwidget_enterevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kplotwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kplotwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kplotwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kplotwidget_moveevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kplotwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kplotwidget_closeevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kplotwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kplotwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kplotwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kplotwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kplotwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kplotwidget_actionevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kplotwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kplotwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kplotwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kplotwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kplotwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kplotwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kplotwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kplotwidget_dropevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kplotwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kplotwidget_showevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kplotwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kplotwidget_hideevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kplotwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kplotwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPlotWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kplotwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kplotwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kplotwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kplotwidget_initpainter_callback(this, cbval1);
            return;
        }
        KPlotWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kplotwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kplotwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kplotwidget_sharedpainter_callback) {
            QPainter* callback_ret = kplotwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPlotWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kplotwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kplotwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kplotwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kplotwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPlotWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kplotwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kplotwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kplotwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kplotwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPlotWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kplotwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kplotwidget_timerevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kplotwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kplotwidget_childevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kplotwidget_customevent_callback) {
            QEvent* cbval1 = event;
            kplotwidget_customevent_callback(this, cbval1);
            return;
        }
        KPlotWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kplotwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kplotwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KPlotWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kplotwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kplotwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPlotWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPlotWidget_SuperEvent(KPlotWidget* self, QEvent* param1);
    friend void KPlotWidget_SuperPaintEvent(KPlotWidget* self, QPaintEvent* param1);
    friend void KPlotWidget_SuperResizeEvent(KPlotWidget* self, QResizeEvent* param1);
    friend void KPlotWidget_SuperDrawAxes(KPlotWidget* self, QPainter* p);
    friend void KPlotWidget_SuperChangeEvent(KPlotWidget* self, QEvent* param1);
    friend void KPlotWidget_SuperInitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option);
    friend void KPlotWidget_SuperMousePressEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseReleaseEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseMoveEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperWheelEvent(KPlotWidget* self, QWheelEvent* event);
    friend void KPlotWidget_SuperKeyPressEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_SuperKeyReleaseEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_SuperFocusInEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_SuperFocusOutEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_SuperEnterEvent(KPlotWidget* self, QEnterEvent* event);
    friend void KPlotWidget_SuperLeaveEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_SuperMoveEvent(KPlotWidget* self, QMoveEvent* event);
    friend void KPlotWidget_SuperCloseEvent(KPlotWidget* self, QCloseEvent* event);
    friend void KPlotWidget_SuperContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event);
    friend void KPlotWidget_SuperTabletEvent(KPlotWidget* self, QTabletEvent* event);
    friend void KPlotWidget_SuperActionEvent(KPlotWidget* self, QActionEvent* event);
    friend void KPlotWidget_SuperDragEnterEvent(KPlotWidget* self, QDragEnterEvent* event);
    friend void KPlotWidget_SuperDragMoveEvent(KPlotWidget* self, QDragMoveEvent* event);
    friend void KPlotWidget_SuperDragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event);
    friend void KPlotWidget_SuperDropEvent(KPlotWidget* self, QDropEvent* event);
    friend void KPlotWidget_SuperShowEvent(KPlotWidget* self, QShowEvent* event);
    friend void KPlotWidget_SuperHideEvent(KPlotWidget* self, QHideEvent* event);
    friend bool KPlotWidget_SuperNativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPlotWidget_SuperMetric(const KPlotWidget* self, int param1);
    friend void KPlotWidget_SuperInitPainter(const KPlotWidget* self, QPainter* painter);
    friend QPaintDevice* KPlotWidget_SuperRedirected(const KPlotWidget* self, QPoint* offset);
    friend QPainter* KPlotWidget_SuperSharedPainter(const KPlotWidget* self);
    friend void KPlotWidget_SuperInputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1);
    friend bool KPlotWidget_SuperFocusNextPrevChild(KPlotWidget* self, bool next);
    friend void KPlotWidget_SuperTimerEvent(KPlotWidget* self, QTimerEvent* event);
    friend void KPlotWidget_SuperChildEvent(KPlotWidget* self, QChildEvent* event);
    friend void KPlotWidget_SuperCustomEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_SuperConnectNotify(KPlotWidget* self, const QMetaMethod* signal);
    friend void KPlotWidget_SuperDisconnectNotify(KPlotWidget* self, const QMetaMethod* signal);
};

#endif
