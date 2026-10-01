#pragma once
#ifndef LIBQLINEEDIT_HXX
#define LIBQLINEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLineEdit
class VirtualQLineEdit final : public QLineEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLineEdit_MetaObject_Callback = QMetaObject* (*)(const QLineEdit*);
    using QLineEdit_Metacast_Callback = void* (*)(QLineEdit*, const char*);
    using QLineEdit_Metacall_Callback = int (*)(QLineEdit*, int, int, void**);
    using QLineEdit_SizeHint_Callback = QSize* (*)(const QLineEdit*);
    using QLineEdit_MinimumSizeHint_Callback = QSize* (*)(const QLineEdit*);
    using QLineEdit_MousePressEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseMoveEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseReleaseEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseDoubleClickEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_KeyPressEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_KeyReleaseEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_FocusInEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_FocusOutEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_PaintEvent_Callback = void (*)(QLineEdit*, QPaintEvent*);
    using QLineEdit_DragEnterEvent_Callback = void (*)(QLineEdit*, QDragEnterEvent*);
    using QLineEdit_DragMoveEvent_Callback = void (*)(QLineEdit*, QDragMoveEvent*);
    using QLineEdit_DragLeaveEvent_Callback = void (*)(QLineEdit*, QDragLeaveEvent*);
    using QLineEdit_DropEvent_Callback = void (*)(QLineEdit*, QDropEvent*);
    using QLineEdit_ChangeEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ContextMenuEvent_Callback = void (*)(QLineEdit*, QContextMenuEvent*);
    using QLineEdit_InputMethodEvent_Callback = void (*)(QLineEdit*, QInputMethodEvent*);
    using QLineEdit_InitStyleOption_Callback = void (*)(const QLineEdit*, QStyleOptionFrame*);
    using QLineEdit_InputMethodQuery_Callback = QVariant* (*)(const QLineEdit*, int);
    using QLineEdit_TimerEvent_Callback = void (*)(QLineEdit*, QTimerEvent*);
    using QLineEdit_Event_Callback = bool (*)(QLineEdit*, QEvent*);
    using QLineEdit_DevType_Callback = int (*)(const QLineEdit*);
    using QLineEdit_SetVisible_Callback = void (*)(QLineEdit*, bool);
    using QLineEdit_HeightForWidth_Callback = int (*)(const QLineEdit*, int);
    using QLineEdit_HasHeightForWidth_Callback = bool (*)(const QLineEdit*);
    using QLineEdit_PaintEngine_Callback = QPaintEngine* (*)(const QLineEdit*);
    using QLineEdit_WheelEvent_Callback = void (*)(QLineEdit*, QWheelEvent*);
    using QLineEdit_EnterEvent_Callback = void (*)(QLineEdit*, QEnterEvent*);
    using QLineEdit_LeaveEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_MoveEvent_Callback = void (*)(QLineEdit*, QMoveEvent*);
    using QLineEdit_ResizeEvent_Callback = void (*)(QLineEdit*, QResizeEvent*);
    using QLineEdit_CloseEvent_Callback = void (*)(QLineEdit*, QCloseEvent*);
    using QLineEdit_TabletEvent_Callback = void (*)(QLineEdit*, QTabletEvent*);
    using QLineEdit_ActionEvent_Callback = void (*)(QLineEdit*, QActionEvent*);
    using QLineEdit_ShowEvent_Callback = void (*)(QLineEdit*, QShowEvent*);
    using QLineEdit_HideEvent_Callback = void (*)(QLineEdit*, QHideEvent*);
    using QLineEdit_NativeEvent_Callback = bool (*)(QLineEdit*, libqt_string, void*, intptr_t*);
    using QLineEdit_Metric_Callback = int (*)(const QLineEdit*, int);
    using QLineEdit_InitPainter_Callback = void (*)(const QLineEdit*, QPainter*);
    using QLineEdit_Redirected_Callback = QPaintDevice* (*)(const QLineEdit*, QPoint*);
    using QLineEdit_SharedPainter_Callback = QPainter* (*)(const QLineEdit*);
    using QLineEdit_FocusNextPrevChild_Callback = bool (*)(QLineEdit*, bool);
    using QLineEdit_EventFilter_Callback = bool (*)(QLineEdit*, QObject*, QEvent*);
    using QLineEdit_ChildEvent_Callback = void (*)(QLineEdit*, QChildEvent*);
    using QLineEdit_CustomEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ConnectNotify_Callback = void (*)(QLineEdit*, QMetaMethod*);
    using QLineEdit_DisconnectNotify_Callback = void (*)(QLineEdit*, QMetaMethod*);
    using QLineEdit::create;
    using QLineEdit::cursorRect;
    using QLineEdit::destroy;
    using QLineEdit::focusNextChild;
    using QLineEdit::focusPreviousChild;
    using QLineEdit::getDecodedMetricF;
    using QLineEdit::isSignalConnected;
    using QLineEdit::receivers;
    using QLineEdit::sender;
    using QLineEdit::senderSignalIndex;
    using QLineEdit::updateMicroFocus;

    // Instance callback storage
    QLineEdit_MetaObject_Callback qlineedit_metaobject_callback = nullptr;
    QLineEdit_Metacast_Callback qlineedit_metacast_callback = nullptr;
    QLineEdit_Metacall_Callback qlineedit_metacall_callback = nullptr;
    QLineEdit_SizeHint_Callback qlineedit_sizehint_callback = nullptr;
    QLineEdit_MinimumSizeHint_Callback qlineedit_minimumsizehint_callback = nullptr;
    QLineEdit_MousePressEvent_Callback qlineedit_mousepressevent_callback = nullptr;
    QLineEdit_MouseMoveEvent_Callback qlineedit_mousemoveevent_callback = nullptr;
    QLineEdit_MouseReleaseEvent_Callback qlineedit_mousereleaseevent_callback = nullptr;
    QLineEdit_MouseDoubleClickEvent_Callback qlineedit_mousedoubleclickevent_callback = nullptr;
    QLineEdit_KeyPressEvent_Callback qlineedit_keypressevent_callback = nullptr;
    QLineEdit_KeyReleaseEvent_Callback qlineedit_keyreleaseevent_callback = nullptr;
    QLineEdit_FocusInEvent_Callback qlineedit_focusinevent_callback = nullptr;
    QLineEdit_FocusOutEvent_Callback qlineedit_focusoutevent_callback = nullptr;
    QLineEdit_PaintEvent_Callback qlineedit_paintevent_callback = nullptr;
    QLineEdit_DragEnterEvent_Callback qlineedit_dragenterevent_callback = nullptr;
    QLineEdit_DragMoveEvent_Callback qlineedit_dragmoveevent_callback = nullptr;
    QLineEdit_DragLeaveEvent_Callback qlineedit_dragleaveevent_callback = nullptr;
    QLineEdit_DropEvent_Callback qlineedit_dropevent_callback = nullptr;
    QLineEdit_ChangeEvent_Callback qlineedit_changeevent_callback = nullptr;
    QLineEdit_ContextMenuEvent_Callback qlineedit_contextmenuevent_callback = nullptr;
    QLineEdit_InputMethodEvent_Callback qlineedit_inputmethodevent_callback = nullptr;
    QLineEdit_InitStyleOption_Callback qlineedit_initstyleoption_callback = nullptr;
    QLineEdit_InputMethodQuery_Callback qlineedit_inputmethodquery_callback = nullptr;
    QLineEdit_TimerEvent_Callback qlineedit_timerevent_callback = nullptr;
    QLineEdit_Event_Callback qlineedit_event_callback = nullptr;
    QLineEdit_DevType_Callback qlineedit_devtype_callback = nullptr;
    QLineEdit_SetVisible_Callback qlineedit_setvisible_callback = nullptr;
    QLineEdit_HeightForWidth_Callback qlineedit_heightforwidth_callback = nullptr;
    QLineEdit_HasHeightForWidth_Callback qlineedit_hasheightforwidth_callback = nullptr;
    QLineEdit_PaintEngine_Callback qlineedit_paintengine_callback = nullptr;
    QLineEdit_WheelEvent_Callback qlineedit_wheelevent_callback = nullptr;
    QLineEdit_EnterEvent_Callback qlineedit_enterevent_callback = nullptr;
    QLineEdit_LeaveEvent_Callback qlineedit_leaveevent_callback = nullptr;
    QLineEdit_MoveEvent_Callback qlineedit_moveevent_callback = nullptr;
    QLineEdit_ResizeEvent_Callback qlineedit_resizeevent_callback = nullptr;
    QLineEdit_CloseEvent_Callback qlineedit_closeevent_callback = nullptr;
    QLineEdit_TabletEvent_Callback qlineedit_tabletevent_callback = nullptr;
    QLineEdit_ActionEvent_Callback qlineedit_actionevent_callback = nullptr;
    QLineEdit_ShowEvent_Callback qlineedit_showevent_callback = nullptr;
    QLineEdit_HideEvent_Callback qlineedit_hideevent_callback = nullptr;
    QLineEdit_NativeEvent_Callback qlineedit_nativeevent_callback = nullptr;
    QLineEdit_Metric_Callback qlineedit_metric_callback = nullptr;
    QLineEdit_InitPainter_Callback qlineedit_initpainter_callback = nullptr;
    QLineEdit_Redirected_Callback qlineedit_redirected_callback = nullptr;
    QLineEdit_SharedPainter_Callback qlineedit_sharedpainter_callback = nullptr;
    QLineEdit_FocusNextPrevChild_Callback qlineedit_focusnextprevchild_callback = nullptr;
    QLineEdit_EventFilter_Callback qlineedit_eventfilter_callback = nullptr;
    QLineEdit_ChildEvent_Callback qlineedit_childevent_callback = nullptr;
    QLineEdit_CustomEvent_Callback qlineedit_customevent_callback = nullptr;
    QLineEdit_ConnectNotify_Callback qlineedit_connectnotify_callback = nullptr;
    QLineEdit_DisconnectNotify_Callback qlineedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLineEdit {
        using QLineEdit::actionEvent;
        using QLineEdit::changeEvent;
        using QLineEdit::childEvent;
        using QLineEdit::closeEvent;
        using QLineEdit::connectNotify;
        using QLineEdit::contextMenuEvent;
        using QLineEdit::customEvent;
        using QLineEdit::disconnectNotify;
        using QLineEdit::dragEnterEvent;
        using QLineEdit::dragLeaveEvent;
        using QLineEdit::dragMoveEvent;
        using QLineEdit::dropEvent;
        using QLineEdit::enterEvent;
        using QLineEdit::focusInEvent;
        using QLineEdit::focusNextPrevChild;
        using QLineEdit::focusOutEvent;
        using QLineEdit::hideEvent;
        using QLineEdit::initPainter;
        using QLineEdit::initStyleOption;
        using QLineEdit::inputMethodEvent;
        using QLineEdit::keyPressEvent;
        using QLineEdit::keyReleaseEvent;
        using QLineEdit::leaveEvent;
        using QLineEdit::metric;
        using QLineEdit::mouseDoubleClickEvent;
        using QLineEdit::mouseMoveEvent;
        using QLineEdit::mousePressEvent;
        using QLineEdit::mouseReleaseEvent;
        using QLineEdit::moveEvent;
        using QLineEdit::nativeEvent;
        using QLineEdit::paintEvent;
        using QLineEdit::redirected;
        using QLineEdit::resizeEvent;
        using QLineEdit::sharedPainter;
        using QLineEdit::showEvent;
        using QLineEdit::tabletEvent;
        using QLineEdit::wheelEvent;
    };

    VirtualQLineEdit(QWidget* parent) : QLineEdit(parent) {};
    VirtualQLineEdit() : QLineEdit() {};
    VirtualQLineEdit(const QString& param1) : QLineEdit(param1) {};
    VirtualQLineEdit(const QString& param1, QWidget* parent) : QLineEdit(param1, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlineedit_metaobject_callback) {
            QMetaObject* callback_ret = qlineedit_metaobject_callback(this);
            return callback_ret;
        }
        return QLineEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlineedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlineedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlineedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlineedit_sizehint_callback) {
            QSize* callback_ret = qlineedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLineEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlineedit_minimumsizehint_callback) {
            QSize* callback_ret = qlineedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLineEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qlineedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qlineedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QLineEdit::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qlineedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qlineedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QLineEdit::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qlineedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qlineedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QLineEdit::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qlineedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qlineedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QLineEdit::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qlineedit_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qlineedit_keypressevent_callback(this, cbval1);
            return;
        }
        QLineEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qlineedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qlineedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QLineEdit::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qlineedit_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qlineedit_focusinevent_callback(this, cbval1);
            return;
        }
        QLineEdit::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qlineedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qlineedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QLineEdit::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlineedit_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qlineedit_paintevent_callback(this, cbval1);
            return;
        }
        QLineEdit::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qlineedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qlineedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QLineEdit::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlineedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qlineedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QLineEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlineedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qlineedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QLineEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qlineedit_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qlineedit_dropevent_callback(this, cbval1);
            return;
        }
        QLineEdit::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlineedit_changeevent_callback) {
            QEvent* cbval1 = param1;
            qlineedit_changeevent_callback(this, cbval1);
            return;
        }
        QLineEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlineedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qlineedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QLineEdit::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlineedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qlineedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QLineEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlineedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qlineedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QLineEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlineedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qlineedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLineEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qlineedit_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qlineedit_timerevent_callback(this, cbval1);
            return;
        }
        QLineEdit::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qlineedit_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qlineedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlineedit_devtype_callback) {
            int callback_ret = qlineedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlineedit_setvisible_callback) {
            bool cbval1 = visible;
            qlineedit_setvisible_callback(this, cbval1);
            return;
        }
        QLineEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlineedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlineedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlineedit_hasheightforwidth_callback) {
            bool callback_ret = qlineedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QLineEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlineedit_paintengine_callback) {
            QPaintEngine* callback_ret = qlineedit_paintengine_callback(this);
            return callback_ret;
        }
        return QLineEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlineedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qlineedit_wheelevent_callback(this, cbval1);
            return;
        }
        QLineEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlineedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qlineedit_enterevent_callback(this, cbval1);
            return;
        }
        QLineEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlineedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qlineedit_leaveevent_callback(this, cbval1);
            return;
        }
        QLineEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlineedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qlineedit_moveevent_callback(this, cbval1);
            return;
        }
        QLineEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlineedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qlineedit_resizeevent_callback(this, cbval1);
            return;
        }
        QLineEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlineedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qlineedit_closeevent_callback(this, cbval1);
            return;
        }
        QLineEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlineedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qlineedit_tabletevent_callback(this, cbval1);
            return;
        }
        QLineEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlineedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qlineedit_actionevent_callback(this, cbval1);
            return;
        }
        QLineEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlineedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            qlineedit_showevent_callback(this, cbval1);
            return;
        }
        QLineEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlineedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qlineedit_hideevent_callback(this, cbval1);
            return;
        }
        QLineEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlineedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qlineedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QLineEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlineedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qlineedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlineedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qlineedit_initpainter_callback(this, cbval1);
            return;
        }
        QLineEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlineedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qlineedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlineedit_sharedpainter_callback) {
            QPainter* callback_ret = qlineedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QLineEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlineedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qlineedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlineedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLineEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlineedit_childevent_callback(this, cbval1);
            return;
        }
        QLineEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineedit_customevent_callback) {
            QEvent* cbval1 = event;
            qlineedit_customevent_callback(this, cbval1);
            return;
        }
        QLineEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlineedit_connectnotify_callback(this, cbval1);
            return;
        }
        QLineEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlineedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLineEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void QLineEdit_SuperMousePressEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperKeyPressEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_SuperKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_SuperFocusInEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_SuperFocusOutEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_SuperPaintEvent(QLineEdit* self, QPaintEvent* param1);
    friend void QLineEdit_SuperDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
    friend void QLineEdit_SuperDragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
    friend void QLineEdit_SuperDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
    friend void QLineEdit_SuperDropEvent(QLineEdit* self, QDropEvent* param1);
    friend void QLineEdit_SuperChangeEvent(QLineEdit* self, QEvent* param1);
    friend void QLineEdit_SuperContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
    friend void QLineEdit_SuperInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
    friend void QLineEdit_SuperInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
    friend void QLineEdit_SuperWheelEvent(QLineEdit* self, QWheelEvent* event);
    friend void QLineEdit_SuperEnterEvent(QLineEdit* self, QEnterEvent* event);
    friend void QLineEdit_SuperLeaveEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_SuperMoveEvent(QLineEdit* self, QMoveEvent* event);
    friend void QLineEdit_SuperResizeEvent(QLineEdit* self, QResizeEvent* event);
    friend void QLineEdit_SuperCloseEvent(QLineEdit* self, QCloseEvent* event);
    friend void QLineEdit_SuperTabletEvent(QLineEdit* self, QTabletEvent* event);
    friend void QLineEdit_SuperActionEvent(QLineEdit* self, QActionEvent* event);
    friend void QLineEdit_SuperShowEvent(QLineEdit* self, QShowEvent* event);
    friend void QLineEdit_SuperHideEvent(QLineEdit* self, QHideEvent* event);
    friend bool QLineEdit_SuperNativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLineEdit_SuperMetric(const QLineEdit* self, int param1);
    friend void QLineEdit_SuperInitPainter(const QLineEdit* self, QPainter* painter);
    friend QPaintDevice* QLineEdit_SuperRedirected(const QLineEdit* self, QPoint* offset);
    friend QPainter* QLineEdit_SuperSharedPainter(const QLineEdit* self);
    friend bool QLineEdit_SuperFocusNextPrevChild(QLineEdit* self, bool next);
    friend void QLineEdit_SuperChildEvent(QLineEdit* self, QChildEvent* event);
    friend void QLineEdit_SuperCustomEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_SuperConnectNotify(QLineEdit* self, const QMetaMethod* signal);
    friend void QLineEdit_SuperDisconnectNotify(QLineEdit* self, const QMetaMethod* signal);
};

#endif
