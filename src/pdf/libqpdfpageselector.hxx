#pragma once
#ifndef PDF_LIBQPDFPAGESELECTOR_HXX
#define PDF_LIBQPDFPAGESELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageSelector
class VirtualQPdfPageSelector final : public QPdfPageSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfPageSelector_MetaObject_Callback = QMetaObject* (*)(const QPdfPageSelector*);
    using QPdfPageSelector_Metacast_Callback = void* (*)(QPdfPageSelector*, const char*);
    using QPdfPageSelector_Metacall_Callback = int (*)(QPdfPageSelector*, int, int, void**);
    using QPdfPageSelector_DevType_Callback = int (*)(const QPdfPageSelector*);
    using QPdfPageSelector_SetVisible_Callback = void (*)(QPdfPageSelector*, bool);
    using QPdfPageSelector_SizeHint_Callback = QSize* (*)(const QPdfPageSelector*);
    using QPdfPageSelector_MinimumSizeHint_Callback = QSize* (*)(const QPdfPageSelector*);
    using QPdfPageSelector_HeightForWidth_Callback = int (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_HasHeightForWidth_Callback = bool (*)(const QPdfPageSelector*);
    using QPdfPageSelector_PaintEngine_Callback = QPaintEngine* (*)(const QPdfPageSelector*);
    using QPdfPageSelector_Event_Callback = bool (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_MousePressEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseReleaseEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseDoubleClickEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseMoveEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_WheelEvent_Callback = void (*)(QPdfPageSelector*, QWheelEvent*);
    using QPdfPageSelector_KeyPressEvent_Callback = void (*)(QPdfPageSelector*, QKeyEvent*);
    using QPdfPageSelector_KeyReleaseEvent_Callback = void (*)(QPdfPageSelector*, QKeyEvent*);
    using QPdfPageSelector_FocusInEvent_Callback = void (*)(QPdfPageSelector*, QFocusEvent*);
    using QPdfPageSelector_FocusOutEvent_Callback = void (*)(QPdfPageSelector*, QFocusEvent*);
    using QPdfPageSelector_EnterEvent_Callback = void (*)(QPdfPageSelector*, QEnterEvent*);
    using QPdfPageSelector_LeaveEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_PaintEvent_Callback = void (*)(QPdfPageSelector*, QPaintEvent*);
    using QPdfPageSelector_MoveEvent_Callback = void (*)(QPdfPageSelector*, QMoveEvent*);
    using QPdfPageSelector_ResizeEvent_Callback = void (*)(QPdfPageSelector*, QResizeEvent*);
    using QPdfPageSelector_CloseEvent_Callback = void (*)(QPdfPageSelector*, QCloseEvent*);
    using QPdfPageSelector_ContextMenuEvent_Callback = void (*)(QPdfPageSelector*, QContextMenuEvent*);
    using QPdfPageSelector_TabletEvent_Callback = void (*)(QPdfPageSelector*, QTabletEvent*);
    using QPdfPageSelector_ActionEvent_Callback = void (*)(QPdfPageSelector*, QActionEvent*);
    using QPdfPageSelector_DragEnterEvent_Callback = void (*)(QPdfPageSelector*, QDragEnterEvent*);
    using QPdfPageSelector_DragMoveEvent_Callback = void (*)(QPdfPageSelector*, QDragMoveEvent*);
    using QPdfPageSelector_DragLeaveEvent_Callback = void (*)(QPdfPageSelector*, QDragLeaveEvent*);
    using QPdfPageSelector_DropEvent_Callback = void (*)(QPdfPageSelector*, QDropEvent*);
    using QPdfPageSelector_ShowEvent_Callback = void (*)(QPdfPageSelector*, QShowEvent*);
    using QPdfPageSelector_HideEvent_Callback = void (*)(QPdfPageSelector*, QHideEvent*);
    using QPdfPageSelector_NativeEvent_Callback = bool (*)(QPdfPageSelector*, libqt_string, void*, intptr_t*);
    using QPdfPageSelector_ChangeEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_Metric_Callback = int (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_InitPainter_Callback = void (*)(const QPdfPageSelector*, QPainter*);
    using QPdfPageSelector_Redirected_Callback = QPaintDevice* (*)(const QPdfPageSelector*, QPoint*);
    using QPdfPageSelector_SharedPainter_Callback = QPainter* (*)(const QPdfPageSelector*);
    using QPdfPageSelector_InputMethodEvent_Callback = void (*)(QPdfPageSelector*, QInputMethodEvent*);
    using QPdfPageSelector_InputMethodQuery_Callback = QVariant* (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_FocusNextPrevChild_Callback = bool (*)(QPdfPageSelector*, bool);
    using QPdfPageSelector_EventFilter_Callback = bool (*)(QPdfPageSelector*, QObject*, QEvent*);
    using QPdfPageSelector_TimerEvent_Callback = void (*)(QPdfPageSelector*, QTimerEvent*);
    using QPdfPageSelector_ChildEvent_Callback = void (*)(QPdfPageSelector*, QChildEvent*);
    using QPdfPageSelector_CustomEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_ConnectNotify_Callback = void (*)(QPdfPageSelector*, QMetaMethod*);
    using QPdfPageSelector_DisconnectNotify_Callback = void (*)(QPdfPageSelector*, QMetaMethod*);
    using QPdfPageSelector::create;
    using QPdfPageSelector::destroy;
    using QPdfPageSelector::focusNextChild;
    using QPdfPageSelector::focusPreviousChild;
    using QPdfPageSelector::getDecodedMetricF;
    using QPdfPageSelector::isSignalConnected;
    using QPdfPageSelector::receivers;
    using QPdfPageSelector::sender;
    using QPdfPageSelector::senderSignalIndex;
    using QPdfPageSelector::updateMicroFocus;

    // Instance callback storage
    QPdfPageSelector_MetaObject_Callback qpdfpageselector_metaobject_callback = nullptr;
    QPdfPageSelector_Metacast_Callback qpdfpageselector_metacast_callback = nullptr;
    QPdfPageSelector_Metacall_Callback qpdfpageselector_metacall_callback = nullptr;
    QPdfPageSelector_DevType_Callback qpdfpageselector_devtype_callback = nullptr;
    QPdfPageSelector_SetVisible_Callback qpdfpageselector_setvisible_callback = nullptr;
    QPdfPageSelector_SizeHint_Callback qpdfpageselector_sizehint_callback = nullptr;
    QPdfPageSelector_MinimumSizeHint_Callback qpdfpageselector_minimumsizehint_callback = nullptr;
    QPdfPageSelector_HeightForWidth_Callback qpdfpageselector_heightforwidth_callback = nullptr;
    QPdfPageSelector_HasHeightForWidth_Callback qpdfpageselector_hasheightforwidth_callback = nullptr;
    QPdfPageSelector_PaintEngine_Callback qpdfpageselector_paintengine_callback = nullptr;
    QPdfPageSelector_Event_Callback qpdfpageselector_event_callback = nullptr;
    QPdfPageSelector_MousePressEvent_Callback qpdfpageselector_mousepressevent_callback = nullptr;
    QPdfPageSelector_MouseReleaseEvent_Callback qpdfpageselector_mousereleaseevent_callback = nullptr;
    QPdfPageSelector_MouseDoubleClickEvent_Callback qpdfpageselector_mousedoubleclickevent_callback = nullptr;
    QPdfPageSelector_MouseMoveEvent_Callback qpdfpageselector_mousemoveevent_callback = nullptr;
    QPdfPageSelector_WheelEvent_Callback qpdfpageselector_wheelevent_callback = nullptr;
    QPdfPageSelector_KeyPressEvent_Callback qpdfpageselector_keypressevent_callback = nullptr;
    QPdfPageSelector_KeyReleaseEvent_Callback qpdfpageselector_keyreleaseevent_callback = nullptr;
    QPdfPageSelector_FocusInEvent_Callback qpdfpageselector_focusinevent_callback = nullptr;
    QPdfPageSelector_FocusOutEvent_Callback qpdfpageselector_focusoutevent_callback = nullptr;
    QPdfPageSelector_EnterEvent_Callback qpdfpageselector_enterevent_callback = nullptr;
    QPdfPageSelector_LeaveEvent_Callback qpdfpageselector_leaveevent_callback = nullptr;
    QPdfPageSelector_PaintEvent_Callback qpdfpageselector_paintevent_callback = nullptr;
    QPdfPageSelector_MoveEvent_Callback qpdfpageselector_moveevent_callback = nullptr;
    QPdfPageSelector_ResizeEvent_Callback qpdfpageselector_resizeevent_callback = nullptr;
    QPdfPageSelector_CloseEvent_Callback qpdfpageselector_closeevent_callback = nullptr;
    QPdfPageSelector_ContextMenuEvent_Callback qpdfpageselector_contextmenuevent_callback = nullptr;
    QPdfPageSelector_TabletEvent_Callback qpdfpageselector_tabletevent_callback = nullptr;
    QPdfPageSelector_ActionEvent_Callback qpdfpageselector_actionevent_callback = nullptr;
    QPdfPageSelector_DragEnterEvent_Callback qpdfpageselector_dragenterevent_callback = nullptr;
    QPdfPageSelector_DragMoveEvent_Callback qpdfpageselector_dragmoveevent_callback = nullptr;
    QPdfPageSelector_DragLeaveEvent_Callback qpdfpageselector_dragleaveevent_callback = nullptr;
    QPdfPageSelector_DropEvent_Callback qpdfpageselector_dropevent_callback = nullptr;
    QPdfPageSelector_ShowEvent_Callback qpdfpageselector_showevent_callback = nullptr;
    QPdfPageSelector_HideEvent_Callback qpdfpageselector_hideevent_callback = nullptr;
    QPdfPageSelector_NativeEvent_Callback qpdfpageselector_nativeevent_callback = nullptr;
    QPdfPageSelector_ChangeEvent_Callback qpdfpageselector_changeevent_callback = nullptr;
    QPdfPageSelector_Metric_Callback qpdfpageselector_metric_callback = nullptr;
    QPdfPageSelector_InitPainter_Callback qpdfpageselector_initpainter_callback = nullptr;
    QPdfPageSelector_Redirected_Callback qpdfpageselector_redirected_callback = nullptr;
    QPdfPageSelector_SharedPainter_Callback qpdfpageselector_sharedpainter_callback = nullptr;
    QPdfPageSelector_InputMethodEvent_Callback qpdfpageselector_inputmethodevent_callback = nullptr;
    QPdfPageSelector_InputMethodQuery_Callback qpdfpageselector_inputmethodquery_callback = nullptr;
    QPdfPageSelector_FocusNextPrevChild_Callback qpdfpageselector_focusnextprevchild_callback = nullptr;
    QPdfPageSelector_EventFilter_Callback qpdfpageselector_eventfilter_callback = nullptr;
    QPdfPageSelector_TimerEvent_Callback qpdfpageselector_timerevent_callback = nullptr;
    QPdfPageSelector_ChildEvent_Callback qpdfpageselector_childevent_callback = nullptr;
    QPdfPageSelector_CustomEvent_Callback qpdfpageselector_customevent_callback = nullptr;
    QPdfPageSelector_ConnectNotify_Callback qpdfpageselector_connectnotify_callback = nullptr;
    QPdfPageSelector_DisconnectNotify_Callback qpdfpageselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfPageSelector {
        using QPdfPageSelector::actionEvent;
        using QPdfPageSelector::changeEvent;
        using QPdfPageSelector::childEvent;
        using QPdfPageSelector::closeEvent;
        using QPdfPageSelector::connectNotify;
        using QPdfPageSelector::contextMenuEvent;
        using QPdfPageSelector::customEvent;
        using QPdfPageSelector::disconnectNotify;
        using QPdfPageSelector::dragEnterEvent;
        using QPdfPageSelector::dragLeaveEvent;
        using QPdfPageSelector::dragMoveEvent;
        using QPdfPageSelector::dropEvent;
        using QPdfPageSelector::enterEvent;
        using QPdfPageSelector::event;
        using QPdfPageSelector::focusInEvent;
        using QPdfPageSelector::focusNextPrevChild;
        using QPdfPageSelector::focusOutEvent;
        using QPdfPageSelector::hideEvent;
        using QPdfPageSelector::initPainter;
        using QPdfPageSelector::inputMethodEvent;
        using QPdfPageSelector::keyPressEvent;
        using QPdfPageSelector::keyReleaseEvent;
        using QPdfPageSelector::leaveEvent;
        using QPdfPageSelector::metric;
        using QPdfPageSelector::mouseDoubleClickEvent;
        using QPdfPageSelector::mouseMoveEvent;
        using QPdfPageSelector::mousePressEvent;
        using QPdfPageSelector::mouseReleaseEvent;
        using QPdfPageSelector::moveEvent;
        using QPdfPageSelector::nativeEvent;
        using QPdfPageSelector::paintEvent;
        using QPdfPageSelector::redirected;
        using QPdfPageSelector::resizeEvent;
        using QPdfPageSelector::sharedPainter;
        using QPdfPageSelector::showEvent;
        using QPdfPageSelector::tabletEvent;
        using QPdfPageSelector::timerEvent;
        using QPdfPageSelector::wheelEvent;
    };

    VirtualQPdfPageSelector(QWidget* parent) : QPdfPageSelector(parent) {};
    VirtualQPdfPageSelector() : QPdfPageSelector() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfpageselector_metaobject_callback) {
            QMetaObject* callback_ret = qpdfpageselector_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfPageSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfpageselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfpageselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpageselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfpageselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfpageselector_devtype_callback) {
            int callback_ret = qpdfpageselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpdfpageselector_setvisible_callback) {
            bool cbval1 = visible;
            qpdfpageselector_setvisible_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpdfpageselector_sizehint_callback) {
            QSize* callback_ret = qpdfpageselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfPageSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpdfpageselector_minimumsizehint_callback) {
            QSize* callback_ret = qpdfpageselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfPageSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpdfpageselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qpdfpageselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpdfpageselector_hasheightforwidth_callback) {
            bool callback_ret = qpdfpageselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPdfPageSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfpageselector_paintengine_callback) {
            QPaintEngine* callback_ret = qpdfpageselector_paintengine_callback(this);
            return callback_ret;
        }
        return QPdfPageSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpageselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfpageselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfpageselector_mousepressevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfpageselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfpageselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfpageselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpdfpageselector_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qpdfpageselector_wheelevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qpdfpageselector_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qpdfpageselector_keypressevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpdfpageselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qpdfpageselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpdfpageselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qpdfpageselector_focusinevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpdfpageselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qpdfpageselector_focusoutevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpdfpageselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qpdfpageselector_enterevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpdfpageselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            qpdfpageselector_leaveevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpdfpageselector_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qpdfpageselector_paintevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpdfpageselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qpdfpageselector_moveevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpdfpageselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qpdfpageselector_resizeevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpdfpageselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qpdfpageselector_closeevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qpdfpageselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qpdfpageselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpdfpageselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qpdfpageselector_tabletevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpdfpageselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qpdfpageselector_actionevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpdfpageselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qpdfpageselector_dragenterevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpdfpageselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qpdfpageselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpdfpageselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qpdfpageselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpdfpageselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qpdfpageselector_dropevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpdfpageselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            qpdfpageselector_showevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpdfpageselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qpdfpageselector_hideevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpdfpageselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qpdfpageselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPdfPageSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpdfpageselector_changeevent_callback) {
            QEvent* cbval1 = param1;
            qpdfpageselector_changeevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpdfpageselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qpdfpageselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfpageselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpdfpageselector_initpainter_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfpageselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpdfpageselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfpageselector_sharedpainter_callback) {
            QPainter* callback_ret = qpdfpageselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPdfPageSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpdfpageselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qpdfpageselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpdfpageselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qpdfpageselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfPageSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpdfpageselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qpdfpageselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpageselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfpageselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfPageSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpageselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfpageselector_timerevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpageselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfpageselector_childevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpageselector_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfpageselector_customevent_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpageselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpageselector_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpageselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpageselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPdfPageSelector_SuperEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_SuperMousePressEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_SuperMouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_SuperMouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_SuperMouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_SuperWheelEvent(QPdfPageSelector* self, QWheelEvent* event);
    friend void QPdfPageSelector_SuperKeyPressEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_SuperKeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_SuperFocusInEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_SuperFocusOutEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_SuperEnterEvent(QPdfPageSelector* self, QEnterEvent* event);
    friend void QPdfPageSelector_SuperLeaveEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_SuperPaintEvent(QPdfPageSelector* self, QPaintEvent* event);
    friend void QPdfPageSelector_SuperMoveEvent(QPdfPageSelector* self, QMoveEvent* event);
    friend void QPdfPageSelector_SuperResizeEvent(QPdfPageSelector* self, QResizeEvent* event);
    friend void QPdfPageSelector_SuperCloseEvent(QPdfPageSelector* self, QCloseEvent* event);
    friend void QPdfPageSelector_SuperContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event);
    friend void QPdfPageSelector_SuperTabletEvent(QPdfPageSelector* self, QTabletEvent* event);
    friend void QPdfPageSelector_SuperActionEvent(QPdfPageSelector* self, QActionEvent* event);
    friend void QPdfPageSelector_SuperDragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event);
    friend void QPdfPageSelector_SuperDragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event);
    friend void QPdfPageSelector_SuperDragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event);
    friend void QPdfPageSelector_SuperDropEvent(QPdfPageSelector* self, QDropEvent* event);
    friend void QPdfPageSelector_SuperShowEvent(QPdfPageSelector* self, QShowEvent* event);
    friend void QPdfPageSelector_SuperHideEvent(QPdfPageSelector* self, QHideEvent* event);
    friend bool QPdfPageSelector_SuperNativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPdfPageSelector_SuperChangeEvent(QPdfPageSelector* self, QEvent* param1);
    friend int QPdfPageSelector_SuperMetric(const QPdfPageSelector* self, int param1);
    friend void QPdfPageSelector_SuperInitPainter(const QPdfPageSelector* self, QPainter* painter);
    friend QPaintDevice* QPdfPageSelector_SuperRedirected(const QPdfPageSelector* self, QPoint* offset);
    friend QPainter* QPdfPageSelector_SuperSharedPainter(const QPdfPageSelector* self);
    friend void QPdfPageSelector_SuperInputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1);
    friend bool QPdfPageSelector_SuperFocusNextPrevChild(QPdfPageSelector* self, bool next);
    friend void QPdfPageSelector_SuperTimerEvent(QPdfPageSelector* self, QTimerEvent* event);
    friend void QPdfPageSelector_SuperChildEvent(QPdfPageSelector* self, QChildEvent* event);
    friend void QPdfPageSelector_SuperCustomEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_SuperConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
    friend void QPdfPageSelector_SuperDisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
};

#endif
