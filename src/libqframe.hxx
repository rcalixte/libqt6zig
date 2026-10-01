#pragma once
#ifndef LIBQFRAME_HXX
#define LIBQFRAME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFrame
class VirtualQFrame final : public QFrame {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFrame_MetaObject_Callback = QMetaObject* (*)(const QFrame*);
    using QFrame_Metacast_Callback = void* (*)(QFrame*, const char*);
    using QFrame_Metacall_Callback = int (*)(QFrame*, int, int, void**);
    using QFrame_SizeHint_Callback = QSize* (*)(const QFrame*);
    using QFrame_Event_Callback = bool (*)(QFrame*, QEvent*);
    using QFrame_PaintEvent_Callback = void (*)(QFrame*, QPaintEvent*);
    using QFrame_ChangeEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_InitStyleOption_Callback = void (*)(const QFrame*, QStyleOptionFrame*);
    using QFrame_DevType_Callback = int (*)(const QFrame*);
    using QFrame_SetVisible_Callback = void (*)(QFrame*, bool);
    using QFrame_MinimumSizeHint_Callback = QSize* (*)(const QFrame*);
    using QFrame_HeightForWidth_Callback = int (*)(const QFrame*, int);
    using QFrame_HasHeightForWidth_Callback = bool (*)(const QFrame*);
    using QFrame_PaintEngine_Callback = QPaintEngine* (*)(const QFrame*);
    using QFrame_MousePressEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseReleaseEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseDoubleClickEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseMoveEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_WheelEvent_Callback = void (*)(QFrame*, QWheelEvent*);
    using QFrame_KeyPressEvent_Callback = void (*)(QFrame*, QKeyEvent*);
    using QFrame_KeyReleaseEvent_Callback = void (*)(QFrame*, QKeyEvent*);
    using QFrame_FocusInEvent_Callback = void (*)(QFrame*, QFocusEvent*);
    using QFrame_FocusOutEvent_Callback = void (*)(QFrame*, QFocusEvent*);
    using QFrame_EnterEvent_Callback = void (*)(QFrame*, QEnterEvent*);
    using QFrame_LeaveEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_MoveEvent_Callback = void (*)(QFrame*, QMoveEvent*);
    using QFrame_ResizeEvent_Callback = void (*)(QFrame*, QResizeEvent*);
    using QFrame_CloseEvent_Callback = void (*)(QFrame*, QCloseEvent*);
    using QFrame_ContextMenuEvent_Callback = void (*)(QFrame*, QContextMenuEvent*);
    using QFrame_TabletEvent_Callback = void (*)(QFrame*, QTabletEvent*);
    using QFrame_ActionEvent_Callback = void (*)(QFrame*, QActionEvent*);
    using QFrame_DragEnterEvent_Callback = void (*)(QFrame*, QDragEnterEvent*);
    using QFrame_DragMoveEvent_Callback = void (*)(QFrame*, QDragMoveEvent*);
    using QFrame_DragLeaveEvent_Callback = void (*)(QFrame*, QDragLeaveEvent*);
    using QFrame_DropEvent_Callback = void (*)(QFrame*, QDropEvent*);
    using QFrame_ShowEvent_Callback = void (*)(QFrame*, QShowEvent*);
    using QFrame_HideEvent_Callback = void (*)(QFrame*, QHideEvent*);
    using QFrame_NativeEvent_Callback = bool (*)(QFrame*, libqt_string, void*, intptr_t*);
    using QFrame_Metric_Callback = int (*)(const QFrame*, int);
    using QFrame_InitPainter_Callback = void (*)(const QFrame*, QPainter*);
    using QFrame_Redirected_Callback = QPaintDevice* (*)(const QFrame*, QPoint*);
    using QFrame_SharedPainter_Callback = QPainter* (*)(const QFrame*);
    using QFrame_InputMethodEvent_Callback = void (*)(QFrame*, QInputMethodEvent*);
    using QFrame_InputMethodQuery_Callback = QVariant* (*)(const QFrame*, int);
    using QFrame_FocusNextPrevChild_Callback = bool (*)(QFrame*, bool);
    using QFrame_EventFilter_Callback = bool (*)(QFrame*, QObject*, QEvent*);
    using QFrame_TimerEvent_Callback = void (*)(QFrame*, QTimerEvent*);
    using QFrame_ChildEvent_Callback = void (*)(QFrame*, QChildEvent*);
    using QFrame_CustomEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_ConnectNotify_Callback = void (*)(QFrame*, QMetaMethod*);
    using QFrame_DisconnectNotify_Callback = void (*)(QFrame*, QMetaMethod*);
    using QFrame::create;
    using QFrame::destroy;
    using QFrame::drawFrame;
    using QFrame::focusNextChild;
    using QFrame::focusPreviousChild;
    using QFrame::getDecodedMetricF;
    using QFrame::isSignalConnected;
    using QFrame::receivers;
    using QFrame::sender;
    using QFrame::senderSignalIndex;
    using QFrame::updateMicroFocus;

