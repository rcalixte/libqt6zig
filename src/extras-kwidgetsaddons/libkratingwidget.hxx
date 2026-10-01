#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKRATINGWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKRATINGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRatingWidget
class VirtualKRatingWidget final : public KRatingWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRatingWidget_MetaObject_Callback = QMetaObject* (*)(const KRatingWidget*);
    using KRatingWidget_Metacast_Callback = void* (*)(KRatingWidget*, const char*);
    using KRatingWidget_Metacall_Callback = int (*)(KRatingWidget*, int, int, void**);
    using KRatingWidget_SizeHint_Callback = QSize* (*)(const KRatingWidget*);
    using KRatingWidget_MousePressEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_MouseMoveEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_LeaveEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_PaintEvent_Callback = void (*)(KRatingWidget*, QPaintEvent*);
    using KRatingWidget_ResizeEvent_Callback = void (*)(KRatingWidget*, QResizeEvent*);
    using KRatingWidget_Event_Callback = bool (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_ChangeEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_InitStyleOption_Callback = void (*)(const KRatingWidget*, QStyleOptionFrame*);
    using KRatingWidget_DevType_Callback = int (*)(const KRatingWidget*);
    using KRatingWidget_SetVisible_Callback = void (*)(KRatingWidget*, bool);
    using KRatingWidget_MinimumSizeHint_Callback = QSize* (*)(const KRatingWidget*);
    using KRatingWidget_HeightForWidth_Callback = int (*)(const KRatingWidget*, int);
    using KRatingWidget_HasHeightForWidth_Callback = bool (*)(const KRatingWidget*);
    using KRatingWidget_PaintEngine_Callback = QPaintEngine* (*)(const KRatingWidget*);
    using KRatingWidget_MouseReleaseEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_MouseDoubleClickEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_WheelEvent_Callback = void (*)(KRatingWidget*, QWheelEvent*);
    using KRatingWidget_KeyPressEvent_Callback = void (*)(KRatingWidget*, QKeyEvent*);
    using KRatingWidget_KeyReleaseEvent_Callback = void (*)(KRatingWidget*, QKeyEvent*);
    using KRatingWidget_FocusInEvent_Callback = void (*)(KRatingWidget*, QFocusEvent*);
    using KRatingWidget_FocusOutEvent_Callback = void (*)(KRatingWidget*, QFocusEvent*);
    using KRatingWidget_EnterEvent_Callback = void (*)(KRatingWidget*, QEnterEvent*);
    using KRatingWidget_MoveEvent_Callback = void (*)(KRatingWidget*, QMoveEvent*);
    using KRatingWidget_CloseEvent_Callback = void (*)(KRatingWidget*, QCloseEvent*);
    using KRatingWidget_ContextMenuEvent_Callback = void (*)(KRatingWidget*, QContextMenuEvent*);
    using KRatingWidget_TabletEvent_Callback = void (*)(KRatingWidget*, QTabletEvent*);
    using KRatingWidget_ActionEvent_Callback = void (*)(KRatingWidget*, QActionEvent*);
    using KRatingWidget_DragEnterEvent_Callback = void (*)(KRatingWidget*, QDragEnterEvent*);
    using KRatingWidget_DragMoveEvent_Callback = void (*)(KRatingWidget*, QDragMoveEvent*);
    using KRatingWidget_DragLeaveEvent_Callback = void (*)(KRatingWidget*, QDragLeaveEvent*);
    using KRatingWidget_DropEvent_Callback = void (*)(KRatingWidget*, QDropEvent*);
    using KRatingWidget_ShowEvent_Callback = void (*)(KRatingWidget*, QShowEvent*);
    using KRatingWidget_HideEvent_Callback = void (*)(KRatingWidget*, QHideEvent*);
    using KRatingWidget_NativeEvent_Callback = bool (*)(KRatingWidget*, libqt_string, void*, intptr_t*);
    using KRatingWidget_Metric_Callback = int (*)(const KRatingWidget*, int);
    using KRatingWidget_InitPainter_Callback = void (*)(const KRatingWidget*, QPainter*);
    using KRatingWidget_Redirected_Callback = QPaintDevice* (*)(const KRatingWidget*, QPoint*);
    using KRatingWidget_SharedPainter_Callback = QPainter* (*)(const KRatingWidget*);
    using KRatingWidget_InputMethodEvent_Callback = void (*)(KRatingWidget*, QInputMethodEvent*);
    using KRatingWidget_InputMethodQuery_Callback = QVariant* (*)(const KRatingWidget*, int);
    using KRatingWidget_FocusNextPrevChild_Callback = bool (*)(KRatingWidget*, bool);
    using KRatingWidget_EventFilter_Callback = bool (*)(KRatingWidget*, QObject*, QEvent*);
    using KRatingWidget_TimerEvent_Callback = void (*)(KRatingWidget*, QTimerEvent*);
    using KRatingWidget_ChildEvent_Callback = void (*)(KRatingWidget*, QChildEvent*);
    using KRatingWidget_CustomEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_ConnectNotify_Callback = void (*)(KRatingWidget*, QMetaMethod*);
    using KRatingWidget_DisconnectNotify_Callback = void (*)(KRatingWidget*, QMetaMethod*);
    using KRatingWidget::create;
    using KRatingWidget::destroy;
    using KRatingWidget::drawFrame;
    using KRatingWidget::focusNextChild;
    using KRatingWidget::focusPreviousChild;
    using KRatingWidget::getDecodedMetricF;
    using KRatingWidget::isSignalConnected;
    using KRatingWidget::receivers;
    using KRatingWidget::sender;
    using KRatingWidget::senderSignalIndex;
    using KRatingWidget::updateMicroFocus;

    // Instance callback storage
    KRatingWidget_MetaObject_Callback kratingwidget_metaobject_callback = nullptr;
    KRatingWidget_Metacast_Callback kratingwidget_metacast_callback = nullptr;
    KRatingWidget_Metacall_Callback kratingwidget_metacall_callback = nullptr;
    KRatingWidget_SizeHint_Callback kratingwidget_sizehint_callback = nullptr;
    KRatingWidget_MousePressEvent_Callback kratingwidget_mousepressevent_callback = nullptr;
    KRatingWidget_MouseMoveEvent_Callback kratingwidget_mousemoveevent_callback = nullptr;
    KRatingWidget_LeaveEvent_Callback kratingwidget_leaveevent_callback = nullptr;
    KRatingWidget_PaintEvent_Callback kratingwidget_paintevent_callback = nullptr;
    KRatingWidget_ResizeEvent_Callback kratingwidget_resizeevent_callback = nullptr;
    KRatingWidget_Event_Callback kratingwidget_event_callback = nullptr;
    KRatingWidget_ChangeEvent_Callback kratingwidget_changeevent_callback = nullptr;
    KRatingWidget_InitStyleOption_Callback kratingwidget_initstyleoption_callback = nullptr;
    KRatingWidget_DevType_Callback kratingwidget_devtype_callback = nullptr;
    KRatingWidget_SetVisible_Callback kratingwidget_setvisible_callback = nullptr;
    KRatingWidget_MinimumSizeHint_Callback kratingwidget_minimumsizehint_callback = nullptr;
    KRatingWidget_HeightForWidth_Callback kratingwidget_heightforwidth_callback = nullptr;
    KRatingWidget_HasHeightForWidth_Callback kratingwidget_hasheightforwidth_callback = nullptr;
    KRatingWidget_PaintEngine_Callback kratingwidget_paintengine_callback = nullptr;
    KRatingWidget_MouseReleaseEvent_Callback kratingwidget_mousereleaseevent_callback = nullptr;
    KRatingWidget_MouseDoubleClickEvent_Callback kratingwidget_mousedoubleclickevent_callback = nullptr;
    KRatingWidget_WheelEvent_Callback kratingwidget_wheelevent_callback = nullptr;
    KRatingWidget_KeyPressEvent_Callback kratingwidget_keypressevent_callback = nullptr;
    KRatingWidget_KeyReleaseEvent_Callback kratingwidget_keyreleaseevent_callback = nullptr;
    KRatingWidget_FocusInEvent_Callback kratingwidget_focusinevent_callback = nullptr;
    KRatingWidget_FocusOutEvent_Callback kratingwidget_focusoutevent_callback = nullptr;
    KRatingWidget_EnterEvent_Callback kratingwidget_enterevent_callback = nullptr;
    KRatingWidget_MoveEvent_Callback kratingwidget_moveevent_callback = nullptr;
    KRatingWidget_CloseEvent_Callback kratingwidget_closeevent_callback = nullptr;
    KRatingWidget_ContextMenuEvent_Callback kratingwidget_contextmenuevent_callback = nullptr;
    KRatingWidget_TabletEvent_Callback kratingwidget_tabletevent_callback = nullptr;
    KRatingWidget_ActionEvent_Callback kratingwidget_actionevent_callback = nullptr;
    KRatingWidget_DragEnterEvent_Callback kratingwidget_dragenterevent_callback = nullptr;
    KRatingWidget_DragMoveEvent_Callback kratingwidget_dragmoveevent_callback = nullptr;
    KRatingWidget_DragLeaveEvent_Callback kratingwidget_dragleaveevent_callback = nullptr;
    KRatingWidget_DropEvent_Callback kratingwidget_dropevent_callback = nullptr;
    KRatingWidget_ShowEvent_Callback kratingwidget_showevent_callback = nullptr;
    KRatingWidget_HideEvent_Callback kratingwidget_hideevent_callback = nullptr;
    KRatingWidget_NativeEvent_Callback kratingwidget_nativeevent_callback = nullptr;
    KRatingWidget_Metric_Callback kratingwidget_metric_callback = nullptr;
    KRatingWidget_InitPainter_Callback kratingwidget_initpainter_callback = nullptr;
    KRatingWidget_Redirected_Callback kratingwidget_redirected_callback = nullptr;
    KRatingWidget_SharedPainter_Callback kratingwidget_sharedpainter_callback = nullptr;
    KRatingWidget_InputMethodEvent_Callback kratingwidget_inputmethodevent_callback = nullptr;
    KRatingWidget_InputMethodQuery_Callback kratingwidget_inputmethodquery_callback = nullptr;
    KRatingWidget_FocusNextPrevChild_Callback kratingwidget_focusnextprevchild_callback = nullptr;
    KRatingWidget_EventFilter_Callback kratingwidget_eventfilter_callback = nullptr;
    KRatingWidget_TimerEvent_Callback kratingwidget_timerevent_callback = nullptr;
    KRatingWidget_ChildEvent_Callback kratingwidget_childevent_callback = nullptr;
    KRatingWidget_CustomEvent_Callback kratingwidget_customevent_callback = nullptr;
    KRatingWidget_ConnectNotify_Callback kratingwidget_connectnotify_callback = nullptr;
    KRatingWidget_DisconnectNotify_Callback kratingwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRatingWidget {
        using KRatingWidget::actionEvent;
        using KRatingWidget::changeEvent;
        using KRatingWidget::childEvent;
        using KRatingWidget::closeEvent;
        using KRatingWidget::connectNotify;
        using KRatingWidget::contextMenuEvent;
        using KRatingWidget::customEvent;
        using KRatingWidget::disconnectNotify;
        using KRatingWidget::dragEnterEvent;
        using KRatingWidget::dragLeaveEvent;
        using KRatingWidget::dragMoveEvent;
        using KRatingWidget::dropEvent;
        using KRatingWidget::enterEvent;
        using KRatingWidget::event;
        using KRatingWidget::focusInEvent;
        using KRatingWidget::focusNextPrevChild;
        using KRatingWidget::focusOutEvent;
        using KRatingWidget::hideEvent;
        using KRatingWidget::initPainter;
        using KRatingWidget::initStyleOption;
        using KRatingWidget::inputMethodEvent;
        using KRatingWidget::keyPressEvent;
        using KRatingWidget::keyReleaseEvent;
        using KRatingWidget::leaveEvent;
        using KRatingWidget::metric;
        using KRatingWidget::mouseDoubleClickEvent;
        using KRatingWidget::mouseMoveEvent;
        using KRatingWidget::mousePressEvent;
        using KRatingWidget::mouseReleaseEvent;
        using KRatingWidget::moveEvent;
        using KRatingWidget::nativeEvent;
        using KRatingWidget::paintEvent;
        using KRatingWidget::redirected;
        using KRatingWidget::resizeEvent;
        using KRatingWidget::sharedPainter;
        using KRatingWidget::showEvent;
        using KRatingWidget::tabletEvent;
        using KRatingWidget::timerEvent;
        using KRatingWidget::wheelEvent;
    };

    VirtualKRatingWidget(QWidget* parent) : KRatingWidget(parent) {};
    VirtualKRatingWidget() : KRatingWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kratingwidget_metaobject_callback) {
            QMetaObject* callback_ret = kratingwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KRatingWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kratingwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kratingwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRatingWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kratingwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kratingwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRatingWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kratingwidget_sizehint_callback) {
            QSize* callback_ret = kratingwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRatingWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kratingwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kratingwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kratingwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kratingwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* e) override {
        if (kratingwidget_leaveevent_callback) {
            QEvent* cbval1 = e;
            kratingwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::leaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kratingwidget_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kratingwidget_paintevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kratingwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kratingwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kratingwidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kratingwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRatingWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kratingwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kratingwidget_changeevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kratingwidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kratingwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        KRatingWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kratingwidget_devtype_callback) {
            int callback_ret = kratingwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KRatingWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kratingwidget_setvisible_callback) {
            bool cbval1 = visible;
            kratingwidget_setvisible_callback(this, cbval1);
            return;
        }
        KRatingWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kratingwidget_minimumsizehint_callback) {
            QSize* callback_ret = kratingwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRatingWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kratingwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kratingwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRatingWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kratingwidget_hasheightforwidth_callback) {
            bool callback_ret = kratingwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KRatingWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kratingwidget_paintengine_callback) {
            QPaintEngine* callback_ret = kratingwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KRatingWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kratingwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kratingwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kratingwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kratingwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kratingwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kratingwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kratingwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kratingwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kratingwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kratingwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kratingwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kratingwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kratingwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kratingwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kratingwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kratingwidget_enterevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kratingwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kratingwidget_moveevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kratingwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kratingwidget_closeevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kratingwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kratingwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kratingwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kratingwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kratingwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kratingwidget_actionevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kratingwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kratingwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kratingwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kratingwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kratingwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kratingwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kratingwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kratingwidget_dropevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kratingwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kratingwidget_showevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kratingwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kratingwidget_hideevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kratingwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kratingwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KRatingWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kratingwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kratingwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRatingWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kratingwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kratingwidget_initpainter_callback(this, cbval1);
            return;
        }
        KRatingWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kratingwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kratingwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KRatingWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kratingwidget_sharedpainter_callback) {
            QPainter* callback_ret = kratingwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KRatingWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kratingwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kratingwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kratingwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kratingwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRatingWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kratingwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kratingwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KRatingWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kratingwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kratingwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRatingWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kratingwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kratingwidget_timerevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kratingwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kratingwidget_childevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kratingwidget_customevent_callback) {
            QEvent* cbval1 = event;
            kratingwidget_customevent_callback(this, cbval1);
            return;
        }
        KRatingWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kratingwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kratingwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KRatingWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kratingwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kratingwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRatingWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRatingWidget_SuperMousePressEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_SuperMouseMoveEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_SuperLeaveEvent(KRatingWidget* self, QEvent* e);
    friend void KRatingWidget_SuperPaintEvent(KRatingWidget* self, QPaintEvent* e);
    friend void KRatingWidget_SuperResizeEvent(KRatingWidget* self, QResizeEvent* e);
    friend bool KRatingWidget_SuperEvent(KRatingWidget* self, QEvent* e);
    friend void KRatingWidget_SuperChangeEvent(KRatingWidget* self, QEvent* param1);
    friend void KRatingWidget_SuperInitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option);
    friend void KRatingWidget_SuperMouseReleaseEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_SuperMouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_SuperWheelEvent(KRatingWidget* self, QWheelEvent* event);
    friend void KRatingWidget_SuperKeyPressEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_SuperKeyReleaseEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_SuperFocusInEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_SuperFocusOutEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_SuperEnterEvent(KRatingWidget* self, QEnterEvent* event);
    friend void KRatingWidget_SuperMoveEvent(KRatingWidget* self, QMoveEvent* event);
    friend void KRatingWidget_SuperCloseEvent(KRatingWidget* self, QCloseEvent* event);
    friend void KRatingWidget_SuperContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event);
    friend void KRatingWidget_SuperTabletEvent(KRatingWidget* self, QTabletEvent* event);
    friend void KRatingWidget_SuperActionEvent(KRatingWidget* self, QActionEvent* event);
    friend void KRatingWidget_SuperDragEnterEvent(KRatingWidget* self, QDragEnterEvent* event);
    friend void KRatingWidget_SuperDragMoveEvent(KRatingWidget* self, QDragMoveEvent* event);
    friend void KRatingWidget_SuperDragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event);
    friend void KRatingWidget_SuperDropEvent(KRatingWidget* self, QDropEvent* event);
    friend void KRatingWidget_SuperShowEvent(KRatingWidget* self, QShowEvent* event);
    friend void KRatingWidget_SuperHideEvent(KRatingWidget* self, QHideEvent* event);
    friend bool KRatingWidget_SuperNativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRatingWidget_SuperMetric(const KRatingWidget* self, int param1);
    friend void KRatingWidget_SuperInitPainter(const KRatingWidget* self, QPainter* painter);
    friend QPaintDevice* KRatingWidget_SuperRedirected(const KRatingWidget* self, QPoint* offset);
    friend QPainter* KRatingWidget_SuperSharedPainter(const KRatingWidget* self);
    friend void KRatingWidget_SuperInputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1);
    friend bool KRatingWidget_SuperFocusNextPrevChild(KRatingWidget* self, bool next);
    friend void KRatingWidget_SuperTimerEvent(KRatingWidget* self, QTimerEvent* event);
    friend void KRatingWidget_SuperChildEvent(KRatingWidget* self, QChildEvent* event);
    friend void KRatingWidget_SuperCustomEvent(KRatingWidget* self, QEvent* event);
    friend void KRatingWidget_SuperConnectNotify(KRatingWidget* self, const QMetaMethod* signal);
    friend void KRatingWidget_SuperDisconnectNotify(KRatingWidget* self, const QMetaMethod* signal);
};

#endif
