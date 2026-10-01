#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPASSWORDLINEEDIT_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPASSWORDLINEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPasswordLineEdit
class VirtualKPasswordLineEdit final : public KPasswordLineEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPasswordLineEdit_MetaObject_Callback = QMetaObject* (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_Metacast_Callback = void* (*)(KPasswordLineEdit*, const char*);
    using KPasswordLineEdit_Metacall_Callback = int (*)(KPasswordLineEdit*, int, int, void**);
    using KPasswordLineEdit_DevType_Callback = int (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_SetVisible_Callback = void (*)(KPasswordLineEdit*, bool);
    using KPasswordLineEdit_SizeHint_Callback = QSize* (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_MinimumSizeHint_Callback = QSize* (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_HeightForWidth_Callback = int (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_HasHeightForWidth_Callback = bool (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_PaintEngine_Callback = QPaintEngine* (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_Event_Callback = bool (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_MousePressEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseReleaseEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseDoubleClickEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseMoveEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_WheelEvent_Callback = void (*)(KPasswordLineEdit*, QWheelEvent*);
    using KPasswordLineEdit_KeyPressEvent_Callback = void (*)(KPasswordLineEdit*, QKeyEvent*);
    using KPasswordLineEdit_KeyReleaseEvent_Callback = void (*)(KPasswordLineEdit*, QKeyEvent*);
    using KPasswordLineEdit_FocusInEvent_Callback = void (*)(KPasswordLineEdit*, QFocusEvent*);
    using KPasswordLineEdit_FocusOutEvent_Callback = void (*)(KPasswordLineEdit*, QFocusEvent*);
    using KPasswordLineEdit_EnterEvent_Callback = void (*)(KPasswordLineEdit*, QEnterEvent*);
    using KPasswordLineEdit_LeaveEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_PaintEvent_Callback = void (*)(KPasswordLineEdit*, QPaintEvent*);
    using KPasswordLineEdit_MoveEvent_Callback = void (*)(KPasswordLineEdit*, QMoveEvent*);
    using KPasswordLineEdit_ResizeEvent_Callback = void (*)(KPasswordLineEdit*, QResizeEvent*);
    using KPasswordLineEdit_CloseEvent_Callback = void (*)(KPasswordLineEdit*, QCloseEvent*);
    using KPasswordLineEdit_ContextMenuEvent_Callback = void (*)(KPasswordLineEdit*, QContextMenuEvent*);
    using KPasswordLineEdit_TabletEvent_Callback = void (*)(KPasswordLineEdit*, QTabletEvent*);
    using KPasswordLineEdit_ActionEvent_Callback = void (*)(KPasswordLineEdit*, QActionEvent*);
    using KPasswordLineEdit_DragEnterEvent_Callback = void (*)(KPasswordLineEdit*, QDragEnterEvent*);
    using KPasswordLineEdit_DragMoveEvent_Callback = void (*)(KPasswordLineEdit*, QDragMoveEvent*);
    using KPasswordLineEdit_DragLeaveEvent_Callback = void (*)(KPasswordLineEdit*, QDragLeaveEvent*);
    using KPasswordLineEdit_DropEvent_Callback = void (*)(KPasswordLineEdit*, QDropEvent*);
    using KPasswordLineEdit_ShowEvent_Callback = void (*)(KPasswordLineEdit*, QShowEvent*);
    using KPasswordLineEdit_HideEvent_Callback = void (*)(KPasswordLineEdit*, QHideEvent*);
    using KPasswordLineEdit_NativeEvent_Callback = bool (*)(KPasswordLineEdit*, libqt_string, void*, intptr_t*);
    using KPasswordLineEdit_ChangeEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_Metric_Callback = int (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_InitPainter_Callback = void (*)(const KPasswordLineEdit*, QPainter*);
    using KPasswordLineEdit_Redirected_Callback = QPaintDevice* (*)(const KPasswordLineEdit*, QPoint*);
    using KPasswordLineEdit_SharedPainter_Callback = QPainter* (*)(const KPasswordLineEdit*);
    using KPasswordLineEdit_InputMethodEvent_Callback = void (*)(KPasswordLineEdit*, QInputMethodEvent*);
    using KPasswordLineEdit_InputMethodQuery_Callback = QVariant* (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_FocusNextPrevChild_Callback = bool (*)(KPasswordLineEdit*, bool);
    using KPasswordLineEdit_EventFilter_Callback = bool (*)(KPasswordLineEdit*, QObject*, QEvent*);
    using KPasswordLineEdit_TimerEvent_Callback = void (*)(KPasswordLineEdit*, QTimerEvent*);
    using KPasswordLineEdit_ChildEvent_Callback = void (*)(KPasswordLineEdit*, QChildEvent*);
    using KPasswordLineEdit_CustomEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_ConnectNotify_Callback = void (*)(KPasswordLineEdit*, QMetaMethod*);
    using KPasswordLineEdit_DisconnectNotify_Callback = void (*)(KPasswordLineEdit*, QMetaMethod*);
    using KPasswordLineEdit::create;
    using KPasswordLineEdit::destroy;
    using KPasswordLineEdit::focusNextChild;
    using KPasswordLineEdit::focusPreviousChild;
    using KPasswordLineEdit::getDecodedMetricF;
    using KPasswordLineEdit::isSignalConnected;
    using KPasswordLineEdit::receivers;
    using KPasswordLineEdit::sender;
    using KPasswordLineEdit::senderSignalIndex;
    using KPasswordLineEdit::updateMicroFocus;

    // Instance callback storage
    KPasswordLineEdit_MetaObject_Callback kpasswordlineedit_metaobject_callback = nullptr;
    KPasswordLineEdit_Metacast_Callback kpasswordlineedit_metacast_callback = nullptr;
    KPasswordLineEdit_Metacall_Callback kpasswordlineedit_metacall_callback = nullptr;
    KPasswordLineEdit_DevType_Callback kpasswordlineedit_devtype_callback = nullptr;
    KPasswordLineEdit_SetVisible_Callback kpasswordlineedit_setvisible_callback = nullptr;
    KPasswordLineEdit_SizeHint_Callback kpasswordlineedit_sizehint_callback = nullptr;
    KPasswordLineEdit_MinimumSizeHint_Callback kpasswordlineedit_minimumsizehint_callback = nullptr;
    KPasswordLineEdit_HeightForWidth_Callback kpasswordlineedit_heightforwidth_callback = nullptr;
    KPasswordLineEdit_HasHeightForWidth_Callback kpasswordlineedit_hasheightforwidth_callback = nullptr;
    KPasswordLineEdit_PaintEngine_Callback kpasswordlineedit_paintengine_callback = nullptr;
    KPasswordLineEdit_Event_Callback kpasswordlineedit_event_callback = nullptr;
    KPasswordLineEdit_MousePressEvent_Callback kpasswordlineedit_mousepressevent_callback = nullptr;
    KPasswordLineEdit_MouseReleaseEvent_Callback kpasswordlineedit_mousereleaseevent_callback = nullptr;
    KPasswordLineEdit_MouseDoubleClickEvent_Callback kpasswordlineedit_mousedoubleclickevent_callback = nullptr;
    KPasswordLineEdit_MouseMoveEvent_Callback kpasswordlineedit_mousemoveevent_callback = nullptr;
    KPasswordLineEdit_WheelEvent_Callback kpasswordlineedit_wheelevent_callback = nullptr;
    KPasswordLineEdit_KeyPressEvent_Callback kpasswordlineedit_keypressevent_callback = nullptr;
    KPasswordLineEdit_KeyReleaseEvent_Callback kpasswordlineedit_keyreleaseevent_callback = nullptr;
    KPasswordLineEdit_FocusInEvent_Callback kpasswordlineedit_focusinevent_callback = nullptr;
    KPasswordLineEdit_FocusOutEvent_Callback kpasswordlineedit_focusoutevent_callback = nullptr;
    KPasswordLineEdit_EnterEvent_Callback kpasswordlineedit_enterevent_callback = nullptr;
    KPasswordLineEdit_LeaveEvent_Callback kpasswordlineedit_leaveevent_callback = nullptr;
    KPasswordLineEdit_PaintEvent_Callback kpasswordlineedit_paintevent_callback = nullptr;
    KPasswordLineEdit_MoveEvent_Callback kpasswordlineedit_moveevent_callback = nullptr;
    KPasswordLineEdit_ResizeEvent_Callback kpasswordlineedit_resizeevent_callback = nullptr;
    KPasswordLineEdit_CloseEvent_Callback kpasswordlineedit_closeevent_callback = nullptr;
    KPasswordLineEdit_ContextMenuEvent_Callback kpasswordlineedit_contextmenuevent_callback = nullptr;
    KPasswordLineEdit_TabletEvent_Callback kpasswordlineedit_tabletevent_callback = nullptr;
    KPasswordLineEdit_ActionEvent_Callback kpasswordlineedit_actionevent_callback = nullptr;
    KPasswordLineEdit_DragEnterEvent_Callback kpasswordlineedit_dragenterevent_callback = nullptr;
    KPasswordLineEdit_DragMoveEvent_Callback kpasswordlineedit_dragmoveevent_callback = nullptr;
    KPasswordLineEdit_DragLeaveEvent_Callback kpasswordlineedit_dragleaveevent_callback = nullptr;
    KPasswordLineEdit_DropEvent_Callback kpasswordlineedit_dropevent_callback = nullptr;
    KPasswordLineEdit_ShowEvent_Callback kpasswordlineedit_showevent_callback = nullptr;
    KPasswordLineEdit_HideEvent_Callback kpasswordlineedit_hideevent_callback = nullptr;
    KPasswordLineEdit_NativeEvent_Callback kpasswordlineedit_nativeevent_callback = nullptr;
    KPasswordLineEdit_ChangeEvent_Callback kpasswordlineedit_changeevent_callback = nullptr;
    KPasswordLineEdit_Metric_Callback kpasswordlineedit_metric_callback = nullptr;
    KPasswordLineEdit_InitPainter_Callback kpasswordlineedit_initpainter_callback = nullptr;
    KPasswordLineEdit_Redirected_Callback kpasswordlineedit_redirected_callback = nullptr;
    KPasswordLineEdit_SharedPainter_Callback kpasswordlineedit_sharedpainter_callback = nullptr;
    KPasswordLineEdit_InputMethodEvent_Callback kpasswordlineedit_inputmethodevent_callback = nullptr;
    KPasswordLineEdit_InputMethodQuery_Callback kpasswordlineedit_inputmethodquery_callback = nullptr;
    KPasswordLineEdit_FocusNextPrevChild_Callback kpasswordlineedit_focusnextprevchild_callback = nullptr;
    KPasswordLineEdit_EventFilter_Callback kpasswordlineedit_eventfilter_callback = nullptr;
    KPasswordLineEdit_TimerEvent_Callback kpasswordlineedit_timerevent_callback = nullptr;
    KPasswordLineEdit_ChildEvent_Callback kpasswordlineedit_childevent_callback = nullptr;
    KPasswordLineEdit_CustomEvent_Callback kpasswordlineedit_customevent_callback = nullptr;
    KPasswordLineEdit_ConnectNotify_Callback kpasswordlineedit_connectnotify_callback = nullptr;
    KPasswordLineEdit_DisconnectNotify_Callback kpasswordlineedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPasswordLineEdit {
        using KPasswordLineEdit::actionEvent;
        using KPasswordLineEdit::changeEvent;
        using KPasswordLineEdit::childEvent;
        using KPasswordLineEdit::closeEvent;
        using KPasswordLineEdit::connectNotify;
        using KPasswordLineEdit::contextMenuEvent;
        using KPasswordLineEdit::customEvent;
        using KPasswordLineEdit::disconnectNotify;
        using KPasswordLineEdit::dragEnterEvent;
        using KPasswordLineEdit::dragLeaveEvent;
        using KPasswordLineEdit::dragMoveEvent;
        using KPasswordLineEdit::dropEvent;
        using KPasswordLineEdit::enterEvent;
        using KPasswordLineEdit::event;
        using KPasswordLineEdit::focusInEvent;
        using KPasswordLineEdit::focusNextPrevChild;
        using KPasswordLineEdit::focusOutEvent;
        using KPasswordLineEdit::hideEvent;
        using KPasswordLineEdit::initPainter;
        using KPasswordLineEdit::inputMethodEvent;
        using KPasswordLineEdit::keyPressEvent;
        using KPasswordLineEdit::keyReleaseEvent;
        using KPasswordLineEdit::leaveEvent;
        using KPasswordLineEdit::metric;
        using KPasswordLineEdit::mouseDoubleClickEvent;
        using KPasswordLineEdit::mouseMoveEvent;
        using KPasswordLineEdit::mousePressEvent;
        using KPasswordLineEdit::mouseReleaseEvent;
        using KPasswordLineEdit::moveEvent;
        using KPasswordLineEdit::nativeEvent;
        using KPasswordLineEdit::paintEvent;
        using KPasswordLineEdit::redirected;
        using KPasswordLineEdit::resizeEvent;
        using KPasswordLineEdit::sharedPainter;
        using KPasswordLineEdit::showEvent;
        using KPasswordLineEdit::tabletEvent;
        using KPasswordLineEdit::timerEvent;
        using KPasswordLineEdit::wheelEvent;
    };

    VirtualKPasswordLineEdit(QWidget* parent) : KPasswordLineEdit(parent) {};
    VirtualKPasswordLineEdit() : KPasswordLineEdit() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpasswordlineedit_metaobject_callback) {
            QMetaObject* callback_ret = kpasswordlineedit_metaobject_callback(this);
            return callback_ret;
        }
        return KPasswordLineEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpasswordlineedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpasswordlineedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpasswordlineedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpasswordlineedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpasswordlineedit_devtype_callback) {
            int callback_ret = kpasswordlineedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpasswordlineedit_setvisible_callback) {
            bool cbval1 = visible;
            kpasswordlineedit_setvisible_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpasswordlineedit_sizehint_callback) {
            QSize* callback_ret = kpasswordlineedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordLineEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpasswordlineedit_minimumsizehint_callback) {
            QSize* callback_ret = kpasswordlineedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordLineEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpasswordlineedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpasswordlineedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpasswordlineedit_hasheightforwidth_callback) {
            bool callback_ret = kpasswordlineedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPasswordLineEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpasswordlineedit_paintengine_callback) {
            QPaintEngine* callback_ret = kpasswordlineedit_paintengine_callback(this);
            return callback_ret;
        }
        return KPasswordLineEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpasswordlineedit_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpasswordlineedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpasswordlineedit_mousepressevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpasswordlineedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpasswordlineedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpasswordlineedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpasswordlineedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpasswordlineedit_wheelevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpasswordlineedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpasswordlineedit_keypressevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpasswordlineedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpasswordlineedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpasswordlineedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpasswordlineedit_focusinevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpasswordlineedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpasswordlineedit_focusoutevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpasswordlineedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpasswordlineedit_enterevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpasswordlineedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpasswordlineedit_leaveevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpasswordlineedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpasswordlineedit_paintevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpasswordlineedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpasswordlineedit_moveevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpasswordlineedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpasswordlineedit_resizeevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpasswordlineedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpasswordlineedit_closeevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpasswordlineedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpasswordlineedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpasswordlineedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpasswordlineedit_tabletevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpasswordlineedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpasswordlineedit_actionevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpasswordlineedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpasswordlineedit_dragenterevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpasswordlineedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpasswordlineedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpasswordlineedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpasswordlineedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpasswordlineedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpasswordlineedit_dropevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpasswordlineedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpasswordlineedit_showevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpasswordlineedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpasswordlineedit_hideevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpasswordlineedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpasswordlineedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPasswordLineEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpasswordlineedit_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpasswordlineedit_changeevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpasswordlineedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpasswordlineedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpasswordlineedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpasswordlineedit_initpainter_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpasswordlineedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpasswordlineedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpasswordlineedit_sharedpainter_callback) {
            QPainter* callback_ret = kpasswordlineedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPasswordLineEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpasswordlineedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpasswordlineedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpasswordlineedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpasswordlineedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordLineEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpasswordlineedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpasswordlineedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpasswordlineedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpasswordlineedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPasswordLineEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpasswordlineedit_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpasswordlineedit_timerevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpasswordlineedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpasswordlineedit_childevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpasswordlineedit_customevent_callback) {
            QEvent* cbval1 = event;
            kpasswordlineedit_customevent_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpasswordlineedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpasswordlineedit_connectnotify_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpasswordlineedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpasswordlineedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPasswordLineEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPasswordLineEdit_SuperEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_SuperMousePressEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperWheelEvent(KPasswordLineEdit* self, QWheelEvent* event);
    friend void KPasswordLineEdit_SuperKeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_SuperKeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_SuperFocusInEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_SuperFocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_SuperEnterEvent(KPasswordLineEdit* self, QEnterEvent* event);
    friend void KPasswordLineEdit_SuperLeaveEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_SuperPaintEvent(KPasswordLineEdit* self, QPaintEvent* event);
    friend void KPasswordLineEdit_SuperMoveEvent(KPasswordLineEdit* self, QMoveEvent* event);
    friend void KPasswordLineEdit_SuperResizeEvent(KPasswordLineEdit* self, QResizeEvent* event);
    friend void KPasswordLineEdit_SuperCloseEvent(KPasswordLineEdit* self, QCloseEvent* event);
    friend void KPasswordLineEdit_SuperContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event);
    friend void KPasswordLineEdit_SuperTabletEvent(KPasswordLineEdit* self, QTabletEvent* event);
    friend void KPasswordLineEdit_SuperActionEvent(KPasswordLineEdit* self, QActionEvent* event);
    friend void KPasswordLineEdit_SuperDragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event);
    friend void KPasswordLineEdit_SuperDragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event);
    friend void KPasswordLineEdit_SuperDragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event);
    friend void KPasswordLineEdit_SuperDropEvent(KPasswordLineEdit* self, QDropEvent* event);
    friend void KPasswordLineEdit_SuperShowEvent(KPasswordLineEdit* self, QShowEvent* event);
    friend void KPasswordLineEdit_SuperHideEvent(KPasswordLineEdit* self, QHideEvent* event);
    friend bool KPasswordLineEdit_SuperNativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPasswordLineEdit_SuperChangeEvent(KPasswordLineEdit* self, QEvent* param1);
    friend int KPasswordLineEdit_SuperMetric(const KPasswordLineEdit* self, int param1);
    friend void KPasswordLineEdit_SuperInitPainter(const KPasswordLineEdit* self, QPainter* painter);
    friend QPaintDevice* KPasswordLineEdit_SuperRedirected(const KPasswordLineEdit* self, QPoint* offset);
    friend QPainter* KPasswordLineEdit_SuperSharedPainter(const KPasswordLineEdit* self);
    friend void KPasswordLineEdit_SuperInputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1);
    friend bool KPasswordLineEdit_SuperFocusNextPrevChild(KPasswordLineEdit* self, bool next);
    friend void KPasswordLineEdit_SuperTimerEvent(KPasswordLineEdit* self, QTimerEvent* event);
    friend void KPasswordLineEdit_SuperChildEvent(KPasswordLineEdit* self, QChildEvent* event);
    friend void KPasswordLineEdit_SuperCustomEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_SuperConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
    friend void KPasswordLineEdit_SuperDisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
};

#endif