    // Instance callback storage
    QFrame_MetaObject_Callback qframe_metaobject_callback = nullptr;
    QFrame_Metacast_Callback qframe_metacast_callback = nullptr;
    QFrame_Metacall_Callback qframe_metacall_callback = nullptr;
    QFrame_SizeHint_Callback qframe_sizehint_callback = nullptr;
    QFrame_Event_Callback qframe_event_callback = nullptr;
    QFrame_PaintEvent_Callback qframe_paintevent_callback = nullptr;
    QFrame_ChangeEvent_Callback qframe_changeevent_callback = nullptr;
    QFrame_InitStyleOption_Callback qframe_initstyleoption_callback = nullptr;
    QFrame_DevType_Callback qframe_devtype_callback = nullptr;
    QFrame_SetVisible_Callback qframe_setvisible_callback = nullptr;
    QFrame_MinimumSizeHint_Callback qframe_minimumsizehint_callback = nullptr;
    QFrame_HeightForWidth_Callback qframe_heightforwidth_callback = nullptr;
    QFrame_HasHeightForWidth_Callback qframe_hasheightforwidth_callback = nullptr;
    QFrame_PaintEngine_Callback qframe_paintengine_callback = nullptr;
    QFrame_MousePressEvent_Callback qframe_mousepressevent_callback = nullptr;
    QFrame_MouseReleaseEvent_Callback qframe_mousereleaseevent_callback = nullptr;
    QFrame_MouseDoubleClickEvent_Callback qframe_mousedoubleclickevent_callback = nullptr;
    QFrame_MouseMoveEvent_Callback qframe_mousemoveevent_callback = nullptr;
    QFrame_WheelEvent_Callback qframe_wheelevent_callback = nullptr;
    QFrame_KeyPressEvent_Callback qframe_keypressevent_callback = nullptr;
    QFrame_KeyReleaseEvent_Callback qframe_keyreleaseevent_callback = nullptr;
    QFrame_FocusInEvent_Callback qframe_focusinevent_callback = nullptr;
    QFrame_FocusOutEvent_Callback qframe_focusoutevent_callback = nullptr;
    QFrame_EnterEvent_Callback qframe_enterevent_callback = nullptr;
    QFrame_LeaveEvent_Callback qframe_leaveevent_callback = nullptr;
    QFrame_MoveEvent_Callback qframe_moveevent_callback = nullptr;
    QFrame_ResizeEvent_Callback qframe_resizeevent_callback = nullptr;
    QFrame_CloseEvent_Callback qframe_closeevent_callback = nullptr;
    QFrame_ContextMenuEvent_Callback qframe_contextmenuevent_callback = nullptr;
    QFrame_TabletEvent_Callback qframe_tabletevent_callback = nullptr;
    QFrame_ActionEvent_Callback qframe_actionevent_callback = nullptr;
    QFrame_DragEnterEvent_Callback qframe_dragenterevent_callback = nullptr;
    QFrame_DragMoveEvent_Callback qframe_dragmoveevent_callback = nullptr;
    QFrame_DragLeaveEvent_Callback qframe_dragleaveevent_callback = nullptr;
    QFrame_DropEvent_Callback qframe_dropevent_callback = nullptr;
    QFrame_ShowEvent_Callback qframe_showevent_callback = nullptr;
    QFrame_HideEvent_Callback qframe_hideevent_callback = nullptr;
    QFrame_NativeEvent_Callback qframe_nativeevent_callback = nullptr;
    QFrame_Metric_Callback qframe_metric_callback = nullptr;
    QFrame_InitPainter_Callback qframe_initpainter_callback = nullptr;
    QFrame_Redirected_Callback qframe_redirected_callback = nullptr;
    QFrame_SharedPainter_Callback qframe_sharedpainter_callback = nullptr;
    QFrame_InputMethodEvent_Callback qframe_inputmethodevent_callback = nullptr;
    QFrame_InputMethodQuery_Callback qframe_inputmethodquery_callback = nullptr;
    QFrame_FocusNextPrevChild_Callback qframe_focusnextprevchild_callback = nullptr;
    QFrame_EventFilter_Callback qframe_eventfilter_callback = nullptr;
    QFrame_TimerEvent_Callback qframe_timerevent_callback = nullptr;
    QFrame_ChildEvent_Callback qframe_childevent_callback = nullptr;
    QFrame_CustomEvent_Callback qframe_customevent_callback = nullptr;
    QFrame_ConnectNotify_Callback qframe_connectnotify_callback = nullptr;
    QFrame_DisconnectNotify_Callback qframe_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFrame {
        using QFrame::actionEvent;
        using QFrame::changeEvent;
        using QFrame::childEvent;
        using QFrame::closeEvent;
        using QFrame::connectNotify;
        using QFrame::contextMenuEvent;
        using QFrame::customEvent;
        using QFrame::disconnectNotify;
        using QFrame::dragEnterEvent;
        using QFrame::dragLeaveEvent;
        using QFrame::dragMoveEvent;
        using QFrame::dropEvent;
        using QFrame::enterEvent;
        using QFrame::event;
        using QFrame::focusInEvent;
        using QFrame::focusNextPrevChild;
        using QFrame::focusOutEvent;
        using QFrame::hideEvent;
        using QFrame::initPainter;
        using QFrame::initStyleOption;
        using QFrame::inputMethodEvent;
        using QFrame::keyPressEvent;
        using QFrame::keyReleaseEvent;
        using QFrame::leaveEvent;
        using QFrame::metric;
        using QFrame::mouseDoubleClickEvent;
        using QFrame::mouseMoveEvent;
        using QFrame::mousePressEvent;
        using QFrame::mouseReleaseEvent;
        using QFrame::moveEvent;
        using QFrame::nativeEvent;
        using QFrame::paintEvent;
        using QFrame::redirected;
        using QFrame::resizeEvent;
        using QFrame::sharedPainter;
        using QFrame::showEvent;
        using QFrame::tabletEvent;
        using QFrame::timerEvent;
        using QFrame::wheelEvent;
    };

