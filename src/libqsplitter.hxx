#pragma once
#ifndef LIBQSPLITTER_HXX
#define LIBQSPLITTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSplitter
class VirtualQSplitter final : public QSplitter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSplitter_MetaObject_Callback = QMetaObject* (*)(const QSplitter*);
    using QSplitter_Metacast_Callback = void* (*)(QSplitter*, const char*);
    using QSplitter_Metacall_Callback = int (*)(QSplitter*, int, int, void**);
    using QSplitter_SizeHint_Callback = QSize* (*)(const QSplitter*);
    using QSplitter_MinimumSizeHint_Callback = QSize* (*)(const QSplitter*);
    using QSplitter_CreateHandle_Callback = QSplitterHandle* (*)(QSplitter*);
    using QSplitter_ChildEvent_Callback = void (*)(QSplitter*, QChildEvent*);
    using QSplitter_Event_Callback = bool (*)(QSplitter*, QEvent*);
    using QSplitter_ResizeEvent_Callback = void (*)(QSplitter*, QResizeEvent*);
    using QSplitter_ChangeEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_PaintEvent_Callback = void (*)(QSplitter*, QPaintEvent*);
    using QSplitter_InitStyleOption_Callback = void (*)(const QSplitter*, QStyleOptionFrame*);
    using QSplitter_DevType_Callback = int (*)(const QSplitter*);
    using QSplitter_SetVisible_Callback = void (*)(QSplitter*, bool);
    using QSplitter_HeightForWidth_Callback = int (*)(const QSplitter*, int);
    using QSplitter_HasHeightForWidth_Callback = bool (*)(const QSplitter*);
    using QSplitter_PaintEngine_Callback = QPaintEngine* (*)(const QSplitter*);
    using QSplitter_MousePressEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseReleaseEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseDoubleClickEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseMoveEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_WheelEvent_Callback = void (*)(QSplitter*, QWheelEvent*);
    using QSplitter_KeyPressEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_KeyReleaseEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_FocusInEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_FocusOutEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_EnterEvent_Callback = void (*)(QSplitter*, QEnterEvent*);
    using QSplitter_LeaveEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_MoveEvent_Callback = void (*)(QSplitter*, QMoveEvent*);
    using QSplitter_CloseEvent_Callback = void (*)(QSplitter*, QCloseEvent*);
    using QSplitter_ContextMenuEvent_Callback = void (*)(QSplitter*, QContextMenuEvent*);
    using QSplitter_TabletEvent_Callback = void (*)(QSplitter*, QTabletEvent*);
    using QSplitter_ActionEvent_Callback = void (*)(QSplitter*, QActionEvent*);
    using QSplitter_DragEnterEvent_Callback = void (*)(QSplitter*, QDragEnterEvent*);
    using QSplitter_DragMoveEvent_Callback = void (*)(QSplitter*, QDragMoveEvent*);
    using QSplitter_DragLeaveEvent_Callback = void (*)(QSplitter*, QDragLeaveEvent*);
    using QSplitter_DropEvent_Callback = void (*)(QSplitter*, QDropEvent*);
    using QSplitter_ShowEvent_Callback = void (*)(QSplitter*, QShowEvent*);
    using QSplitter_HideEvent_Callback = void (*)(QSplitter*, QHideEvent*);
    using QSplitter_NativeEvent_Callback = bool (*)(QSplitter*, libqt_string, void*, intptr_t*);
    using QSplitter_Metric_Callback = int (*)(const QSplitter*, int);
    using QSplitter_InitPainter_Callback = void (*)(const QSplitter*, QPainter*);
    using QSplitter_Redirected_Callback = QPaintDevice* (*)(const QSplitter*, QPoint*);
    using QSplitter_SharedPainter_Callback = QPainter* (*)(const QSplitter*);
    using QSplitter_InputMethodEvent_Callback = void (*)(QSplitter*, QInputMethodEvent*);
    using QSplitter_InputMethodQuery_Callback = QVariant* (*)(const QSplitter*, int);
    using QSplitter_FocusNextPrevChild_Callback = bool (*)(QSplitter*, bool);
    using QSplitter_EventFilter_Callback = bool (*)(QSplitter*, QObject*, QEvent*);
    using QSplitter_TimerEvent_Callback = void (*)(QSplitter*, QTimerEvent*);
    using QSplitter_CustomEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_ConnectNotify_Callback = void (*)(QSplitter*, QMetaMethod*);
    using QSplitter_DisconnectNotify_Callback = void (*)(QSplitter*, QMetaMethod*);
    using QSplitter::closestLegalPosition;
    using QSplitter::create;
    using QSplitter::destroy;
    using QSplitter::drawFrame;
    using QSplitter::focusNextChild;
    using QSplitter::focusPreviousChild;
    using QSplitter::getDecodedMetricF;
    using QSplitter::isSignalConnected;
    using QSplitter::moveSplitter;
    using QSplitter::receivers;
    using QSplitter::sender;
    using QSplitter::senderSignalIndex;
    using QSplitter::setRubberBand;
    using QSplitter::updateMicroFocus;

    // Instance callback storage
    QSplitter_MetaObject_Callback qsplitter_metaobject_callback = nullptr;
    QSplitter_Metacast_Callback qsplitter_metacast_callback = nullptr;
    QSplitter_Metacall_Callback qsplitter_metacall_callback = nullptr;
    QSplitter_SizeHint_Callback qsplitter_sizehint_callback = nullptr;
    QSplitter_MinimumSizeHint_Callback qsplitter_minimumsizehint_callback = nullptr;
    QSplitter_CreateHandle_Callback qsplitter_createhandle_callback = nullptr;
    QSplitter_ChildEvent_Callback qsplitter_childevent_callback = nullptr;
    QSplitter_Event_Callback qsplitter_event_callback = nullptr;
    QSplitter_ResizeEvent_Callback qsplitter_resizeevent_callback = nullptr;
    QSplitter_ChangeEvent_Callback qsplitter_changeevent_callback = nullptr;
    QSplitter_PaintEvent_Callback qsplitter_paintevent_callback = nullptr;
    QSplitter_InitStyleOption_Callback qsplitter_initstyleoption_callback = nullptr;
    QSplitter_DevType_Callback qsplitter_devtype_callback = nullptr;
    QSplitter_SetVisible_Callback qsplitter_setvisible_callback = nullptr;
    QSplitter_HeightForWidth_Callback qsplitter_heightforwidth_callback = nullptr;
    QSplitter_HasHeightForWidth_Callback qsplitter_hasheightforwidth_callback = nullptr;
    QSplitter_PaintEngine_Callback qsplitter_paintengine_callback = nullptr;
    QSplitter_MousePressEvent_Callback qsplitter_mousepressevent_callback = nullptr;
    QSplitter_MouseReleaseEvent_Callback qsplitter_mousereleaseevent_callback = nullptr;
    QSplitter_MouseDoubleClickEvent_Callback qsplitter_mousedoubleclickevent_callback = nullptr;
    QSplitter_MouseMoveEvent_Callback qsplitter_mousemoveevent_callback = nullptr;
    QSplitter_WheelEvent_Callback qsplitter_wheelevent_callback = nullptr;
    QSplitter_KeyPressEvent_Callback qsplitter_keypressevent_callback = nullptr;
    QSplitter_KeyReleaseEvent_Callback qsplitter_keyreleaseevent_callback = nullptr;
    QSplitter_FocusInEvent_Callback qsplitter_focusinevent_callback = nullptr;
    QSplitter_FocusOutEvent_Callback qsplitter_focusoutevent_callback = nullptr;
    QSplitter_EnterEvent_Callback qsplitter_enterevent_callback = nullptr;
    QSplitter_LeaveEvent_Callback qsplitter_leaveevent_callback = nullptr;
    QSplitter_MoveEvent_Callback qsplitter_moveevent_callback = nullptr;
    QSplitter_CloseEvent_Callback qsplitter_closeevent_callback = nullptr;
    QSplitter_ContextMenuEvent_Callback qsplitter_contextmenuevent_callback = nullptr;
    QSplitter_TabletEvent_Callback qsplitter_tabletevent_callback = nullptr;
    QSplitter_ActionEvent_Callback qsplitter_actionevent_callback = nullptr;
    QSplitter_DragEnterEvent_Callback qsplitter_dragenterevent_callback = nullptr;
    QSplitter_DragMoveEvent_Callback qsplitter_dragmoveevent_callback = nullptr;
    QSplitter_DragLeaveEvent_Callback qsplitter_dragleaveevent_callback = nullptr;
    QSplitter_DropEvent_Callback qsplitter_dropevent_callback = nullptr;
    QSplitter_ShowEvent_Callback qsplitter_showevent_callback = nullptr;
    QSplitter_HideEvent_Callback qsplitter_hideevent_callback = nullptr;
    QSplitter_NativeEvent_Callback qsplitter_nativeevent_callback = nullptr;
    QSplitter_Metric_Callback qsplitter_metric_callback = nullptr;
    QSplitter_InitPainter_Callback qsplitter_initpainter_callback = nullptr;
    QSplitter_Redirected_Callback qsplitter_redirected_callback = nullptr;
    QSplitter_SharedPainter_Callback qsplitter_sharedpainter_callback = nullptr;
    QSplitter_InputMethodEvent_Callback qsplitter_inputmethodevent_callback = nullptr;
    QSplitter_InputMethodQuery_Callback qsplitter_inputmethodquery_callback = nullptr;
    QSplitter_FocusNextPrevChild_Callback qsplitter_focusnextprevchild_callback = nullptr;
    QSplitter_EventFilter_Callback qsplitter_eventfilter_callback = nullptr;
    QSplitter_TimerEvent_Callback qsplitter_timerevent_callback = nullptr;
    QSplitter_CustomEvent_Callback qsplitter_customevent_callback = nullptr;
    QSplitter_ConnectNotify_Callback qsplitter_connectnotify_callback = nullptr;
    QSplitter_DisconnectNotify_Callback qsplitter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSplitter {
        using QSplitter::actionEvent;
        using QSplitter::changeEvent;
        using QSplitter::childEvent;
        using QSplitter::closeEvent;
        using QSplitter::connectNotify;
        using QSplitter::contextMenuEvent;
        using QSplitter::createHandle;
        using QSplitter::customEvent;
        using QSplitter::disconnectNotify;
        using QSplitter::dragEnterEvent;
        using QSplitter::dragLeaveEvent;
        using QSplitter::dragMoveEvent;
        using QSplitter::dropEvent;
        using QSplitter::enterEvent;
        using QSplitter::event;
        using QSplitter::focusInEvent;
        using QSplitter::focusNextPrevChild;
        using QSplitter::focusOutEvent;
        using QSplitter::hideEvent;
        using QSplitter::initPainter;
        using QSplitter::initStyleOption;
        using QSplitter::inputMethodEvent;
        using QSplitter::keyPressEvent;
        using QSplitter::keyReleaseEvent;
        using QSplitter::leaveEvent;
        using QSplitter::metric;
        using QSplitter::mouseDoubleClickEvent;
        using QSplitter::mouseMoveEvent;
        using QSplitter::mousePressEvent;
        using QSplitter::mouseReleaseEvent;
        using QSplitter::moveEvent;
        using QSplitter::nativeEvent;
        using QSplitter::paintEvent;
        using QSplitter::redirected;
        using QSplitter::resizeEvent;
        using QSplitter::sharedPainter;
        using QSplitter::showEvent;
        using QSplitter::tabletEvent;
        using QSplitter::timerEvent;
        using QSplitter::wheelEvent;
    };

    VirtualQSplitter(QWidget* parent) : QSplitter(parent) {};
    VirtualQSplitter() : QSplitter() {};
    VirtualQSplitter(Qt::Orientation param1) : QSplitter(param1) {};
    VirtualQSplitter(Qt::Orientation param1, QWidget* parent) : QSplitter(param1, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplitter_metaobject_callback) {
            QMetaObject* callback_ret = qsplitter_metaobject_callback(this);
            return callback_ret;
        }
        return QSplitter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplitter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsplitter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsplitter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitter_sizehint_callback) {
            QSize* callback_ret = qsplitter_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitter::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitter_minimumsizehint_callback) {
            QSize* callback_ret = qsplitter_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitter::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSplitterHandle* createHandle() override {
        if (qsplitter_createhandle_callback) {
            QSplitterHandle* callback_ret = qsplitter_createhandle_callback(this);
            return callback_ret;
        }
        return QSplitter::createHandle();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* param1) override {
        if (qsplitter_childevent_callback) {
            QChildEvent* cbval1 = param1;
            qsplitter_childevent_callback(this, cbval1);
            return;
        }
        QSplitter::childEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitter_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsplitter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitter::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitter_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qsplitter_resizeevent_callback(this, cbval1);
            return;
        }
        QSplitter::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitter_changeevent_callback) {
            QEvent* cbval1 = param1;
            qsplitter_changeevent_callback(this, cbval1);
            return;
        }
        QSplitter::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitter_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qsplitter_paintevent_callback(this, cbval1);
            return;
        }
        QSplitter::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsplitter_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qsplitter_initstyleoption_callback(this, cbval1);
            return;
        }
        QSplitter::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitter_devtype_callback) {
            int callback_ret = qsplitter_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitter_setvisible_callback) {
            bool cbval1 = visible;
            qsplitter_setvisible_callback(this, cbval1);
            return;
        }
        QSplitter::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitter_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsplitter_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitter_hasheightforwidth_callback) {
            bool callback_ret = qsplitter_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSplitter::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitter_paintengine_callback) {
            QPaintEngine* callback_ret = qsplitter_paintengine_callback(this);
            return callback_ret;
        }
        return QSplitter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qsplitter_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplitter_mousepressevent_callback(this, cbval1);
            return;
        }
        QSplitter::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsplitter_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplitter_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSplitter::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitter_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplitter_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSplitter::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsplitter_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplitter_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSplitter::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitter_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qsplitter_wheelevent_callback(this, cbval1);
            return;
        }
        QSplitter::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitter_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplitter_keypressevent_callback(this, cbval1);
            return;
        }
        QSplitter::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitter_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplitter_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSplitter::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitter_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplitter_focusinevent_callback(this, cbval1);
            return;
        }
        QSplitter::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitter_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplitter_focusoutevent_callback(this, cbval1);
            return;
        }
        QSplitter::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitter_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsplitter_enterevent_callback(this, cbval1);
            return;
        }
        QSplitter::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitter_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsplitter_leaveevent_callback(this, cbval1);
            return;
        }
        QSplitter::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitter_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsplitter_moveevent_callback(this, cbval1);
            return;
        }
        QSplitter::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitter_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsplitter_closeevent_callback(this, cbval1);
            return;
        }
        QSplitter::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitter_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qsplitter_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSplitter::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitter_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsplitter_tabletevent_callback(this, cbval1);
            return;
        }
        QSplitter::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitter_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsplitter_actionevent_callback(this, cbval1);
            return;
        }
        QSplitter::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitter_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qsplitter_dragenterevent_callback(this, cbval1);
            return;
        }
        QSplitter::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitter_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qsplitter_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSplitter::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitter_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qsplitter_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSplitter::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitter_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qsplitter_dropevent_callback(this, cbval1);
            return;
        }
        QSplitter::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitter_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsplitter_showevent_callback(this, cbval1);
            return;
        }
        QSplitter::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitter_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsplitter_hideevent_callback(this, cbval1);
            return;
        }
        QSplitter::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitter_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsplitter_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSplitter::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitter_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsplitter_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitter_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsplitter_initpainter_callback(this, cbval1);
            return;
        }
        QSplitter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitter_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsplitter_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitter_sharedpainter_callback) {
            QPainter* callback_ret = qsplitter_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSplitter::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitter_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qsplitter_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSplitter::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitter_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qsplitter_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitter::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitter_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsplitter_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitter::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsplitter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplitter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsplitter_timerevent_callback(this, cbval1);
            return;
        }
        QSplitter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitter_customevent_callback) {
            QEvent* cbval1 = event;
            qsplitter_customevent_callback(this, cbval1);
            return;
        }
        QSplitter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplitter_connectnotify_callback(this, cbval1);
            return;
        }
        QSplitter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplitter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSplitter::disconnectNotify(signal);
    }

    // Friend functions
    friend QSplitterHandle* QSplitter_SuperCreateHandle(QSplitter* self);
    friend void QSplitter_SuperChildEvent(QSplitter* self, QChildEvent* param1);
    friend bool QSplitter_SuperEvent(QSplitter* self, QEvent* param1);
    friend void QSplitter_SuperResizeEvent(QSplitter* self, QResizeEvent* param1);
    friend void QSplitter_SuperChangeEvent(QSplitter* self, QEvent* param1);
    friend void QSplitter_SuperPaintEvent(QSplitter* self, QPaintEvent* param1);
    friend void QSplitter_SuperInitStyleOption(const QSplitter* self, QStyleOptionFrame* option);
    friend void QSplitter_SuperMousePressEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseReleaseEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseDoubleClickEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseMoveEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperWheelEvent(QSplitter* self, QWheelEvent* event);
    friend void QSplitter_SuperKeyPressEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_SuperKeyReleaseEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_SuperFocusInEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_SuperFocusOutEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_SuperEnterEvent(QSplitter* self, QEnterEvent* event);
    friend void QSplitter_SuperLeaveEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_SuperMoveEvent(QSplitter* self, QMoveEvent* event);
    friend void QSplitter_SuperCloseEvent(QSplitter* self, QCloseEvent* event);
    friend void QSplitter_SuperContextMenuEvent(QSplitter* self, QContextMenuEvent* event);
    friend void QSplitter_SuperTabletEvent(QSplitter* self, QTabletEvent* event);
    friend void QSplitter_SuperActionEvent(QSplitter* self, QActionEvent* event);
    friend void QSplitter_SuperDragEnterEvent(QSplitter* self, QDragEnterEvent* event);
    friend void QSplitter_SuperDragMoveEvent(QSplitter* self, QDragMoveEvent* event);
    friend void QSplitter_SuperDragLeaveEvent(QSplitter* self, QDragLeaveEvent* event);
    friend void QSplitter_SuperDropEvent(QSplitter* self, QDropEvent* event);
    friend void QSplitter_SuperShowEvent(QSplitter* self, QShowEvent* event);
    friend void QSplitter_SuperHideEvent(QSplitter* self, QHideEvent* event);
    friend bool QSplitter_SuperNativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QSplitter_SuperMetric(const QSplitter* self, int param1);
    friend void QSplitter_SuperInitPainter(const QSplitter* self, QPainter* painter);
    friend QPaintDevice* QSplitter_SuperRedirected(const QSplitter* self, QPoint* offset);
    friend QPainter* QSplitter_SuperSharedPainter(const QSplitter* self);
    friend void QSplitter_SuperInputMethodEvent(QSplitter* self, QInputMethodEvent* param1);
    friend bool QSplitter_SuperFocusNextPrevChild(QSplitter* self, bool next);
    friend void QSplitter_SuperTimerEvent(QSplitter* self, QTimerEvent* event);
    friend void QSplitter_SuperCustomEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_SuperConnectNotify(QSplitter* self, const QMetaMethod* signal);
    friend void QSplitter_SuperDisconnectNotify(QSplitter* self, const QMetaMethod* signal);
};

