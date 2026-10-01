#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKACTIONSELECTOR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKACTIONSELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionSelector
class VirtualKActionSelector final : public KActionSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using KActionSelector_MetaObject_Callback = QMetaObject* (*)(const KActionSelector*);
    using KActionSelector_Metacast_Callback = void* (*)(KActionSelector*, const char*);
    using KActionSelector_Metacall_Callback = int (*)(KActionSelector*, int, int, void**);
    using KActionSelector_KeyPressEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_EventFilter_Callback = bool (*)(KActionSelector*, QObject*, QEvent*);
    using KActionSelector_DevType_Callback = int (*)(const KActionSelector*);
    using KActionSelector_SetVisible_Callback = void (*)(KActionSelector*, bool);
    using KActionSelector_SizeHint_Callback = QSize* (*)(const KActionSelector*);
    using KActionSelector_MinimumSizeHint_Callback = QSize* (*)(const KActionSelector*);
    using KActionSelector_HeightForWidth_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_HasHeightForWidth_Callback = bool (*)(const KActionSelector*);
    using KActionSelector_PaintEngine_Callback = QPaintEngine* (*)(const KActionSelector*);
    using KActionSelector_Event_Callback = bool (*)(KActionSelector*, QEvent*);
    using KActionSelector_MousePressEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseReleaseEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseDoubleClickEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseMoveEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_WheelEvent_Callback = void (*)(KActionSelector*, QWheelEvent*);
    using KActionSelector_KeyReleaseEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_FocusInEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_FocusOutEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_EnterEvent_Callback = void (*)(KActionSelector*, QEnterEvent*);
    using KActionSelector_LeaveEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_PaintEvent_Callback = void (*)(KActionSelector*, QPaintEvent*);
    using KActionSelector_MoveEvent_Callback = void (*)(KActionSelector*, QMoveEvent*);
    using KActionSelector_ResizeEvent_Callback = void (*)(KActionSelector*, QResizeEvent*);
    using KActionSelector_CloseEvent_Callback = void (*)(KActionSelector*, QCloseEvent*);
    using KActionSelector_ContextMenuEvent_Callback = void (*)(KActionSelector*, QContextMenuEvent*);
    using KActionSelector_TabletEvent_Callback = void (*)(KActionSelector*, QTabletEvent*);
    using KActionSelector_ActionEvent_Callback = void (*)(KActionSelector*, QActionEvent*);
    using KActionSelector_DragEnterEvent_Callback = void (*)(KActionSelector*, QDragEnterEvent*);
    using KActionSelector_DragMoveEvent_Callback = void (*)(KActionSelector*, QDragMoveEvent*);
    using KActionSelector_DragLeaveEvent_Callback = void (*)(KActionSelector*, QDragLeaveEvent*);
    using KActionSelector_DropEvent_Callback = void (*)(KActionSelector*, QDropEvent*);
    using KActionSelector_ShowEvent_Callback = void (*)(KActionSelector*, QShowEvent*);
    using KActionSelector_HideEvent_Callback = void (*)(KActionSelector*, QHideEvent*);
    using KActionSelector_NativeEvent_Callback = bool (*)(KActionSelector*, libqt_string, void*, intptr_t*);
    using KActionSelector_ChangeEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_Metric_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_InitPainter_Callback = void (*)(const KActionSelector*, QPainter*);
    using KActionSelector_Redirected_Callback = QPaintDevice* (*)(const KActionSelector*, QPoint*);
    using KActionSelector_SharedPainter_Callback = QPainter* (*)(const KActionSelector*);
    using KActionSelector_InputMethodEvent_Callback = void (*)(KActionSelector*, QInputMethodEvent*);
    using KActionSelector_InputMethodQuery_Callback = QVariant* (*)(const KActionSelector*, int);
    using KActionSelector_FocusNextPrevChild_Callback = bool (*)(KActionSelector*, bool);
    using KActionSelector_TimerEvent_Callback = void (*)(KActionSelector*, QTimerEvent*);
    using KActionSelector_ChildEvent_Callback = void (*)(KActionSelector*, QChildEvent*);
    using KActionSelector_CustomEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_ConnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector_DisconnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector::create;
    using KActionSelector::destroy;
    using KActionSelector::focusNextChild;
    using KActionSelector::focusPreviousChild;
    using KActionSelector::getDecodedMetricF;
    using KActionSelector::isSignalConnected;
    using KActionSelector::receivers;
    using KActionSelector::sender;
    using KActionSelector::senderSignalIndex;
    using KActionSelector::updateMicroFocus;

    // Instance callback storage
    KActionSelector_MetaObject_Callback kactionselector_metaobject_callback = nullptr;
    KActionSelector_Metacast_Callback kactionselector_metacast_callback = nullptr;
    KActionSelector_Metacall_Callback kactionselector_metacall_callback = nullptr;
    KActionSelector_KeyPressEvent_Callback kactionselector_keypressevent_callback = nullptr;
    KActionSelector_EventFilter_Callback kactionselector_eventfilter_callback = nullptr;
    KActionSelector_DevType_Callback kactionselector_devtype_callback = nullptr;
    KActionSelector_SetVisible_Callback kactionselector_setvisible_callback = nullptr;
    KActionSelector_SizeHint_Callback kactionselector_sizehint_callback = nullptr;
    KActionSelector_MinimumSizeHint_Callback kactionselector_minimumsizehint_callback = nullptr;
    KActionSelector_HeightForWidth_Callback kactionselector_heightforwidth_callback = nullptr;
    KActionSelector_HasHeightForWidth_Callback kactionselector_hasheightforwidth_callback = nullptr;
    KActionSelector_PaintEngine_Callback kactionselector_paintengine_callback = nullptr;
    KActionSelector_Event_Callback kactionselector_event_callback = nullptr;
    KActionSelector_MousePressEvent_Callback kactionselector_mousepressevent_callback = nullptr;
    KActionSelector_MouseReleaseEvent_Callback kactionselector_mousereleaseevent_callback = nullptr;
    KActionSelector_MouseDoubleClickEvent_Callback kactionselector_mousedoubleclickevent_callback = nullptr;
    KActionSelector_MouseMoveEvent_Callback kactionselector_mousemoveevent_callback = nullptr;
    KActionSelector_WheelEvent_Callback kactionselector_wheelevent_callback = nullptr;
    KActionSelector_KeyReleaseEvent_Callback kactionselector_keyreleaseevent_callback = nullptr;
    KActionSelector_FocusInEvent_Callback kactionselector_focusinevent_callback = nullptr;
    KActionSelector_FocusOutEvent_Callback kactionselector_focusoutevent_callback = nullptr;
    KActionSelector_EnterEvent_Callback kactionselector_enterevent_callback = nullptr;
    KActionSelector_LeaveEvent_Callback kactionselector_leaveevent_callback = nullptr;
    KActionSelector_PaintEvent_Callback kactionselector_paintevent_callback = nullptr;
    KActionSelector_MoveEvent_Callback kactionselector_moveevent_callback = nullptr;
    KActionSelector_ResizeEvent_Callback kactionselector_resizeevent_callback = nullptr;
    KActionSelector_CloseEvent_Callback kactionselector_closeevent_callback = nullptr;
    KActionSelector_ContextMenuEvent_Callback kactionselector_contextmenuevent_callback = nullptr;
    KActionSelector_TabletEvent_Callback kactionselector_tabletevent_callback = nullptr;
    KActionSelector_ActionEvent_Callback kactionselector_actionevent_callback = nullptr;
    KActionSelector_DragEnterEvent_Callback kactionselector_dragenterevent_callback = nullptr;
    KActionSelector_DragMoveEvent_Callback kactionselector_dragmoveevent_callback = nullptr;
    KActionSelector_DragLeaveEvent_Callback kactionselector_dragleaveevent_callback = nullptr;
    KActionSelector_DropEvent_Callback kactionselector_dropevent_callback = nullptr;
    KActionSelector_ShowEvent_Callback kactionselector_showevent_callback = nullptr;
    KActionSelector_HideEvent_Callback kactionselector_hideevent_callback = nullptr;
    KActionSelector_NativeEvent_Callback kactionselector_nativeevent_callback = nullptr;
    KActionSelector_ChangeEvent_Callback kactionselector_changeevent_callback = nullptr;
    KActionSelector_Metric_Callback kactionselector_metric_callback = nullptr;
    KActionSelector_InitPainter_Callback kactionselector_initpainter_callback = nullptr;
    KActionSelector_Redirected_Callback kactionselector_redirected_callback = nullptr;
    KActionSelector_SharedPainter_Callback kactionselector_sharedpainter_callback = nullptr;
    KActionSelector_InputMethodEvent_Callback kactionselector_inputmethodevent_callback = nullptr;
    KActionSelector_InputMethodQuery_Callback kactionselector_inputmethodquery_callback = nullptr;
    KActionSelector_FocusNextPrevChild_Callback kactionselector_focusnextprevchild_callback = nullptr;
    KActionSelector_TimerEvent_Callback kactionselector_timerevent_callback = nullptr;
    KActionSelector_ChildEvent_Callback kactionselector_childevent_callback = nullptr;
    KActionSelector_CustomEvent_Callback kactionselector_customevent_callback = nullptr;
    KActionSelector_ConnectNotify_Callback kactionselector_connectnotify_callback = nullptr;
    KActionSelector_DisconnectNotify_Callback kactionselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KActionSelector {
        using KActionSelector::actionEvent;
        using KActionSelector::changeEvent;
        using KActionSelector::childEvent;
        using KActionSelector::closeEvent;
        using KActionSelector::connectNotify;
        using KActionSelector::contextMenuEvent;
        using KActionSelector::customEvent;
        using KActionSelector::disconnectNotify;
        using KActionSelector::dragEnterEvent;
        using KActionSelector::dragLeaveEvent;
        using KActionSelector::dragMoveEvent;
        using KActionSelector::dropEvent;
        using KActionSelector::enterEvent;
        using KActionSelector::event;
        using KActionSelector::eventFilter;
        using KActionSelector::focusInEvent;
        using KActionSelector::focusNextPrevChild;
        using KActionSelector::focusOutEvent;
        using KActionSelector::hideEvent;
        using KActionSelector::initPainter;
        using KActionSelector::inputMethodEvent;
        using KActionSelector::keyPressEvent;
        using KActionSelector::keyReleaseEvent;
        using KActionSelector::leaveEvent;
        using KActionSelector::metric;
        using KActionSelector::mouseDoubleClickEvent;
        using KActionSelector::mouseMoveEvent;
        using KActionSelector::mousePressEvent;
        using KActionSelector::mouseReleaseEvent;
        using KActionSelector::moveEvent;
        using KActionSelector::nativeEvent;
        using KActionSelector::paintEvent;
        using KActionSelector::redirected;
        using KActionSelector::resizeEvent;
        using KActionSelector::sharedPainter;
        using KActionSelector::showEvent;
        using KActionSelector::tabletEvent;
        using KActionSelector::timerEvent;
        using KActionSelector::wheelEvent;
    };

    VirtualKActionSelector(QWidget* parent) : KActionSelector(parent) {};
    VirtualKActionSelector() : KActionSelector() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactionselector_metaobject_callback) {
            QMetaObject* callback_ret = kactionselector_metaobject_callback(this);
            return callback_ret;
        }
        return KActionSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactionselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kactionselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kactionselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kactionselector_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kactionselector_keypressevent_callback(this, cbval1);
            return;
        }
        KActionSelector::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionselector_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kactionselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionSelector::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kactionselector_devtype_callback) {
            int callback_ret = kactionselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kactionselector_setvisible_callback) {
            bool cbval1 = visible;
            kactionselector_setvisible_callback(this, cbval1);
            return;
        }
        KActionSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kactionselector_sizehint_callback) {
            QSize* callback_ret = kactionselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KActionSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kactionselector_minimumsizehint_callback) {
            QSize* callback_ret = kactionselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KActionSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kactionselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kactionselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kactionselector_hasheightforwidth_callback) {
            bool callback_ret = kactionselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KActionSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kactionselector_paintengine_callback) {
            QPaintEngine* callback_ret = kactionselector_paintengine_callback(this);
            return callback_ret;
        }
        return KActionSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactionselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kactionselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kactionselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kactionselector_mousepressevent_callback(this, cbval1);
            return;
        }
        KActionSelector::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kactionselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kactionselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KActionSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kactionselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kactionselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KActionSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kactionselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kactionselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        KActionSelector::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kactionselector_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kactionselector_wheelevent_callback(this, cbval1);
            return;
        }
        KActionSelector::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kactionselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kactionselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KActionSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kactionselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kactionselector_focusinevent_callback(this, cbval1);
            return;
        }
        KActionSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kactionselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kactionselector_focusoutevent_callback(this, cbval1);
            return;
        }
        KActionSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kactionselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kactionselector_enterevent_callback(this, cbval1);
            return;
        }
        KActionSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kactionselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            kactionselector_leaveevent_callback(this, cbval1);
            return;
        }
        KActionSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kactionselector_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kactionselector_paintevent_callback(this, cbval1);
            return;
        }
        KActionSelector::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kactionselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kactionselector_moveevent_callback(this, cbval1);
            return;
        }
        KActionSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kactionselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kactionselector_resizeevent_callback(this, cbval1);
            return;
        }
        KActionSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kactionselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kactionselector_closeevent_callback(this, cbval1);
            return;
        }
        KActionSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kactionselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kactionselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        KActionSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kactionselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kactionselector_tabletevent_callback(this, cbval1);
            return;
        }
        KActionSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kactionselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kactionselector_actionevent_callback(this, cbval1);
            return;
        }
        KActionSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kactionselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kactionselector_dragenterevent_callback(this, cbval1);
            return;
        }
        KActionSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kactionselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kactionselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        KActionSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kactionselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kactionselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        KActionSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kactionselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kactionselector_dropevent_callback(this, cbval1);
            return;
        }
        KActionSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kactionselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            kactionselector_showevent_callback(this, cbval1);
            return;
        }
        KActionSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kactionselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kactionselector_hideevent_callback(this, cbval1);
            return;
        }
        KActionSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kactionselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kactionselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KActionSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kactionselector_changeevent_callback) {
            QEvent* cbval1 = param1;
            kactionselector_changeevent_callback(this, cbval1);
            return;
        }
        KActionSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kactionselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kactionselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kactionselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            kactionselector_initpainter_callback(this, cbval1);
            return;
        }
        KActionSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kactionselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kactionselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kactionselector_sharedpainter_callback) {
            QPainter* callback_ret = kactionselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return KActionSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kactionselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kactionselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        KActionSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kactionselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kactionselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KActionSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kactionselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kactionselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kactionselector_timerevent_callback(this, cbval1);
            return;
        }
        KActionSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            kactionselector_childevent_callback(this, cbval1);
            return;
        }
        KActionSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionselector_customevent_callback) {
            QEvent* cbval1 = event;
            kactionselector_customevent_callback(this, cbval1);
            return;
        }
        KActionSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactionselector_connectnotify_callback(this, cbval1);
            return;
        }
        KActionSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactionselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        KActionSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void KActionSelector_SuperKeyPressEvent(KActionSelector* self, QKeyEvent* param1);
    friend bool KActionSelector_SuperEventFilter(KActionSelector* self, QObject* param1, QEvent* param2);
    friend bool KActionSelector_SuperEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_SuperMousePressEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseReleaseEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseMoveEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperWheelEvent(KActionSelector* self, QWheelEvent* event);
    friend void KActionSelector_SuperKeyReleaseEvent(KActionSelector* self, QKeyEvent* event);
    friend void KActionSelector_SuperFocusInEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_SuperFocusOutEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_SuperEnterEvent(KActionSelector* self, QEnterEvent* event);
    friend void KActionSelector_SuperLeaveEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_SuperPaintEvent(KActionSelector* self, QPaintEvent* event);
    friend void KActionSelector_SuperMoveEvent(KActionSelector* self, QMoveEvent* event);
    friend void KActionSelector_SuperResizeEvent(KActionSelector* self, QResizeEvent* event);
    friend void KActionSelector_SuperCloseEvent(KActionSelector* self, QCloseEvent* event);
    friend void KActionSelector_SuperContextMenuEvent(KActionSelector* self, QContextMenuEvent* event);
    friend void KActionSelector_SuperTabletEvent(KActionSelector* self, QTabletEvent* event);
    friend void KActionSelector_SuperActionEvent(KActionSelector* self, QActionEvent* event);
    friend void KActionSelector_SuperDragEnterEvent(KActionSelector* self, QDragEnterEvent* event);
    friend void KActionSelector_SuperDragMoveEvent(KActionSelector* self, QDragMoveEvent* event);
    friend void KActionSelector_SuperDragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event);
    friend void KActionSelector_SuperDropEvent(KActionSelector* self, QDropEvent* event);
    friend void KActionSelector_SuperShowEvent(KActionSelector* self, QShowEvent* event);
    friend void KActionSelector_SuperHideEvent(KActionSelector* self, QHideEvent* event);
    friend bool KActionSelector_SuperNativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KActionSelector_SuperChangeEvent(KActionSelector* self, QEvent* param1);
    friend int KActionSelector_SuperMetric(const KActionSelector* self, int param1);
    friend void KActionSelector_SuperInitPainter(const KActionSelector* self, QPainter* painter);
    friend QPaintDevice* KActionSelector_SuperRedirected(const KActionSelector* self, QPoint* offset);
    friend QPainter* KActionSelector_SuperSharedPainter(const KActionSelector* self);
    friend void KActionSelector_SuperInputMethodEvent(KActionSelector* self, QInputMethodEvent* param1);
    friend bool KActionSelector_SuperFocusNextPrevChild(KActionSelector* self, bool next);
    friend void KActionSelector_SuperTimerEvent(KActionSelector* self, QTimerEvent* event);
    friend void KActionSelector_SuperChildEvent(KActionSelector* self, QChildEvent* event);
    friend void KActionSelector_SuperCustomEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_SuperConnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_SuperDisconnectNotify(KActionSelector* self, const QMetaMethod* signal);
};

#endif
