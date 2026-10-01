#pragma once
#ifndef LIBQSTATUSBAR_HXX
#define LIBQSTATUSBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStatusBar
class VirtualQStatusBar final : public QStatusBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStatusBar_MetaObject_Callback = QMetaObject* (*)(const QStatusBar*);
    using QStatusBar_Metacast_Callback = void* (*)(QStatusBar*, const char*);
    using QStatusBar_Metacall_Callback = int (*)(QStatusBar*, int, int, void**);
    using QStatusBar_ShowEvent_Callback = void (*)(QStatusBar*, QShowEvent*);
    using QStatusBar_PaintEvent_Callback = void (*)(QStatusBar*, QPaintEvent*);
    using QStatusBar_ResizeEvent_Callback = void (*)(QStatusBar*, QResizeEvent*);
    using QStatusBar_Event_Callback = bool (*)(QStatusBar*, QEvent*);
    using QStatusBar_DevType_Callback = int (*)(const QStatusBar*);
    using QStatusBar_SetVisible_Callback = void (*)(QStatusBar*, bool);
    using QStatusBar_SizeHint_Callback = QSize* (*)(const QStatusBar*);
    using QStatusBar_MinimumSizeHint_Callback = QSize* (*)(const QStatusBar*);
    using QStatusBar_HeightForWidth_Callback = int (*)(const QStatusBar*, int);
    using QStatusBar_HasHeightForWidth_Callback = bool (*)(const QStatusBar*);
    using QStatusBar_PaintEngine_Callback = QPaintEngine* (*)(const QStatusBar*);
    using QStatusBar_MousePressEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseReleaseEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseDoubleClickEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseMoveEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_WheelEvent_Callback = void (*)(QStatusBar*, QWheelEvent*);
    using QStatusBar_KeyPressEvent_Callback = void (*)(QStatusBar*, QKeyEvent*);
    using QStatusBar_KeyReleaseEvent_Callback = void (*)(QStatusBar*, QKeyEvent*);
    using QStatusBar_FocusInEvent_Callback = void (*)(QStatusBar*, QFocusEvent*);
    using QStatusBar_FocusOutEvent_Callback = void (*)(QStatusBar*, QFocusEvent*);
    using QStatusBar_EnterEvent_Callback = void (*)(QStatusBar*, QEnterEvent*);
    using QStatusBar_LeaveEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_MoveEvent_Callback = void (*)(QStatusBar*, QMoveEvent*);
    using QStatusBar_CloseEvent_Callback = void (*)(QStatusBar*, QCloseEvent*);
    using QStatusBar_ContextMenuEvent_Callback = void (*)(QStatusBar*, QContextMenuEvent*);
    using QStatusBar_TabletEvent_Callback = void (*)(QStatusBar*, QTabletEvent*);
    using QStatusBar_ActionEvent_Callback = void (*)(QStatusBar*, QActionEvent*);
    using QStatusBar_DragEnterEvent_Callback = void (*)(QStatusBar*, QDragEnterEvent*);
    using QStatusBar_DragMoveEvent_Callback = void (*)(QStatusBar*, QDragMoveEvent*);
    using QStatusBar_DragLeaveEvent_Callback = void (*)(QStatusBar*, QDragLeaveEvent*);
    using QStatusBar_DropEvent_Callback = void (*)(QStatusBar*, QDropEvent*);
    using QStatusBar_HideEvent_Callback = void (*)(QStatusBar*, QHideEvent*);
    using QStatusBar_NativeEvent_Callback = bool (*)(QStatusBar*, libqt_string, void*, intptr_t*);
    using QStatusBar_ChangeEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_Metric_Callback = int (*)(const QStatusBar*, int);
    using QStatusBar_InitPainter_Callback = void (*)(const QStatusBar*, QPainter*);
    using QStatusBar_Redirected_Callback = QPaintDevice* (*)(const QStatusBar*, QPoint*);
    using QStatusBar_SharedPainter_Callback = QPainter* (*)(const QStatusBar*);
    using QStatusBar_InputMethodEvent_Callback = void (*)(QStatusBar*, QInputMethodEvent*);
    using QStatusBar_InputMethodQuery_Callback = QVariant* (*)(const QStatusBar*, int);
    using QStatusBar_FocusNextPrevChild_Callback = bool (*)(QStatusBar*, bool);
    using QStatusBar_EventFilter_Callback = bool (*)(QStatusBar*, QObject*, QEvent*);
    using QStatusBar_TimerEvent_Callback = void (*)(QStatusBar*, QTimerEvent*);
    using QStatusBar_ChildEvent_Callback = void (*)(QStatusBar*, QChildEvent*);
    using QStatusBar_CustomEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_ConnectNotify_Callback = void (*)(QStatusBar*, QMetaMethod*);
    using QStatusBar_DisconnectNotify_Callback = void (*)(QStatusBar*, QMetaMethod*);
    using QStatusBar::create;
    using QStatusBar::destroy;
    using QStatusBar::focusNextChild;
    using QStatusBar::focusPreviousChild;
    using QStatusBar::getDecodedMetricF;
    using QStatusBar::hideOrShow;
    using QStatusBar::isSignalConnected;
    using QStatusBar::receivers;
    using QStatusBar::reformat;
    using QStatusBar::sender;
    using QStatusBar::senderSignalIndex;
    using QStatusBar::updateMicroFocus;

    // Instance callback storage
    QStatusBar_MetaObject_Callback qstatusbar_metaobject_callback = nullptr;
    QStatusBar_Metacast_Callback qstatusbar_metacast_callback = nullptr;
    QStatusBar_Metacall_Callback qstatusbar_metacall_callback = nullptr;
    QStatusBar_ShowEvent_Callback qstatusbar_showevent_callback = nullptr;
    QStatusBar_PaintEvent_Callback qstatusbar_paintevent_callback = nullptr;
    QStatusBar_ResizeEvent_Callback qstatusbar_resizeevent_callback = nullptr;
    QStatusBar_Event_Callback qstatusbar_event_callback = nullptr;
    QStatusBar_DevType_Callback qstatusbar_devtype_callback = nullptr;
    QStatusBar_SetVisible_Callback qstatusbar_setvisible_callback = nullptr;
    QStatusBar_SizeHint_Callback qstatusbar_sizehint_callback = nullptr;
    QStatusBar_MinimumSizeHint_Callback qstatusbar_minimumsizehint_callback = nullptr;
    QStatusBar_HeightForWidth_Callback qstatusbar_heightforwidth_callback = nullptr;
    QStatusBar_HasHeightForWidth_Callback qstatusbar_hasheightforwidth_callback = nullptr;
    QStatusBar_PaintEngine_Callback qstatusbar_paintengine_callback = nullptr;
    QStatusBar_MousePressEvent_Callback qstatusbar_mousepressevent_callback = nullptr;
    QStatusBar_MouseReleaseEvent_Callback qstatusbar_mousereleaseevent_callback = nullptr;
    QStatusBar_MouseDoubleClickEvent_Callback qstatusbar_mousedoubleclickevent_callback = nullptr;
    QStatusBar_MouseMoveEvent_Callback qstatusbar_mousemoveevent_callback = nullptr;
    QStatusBar_WheelEvent_Callback qstatusbar_wheelevent_callback = nullptr;
    QStatusBar_KeyPressEvent_Callback qstatusbar_keypressevent_callback = nullptr;
    QStatusBar_KeyReleaseEvent_Callback qstatusbar_keyreleaseevent_callback = nullptr;
    QStatusBar_FocusInEvent_Callback qstatusbar_focusinevent_callback = nullptr;
    QStatusBar_FocusOutEvent_Callback qstatusbar_focusoutevent_callback = nullptr;
    QStatusBar_EnterEvent_Callback qstatusbar_enterevent_callback = nullptr;
    QStatusBar_LeaveEvent_Callback qstatusbar_leaveevent_callback = nullptr;
    QStatusBar_MoveEvent_Callback qstatusbar_moveevent_callback = nullptr;
    QStatusBar_CloseEvent_Callback qstatusbar_closeevent_callback = nullptr;
    QStatusBar_ContextMenuEvent_Callback qstatusbar_contextmenuevent_callback = nullptr;
    QStatusBar_TabletEvent_Callback qstatusbar_tabletevent_callback = nullptr;
    QStatusBar_ActionEvent_Callback qstatusbar_actionevent_callback = nullptr;
    QStatusBar_DragEnterEvent_Callback qstatusbar_dragenterevent_callback = nullptr;
    QStatusBar_DragMoveEvent_Callback qstatusbar_dragmoveevent_callback = nullptr;
    QStatusBar_DragLeaveEvent_Callback qstatusbar_dragleaveevent_callback = nullptr;
    QStatusBar_DropEvent_Callback qstatusbar_dropevent_callback = nullptr;
    QStatusBar_HideEvent_Callback qstatusbar_hideevent_callback = nullptr;
    QStatusBar_NativeEvent_Callback qstatusbar_nativeevent_callback = nullptr;
    QStatusBar_ChangeEvent_Callback qstatusbar_changeevent_callback = nullptr;
    QStatusBar_Metric_Callback qstatusbar_metric_callback = nullptr;
    QStatusBar_InitPainter_Callback qstatusbar_initpainter_callback = nullptr;
    QStatusBar_Redirected_Callback qstatusbar_redirected_callback = nullptr;
    QStatusBar_SharedPainter_Callback qstatusbar_sharedpainter_callback = nullptr;
    QStatusBar_InputMethodEvent_Callback qstatusbar_inputmethodevent_callback = nullptr;
    QStatusBar_InputMethodQuery_Callback qstatusbar_inputmethodquery_callback = nullptr;
    QStatusBar_FocusNextPrevChild_Callback qstatusbar_focusnextprevchild_callback = nullptr;
    QStatusBar_EventFilter_Callback qstatusbar_eventfilter_callback = nullptr;
    QStatusBar_TimerEvent_Callback qstatusbar_timerevent_callback = nullptr;
    QStatusBar_ChildEvent_Callback qstatusbar_childevent_callback = nullptr;
    QStatusBar_CustomEvent_Callback qstatusbar_customevent_callback = nullptr;
    QStatusBar_ConnectNotify_Callback qstatusbar_connectnotify_callback = nullptr;
    QStatusBar_DisconnectNotify_Callback qstatusbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStatusBar {
        using QStatusBar::actionEvent;
        using QStatusBar::changeEvent;
        using QStatusBar::childEvent;
        using QStatusBar::closeEvent;
        using QStatusBar::connectNotify;
        using QStatusBar::contextMenuEvent;
        using QStatusBar::customEvent;
        using QStatusBar::disconnectNotify;
        using QStatusBar::dragEnterEvent;
        using QStatusBar::dragLeaveEvent;
        using QStatusBar::dragMoveEvent;
        using QStatusBar::dropEvent;
        using QStatusBar::enterEvent;
        using QStatusBar::event;
        using QStatusBar::focusInEvent;
        using QStatusBar::focusNextPrevChild;
        using QStatusBar::focusOutEvent;
        using QStatusBar::hideEvent;
        using QStatusBar::initPainter;
        using QStatusBar::inputMethodEvent;
        using QStatusBar::keyPressEvent;
        using QStatusBar::keyReleaseEvent;
        using QStatusBar::leaveEvent;
        using QStatusBar::metric;
        using QStatusBar::mouseDoubleClickEvent;
        using QStatusBar::mouseMoveEvent;
        using QStatusBar::mousePressEvent;
        using QStatusBar::mouseReleaseEvent;
        using QStatusBar::moveEvent;
        using QStatusBar::nativeEvent;
        using QStatusBar::paintEvent;
        using QStatusBar::redirected;
        using QStatusBar::resizeEvent;
        using QStatusBar::sharedPainter;
        using QStatusBar::showEvent;
        using QStatusBar::tabletEvent;
        using QStatusBar::timerEvent;
        using QStatusBar::wheelEvent;
    };

    VirtualQStatusBar(QWidget* parent) : QStatusBar(parent) {};
    VirtualQStatusBar() : QStatusBar() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstatusbar_metaobject_callback) {
            QMetaObject* callback_ret = qstatusbar_metaobject_callback(this);
            return callback_ret;
        }
        return QStatusBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstatusbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstatusbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStatusBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstatusbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstatusbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStatusBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qstatusbar_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qstatusbar_showevent_callback(this, cbval1);
            return;
        }
        QStatusBar::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qstatusbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qstatusbar_paintevent_callback(this, cbval1);
            return;
        }
        QStatusBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qstatusbar_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qstatusbar_resizeevent_callback(this, cbval1);
            return;
        }
        QStatusBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qstatusbar_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qstatusbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStatusBar::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qstatusbar_devtype_callback) {
            int callback_ret = qstatusbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QStatusBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qstatusbar_setvisible_callback) {
            bool cbval1 = visible;
            qstatusbar_setvisible_callback(this, cbval1);
            return;
        }
        QStatusBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstatusbar_sizehint_callback) {
            QSize* callback_ret = qstatusbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStatusBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qstatusbar_minimumsizehint_callback) {
            QSize* callback_ret = qstatusbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStatusBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qstatusbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qstatusbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStatusBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstatusbar_hasheightforwidth_callback) {
            bool callback_ret = qstatusbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QStatusBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qstatusbar_paintengine_callback) {
            QPaintEngine* callback_ret = qstatusbar_paintengine_callback(this);
            return callback_ret;
        }
        return QStatusBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qstatusbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qstatusbar_mousepressevent_callback(this, cbval1);
            return;
        }
        QStatusBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qstatusbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qstatusbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QStatusBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qstatusbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qstatusbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QStatusBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qstatusbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qstatusbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QStatusBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qstatusbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qstatusbar_wheelevent_callback(this, cbval1);
            return;
        }
        QStatusBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qstatusbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qstatusbar_keypressevent_callback(this, cbval1);
            return;
        }
        QStatusBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qstatusbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qstatusbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QStatusBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qstatusbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qstatusbar_focusinevent_callback(this, cbval1);
            return;
        }
        QStatusBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qstatusbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qstatusbar_focusoutevent_callback(this, cbval1);
            return;
        }
        QStatusBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qstatusbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qstatusbar_enterevent_callback(this, cbval1);
            return;
        }
        QStatusBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qstatusbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            qstatusbar_leaveevent_callback(this, cbval1);
            return;
        }
        QStatusBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qstatusbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qstatusbar_moveevent_callback(this, cbval1);
            return;
        }
        QStatusBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qstatusbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qstatusbar_closeevent_callback(this, cbval1);
            return;
        }
        QStatusBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qstatusbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qstatusbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QStatusBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qstatusbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qstatusbar_tabletevent_callback(this, cbval1);
            return;
        }
        QStatusBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qstatusbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qstatusbar_actionevent_callback(this, cbval1);
            return;
        }
        QStatusBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qstatusbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qstatusbar_dragenterevent_callback(this, cbval1);
            return;
        }
        QStatusBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qstatusbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qstatusbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QStatusBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qstatusbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qstatusbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QStatusBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qstatusbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qstatusbar_dropevent_callback(this, cbval1);
            return;
        }
        QStatusBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qstatusbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qstatusbar_hideevent_callback(this, cbval1);
            return;
        }
        QStatusBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qstatusbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qstatusbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QStatusBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qstatusbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            qstatusbar_changeevent_callback(this, cbval1);
            return;
        }
        QStatusBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qstatusbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qstatusbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStatusBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qstatusbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qstatusbar_initpainter_callback(this, cbval1);
            return;
        }
        QStatusBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qstatusbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qstatusbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QStatusBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qstatusbar_sharedpainter_callback) {
            QPainter* callback_ret = qstatusbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QStatusBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qstatusbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qstatusbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QStatusBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qstatusbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qstatusbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStatusBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qstatusbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qstatusbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QStatusBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstatusbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstatusbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStatusBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstatusbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstatusbar_timerevent_callback(this, cbval1);
            return;
        }
        QStatusBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstatusbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstatusbar_childevent_callback(this, cbval1);
            return;
        }
        QStatusBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstatusbar_customevent_callback) {
            QEvent* cbval1 = event;
            qstatusbar_customevent_callback(this, cbval1);
            return;
        }
        QStatusBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstatusbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstatusbar_connectnotify_callback(this, cbval1);
            return;
        }
        QStatusBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstatusbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstatusbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStatusBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStatusBar_SuperShowEvent(QStatusBar* self, QShowEvent* param1);
    friend void QStatusBar_SuperPaintEvent(QStatusBar* self, QPaintEvent* param1);
    friend void QStatusBar_SuperResizeEvent(QStatusBar* self, QResizeEvent* param1);
    friend bool QStatusBar_SuperEvent(QStatusBar* self, QEvent* param1);
    friend void QStatusBar_SuperMousePressEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_SuperMouseReleaseEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_SuperMouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_SuperMouseMoveEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_SuperWheelEvent(QStatusBar* self, QWheelEvent* event);
    friend void QStatusBar_SuperKeyPressEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_SuperKeyReleaseEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_SuperFocusInEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_SuperFocusOutEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_SuperEnterEvent(QStatusBar* self, QEnterEvent* event);
    friend void QStatusBar_SuperLeaveEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_SuperMoveEvent(QStatusBar* self, QMoveEvent* event);
    friend void QStatusBar_SuperCloseEvent(QStatusBar* self, QCloseEvent* event);
    friend void QStatusBar_SuperContextMenuEvent(QStatusBar* self, QContextMenuEvent* event);
    friend void QStatusBar_SuperTabletEvent(QStatusBar* self, QTabletEvent* event);
    friend void QStatusBar_SuperActionEvent(QStatusBar* self, QActionEvent* event);
    friend void QStatusBar_SuperDragEnterEvent(QStatusBar* self, QDragEnterEvent* event);
    friend void QStatusBar_SuperDragMoveEvent(QStatusBar* self, QDragMoveEvent* event);
    friend void QStatusBar_SuperDragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event);
    friend void QStatusBar_SuperDropEvent(QStatusBar* self, QDropEvent* event);
    friend void QStatusBar_SuperHideEvent(QStatusBar* self, QHideEvent* event);
    friend bool QStatusBar_SuperNativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QStatusBar_SuperChangeEvent(QStatusBar* self, QEvent* param1);
    friend int QStatusBar_SuperMetric(const QStatusBar* self, int param1);
    friend void QStatusBar_SuperInitPainter(const QStatusBar* self, QPainter* painter);
    friend QPaintDevice* QStatusBar_SuperRedirected(const QStatusBar* self, QPoint* offset);
    friend QPainter* QStatusBar_SuperSharedPainter(const QStatusBar* self);
    friend void QStatusBar_SuperInputMethodEvent(QStatusBar* self, QInputMethodEvent* param1);
    friend bool QStatusBar_SuperFocusNextPrevChild(QStatusBar* self, bool next);
    friend void QStatusBar_SuperTimerEvent(QStatusBar* self, QTimerEvent* event);
    friend void QStatusBar_SuperChildEvent(QStatusBar* self, QChildEvent* event);
    friend void QStatusBar_SuperCustomEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_SuperConnectNotify(QStatusBar* self, const QMetaMethod* signal);
    friend void QStatusBar_SuperDisconnectNotify(QStatusBar* self, const QMetaMethod* signal);
};

#endif