// This class is a subclass of QSplitterHandle
class VirtualQSplitterHandle final : public QSplitterHandle {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSplitterHandle_MetaObject_Callback = QMetaObject* (*)(const QSplitterHandle*);
    using QSplitterHandle_Metacast_Callback = void* (*)(QSplitterHandle*, const char*);
    using QSplitterHandle_Metacall_Callback = int (*)(QSplitterHandle*, int, int, void**);
    using QSplitterHandle_SizeHint_Callback = QSize* (*)(const QSplitterHandle*);
    using QSplitterHandle_PaintEvent_Callback = void (*)(QSplitterHandle*, QPaintEvent*);
    using QSplitterHandle_MouseMoveEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MousePressEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MouseReleaseEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_ResizeEvent_Callback = void (*)(QSplitterHandle*, QResizeEvent*);
    using QSplitterHandle_Event_Callback = bool (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_DevType_Callback = int (*)(const QSplitterHandle*);
    using QSplitterHandle_SetVisible_Callback = void (*)(QSplitterHandle*, bool);
    using QSplitterHandle_MinimumSizeHint_Callback = QSize* (*)(const QSplitterHandle*);
    using QSplitterHandle_HeightForWidth_Callback = int (*)(const QSplitterHandle*, int);
    using QSplitterHandle_HasHeightForWidth_Callback = bool (*)(const QSplitterHandle*);
    using QSplitterHandle_PaintEngine_Callback = QPaintEngine* (*)(const QSplitterHandle*);
    using QSplitterHandle_MouseDoubleClickEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_WheelEvent_Callback = void (*)(QSplitterHandle*, QWheelEvent*);
    using QSplitterHandle_KeyPressEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_KeyReleaseEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_FocusInEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_FocusOutEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_EnterEvent_Callback = void (*)(QSplitterHandle*, QEnterEvent*);
    using QSplitterHandle_LeaveEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_MoveEvent_Callback = void (*)(QSplitterHandle*, QMoveEvent*);
    using QSplitterHandle_CloseEvent_Callback = void (*)(QSplitterHandle*, QCloseEvent*);
    using QSplitterHandle_ContextMenuEvent_Callback = void (*)(QSplitterHandle*, QContextMenuEvent*);
    using QSplitterHandle_TabletEvent_Callback = void (*)(QSplitterHandle*, QTabletEvent*);
    using QSplitterHandle_ActionEvent_Callback = void (*)(QSplitterHandle*, QActionEvent*);
    using QSplitterHandle_DragEnterEvent_Callback = void (*)(QSplitterHandle*, QDragEnterEvent*);
    using QSplitterHandle_DragMoveEvent_Callback = void (*)(QSplitterHandle*, QDragMoveEvent*);
    using QSplitterHandle_DragLeaveEvent_Callback = void (*)(QSplitterHandle*, QDragLeaveEvent*);
    using QSplitterHandle_DropEvent_Callback = void (*)(QSplitterHandle*, QDropEvent*);
    using QSplitterHandle_ShowEvent_Callback = void (*)(QSplitterHandle*, QShowEvent*);
    using QSplitterHandle_HideEvent_Callback = void (*)(QSplitterHandle*, QHideEvent*);
    using QSplitterHandle_NativeEvent_Callback = bool (*)(QSplitterHandle*, libqt_string, void*, intptr_t*);
    using QSplitterHandle_ChangeEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_Metric_Callback = int (*)(const QSplitterHandle*, int);
    using QSplitterHandle_InitPainter_Callback = void (*)(const QSplitterHandle*, QPainter*);
    using QSplitterHandle_Redirected_Callback = QPaintDevice* (*)(const QSplitterHandle*, QPoint*);
    using QSplitterHandle_SharedPainter_Callback = QPainter* (*)(const QSplitterHandle*);
    using QSplitterHandle_InputMethodEvent_Callback = void (*)(QSplitterHandle*, QInputMethodEvent*);
    using QSplitterHandle_InputMethodQuery_Callback = QVariant* (*)(const QSplitterHandle*, int);
    using QSplitterHandle_FocusNextPrevChild_Callback = bool (*)(QSplitterHandle*, bool);
    using QSplitterHandle_EventFilter_Callback = bool (*)(QSplitterHandle*, QObject*, QEvent*);
    using QSplitterHandle_TimerEvent_Callback = void (*)(QSplitterHandle*, QTimerEvent*);
    using QSplitterHandle_ChildEvent_Callback = void (*)(QSplitterHandle*, QChildEvent*);
    using QSplitterHandle_CustomEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_ConnectNotify_Callback = void (*)(QSplitterHandle*, QMetaMethod*);
    using QSplitterHandle_DisconnectNotify_Callback = void (*)(QSplitterHandle*, QMetaMethod*);
    using QSplitterHandle::closestLegalPosition;
    using QSplitterHandle::create;
    using QSplitterHandle::destroy;
    using QSplitterHandle::focusNextChild;
    using QSplitterHandle::focusPreviousChild;
    using QSplitterHandle::getDecodedMetricF;
    using QSplitterHandle::isSignalConnected;
    using QSplitterHandle::moveSplitter;
    using QSplitterHandle::receivers;
    using QSplitterHandle::sender;
    using QSplitterHandle::senderSignalIndex;
    using QSplitterHandle::updateMicroFocus;

    // Instance callback storage
    QSplitterHandle_MetaObject_Callback qsplitterhandle_metaobject_callback = nullptr;
    QSplitterHandle_Metacast_Callback qsplitterhandle_metacast_callback = nullptr;
    QSplitterHandle_Metacall_Callback qsplitterhandle_metacall_callback = nullptr;
    QSplitterHandle_SizeHint_Callback qsplitterhandle_sizehint_callback = nullptr;
    QSplitterHandle_PaintEvent_Callback qsplitterhandle_paintevent_callback = nullptr;
    QSplitterHandle_MouseMoveEvent_Callback qsplitterhandle_mousemoveevent_callback = nullptr;
    QSplitterHandle_MousePressEvent_Callback qsplitterhandle_mousepressevent_callback = nullptr;
    QSplitterHandle_MouseReleaseEvent_Callback qsplitterhandle_mousereleaseevent_callback = nullptr;
    QSplitterHandle_ResizeEvent_Callback qsplitterhandle_resizeevent_callback = nullptr;
    QSplitterHandle_Event_Callback qsplitterhandle_event_callback = nullptr;
    QSplitterHandle_DevType_Callback qsplitterhandle_devtype_callback = nullptr;
    QSplitterHandle_SetVisible_Callback qsplitterhandle_setvisible_callback = nullptr;
    QSplitterHandle_MinimumSizeHint_Callback qsplitterhandle_minimumsizehint_callback = nullptr;
    QSplitterHandle_HeightForWidth_Callback qsplitterhandle_heightforwidth_callback = nullptr;
    QSplitterHandle_HasHeightForWidth_Callback qsplitterhandle_hasheightforwidth_callback = nullptr;
    QSplitterHandle_PaintEngine_Callback qsplitterhandle_paintengine_callback = nullptr;
    QSplitterHandle_MouseDoubleClickEvent_Callback qsplitterhandle_mousedoubleclickevent_callback = nullptr;
    QSplitterHandle_WheelEvent_Callback qsplitterhandle_wheelevent_callback = nullptr;
    QSplitterHandle_KeyPressEvent_Callback qsplitterhandle_keypressevent_callback = nullptr;
    QSplitterHandle_KeyReleaseEvent_Callback qsplitterhandle_keyreleaseevent_callback = nullptr;
    QSplitterHandle_FocusInEvent_Callback qsplitterhandle_focusinevent_callback = nullptr;
    QSplitterHandle_FocusOutEvent_Callback qsplitterhandle_focusoutevent_callback = nullptr;
    QSplitterHandle_EnterEvent_Callback qsplitterhandle_enterevent_callback = nullptr;
    QSplitterHandle_LeaveEvent_Callback qsplitterhandle_leaveevent_callback = nullptr;
    QSplitterHandle_MoveEvent_Callback qsplitterhandle_moveevent_callback = nullptr;
    QSplitterHandle_CloseEvent_Callback qsplitterhandle_closeevent_callback = nullptr;
    QSplitterHandle_ContextMenuEvent_Callback qsplitterhandle_contextmenuevent_callback = nullptr;
    QSplitterHandle_TabletEvent_Callback qsplitterhandle_tabletevent_callback = nullptr;
    QSplitterHandle_ActionEvent_Callback qsplitterhandle_actionevent_callback = nullptr;
    QSplitterHandle_DragEnterEvent_Callback qsplitterhandle_dragenterevent_callback = nullptr;
    QSplitterHandle_DragMoveEvent_Callback qsplitterhandle_dragmoveevent_callback = nullptr;
    QSplitterHandle_DragLeaveEvent_Callback qsplitterhandle_dragleaveevent_callback = nullptr;
    QSplitterHandle_DropEvent_Callback qsplitterhandle_dropevent_callback = nullptr;
    QSplitterHandle_ShowEvent_Callback qsplitterhandle_showevent_callback = nullptr;
    QSplitterHandle_HideEvent_Callback qsplitterhandle_hideevent_callback = nullptr;
    QSplitterHandle_NativeEvent_Callback qsplitterhandle_nativeevent_callback = nullptr;
    QSplitterHandle_ChangeEvent_Callback qsplitterhandle_changeevent_callback = nullptr;
    QSplitterHandle_Metric_Callback qsplitterhandle_metric_callback = nullptr;
    QSplitterHandle_InitPainter_Callback qsplitterhandle_initpainter_callback = nullptr;
    QSplitterHandle_Redirected_Callback qsplitterhandle_redirected_callback = nullptr;
    QSplitterHandle_SharedPainter_Callback qsplitterhandle_sharedpainter_callback = nullptr;
    QSplitterHandle_InputMethodEvent_Callback qsplitterhandle_inputmethodevent_callback = nullptr;
    QSplitterHandle_InputMethodQuery_Callback qsplitterhandle_inputmethodquery_callback = nullptr;
    QSplitterHandle_FocusNextPrevChild_Callback qsplitterhandle_focusnextprevchild_callback = nullptr;
    QSplitterHandle_EventFilter_Callback qsplitterhandle_eventfilter_callback = nullptr;
    QSplitterHandle_TimerEvent_Callback qsplitterhandle_timerevent_callback = nullptr;
    QSplitterHandle_ChildEvent_Callback qsplitterhandle_childevent_callback = nullptr;
    QSplitterHandle_CustomEvent_Callback qsplitterhandle_customevent_callback = nullptr;
    QSplitterHandle_ConnectNotify_Callback qsplitterhandle_connectnotify_callback = nullptr;
    QSplitterHandle_DisconnectNotify_Callback qsplitterhandle_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSplitterHandle {
        using QSplitterHandle::actionEvent;
        using QSplitterHandle::changeEvent;
        using QSplitterHandle::childEvent;
        using QSplitterHandle::closeEvent;
        using QSplitterHandle::connectNotify;
        using QSplitterHandle::contextMenuEvent;
        using QSplitterHandle::customEvent;
        using QSplitterHandle::disconnectNotify;
        using QSplitterHandle::dragEnterEvent;
        using QSplitterHandle::dragLeaveEvent;
        using QSplitterHandle::dragMoveEvent;
        using QSplitterHandle::dropEvent;
        using QSplitterHandle::enterEvent;
        using QSplitterHandle::event;
        using QSplitterHandle::focusInEvent;
        using QSplitterHandle::focusNextPrevChild;
        using QSplitterHandle::focusOutEvent;
        using QSplitterHandle::hideEvent;
        using QSplitterHandle::initPainter;
        using QSplitterHandle::inputMethodEvent;
        using QSplitterHandle::keyPressEvent;
        using QSplitterHandle::keyReleaseEvent;
        using QSplitterHandle::leaveEvent;
        using QSplitterHandle::metric;
        using QSplitterHandle::mouseDoubleClickEvent;
        using QSplitterHandle::mouseMoveEvent;
        using QSplitterHandle::mousePressEvent;
        using QSplitterHandle::mouseReleaseEvent;
        using QSplitterHandle::moveEvent;
        using QSplitterHandle::nativeEvent;
        using QSplitterHandle::paintEvent;
        using QSplitterHandle::redirected;
        using QSplitterHandle::resizeEvent;
        using QSplitterHandle::sharedPainter;
        using QSplitterHandle::showEvent;
        using QSplitterHandle::tabletEvent;
        using QSplitterHandle::timerEvent;
        using QSplitterHandle::wheelEvent;
    };

    VirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent) : QSplitterHandle(o, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplitterhandle_metaobject_callback) {
            QMetaObject* callback_ret = qsplitterhandle_metaobject_callback(this);
            return callback_ret;
        }
        return QSplitterHandle::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplitterhandle_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsplitterhandle_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitterhandle_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsplitterhandle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitterhandle_sizehint_callback) {
            QSize* callback_ret = qsplitterhandle_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitterHandle::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitterhandle_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qsplitterhandle_paintevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsplitterhandle_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsplitterhandle_mousepressevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsplitterhandle_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitterhandle_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qsplitterhandle_resizeevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitterhandle_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsplitterhandle_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitterhandle_devtype_callback) {
            int callback_ret = qsplitterhandle_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitterhandle_setvisible_callback) {
            bool cbval1 = visible;
            qsplitterhandle_setvisible_callback(this, cbval1);
            return;
        }
        QSplitterHandle::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitterhandle_minimumsizehint_callback) {
            QSize* callback_ret = qsplitterhandle_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitterHandle::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitterhandle_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsplitterhandle_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitterhandle_hasheightforwidth_callback) {
            bool callback_ret = qsplitterhandle_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSplitterHandle::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitterhandle_paintengine_callback) {
            QPaintEngine* callback_ret = qsplitterhandle_paintengine_callback(this);
            return callback_ret;
        }
        return QSplitterHandle::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitterhandle_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qsplitterhandle_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitterhandle_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qsplitterhandle_wheelevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplitterhandle_keypressevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsplitterhandle_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplitterhandle_focusinevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qsplitterhandle_focusoutevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitterhandle_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsplitterhandle_enterevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitterhandle_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsplitterhandle_leaveevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitterhandle_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsplitterhandle_moveevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitterhandle_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsplitterhandle_closeevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitterhandle_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qsplitterhandle_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitterhandle_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsplitterhandle_tabletevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitterhandle_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsplitterhandle_actionevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitterhandle_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qsplitterhandle_dragenterevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitterhandle_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qsplitterhandle_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitterhandle_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qsplitterhandle_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitterhandle_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qsplitterhandle_dropevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitterhandle_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsplitterhandle_showevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitterhandle_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsplitterhandle_hideevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitterhandle_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsplitterhandle_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSplitterHandle::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitterhandle_changeevent_callback) {
            QEvent* cbval1 = param1;
            qsplitterhandle_changeevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitterhandle_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsplitterhandle_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitterhandle_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsplitterhandle_initpainter_callback(this, cbval1);
            return;
        }
        QSplitterHandle::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitterhandle_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsplitterhandle_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitterhandle_sharedpainter_callback) {
            QPainter* callback_ret = qsplitterhandle_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSplitterHandle::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitterhandle_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qsplitterhandle_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitterhandle_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qsplitterhandle_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplitterHandle::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitterhandle_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsplitterhandle_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitterhandle_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsplitterhandle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplitterHandle::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitterhandle_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsplitterhandle_timerevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplitterhandle_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsplitterhandle_childevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitterhandle_customevent_callback) {
            QEvent* cbval1 = event;
            qsplitterhandle_customevent_callback(this, cbval1);
            return;
        }
        QSplitterHandle::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplitterhandle_connectnotify_callback(this, cbval1);
            return;
        }
        QSplitterHandle::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplitterhandle_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSplitterHandle::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSplitterHandle_SuperPaintEvent(QSplitterHandle* self, QPaintEvent* param1);
    friend void QSplitterHandle_SuperMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperMousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
    friend bool QSplitterHandle_SuperEvent(QSplitterHandle* self, QEvent* param1);
    friend void QSplitterHandle_SuperMouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event);
    friend void QSplitterHandle_SuperWheelEvent(QSplitterHandle* self, QWheelEvent* event);
    friend void QSplitterHandle_SuperKeyPressEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_SuperKeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_SuperFocusInEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_SuperFocusOutEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_SuperEnterEvent(QSplitterHandle* self, QEnterEvent* event);
    friend void QSplitterHandle_SuperLeaveEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_SuperMoveEvent(QSplitterHandle* self, QMoveEvent* event);
    friend void QSplitterHandle_SuperCloseEvent(QSplitterHandle* self, QCloseEvent* event);
    friend void QSplitterHandle_SuperContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event);
    friend void QSplitterHandle_SuperTabletEvent(QSplitterHandle* self, QTabletEvent* event);
    friend void QSplitterHandle_SuperActionEvent(QSplitterHandle* self, QActionEvent* event);
    friend void QSplitterHandle_SuperDragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event);
    friend void QSplitterHandle_SuperDragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event);
    friend void QSplitterHandle_SuperDragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event);
    friend void QSplitterHandle_SuperDropEvent(QSplitterHandle* self, QDropEvent* event);
    friend void QSplitterHandle_SuperShowEvent(QSplitterHandle* self, QShowEvent* event);
    friend void QSplitterHandle_SuperHideEvent(QSplitterHandle* self, QHideEvent* event);
    friend bool QSplitterHandle_SuperNativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSplitterHandle_SuperChangeEvent(QSplitterHandle* self, QEvent* param1);
    friend int QSplitterHandle_SuperMetric(const QSplitterHandle* self, int param1);
    friend void QSplitterHandle_SuperInitPainter(const QSplitterHandle* self, QPainter* painter);
    friend QPaintDevice* QSplitterHandle_SuperRedirected(const QSplitterHandle* self, QPoint* offset);
    friend QPainter* QSplitterHandle_SuperSharedPainter(const QSplitterHandle* self);
    friend void QSplitterHandle_SuperInputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1);
    friend bool QSplitterHandle_SuperFocusNextPrevChild(QSplitterHandle* self, bool next);
    friend void QSplitterHandle_SuperTimerEvent(QSplitterHandle* self, QTimerEvent* event);
    friend void QSplitterHandle_SuperChildEvent(QSplitterHandle* self, QChildEvent* event);
    friend void QSplitterHandle_SuperCustomEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_SuperConnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
    friend void QSplitterHandle_SuperDisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
};

#endif
