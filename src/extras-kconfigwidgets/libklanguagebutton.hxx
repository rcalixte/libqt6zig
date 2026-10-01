#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKLANGUAGEBUTTON_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKLANGUAGEBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLanguageButton
class VirtualKLanguageButton final : public KLanguageButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLanguageButton_MetaObject_Callback = QMetaObject* (*)(const KLanguageButton*);
    using KLanguageButton_Metacast_Callback = void* (*)(KLanguageButton*, const char*);
    using KLanguageButton_Metacall_Callback = int (*)(KLanguageButton*, int, int, void**);
    using KLanguageButton_DevType_Callback = int (*)(const KLanguageButton*);
    using KLanguageButton_SetVisible_Callback = void (*)(KLanguageButton*, bool);
    using KLanguageButton_SizeHint_Callback = QSize* (*)(const KLanguageButton*);
    using KLanguageButton_MinimumSizeHint_Callback = QSize* (*)(const KLanguageButton*);
    using KLanguageButton_HeightForWidth_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_HasHeightForWidth_Callback = bool (*)(const KLanguageButton*);
    using KLanguageButton_PaintEngine_Callback = QPaintEngine* (*)(const KLanguageButton*);
    using KLanguageButton_Event_Callback = bool (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_MousePressEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseReleaseEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseDoubleClickEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseMoveEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_WheelEvent_Callback = void (*)(KLanguageButton*, QWheelEvent*);
    using KLanguageButton_KeyPressEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_KeyReleaseEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_FocusInEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_FocusOutEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_EnterEvent_Callback = void (*)(KLanguageButton*, QEnterEvent*);
    using KLanguageButton_LeaveEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_PaintEvent_Callback = void (*)(KLanguageButton*, QPaintEvent*);
    using KLanguageButton_MoveEvent_Callback = void (*)(KLanguageButton*, QMoveEvent*);
    using KLanguageButton_ResizeEvent_Callback = void (*)(KLanguageButton*, QResizeEvent*);
    using KLanguageButton_CloseEvent_Callback = void (*)(KLanguageButton*, QCloseEvent*);
    using KLanguageButton_ContextMenuEvent_Callback = void (*)(KLanguageButton*, QContextMenuEvent*);
    using KLanguageButton_TabletEvent_Callback = void (*)(KLanguageButton*, QTabletEvent*);
    using KLanguageButton_ActionEvent_Callback = void (*)(KLanguageButton*, QActionEvent*);
    using KLanguageButton_DragEnterEvent_Callback = void (*)(KLanguageButton*, QDragEnterEvent*);
    using KLanguageButton_DragMoveEvent_Callback = void (*)(KLanguageButton*, QDragMoveEvent*);
    using KLanguageButton_DragLeaveEvent_Callback = void (*)(KLanguageButton*, QDragLeaveEvent*);
    using KLanguageButton_DropEvent_Callback = void (*)(KLanguageButton*, QDropEvent*);
    using KLanguageButton_ShowEvent_Callback = void (*)(KLanguageButton*, QShowEvent*);
    using KLanguageButton_HideEvent_Callback = void (*)(KLanguageButton*, QHideEvent*);
    using KLanguageButton_NativeEvent_Callback = bool (*)(KLanguageButton*, libqt_string, void*, intptr_t*);
    using KLanguageButton_ChangeEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_Metric_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_InitPainter_Callback = void (*)(const KLanguageButton*, QPainter*);
    using KLanguageButton_Redirected_Callback = QPaintDevice* (*)(const KLanguageButton*, QPoint*);
    using KLanguageButton_SharedPainter_Callback = QPainter* (*)(const KLanguageButton*);
    using KLanguageButton_InputMethodEvent_Callback = void (*)(KLanguageButton*, QInputMethodEvent*);
    using KLanguageButton_InputMethodQuery_Callback = QVariant* (*)(const KLanguageButton*, int);
    using KLanguageButton_FocusNextPrevChild_Callback = bool (*)(KLanguageButton*, bool);
    using KLanguageButton_EventFilter_Callback = bool (*)(KLanguageButton*, QObject*, QEvent*);
    using KLanguageButton_TimerEvent_Callback = void (*)(KLanguageButton*, QTimerEvent*);
    using KLanguageButton_ChildEvent_Callback = void (*)(KLanguageButton*, QChildEvent*);
    using KLanguageButton_CustomEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_ConnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton_DisconnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton::create;
    using KLanguageButton::destroy;
    using KLanguageButton::focusNextChild;
    using KLanguageButton::focusPreviousChild;
    using KLanguageButton::getDecodedMetricF;
    using KLanguageButton::isSignalConnected;
    using KLanguageButton::receivers;
    using KLanguageButton::sender;
    using KLanguageButton::senderSignalIndex;
    using KLanguageButton::updateMicroFocus;

    // Instance callback storage
    KLanguageButton_MetaObject_Callback klanguagebutton_metaobject_callback = nullptr;
    KLanguageButton_Metacast_Callback klanguagebutton_metacast_callback = nullptr;
    KLanguageButton_Metacall_Callback klanguagebutton_metacall_callback = nullptr;
    KLanguageButton_DevType_Callback klanguagebutton_devtype_callback = nullptr;
    KLanguageButton_SetVisible_Callback klanguagebutton_setvisible_callback = nullptr;
    KLanguageButton_SizeHint_Callback klanguagebutton_sizehint_callback = nullptr;
    KLanguageButton_MinimumSizeHint_Callback klanguagebutton_minimumsizehint_callback = nullptr;
    KLanguageButton_HeightForWidth_Callback klanguagebutton_heightforwidth_callback = nullptr;
    KLanguageButton_HasHeightForWidth_Callback klanguagebutton_hasheightforwidth_callback = nullptr;
    KLanguageButton_PaintEngine_Callback klanguagebutton_paintengine_callback = nullptr;
    KLanguageButton_Event_Callback klanguagebutton_event_callback = nullptr;
    KLanguageButton_MousePressEvent_Callback klanguagebutton_mousepressevent_callback = nullptr;
    KLanguageButton_MouseReleaseEvent_Callback klanguagebutton_mousereleaseevent_callback = nullptr;
    KLanguageButton_MouseDoubleClickEvent_Callback klanguagebutton_mousedoubleclickevent_callback = nullptr;
    KLanguageButton_MouseMoveEvent_Callback klanguagebutton_mousemoveevent_callback = nullptr;
    KLanguageButton_WheelEvent_Callback klanguagebutton_wheelevent_callback = nullptr;
    KLanguageButton_KeyPressEvent_Callback klanguagebutton_keypressevent_callback = nullptr;
    KLanguageButton_KeyReleaseEvent_Callback klanguagebutton_keyreleaseevent_callback = nullptr;
    KLanguageButton_FocusInEvent_Callback klanguagebutton_focusinevent_callback = nullptr;
    KLanguageButton_FocusOutEvent_Callback klanguagebutton_focusoutevent_callback = nullptr;
    KLanguageButton_EnterEvent_Callback klanguagebutton_enterevent_callback = nullptr;
    KLanguageButton_LeaveEvent_Callback klanguagebutton_leaveevent_callback = nullptr;
    KLanguageButton_PaintEvent_Callback klanguagebutton_paintevent_callback = nullptr;
    KLanguageButton_MoveEvent_Callback klanguagebutton_moveevent_callback = nullptr;
    KLanguageButton_ResizeEvent_Callback klanguagebutton_resizeevent_callback = nullptr;
    KLanguageButton_CloseEvent_Callback klanguagebutton_closeevent_callback = nullptr;
    KLanguageButton_ContextMenuEvent_Callback klanguagebutton_contextmenuevent_callback = nullptr;
    KLanguageButton_TabletEvent_Callback klanguagebutton_tabletevent_callback = nullptr;
    KLanguageButton_ActionEvent_Callback klanguagebutton_actionevent_callback = nullptr;
    KLanguageButton_DragEnterEvent_Callback klanguagebutton_dragenterevent_callback = nullptr;
    KLanguageButton_DragMoveEvent_Callback klanguagebutton_dragmoveevent_callback = nullptr;
    KLanguageButton_DragLeaveEvent_Callback klanguagebutton_dragleaveevent_callback = nullptr;
    KLanguageButton_DropEvent_Callback klanguagebutton_dropevent_callback = nullptr;
    KLanguageButton_ShowEvent_Callback klanguagebutton_showevent_callback = nullptr;
    KLanguageButton_HideEvent_Callback klanguagebutton_hideevent_callback = nullptr;
    KLanguageButton_NativeEvent_Callback klanguagebutton_nativeevent_callback = nullptr;
    KLanguageButton_ChangeEvent_Callback klanguagebutton_changeevent_callback = nullptr;
    KLanguageButton_Metric_Callback klanguagebutton_metric_callback = nullptr;
    KLanguageButton_InitPainter_Callback klanguagebutton_initpainter_callback = nullptr;
    KLanguageButton_Redirected_Callback klanguagebutton_redirected_callback = nullptr;
    KLanguageButton_SharedPainter_Callback klanguagebutton_sharedpainter_callback = nullptr;
    KLanguageButton_InputMethodEvent_Callback klanguagebutton_inputmethodevent_callback = nullptr;
    KLanguageButton_InputMethodQuery_Callback klanguagebutton_inputmethodquery_callback = nullptr;
    KLanguageButton_FocusNextPrevChild_Callback klanguagebutton_focusnextprevchild_callback = nullptr;
    KLanguageButton_EventFilter_Callback klanguagebutton_eventfilter_callback = nullptr;
    KLanguageButton_TimerEvent_Callback klanguagebutton_timerevent_callback = nullptr;
    KLanguageButton_ChildEvent_Callback klanguagebutton_childevent_callback = nullptr;
    KLanguageButton_CustomEvent_Callback klanguagebutton_customevent_callback = nullptr;
    KLanguageButton_ConnectNotify_Callback klanguagebutton_connectnotify_callback = nullptr;
    KLanguageButton_DisconnectNotify_Callback klanguagebutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLanguageButton {
        using KLanguageButton::actionEvent;
        using KLanguageButton::changeEvent;
        using KLanguageButton::childEvent;
        using KLanguageButton::closeEvent;
        using KLanguageButton::connectNotify;
        using KLanguageButton::contextMenuEvent;
        using KLanguageButton::customEvent;
        using KLanguageButton::disconnectNotify;
        using KLanguageButton::dragEnterEvent;
        using KLanguageButton::dragLeaveEvent;
        using KLanguageButton::dragMoveEvent;
        using KLanguageButton::dropEvent;
        using KLanguageButton::enterEvent;
        using KLanguageButton::event;
        using KLanguageButton::focusInEvent;
        using KLanguageButton::focusNextPrevChild;
        using KLanguageButton::focusOutEvent;
        using KLanguageButton::hideEvent;
        using KLanguageButton::initPainter;
        using KLanguageButton::inputMethodEvent;
        using KLanguageButton::keyPressEvent;
        using KLanguageButton::keyReleaseEvent;
        using KLanguageButton::leaveEvent;
        using KLanguageButton::metric;
        using KLanguageButton::mouseDoubleClickEvent;
        using KLanguageButton::mouseMoveEvent;
        using KLanguageButton::mousePressEvent;
        using KLanguageButton::mouseReleaseEvent;
        using KLanguageButton::moveEvent;
        using KLanguageButton::nativeEvent;
        using KLanguageButton::paintEvent;
        using KLanguageButton::redirected;
        using KLanguageButton::resizeEvent;
        using KLanguageButton::sharedPainter;
        using KLanguageButton::showEvent;
        using KLanguageButton::tabletEvent;
        using KLanguageButton::timerEvent;
        using KLanguageButton::wheelEvent;
    };

    VirtualKLanguageButton(QWidget* parent) : KLanguageButton(parent) {};
    VirtualKLanguageButton() : KLanguageButton() {};
    VirtualKLanguageButton(const QString& text) : KLanguageButton(text) {};
    VirtualKLanguageButton(const QString& text, QWidget* parent) : KLanguageButton(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klanguagebutton_metaobject_callback) {
            QMetaObject* callback_ret = klanguagebutton_metaobject_callback(this);
            return callback_ret;
        }
        return KLanguageButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klanguagebutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klanguagebutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klanguagebutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klanguagebutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klanguagebutton_devtype_callback) {
            int callback_ret = klanguagebutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klanguagebutton_setvisible_callback) {
            bool cbval1 = visible;
            klanguagebutton_setvisible_callback(this, cbval1);
            return;
        }
        KLanguageButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klanguagebutton_sizehint_callback) {
            QSize* callback_ret = klanguagebutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLanguageButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klanguagebutton_minimumsizehint_callback) {
            QSize* callback_ret = klanguagebutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLanguageButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klanguagebutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = klanguagebutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klanguagebutton_hasheightforwidth_callback) {
            bool callback_ret = klanguagebutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KLanguageButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klanguagebutton_paintengine_callback) {
            QPaintEngine* callback_ret = klanguagebutton_paintengine_callback(this);
            return callback_ret;
        }
        return KLanguageButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klanguagebutton_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klanguagebutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            klanguagebutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            klanguagebutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            klanguagebutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            klanguagebutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klanguagebutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            klanguagebutton_wheelevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (klanguagebutton_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            klanguagebutton_keypressevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (klanguagebutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            klanguagebutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            klanguagebutton_focusinevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            klanguagebutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klanguagebutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            klanguagebutton_enterevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klanguagebutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            klanguagebutton_leaveevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (klanguagebutton_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            klanguagebutton_paintevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klanguagebutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            klanguagebutton_moveevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klanguagebutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            klanguagebutton_resizeevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klanguagebutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            klanguagebutton_closeevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (klanguagebutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            klanguagebutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klanguagebutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            klanguagebutton_tabletevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klanguagebutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            klanguagebutton_actionevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (klanguagebutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            klanguagebutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (klanguagebutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            klanguagebutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (klanguagebutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            klanguagebutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (klanguagebutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            klanguagebutton_dropevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klanguagebutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            klanguagebutton_showevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klanguagebutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            klanguagebutton_hideevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klanguagebutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = klanguagebutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KLanguageButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klanguagebutton_changeevent_callback) {
            QEvent* cbval1 = param1;
            klanguagebutton_changeevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klanguagebutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = klanguagebutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klanguagebutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            klanguagebutton_initpainter_callback(this, cbval1);
            return;
        }
        KLanguageButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klanguagebutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = klanguagebutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klanguagebutton_sharedpainter_callback) {
            QPainter* callback_ret = klanguagebutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KLanguageButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klanguagebutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            klanguagebutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klanguagebutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = klanguagebutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLanguageButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klanguagebutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = klanguagebutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klanguagebutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klanguagebutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLanguageButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klanguagebutton_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klanguagebutton_timerevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klanguagebutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            klanguagebutton_childevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klanguagebutton_customevent_callback) {
            QEvent* cbval1 = event;
            klanguagebutton_customevent_callback(this, cbval1);
            return;
        }
        KLanguageButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klanguagebutton_connectnotify_callback(this, cbval1);
            return;
        }
        KLanguageButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klanguagebutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLanguageButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KLanguageButton_SuperEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_SuperMousePressEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseReleaseEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseMoveEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperWheelEvent(KLanguageButton* self, QWheelEvent* event);
    friend void KLanguageButton_SuperKeyPressEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_SuperKeyReleaseEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_SuperFocusInEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_SuperFocusOutEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_SuperEnterEvent(KLanguageButton* self, QEnterEvent* event);
    friend void KLanguageButton_SuperLeaveEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_SuperPaintEvent(KLanguageButton* self, QPaintEvent* event);
    friend void KLanguageButton_SuperMoveEvent(KLanguageButton* self, QMoveEvent* event);
    friend void KLanguageButton_SuperResizeEvent(KLanguageButton* self, QResizeEvent* event);
    friend void KLanguageButton_SuperCloseEvent(KLanguageButton* self, QCloseEvent* event);
    friend void KLanguageButton_SuperContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event);
    friend void KLanguageButton_SuperTabletEvent(KLanguageButton* self, QTabletEvent* event);
    friend void KLanguageButton_SuperActionEvent(KLanguageButton* self, QActionEvent* event);
    friend void KLanguageButton_SuperDragEnterEvent(KLanguageButton* self, QDragEnterEvent* event);
    friend void KLanguageButton_SuperDragMoveEvent(KLanguageButton* self, QDragMoveEvent* event);
    friend void KLanguageButton_SuperDragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event);
    friend void KLanguageButton_SuperDropEvent(KLanguageButton* self, QDropEvent* event);
    friend void KLanguageButton_SuperShowEvent(KLanguageButton* self, QShowEvent* event);
    friend void KLanguageButton_SuperHideEvent(KLanguageButton* self, QHideEvent* event);
    friend bool KLanguageButton_SuperNativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KLanguageButton_SuperChangeEvent(KLanguageButton* self, QEvent* param1);
    friend int KLanguageButton_SuperMetric(const KLanguageButton* self, int param1);
    friend void KLanguageButton_SuperInitPainter(const KLanguageButton* self, QPainter* painter);
    friend QPaintDevice* KLanguageButton_SuperRedirected(const KLanguageButton* self, QPoint* offset);
    friend QPainter* KLanguageButton_SuperSharedPainter(const KLanguageButton* self);
    friend void KLanguageButton_SuperInputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1);
    friend bool KLanguageButton_SuperFocusNextPrevChild(KLanguageButton* self, bool next);
    friend void KLanguageButton_SuperTimerEvent(KLanguageButton* self, QTimerEvent* event);
    friend void KLanguageButton_SuperChildEvent(KLanguageButton* self, QChildEvent* event);
    friend void KLanguageButton_SuperCustomEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_SuperConnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_SuperDisconnectNotify(KLanguageButton* self, const QMetaMethod* signal);
};

#endif
