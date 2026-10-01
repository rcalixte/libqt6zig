#pragma once
#ifndef EXTRAS_KIO_LIBKURLREQUESTER_HXX
#define EXTRAS_KIO_LIBKURLREQUESTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlRequester
class VirtualKUrlRequester final : public KUrlRequester {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlRequester_MetaObject_Callback = QMetaObject* (*)(const KUrlRequester*);
    using KUrlRequester_Metacast_Callback = void* (*)(KUrlRequester*, const char*);
    using KUrlRequester_Metacall_Callback = int (*)(KUrlRequester*, int, int, void**);
    using KUrlRequester_FileDialog_Callback = QFileDialog* (*)(const KUrlRequester*);
    using KUrlRequester_ChangeEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_EventFilter_Callback = bool (*)(KUrlRequester*, QObject*, QEvent*);
    using KUrlRequester_DevType_Callback = int (*)(const KUrlRequester*);
    using KUrlRequester_SetVisible_Callback = void (*)(KUrlRequester*, bool);
    using KUrlRequester_SizeHint_Callback = QSize* (*)(const KUrlRequester*);
    using KUrlRequester_MinimumSizeHint_Callback = QSize* (*)(const KUrlRequester*);
    using KUrlRequester_HeightForWidth_Callback = int (*)(const KUrlRequester*, int);
    using KUrlRequester_HasHeightForWidth_Callback = bool (*)(const KUrlRequester*);
    using KUrlRequester_PaintEngine_Callback = QPaintEngine* (*)(const KUrlRequester*);
    using KUrlRequester_Event_Callback = bool (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_MousePressEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseReleaseEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseDoubleClickEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseMoveEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_WheelEvent_Callback = void (*)(KUrlRequester*, QWheelEvent*);
    using KUrlRequester_KeyPressEvent_Callback = void (*)(KUrlRequester*, QKeyEvent*);
    using KUrlRequester_KeyReleaseEvent_Callback = void (*)(KUrlRequester*, QKeyEvent*);
    using KUrlRequester_FocusInEvent_Callback = void (*)(KUrlRequester*, QFocusEvent*);
    using KUrlRequester_FocusOutEvent_Callback = void (*)(KUrlRequester*, QFocusEvent*);
    using KUrlRequester_EnterEvent_Callback = void (*)(KUrlRequester*, QEnterEvent*);
    using KUrlRequester_LeaveEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_PaintEvent_Callback = void (*)(KUrlRequester*, QPaintEvent*);
    using KUrlRequester_MoveEvent_Callback = void (*)(KUrlRequester*, QMoveEvent*);
    using KUrlRequester_ResizeEvent_Callback = void (*)(KUrlRequester*, QResizeEvent*);
    using KUrlRequester_CloseEvent_Callback = void (*)(KUrlRequester*, QCloseEvent*);
    using KUrlRequester_ContextMenuEvent_Callback = void (*)(KUrlRequester*, QContextMenuEvent*);
    using KUrlRequester_TabletEvent_Callback = void (*)(KUrlRequester*, QTabletEvent*);
    using KUrlRequester_ActionEvent_Callback = void (*)(KUrlRequester*, QActionEvent*);
    using KUrlRequester_DragEnterEvent_Callback = void (*)(KUrlRequester*, QDragEnterEvent*);
    using KUrlRequester_DragMoveEvent_Callback = void (*)(KUrlRequester*, QDragMoveEvent*);
    using KUrlRequester_DragLeaveEvent_Callback = void (*)(KUrlRequester*, QDragLeaveEvent*);
    using KUrlRequester_DropEvent_Callback = void (*)(KUrlRequester*, QDropEvent*);
    using KUrlRequester_ShowEvent_Callback = void (*)(KUrlRequester*, QShowEvent*);
    using KUrlRequester_HideEvent_Callback = void (*)(KUrlRequester*, QHideEvent*);
    using KUrlRequester_NativeEvent_Callback = bool (*)(KUrlRequester*, libqt_string, void*, intptr_t*);
    using KUrlRequester_Metric_Callback = int (*)(const KUrlRequester*, int);
    using KUrlRequester_InitPainter_Callback = void (*)(const KUrlRequester*, QPainter*);
    using KUrlRequester_Redirected_Callback = QPaintDevice* (*)(const KUrlRequester*, QPoint*);
    using KUrlRequester_SharedPainter_Callback = QPainter* (*)(const KUrlRequester*);
    using KUrlRequester_InputMethodEvent_Callback = void (*)(KUrlRequester*, QInputMethodEvent*);
    using KUrlRequester_InputMethodQuery_Callback = QVariant* (*)(const KUrlRequester*, int);
    using KUrlRequester_FocusNextPrevChild_Callback = bool (*)(KUrlRequester*, bool);
    using KUrlRequester_TimerEvent_Callback = void (*)(KUrlRequester*, QTimerEvent*);
    using KUrlRequester_ChildEvent_Callback = void (*)(KUrlRequester*, QChildEvent*);
    using KUrlRequester_CustomEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_ConnectNotify_Callback = void (*)(KUrlRequester*, QMetaMethod*);
    using KUrlRequester_DisconnectNotify_Callback = void (*)(KUrlRequester*, QMetaMethod*);
    using KUrlRequester::create;
    using KUrlRequester::destroy;
    using KUrlRequester::focusNextChild;
    using KUrlRequester::focusPreviousChild;
    using KUrlRequester::getDecodedMetricF;
    using KUrlRequester::isSignalConnected;
    using KUrlRequester::receivers;
    using KUrlRequester::sender;
    using KUrlRequester::senderSignalIndex;
    using KUrlRequester::updateMicroFocus;

    // Instance callback storage
    KUrlRequester_MetaObject_Callback kurlrequester_metaobject_callback = nullptr;
    KUrlRequester_Metacast_Callback kurlrequester_metacast_callback = nullptr;
    KUrlRequester_Metacall_Callback kurlrequester_metacall_callback = nullptr;
    KUrlRequester_FileDialog_Callback kurlrequester_filedialog_callback = nullptr;
    KUrlRequester_ChangeEvent_Callback kurlrequester_changeevent_callback = nullptr;
    KUrlRequester_EventFilter_Callback kurlrequester_eventfilter_callback = nullptr;
    KUrlRequester_DevType_Callback kurlrequester_devtype_callback = nullptr;
    KUrlRequester_SetVisible_Callback kurlrequester_setvisible_callback = nullptr;
    KUrlRequester_SizeHint_Callback kurlrequester_sizehint_callback = nullptr;
    KUrlRequester_MinimumSizeHint_Callback kurlrequester_minimumsizehint_callback = nullptr;
    KUrlRequester_HeightForWidth_Callback kurlrequester_heightforwidth_callback = nullptr;
    KUrlRequester_HasHeightForWidth_Callback kurlrequester_hasheightforwidth_callback = nullptr;
    KUrlRequester_PaintEngine_Callback kurlrequester_paintengine_callback = nullptr;
    KUrlRequester_Event_Callback kurlrequester_event_callback = nullptr;
    KUrlRequester_MousePressEvent_Callback kurlrequester_mousepressevent_callback = nullptr;
    KUrlRequester_MouseReleaseEvent_Callback kurlrequester_mousereleaseevent_callback = nullptr;
    KUrlRequester_MouseDoubleClickEvent_Callback kurlrequester_mousedoubleclickevent_callback = nullptr;
    KUrlRequester_MouseMoveEvent_Callback kurlrequester_mousemoveevent_callback = nullptr;
    KUrlRequester_WheelEvent_Callback kurlrequester_wheelevent_callback = nullptr;
    KUrlRequester_KeyPressEvent_Callback kurlrequester_keypressevent_callback = nullptr;
    KUrlRequester_KeyReleaseEvent_Callback kurlrequester_keyreleaseevent_callback = nullptr;
    KUrlRequester_FocusInEvent_Callback kurlrequester_focusinevent_callback = nullptr;
    KUrlRequester_FocusOutEvent_Callback kurlrequester_focusoutevent_callback = nullptr;
    KUrlRequester_EnterEvent_Callback kurlrequester_enterevent_callback = nullptr;
    KUrlRequester_LeaveEvent_Callback kurlrequester_leaveevent_callback = nullptr;
    KUrlRequester_PaintEvent_Callback kurlrequester_paintevent_callback = nullptr;
    KUrlRequester_MoveEvent_Callback kurlrequester_moveevent_callback = nullptr;
    KUrlRequester_ResizeEvent_Callback kurlrequester_resizeevent_callback = nullptr;
    KUrlRequester_CloseEvent_Callback kurlrequester_closeevent_callback = nullptr;
    KUrlRequester_ContextMenuEvent_Callback kurlrequester_contextmenuevent_callback = nullptr;
    KUrlRequester_TabletEvent_Callback kurlrequester_tabletevent_callback = nullptr;
    KUrlRequester_ActionEvent_Callback kurlrequester_actionevent_callback = nullptr;
    KUrlRequester_DragEnterEvent_Callback kurlrequester_dragenterevent_callback = nullptr;
    KUrlRequester_DragMoveEvent_Callback kurlrequester_dragmoveevent_callback = nullptr;
    KUrlRequester_DragLeaveEvent_Callback kurlrequester_dragleaveevent_callback = nullptr;
    KUrlRequester_DropEvent_Callback kurlrequester_dropevent_callback = nullptr;
    KUrlRequester_ShowEvent_Callback kurlrequester_showevent_callback = nullptr;
    KUrlRequester_HideEvent_Callback kurlrequester_hideevent_callback = nullptr;
    KUrlRequester_NativeEvent_Callback kurlrequester_nativeevent_callback = nullptr;
    KUrlRequester_Metric_Callback kurlrequester_metric_callback = nullptr;
    KUrlRequester_InitPainter_Callback kurlrequester_initpainter_callback = nullptr;
    KUrlRequester_Redirected_Callback kurlrequester_redirected_callback = nullptr;
    KUrlRequester_SharedPainter_Callback kurlrequester_sharedpainter_callback = nullptr;
    KUrlRequester_InputMethodEvent_Callback kurlrequester_inputmethodevent_callback = nullptr;
    KUrlRequester_InputMethodQuery_Callback kurlrequester_inputmethodquery_callback = nullptr;
    KUrlRequester_FocusNextPrevChild_Callback kurlrequester_focusnextprevchild_callback = nullptr;
    KUrlRequester_TimerEvent_Callback kurlrequester_timerevent_callback = nullptr;
    KUrlRequester_ChildEvent_Callback kurlrequester_childevent_callback = nullptr;
    KUrlRequester_CustomEvent_Callback kurlrequester_customevent_callback = nullptr;
    KUrlRequester_ConnectNotify_Callback kurlrequester_connectnotify_callback = nullptr;
    KUrlRequester_DisconnectNotify_Callback kurlrequester_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KUrlRequester {
        using KUrlRequester::actionEvent;
        using KUrlRequester::changeEvent;
        using KUrlRequester::childEvent;
        using KUrlRequester::closeEvent;
        using KUrlRequester::connectNotify;
        using KUrlRequester::contextMenuEvent;
        using KUrlRequester::customEvent;
        using KUrlRequester::disconnectNotify;
        using KUrlRequester::dragEnterEvent;
        using KUrlRequester::dragLeaveEvent;
        using KUrlRequester::dragMoveEvent;
        using KUrlRequester::dropEvent;
        using KUrlRequester::enterEvent;
        using KUrlRequester::event;
        using KUrlRequester::eventFilter;
        using KUrlRequester::focusInEvent;
        using KUrlRequester::focusNextPrevChild;
        using KUrlRequester::focusOutEvent;
        using KUrlRequester::hideEvent;
        using KUrlRequester::initPainter;
        using KUrlRequester::inputMethodEvent;
        using KUrlRequester::keyPressEvent;
        using KUrlRequester::keyReleaseEvent;
        using KUrlRequester::leaveEvent;
        using KUrlRequester::metric;
        using KUrlRequester::mouseDoubleClickEvent;
        using KUrlRequester::mouseMoveEvent;
        using KUrlRequester::mousePressEvent;
        using KUrlRequester::mouseReleaseEvent;
        using KUrlRequester::moveEvent;
        using KUrlRequester::nativeEvent;
        using KUrlRequester::paintEvent;
        using KUrlRequester::redirected;
        using KUrlRequester::resizeEvent;
        using KUrlRequester::sharedPainter;
        using KUrlRequester::showEvent;
        using KUrlRequester::tabletEvent;
        using KUrlRequester::timerEvent;
        using KUrlRequester::wheelEvent;
    };

    VirtualKUrlRequester(QWidget* parent) : KUrlRequester(parent) {};
    VirtualKUrlRequester() : KUrlRequester() {};
    VirtualKUrlRequester(const QUrl& url) : KUrlRequester(url) {};
    VirtualKUrlRequester(QWidget* editWidget, QWidget* parent) : KUrlRequester(editWidget, parent) {};
    VirtualKUrlRequester(const QUrl& url, QWidget* parent) : KUrlRequester(url, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlrequester_metaobject_callback) {
            QMetaObject* callback_ret = kurlrequester_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlRequester::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlrequester_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlrequester_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequester::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlrequester_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlrequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequester::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDialog* fileDialog() const override {
        if (kurlrequester_filedialog_callback) {
            QFileDialog* callback_ret = kurlrequester_filedialog_callback(this);
            return callback_ret;
        }
        return KUrlRequester::fileDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlrequester_changeevent_callback) {
            QEvent* cbval1 = e;
            kurlrequester_changeevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kurlrequester_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;
            bool callback_ret = kurlrequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlRequester::eventFilter(obj, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlrequester_devtype_callback) {
            int callback_ret = kurlrequester_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequester::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlrequester_setvisible_callback) {
            bool cbval1 = visible;
            kurlrequester_setvisible_callback(this, cbval1);
            return;
        }
        KUrlRequester::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlrequester_sizehint_callback) {
            QSize* callback_ret = kurlrequester_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequester::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlrequester_minimumsizehint_callback) {
            QSize* callback_ret = kurlrequester_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequester::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlrequester_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurlrequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequester::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlrequester_hasheightforwidth_callback) {
            bool callback_ret = kurlrequester_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlRequester::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlrequester_paintengine_callback) {
            QPaintEngine* callback_ret = kurlrequester_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlRequester::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlrequester_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlrequester_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequester::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlrequester_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequester_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlrequester_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequester_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlrequester_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequester_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlrequester_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlrequester_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlrequester_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kurlrequester_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlrequester_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlrequester_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlrequester_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlrequester_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlrequester_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlrequester_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlrequester_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlrequester_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlrequester_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurlrequester_enterevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlrequester_leaveevent_callback) {
            QEvent* cbval1 = event;
            kurlrequester_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlrequester_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kurlrequester_paintevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlrequester_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurlrequester_moveevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlrequester_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kurlrequester_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlrequester_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kurlrequester_closeevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlrequester_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kurlrequester_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlrequester_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurlrequester_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlrequester_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurlrequester_actionevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlrequester_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurlrequester_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlrequester_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurlrequester_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlrequester_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurlrequester_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlrequester_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurlrequester_dropevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlrequester_showevent_callback) {
            QShowEvent* cbval1 = event;
            kurlrequester_showevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlrequester_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kurlrequester_hideevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlrequester_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurlrequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlRequester::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlrequester_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurlrequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequester::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlrequester_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurlrequester_initpainter_callback(this, cbval1);
            return;
        }
        KUrlRequester::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlrequester_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurlrequester_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequester::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlrequester_sharedpainter_callback) {
            QPainter* callback_ret = kurlrequester_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlRequester::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlrequester_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurlrequester_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlrequester_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurlrequester_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlRequester::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlrequester_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurlrequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlRequester::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlrequester_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlrequester_timerevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlrequester_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlrequester_childevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlrequester_customevent_callback) {
            QEvent* cbval1 = event;
            kurlrequester_customevent_callback(this, cbval1);
            return;
        }
        KUrlRequester::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlrequester_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlrequester_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlRequester::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlrequester_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlrequester_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlRequester::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlRequester_SuperChangeEvent(KUrlRequester* self, QEvent* e);
    friend bool KUrlRequester_SuperEventFilter(KUrlRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlRequester_SuperEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_SuperMousePressEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_SuperMouseReleaseEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_SuperMouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_SuperMouseMoveEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_SuperWheelEvent(KUrlRequester* self, QWheelEvent* event);
    friend void KUrlRequester_SuperKeyPressEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_SuperKeyReleaseEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_SuperFocusInEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_SuperFocusOutEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_SuperEnterEvent(KUrlRequester* self, QEnterEvent* event);
    friend void KUrlRequester_SuperLeaveEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_SuperPaintEvent(KUrlRequester* self, QPaintEvent* event);
    friend void KUrlRequester_SuperMoveEvent(KUrlRequester* self, QMoveEvent* event);
    friend void KUrlRequester_SuperResizeEvent(KUrlRequester* self, QResizeEvent* event);
    friend void KUrlRequester_SuperCloseEvent(KUrlRequester* self, QCloseEvent* event);
    friend void KUrlRequester_SuperContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event);
    friend void KUrlRequester_SuperTabletEvent(KUrlRequester* self, QTabletEvent* event);
    friend void KUrlRequester_SuperActionEvent(KUrlRequester* self, QActionEvent* event);
    friend void KUrlRequester_SuperDragEnterEvent(KUrlRequester* self, QDragEnterEvent* event);
    friend void KUrlRequester_SuperDragMoveEvent(KUrlRequester* self, QDragMoveEvent* event);
    friend void KUrlRequester_SuperDragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event);
    friend void KUrlRequester_SuperDropEvent(KUrlRequester* self, QDropEvent* event);
    friend void KUrlRequester_SuperShowEvent(KUrlRequester* self, QShowEvent* event);
    friend void KUrlRequester_SuperHideEvent(KUrlRequester* self, QHideEvent* event);
    friend bool KUrlRequester_SuperNativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlRequester_SuperMetric(const KUrlRequester* self, int param1);
    friend void KUrlRequester_SuperInitPainter(const KUrlRequester* self, QPainter* painter);
    friend QPaintDevice* KUrlRequester_SuperRedirected(const KUrlRequester* self, QPoint* offset);
    friend QPainter* KUrlRequester_SuperSharedPainter(const KUrlRequester* self);
    friend void KUrlRequester_SuperInputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1);
    friend bool KUrlRequester_SuperFocusNextPrevChild(KUrlRequester* self, bool next);
    friend void KUrlRequester_SuperTimerEvent(KUrlRequester* self, QTimerEvent* event);
    friend void KUrlRequester_SuperChildEvent(KUrlRequester* self, QChildEvent* event);
    friend void KUrlRequester_SuperCustomEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_SuperConnectNotify(KUrlRequester* self, const QMetaMethod* signal);
    friend void KUrlRequester_SuperDisconnectNotify(KUrlRequester* self, const QMetaMethod* signal);
};

