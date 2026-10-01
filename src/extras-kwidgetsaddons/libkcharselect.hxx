#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCHARSELECT_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCHARSELECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCharSelect
class VirtualKCharSelect final : public KCharSelect {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCharSelect_MetaObject_Callback = QMetaObject* (*)(const KCharSelect*);
    using KCharSelect_Metacast_Callback = void* (*)(KCharSelect*, const char*);
    using KCharSelect_Metacall_Callback = int (*)(KCharSelect*, int, int, void**);
    using KCharSelect_SizeHint_Callback = QSize* (*)(const KCharSelect*);
    using KCharSelect_DevType_Callback = int (*)(const KCharSelect*);
    using KCharSelect_SetVisible_Callback = void (*)(KCharSelect*, bool);
    using KCharSelect_MinimumSizeHint_Callback = QSize* (*)(const KCharSelect*);
    using KCharSelect_HeightForWidth_Callback = int (*)(const KCharSelect*, int);
    using KCharSelect_HasHeightForWidth_Callback = bool (*)(const KCharSelect*);
    using KCharSelect_PaintEngine_Callback = QPaintEngine* (*)(const KCharSelect*);
    using KCharSelect_Event_Callback = bool (*)(KCharSelect*, QEvent*);
    using KCharSelect_MousePressEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseReleaseEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseDoubleClickEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseMoveEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_WheelEvent_Callback = void (*)(KCharSelect*, QWheelEvent*);
    using KCharSelect_KeyPressEvent_Callback = void (*)(KCharSelect*, QKeyEvent*);
    using KCharSelect_KeyReleaseEvent_Callback = void (*)(KCharSelect*, QKeyEvent*);
    using KCharSelect_FocusInEvent_Callback = void (*)(KCharSelect*, QFocusEvent*);
    using KCharSelect_FocusOutEvent_Callback = void (*)(KCharSelect*, QFocusEvent*);
    using KCharSelect_EnterEvent_Callback = void (*)(KCharSelect*, QEnterEvent*);
    using KCharSelect_LeaveEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_PaintEvent_Callback = void (*)(KCharSelect*, QPaintEvent*);
    using KCharSelect_MoveEvent_Callback = void (*)(KCharSelect*, QMoveEvent*);
    using KCharSelect_ResizeEvent_Callback = void (*)(KCharSelect*, QResizeEvent*);
    using KCharSelect_CloseEvent_Callback = void (*)(KCharSelect*, QCloseEvent*);
    using KCharSelect_ContextMenuEvent_Callback = void (*)(KCharSelect*, QContextMenuEvent*);
    using KCharSelect_TabletEvent_Callback = void (*)(KCharSelect*, QTabletEvent*);
    using KCharSelect_ActionEvent_Callback = void (*)(KCharSelect*, QActionEvent*);
    using KCharSelect_DragEnterEvent_Callback = void (*)(KCharSelect*, QDragEnterEvent*);
    using KCharSelect_DragMoveEvent_Callback = void (*)(KCharSelect*, QDragMoveEvent*);
    using KCharSelect_DragLeaveEvent_Callback = void (*)(KCharSelect*, QDragLeaveEvent*);
    using KCharSelect_DropEvent_Callback = void (*)(KCharSelect*, QDropEvent*);
    using KCharSelect_ShowEvent_Callback = void (*)(KCharSelect*, QShowEvent*);
    using KCharSelect_HideEvent_Callback = void (*)(KCharSelect*, QHideEvent*);
    using KCharSelect_NativeEvent_Callback = bool (*)(KCharSelect*, libqt_string, void*, intptr_t*);
    using KCharSelect_ChangeEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_Metric_Callback = int (*)(const KCharSelect*, int);
    using KCharSelect_InitPainter_Callback = void (*)(const KCharSelect*, QPainter*);
    using KCharSelect_Redirected_Callback = QPaintDevice* (*)(const KCharSelect*, QPoint*);
    using KCharSelect_SharedPainter_Callback = QPainter* (*)(const KCharSelect*);
    using KCharSelect_InputMethodEvent_Callback = void (*)(KCharSelect*, QInputMethodEvent*);
    using KCharSelect_InputMethodQuery_Callback = QVariant* (*)(const KCharSelect*, int);
    using KCharSelect_FocusNextPrevChild_Callback = bool (*)(KCharSelect*, bool);
    using KCharSelect_EventFilter_Callback = bool (*)(KCharSelect*, QObject*, QEvent*);
    using KCharSelect_TimerEvent_Callback = void (*)(KCharSelect*, QTimerEvent*);
    using KCharSelect_ChildEvent_Callback = void (*)(KCharSelect*, QChildEvent*);
    using KCharSelect_CustomEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_ConnectNotify_Callback = void (*)(KCharSelect*, QMetaMethod*);
    using KCharSelect_DisconnectNotify_Callback = void (*)(KCharSelect*, QMetaMethod*);
    using KCharSelect::create;
    using KCharSelect::destroy;
    using KCharSelect::focusNextChild;
    using KCharSelect::focusPreviousChild;
    using KCharSelect::getDecodedMetricF;
    using KCharSelect::isSignalConnected;
    using KCharSelect::receivers;
    using KCharSelect::sender;
    using KCharSelect::senderSignalIndex;
    using KCharSelect::updateMicroFocus;

