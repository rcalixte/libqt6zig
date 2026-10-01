#pragma once
#ifndef LIBQTOOLBAR_HXX
#define LIBQTOOLBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolBar
class VirtualQToolBar final : public QToolBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QToolBar_MetaObject_Callback = QMetaObject* (*)(const QToolBar*);
    using QToolBar_Metacast_Callback = void* (*)(QToolBar*, const char*);
    using QToolBar_Metacall_Callback = int (*)(QToolBar*, int, int, void**);
    using QToolBar_ActionEvent_Callback = void (*)(QToolBar*, QActionEvent*);
    using QToolBar_ChangeEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_PaintEvent_Callback = void (*)(QToolBar*, QPaintEvent*);
    using QToolBar_Event_Callback = bool (*)(QToolBar*, QEvent*);
    using QToolBar_InitStyleOption_Callback = void (*)(const QToolBar*, QStyleOptionToolBar*);
    using QToolBar_DevType_Callback = int (*)(const QToolBar*);
    using QToolBar_SetVisible_Callback = void (*)(QToolBar*, bool);
    using QToolBar_SizeHint_Callback = QSize* (*)(const QToolBar*);
    using QToolBar_MinimumSizeHint_Callback = QSize* (*)(const QToolBar*);
    using QToolBar_HeightForWidth_Callback = int (*)(const QToolBar*, int);
    using QToolBar_HasHeightForWidth_Callback = bool (*)(const QToolBar*);
    using QToolBar_PaintEngine_Callback = QPaintEngine* (*)(const QToolBar*);
    using QToolBar_MousePressEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseReleaseEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseDoubleClickEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseMoveEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_WheelEvent_Callback = void (*)(QToolBar*, QWheelEvent*);
    using QToolBar_KeyPressEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_KeyReleaseEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_FocusInEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_FocusOutEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_EnterEvent_Callback = void (*)(QToolBar*, QEnterEvent*);
    using QToolBar_LeaveEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_MoveEvent_Callback = void (*)(QToolBar*, QMoveEvent*);
    using QToolBar_ResizeEvent_Callback = void (*)(QToolBar*, QResizeEvent*);
    using QToolBar_CloseEvent_Callback = void (*)(QToolBar*, QCloseEvent*);
    using QToolBar_ContextMenuEvent_Callback = void (*)(QToolBar*, QContextMenuEvent*);
    using QToolBar_TabletEvent_Callback = void (*)(QToolBar*, QTabletEvent*);
    using QToolBar_DragEnterEvent_Callback = void (*)(QToolBar*, QDragEnterEvent*);
    using QToolBar_DragMoveEvent_Callback = void (*)(QToolBar*, QDragMoveEvent*);
    using QToolBar_DragLeaveEvent_Callback = void (*)(QToolBar*, QDragLeaveEvent*);
    using QToolBar_DropEvent_Callback = void (*)(QToolBar*, QDropEvent*);
    using QToolBar_ShowEvent_Callback = void (*)(QToolBar*, QShowEvent*);
    using QToolBar_HideEvent_Callback = void (*)(QToolBar*, QHideEvent*);
    using QToolBar_NativeEvent_Callback = bool (*)(QToolBar*, libqt_string, void*, intptr_t*);
    using QToolBar_Metric_Callback = int (*)(const QToolBar*, int);
    using QToolBar_InitPainter_Callback = void (*)(const QToolBar*, QPainter*);
    using QToolBar_Redirected_Callback = QPaintDevice* (*)(const QToolBar*, QPoint*);
    using QToolBar_SharedPainter_Callback = QPainter* (*)(const QToolBar*);
    using QToolBar_InputMethodEvent_Callback = void (*)(QToolBar*, QInputMethodEvent*);
    using QToolBar_InputMethodQuery_Callback = QVariant* (*)(const QToolBar*, int);
    using QToolBar_FocusNextPrevChild_Callback = bool (*)(QToolBar*, bool);
    using QToolBar_EventFilter_Callback = bool (*)(QToolBar*, QObject*, QEvent*);
    using QToolBar_TimerEvent_Callback = void (*)(QToolBar*, QTimerEvent*);
    using QToolBar_ChildEvent_Callback = void (*)(QToolBar*, QChildEvent*);
    using QToolBar_CustomEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_ConnectNotify_Callback = void (*)(QToolBar*, QMetaMethod*);
    using QToolBar_DisconnectNotify_Callback = void (*)(QToolBar*, QMetaMethod*);
    using QToolBar::create;
    using QToolBar::destroy;
    using QToolBar::focusNextChild;
    using QToolBar::focusPreviousChild;
    using QToolBar::getDecodedMetricF;
    using QToolBar::isSignalConnected;
    using QToolBar::receivers;
    using QToolBar::sender;
    using QToolBar::senderSignalIndex;
    using QToolBar::updateMicroFocus;

    // Instance callback storage
    QToolBar_MetaObject_Callback qtoolbar_metaobject_callback = nullptr;
    QToolBar_Metacast_Callback qtoolbar_metacast_callback = nullptr;
    QToolBar_Metacall_Callback qtoolbar_metacall_callback = nullptr;
    QToolBar_ActionEvent_Callback qtoolbar_actionevent_callback = nullptr;
    QToolBar_ChangeEvent_Callback qtoolbar_changeevent_callback = nullptr;
    QToolBar_PaintEvent_Callback qtoolbar_paintevent_callback = nullptr;
    QToolBar_Event_Callback qtoolbar_event_callback = nullptr;
    QToolBar_InitStyleOption_Callback qtoolbar_initstyleoption_callback = nullptr;
    QToolBar_DevType_Callback qtoolbar_devtype_callback = nullptr;
    QToolBar_SetVisible_Callback qtoolbar_setvisible_callback = nullptr;
    QToolBar_SizeHint_Callback qtoolbar_sizehint_callback = nullptr;
    QToolBar_MinimumSizeHint_Callback qtoolbar_minimumsizehint_callback = nullptr;
    QToolBar_HeightForWidth_Callback qtoolbar_heightforwidth_callback = nullptr;
    QToolBar_HasHeightForWidth_Callback qtoolbar_hasheightforwidth_callback = nullptr;
    QToolBar_PaintEngine_Callback qtoolbar_paintengine_callback = nullptr;
    QToolBar_MousePressEvent_Callback qtoolbar_mousepressevent_callback = nullptr;
    QToolBar_MouseReleaseEvent_Callback qtoolbar_mousereleaseevent_callback = nullptr;
    QToolBar_MouseDoubleClickEvent_Callback qtoolbar_mousedoubleclickevent_callback = nullptr;
    QToolBar_MouseMoveEvent_Callback qtoolbar_mousemoveevent_callback = nullptr;
    QToolBar_WheelEvent_Callback qtoolbar_wheelevent_callback = nullptr;
    QToolBar_KeyPressEvent_Callback qtoolbar_keypressevent_callback = nullptr;
    QToolBar_KeyReleaseEvent_Callback qtoolbar_keyreleaseevent_callback = nullptr;
    QToolBar_FocusInEvent_Callback qtoolbar_focusinevent_callback = nullptr;
    QToolBar_FocusOutEvent_Callback qtoolbar_focusoutevent_callback = nullptr;
    QToolBar_EnterEvent_Callback qtoolbar_enterevent_callback = nullptr;
    QToolBar_LeaveEvent_Callback qtoolbar_leaveevent_callback = nullptr;
    QToolBar_MoveEvent_Callback qtoolbar_moveevent_callback = nullptr;
    QToolBar_ResizeEvent_Callback qtoolbar_resizeevent_callback = nullptr;
    QToolBar_CloseEvent_Callback qtoolbar_closeevent_callback = nullptr;
    QToolBar_ContextMenuEvent_Callback qtoolbar_contextmenuevent_callback = nullptr;
    QToolBar_TabletEvent_Callback qtoolbar_tabletevent_callback = nullptr;
    QToolBar_DragEnterEvent_Callback qtoolbar_dragenterevent_callback = nullptr;
    QToolBar_DragMoveEvent_Callback qtoolbar_dragmoveevent_callback = nullptr;
    QToolBar_DragLeaveEvent_Callback qtoolbar_dragleaveevent_callback = nullptr;
    QToolBar_DropEvent_Callback qtoolbar_dropevent_callback = nullptr;
    QToolBar_ShowEvent_Callback qtoolbar_showevent_callback = nullptr;
    QToolBar_HideEvent_Callback qtoolbar_hideevent_callback = nullptr;
    QToolBar_NativeEvent_Callback qtoolbar_nativeevent_callback = nullptr;
    QToolBar_Metric_Callback qtoolbar_metric_callback = nullptr;
    QToolBar_InitPainter_Callback qtoolbar_initpainter_callback = nullptr;
    QToolBar_Redirected_Callback qtoolbar_redirected_callback = nullptr;
    QToolBar_SharedPainter_Callback qtoolbar_sharedpainter_callback = nullptr;
    QToolBar_InputMethodEvent_Callback qtoolbar_inputmethodevent_callback = nullptr;
    QToolBar_InputMethodQuery_Callback qtoolbar_inputmethodquery_callback = nullptr;
    QToolBar_FocusNextPrevChild_Callback qtoolbar_focusnextprevchild_callback = nullptr;
    QToolBar_EventFilter_Callback qtoolbar_eventfilter_callback = nullptr;
    QToolBar_TimerEvent_Callback qtoolbar_timerevent_callback = nullptr;
    QToolBar_ChildEvent_Callback qtoolbar_childevent_callback = nullptr;
    QToolBar_CustomEvent_Callback qtoolbar_customevent_callback = nullptr;
    QToolBar_ConnectNotify_Callback qtoolbar_connectnotify_callback = nullptr;
    QToolBar_DisconnectNotify_Callback qtoolbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QToolBar {
        using QToolBar::actionEvent;
        using QToolBar::changeEvent;
        using QToolBar::childEvent;
        using QToolBar::closeEvent;
        using QToolBar::connectNotify;
        using QToolBar::contextMenuEvent;
        using QToolBar::customEvent;
        using QToolBar::disconnectNotify;
        using QToolBar::dragEnterEvent;
        using QToolBar::dragLeaveEvent;
        using QToolBar::dragMoveEvent;
        using QToolBar::dropEvent;
        using QToolBar::enterEvent;
        using QToolBar::event;
        using QToolBar::focusInEvent;
        using QToolBar::focusNextPrevChild;
        using QToolBar::focusOutEvent;
        using QToolBar::hideEvent;
        using QToolBar::initPainter;
        using QToolBar::initStyleOption;
        using QToolBar::inputMethodEvent;
        using QToolBar::keyPressEvent;
        using QToolBar::keyReleaseEvent;
        using QToolBar::leaveEvent;
        using QToolBar::metric;
        using QToolBar::mouseDoubleClickEvent;
        using QToolBar::mouseMoveEvent;
        using QToolBar::mousePressEvent;
        using QToolBar::mouseReleaseEvent;
        using QToolBar::moveEvent;
        using QToolBar::nativeEvent;
        using QToolBar::paintEvent;
        using QToolBar::redirected;
        using QToolBar::resizeEvent;
        using QToolBar::sharedPainter;
        using QToolBar::showEvent;
        using QToolBar::tabletEvent;
        using QToolBar::timerEvent;
        using QToolBar::wheelEvent;
    };

    VirtualQToolBar(QWidget* parent) : QToolBar(parent) {};
    VirtualQToolBar(const QString& title) : QToolBar(title) {};
    VirtualQToolBar() : QToolBar() {};
    VirtualQToolBar(const QString& title, QWidget* parent) : QToolBar(title, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtoolbar_metaobject_callback) {
            QMetaObject* callback_ret = qtoolbar_metaobject_callback(this);
            return callback_ret;
        }
        return QToolBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtoolbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtoolbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtoolbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtoolbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtoolbar_actionevent_callback(this, cbval1);
            return;
        }
        QToolBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtoolbar_changeevent_callback) {
            QEvent* cbval1 = event;
            qtoolbar_changeevent_callback(this, cbval1);
            return;
        }
        QToolBar::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtoolbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qtoolbar_paintevent_callback(this, cbval1);
            return;
        }
        QToolBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtoolbar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtoolbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolBar* option) const override {
        if (qtoolbar_initstyleoption_callback) {
            QStyleOptionToolBar* cbval1 = option;
            qtoolbar_initstyleoption_callback(this, cbval1);
            return;
        }
        QToolBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbar_devtype_callback) {
            int callback_ret = qtoolbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbar_setvisible_callback) {
            bool cbval1 = visible;
            qtoolbar_setvisible_callback(this, cbval1);
            return;
        }
        QToolBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbar_sizehint_callback) {
            QSize* callback_ret = qtoolbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbar_minimumsizehint_callback) {
            QSize* callback_ret = qtoolbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtoolbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbar_hasheightforwidth_callback) {
            bool callback_ret = qtoolbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QToolBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbar_paintengine_callback) {
            QPaintEngine* callback_ret = qtoolbar_paintengine_callback(this);
            return callback_ret;
        }
        return QToolBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtoolbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbar_mousepressevent_callback(this, cbval1);
            return;
        }
        QToolBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtoolbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QToolBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QToolBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtoolbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QToolBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtoolbar_wheelevent_callback(this, cbval1);
            return;
        }
        QToolBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtoolbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtoolbar_keypressevent_callback(this, cbval1);
            return;
        }
        QToolBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtoolbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtoolbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QToolBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtoolbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtoolbar_focusinevent_callback(this, cbval1);
            return;
        }
        QToolBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtoolbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtoolbar_focusoutevent_callback(this, cbval1);
            return;
        }
        QToolBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtoolbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtoolbar_enterevent_callback(this, cbval1);
            return;
        }
        QToolBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtoolbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtoolbar_leaveevent_callback(this, cbval1);
            return;
        }
        QToolBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtoolbar_moveevent_callback(this, cbval1);
            return;
        }
        QToolBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtoolbar_resizeevent_callback(this, cbval1);
            return;
        }
        QToolBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtoolbar_closeevent_callback(this, cbval1);
            return;
        }
        QToolBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtoolbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QToolBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtoolbar_tabletevent_callback(this, cbval1);
            return;
        }
        QToolBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtoolbar_dragenterevent_callback(this, cbval1);
            return;
        }
        QToolBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtoolbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QToolBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtoolbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QToolBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtoolbar_dropevent_callback(this, cbval1);
            return;
        }
        QToolBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtoolbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtoolbar_showevent_callback(this, cbval1);
            return;
        }
        QToolBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtoolbar_hideevent_callback(this, cbval1);
            return;
        }
        QToolBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtoolbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QToolBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtoolbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtoolbar_initpainter_callback(this, cbval1);
            return;
        }
        QToolBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtoolbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbar_sharedpainter_callback) {
            QPainter* callback_ret = qtoolbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QToolBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtoolbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QToolBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtoolbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtoolbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtoolbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QToolBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtoolbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtoolbar_timerevent_callback(this, cbval1);
            return;
        }
        QToolBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtoolbar_childevent_callback(this, cbval1);
            return;
        }
        QToolBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbar_customevent_callback) {
            QEvent* cbval1 = event;
            qtoolbar_customevent_callback(this, cbval1);
            return;
        }
        QToolBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbar_connectnotify_callback(this, cbval1);
            return;
        }
        QToolBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QToolBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void QToolBar_SuperActionEvent(QToolBar* self, QActionEvent* event);
    friend void QToolBar_SuperChangeEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperPaintEvent(QToolBar* self, QPaintEvent* event);
    friend bool QToolBar_SuperEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
    friend void QToolBar_SuperMousePressEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseReleaseEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseDoubleClickEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseMoveEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperWheelEvent(QToolBar* self, QWheelEvent* event);
    friend void QToolBar_SuperKeyPressEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_SuperKeyReleaseEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_SuperFocusInEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_SuperFocusOutEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_SuperEnterEvent(QToolBar* self, QEnterEvent* event);
    friend void QToolBar_SuperLeaveEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperMoveEvent(QToolBar* self, QMoveEvent* event);
    friend void QToolBar_SuperResizeEvent(QToolBar* self, QResizeEvent* event);
    friend void QToolBar_SuperCloseEvent(QToolBar* self, QCloseEvent* event);
    friend void QToolBar_SuperContextMenuEvent(QToolBar* self, QContextMenuEvent* event);
    friend void QToolBar_SuperTabletEvent(QToolBar* self, QTabletEvent* event);
    friend void QToolBar_SuperDragEnterEvent(QToolBar* self, QDragEnterEvent* event);
    friend void QToolBar_SuperDragMoveEvent(QToolBar* self, QDragMoveEvent* event);
    friend void QToolBar_SuperDragLeaveEvent(QToolBar* self, QDragLeaveEvent* event);
    friend void QToolBar_SuperDropEvent(QToolBar* self, QDropEvent* event);
    friend void QToolBar_SuperShowEvent(QToolBar* self, QShowEvent* event);
    friend void QToolBar_SuperHideEvent(QToolBar* self, QHideEvent* event);
    friend bool QToolBar_SuperNativeEvent(QToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QToolBar_SuperMetric(const QToolBar* self, int param1);
    friend void QToolBar_SuperInitPainter(const QToolBar* self, QPainter* painter);
    friend QPaintDevice* QToolBar_SuperRedirected(const QToolBar* self, QPoint* offset);
    friend QPainter* QToolBar_SuperSharedPainter(const QToolBar* self);
    friend void QToolBar_SuperInputMethodEvent(QToolBar* self, QInputMethodEvent* param1);
    friend bool QToolBar_SuperFocusNextPrevChild(QToolBar* self, bool next);
    friend void QToolBar_SuperTimerEvent(QToolBar* self, QTimerEvent* event);
    friend void QToolBar_SuperChildEvent(QToolBar* self, QChildEvent* event);
    friend void QToolBar_SuperCustomEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperConnectNotify(QToolBar* self, const QMetaMethod* signal);
    friend void QToolBar_SuperDisconnectNotify(QToolBar* self, const QMetaMethod* signal);
};

#endif
