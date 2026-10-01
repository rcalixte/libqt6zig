#pragma once
#ifndef LIBQKEYSEQUENCEEDIT_HXX
#define LIBQKEYSEQUENCEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QKeySequenceEdit
class VirtualQKeySequenceEdit final : public QKeySequenceEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeySequenceEdit_MetaObject_Callback = QMetaObject* (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_Metacast_Callback = void* (*)(QKeySequenceEdit*, const char*);
    using QKeySequenceEdit_Metacall_Callback = int (*)(QKeySequenceEdit*, int, int, void**);
    using QKeySequenceEdit_Event_Callback = bool (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_KeyPressEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
    using QKeySequenceEdit_KeyReleaseEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
    using QKeySequenceEdit_TimerEvent_Callback = void (*)(QKeySequenceEdit*, QTimerEvent*);
    using QKeySequenceEdit_FocusOutEvent_Callback = void (*)(QKeySequenceEdit*, QFocusEvent*);
    using QKeySequenceEdit_DevType_Callback = int (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_SetVisible_Callback = void (*)(QKeySequenceEdit*, bool);
    using QKeySequenceEdit_SizeHint_Callback = QSize* (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_MinimumSizeHint_Callback = QSize* (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_HeightForWidth_Callback = int (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_HasHeightForWidth_Callback = bool (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_PaintEngine_Callback = QPaintEngine* (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_MousePressEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseReleaseEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseDoubleClickEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseMoveEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_WheelEvent_Callback = void (*)(QKeySequenceEdit*, QWheelEvent*);
    using QKeySequenceEdit_FocusInEvent_Callback = void (*)(QKeySequenceEdit*, QFocusEvent*);
    using QKeySequenceEdit_EnterEvent_Callback = void (*)(QKeySequenceEdit*, QEnterEvent*);
    using QKeySequenceEdit_LeaveEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_PaintEvent_Callback = void (*)(QKeySequenceEdit*, QPaintEvent*);
    using QKeySequenceEdit_MoveEvent_Callback = void (*)(QKeySequenceEdit*, QMoveEvent*);
    using QKeySequenceEdit_ResizeEvent_Callback = void (*)(QKeySequenceEdit*, QResizeEvent*);
    using QKeySequenceEdit_CloseEvent_Callback = void (*)(QKeySequenceEdit*, QCloseEvent*);
    using QKeySequenceEdit_ContextMenuEvent_Callback = void (*)(QKeySequenceEdit*, QContextMenuEvent*);
    using QKeySequenceEdit_TabletEvent_Callback = void (*)(QKeySequenceEdit*, QTabletEvent*);
    using QKeySequenceEdit_ActionEvent_Callback = void (*)(QKeySequenceEdit*, QActionEvent*);
    using QKeySequenceEdit_DragEnterEvent_Callback = void (*)(QKeySequenceEdit*, QDragEnterEvent*);
    using QKeySequenceEdit_DragMoveEvent_Callback = void (*)(QKeySequenceEdit*, QDragMoveEvent*);
    using QKeySequenceEdit_DragLeaveEvent_Callback = void (*)(QKeySequenceEdit*, QDragLeaveEvent*);
    using QKeySequenceEdit_DropEvent_Callback = void (*)(QKeySequenceEdit*, QDropEvent*);
    using QKeySequenceEdit_ShowEvent_Callback = void (*)(QKeySequenceEdit*, QShowEvent*);
    using QKeySequenceEdit_HideEvent_Callback = void (*)(QKeySequenceEdit*, QHideEvent*);
    using QKeySequenceEdit_NativeEvent_Callback = bool (*)(QKeySequenceEdit*, libqt_string, void*, intptr_t*);
    using QKeySequenceEdit_ChangeEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_Metric_Callback = int (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_InitPainter_Callback = void (*)(const QKeySequenceEdit*, QPainter*);
    using QKeySequenceEdit_Redirected_Callback = QPaintDevice* (*)(const QKeySequenceEdit*, QPoint*);
    using QKeySequenceEdit_SharedPainter_Callback = QPainter* (*)(const QKeySequenceEdit*);
    using QKeySequenceEdit_InputMethodEvent_Callback = void (*)(QKeySequenceEdit*, QInputMethodEvent*);
    using QKeySequenceEdit_InputMethodQuery_Callback = QVariant* (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_FocusNextPrevChild_Callback = bool (*)(QKeySequenceEdit*, bool);
    using QKeySequenceEdit_EventFilter_Callback = bool (*)(QKeySequenceEdit*, QObject*, QEvent*);
    using QKeySequenceEdit_ChildEvent_Callback = void (*)(QKeySequenceEdit*, QChildEvent*);
    using QKeySequenceEdit_CustomEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_ConnectNotify_Callback = void (*)(QKeySequenceEdit*, QMetaMethod*);
    using QKeySequenceEdit_DisconnectNotify_Callback = void (*)(QKeySequenceEdit*, QMetaMethod*);
    using QKeySequenceEdit::create;
    using QKeySequenceEdit::destroy;
    using QKeySequenceEdit::focusNextChild;
    using QKeySequenceEdit::focusPreviousChild;
    using QKeySequenceEdit::getDecodedMetricF;
    using QKeySequenceEdit::isSignalConnected;
    using QKeySequenceEdit::receivers;
    using QKeySequenceEdit::sender;
    using QKeySequenceEdit::senderSignalIndex;
    using QKeySequenceEdit::updateMicroFocus;

    // Instance callback storage
    QKeySequenceEdit_MetaObject_Callback qkeysequenceedit_metaobject_callback = nullptr;
    QKeySequenceEdit_Metacast_Callback qkeysequenceedit_metacast_callback = nullptr;
    QKeySequenceEdit_Metacall_Callback qkeysequenceedit_metacall_callback = nullptr;
    QKeySequenceEdit_Event_Callback qkeysequenceedit_event_callback = nullptr;
    QKeySequenceEdit_KeyPressEvent_Callback qkeysequenceedit_keypressevent_callback = nullptr;
    QKeySequenceEdit_KeyReleaseEvent_Callback qkeysequenceedit_keyreleaseevent_callback = nullptr;
    QKeySequenceEdit_TimerEvent_Callback qkeysequenceedit_timerevent_callback = nullptr;
    QKeySequenceEdit_FocusOutEvent_Callback qkeysequenceedit_focusoutevent_callback = nullptr;
    QKeySequenceEdit_DevType_Callback qkeysequenceedit_devtype_callback = nullptr;
    QKeySequenceEdit_SetVisible_Callback qkeysequenceedit_setvisible_callback = nullptr;
    QKeySequenceEdit_SizeHint_Callback qkeysequenceedit_sizehint_callback = nullptr;
    QKeySequenceEdit_MinimumSizeHint_Callback qkeysequenceedit_minimumsizehint_callback = nullptr;
    QKeySequenceEdit_HeightForWidth_Callback qkeysequenceedit_heightforwidth_callback = nullptr;
    QKeySequenceEdit_HasHeightForWidth_Callback qkeysequenceedit_hasheightforwidth_callback = nullptr;
    QKeySequenceEdit_PaintEngine_Callback qkeysequenceedit_paintengine_callback = nullptr;
    QKeySequenceEdit_MousePressEvent_Callback qkeysequenceedit_mousepressevent_callback = nullptr;
    QKeySequenceEdit_MouseReleaseEvent_Callback qkeysequenceedit_mousereleaseevent_callback = nullptr;
    QKeySequenceEdit_MouseDoubleClickEvent_Callback qkeysequenceedit_mousedoubleclickevent_callback = nullptr;
    QKeySequenceEdit_MouseMoveEvent_Callback qkeysequenceedit_mousemoveevent_callback = nullptr;
    QKeySequenceEdit_WheelEvent_Callback qkeysequenceedit_wheelevent_callback = nullptr;
    QKeySequenceEdit_FocusInEvent_Callback qkeysequenceedit_focusinevent_callback = nullptr;
    QKeySequenceEdit_EnterEvent_Callback qkeysequenceedit_enterevent_callback = nullptr;
    QKeySequenceEdit_LeaveEvent_Callback qkeysequenceedit_leaveevent_callback = nullptr;
    QKeySequenceEdit_PaintEvent_Callback qkeysequenceedit_paintevent_callback = nullptr;
    QKeySequenceEdit_MoveEvent_Callback qkeysequenceedit_moveevent_callback = nullptr;
    QKeySequenceEdit_ResizeEvent_Callback qkeysequenceedit_resizeevent_callback = nullptr;
    QKeySequenceEdit_CloseEvent_Callback qkeysequenceedit_closeevent_callback = nullptr;
    QKeySequenceEdit_ContextMenuEvent_Callback qkeysequenceedit_contextmenuevent_callback = nullptr;
    QKeySequenceEdit_TabletEvent_Callback qkeysequenceedit_tabletevent_callback = nullptr;
    QKeySequenceEdit_ActionEvent_Callback qkeysequenceedit_actionevent_callback = nullptr;
    QKeySequenceEdit_DragEnterEvent_Callback qkeysequenceedit_dragenterevent_callback = nullptr;
    QKeySequenceEdit_DragMoveEvent_Callback qkeysequenceedit_dragmoveevent_callback = nullptr;
    QKeySequenceEdit_DragLeaveEvent_Callback qkeysequenceedit_dragleaveevent_callback = nullptr;
    QKeySequenceEdit_DropEvent_Callback qkeysequenceedit_dropevent_callback = nullptr;
    QKeySequenceEdit_ShowEvent_Callback qkeysequenceedit_showevent_callback = nullptr;
    QKeySequenceEdit_HideEvent_Callback qkeysequenceedit_hideevent_callback = nullptr;
    QKeySequenceEdit_NativeEvent_Callback qkeysequenceedit_nativeevent_callback = nullptr;
    QKeySequenceEdit_ChangeEvent_Callback qkeysequenceedit_changeevent_callback = nullptr;
    QKeySequenceEdit_Metric_Callback qkeysequenceedit_metric_callback = nullptr;
    QKeySequenceEdit_InitPainter_Callback qkeysequenceedit_initpainter_callback = nullptr;
    QKeySequenceEdit_Redirected_Callback qkeysequenceedit_redirected_callback = nullptr;
    QKeySequenceEdit_SharedPainter_Callback qkeysequenceedit_sharedpainter_callback = nullptr;
    QKeySequenceEdit_InputMethodEvent_Callback qkeysequenceedit_inputmethodevent_callback = nullptr;
    QKeySequenceEdit_InputMethodQuery_Callback qkeysequenceedit_inputmethodquery_callback = nullptr;
    QKeySequenceEdit_FocusNextPrevChild_Callback qkeysequenceedit_focusnextprevchild_callback = nullptr;
    QKeySequenceEdit_EventFilter_Callback qkeysequenceedit_eventfilter_callback = nullptr;
    QKeySequenceEdit_ChildEvent_Callback qkeysequenceedit_childevent_callback = nullptr;
    QKeySequenceEdit_CustomEvent_Callback qkeysequenceedit_customevent_callback = nullptr;
    QKeySequenceEdit_ConnectNotify_Callback qkeysequenceedit_connectnotify_callback = nullptr;
    QKeySequenceEdit_DisconnectNotify_Callback qkeysequenceedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QKeySequenceEdit {
        using QKeySequenceEdit::actionEvent;
        using QKeySequenceEdit::changeEvent;
        using QKeySequenceEdit::childEvent;
        using QKeySequenceEdit::closeEvent;
        using QKeySequenceEdit::connectNotify;
        using QKeySequenceEdit::contextMenuEvent;
        using QKeySequenceEdit::customEvent;
        using QKeySequenceEdit::disconnectNotify;
        using QKeySequenceEdit::dragEnterEvent;
        using QKeySequenceEdit::dragLeaveEvent;
        using QKeySequenceEdit::dragMoveEvent;
        using QKeySequenceEdit::dropEvent;
        using QKeySequenceEdit::enterEvent;
        using QKeySequenceEdit::event;
        using QKeySequenceEdit::focusInEvent;
        using QKeySequenceEdit::focusNextPrevChild;
        using QKeySequenceEdit::focusOutEvent;
        using QKeySequenceEdit::hideEvent;
        using QKeySequenceEdit::initPainter;
        using QKeySequenceEdit::inputMethodEvent;
        using QKeySequenceEdit::keyPressEvent;
        using QKeySequenceEdit::keyReleaseEvent;
        using QKeySequenceEdit::leaveEvent;
        using QKeySequenceEdit::metric;
        using QKeySequenceEdit::mouseDoubleClickEvent;
        using QKeySequenceEdit::mouseMoveEvent;
        using QKeySequenceEdit::mousePressEvent;
        using QKeySequenceEdit::mouseReleaseEvent;
        using QKeySequenceEdit::moveEvent;
        using QKeySequenceEdit::nativeEvent;
        using QKeySequenceEdit::paintEvent;
        using QKeySequenceEdit::redirected;
        using QKeySequenceEdit::resizeEvent;
        using QKeySequenceEdit::sharedPainter;
        using QKeySequenceEdit::showEvent;
        using QKeySequenceEdit::tabletEvent;
        using QKeySequenceEdit::timerEvent;
        using QKeySequenceEdit::wheelEvent;
    };

    VirtualQKeySequenceEdit(QWidget* parent) : QKeySequenceEdit(parent) {};
    VirtualQKeySequenceEdit() : QKeySequenceEdit() {};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence) : QKeySequenceEdit(keySequence) {};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent) : QKeySequenceEdit(keySequence, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeysequenceedit_metaobject_callback) {
            QMetaObject* callback_ret = qkeysequenceedit_metaobject_callback(this);
            return callback_ret;
        }
        return QKeySequenceEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeysequenceedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qkeysequenceedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeysequenceedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qkeysequenceedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qkeysequenceedit_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qkeysequenceedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qkeysequenceedit_keypressevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qkeysequenceedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qkeysequenceedit_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qkeysequenceedit_timerevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qkeysequenceedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qkeysequenceedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qkeysequenceedit_devtype_callback) {
            int callback_ret = qkeysequenceedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qkeysequenceedit_setvisible_callback) {
            bool cbval1 = visible;
            qkeysequenceedit_setvisible_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qkeysequenceedit_sizehint_callback) {
            QSize* callback_ret = qkeysequenceedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QKeySequenceEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qkeysequenceedit_minimumsizehint_callback) {
            QSize* callback_ret = qkeysequenceedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QKeySequenceEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qkeysequenceedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qkeysequenceedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qkeysequenceedit_hasheightforwidth_callback) {
            bool callback_ret = qkeysequenceedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QKeySequenceEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qkeysequenceedit_paintengine_callback) {
            QPaintEngine* callback_ret = qkeysequenceedit_paintengine_callback(this);
            return callback_ret;
        }
        return QKeySequenceEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qkeysequenceedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qkeysequenceedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qkeysequenceedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qkeysequenceedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qkeysequenceedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qkeysequenceedit_wheelevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qkeysequenceedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qkeysequenceedit_focusinevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qkeysequenceedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qkeysequenceedit_enterevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qkeysequenceedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qkeysequenceedit_leaveevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qkeysequenceedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qkeysequenceedit_paintevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qkeysequenceedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qkeysequenceedit_moveevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qkeysequenceedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qkeysequenceedit_resizeevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qkeysequenceedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qkeysequenceedit_closeevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qkeysequenceedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qkeysequenceedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qkeysequenceedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qkeysequenceedit_tabletevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qkeysequenceedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qkeysequenceedit_actionevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qkeysequenceedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qkeysequenceedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qkeysequenceedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qkeysequenceedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qkeysequenceedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qkeysequenceedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qkeysequenceedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qkeysequenceedit_dropevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qkeysequenceedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            qkeysequenceedit_showevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qkeysequenceedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qkeysequenceedit_hideevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qkeysequenceedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qkeysequenceedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QKeySequenceEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qkeysequenceedit_changeevent_callback) {
            QEvent* cbval1 = param1;
            qkeysequenceedit_changeevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qkeysequenceedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qkeysequenceedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qkeysequenceedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qkeysequenceedit_initpainter_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qkeysequenceedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qkeysequenceedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qkeysequenceedit_sharedpainter_callback) {
            QPainter* callback_ret = qkeysequenceedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QKeySequenceEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qkeysequenceedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qkeysequenceedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qkeysequenceedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qkeysequenceedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QKeySequenceEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qkeysequenceedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qkeysequenceedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeysequenceedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qkeysequenceedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeySequenceEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeysequenceedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qkeysequenceedit_childevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeysequenceedit_customevent_callback) {
            QEvent* cbval1 = event;
            qkeysequenceedit_customevent_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeysequenceedit_connectnotify_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeysequenceedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QKeySequenceEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QKeySequenceEdit_SuperEvent(QKeySequenceEdit* self, QEvent* param1);
    friend void QKeySequenceEdit_SuperKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_SuperKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_SuperTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
    friend void QKeySequenceEdit_SuperFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
    friend void QKeySequenceEdit_SuperMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperWheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
    friend void QKeySequenceEdit_SuperFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
    friend void QKeySequenceEdit_SuperEnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
    friend void QKeySequenceEdit_SuperLeaveEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_SuperPaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
    friend void QKeySequenceEdit_SuperMoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
    friend void QKeySequenceEdit_SuperResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
    friend void QKeySequenceEdit_SuperCloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
    friend void QKeySequenceEdit_SuperContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
    friend void QKeySequenceEdit_SuperTabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
    friend void QKeySequenceEdit_SuperActionEvent(QKeySequenceEdit* self, QActionEvent* event);
    friend void QKeySequenceEdit_SuperDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
    friend void QKeySequenceEdit_SuperDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
    friend void QKeySequenceEdit_SuperDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
    friend void QKeySequenceEdit_SuperDropEvent(QKeySequenceEdit* self, QDropEvent* event);
    friend void QKeySequenceEdit_SuperShowEvent(QKeySequenceEdit* self, QShowEvent* event);
    friend void QKeySequenceEdit_SuperHideEvent(QKeySequenceEdit* self, QHideEvent* event);
    friend bool QKeySequenceEdit_SuperNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QKeySequenceEdit_SuperChangeEvent(QKeySequenceEdit* self, QEvent* param1);
    friend int QKeySequenceEdit_SuperMetric(const QKeySequenceEdit* self, int param1);
    friend void QKeySequenceEdit_SuperInitPainter(const QKeySequenceEdit* self, QPainter* painter);
    friend QPaintDevice* QKeySequenceEdit_SuperRedirected(const QKeySequenceEdit* self, QPoint* offset);
    friend QPainter* QKeySequenceEdit_SuperSharedPainter(const QKeySequenceEdit* self);
    friend void QKeySequenceEdit_SuperInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
    friend bool QKeySequenceEdit_SuperFocusNextPrevChild(QKeySequenceEdit* self, bool next);
    friend void QKeySequenceEdit_SuperChildEvent(QKeySequenceEdit* self, QChildEvent* event);
    friend void QKeySequenceEdit_SuperCustomEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_SuperConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_SuperDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
};

#endif
