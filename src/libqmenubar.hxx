#pragma once
#ifndef LIBQMENUBAR_HXX
#define LIBQMENUBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMenuBar
class VirtualQMenuBar final : public QMenuBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMenuBar_MetaObject_Callback = QMetaObject* (*)(const QMenuBar*);
    using QMenuBar_Metacast_Callback = void* (*)(QMenuBar*, const char*);
    using QMenuBar_Metacall_Callback = int (*)(QMenuBar*, int, int, void**);
    using QMenuBar_SizeHint_Callback = QSize* (*)(const QMenuBar*);
    using QMenuBar_MinimumSizeHint_Callback = QSize* (*)(const QMenuBar*);
    using QMenuBar_HeightForWidth_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_SetVisible_Callback = void (*)(QMenuBar*, bool);
    using QMenuBar_ChangeEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_KeyPressEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_MouseReleaseEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MousePressEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MouseMoveEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_LeaveEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_PaintEvent_Callback = void (*)(QMenuBar*, QPaintEvent*);
    using QMenuBar_ResizeEvent_Callback = void (*)(QMenuBar*, QResizeEvent*);
    using QMenuBar_ActionEvent_Callback = void (*)(QMenuBar*, QActionEvent*);
    using QMenuBar_FocusOutEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_FocusInEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_TimerEvent_Callback = void (*)(QMenuBar*, QTimerEvent*);
    using QMenuBar_EventFilter_Callback = bool (*)(QMenuBar*, QObject*, QEvent*);
    using QMenuBar_Event_Callback = bool (*)(QMenuBar*, QEvent*);
    using QMenuBar_InitStyleOption_Callback = void (*)(const QMenuBar*, QStyleOptionMenuItem*, QAction*);
    using QMenuBar_DevType_Callback = int (*)(const QMenuBar*);
    using QMenuBar_HasHeightForWidth_Callback = bool (*)(const QMenuBar*);
    using QMenuBar_PaintEngine_Callback = QPaintEngine* (*)(const QMenuBar*);
    using QMenuBar_MouseDoubleClickEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_WheelEvent_Callback = void (*)(QMenuBar*, QWheelEvent*);
    using QMenuBar_KeyReleaseEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_EnterEvent_Callback = void (*)(QMenuBar*, QEnterEvent*);
    using QMenuBar_MoveEvent_Callback = void (*)(QMenuBar*, QMoveEvent*);
    using QMenuBar_CloseEvent_Callback = void (*)(QMenuBar*, QCloseEvent*);
    using QMenuBar_ContextMenuEvent_Callback = void (*)(QMenuBar*, QContextMenuEvent*);
    using QMenuBar_TabletEvent_Callback = void (*)(QMenuBar*, QTabletEvent*);
    using QMenuBar_DragEnterEvent_Callback = void (*)(QMenuBar*, QDragEnterEvent*);
    using QMenuBar_DragMoveEvent_Callback = void (*)(QMenuBar*, QDragMoveEvent*);
    using QMenuBar_DragLeaveEvent_Callback = void (*)(QMenuBar*, QDragLeaveEvent*);
    using QMenuBar_DropEvent_Callback = void (*)(QMenuBar*, QDropEvent*);
    using QMenuBar_ShowEvent_Callback = void (*)(QMenuBar*, QShowEvent*);
    using QMenuBar_HideEvent_Callback = void (*)(QMenuBar*, QHideEvent*);
    using QMenuBar_NativeEvent_Callback = bool (*)(QMenuBar*, libqt_string, void*, intptr_t*);
    using QMenuBar_Metric_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_InitPainter_Callback = void (*)(const QMenuBar*, QPainter*);
    using QMenuBar_Redirected_Callback = QPaintDevice* (*)(const QMenuBar*, QPoint*);
    using QMenuBar_SharedPainter_Callback = QPainter* (*)(const QMenuBar*);
    using QMenuBar_InputMethodEvent_Callback = void (*)(QMenuBar*, QInputMethodEvent*);
    using QMenuBar_InputMethodQuery_Callback = QVariant* (*)(const QMenuBar*, int);
    using QMenuBar_FocusNextPrevChild_Callback = bool (*)(QMenuBar*, bool);
    using QMenuBar_ChildEvent_Callback = void (*)(QMenuBar*, QChildEvent*);
    using QMenuBar_CustomEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_ConnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar_DisconnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar::create;
    using QMenuBar::destroy;
    using QMenuBar::focusNextChild;
    using QMenuBar::focusPreviousChild;
    using QMenuBar::getDecodedMetricF;
    using QMenuBar::isSignalConnected;
    using QMenuBar::receivers;
    using QMenuBar::sender;
    using QMenuBar::senderSignalIndex;
    using QMenuBar::updateMicroFocus;

    // Instance callback storage
    QMenuBar_MetaObject_Callback qmenubar_metaobject_callback = nullptr;
    QMenuBar_Metacast_Callback qmenubar_metacast_callback = nullptr;
    QMenuBar_Metacall_Callback qmenubar_metacall_callback = nullptr;
    QMenuBar_SizeHint_Callback qmenubar_sizehint_callback = nullptr;
    QMenuBar_MinimumSizeHint_Callback qmenubar_minimumsizehint_callback = nullptr;
    QMenuBar_HeightForWidth_Callback qmenubar_heightforwidth_callback = nullptr;
    QMenuBar_SetVisible_Callback qmenubar_setvisible_callback = nullptr;
    QMenuBar_ChangeEvent_Callback qmenubar_changeevent_callback = nullptr;
    QMenuBar_KeyPressEvent_Callback qmenubar_keypressevent_callback = nullptr;
    QMenuBar_MouseReleaseEvent_Callback qmenubar_mousereleaseevent_callback = nullptr;
    QMenuBar_MousePressEvent_Callback qmenubar_mousepressevent_callback = nullptr;
    QMenuBar_MouseMoveEvent_Callback qmenubar_mousemoveevent_callback = nullptr;
    QMenuBar_LeaveEvent_Callback qmenubar_leaveevent_callback = nullptr;
    QMenuBar_PaintEvent_Callback qmenubar_paintevent_callback = nullptr;
    QMenuBar_ResizeEvent_Callback qmenubar_resizeevent_callback = nullptr;
    QMenuBar_ActionEvent_Callback qmenubar_actionevent_callback = nullptr;
    QMenuBar_FocusOutEvent_Callback qmenubar_focusoutevent_callback = nullptr;
    QMenuBar_FocusInEvent_Callback qmenubar_focusinevent_callback = nullptr;
    QMenuBar_TimerEvent_Callback qmenubar_timerevent_callback = nullptr;
    QMenuBar_EventFilter_Callback qmenubar_eventfilter_callback = nullptr;
    QMenuBar_Event_Callback qmenubar_event_callback = nullptr;
    QMenuBar_InitStyleOption_Callback qmenubar_initstyleoption_callback = nullptr;
    QMenuBar_DevType_Callback qmenubar_devtype_callback = nullptr;
    QMenuBar_HasHeightForWidth_Callback qmenubar_hasheightforwidth_callback = nullptr;
    QMenuBar_PaintEngine_Callback qmenubar_paintengine_callback = nullptr;
    QMenuBar_MouseDoubleClickEvent_Callback qmenubar_mousedoubleclickevent_callback = nullptr;
    QMenuBar_WheelEvent_Callback qmenubar_wheelevent_callback = nullptr;
    QMenuBar_KeyReleaseEvent_Callback qmenubar_keyreleaseevent_callback = nullptr;
    QMenuBar_EnterEvent_Callback qmenubar_enterevent_callback = nullptr;
    QMenuBar_MoveEvent_Callback qmenubar_moveevent_callback = nullptr;
    QMenuBar_CloseEvent_Callback qmenubar_closeevent_callback = nullptr;
    QMenuBar_ContextMenuEvent_Callback qmenubar_contextmenuevent_callback = nullptr;
    QMenuBar_TabletEvent_Callback qmenubar_tabletevent_callback = nullptr;
    QMenuBar_DragEnterEvent_Callback qmenubar_dragenterevent_callback = nullptr;
    QMenuBar_DragMoveEvent_Callback qmenubar_dragmoveevent_callback = nullptr;
    QMenuBar_DragLeaveEvent_Callback qmenubar_dragleaveevent_callback = nullptr;
    QMenuBar_DropEvent_Callback qmenubar_dropevent_callback = nullptr;
    QMenuBar_ShowEvent_Callback qmenubar_showevent_callback = nullptr;
    QMenuBar_HideEvent_Callback qmenubar_hideevent_callback = nullptr;
    QMenuBar_NativeEvent_Callback qmenubar_nativeevent_callback = nullptr;
    QMenuBar_Metric_Callback qmenubar_metric_callback = nullptr;
    QMenuBar_InitPainter_Callback qmenubar_initpainter_callback = nullptr;
    QMenuBar_Redirected_Callback qmenubar_redirected_callback = nullptr;
    QMenuBar_SharedPainter_Callback qmenubar_sharedpainter_callback = nullptr;
    QMenuBar_InputMethodEvent_Callback qmenubar_inputmethodevent_callback = nullptr;
    QMenuBar_InputMethodQuery_Callback qmenubar_inputmethodquery_callback = nullptr;
    QMenuBar_FocusNextPrevChild_Callback qmenubar_focusnextprevchild_callback = nullptr;
    QMenuBar_ChildEvent_Callback qmenubar_childevent_callback = nullptr;
    QMenuBar_CustomEvent_Callback qmenubar_customevent_callback = nullptr;
    QMenuBar_ConnectNotify_Callback qmenubar_connectnotify_callback = nullptr;
    QMenuBar_DisconnectNotify_Callback qmenubar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMenuBar {
        using QMenuBar::actionEvent;
        using QMenuBar::changeEvent;
        using QMenuBar::childEvent;
        using QMenuBar::closeEvent;
        using QMenuBar::connectNotify;
        using QMenuBar::contextMenuEvent;
        using QMenuBar::customEvent;
        using QMenuBar::disconnectNotify;
        using QMenuBar::dragEnterEvent;
        using QMenuBar::dragLeaveEvent;
        using QMenuBar::dragMoveEvent;
        using QMenuBar::dropEvent;
        using QMenuBar::enterEvent;
        using QMenuBar::event;
        using QMenuBar::eventFilter;
        using QMenuBar::focusInEvent;
        using QMenuBar::focusNextPrevChild;
        using QMenuBar::focusOutEvent;
        using QMenuBar::hideEvent;
        using QMenuBar::initPainter;
        using QMenuBar::initStyleOption;
        using QMenuBar::inputMethodEvent;
        using QMenuBar::keyPressEvent;
        using QMenuBar::keyReleaseEvent;
        using QMenuBar::leaveEvent;
        using QMenuBar::metric;
        using QMenuBar::mouseDoubleClickEvent;
        using QMenuBar::mouseMoveEvent;
        using QMenuBar::mousePressEvent;
        using QMenuBar::mouseReleaseEvent;
        using QMenuBar::moveEvent;
        using QMenuBar::nativeEvent;
        using QMenuBar::paintEvent;
        using QMenuBar::redirected;
        using QMenuBar::resizeEvent;
        using QMenuBar::sharedPainter;
        using QMenuBar::showEvent;
        using QMenuBar::tabletEvent;
        using QMenuBar::timerEvent;
        using QMenuBar::wheelEvent;
    };

    VirtualQMenuBar(QWidget* parent) : QMenuBar(parent) {};
    VirtualQMenuBar() : QMenuBar() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmenubar_metaobject_callback) {
            QMetaObject* callback_ret = qmenubar_metaobject_callback(this);
            return callback_ret;
        }
        return QMenuBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmenubar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmenubar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmenubar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmenubar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmenubar_sizehint_callback) {
            QSize* callback_ret = qmenubar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenuBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmenubar_minimumsizehint_callback) {
            QSize* callback_ret = qmenubar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenuBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmenubar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmenubar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmenubar_setvisible_callback) {
            bool cbval1 = visible;
            qmenubar_setvisible_callback(this, cbval1);
            return;
        }
        QMenuBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmenubar_changeevent_callback) {
            QEvent* cbval1 = param1;
            qmenubar_changeevent_callback(this, cbval1);
            return;
        }
        QMenuBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmenubar_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qmenubar_keypressevent_callback(this, cbval1);
            return;
        }
        QMenuBar::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmenubar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenubar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMenuBar::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmenubar_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenubar_mousepressevent_callback(this, cbval1);
            return;
        }
        QMenuBar::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmenubar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenubar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMenuBar::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qmenubar_leaveevent_callback) {
            QEvent* cbval1 = param1;
            qmenubar_leaveevent_callback(this, cbval1);
            return;
        }
        QMenuBar::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qmenubar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qmenubar_paintevent_callback(this, cbval1);
            return;
        }
        QMenuBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qmenubar_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qmenubar_resizeevent_callback(this, cbval1);
            return;
        }
        QMenuBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qmenubar_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            qmenubar_actionevent_callback(this, cbval1);
            return;
        }
        QMenuBar::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qmenubar_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qmenubar_focusoutevent_callback(this, cbval1);
            return;
        }
        QMenuBar::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qmenubar_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qmenubar_focusinevent_callback(this, cbval1);
            return;
        }
        QMenuBar::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qmenubar_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qmenubar_timerevent_callback(this, cbval1);
            return;
        }
        QMenuBar::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmenubar_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qmenubar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMenuBar::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qmenubar_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qmenubar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (qmenubar_initstyleoption_callback) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;
            qmenubar_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        QMenuBar::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmenubar_devtype_callback) {
            int callback_ret = qmenubar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmenubar_hasheightforwidth_callback) {
            bool callback_ret = qmenubar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMenuBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmenubar_paintengine_callback) {
            QPaintEngine* callback_ret = qmenubar_paintengine_callback(this);
            return callback_ret;
        }
        return QMenuBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmenubar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qmenubar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMenuBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmenubar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qmenubar_wheelevent_callback(this, cbval1);
            return;
        }
        QMenuBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmenubar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmenubar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMenuBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmenubar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qmenubar_enterevent_callback(this, cbval1);
            return;
        }
        QMenuBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmenubar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qmenubar_moveevent_callback(this, cbval1);
            return;
        }
        QMenuBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmenubar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qmenubar_closeevent_callback(this, cbval1);
            return;
        }
        QMenuBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmenubar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qmenubar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMenuBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmenubar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmenubar_tabletevent_callback(this, cbval1);
            return;
        }
        QMenuBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmenubar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qmenubar_dragenterevent_callback(this, cbval1);
            return;
        }
        QMenuBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmenubar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qmenubar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMenuBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmenubar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qmenubar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMenuBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmenubar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qmenubar_dropevent_callback(this, cbval1);
            return;
        }
        QMenuBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmenubar_showevent_callback) {
            QShowEvent* cbval1 = event;
            qmenubar_showevent_callback(this, cbval1);
            return;
        }
        QMenuBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmenubar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qmenubar_hideevent_callback(this, cbval1);
            return;
        }
        QMenuBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmenubar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmenubar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMenuBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmenubar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmenubar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmenubar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmenubar_initpainter_callback(this, cbval1);
            return;
        }
        QMenuBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmenubar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmenubar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmenubar_sharedpainter_callback) {
            QPainter* callback_ret = qmenubar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMenuBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmenubar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmenubar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMenuBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmenubar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmenubar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenuBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmenubar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmenubar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmenubar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmenubar_childevent_callback(this, cbval1);
            return;
        }
        QMenuBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmenubar_customevent_callback) {
            QEvent* cbval1 = event;
            qmenubar_customevent_callback(this, cbval1);
            return;
        }
        QMenuBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmenubar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmenubar_connectnotify_callback(this, cbval1);
            return;
        }
        QMenuBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmenubar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmenubar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMenuBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMenuBar_SuperChangeEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_SuperKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
    friend void QMenuBar_SuperMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperMousePressEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperLeaveEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_SuperPaintEvent(QMenuBar* self, QPaintEvent* param1);
    friend void QMenuBar_SuperResizeEvent(QMenuBar* self, QResizeEvent* param1);
    friend void QMenuBar_SuperActionEvent(QMenuBar* self, QActionEvent* param1);
    friend void QMenuBar_SuperFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_SuperFocusInEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_SuperTimerEvent(QMenuBar* self, QTimerEvent* param1);
    friend bool QMenuBar_SuperEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
    friend bool QMenuBar_SuperEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_SuperInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenuBar_SuperMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
    friend void QMenuBar_SuperWheelEvent(QMenuBar* self, QWheelEvent* event);
    friend void QMenuBar_SuperKeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
    friend void QMenuBar_SuperEnterEvent(QMenuBar* self, QEnterEvent* event);
    friend void QMenuBar_SuperMoveEvent(QMenuBar* self, QMoveEvent* event);
    friend void QMenuBar_SuperCloseEvent(QMenuBar* self, QCloseEvent* event);
    friend void QMenuBar_SuperContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
    friend void QMenuBar_SuperTabletEvent(QMenuBar* self, QTabletEvent* event);
    friend void QMenuBar_SuperDragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
    friend void QMenuBar_SuperDragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
    friend void QMenuBar_SuperDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
    friend void QMenuBar_SuperDropEvent(QMenuBar* self, QDropEvent* event);
    friend void QMenuBar_SuperShowEvent(QMenuBar* self, QShowEvent* event);
    friend void QMenuBar_SuperHideEvent(QMenuBar* self, QHideEvent* event);
    friend bool QMenuBar_SuperNativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMenuBar_SuperMetric(const QMenuBar* self, int param1);
    friend void QMenuBar_SuperInitPainter(const QMenuBar* self, QPainter* painter);
    friend QPaintDevice* QMenuBar_SuperRedirected(const QMenuBar* self, QPoint* offset);
    friend QPainter* QMenuBar_SuperSharedPainter(const QMenuBar* self);
    friend void QMenuBar_SuperInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
    friend bool QMenuBar_SuperFocusNextPrevChild(QMenuBar* self, bool next);
    friend void QMenuBar_SuperChildEvent(QMenuBar* self, QChildEvent* event);
    friend void QMenuBar_SuperCustomEvent(QMenuBar* self, QEvent* event);
    friend void QMenuBar_SuperConnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_SuperDisconnectNotify(QMenuBar* self, const QMetaMethod* signal);
};

#endif