    // Instance callback storage
    KCharSelect_MetaObject_Callback kcharselect_metaobject_callback = nullptr;
    KCharSelect_Metacast_Callback kcharselect_metacast_callback = nullptr;
    KCharSelect_Metacall_Callback kcharselect_metacall_callback = nullptr;
    KCharSelect_SizeHint_Callback kcharselect_sizehint_callback = nullptr;
    KCharSelect_DevType_Callback kcharselect_devtype_callback = nullptr;
    KCharSelect_SetVisible_Callback kcharselect_setvisible_callback = nullptr;
    KCharSelect_MinimumSizeHint_Callback kcharselect_minimumsizehint_callback = nullptr;
    KCharSelect_HeightForWidth_Callback kcharselect_heightforwidth_callback = nullptr;
    KCharSelect_HasHeightForWidth_Callback kcharselect_hasheightforwidth_callback = nullptr;
    KCharSelect_PaintEngine_Callback kcharselect_paintengine_callback = nullptr;
    KCharSelect_Event_Callback kcharselect_event_callback = nullptr;
    KCharSelect_MousePressEvent_Callback kcharselect_mousepressevent_callback = nullptr;
    KCharSelect_MouseReleaseEvent_Callback kcharselect_mousereleaseevent_callback = nullptr;
    KCharSelect_MouseDoubleClickEvent_Callback kcharselect_mousedoubleclickevent_callback = nullptr;
    KCharSelect_MouseMoveEvent_Callback kcharselect_mousemoveevent_callback = nullptr;
    KCharSelect_WheelEvent_Callback kcharselect_wheelevent_callback = nullptr;
    KCharSelect_KeyPressEvent_Callback kcharselect_keypressevent_callback = nullptr;
    KCharSelect_KeyReleaseEvent_Callback kcharselect_keyreleaseevent_callback = nullptr;
    KCharSelect_FocusInEvent_Callback kcharselect_focusinevent_callback = nullptr;
    KCharSelect_FocusOutEvent_Callback kcharselect_focusoutevent_callback = nullptr;
    KCharSelect_EnterEvent_Callback kcharselect_enterevent_callback = nullptr;
    KCharSelect_LeaveEvent_Callback kcharselect_leaveevent_callback = nullptr;
    KCharSelect_PaintEvent_Callback kcharselect_paintevent_callback = nullptr;
    KCharSelect_MoveEvent_Callback kcharselect_moveevent_callback = nullptr;
    KCharSelect_ResizeEvent_Callback kcharselect_resizeevent_callback = nullptr;
    KCharSelect_CloseEvent_Callback kcharselect_closeevent_callback = nullptr;
    KCharSelect_ContextMenuEvent_Callback kcharselect_contextmenuevent_callback = nullptr;
    KCharSelect_TabletEvent_Callback kcharselect_tabletevent_callback = nullptr;
    KCharSelect_ActionEvent_Callback kcharselect_actionevent_callback = nullptr;
    KCharSelect_DragEnterEvent_Callback kcharselect_dragenterevent_callback = nullptr;
    KCharSelect_DragMoveEvent_Callback kcharselect_dragmoveevent_callback = nullptr;
    KCharSelect_DragLeaveEvent_Callback kcharselect_dragleaveevent_callback = nullptr;
    KCharSelect_DropEvent_Callback kcharselect_dropevent_callback = nullptr;
    KCharSelect_ShowEvent_Callback kcharselect_showevent_callback = nullptr;
    KCharSelect_HideEvent_Callback kcharselect_hideevent_callback = nullptr;
    KCharSelect_NativeEvent_Callback kcharselect_nativeevent_callback = nullptr;
    KCharSelect_ChangeEvent_Callback kcharselect_changeevent_callback = nullptr;
    KCharSelect_Metric_Callback kcharselect_metric_callback = nullptr;
    KCharSelect_InitPainter_Callback kcharselect_initpainter_callback = nullptr;
    KCharSelect_Redirected_Callback kcharselect_redirected_callback = nullptr;
    KCharSelect_SharedPainter_Callback kcharselect_sharedpainter_callback = nullptr;
    KCharSelect_InputMethodEvent_Callback kcharselect_inputmethodevent_callback = nullptr;
    KCharSelect_InputMethodQuery_Callback kcharselect_inputmethodquery_callback = nullptr;
    KCharSelect_FocusNextPrevChild_Callback kcharselect_focusnextprevchild_callback = nullptr;
    KCharSelect_EventFilter_Callback kcharselect_eventfilter_callback = nullptr;
    KCharSelect_TimerEvent_Callback kcharselect_timerevent_callback = nullptr;
    KCharSelect_ChildEvent_Callback kcharselect_childevent_callback = nullptr;
    KCharSelect_CustomEvent_Callback kcharselect_customevent_callback = nullptr;
    KCharSelect_ConnectNotify_Callback kcharselect_connectnotify_callback = nullptr;
    KCharSelect_DisconnectNotify_Callback kcharselect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCharSelect {
        using KCharSelect::actionEvent;
        using KCharSelect::changeEvent;
        using KCharSelect::childEvent;
        using KCharSelect::closeEvent;
        using KCharSelect::connectNotify;
        using KCharSelect::contextMenuEvent;
        using KCharSelect::customEvent;
        using KCharSelect::disconnectNotify;
        using KCharSelect::dragEnterEvent;
        using KCharSelect::dragLeaveEvent;
        using KCharSelect::dragMoveEvent;
        using KCharSelect::dropEvent;
        using KCharSelect::enterEvent;
        using KCharSelect::event;
        using KCharSelect::focusInEvent;
        using KCharSelect::focusNextPrevChild;
        using KCharSelect::focusOutEvent;
        using KCharSelect::hideEvent;
        using KCharSelect::initPainter;
        using KCharSelect::inputMethodEvent;
        using KCharSelect::keyPressEvent;
        using KCharSelect::keyReleaseEvent;
        using KCharSelect::leaveEvent;
        using KCharSelect::metric;
        using KCharSelect::mouseDoubleClickEvent;
        using KCharSelect::mouseMoveEvent;
        using KCharSelect::mousePressEvent;
        using KCharSelect::mouseReleaseEvent;
        using KCharSelect::moveEvent;
        using KCharSelect::nativeEvent;
        using KCharSelect::paintEvent;
        using KCharSelect::redirected;
        using KCharSelect::resizeEvent;
        using KCharSelect::sharedPainter;
        using KCharSelect::showEvent;
        using KCharSelect::tabletEvent;
        using KCharSelect::timerEvent;
        using KCharSelect::wheelEvent;
    };

