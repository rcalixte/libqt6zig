#pragma once
#ifndef EXTRAS_KIO_LIBKURLNAVIGATOR_HXX
#define EXTRAS_KIO_LIBKURLNAVIGATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlNavigator
class VirtualKUrlNavigator final : public KUrlNavigator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlNavigator_MetaObject_Callback = QMetaObject* (*)(const KUrlNavigator*);
    using KUrlNavigator_Metacast_Callback = void* (*)(KUrlNavigator*, const char*);
    using KUrlNavigator_Metacall_Callback = int (*)(KUrlNavigator*, int, int, void**);
    using KUrlNavigator_KeyPressEvent_Callback = void (*)(KUrlNavigator*, QKeyEvent*);
    using KUrlNavigator_KeyReleaseEvent_Callback = void (*)(KUrlNavigator*, QKeyEvent*);
    using KUrlNavigator_MouseReleaseEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_MousePressEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_ResizeEvent_Callback = void (*)(KUrlNavigator*, QResizeEvent*);
    using KUrlNavigator_WheelEvent_Callback = void (*)(KUrlNavigator*, QWheelEvent*);
    using KUrlNavigator_ShowEvent_Callback = void (*)(KUrlNavigator*, QShowEvent*);
    using KUrlNavigator_EventFilter_Callback = bool (*)(KUrlNavigator*, QObject*, QEvent*);
    using KUrlNavigator_PaintEvent_Callback = void (*)(KUrlNavigator*, QPaintEvent*);
    using KUrlNavigator_DevType_Callback = int (*)(const KUrlNavigator*);
    using KUrlNavigator_SetVisible_Callback = void (*)(KUrlNavigator*, bool);
    using KUrlNavigator_SizeHint_Callback = QSize* (*)(const KUrlNavigator*);
    using KUrlNavigator_MinimumSizeHint_Callback = QSize* (*)(const KUrlNavigator*);
    using KUrlNavigator_HeightForWidth_Callback = int (*)(const KUrlNavigator*, int);
    using KUrlNavigator_HasHeightForWidth_Callback = bool (*)(const KUrlNavigator*);
    using KUrlNavigator_PaintEngine_Callback = QPaintEngine* (*)(const KUrlNavigator*);
    using KUrlNavigator_Event_Callback = bool (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_MouseDoubleClickEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_MouseMoveEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_FocusInEvent_Callback = void (*)(KUrlNavigator*, QFocusEvent*);
    using KUrlNavigator_FocusOutEvent_Callback = void (*)(KUrlNavigator*, QFocusEvent*);
    using KUrlNavigator_EnterEvent_Callback = void (*)(KUrlNavigator*, QEnterEvent*);
    using KUrlNavigator_LeaveEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_MoveEvent_Callback = void (*)(KUrlNavigator*, QMoveEvent*);
    using KUrlNavigator_CloseEvent_Callback = void (*)(KUrlNavigator*, QCloseEvent*);
    using KUrlNavigator_ContextMenuEvent_Callback = void (*)(KUrlNavigator*, QContextMenuEvent*);
    using KUrlNavigator_TabletEvent_Callback = void (*)(KUrlNavigator*, QTabletEvent*);
    using KUrlNavigator_ActionEvent_Callback = void (*)(KUrlNavigator*, QActionEvent*);
    using KUrlNavigator_DragEnterEvent_Callback = void (*)(KUrlNavigator*, QDragEnterEvent*);
    using KUrlNavigator_DragMoveEvent_Callback = void (*)(KUrlNavigator*, QDragMoveEvent*);
    using KUrlNavigator_DragLeaveEvent_Callback = void (*)(KUrlNavigator*, QDragLeaveEvent*);
    using KUrlNavigator_DropEvent_Callback = void (*)(KUrlNavigator*, QDropEvent*);
    using KUrlNavigator_HideEvent_Callback = void (*)(KUrlNavigator*, QHideEvent*);
    using KUrlNavigator_NativeEvent_Callback = bool (*)(KUrlNavigator*, libqt_string, void*, intptr_t*);
    using KUrlNavigator_ChangeEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_Metric_Callback = int (*)(const KUrlNavigator*, int);
    using KUrlNavigator_InitPainter_Callback = void (*)(const KUrlNavigator*, QPainter*);
    using KUrlNavigator_Redirected_Callback = QPaintDevice* (*)(const KUrlNavigator*, QPoint*);
    using KUrlNavigator_SharedPainter_Callback = QPainter* (*)(const KUrlNavigator*);
    using KUrlNavigator_InputMethodEvent_Callback = void (*)(KUrlNavigator*, QInputMethodEvent*);
    using KUrlNavigator_InputMethodQuery_Callback = QVariant* (*)(const KUrlNavigator*, int);
    using KUrlNavigator_FocusNextPrevChild_Callback = bool (*)(KUrlNavigator*, bool);
    using KUrlNavigator_TimerEvent_Callback = void (*)(KUrlNavigator*, QTimerEvent*);
    using KUrlNavigator_ChildEvent_Callback = void (*)(KUrlNavigator*, QChildEvent*);
    using KUrlNavigator_CustomEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_ConnectNotify_Callback = void (*)(KUrlNavigator*, QMetaMethod*);
    using KUrlNavigator_DisconnectNotify_Callback = void (*)(KUrlNavigator*, QMetaMethod*);
    using KUrlNavigator::create;
    using KUrlNavigator::destroy;
    using KUrlNavigator::focusNextChild;
    using KUrlNavigator::focusPreviousChild;
    using KUrlNavigator::getDecodedMetricF;
    using KUrlNavigator::isSignalConnected;
    using KUrlNavigator::receivers;
    using KUrlNavigator::sender;
    using KUrlNavigator::senderSignalIndex;
    using KUrlNavigator::updateMicroFocus;

    // Instance callback storage
    KUrlNavigator_MetaObject_Callback kurlnavigator_metaobject_callback = nullptr;
    KUrlNavigator_Metacast_Callback kurlnavigator_metacast_callback = nullptr;
    KUrlNavigator_Metacall_Callback kurlnavigator_metacall_callback = nullptr;
    KUrlNavigator_KeyPressEvent_Callback kurlnavigator_keypressevent_callback = nullptr;
    KUrlNavigator_KeyReleaseEvent_Callback kurlnavigator_keyreleaseevent_callback = nullptr;
    KUrlNavigator_MouseReleaseEvent_Callback kurlnavigator_mousereleaseevent_callback = nullptr;
    KUrlNavigator_MousePressEvent_Callback kurlnavigator_mousepressevent_callback = nullptr;
    KUrlNavigator_ResizeEvent_Callback kurlnavigator_resizeevent_callback = nullptr;
    KUrlNavigator_WheelEvent_Callback kurlnavigator_wheelevent_callback = nullptr;
    KUrlNavigator_ShowEvent_Callback kurlnavigator_showevent_callback = nullptr;
    KUrlNavigator_EventFilter_Callback kurlnavigator_eventfilter_callback = nullptr;
    KUrlNavigator_PaintEvent_Callback kurlnavigator_paintevent_callback = nullptr;
    KUrlNavigator_DevType_Callback kurlnavigator_devtype_callback = nullptr;
    KUrlNavigator_SetVisible_Callback kurlnavigator_setvisible_callback = nullptr;
    KUrlNavigator_SizeHint_Callback kurlnavigator_sizehint_callback = nullptr;
    KUrlNavigator_MinimumSizeHint_Callback kurlnavigator_minimumsizehint_callback = nullptr;
    KUrlNavigator_HeightForWidth_Callback kurlnavigator_heightforwidth_callback = nullptr;
    KUrlNavigator_HasHeightForWidth_Callback kurlnavigator_hasheightforwidth_callback = nullptr;
    KUrlNavigator_PaintEngine_Callback kurlnavigator_paintengine_callback = nullptr;
    KUrlNavigator_Event_Callback kurlnavigator_event_callback = nullptr;
    KUrlNavigator_MouseDoubleClickEvent_Callback kurlnavigator_mousedoubleclickevent_callback = nullptr;
    KUrlNavigator_MouseMoveEvent_Callback kurlnavigator_mousemoveevent_callback = nullptr;
    KUrlNavigator_FocusInEvent_Callback kurlnavigator_focusinevent_callback = nullptr;
    KUrlNavigator_FocusOutEvent_Callback kurlnavigator_focusoutevent_callback = nullptr;
    KUrlNavigator_EnterEvent_Callback kurlnavigator_enterevent_callback = nullptr;
    KUrlNavigator_LeaveEvent_Callback kurlnavigator_leaveevent_callback = nullptr;
    KUrlNavigator_MoveEvent_Callback kurlnavigator_moveevent_callback = nullptr;
    KUrlNavigator_CloseEvent_Callback kurlnavigator_closeevent_callback = nullptr;
    KUrlNavigator_ContextMenuEvent_Callback kurlnavigator_contextmenuevent_callback = nullptr;
    KUrlNavigator_TabletEvent_Callback kurlnavigator_tabletevent_callback = nullptr;
    KUrlNavigator_ActionEvent_Callback kurlnavigator_actionevent_callback = nullptr;
    KUrlNavigator_DragEnterEvent_Callback kurlnavigator_dragenterevent_callback = nullptr;
    KUrlNavigator_DragMoveEvent_Callback kurlnavigator_dragmoveevent_callback = nullptr;
    KUrlNavigator_DragLeaveEvent_Callback kurlnavigator_dragleaveevent_callback = nullptr;
    KUrlNavigator_DropEvent_Callback kurlnavigator_dropevent_callback = nullptr;
    KUrlNavigator_HideEvent_Callback kurlnavigator_hideevent_callback = nullptr;
    KUrlNavigator_NativeEvent_Callback kurlnavigator_nativeevent_callback = nullptr;
    KUrlNavigator_ChangeEvent_Callback kurlnavigator_changeevent_callback = nullptr;
    KUrlNavigator_Metric_Callback kurlnavigator_metric_callback = nullptr;
    KUrlNavigator_InitPainter_Callback kurlnavigator_initpainter_callback = nullptr;
    KUrlNavigator_Redirected_Callback kurlnavigator_redirected_callback = nullptr;
    KUrlNavigator_SharedPainter_Callback kurlnavigator_sharedpainter_callback = nullptr;
    KUrlNavigator_InputMethodEvent_Callback kurlnavigator_inputmethodevent_callback = nullptr;
    KUrlNavigator_InputMethodQuery_Callback kurlnavigator_inputmethodquery_callback = nullptr;
    KUrlNavigator_FocusNextPrevChild_Callback kurlnavigator_focusnextprevchild_callback = nullptr;
    KUrlNavigator_TimerEvent_Callback kurlnavigator_timerevent_callback = nullptr;
    KUrlNavigator_ChildEvent_Callback kurlnavigator_childevent_callback = nullptr;
    KUrlNavigator_CustomEvent_Callback kurlnavigator_customevent_callback = nullptr;
    KUrlNavigator_ConnectNotify_Callback kurlnavigator_connectnotify_callback = nullptr;
    KUrlNavigator_DisconnectNotify_Callback kurlnavigator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KUrlNavigator {
        using KUrlNavigator::actionEvent;
        using KUrlNavigator::changeEvent;
        using KUrlNavigator::childEvent;
        using KUrlNavigator::closeEvent;
        using KUrlNavigator::connectNotify;
        using KUrlNavigator::contextMenuEvent;
        using KUrlNavigator::customEvent;
        using KUrlNavigator::disconnectNotify;
        using KUrlNavigator::dragEnterEvent;
        using KUrlNavigator::dragLeaveEvent;
        using KUrlNavigator::dragMoveEvent;
        using KUrlNavigator::dropEvent;
        using KUrlNavigator::enterEvent;
        using KUrlNavigator::event;
        using KUrlNavigator::eventFilter;
        using KUrlNavigator::focusInEvent;
        using KUrlNavigator::focusNextPrevChild;
        using KUrlNavigator::focusOutEvent;
        using KUrlNavigator::hideEvent;
        using KUrlNavigator::initPainter;
        using KUrlNavigator::inputMethodEvent;
        using KUrlNavigator::keyPressEvent;
        using KUrlNavigator::keyReleaseEvent;
        using KUrlNavigator::leaveEvent;
        using KUrlNavigator::metric;
        using KUrlNavigator::mouseDoubleClickEvent;
        using KUrlNavigator::mouseMoveEvent;
        using KUrlNavigator::mousePressEvent;
        using KUrlNavigator::mouseReleaseEvent;
        using KUrlNavigator::moveEvent;
        using KUrlNavigator::nativeEvent;
        using KUrlNavigator::paintEvent;
        using KUrlNavigator::redirected;
        using KUrlNavigator::resizeEvent;
        using KUrlNavigator::sharedPainter;
        using KUrlNavigator::showEvent;
        using KUrlNavigator::tabletEvent;
        using KUrlNavigator::timerEvent;
        using KUrlNavigator::wheelEvent;
    };

    VirtualKUrlNavigator(QWidget* parent) : KUrlNavigator(parent) {};
    VirtualKUrlNavigator() : KUrlNavigator() {};
    VirtualKUrlNavigator(KFilePlacesModel* placesModel, const QUrl& url, QWidget* parent) : KUrlNavigator(placesModel, url, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlnavigator_metaobject_callback) {
            QMetaObject* callback_ret = kurlnavigator_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlNavigator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlnavigator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlnavigator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlNavigator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlnavigator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlnavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlNavigator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlnavigator_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlnavigator_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlnavigator_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlnavigator_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlnavigator_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlnavigator_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlnavigator_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kurlnavigator_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlnavigator_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kurlnavigator_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlnavigator_showevent_callback) {
            QShowEvent* cbval1 = event;
            kurlnavigator_showevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlnavigator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kurlnavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlNavigator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlnavigator_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kurlnavigator_paintevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlnavigator_devtype_callback) {
            int callback_ret = kurlnavigator_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlNavigator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlnavigator_setvisible_callback) {
            bool cbval1 = visible;
            kurlnavigator_setvisible_callback(this, cbval1);
            return;
        }
        KUrlNavigator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlnavigator_sizehint_callback) {
            QSize* callback_ret = kurlnavigator_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlNavigator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlnavigator_minimumsizehint_callback) {
            QSize* callback_ret = kurlnavigator_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlNavigator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlnavigator_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurlnavigator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlNavigator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlnavigator_hasheightforwidth_callback) {
            bool callback_ret = kurlnavigator_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlNavigator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlnavigator_paintengine_callback) {
            QPaintEngine* callback_ret = kurlnavigator_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlNavigator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlnavigator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlnavigator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlNavigator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlnavigator_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlnavigator_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlnavigator_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlnavigator_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlnavigator_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlnavigator_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlnavigator_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurlnavigator_enterevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlnavigator_leaveevent_callback) {
            QEvent* cbval1 = event;
            kurlnavigator_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlnavigator_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurlnavigator_moveevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlnavigator_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kurlnavigator_closeevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlnavigator_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kurlnavigator_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlnavigator_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurlnavigator_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlnavigator_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurlnavigator_actionevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlnavigator_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurlnavigator_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlnavigator_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurlnavigator_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlnavigator_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurlnavigator_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlnavigator_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurlnavigator_dropevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlnavigator_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kurlnavigator_hideevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlnavigator_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurlnavigator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlNavigator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurlnavigator_changeevent_callback) {
            QEvent* cbval1 = param1;
            kurlnavigator_changeevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlnavigator_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurlnavigator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlNavigator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlnavigator_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurlnavigator_initpainter_callback(this, cbval1);
            return;
        }
        KUrlNavigator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlnavigator_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurlnavigator_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlNavigator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlnavigator_sharedpainter_callback) {
            QPainter* callback_ret = kurlnavigator_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlNavigator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlnavigator_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurlnavigator_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlnavigator_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurlnavigator_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlNavigator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlnavigator_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurlnavigator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlNavigator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlnavigator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlnavigator_timerevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlnavigator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlnavigator_childevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlnavigator_customevent_callback) {
            QEvent* cbval1 = event;
            kurlnavigator_customevent_callback(this, cbval1);
            return;
        }
        KUrlNavigator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlnavigator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlnavigator_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlNavigator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlnavigator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlnavigator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlNavigator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlNavigator_SuperKeyPressEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_SuperKeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_SuperMouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_SuperMousePressEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_SuperResizeEvent(KUrlNavigator* self, QResizeEvent* event);
    friend void KUrlNavigator_SuperWheelEvent(KUrlNavigator* self, QWheelEvent* event);
    friend void KUrlNavigator_SuperShowEvent(KUrlNavigator* self, QShowEvent* event);
    friend bool KUrlNavigator_SuperEventFilter(KUrlNavigator* self, QObject* watched, QEvent* event);
    friend void KUrlNavigator_SuperPaintEvent(KUrlNavigator* self, QPaintEvent* event);
    friend bool KUrlNavigator_SuperEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_SuperMouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_SuperMouseMoveEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_SuperFocusInEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_SuperFocusOutEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_SuperEnterEvent(KUrlNavigator* self, QEnterEvent* event);
    friend void KUrlNavigator_SuperLeaveEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_SuperMoveEvent(KUrlNavigator* self, QMoveEvent* event);
    friend void KUrlNavigator_SuperCloseEvent(KUrlNavigator* self, QCloseEvent* event);
    friend void KUrlNavigator_SuperContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event);
    friend void KUrlNavigator_SuperTabletEvent(KUrlNavigator* self, QTabletEvent* event);
    friend void KUrlNavigator_SuperActionEvent(KUrlNavigator* self, QActionEvent* event);
    friend void KUrlNavigator_SuperDragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event);
    friend void KUrlNavigator_SuperDragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event);
    friend void KUrlNavigator_SuperDragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event);
    friend void KUrlNavigator_SuperDropEvent(KUrlNavigator* self, QDropEvent* event);
    friend void KUrlNavigator_SuperHideEvent(KUrlNavigator* self, QHideEvent* event);
    friend bool KUrlNavigator_SuperNativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KUrlNavigator_SuperChangeEvent(KUrlNavigator* self, QEvent* param1);
    friend int KUrlNavigator_SuperMetric(const KUrlNavigator* self, int param1);
    friend void KUrlNavigator_SuperInitPainter(const KUrlNavigator* self, QPainter* painter);
    friend QPaintDevice* KUrlNavigator_SuperRedirected(const KUrlNavigator* self, QPoint* offset);
    friend QPainter* KUrlNavigator_SuperSharedPainter(const KUrlNavigator* self);
    friend void KUrlNavigator_SuperInputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1);
    friend bool KUrlNavigator_SuperFocusNextPrevChild(KUrlNavigator* self, bool next);
    friend void KUrlNavigator_SuperTimerEvent(KUrlNavigator* self, QTimerEvent* event);
    friend void KUrlNavigator_SuperChildEvent(KUrlNavigator* self, QChildEvent* event);
    friend void KUrlNavigator_SuperCustomEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_SuperConnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
    friend void KUrlNavigator_SuperDisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
};

#endif