    VirtualQFrame(QWidget* parent) : QFrame(parent) {};
    VirtualQFrame() : QFrame() {};
    VirtualQFrame(QWidget* parent, Qt::WindowFlags f) : QFrame(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qframe_metaobject_callback) {
            QMetaObject* callback_ret = qframe_metaobject_callback(this);
            return callback_ret;
        }
        return QFrame::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qframe_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qframe_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFrame::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qframe_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFrame::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qframe_sizehint_callback) {
            QSize* callback_ret = qframe_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFrame::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qframe_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qframe_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFrame::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qframe_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qframe_paintevent_callback(this, cbval1);
            return;
        }
        QFrame::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qframe_changeevent_callback) {
            QEvent* cbval1 = param1;
            qframe_changeevent_callback(this, cbval1);
            return;
        }
        QFrame::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qframe_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qframe_initstyleoption_callback(this, cbval1);
            return;
        }
        QFrame::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qframe_devtype_callback) {
            int callback_ret = qframe_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFrame::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qframe_setvisible_callback) {
            bool cbval1 = visible;
            qframe_setvisible_callback(this, cbval1);
            return;
        }
        QFrame::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qframe_minimumsizehint_callback) {
            QSize* callback_ret = qframe_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFrame::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qframe_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qframe_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFrame::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qframe_hasheightforwidth_callback) {
            bool callback_ret = qframe_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFrame::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qframe_paintengine_callback) {
            QPaintEngine* callback_ret = qframe_paintengine_callback(this);
            return callback_ret;
        }
        return QFrame::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qframe_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qframe_mousepressevent_callback(this, cbval1);
            return;
        }
        QFrame::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qframe_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qframe_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QFrame::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qframe_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qframe_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QFrame::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qframe_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qframe_mousemoveevent_callback(this, cbval1);
            return;
        }
        QFrame::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qframe_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qframe_wheelevent_callback(this, cbval1);
            return;
        }
        QFrame::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qframe_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qframe_keypressevent_callback(this, cbval1);
            return;
        }
        QFrame::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qframe_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qframe_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QFrame::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qframe_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qframe_focusinevent_callback(this, cbval1);
            return;
        }
        QFrame::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qframe_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qframe_focusoutevent_callback(this, cbval1);
            return;
        }
        QFrame::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qframe_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qframe_enterevent_callback(this, cbval1);
            return;
        }
        QFrame::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qframe_leaveevent_callback) {
            QEvent* cbval1 = event;
            qframe_leaveevent_callback(this, cbval1);
            return;
        }
        QFrame::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qframe_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qframe_moveevent_callback(this, cbval1);
            return;
        }
        QFrame::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qframe_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qframe_resizeevent_callback(this, cbval1);
            return;
        }
        QFrame::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qframe_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qframe_closeevent_callback(this, cbval1);
            return;
        }
        QFrame::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qframe_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qframe_contextmenuevent_callback(this, cbval1);
            return;
        }
        QFrame::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qframe_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qframe_tabletevent_callback(this, cbval1);
            return;
        }
        QFrame::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qframe_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qframe_actionevent_callback(this, cbval1);
            return;
        }
        QFrame::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qframe_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qframe_dragenterevent_callback(this, cbval1);
            return;
        }
        QFrame::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qframe_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qframe_dragmoveevent_callback(this, cbval1);
            return;
        }
        QFrame::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qframe_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qframe_dragleaveevent_callback(this, cbval1);
            return;
        }
        QFrame::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qframe_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qframe_dropevent_callback(this, cbval1);
            return;
        }
        QFrame::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qframe_showevent_callback) {
            QShowEvent* cbval1 = event;
            qframe_showevent_callback(this, cbval1);
            return;
        }
        QFrame::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qframe_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qframe_hideevent_callback(this, cbval1);
            return;
        }
        QFrame::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qframe_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qframe_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QFrame::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qframe_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qframe_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFrame::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qframe_initpainter_callback) {
            QPainter* cbval1 = painter;
            qframe_initpainter_callback(this, cbval1);
            return;
        }
        QFrame::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qframe_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qframe_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QFrame::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qframe_sharedpainter_callback) {
            QPainter* callback_ret = qframe_sharedpainter_callback(this);
            return callback_ret;
        }
        return QFrame::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qframe_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qframe_inputmethodevent_callback(this, cbval1);
            return;
        }
        QFrame::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qframe_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qframe_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFrame::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qframe_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qframe_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QFrame::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qframe_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFrame::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qframe_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qframe_timerevent_callback(this, cbval1);
            return;
        }
        QFrame::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qframe_childevent_callback) {
            QChildEvent* cbval1 = event;
            qframe_childevent_callback(this, cbval1);
            return;
        }
        QFrame::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qframe_customevent_callback) {
            QEvent* cbval1 = event;
            qframe_customevent_callback(this, cbval1);
            return;
        }
        QFrame::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qframe_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qframe_connectnotify_callback(this, cbval1);
            return;
        }
        QFrame::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qframe_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qframe_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFrame::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QFrame_SuperEvent(QFrame* self, QEvent* e);
    friend void QFrame_SuperPaintEvent(QFrame* self, QPaintEvent* param1);
    friend void QFrame_SuperChangeEvent(QFrame* self, QEvent* param1);
    friend void QFrame_SuperInitStyleOption(const QFrame* self, QStyleOptionFrame* option);
    friend void QFrame_SuperMousePressEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_SuperMouseReleaseEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_SuperMouseDoubleClickEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_SuperMouseMoveEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_SuperWheelEvent(QFrame* self, QWheelEvent* event);
    friend void QFrame_SuperKeyPressEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_SuperKeyReleaseEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_SuperFocusInEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_SuperFocusOutEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_SuperEnterEvent(QFrame* self, QEnterEvent* event);
    friend void QFrame_SuperLeaveEvent(QFrame* self, QEvent* event);
    friend void QFrame_SuperMoveEvent(QFrame* self, QMoveEvent* event);
    friend void QFrame_SuperResizeEvent(QFrame* self, QResizeEvent* event);
    friend void QFrame_SuperCloseEvent(QFrame* self, QCloseEvent* event);
    friend void QFrame_SuperContextMenuEvent(QFrame* self, QContextMenuEvent* event);
    friend void QFrame_SuperTabletEvent(QFrame* self, QTabletEvent* event);
    friend void QFrame_SuperActionEvent(QFrame* self, QActionEvent* event);
    friend void QFrame_SuperDragEnterEvent(QFrame* self, QDragEnterEvent* event);
    friend void QFrame_SuperDragMoveEvent(QFrame* self, QDragMoveEvent* event);
    friend void QFrame_SuperDragLeaveEvent(QFrame* self, QDragLeaveEvent* event);
    friend void QFrame_SuperDropEvent(QFrame* self, QDropEvent* event);
    friend void QFrame_SuperShowEvent(QFrame* self, QShowEvent* event);
    friend void QFrame_SuperHideEvent(QFrame* self, QHideEvent* event);
    friend bool QFrame_SuperNativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFrame_SuperMetric(const QFrame* self, int param1);
    friend void QFrame_SuperInitPainter(const QFrame* self, QPainter* painter);
    friend QPaintDevice* QFrame_SuperRedirected(const QFrame* self, QPoint* offset);
    friend QPainter* QFrame_SuperSharedPainter(const QFrame* self);
    friend void QFrame_SuperInputMethodEvent(QFrame* self, QInputMethodEvent* param1);
    friend bool QFrame_SuperFocusNextPrevChild(QFrame* self, bool next);
    friend void QFrame_SuperTimerEvent(QFrame* self, QTimerEvent* event);
    friend void QFrame_SuperChildEvent(QFrame* self, QChildEvent* event);
    friend void QFrame_SuperCustomEvent(QFrame* self, QEvent* event);
    friend void QFrame_SuperConnectNotify(QFrame* self, const QMetaMethod* signal);
    friend void QFrame_SuperDisconnectNotify(QFrame* self, const QMetaMethod* signal);
};

#endif