    VirtualKCharSelect(QWidget* parent) : KCharSelect(parent) {};
    VirtualKCharSelect(QWidget* parent, QObject* actionParent) : KCharSelect(parent, actionParent) {};
    VirtualKCharSelect(QWidget* parent, const KCharSelect::Controls controls) : KCharSelect(parent, controls) {};
    VirtualKCharSelect(QWidget* parent, QObject* actionParent, const KCharSelect::Controls controls) : KCharSelect(parent, actionParent, controls) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcharselect_metaobject_callback) {
            QMetaObject* callback_ret = kcharselect_metaobject_callback(this);
            return callback_ret;
        }
        return KCharSelect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcharselect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcharselect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCharSelect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcharselect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcharselect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCharSelect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcharselect_sizehint_callback) {
            QSize* callback_ret = kcharselect_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCharSelect::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcharselect_devtype_callback) {
            int callback_ret = kcharselect_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCharSelect::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcharselect_setvisible_callback) {
            bool cbval1 = visible;
            kcharselect_setvisible_callback(this, cbval1);
            return;
        }
        KCharSelect::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcharselect_minimumsizehint_callback) {
            QSize* callback_ret = kcharselect_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCharSelect::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcharselect_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcharselect_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCharSelect::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcharselect_hasheightforwidth_callback) {
            bool callback_ret = kcharselect_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCharSelect::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcharselect_paintengine_callback) {
            QPaintEngine* callback_ret = kcharselect_paintengine_callback(this);
            return callback_ret;
        }
        return KCharSelect::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcharselect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcharselect_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCharSelect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcharselect_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kcharselect_mousepressevent_callback(this, cbval1);
            return;
        }
        KCharSelect::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcharselect_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kcharselect_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCharSelect::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcharselect_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcharselect_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCharSelect::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcharselect_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcharselect_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCharSelect::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcharselect_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcharselect_wheelevent_callback(this, cbval1);
            return;
        }
        KCharSelect::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcharselect_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kcharselect_keypressevent_callback(this, cbval1);
            return;
        }
        KCharSelect::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcharselect_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcharselect_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCharSelect::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcharselect_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcharselect_focusinevent_callback(this, cbval1);
            return;
        }
        KCharSelect::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcharselect_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcharselect_focusoutevent_callback(this, cbval1);
            return;
        }
        KCharSelect::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcharselect_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcharselect_enterevent_callback(this, cbval1);
            return;
        }
        KCharSelect::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcharselect_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcharselect_leaveevent_callback(this, cbval1);
            return;
        }
        KCharSelect::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcharselect_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kcharselect_paintevent_callback(this, cbval1);
            return;
        }
        KCharSelect::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcharselect_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcharselect_moveevent_callback(this, cbval1);
            return;
        }
        KCharSelect::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcharselect_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcharselect_resizeevent_callback(this, cbval1);
            return;
        }
        KCharSelect::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcharselect_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcharselect_closeevent_callback(this, cbval1);
            return;
        }
        KCharSelect::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcharselect_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcharselect_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCharSelect::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcharselect_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcharselect_tabletevent_callback(this, cbval1);
            return;
        }
        KCharSelect::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcharselect_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcharselect_actionevent_callback(this, cbval1);
            return;
        }
        KCharSelect::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcharselect_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcharselect_dragenterevent_callback(this, cbval1);
            return;
        }
        KCharSelect::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcharselect_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcharselect_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCharSelect::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcharselect_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcharselect_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCharSelect::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcharselect_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcharselect_dropevent_callback(this, cbval1);
            return;
        }
        KCharSelect::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcharselect_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcharselect_showevent_callback(this, cbval1);
            return;
        }
        KCharSelect::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcharselect_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcharselect_hideevent_callback(this, cbval1);
            return;
        }
        KCharSelect::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcharselect_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcharselect_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCharSelect::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcharselect_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcharselect_changeevent_callback(this, cbval1);
            return;
        }
        KCharSelect::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcharselect_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcharselect_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCharSelect::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcharselect_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcharselect_initpainter_callback(this, cbval1);
            return;
        }
        KCharSelect::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcharselect_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcharselect_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCharSelect::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcharselect_sharedpainter_callback) {
            QPainter* callback_ret = kcharselect_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCharSelect::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcharselect_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcharselect_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCharSelect::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcharselect_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcharselect_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCharSelect::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcharselect_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcharselect_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCharSelect::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcharselect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcharselect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCharSelect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcharselect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcharselect_timerevent_callback(this, cbval1);
            return;
        }
        KCharSelect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcharselect_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcharselect_childevent_callback(this, cbval1);
            return;
        }
        KCharSelect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcharselect_customevent_callback) {
            QEvent* cbval1 = event;
            kcharselect_customevent_callback(this, cbval1);
            return;
        }
        KCharSelect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcharselect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcharselect_connectnotify_callback(this, cbval1);
            return;
        }
        KCharSelect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcharselect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcharselect_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCharSelect::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCharSelect_SuperEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_SuperMousePressEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_SuperMouseReleaseEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_SuperMouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_SuperMouseMoveEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_SuperWheelEvent(KCharSelect* self, QWheelEvent* event);
    friend void KCharSelect_SuperKeyPressEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_SuperKeyReleaseEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_SuperFocusInEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_SuperFocusOutEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_SuperEnterEvent(KCharSelect* self, QEnterEvent* event);
    friend void KCharSelect_SuperLeaveEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_SuperPaintEvent(KCharSelect* self, QPaintEvent* event);
    friend void KCharSelect_SuperMoveEvent(KCharSelect* self, QMoveEvent* event);
    friend void KCharSelect_SuperResizeEvent(KCharSelect* self, QResizeEvent* event);
    friend void KCharSelect_SuperCloseEvent(KCharSelect* self, QCloseEvent* event);
    friend void KCharSelect_SuperContextMenuEvent(KCharSelect* self, QContextMenuEvent* event);
    friend void KCharSelect_SuperTabletEvent(KCharSelect* self, QTabletEvent* event);
    friend void KCharSelect_SuperActionEvent(KCharSelect* self, QActionEvent* event);
    friend void KCharSelect_SuperDragEnterEvent(KCharSelect* self, QDragEnterEvent* event);
    friend void KCharSelect_SuperDragMoveEvent(KCharSelect* self, QDragMoveEvent* event);
    friend void KCharSelect_SuperDragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event);
    friend void KCharSelect_SuperDropEvent(KCharSelect* self, QDropEvent* event);
    friend void KCharSelect_SuperShowEvent(KCharSelect* self, QShowEvent* event);
    friend void KCharSelect_SuperHideEvent(KCharSelect* self, QHideEvent* event);
    friend bool KCharSelect_SuperNativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KCharSelect_SuperChangeEvent(KCharSelect* self, QEvent* param1);
    friend int KCharSelect_SuperMetric(const KCharSelect* self, int param1);
    friend void KCharSelect_SuperInitPainter(const KCharSelect* self, QPainter* painter);
    friend QPaintDevice* KCharSelect_SuperRedirected(const KCharSelect* self, QPoint* offset);
    friend QPainter* KCharSelect_SuperSharedPainter(const KCharSelect* self);
    friend void KCharSelect_SuperInputMethodEvent(KCharSelect* self, QInputMethodEvent* param1);
    friend bool KCharSelect_SuperFocusNextPrevChild(KCharSelect* self, bool next);
    friend void KCharSelect_SuperTimerEvent(KCharSelect* self, QTimerEvent* event);
    friend void KCharSelect_SuperChildEvent(KCharSelect* self, QChildEvent* event);
    friend void KCharSelect_SuperCustomEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_SuperConnectNotify(KCharSelect* self, const QMetaMethod* signal);
    friend void KCharSelect_SuperDisconnectNotify(KCharSelect* self, const QMetaMethod* signal);
};

#endif
