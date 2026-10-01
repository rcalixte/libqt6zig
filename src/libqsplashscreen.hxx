#pragma once
#ifndef LIBQSPLASHSCREEN_HXX
#define LIBQSPLASHSCREEN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSplashScreen
class VirtualQSplashScreen final : public QSplashScreen {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSplashScreen_MetaObject_Callback = QMetaObject* (*)(const QSplashScreen*);
    using QSplashScreen_Metacast_Callback = void* (*)(QSplashScreen*, const char*);
    using QSplashScreen_Metacall_Callback = int (*)(QSplashScreen*, int, int, void**);
    using QSplashScreen_Event_Callback = bool (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_DrawContents_Callback = void (*)(QSplashScreen*, QPainter*);
    using QSplashScreen_MousePressEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_DevType_Callback = int (*)(const QSplashScreen*);
    using QSplashScreen_SetVisible_Callback = void (*)(QSplashScreen*, bool);
    using QSplashScreen_SizeHint_Callback = QSize* (*)(const QSplashScreen*);
    using QSplashScreen_MinimumSizeHint_Callback = QSize* (*)(const QSplashScreen*);
    using QSplashScreen_HeightForWidth_Callback = int (*)(const QSplashScreen*, int);
    using QSplashScreen_HasHeightForWidth_Callback = bool (*)(const QSplashScreen*);
    using QSplashScreen_PaintEngine_Callback = QPaintEngine* (*)(const QSplashScreen*);
    using QSplashScreen_MouseReleaseEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_MouseDoubleClickEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_MouseMoveEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_WheelEvent_Callback = void (*)(QSplashScreen*, QWheelEvent*);
    using QSplashScreen_KeyPressEvent_Callback = void (*)(QSplashScreen*, QKeyEvent*);
    using QSplashScreen_KeyReleaseEvent_Callback = void (*)(QSplashScreen*, QKeyEvent*);
    using QSplashScreen_FocusInEvent_Callback = void (*)(QSplashScreen*, QFocusEvent*);
    using QSplashScreen_FocusOutEvent_Callback = void (*)(QSplashScreen*, QFocusEvent*);
    using QSplashScreen_EnterEvent_Callback = void (*)(QSplashScreen*, QEnterEvent*);
    using QSplashScreen_LeaveEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_PaintEvent_Callback = void (*)(QSplashScreen*, QPaintEvent*);
    using QSplashScreen_MoveEvent_Callback = void (*)(QSplashScreen*, QMoveEvent*);
    using QSplashScreen_ResizeEvent_Callback = void (*)(QSplashScreen*, QResizeEvent*);
    using QSplashScreen_CloseEvent_Callback = void (*)(QSplashScreen*, QCloseEvent*);
    using QSplashScreen_ContextMenuEvent_Callback = void (*)(QSplashScreen*, QContextMenuEvent*);
    using QSplashScreen_TabletEvent_Callback = void (*)(QSplashScreen*, QTabletEvent*);
    using QSplashScreen_ActionEvent_Callback = void (*)(QSplashScreen*, QActionEvent*);
    using QSplashScreen_DragEnterEvent_Callback = void (*)(QSplashScreen*, QDragEnterEvent*);
    using QSplashScreen_DragMoveEvent_Callback = void (*)(QSplashScreen*, QDragMoveEvent*);
    using QSplashScreen_DragLeaveEvent_Callback = void (*)(QSplashScreen*, QDragLeaveEvent*);
    using QSplashScreen_DropEvent_Callback = void (*)(QSplashScreen*, QDropEvent*);
    using QSplashScreen_ShowEvent_Callback = void (*)(QSplashScreen*, QShowEvent*);
    using QSplashScreen_HideEvent_Callback = void (*)(QSplashScreen*, QHideEvent*);
    using QSplashScreen_NativeEvent_Callback = bool (*)(QSplashScreen*, libqt_string, void*, intptr_t*);
    using QSplashScreen_ChangeEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_Metric_Callback = int (*)(const QSplashScreen*, int);
    using QSplashScreen_InitPainter_Callback = void (*)(const QSplashScreen*, QPainter*);
    using QSplashScreen_Redirected_Callback = QPaintDevice* (*)(const QSplashScreen*, QPoint*);
    using QSplashScreen_SharedPainter_Callback = QPainter* (*)(const QSplashScreen*);
    using QSplashScreen_InputMethodEvent_Callback = void (*)(QSplashScreen*, QInputMethodEvent*);
    using QSplashScreen_InputMethodQuery_Callback = QVariant* (*)(const QSplashScreen*, int);
    using QSplashScreen_FocusNextPrevChild_Callback = bool (*)(QSplashScreen*, bool);
    using QSplashScreen_EventFilter_Callback = bool (*)(QSplashScreen*, QObject*, QEvent*);
    using QSplashScreen_TimerEvent_Callback = void (*)(QSplashScreen*, QTimerEvent*);
    using QSplashScreen_ChildEvent_Callback = void (*)(QSplashScreen*, QChildEvent*);
    using QSplashScreen_CustomEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_ConnectNotify_Callback = void (*)(QSplashScreen*, QMetaMethod*);
    using QSplashScreen_DisconnectNotify_Callback = void (*)(QSplashScreen*, QMetaMethod*);
    using QSplashScreen::create;
    using QSplashScreen::destroy;
    using QSplashScreen::focusNextChild;
    using QSplashScreen::focusPreviousChild;
    using QSplashScreen::getDecodedMetricF;
    using QSplashScreen::isSignalConnected;
    using QSplashScreen::receivers;
    using QSplashScreen::sender;
    using QSplashScreen::senderSignalIndex;
    using QSplashScreen::updateMicroFocus;

    // Instance callback storage
    QSplashScreen_MetaObject_Callback qsplashscreen_metaobject_callback = nullptr;
    QSplashScreen_Metacast_Callback qsplashscreen_metacast_callback = nullptr;
    QSplashScreen_Metacall_Callback qsplashscreen_metacall_callback = nullptr;
    QSplashScreen_Event_Callback qsplashscreen_event_callback = nullptr;
    QSplashScreen_DrawContents_Callback qsplashscreen_drawcontents_callback = nullptr;
    QSplashScreen_MousePressEvent_Callback qsplashscreen_mousepressevent_callback = nullptr;
    QSplashScreen_DevType_Callback qsplashscreen_devtype_callback = nullptr;
    QSplashScreen_SetVisible_Callback qsplashscreen_setvisible_callback = nullptr;
    QSplashScreen_SizeHint_Callback qsplashscreen_sizehint_callback = nullptr;
    QSplashScreen_MinimumSizeHint_Callback qsplashscreen_minimumsizehint_callback = nullptr;
    QSplashScreen_HeightForWidth_Callback qsplashscreen_heightforwidth_callback = nullptr;
    QSplashScreen_HasHeightForWidth_Callback qsplashscreen_hasheightforwidth_callback = nullptr;
    QSplashScreen_PaintEngine_Callback qsplashscreen_paintengine_callback = nullptr;
    QSplashScreen_MouseReleaseEvent_Callback qsplashscreen_mousereleaseevent_callback = nullptr;
    QSplashScreen_MouseDoubleClickEvent_Callback qsplashscreen_mousedoubleclickevent_callback = nullptr;
    QSplashScreen_MouseMoveEvent_Callback qsplashscreen_mousemoveevent_callback = nullptr;
    QSplashScreen_WheelEvent_Callback qsplashscreen_wheelevent_callback = nullptr;
    QSplashScreen_KeyPressEvent_Callback qsplashscreen_keypressevent_callback = nullptr;
    QSplashScreen_KeyReleaseEvent_Callback qsplashscreen_keyreleaseevent_callback = nullptr;
    QSplashScreen_FocusInEvent_Callback qsplashscreen_focusinevent_callback = nullptr;
    QSplashScreen_FocusOutEvent_Callback qsplashscreen_focusoutevent_callback = nullptr;
    QSplashScreen_EnterEvent_Callback qsplashscreen_enterevent_callback = nullptr;
    QSplashScreen_LeaveEvent_Callback qsplashscreen_leaveevent_callback = nullptr;
    QSplashScreen_PaintEvent_Callback qsplashscreen_paintevent_callback = nullptr;
    QSplashScreen_MoveEvent_Callback qsplashscreen_moveevent_callback = nullptr;
    QSplashScreen_ResizeEvent_Callback qsplashscreen_resizeevent_callback = nullptr;
    QSplashScreen_CloseEvent_Callback qsplashscreen_closeevent_callback = nullptr;
    QSplashScreen_ContextMenuEvent_Callback qsplashscreen_contextmenuevent_callback = nullptr;
    QSplashScreen_TabletEvent_Callback qsplashscreen_tabletevent_callback = nullptr;
    QSplashScreen_ActionEvent_Callback qsplashscreen_actionevent_callback = nullptr;
    QSplashScreen_DragEnterEvent_Callback qsplashscreen_dragenterevent_callback = nullptr;
    QSplashScreen_DragMoveEvent_Callback qsplashscreen_dragmoveevent_callback = nullptr;
    QSplashScreen_DragLeaveEvent_Callback qsplashscreen_dragleaveevent_callback = nullptr;
    QSplashScreen_DropEvent_Callback qsplashscreen_dropevent_callback = nullptr;
    QSplashScreen_ShowEvent_Callback qsplashscreen_showevent_callback = nullptr;
    QSplashScreen_HideEvent_Callback qsplashscreen_hideevent_callback = nullptr;
    QSplashScreen_NativeEvent_Callback qsplashscreen_nativeevent_callback = nullptr;
    QSplashScreen_ChangeEvent_Callback qsplashscreen_changeevent_callback = nullptr;
    QSplashScreen_Metric_Callback qsplashscreen_metric_callback = nullptr;
    QSplashScreen_InitPainter_Callback qsplashscreen_initpainter_callback = nullptr;
    QSplashScreen_Redirected_Callback qsplashscreen_redirected_callback = nullptr;
    QSplashScreen_SharedPainter_Callback qsplashscreen_sharedpainter_callback = nullptr;
    QSplashScreen_InputMethodEvent_Callback qsplashscreen_inputmethodevent_callback = nullptr;
    QSplashScreen_InputMethodQuery_Callback qsplashscreen_inputmethodquery_callback = nullptr;
    QSplashScreen_FocusNextPrevChild_Callback qsplashscreen_focusnextprevchild_callback = nullptr;
    QSplashScreen_EventFilter_Callback qsplashscreen_eventfilter_callback = nullptr;
    QSplashScreen_TimerEvent_Callback qsplashscreen_timerevent_callback = nullptr;
    QSplashScreen_ChildEvent_Callback qsplashscreen_childevent_callback = nullptr;
    QSplashScreen_CustomEvent_Callback qsplashscreen_customevent_callback = nullptr;
    QSplashScreen_ConnectNotify_Callback qsplashscreen_connectnotify_callback = nullptr;
    QSplashScreen_DisconnectNotify_Callback qsplashscreen_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSplashScreen {
        using QSplashScreen::actionEvent;
        using QSplashScreen::changeEvent;
        using QSplashScreen::childEvent;
        using QSplashScreen::closeEvent;
        using QSplashScreen::connectNotify;
        using QSplashScreen::contextMenuEvent;
        using QSplashScreen::customEvent;
        using QSplashScreen::disconnectNotify;
        using QSplashScreen::dragEnterEvent;
        using QSplashScreen::dragLeaveEvent;
        using QSplashScreen::dragMoveEvent;
        using QSplashScreen::drawContents;
        using QSplashScreen::dropEvent;
        using QSplashScreen::enterEvent;
        using QSplashScreen::event;
        using QSplashScreen::focusInEvent;
        using QSplashScreen::focusNextPrevChild;
        using QSplashScreen::focusOutEvent;
        using QSplashScreen::hideEvent;
        using QSplashScreen::initPainter;
        using QSplashScreen::inputMethodEvent;
        using QSplashScreen::keyPressEvent;
        using QSplashScreen::keyReleaseEvent;
        using QSplashScreen::leaveEvent;
        using QSplashScreen::metric;
        using QSplashScreen::mouseDoubleClickEvent;
        using QSplashScreen::mouseMoveEvent;
        using QSplashScreen::mousePressEvent;
        using QSplashScreen::mouseReleaseEvent;
        using QSplashScreen::moveEvent;
        using QSplashScreen::nativeEvent;
        using QSplashScreen::paintEvent;
        using QSplashScreen::redirected;
        using QSplashScreen::resizeEvent;
        using QSplashScreen::sharedPainter;
        using QSplashScreen::showEvent;
        using QSplashScreen::tabletEvent;
        using QSplashScreen::timerEvent;
        using QSplashScreen::wheelEvent;
    };

    VirtualQSplashScreen() : QSplashScreen() {};
    VirtualQSplashScreen(QScreen* screen) : QSplashScreen(screen) {};
    VirtualQSplashScreen(const QPixmap& pixmap) : QSplashScreen(pixmap) {};
    VirtualQSplashScreen(const QPixmap& pixmap, Qt::WindowFlags f) : QSplashScreen(pixmap, f) {};
    VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap) : QSplashScreen(screen, pixmap) {};
    VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap, Qt::WindowFlags f) : QSplashScreen(screen, pixmap, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplashscreen_metaobject_callback) {
            QMetaObject* callback_ret = qsplashscreen_metaobject_callback(this);
            return callback_ret;
        }
        return QSplashScreen::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplashscreen_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsplashscreen_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSplashScreen::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplashscreen_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsplashscreen_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplashScreen::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsplashscreen_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qsplashscreen_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSplashScreen::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* painter) override {
        if (qsplashscreen_drawcontents_callback) {
            QPainter* cbval1 = painter;
            qsplashscreen_drawcontents_callback(this, cbval1);
            return;
        }
        QSplashScreen::drawContents(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsplashscreen_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsplashscreen_mousepressevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplashscreen_devtype_callback) {
            int callback_ret = qsplashscreen_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSplashScreen::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplashscreen_setvisible_callback) {
            bool cbval1 = visible;
            qsplashscreen_setvisible_callback(this, cbval1);
            return;
        }
        QSplashScreen::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplashscreen_sizehint_callback) {
            QSize* callback_ret = qsplashscreen_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplashScreen::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplashscreen_minimumsizehint_callback) {
            QSize* callback_ret = qsplashscreen_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplashScreen::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplashscreen_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsplashscreen_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplashScreen::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplashscreen_hasheightforwidth_callback) {
            bool callback_ret = qsplashscreen_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSplashScreen::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplashscreen_paintengine_callback) {
            QPaintEngine* callback_ret = qsplashscreen_paintengine_callback(this);
            return callback_ret;
        }
        return QSplashScreen::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplashscreen_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplashscreen_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplashscreen_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplashscreen_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qsplashscreen_wheelevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplashscreen_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplashscreen_keypressevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplashscreen_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplashscreen_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplashscreen_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplashscreen_focusinevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplashscreen_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplashscreen_focusoutevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplashscreen_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsplashscreen_enterevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplashscreen_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsplashscreen_leaveevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qsplashscreen_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qsplashscreen_paintevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplashscreen_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsplashscreen_moveevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsplashscreen_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qsplashscreen_resizeevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplashscreen_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsplashscreen_closeevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplashscreen_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qsplashscreen_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplashscreen_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsplashscreen_tabletevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplashscreen_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsplashscreen_actionevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplashscreen_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qsplashscreen_dragenterevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplashscreen_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qsplashscreen_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplashscreen_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qsplashscreen_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplashscreen_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qsplashscreen_dropevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplashscreen_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsplashscreen_showevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplashscreen_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsplashscreen_hideevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplashscreen_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsplashscreen_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSplashScreen::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplashscreen_changeevent_callback) {
            QEvent* cbval1 = param1;
            qsplashscreen_changeevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplashscreen_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsplashscreen_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplashScreen::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplashscreen_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsplashscreen_initpainter_callback(this, cbval1);
            return;
        }
        QSplashScreen::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplashscreen_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsplashscreen_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSplashScreen::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplashscreen_sharedpainter_callback) {
            QPainter* callback_ret = qsplashscreen_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSplashScreen::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplashscreen_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qsplashscreen_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplashscreen_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qsplashscreen_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplashScreen::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplashscreen_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsplashscreen_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSplashScreen::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplashscreen_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsplashscreen_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplashScreen::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplashscreen_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsplashscreen_timerevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplashscreen_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsplashscreen_childevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplashscreen_customevent_callback) {
            QEvent* cbval1 = event;
            qsplashscreen_customevent_callback(this, cbval1);
            return;
        }
        QSplashScreen::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplashscreen_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplashscreen_connectnotify_callback(this, cbval1);
            return;
        }
        QSplashScreen::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplashscreen_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplashscreen_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSplashScreen::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSplashScreen_SuperEvent(QSplashScreen* self, QEvent* e);
    friend void QSplashScreen_SuperDrawContents(QSplashScreen* self, QPainter* painter);
    friend void QSplashScreen_SuperMousePressEvent(QSplashScreen* self, QMouseEvent* param1);
    friend void QSplashScreen_SuperMouseReleaseEvent(QSplashScreen* self, QMouseEvent* event);
    friend void QSplashScreen_SuperMouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event);
    friend void QSplashScreen_SuperMouseMoveEvent(QSplashScreen* self, QMouseEvent* event);
    friend void QSplashScreen_SuperWheelEvent(QSplashScreen* self, QWheelEvent* event);
    friend void QSplashScreen_SuperKeyPressEvent(QSplashScreen* self, QKeyEvent* event);
    friend void QSplashScreen_SuperKeyReleaseEvent(QSplashScreen* self, QKeyEvent* event);
    friend void QSplashScreen_SuperFocusInEvent(QSplashScreen* self, QFocusEvent* event);
    friend void QSplashScreen_SuperFocusOutEvent(QSplashScreen* self, QFocusEvent* event);
    friend void QSplashScreen_SuperEnterEvent(QSplashScreen* self, QEnterEvent* event);
    friend void QSplashScreen_SuperLeaveEvent(QSplashScreen* self, QEvent* event);
    friend void QSplashScreen_SuperPaintEvent(QSplashScreen* self, QPaintEvent* event);
    friend void QSplashScreen_SuperMoveEvent(QSplashScreen* self, QMoveEvent* event);
    friend void QSplashScreen_SuperResizeEvent(QSplashScreen* self, QResizeEvent* event);
    friend void QSplashScreen_SuperCloseEvent(QSplashScreen* self, QCloseEvent* event);
    friend void QSplashScreen_SuperContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event);
    friend void QSplashScreen_SuperTabletEvent(QSplashScreen* self, QTabletEvent* event);
    friend void QSplashScreen_SuperActionEvent(QSplashScreen* self, QActionEvent* event);
    friend void QSplashScreen_SuperDragEnterEvent(QSplashScreen* self, QDragEnterEvent* event);
    friend void QSplashScreen_SuperDragMoveEvent(QSplashScreen* self, QDragMoveEvent* event);
    friend void QSplashScreen_SuperDragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event);
    friend void QSplashScreen_SuperDropEvent(QSplashScreen* self, QDropEvent* event);
    friend void QSplashScreen_SuperShowEvent(QSplashScreen* self, QShowEvent* event);
    friend void QSplashScreen_SuperHideEvent(QSplashScreen* self, QHideEvent* event);
    friend bool QSplashScreen_SuperNativeEvent(QSplashScreen* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSplashScreen_SuperChangeEvent(QSplashScreen* self, QEvent* param1);
    friend int QSplashScreen_SuperMetric(const QSplashScreen* self, int param1);
    friend void QSplashScreen_SuperInitPainter(const QSplashScreen* self, QPainter* painter);
    friend QPaintDevice* QSplashScreen_SuperRedirected(const QSplashScreen* self, QPoint* offset);
    friend QPainter* QSplashScreen_SuperSharedPainter(const QSplashScreen* self);
    friend void QSplashScreen_SuperInputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1);
    friend bool QSplashScreen_SuperFocusNextPrevChild(QSplashScreen* self, bool next);
    friend void QSplashScreen_SuperTimerEvent(QSplashScreen* self, QTimerEvent* event);
    friend void QSplashScreen_SuperChildEvent(QSplashScreen* self, QChildEvent* event);
    friend void QSplashScreen_SuperCustomEvent(QSplashScreen* self, QEvent* event);
    friend void QSplashScreen_SuperConnectNotify(QSplashScreen* self, const QMetaMethod* signal);
    friend void QSplashScreen_SuperDisconnectNotify(QSplashScreen* self, const QMetaMethod* signal);
};

#endif