// This class is a subclass of KUrlComboRequester
class VirtualKUrlComboRequester final : public KUrlComboRequester {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlComboRequester_MetaObject_Callback = QMetaObject* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_Metacast_Callback = void* (*)(KUrlComboRequester*, const char*);
    using KUrlComboRequester_Metacall_Callback = int (*)(KUrlComboRequester*, int, int, void**);
    using KUrlComboRequester_FileDialog_Callback = QFileDialog* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_ChangeEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_EventFilter_Callback = bool (*)(KUrlComboRequester*, QObject*, QEvent*);
    using KUrlComboRequester_DevType_Callback = int (*)(const KUrlComboRequester*);
    using KUrlComboRequester_SetVisible_Callback = void (*)(KUrlComboRequester*, bool);
    using KUrlComboRequester_SizeHint_Callback = QSize* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_MinimumSizeHint_Callback = QSize* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_HeightForWidth_Callback = int (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_HasHeightForWidth_Callback = bool (*)(const KUrlComboRequester*);
    using KUrlComboRequester_PaintEngine_Callback = QPaintEngine* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_Event_Callback = bool (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_MousePressEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseReleaseEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseDoubleClickEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseMoveEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_WheelEvent_Callback = void (*)(KUrlComboRequester*, QWheelEvent*);
    using KUrlComboRequester_KeyPressEvent_Callback = void (*)(KUrlComboRequester*, QKeyEvent*);
    using KUrlComboRequester_KeyReleaseEvent_Callback = void (*)(KUrlComboRequester*, QKeyEvent*);
    using KUrlComboRequester_FocusInEvent_Callback = void (*)(KUrlComboRequester*, QFocusEvent*);
    using KUrlComboRequester_FocusOutEvent_Callback = void (*)(KUrlComboRequester*, QFocusEvent*);
    using KUrlComboRequester_EnterEvent_Callback = void (*)(KUrlComboRequester*, QEnterEvent*);
    using KUrlComboRequester_LeaveEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_PaintEvent_Callback = void (*)(KUrlComboRequester*, QPaintEvent*);
    using KUrlComboRequester_MoveEvent_Callback = void (*)(KUrlComboRequester*, QMoveEvent*);
    using KUrlComboRequester_ResizeEvent_Callback = void (*)(KUrlComboRequester*, QResizeEvent*);
    using KUrlComboRequester_CloseEvent_Callback = void (*)(KUrlComboRequester*, QCloseEvent*);
    using KUrlComboRequester_ContextMenuEvent_Callback = void (*)(KUrlComboRequester*, QContextMenuEvent*);
    using KUrlComboRequester_TabletEvent_Callback = void (*)(KUrlComboRequester*, QTabletEvent*);
    using KUrlComboRequester_ActionEvent_Callback = void (*)(KUrlComboRequester*, QActionEvent*);
    using KUrlComboRequester_DragEnterEvent_Callback = void (*)(KUrlComboRequester*, QDragEnterEvent*);
    using KUrlComboRequester_DragMoveEvent_Callback = void (*)(KUrlComboRequester*, QDragMoveEvent*);
    using KUrlComboRequester_DragLeaveEvent_Callback = void (*)(KUrlComboRequester*, QDragLeaveEvent*);
    using KUrlComboRequester_DropEvent_Callback = void (*)(KUrlComboRequester*, QDropEvent*);
    using KUrlComboRequester_ShowEvent_Callback = void (*)(KUrlComboRequester*, QShowEvent*);
    using KUrlComboRequester_HideEvent_Callback = void (*)(KUrlComboRequester*, QHideEvent*);
    using KUrlComboRequester_NativeEvent_Callback = bool (*)(KUrlComboRequester*, libqt_string, void*, intptr_t*);
    using KUrlComboRequester_Metric_Callback = int (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_InitPainter_Callback = void (*)(const KUrlComboRequester*, QPainter*);
    using KUrlComboRequester_Redirected_Callback = QPaintDevice* (*)(const KUrlComboRequester*, QPoint*);
    using KUrlComboRequester_SharedPainter_Callback = QPainter* (*)(const KUrlComboRequester*);
    using KUrlComboRequester_InputMethodEvent_Callback = void (*)(KUrlComboRequester*, QInputMethodEvent*);
    using KUrlComboRequester_InputMethodQuery_Callback = QVariant* (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_FocusNextPrevChild_Callback = bool (*)(KUrlComboRequester*, bool);
    using KUrlComboRequester_TimerEvent_Callback = void (*)(KUrlComboRequester*, QTimerEvent*);
    using KUrlComboRequester_ChildEvent_Callback = void (*)(KUrlComboRequester*, QChildEvent*);
    using KUrlComboRequester_CustomEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_ConnectNotify_Callback = void (*)(KUrlComboRequester*, QMetaMethod*);
    using KUrlComboRequester_DisconnectNotify_Callback = void (*)(KUrlComboRequester*, QMetaMethod*);
    using KUrlComboRequester::create;
    using KUrlComboRequester::destroy;
    using KUrlComboRequester::focusNextChild;
    using KUrlComboRequester::focusPreviousChild;
    using KUrlComboRequester::getDecodedMetricF;
    using KUrlComboRequester::isSignalConnected;
    using KUrlComboRequester::receivers;
    using KUrlComboRequester::sender;
    using KUrlComboRequester::senderSignalIndex;
    using KUrlComboRequester::updateMicroFocus;

    // Instance callback storage
    KUrlComboRequester_MetaObject_Callback kurlcomborequester_metaobject_callback = nullptr;
    KUrlComboRequester_Metacast_Callback kurlcomborequester_metacast_callback = nullptr;
    KUrlComboRequester_Metacall_Callback kurlcomborequester_metacall_callback = nullptr;
    KUrlComboRequester_FileDialog_Callback kurlcomborequester_filedialog_callback = nullptr;
    KUrlComboRequester_ChangeEvent_Callback kurlcomborequester_changeevent_callback = nullptr;
    KUrlComboRequester_EventFilter_Callback kurlcomborequester_eventfilter_callback = nullptr;
    KUrlComboRequester_DevType_Callback kurlcomborequester_devtype_callback = nullptr;
    KUrlComboRequester_SetVisible_Callback kurlcomborequester_setvisible_callback = nullptr;
    KUrlComboRequester_SizeHint_Callback kurlcomborequester_sizehint_callback = nullptr;
    KUrlComboRequester_MinimumSizeHint_Callback kurlcomborequester_minimumsizehint_callback = nullptr;
    KUrlComboRequester_HeightForWidth_Callback kurlcomborequester_heightforwidth_callback = nullptr;
    KUrlComboRequester_HasHeightForWidth_Callback kurlcomborequester_hasheightforwidth_callback = nullptr;
    KUrlComboRequester_PaintEngine_Callback kurlcomborequester_paintengine_callback = nullptr;
    KUrlComboRequester_Event_Callback kurlcomborequester_event_callback = nullptr;
    KUrlComboRequester_MousePressEvent_Callback kurlcomborequester_mousepressevent_callback = nullptr;
    KUrlComboRequester_MouseReleaseEvent_Callback kurlcomborequester_mousereleaseevent_callback = nullptr;
    KUrlComboRequester_MouseDoubleClickEvent_Callback kurlcomborequester_mousedoubleclickevent_callback = nullptr;
    KUrlComboRequester_MouseMoveEvent_Callback kurlcomborequester_mousemoveevent_callback = nullptr;
    KUrlComboRequester_WheelEvent_Callback kurlcomborequester_wheelevent_callback = nullptr;
    KUrlComboRequester_KeyPressEvent_Callback kurlcomborequester_keypressevent_callback = nullptr;
    KUrlComboRequester_KeyReleaseEvent_Callback kurlcomborequester_keyreleaseevent_callback = nullptr;
    KUrlComboRequester_FocusInEvent_Callback kurlcomborequester_focusinevent_callback = nullptr;
    KUrlComboRequester_FocusOutEvent_Callback kurlcomborequester_focusoutevent_callback = nullptr;
    KUrlComboRequester_EnterEvent_Callback kurlcomborequester_enterevent_callback = nullptr;
    KUrlComboRequester_LeaveEvent_Callback kurlcomborequester_leaveevent_callback = nullptr;
    KUrlComboRequester_PaintEvent_Callback kurlcomborequester_paintevent_callback = nullptr;
    KUrlComboRequester_MoveEvent_Callback kurlcomborequester_moveevent_callback = nullptr;
    KUrlComboRequester_ResizeEvent_Callback kurlcomborequester_resizeevent_callback = nullptr;
    KUrlComboRequester_CloseEvent_Callback kurlcomborequester_closeevent_callback = nullptr;
    KUrlComboRequester_ContextMenuEvent_Callback kurlcomborequester_contextmenuevent_callback = nullptr;
    KUrlComboRequester_TabletEvent_Callback kurlcomborequester_tabletevent_callback = nullptr;
    KUrlComboRequester_ActionEvent_Callback kurlcomborequester_actionevent_callback = nullptr;
    KUrlComboRequester_DragEnterEvent_Callback kurlcomborequester_dragenterevent_callback = nullptr;
    KUrlComboRequester_DragMoveEvent_Callback kurlcomborequester_dragmoveevent_callback = nullptr;
    KUrlComboRequester_DragLeaveEvent_Callback kurlcomborequester_dragleaveevent_callback = nullptr;
    KUrlComboRequester_DropEvent_Callback kurlcomborequester_dropevent_callback = nullptr;
    KUrlComboRequester_ShowEvent_Callback kurlcomborequester_showevent_callback = nullptr;
    KUrlComboRequester_HideEvent_Callback kurlcomborequester_hideevent_callback = nullptr;
    KUrlComboRequester_NativeEvent_Callback kurlcomborequester_nativeevent_callback = nullptr;
    KUrlComboRequester_Metric_Callback kurlcomborequester_metric_callback = nullptr;
    KUrlComboRequester_InitPainter_Callback kurlcomborequester_initpainter_callback = nullptr;
    KUrlComboRequester_Redirected_Callback kurlcomborequester_redirected_callback = nullptr;
    KUrlComboRequester_SharedPainter_Callback kurlcomborequester_sharedpainter_callback = nullptr;
    KUrlComboRequester_InputMethodEvent_Callback kurlcomborequester_inputmethodevent_callback = nullptr;
    KUrlComboRequester_InputMethodQuery_Callback kurlcomborequester_inputmethodquery_callback = nullptr;
    KUrlComboRequester_FocusNextPrevChild_Callback kurlcomborequester_focusnextprevchild_callback = nullptr;
    KUrlComboRequester_TimerEvent_Callback kurlcomborequester_timerevent_callback = nullptr;
    KUrlComboRequester_ChildEvent_Callback kurlcomborequester_childevent_callback = nullptr;
    KUrlComboRequester_CustomEvent_Callback kurlcomborequester_customevent_callback = nullptr;
    KUrlComboRequester_ConnectNotify_Callback kurlcomborequester_connectnotify_callback = nullptr;
    KUrlComboRequester_DisconnectNotify_Callback kurlcomborequester_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KUrlComboRequester {
        using KUrlComboRequester::actionEvent;
        using KUrlComboRequester::changeEvent;
        using KUrlComboRequester::childEvent;
        using KUrlComboRequester::closeEvent;
        using KUrlComboRequester::connectNotify;
        using KUrlComboRequester::contextMenuEvent;
        using KUrlComboRequester::customEvent;
        using KUrlComboRequester::disconnectNotify;
        using KUrlComboRequester::dragEnterEvent;
        using KUrlComboRequester::dragLeaveEvent;
        using KUrlComboRequester::dragMoveEvent;
        using KUrlComboRequester::dropEvent;
        using KUrlComboRequester::enterEvent;
        using KUrlComboRequester::event;
        using KUrlComboRequester::eventFilter;
        using KUrlComboRequester::focusInEvent;
        using KUrlComboRequester::focusNextPrevChild;
        using KUrlComboRequester::focusOutEvent;
        using KUrlComboRequester::hideEvent;
        using KUrlComboRequester::initPainter;
        using KUrlComboRequester::inputMethodEvent;
        using KUrlComboRequester::keyPressEvent;
        using KUrlComboRequester::keyReleaseEvent;
        using KUrlComboRequester::leaveEvent;
        using KUrlComboRequester::metric;
        using KUrlComboRequester::mouseDoubleClickEvent;
        using KUrlComboRequester::mouseMoveEvent;
        using KUrlComboRequester::mousePressEvent;
        using KUrlComboRequester::mouseReleaseEvent;
        using KUrlComboRequester::moveEvent;
        using KUrlComboRequester::nativeEvent;
        using KUrlComboRequester::paintEvent;
        using KUrlComboRequester::redirected;
        using KUrlComboRequester::resizeEvent;
        using KUrlComboRequester::sharedPainter;
        using KUrlComboRequester::showEvent;
        using KUrlComboRequester::tabletEvent;
        using KUrlComboRequester::timerEvent;
        using KUrlComboRequester::wheelEvent;
    };

    VirtualKUrlComboRequester(QWidget* parent) : KUrlComboRequester(parent) {};
    VirtualKUrlComboRequester() : KUrlComboRequester() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlcomborequester_metaobject_callback) {
            QMetaObject* callback_ret = kurlcomborequester_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlComboRequester::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlcomborequester_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlcomborequester_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboRequester::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcomborequester_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlcomborequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboRequester::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDialog* fileDialog() const override {
        if (kurlcomborequester_filedialog_callback) {
            QFileDialog* callback_ret = kurlcomborequester_filedialog_callback(this);
            return callback_ret;
        }
        return KUrlComboRequester::fileDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlcomborequester_changeevent_callback) {
            QEvent* cbval1 = e;
            kurlcomborequester_changeevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kurlcomborequester_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;
            bool callback_ret = kurlcomborequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlComboRequester::eventFilter(obj, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlcomborequester_devtype_callback) {
            int callback_ret = kurlcomborequester_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboRequester::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlcomborequester_setvisible_callback) {
            bool cbval1 = visible;
            kurlcomborequester_setvisible_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlcomborequester_sizehint_callback) {
            QSize* callback_ret = kurlcomborequester_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboRequester::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlcomborequester_minimumsizehint_callback) {
            QSize* callback_ret = kurlcomborequester_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboRequester::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlcomborequester_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurlcomborequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboRequester::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlcomborequester_hasheightforwidth_callback) {
            bool callback_ret = kurlcomborequester_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlComboRequester::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlcomborequester_paintengine_callback) {
            QPaintEngine* callback_ret = kurlcomborequester_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlComboRequester::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcomborequester_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlcomborequester_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboRequester::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcomborequester_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcomborequester_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcomborequester_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcomborequester_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlcomborequester_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kurlcomborequester_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlcomborequester_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlcomborequester_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlcomborequester_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kurlcomborequester_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlcomborequester_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlcomborequester_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlcomborequester_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kurlcomborequester_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlcomborequester_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurlcomborequester_enterevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlcomborequester_leaveevent_callback) {
            QEvent* cbval1 = event;
            kurlcomborequester_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlcomborequester_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kurlcomborequester_paintevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlcomborequester_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurlcomborequester_moveevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlcomborequester_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kurlcomborequester_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlcomborequester_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kurlcomborequester_closeevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlcomborequester_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kurlcomborequester_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlcomborequester_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurlcomborequester_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlcomborequester_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurlcomborequester_actionevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlcomborequester_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurlcomborequester_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlcomborequester_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurlcomborequester_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlcomborequester_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurlcomborequester_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlcomborequester_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurlcomborequester_dropevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlcomborequester_showevent_callback) {
            QShowEvent* cbval1 = event;
            kurlcomborequester_showevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlcomborequester_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kurlcomborequester_hideevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlcomborequester_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurlcomborequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlComboRequester::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlcomborequester_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurlcomborequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboRequester::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlcomborequester_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurlcomborequester_initpainter_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlcomborequester_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurlcomborequester_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboRequester::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlcomborequester_sharedpainter_callback) {
            QPainter* callback_ret = kurlcomborequester_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlComboRequester::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlcomborequester_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurlcomborequester_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlcomborequester_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurlcomborequester_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboRequester::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlcomborequester_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurlcomborequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboRequester::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcomborequester_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlcomborequester_timerevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcomborequester_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlcomborequester_childevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcomborequester_customevent_callback) {
            QEvent* cbval1 = event;
            kurlcomborequester_customevent_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcomborequester_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcomborequester_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcomborequester_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcomborequester_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlComboRequester::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlComboRequester_SuperChangeEvent(KUrlComboRequester* self, QEvent* e);
    friend bool KUrlComboRequester_SuperEventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlComboRequester_SuperEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_SuperMousePressEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_SuperMouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_SuperMouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_SuperMouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_SuperWheelEvent(KUrlComboRequester* self, QWheelEvent* event);
    friend void KUrlComboRequester_SuperKeyPressEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_SuperKeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_SuperFocusInEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_SuperFocusOutEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_SuperEnterEvent(KUrlComboRequester* self, QEnterEvent* event);
    friend void KUrlComboRequester_SuperLeaveEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_SuperPaintEvent(KUrlComboRequester* self, QPaintEvent* event);
    friend void KUrlComboRequester_SuperMoveEvent(KUrlComboRequester* self, QMoveEvent* event);
    friend void KUrlComboRequester_SuperResizeEvent(KUrlComboRequester* self, QResizeEvent* event);
    friend void KUrlComboRequester_SuperCloseEvent(KUrlComboRequester* self, QCloseEvent* event);
    friend void KUrlComboRequester_SuperContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event);
    friend void KUrlComboRequester_SuperTabletEvent(KUrlComboRequester* self, QTabletEvent* event);
    friend void KUrlComboRequester_SuperActionEvent(KUrlComboRequester* self, QActionEvent* event);
    friend void KUrlComboRequester_SuperDragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event);
    friend void KUrlComboRequester_SuperDragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event);
    friend void KUrlComboRequester_SuperDragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event);
    friend void KUrlComboRequester_SuperDropEvent(KUrlComboRequester* self, QDropEvent* event);
    friend void KUrlComboRequester_SuperShowEvent(KUrlComboRequester* self, QShowEvent* event);
    friend void KUrlComboRequester_SuperHideEvent(KUrlComboRequester* self, QHideEvent* event);
    friend bool KUrlComboRequester_SuperNativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlComboRequester_SuperMetric(const KUrlComboRequester* self, int param1);
    friend void KUrlComboRequester_SuperInitPainter(const KUrlComboRequester* self, QPainter* painter);
    friend QPaintDevice* KUrlComboRequester_SuperRedirected(const KUrlComboRequester* self, QPoint* offset);
    friend QPainter* KUrlComboRequester_SuperSharedPainter(const KUrlComboRequester* self);
    friend void KUrlComboRequester_SuperInputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1);
    friend bool KUrlComboRequester_SuperFocusNextPrevChild(KUrlComboRequester* self, bool next);
    friend void KUrlComboRequester_SuperTimerEvent(KUrlComboRequester* self, QTimerEvent* event);
    friend void KUrlComboRequester_SuperChildEvent(KUrlComboRequester* self, QChildEvent* event);
    friend void KUrlComboRequester_SuperCustomEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_SuperConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
    friend void KUrlComboRequester_SuperDisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
};

#endif
