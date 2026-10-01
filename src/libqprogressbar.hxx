#pragma once
#ifndef LIBQPROGRESSBAR_HXX
#define LIBQPROGRESSBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProgressBar
class VirtualQProgressBar final : public QProgressBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QProgressBar_MetaObject_Callback = QMetaObject* (*)(const QProgressBar*);
    using QProgressBar_Metacast_Callback = void* (*)(QProgressBar*, const char*);
    using QProgressBar_Metacall_Callback = int (*)(QProgressBar*, int, int, void**);
    using QProgressBar_Text_Callback = const char* (*)(const QProgressBar*);
    using QProgressBar_SizeHint_Callback = QSize* (*)(const QProgressBar*);
    using QProgressBar_MinimumSizeHint_Callback = QSize* (*)(const QProgressBar*);
    using QProgressBar_Event_Callback = bool (*)(QProgressBar*, QEvent*);
    using QProgressBar_PaintEvent_Callback = void (*)(QProgressBar*, QPaintEvent*);
    using QProgressBar_InitStyleOption_Callback = void (*)(const QProgressBar*, QStyleOptionProgressBar*);
    using QProgressBar_DevType_Callback = int (*)(const QProgressBar*);
    using QProgressBar_SetVisible_Callback = void (*)(QProgressBar*, bool);
    using QProgressBar_HeightForWidth_Callback = int (*)(const QProgressBar*, int);
    using QProgressBar_HasHeightForWidth_Callback = bool (*)(const QProgressBar*);
    using QProgressBar_PaintEngine_Callback = QPaintEngine* (*)(const QProgressBar*);
    using QProgressBar_MousePressEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseReleaseEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseDoubleClickEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseMoveEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_WheelEvent_Callback = void (*)(QProgressBar*, QWheelEvent*);
    using QProgressBar_KeyPressEvent_Callback = void (*)(QProgressBar*, QKeyEvent*);
    using QProgressBar_KeyReleaseEvent_Callback = void (*)(QProgressBar*, QKeyEvent*);
    using QProgressBar_FocusInEvent_Callback = void (*)(QProgressBar*, QFocusEvent*);
    using QProgressBar_FocusOutEvent_Callback = void (*)(QProgressBar*, QFocusEvent*);
    using QProgressBar_EnterEvent_Callback = void (*)(QProgressBar*, QEnterEvent*);
    using QProgressBar_LeaveEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_MoveEvent_Callback = void (*)(QProgressBar*, QMoveEvent*);
    using QProgressBar_ResizeEvent_Callback = void (*)(QProgressBar*, QResizeEvent*);
    using QProgressBar_CloseEvent_Callback = void (*)(QProgressBar*, QCloseEvent*);
    using QProgressBar_ContextMenuEvent_Callback = void (*)(QProgressBar*, QContextMenuEvent*);
    using QProgressBar_TabletEvent_Callback = void (*)(QProgressBar*, QTabletEvent*);
    using QProgressBar_ActionEvent_Callback = void (*)(QProgressBar*, QActionEvent*);
    using QProgressBar_DragEnterEvent_Callback = void (*)(QProgressBar*, QDragEnterEvent*);
    using QProgressBar_DragMoveEvent_Callback = void (*)(QProgressBar*, QDragMoveEvent*);
    using QProgressBar_DragLeaveEvent_Callback = void (*)(QProgressBar*, QDragLeaveEvent*);
    using QProgressBar_DropEvent_Callback = void (*)(QProgressBar*, QDropEvent*);
    using QProgressBar_ShowEvent_Callback = void (*)(QProgressBar*, QShowEvent*);
    using QProgressBar_HideEvent_Callback = void (*)(QProgressBar*, QHideEvent*);
    using QProgressBar_NativeEvent_Callback = bool (*)(QProgressBar*, libqt_string, void*, intptr_t*);
    using QProgressBar_ChangeEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_Metric_Callback = int (*)(const QProgressBar*, int);
    using QProgressBar_InitPainter_Callback = void (*)(const QProgressBar*, QPainter*);
    using QProgressBar_Redirected_Callback = QPaintDevice* (*)(const QProgressBar*, QPoint*);
    using QProgressBar_SharedPainter_Callback = QPainter* (*)(const QProgressBar*);
    using QProgressBar_InputMethodEvent_Callback = void (*)(QProgressBar*, QInputMethodEvent*);
    using QProgressBar_InputMethodQuery_Callback = QVariant* (*)(const QProgressBar*, int);
    using QProgressBar_FocusNextPrevChild_Callback = bool (*)(QProgressBar*, bool);
    using QProgressBar_EventFilter_Callback = bool (*)(QProgressBar*, QObject*, QEvent*);
    using QProgressBar_TimerEvent_Callback = void (*)(QProgressBar*, QTimerEvent*);
    using QProgressBar_ChildEvent_Callback = void (*)(QProgressBar*, QChildEvent*);
    using QProgressBar_CustomEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_ConnectNotify_Callback = void (*)(QProgressBar*, QMetaMethod*);
    using QProgressBar_DisconnectNotify_Callback = void (*)(QProgressBar*, QMetaMethod*);
    using QProgressBar::create;
    using QProgressBar::destroy;
    using QProgressBar::focusNextChild;
    using QProgressBar::focusPreviousChild;
    using QProgressBar::getDecodedMetricF;
    using QProgressBar::isSignalConnected;
    using QProgressBar::receivers;
    using QProgressBar::sender;
    using QProgressBar::senderSignalIndex;
    using QProgressBar::updateMicroFocus;

    // Instance callback storage
    QProgressBar_MetaObject_Callback qprogressbar_metaobject_callback = nullptr;
    QProgressBar_Metacast_Callback qprogressbar_metacast_callback = nullptr;
    QProgressBar_Metacall_Callback qprogressbar_metacall_callback = nullptr;
    QProgressBar_Text_Callback qprogressbar_text_callback = nullptr;
    QProgressBar_SizeHint_Callback qprogressbar_sizehint_callback = nullptr;
    QProgressBar_MinimumSizeHint_Callback qprogressbar_minimumsizehint_callback = nullptr;
    QProgressBar_Event_Callback qprogressbar_event_callback = nullptr;
    QProgressBar_PaintEvent_Callback qprogressbar_paintevent_callback = nullptr;
    QProgressBar_InitStyleOption_Callback qprogressbar_initstyleoption_callback = nullptr;
    QProgressBar_DevType_Callback qprogressbar_devtype_callback = nullptr;
    QProgressBar_SetVisible_Callback qprogressbar_setvisible_callback = nullptr;
    QProgressBar_HeightForWidth_Callback qprogressbar_heightforwidth_callback = nullptr;
    QProgressBar_HasHeightForWidth_Callback qprogressbar_hasheightforwidth_callback = nullptr;
    QProgressBar_PaintEngine_Callback qprogressbar_paintengine_callback = nullptr;
    QProgressBar_MousePressEvent_Callback qprogressbar_mousepressevent_callback = nullptr;
    QProgressBar_MouseReleaseEvent_Callback qprogressbar_mousereleaseevent_callback = nullptr;
    QProgressBar_MouseDoubleClickEvent_Callback qprogressbar_mousedoubleclickevent_callback = nullptr;
    QProgressBar_MouseMoveEvent_Callback qprogressbar_mousemoveevent_callback = nullptr;
    QProgressBar_WheelEvent_Callback qprogressbar_wheelevent_callback = nullptr;
    QProgressBar_KeyPressEvent_Callback qprogressbar_keypressevent_callback = nullptr;
    QProgressBar_KeyReleaseEvent_Callback qprogressbar_keyreleaseevent_callback = nullptr;
    QProgressBar_FocusInEvent_Callback qprogressbar_focusinevent_callback = nullptr;
    QProgressBar_FocusOutEvent_Callback qprogressbar_focusoutevent_callback = nullptr;
    QProgressBar_EnterEvent_Callback qprogressbar_enterevent_callback = nullptr;
    QProgressBar_LeaveEvent_Callback qprogressbar_leaveevent_callback = nullptr;
    QProgressBar_MoveEvent_Callback qprogressbar_moveevent_callback = nullptr;
    QProgressBar_ResizeEvent_Callback qprogressbar_resizeevent_callback = nullptr;
    QProgressBar_CloseEvent_Callback qprogressbar_closeevent_callback = nullptr;
    QProgressBar_ContextMenuEvent_Callback qprogressbar_contextmenuevent_callback = nullptr;
    QProgressBar_TabletEvent_Callback qprogressbar_tabletevent_callback = nullptr;
    QProgressBar_ActionEvent_Callback qprogressbar_actionevent_callback = nullptr;
    QProgressBar_DragEnterEvent_Callback qprogressbar_dragenterevent_callback = nullptr;
    QProgressBar_DragMoveEvent_Callback qprogressbar_dragmoveevent_callback = nullptr;
    QProgressBar_DragLeaveEvent_Callback qprogressbar_dragleaveevent_callback = nullptr;
    QProgressBar_DropEvent_Callback qprogressbar_dropevent_callback = nullptr;
    QProgressBar_ShowEvent_Callback qprogressbar_showevent_callback = nullptr;
    QProgressBar_HideEvent_Callback qprogressbar_hideevent_callback = nullptr;
    QProgressBar_NativeEvent_Callback qprogressbar_nativeevent_callback = nullptr;
    QProgressBar_ChangeEvent_Callback qprogressbar_changeevent_callback = nullptr;
    QProgressBar_Metric_Callback qprogressbar_metric_callback = nullptr;
    QProgressBar_InitPainter_Callback qprogressbar_initpainter_callback = nullptr;
    QProgressBar_Redirected_Callback qprogressbar_redirected_callback = nullptr;
    QProgressBar_SharedPainter_Callback qprogressbar_sharedpainter_callback = nullptr;
    QProgressBar_InputMethodEvent_Callback qprogressbar_inputmethodevent_callback = nullptr;
    QProgressBar_InputMethodQuery_Callback qprogressbar_inputmethodquery_callback = nullptr;
    QProgressBar_FocusNextPrevChild_Callback qprogressbar_focusnextprevchild_callback = nullptr;
    QProgressBar_EventFilter_Callback qprogressbar_eventfilter_callback = nullptr;
    QProgressBar_TimerEvent_Callback qprogressbar_timerevent_callback = nullptr;
    QProgressBar_ChildEvent_Callback qprogressbar_childevent_callback = nullptr;
    QProgressBar_CustomEvent_Callback qprogressbar_customevent_callback = nullptr;
    QProgressBar_ConnectNotify_Callback qprogressbar_connectnotify_callback = nullptr;
    QProgressBar_DisconnectNotify_Callback qprogressbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QProgressBar {
        using QProgressBar::actionEvent;
        using QProgressBar::changeEvent;
        using QProgressBar::childEvent;
        using QProgressBar::closeEvent;
        using QProgressBar::connectNotify;
        using QProgressBar::contextMenuEvent;
        using QProgressBar::customEvent;
        using QProgressBar::disconnectNotify;
        using QProgressBar::dragEnterEvent;
        using QProgressBar::dragLeaveEvent;
        using QProgressBar::dragMoveEvent;
        using QProgressBar::dropEvent;
        using QProgressBar::enterEvent;
        using QProgressBar::event;
        using QProgressBar::focusInEvent;
        using QProgressBar::focusNextPrevChild;
        using QProgressBar::focusOutEvent;
        using QProgressBar::hideEvent;
        using QProgressBar::initPainter;
        using QProgressBar::initStyleOption;
        using QProgressBar::inputMethodEvent;
        using QProgressBar::keyPressEvent;
        using QProgressBar::keyReleaseEvent;
        using QProgressBar::leaveEvent;
        using QProgressBar::metric;
        using QProgressBar::mouseDoubleClickEvent;
        using QProgressBar::mouseMoveEvent;
        using QProgressBar::mousePressEvent;
        using QProgressBar::mouseReleaseEvent;
        using QProgressBar::moveEvent;
        using QProgressBar::nativeEvent;
        using QProgressBar::paintEvent;
        using QProgressBar::redirected;
        using QProgressBar::resizeEvent;
        using QProgressBar::sharedPainter;
        using QProgressBar::showEvent;
        using QProgressBar::tabletEvent;
        using QProgressBar::timerEvent;
        using QProgressBar::wheelEvent;
    };

    VirtualQProgressBar(QWidget* parent) : QProgressBar(parent) {};
    VirtualQProgressBar() : QProgressBar() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprogressbar_metaobject_callback) {
            QMetaObject* callback_ret = qprogressbar_metaobject_callback(this);
            return callback_ret;
        }
        return QProgressBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprogressbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprogressbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprogressbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprogressbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QProgressBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text() const override {
        if (qprogressbar_text_callback) {
            const char* callback_ret = qprogressbar_text_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QProgressBar::text();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprogressbar_sizehint_callback) {
            QSize* callback_ret = qprogressbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprogressbar_minimumsizehint_callback) {
            QSize* callback_ret = qprogressbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qprogressbar_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qprogressbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qprogressbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qprogressbar_paintevent_callback(this, cbval1);
            return;
        }
        QProgressBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionProgressBar* option) const override {
        if (qprogressbar_initstyleoption_callback) {
            QStyleOptionProgressBar* cbval1 = option;
            qprogressbar_initstyleoption_callback(this, cbval1);
            return;
        }
        QProgressBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprogressbar_devtype_callback) {
            int callback_ret = qprogressbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QProgressBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprogressbar_setvisible_callback) {
            bool cbval1 = visible;
            qprogressbar_setvisible_callback(this, cbval1);
            return;
        }
        QProgressBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprogressbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qprogressbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QProgressBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprogressbar_hasheightforwidth_callback) {
            bool callback_ret = qprogressbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QProgressBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprogressbar_paintengine_callback) {
            QPaintEngine* callback_ret = qprogressbar_paintengine_callback(this);
            return callback_ret;
        }
        return QProgressBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprogressbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressbar_mousepressevent_callback(this, cbval1);
            return;
        }
        QProgressBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprogressbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QProgressBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprogressbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QProgressBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprogressbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QProgressBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprogressbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qprogressbar_wheelevent_callback(this, cbval1);
            return;
        }
        QProgressBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qprogressbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qprogressbar_keypressevent_callback(this, cbval1);
            return;
        }
        QProgressBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprogressbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qprogressbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QProgressBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprogressbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qprogressbar_focusinevent_callback(this, cbval1);
            return;
        }
        QProgressBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprogressbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qprogressbar_focusoutevent_callback(this, cbval1);
            return;
        }
        QProgressBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprogressbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qprogressbar_enterevent_callback(this, cbval1);
            return;
        }
        QProgressBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprogressbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            qprogressbar_leaveevent_callback(this, cbval1);
            return;
        }
        QProgressBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprogressbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qprogressbar_moveevent_callback(this, cbval1);
            return;
        }
        QProgressBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprogressbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qprogressbar_resizeevent_callback(this, cbval1);
            return;
        }
        QProgressBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprogressbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qprogressbar_closeevent_callback(this, cbval1);
            return;
        }
        QProgressBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qprogressbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qprogressbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QProgressBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprogressbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qprogressbar_tabletevent_callback(this, cbval1);
            return;
        }
        QProgressBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprogressbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qprogressbar_actionevent_callback(this, cbval1);
            return;
        }
        QProgressBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprogressbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qprogressbar_dragenterevent_callback(this, cbval1);
            return;
        }
        QProgressBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprogressbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qprogressbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QProgressBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprogressbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qprogressbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QProgressBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprogressbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qprogressbar_dropevent_callback(this, cbval1);
            return;
        }
        QProgressBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprogressbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            qprogressbar_showevent_callback(this, cbval1);
            return;
        }
        QProgressBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprogressbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qprogressbar_hideevent_callback(this, cbval1);
            return;
        }
        QProgressBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprogressbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qprogressbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QProgressBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprogressbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            qprogressbar_changeevent_callback(this, cbval1);
            return;
        }
        QProgressBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprogressbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprogressbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QProgressBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprogressbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprogressbar_initpainter_callback(this, cbval1);
            return;
        }
        QProgressBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprogressbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprogressbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprogressbar_sharedpainter_callback) {
            QPainter* callback_ret = qprogressbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QProgressBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprogressbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qprogressbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QProgressBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprogressbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qprogressbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprogressbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qprogressbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprogressbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qprogressbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QProgressBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprogressbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprogressbar_timerevent_callback(this, cbval1);
            return;
        }
        QProgressBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprogressbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprogressbar_childevent_callback(this, cbval1);
            return;
        }
        QProgressBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprogressbar_customevent_callback) {
            QEvent* cbval1 = event;
            qprogressbar_customevent_callback(this, cbval1);
            return;
        }
        QProgressBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprogressbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprogressbar_connectnotify_callback(this, cbval1);
            return;
        }
        QProgressBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprogressbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprogressbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QProgressBar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QProgressBar_SuperEvent(QProgressBar* self, QEvent* e);
    friend void QProgressBar_SuperPaintEvent(QProgressBar* self, QPaintEvent* param1);
    friend void QProgressBar_SuperInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
    friend void QProgressBar_SuperMousePressEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_SuperMouseReleaseEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_SuperMouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_SuperMouseMoveEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_SuperWheelEvent(QProgressBar* self, QWheelEvent* event);
    friend void QProgressBar_SuperKeyPressEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_SuperKeyReleaseEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_SuperFocusInEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_SuperFocusOutEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_SuperEnterEvent(QProgressBar* self, QEnterEvent* event);
    friend void QProgressBar_SuperLeaveEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_SuperMoveEvent(QProgressBar* self, QMoveEvent* event);
    friend void QProgressBar_SuperResizeEvent(QProgressBar* self, QResizeEvent* event);
    friend void QProgressBar_SuperCloseEvent(QProgressBar* self, QCloseEvent* event);
    friend void QProgressBar_SuperContextMenuEvent(QProgressBar* self, QContextMenuEvent* event);
    friend void QProgressBar_SuperTabletEvent(QProgressBar* self, QTabletEvent* event);
    friend void QProgressBar_SuperActionEvent(QProgressBar* self, QActionEvent* event);
    friend void QProgressBar_SuperDragEnterEvent(QProgressBar* self, QDragEnterEvent* event);
    friend void QProgressBar_SuperDragMoveEvent(QProgressBar* self, QDragMoveEvent* event);
    friend void QProgressBar_SuperDragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event);
    friend void QProgressBar_SuperDropEvent(QProgressBar* self, QDropEvent* event);
    friend void QProgressBar_SuperShowEvent(QProgressBar* self, QShowEvent* event);
    friend void QProgressBar_SuperHideEvent(QProgressBar* self, QHideEvent* event);
    friend bool QProgressBar_SuperNativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QProgressBar_SuperChangeEvent(QProgressBar* self, QEvent* param1);
    friend int QProgressBar_SuperMetric(const QProgressBar* self, int param1);
    friend void QProgressBar_SuperInitPainter(const QProgressBar* self, QPainter* painter);
    friend QPaintDevice* QProgressBar_SuperRedirected(const QProgressBar* self, QPoint* offset);
    friend QPainter* QProgressBar_SuperSharedPainter(const QProgressBar* self);
    friend void QProgressBar_SuperInputMethodEvent(QProgressBar* self, QInputMethodEvent* param1);
    friend bool QProgressBar_SuperFocusNextPrevChild(QProgressBar* self, bool next);
    friend void QProgressBar_SuperTimerEvent(QProgressBar* self, QTimerEvent* event);
    friend void QProgressBar_SuperChildEvent(QProgressBar* self, QChildEvent* event);
    friend void QProgressBar_SuperCustomEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_SuperConnectNotify(QProgressBar* self, const QMetaMethod* signal);
    friend void QProgressBar_SuperDisconnectNotify(QProgressBar* self, const QMetaMethod* signal);
};

#endif
