#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEVIEW_HXX
#define WEBENGINE_LIBQWEBENGINEVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineView
class VirtualQWebEngineView final : public QWebEngineView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebEngineView_MetaObject_Callback = QMetaObject* (*)(const QWebEngineView*);
    using QWebEngineView_Metacast_Callback = void* (*)(QWebEngineView*, const char*);
    using QWebEngineView_Metacall_Callback = int (*)(QWebEngineView*, int, int, void**);
    using QWebEngineView_SizeHint_Callback = QSize* (*)(const QWebEngineView*);
    using QWebEngineView_CreateWindow_Callback = QWebEngineView* (*)(QWebEngineView*, int);
    using QWebEngineView_ContextMenuEvent_Callback = void (*)(QWebEngineView*, QContextMenuEvent*);
    using QWebEngineView_Event_Callback = bool (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_ShowEvent_Callback = void (*)(QWebEngineView*, QShowEvent*);
    using QWebEngineView_HideEvent_Callback = void (*)(QWebEngineView*, QHideEvent*);
    using QWebEngineView_CloseEvent_Callback = void (*)(QWebEngineView*, QCloseEvent*);
    using QWebEngineView_DragEnterEvent_Callback = void (*)(QWebEngineView*, QDragEnterEvent*);
    using QWebEngineView_DragLeaveEvent_Callback = void (*)(QWebEngineView*, QDragLeaveEvent*);
    using QWebEngineView_DragMoveEvent_Callback = void (*)(QWebEngineView*, QDragMoveEvent*);
    using QWebEngineView_DropEvent_Callback = void (*)(QWebEngineView*, QDropEvent*);
    using QWebEngineView_DevType_Callback = int (*)(const QWebEngineView*);
    using QWebEngineView_SetVisible_Callback = void (*)(QWebEngineView*, bool);
    using QWebEngineView_MinimumSizeHint_Callback = QSize* (*)(const QWebEngineView*);
    using QWebEngineView_HeightForWidth_Callback = int (*)(const QWebEngineView*, int);
    using QWebEngineView_HasHeightForWidth_Callback = bool (*)(const QWebEngineView*);
    using QWebEngineView_PaintEngine_Callback = QPaintEngine* (*)(const QWebEngineView*);
    using QWebEngineView_MousePressEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseReleaseEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseDoubleClickEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseMoveEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_WheelEvent_Callback = void (*)(QWebEngineView*, QWheelEvent*);
    using QWebEngineView_KeyPressEvent_Callback = void (*)(QWebEngineView*, QKeyEvent*);
    using QWebEngineView_KeyReleaseEvent_Callback = void (*)(QWebEngineView*, QKeyEvent*);
    using QWebEngineView_FocusInEvent_Callback = void (*)(QWebEngineView*, QFocusEvent*);
    using QWebEngineView_FocusOutEvent_Callback = void (*)(QWebEngineView*, QFocusEvent*);
    using QWebEngineView_EnterEvent_Callback = void (*)(QWebEngineView*, QEnterEvent*);
    using QWebEngineView_LeaveEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_PaintEvent_Callback = void (*)(QWebEngineView*, QPaintEvent*);
    using QWebEngineView_MoveEvent_Callback = void (*)(QWebEngineView*, QMoveEvent*);
    using QWebEngineView_ResizeEvent_Callback = void (*)(QWebEngineView*, QResizeEvent*);
    using QWebEngineView_TabletEvent_Callback = void (*)(QWebEngineView*, QTabletEvent*);
    using QWebEngineView_ActionEvent_Callback = void (*)(QWebEngineView*, QActionEvent*);
    using QWebEngineView_NativeEvent_Callback = bool (*)(QWebEngineView*, libqt_string, void*, intptr_t*);
    using QWebEngineView_ChangeEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_Metric_Callback = int (*)(const QWebEngineView*, int);
    using QWebEngineView_InitPainter_Callback = void (*)(const QWebEngineView*, QPainter*);
    using QWebEngineView_Redirected_Callback = QPaintDevice* (*)(const QWebEngineView*, QPoint*);
    using QWebEngineView_SharedPainter_Callback = QPainter* (*)(const QWebEngineView*);
    using QWebEngineView_InputMethodEvent_Callback = void (*)(QWebEngineView*, QInputMethodEvent*);
    using QWebEngineView_InputMethodQuery_Callback = QVariant* (*)(const QWebEngineView*, int);
    using QWebEngineView_FocusNextPrevChild_Callback = bool (*)(QWebEngineView*, bool);
    using QWebEngineView_EventFilter_Callback = bool (*)(QWebEngineView*, QObject*, QEvent*);
    using QWebEngineView_TimerEvent_Callback = void (*)(QWebEngineView*, QTimerEvent*);
    using QWebEngineView_ChildEvent_Callback = void (*)(QWebEngineView*, QChildEvent*);
    using QWebEngineView_CustomEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_ConnectNotify_Callback = void (*)(QWebEngineView*, QMetaMethod*);
    using QWebEngineView_DisconnectNotify_Callback = void (*)(QWebEngineView*, QMetaMethod*);
    using QWebEngineView::create;
    using QWebEngineView::destroy;
    using QWebEngineView::focusNextChild;
    using QWebEngineView::focusPreviousChild;
    using QWebEngineView::getDecodedMetricF;
    using QWebEngineView::isSignalConnected;
    using QWebEngineView::receivers;
    using QWebEngineView::sender;
    using QWebEngineView::senderSignalIndex;
    using QWebEngineView::updateMicroFocus;

    // Instance callback storage
    QWebEngineView_MetaObject_Callback qwebengineview_metaobject_callback = nullptr;
    QWebEngineView_Metacast_Callback qwebengineview_metacast_callback = nullptr;
    QWebEngineView_Metacall_Callback qwebengineview_metacall_callback = nullptr;
    QWebEngineView_SizeHint_Callback qwebengineview_sizehint_callback = nullptr;
    QWebEngineView_CreateWindow_Callback qwebengineview_createwindow_callback = nullptr;
    QWebEngineView_ContextMenuEvent_Callback qwebengineview_contextmenuevent_callback = nullptr;
    QWebEngineView_Event_Callback qwebengineview_event_callback = nullptr;
    QWebEngineView_ShowEvent_Callback qwebengineview_showevent_callback = nullptr;
    QWebEngineView_HideEvent_Callback qwebengineview_hideevent_callback = nullptr;
    QWebEngineView_CloseEvent_Callback qwebengineview_closeevent_callback = nullptr;
    QWebEngineView_DragEnterEvent_Callback qwebengineview_dragenterevent_callback = nullptr;
    QWebEngineView_DragLeaveEvent_Callback qwebengineview_dragleaveevent_callback = nullptr;
    QWebEngineView_DragMoveEvent_Callback qwebengineview_dragmoveevent_callback = nullptr;
    QWebEngineView_DropEvent_Callback qwebengineview_dropevent_callback = nullptr;
    QWebEngineView_DevType_Callback qwebengineview_devtype_callback = nullptr;
    QWebEngineView_SetVisible_Callback qwebengineview_setvisible_callback = nullptr;
    QWebEngineView_MinimumSizeHint_Callback qwebengineview_minimumsizehint_callback = nullptr;
    QWebEngineView_HeightForWidth_Callback qwebengineview_heightforwidth_callback = nullptr;
    QWebEngineView_HasHeightForWidth_Callback qwebengineview_hasheightforwidth_callback = nullptr;
    QWebEngineView_PaintEngine_Callback qwebengineview_paintengine_callback = nullptr;
    QWebEngineView_MousePressEvent_Callback qwebengineview_mousepressevent_callback = nullptr;
    QWebEngineView_MouseReleaseEvent_Callback qwebengineview_mousereleaseevent_callback = nullptr;
    QWebEngineView_MouseDoubleClickEvent_Callback qwebengineview_mousedoubleclickevent_callback = nullptr;
    QWebEngineView_MouseMoveEvent_Callback qwebengineview_mousemoveevent_callback = nullptr;
    QWebEngineView_WheelEvent_Callback qwebengineview_wheelevent_callback = nullptr;
    QWebEngineView_KeyPressEvent_Callback qwebengineview_keypressevent_callback = nullptr;
    QWebEngineView_KeyReleaseEvent_Callback qwebengineview_keyreleaseevent_callback = nullptr;
    QWebEngineView_FocusInEvent_Callback qwebengineview_focusinevent_callback = nullptr;
    QWebEngineView_FocusOutEvent_Callback qwebengineview_focusoutevent_callback = nullptr;
    QWebEngineView_EnterEvent_Callback qwebengineview_enterevent_callback = nullptr;
    QWebEngineView_LeaveEvent_Callback qwebengineview_leaveevent_callback = nullptr;
    QWebEngineView_PaintEvent_Callback qwebengineview_paintevent_callback = nullptr;
    QWebEngineView_MoveEvent_Callback qwebengineview_moveevent_callback = nullptr;
    QWebEngineView_ResizeEvent_Callback qwebengineview_resizeevent_callback = nullptr;
    QWebEngineView_TabletEvent_Callback qwebengineview_tabletevent_callback = nullptr;
    QWebEngineView_ActionEvent_Callback qwebengineview_actionevent_callback = nullptr;
    QWebEngineView_NativeEvent_Callback qwebengineview_nativeevent_callback = nullptr;
    QWebEngineView_ChangeEvent_Callback qwebengineview_changeevent_callback = nullptr;
    QWebEngineView_Metric_Callback qwebengineview_metric_callback = nullptr;
    QWebEngineView_InitPainter_Callback qwebengineview_initpainter_callback = nullptr;
    QWebEngineView_Redirected_Callback qwebengineview_redirected_callback = nullptr;
    QWebEngineView_SharedPainter_Callback qwebengineview_sharedpainter_callback = nullptr;
    QWebEngineView_InputMethodEvent_Callback qwebengineview_inputmethodevent_callback = nullptr;
    QWebEngineView_InputMethodQuery_Callback qwebengineview_inputmethodquery_callback = nullptr;
    QWebEngineView_FocusNextPrevChild_Callback qwebengineview_focusnextprevchild_callback = nullptr;
    QWebEngineView_EventFilter_Callback qwebengineview_eventfilter_callback = nullptr;
    QWebEngineView_TimerEvent_Callback qwebengineview_timerevent_callback = nullptr;
    QWebEngineView_ChildEvent_Callback qwebengineview_childevent_callback = nullptr;
    QWebEngineView_CustomEvent_Callback qwebengineview_customevent_callback = nullptr;
    QWebEngineView_ConnectNotify_Callback qwebengineview_connectnotify_callback = nullptr;
    QWebEngineView_DisconnectNotify_Callback qwebengineview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebEngineView {
        using QWebEngineView::actionEvent;
        using QWebEngineView::changeEvent;
        using QWebEngineView::childEvent;
        using QWebEngineView::closeEvent;
        using QWebEngineView::connectNotify;
        using QWebEngineView::contextMenuEvent;
        using QWebEngineView::createWindow;
        using QWebEngineView::customEvent;
        using QWebEngineView::disconnectNotify;
        using QWebEngineView::dragEnterEvent;
        using QWebEngineView::dragLeaveEvent;
        using QWebEngineView::dragMoveEvent;
        using QWebEngineView::dropEvent;
        using QWebEngineView::enterEvent;
        using QWebEngineView::event;
        using QWebEngineView::focusInEvent;
        using QWebEngineView::focusNextPrevChild;
        using QWebEngineView::focusOutEvent;
        using QWebEngineView::hideEvent;
        using QWebEngineView::initPainter;
        using QWebEngineView::inputMethodEvent;
        using QWebEngineView::keyPressEvent;
        using QWebEngineView::keyReleaseEvent;
        using QWebEngineView::leaveEvent;
        using QWebEngineView::metric;
        using QWebEngineView::mouseDoubleClickEvent;
        using QWebEngineView::mouseMoveEvent;
        using QWebEngineView::mousePressEvent;
        using QWebEngineView::mouseReleaseEvent;
        using QWebEngineView::moveEvent;
        using QWebEngineView::nativeEvent;
        using QWebEngineView::paintEvent;
        using QWebEngineView::redirected;
        using QWebEngineView::resizeEvent;
        using QWebEngineView::sharedPainter;
        using QWebEngineView::showEvent;
        using QWebEngineView::tabletEvent;
        using QWebEngineView::timerEvent;
        using QWebEngineView::wheelEvent;
    };

    VirtualQWebEngineView(QWidget* parent) : QWebEngineView(parent) {};
    VirtualQWebEngineView() : QWebEngineView() {};
    VirtualQWebEngineView(QWebEngineProfile* profile) : QWebEngineView(profile) {};
    VirtualQWebEngineView(QWebEnginePage* page) : QWebEngineView(page) {};
    VirtualQWebEngineView(QWebEngineProfile* profile, QWidget* parent) : QWebEngineView(profile, parent) {};
    VirtualQWebEngineView(QWebEnginePage* page, QWidget* parent) : QWebEngineView(page, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineview_metaobject_callback) {
            QMetaObject* callback_ret = qwebengineview_metaobject_callback(this);
            return callback_ret;
        }
        return QWebEngineView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebengineview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebengineview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwebengineview_sizehint_callback) {
            QSize* callback_ret = qwebengineview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWebEngineView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebEngineView* createWindow(QWebEnginePage::WebWindowType typeVal) override {
        if (qwebengineview_createwindow_callback) {
            int cbval1 = static_cast<int>(typeVal);
            QWebEngineView* callback_ret = qwebengineview_createwindow_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineView::createWindow(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qwebengineview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qwebengineview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwebengineview_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qwebengineview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineView::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwebengineview_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qwebengineview_showevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qwebengineview_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qwebengineview_hideevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwebengineview_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qwebengineview_closeevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qwebengineview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qwebengineview_dragenterevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qwebengineview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qwebengineview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qwebengineview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qwebengineview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qwebengineview_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qwebengineview_dropevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwebengineview_devtype_callback) {
            int callback_ret = qwebengineview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwebengineview_setvisible_callback) {
            bool cbval1 = visible;
            qwebengineview_setvisible_callback(this, cbval1);
            return;
        }
        QWebEngineView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwebengineview_minimumsizehint_callback) {
            QSize* callback_ret = qwebengineview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWebEngineView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwebengineview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwebengineview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwebengineview_hasheightforwidth_callback) {
            bool callback_ret = qwebengineview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWebEngineView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwebengineview_paintengine_callback) {
            QPaintEngine* callback_ret = qwebengineview_paintengine_callback(this);
            return callback_ret;
        }
        return QWebEngineView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwebengineview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qwebengineview_mousepressevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwebengineview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qwebengineview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwebengineview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qwebengineview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwebengineview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qwebengineview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwebengineview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qwebengineview_wheelevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwebengineview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qwebengineview_keypressevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwebengineview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qwebengineview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwebengineview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qwebengineview_focusinevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwebengineview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qwebengineview_focusoutevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwebengineview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qwebengineview_enterevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwebengineview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qwebengineview_leaveevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwebengineview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qwebengineview_paintevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwebengineview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qwebengineview_moveevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwebengineview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qwebengineview_resizeevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwebengineview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qwebengineview_tabletevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwebengineview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qwebengineview_actionevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwebengineview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qwebengineview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QWebEngineView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwebengineview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qwebengineview_changeevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwebengineview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qwebengineview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwebengineview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qwebengineview_initpainter_callback(this, cbval1);
            return;
        }
        QWebEngineView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwebengineview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qwebengineview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwebengineview_sharedpainter_callback) {
            QPainter* callback_ret = qwebengineview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QWebEngineView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwebengineview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qwebengineview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwebengineview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qwebengineview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWebEngineView::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwebengineview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qwebengineview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineview_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebengineview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineView::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebengineview_timerevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebengineview_childevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineview_customevent_callback) {
            QEvent* cbval1 = event;
            qwebengineview_customevent_callback(this, cbval1);
            return;
        }
        QWebEngineView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineview_connectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineView::disconnectNotify(signal);
    }

    // Friend functions
    friend QWebEngineView* QWebEngineView_SuperCreateWindow(QWebEngineView* self, int typeVal);
    friend void QWebEngineView_SuperContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1);
    friend bool QWebEngineView_SuperEvent(QWebEngineView* self, QEvent* param1);
    friend void QWebEngineView_SuperShowEvent(QWebEngineView* self, QShowEvent* param1);
    friend void QWebEngineView_SuperHideEvent(QWebEngineView* self, QHideEvent* param1);
    friend void QWebEngineView_SuperCloseEvent(QWebEngineView* self, QCloseEvent* param1);
    friend void QWebEngineView_SuperDragEnterEvent(QWebEngineView* self, QDragEnterEvent* e);
    friend void QWebEngineView_SuperDragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e);
    friend void QWebEngineView_SuperDragMoveEvent(QWebEngineView* self, QDragMoveEvent* e);
    friend void QWebEngineView_SuperDropEvent(QWebEngineView* self, QDropEvent* e);
    friend void QWebEngineView_SuperMousePressEvent(QWebEngineView* self, QMouseEvent* event);
    friend void QWebEngineView_SuperMouseReleaseEvent(QWebEngineView* self, QMouseEvent* event);
    friend void QWebEngineView_SuperMouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event);
    friend void QWebEngineView_SuperMouseMoveEvent(QWebEngineView* self, QMouseEvent* event);
    friend void QWebEngineView_SuperWheelEvent(QWebEngineView* self, QWheelEvent* event);
    friend void QWebEngineView_SuperKeyPressEvent(QWebEngineView* self, QKeyEvent* event);
    friend void QWebEngineView_SuperKeyReleaseEvent(QWebEngineView* self, QKeyEvent* event);
    friend void QWebEngineView_SuperFocusInEvent(QWebEngineView* self, QFocusEvent* event);
    friend void QWebEngineView_SuperFocusOutEvent(QWebEngineView* self, QFocusEvent* event);
    friend void QWebEngineView_SuperEnterEvent(QWebEngineView* self, QEnterEvent* event);
    friend void QWebEngineView_SuperLeaveEvent(QWebEngineView* self, QEvent* event);
    friend void QWebEngineView_SuperPaintEvent(QWebEngineView* self, QPaintEvent* event);
    friend void QWebEngineView_SuperMoveEvent(QWebEngineView* self, QMoveEvent* event);
    friend void QWebEngineView_SuperResizeEvent(QWebEngineView* self, QResizeEvent* event);
    friend void QWebEngineView_SuperTabletEvent(QWebEngineView* self, QTabletEvent* event);
    friend void QWebEngineView_SuperActionEvent(QWebEngineView* self, QActionEvent* event);
    friend bool QWebEngineView_SuperNativeEvent(QWebEngineView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWebEngineView_SuperChangeEvent(QWebEngineView* self, QEvent* param1);
    friend int QWebEngineView_SuperMetric(const QWebEngineView* self, int param1);
    friend void QWebEngineView_SuperInitPainter(const QWebEngineView* self, QPainter* painter);
    friend QPaintDevice* QWebEngineView_SuperRedirected(const QWebEngineView* self, QPoint* offset);
    friend QPainter* QWebEngineView_SuperSharedPainter(const QWebEngineView* self);
    friend void QWebEngineView_SuperInputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1);
    friend bool QWebEngineView_SuperFocusNextPrevChild(QWebEngineView* self, bool next);
    friend void QWebEngineView_SuperTimerEvent(QWebEngineView* self, QTimerEvent* event);
    friend void QWebEngineView_SuperChildEvent(QWebEngineView* self, QChildEvent* event);
    friend void QWebEngineView_SuperCustomEvent(QWebEngineView* self, QEvent* event);
    friend void QWebEngineView_SuperConnectNotify(QWebEngineView* self, const QMetaMethod* signal);
    friend void QWebEngineView_SuperDisconnectNotify(QWebEngineView* self, const QMetaMethod* signal);
};

#endif
